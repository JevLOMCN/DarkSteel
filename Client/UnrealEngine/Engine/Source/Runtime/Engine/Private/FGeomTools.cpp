// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// Buid2DPolysFromEdges @ 147c39750

void __cdecl
FGeomTools::Buid2DPolysFromEdges
          (TArray<FUtilPoly2D,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FUtilEdge2D,TSizedDefaultAllocator<32>_> *param_2,FColor *param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  FUtilPoly2D local_118;
  TArray<FUtilEdge2D,TSizedDefaultAllocator<32>_> local_108;
  TVector2<double>_u_0 local_f8;
  double local_e8;
  double dStack_e0;
  uint local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  double local_88;
  double dStack_80;
  uint local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  FUtilEdge2D local_58 [2];
  
  local_108.ArrayNum = param_2->ArrayNum;
  lVar14 = (longlong)local_108.ArrayNum;
  pFVar12 = (param_2->AllocatorInstance).Data;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_108.ArrayNum == 0) {
    local_108.ArrayMax = 0;
    iVar9 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,local_108.ArrayNum,0,&local_108.AllocatorInstance,local_108.ArrayNum,
               &local_108.ArrayMax);
    memcpy(local_108.AllocatorInstance.Data,pFVar12,lVar14 << 5);
    iVar9 = local_108.ArrayNum;
  }
  while( true ) {
    if (iVar9 < 1) {
      if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
      return;
    }
    local_118.Verts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Verts.ArrayNum = 0;
    local_118.Verts.ArrayMax = 0;
    if ((iVar9 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       iVar9 = local_108.ArrayNum, bVar7)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar12 = local_108.AllocatorInstance.Data + (longlong)(iVar9 + -1) * 0x20;
    dVar2 = *(double *)pFVar12;
    dVar3 = *(double *)(pFVar12 + 8);
    uVar4 = *(undefined8 *)(pFVar12 + 0x10);
    uVar5 = *(undefined8 *)(pFVar12 + 0x18);
    iVar8 = (iVar9 - (iVar9 + -1)) + -1;
    if (iVar8 != 0) {
      memmove(pFVar12,pFVar12 + 0x20,(longlong)iVar8 << 5);
      iVar9 = local_108.ArrayNum;
    }
    local_108.ArrayNum = iVar9 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,&local_108.AllocatorInstance,local_108.ArrayNum,&local_108.ArrayMax);
    local_d8 = (param_3->field0_0x0).Bits;
    uStack_c0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    local_e8 = dVar2;
    dStack_e0 = dVar3;
    if (((local_118.Verts.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e8) &&
        ((FScriptContainerElement *)&local_e8 <
         local_118.Verts.AllocatorInstance.Data + (longlong)local_118.Verts.ArrayMax * 0x30)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar9 = local_118.Verts.ArrayNum;
    if (local_118.Verts.ArrayNum == local_118.Verts.ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,(ForAnyElementType *)&local_118,&local_118.Verts.ArrayMax);
    }
    uVar10 = iVar9 + 1;
    uStack_90 = 0;
    lVar14 = (longlong)iVar9;
    *(double *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30) = local_e8;
    *(double *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30 + 8) = dStack_e0;
    *(ulonglong *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30 + 0x10) =
         CONCAT44(uStack_d4,local_d8);
    *(undefined8 *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30 + 0x10 + 8) = uStack_d0;
    *(undefined8 *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30 + 0x20) = uStack_c8;
    *(ulonglong *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30 + 0x20 + 8) =
         CONCAT71(uStack_bf,uStack_c0);
    local_a8 = (param_3->field0_0x0).Bits;
    uStack_a0 = 0;
    uStack_98 = 0;
    local_b8 = uVar4;
    uStack_b0 = uVar5;
    local_118.Verts.ArrayNum = uVar10;
    if (((local_118.Verts.AllocatorInstance.Data <= (FScriptContainerElement *)&local_b8) &&
        ((FScriptContainerElement *)&local_b8 <
         local_118.Verts.AllocatorInstance.Data + (longlong)local_118.Verts.ArrayMax * 0x30)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    uVar10 = local_118.Verts.ArrayNum;
    if (local_118.Verts.ArrayNum == local_118.Verts.ArrayMax) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,(ForAnyElementType *)&local_118,&local_118.Verts.ArrayMax);
    }
    lVar14 = (longlong)(int)uVar10;
    local_118.Verts.ArrayNum = uVar10 + 1;
    *(undefined8 *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30) = local_b8;
    *(undefined8 *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30 + 8) = uStack_b0;
    *(ulonglong *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30 + 0x10) =
         CONCAT44(uStack_a4,local_a8);
    *(undefined8 *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30 + 0x10 + 8) = uStack_a0;
    *(undefined8 *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30 + 0x20) = uStack_98;
    *(ulonglong *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30 + 0x20 + 8) =
         CONCAT71(uStack_8f,uStack_90);
    uVar11 = 0;
    if ((int)uVar10 < (int)(uVar10 + 1)) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_f8._s_0.X =
         (double)*(undefined8 *)
                  (local_118.Verts.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x30);
    local_f8._s_0.Y =
         (double)*(undefined8 *)
                  (local_118.Verts.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x30 + 8);
    bVar7 = FindNextEdge(local_58,(TVector2<double> *)&local_f8._s_0,&local_108);
    uVar10 = 0;
    if (bVar7) {
      do {
        local_78 = (param_3->field0_0x0).Bits;
        uStack_60 = 0;
        local_88 = (double)local_58[0].V1.field0_0x0._0_8_;
        dStack_80 = (double)local_58[0].V1.field0_0x0._8_8_;
        uStack_70 = 0;
        uStack_68 = 0;
        if (((local_118.Verts.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 <
             local_118.Verts.AllocatorInstance.Data + (longlong)local_118.Verts.ArrayMax * 0x30)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar11 = local_118.Verts.ArrayNum;
        if (local_118.Verts.ArrayNum == local_118.Verts.ArrayMax) {
          uVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,(ForAnyElementType *)&local_118,&local_118.Verts.ArrayMax);
        }
        lVar14 = (longlong)(int)uVar11;
        local_118.Verts.ArrayNum = uVar11 + 1;
        *(double *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30) = local_88;
        *(double *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30 + 8) = dStack_80;
        *(ulonglong *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30 + 0x10) =
             CONCAT44(uStack_74,local_78);
        *(undefined8 *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30 + 0x10 + 8) =
             uStack_70;
        *(undefined8 *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30 + 0x20) = uStack_68;
        *(ulonglong *)(local_118.Verts.AllocatorInstance.Data + lVar14 * 0x30 + 0x20 + 8) =
             CONCAT71(uStack_5f,uStack_60);
        uVar13 = uVar10;
        if ((int)uVar11 < (int)(uVar11 + 1)) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_f8._s_0.X =
             (double)*(undefined8 *)
                      (local_118.Verts.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x30);
        local_f8._s_0.Y =
             (double)*(undefined8 *)
                      (local_118.Verts.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x30 + 8);
        bVar7 = FindNextEdge(local_58,(TVector2<double> *)&local_f8._s_0,&local_108);
      } while (bVar7);
    }
    if (local_118.Verts.ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FVar6.Data = local_118.Verts.AllocatorInstance.Data;
    uVar13 = local_118.Verts.ArrayNum - 1;
    uVar11 = uVar10;
    if ((int)uVar13 < local_118.Verts.ArrayNum) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    iVar9 = local_118.Verts.ArrayNum;
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar9 = local_118.Verts.ArrayNum;
    }
    dVar2 = *(double *)FVar6.Data -
            *(double *)(local_118.Verts.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30);
    dVar3 = *(double *)(FVar6.Data + 8) -
            *(double *)(local_118.Verts.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30 + 8);
    if ((3 < iVar9) &&
       ((float)(dVar2 * dVar2 + dVar3 * dVar3) < EdgeMatchTolerance * EdgeMatchTolerance)) {
      uVar11 = iVar9 - 1;
      if ((int)uVar11 < iVar9) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar9 = local_118.Verts.ArrayNum;
      }
      iVar8 = (iVar9 - uVar11) + -1;
      if (iVar8 != 0) {
        memmove(local_118.Verts.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x30,
                local_118.Verts.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x30 + 0x30,
                (longlong)iVar8 * 0x30);
        iVar9 = local_118.Verts.ArrayNum;
      }
      local_118.Verts.ArrayNum = iVar9 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,(ForAnyElementType *)&local_118,iVar9 + -1,&local_118.Verts.ArrayMax);
      FixPolyWinding(&local_118);
      pFVar12 = (param_1->AllocatorInstance).Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 < pFVar12 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == param_1->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      FVar6.Data = local_118.Verts.AllocatorInstance.Data;
      pFVar12 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      param_1->ArrayNum = iVar9 + 1;
      *(undefined8 *)&pFVar12->field_0x0 = 0;
      lVar14 = (longlong)local_118.Verts.ArrayNum;
      *(int *)&pFVar12[8].field_0x0 = local_118.Verts.ArrayNum;
      if (local_118.Verts.ArrayNum == 0) {
        *(int *)(pFVar12 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,local_118.Verts.ArrayNum,0,(ForAnyElementType *)pFVar12,
                   local_118.Verts.ArrayNum,(int *)(pFVar12 + 0xc));
        memcpy(*(void **)&pFVar12->field_0x0,FVar6.Data,lVar14 * 0x30);
      }
    }
    iVar9 = local_108.ArrayNum;
    if (local_118.Verts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Verts.AllocatorInstance.Data);
      iVar9 = local_108.ArrayNum;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ClipMeshWithPlane @ 147c3c8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGeomTools::ClipMeshWithPlane
          (TArray<FClipSMTriangle,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FUtilEdge3D,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FClipSMTriangle,TSizedDefaultAllocator<32>_> *param_3,TPlane<double> *param_4)

{
  TVector<float>_u_0 *pTVar1;
  TVector<float>_u_0 *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  undefined8 uVar8;
  float fVar9;
  TArray<FUtilEdge3D,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FClipSMTriangle,TSizedDefaultAllocator<32>_> *pTVar11;
  TPlane<double> *pTVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FClipSMVertex *pFVar17;
  longlong lVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_b18 [32];
  TVector<float>_u_0 *local_af8;
  TVector<float>_u_0 *local_af0;
  longlong local_ae8;
  longlong local_ae0;
  undefined8 local_ad8;
  ForAnyElementType local_ac8;
  int local_ac0;
  int local_abc;
  int local_ab8;
  uint local_ab4;
  TVector<float>_u_0 local_ab0;
  undefined4 uStack_aa4;
  undefined4 uStack_aa0;
  float fStack_a9c;
  FScriptContainerElement *local_a98;
  longlong local_a90;
  TArray<FUtilEdge3D,TSizedDefaultAllocator<32>_> *local_a88;
  TArray<FClipSMTriangle,TSizedDefaultAllocator<32>_> *local_a80;
  TPlane<double> *local_a78;
  FClipSMVertex local_a70;
  undefined1 local_9b8 [16];
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  double local_988;
  double dStack_980;
  double local_978;
  double dStack_970;
  double local_968;
  double dStack_960;
  double local_958;
  double dStack_950;
  double local_948;
  double dStack_940;
  double local_938;
  double dStack_930;
  double local_928;
  double dStack_920;
  double local_918;
  double dStack_910;
  undefined8 local_908;
  TVector<float>_u_0 local_8f8;
  undefined1 local_8ec;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_98;
  
  fVar9 = __real_3f800000;
  local_98 = __security_cookie.value ^ (ulonglong)auStack_b18;
  local_ab4 = 0;
  iVar14 = param_3->ArrayNum;
  if (0 < iVar14) {
    local_a90 = 0;
    local_a88 = param_2;
    local_a80 = param_3;
    local_a78 = param_4;
    do {
      pTVar12 = local_a78;
      pTVar11 = local_a80;
      lVar18 = local_a90;
      iVar19 = 0;
      uVar21 = 0;
      if ((int)local_ab4 < iVar14) {
        uVar21 = ~local_ab4 >> 0x1f;
      }
      if (uVar21 == 0) {
        local_af8 = (TVector<float>_u_0 *)(longlong)(int)local_ab4;
        local_af0 = (TVector<float>_u_0 *)(longlong)iVar14;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      dVar3 = pTVar12->W;
      dVar4 = (double)pTVar12->_padding_;
      dVar5 = (double)pTVar12->_padding_;
      dVar6 = (double)pTVar12->_padding_;
      pFVar16 = (pTVar11->AllocatorInstance).Data + lVar18;
      local_ab8 = 0;
      pFVar17 = (FClipSMVertex *)(pFVar16 + 0x630);
      pTVar1 = (TVector<float>_u_0 *)(pFVar16 + 0x6e8);
      pTVar2 = (TVector<float>_u_0 *)(pFVar16 + 0x7a0);
      fVar25 = (float)(((double)*(float *)(pFVar16 + 0x634) * dVar5 +
                        (double)(pFVar17->Pos).field0_0x0._s_0.X * dVar4 +
                       (double)*(float *)(pFVar16 + 0x638) * dVar6) - dVar3);
      fVar24 = (float)(((double)*(float *)(pFVar16 + 0x6ec) * dVar5 +
                        (double)(((TVector<float> *)&(pTVar1->_s_0).X)->field0_0x0)._s_0.X * dVar4 +
                       (double)*(float *)(pFVar16 + 0x6f0) * dVar6) - dVar3);
      local_ac8.Data = (FScriptContainerElement *)0x0;
      local_ac0 = 0;
      local_abc = 0;
      fVar23 = (float)(((double)*(float *)(pFVar16 + 0x7a4) * dVar5 +
                        (double)(((TVector<float> *)&(pTVar2->_s_0).X)->field0_0x0)._s_0.X * dVar4 +
                       (double)*(float *)(pFVar16 + 0x7a8) * dVar6) - dVar3);
      local_a98 = pFVar16;
      if (fVar25 < 0.0) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8b8,&local_ac8,&local_abc);
        local_ac0 = iVar14 + 1;
        uVar8 = *(undefined8 *)(pFVar16 + 0x638);
        pFVar20 = local_ac8.Data + (longlong)iVar14 * 0xb8;
        *(undefined8 *)&pFVar20->field_0x0 = *(undefined8 *)&(pFVar17->Pos).field0_0x0;
        *(undefined8 *)(pFVar20 + 8) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x648);
        *(undefined8 *)(pFVar20 + 0x10) = *(undefined8 *)(pFVar16 + 0x640);
        *(undefined8 *)(pFVar20 + 0x18) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x658);
        *(undefined8 *)(pFVar20 + 0x20) = *(undefined8 *)(pFVar16 + 0x650);
        *(undefined8 *)(pFVar20 + 0x28) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x668);
        *(undefined8 *)(pFVar20 + 0x30) = *(undefined8 *)(pFVar16 + 0x660);
        *(undefined8 *)(pFVar20 + 0x38) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x678);
        *(undefined8 *)(pFVar20 + 0x40) = *(undefined8 *)(pFVar16 + 0x670);
        *(undefined8 *)(pFVar20 + 0x48) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x688);
        *(undefined8 *)(pFVar20 + 0x50) = *(undefined8 *)(pFVar16 + 0x680);
        *(undefined8 *)(pFVar20 + 0x58) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x698);
        *(undefined8 *)(pFVar20 + 0x60) = *(undefined8 *)(pFVar16 + 0x690);
        *(undefined8 *)(pFVar20 + 0x68) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x6a8);
        *(undefined8 *)(pFVar20 + 0x70) = *(undefined8 *)(pFVar16 + 0x6a0);
        *(undefined8 *)(pFVar20 + 0x78) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x6b8);
        *(undefined8 *)(pFVar20 + 0x80) = *(undefined8 *)(pFVar16 + 0x6b0);
        *(undefined8 *)(pFVar20 + 0x88) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x6c8);
        *(undefined8 *)(pFVar20 + 0x90) = *(undefined8 *)(pFVar16 + 0x6c0);
        *(undefined8 *)(pFVar20 + 0x98) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x6d8);
        *(undefined8 *)(pFVar20 + 0xa0) = *(undefined8 *)(pFVar16 + 0x6d0);
        *(undefined8 *)(pFVar20 + 0xa8) = uVar8;
        *(undefined8 *)(pFVar20 + 0xb0) = *(undefined8 *)(pFVar16 + 0x6e0);
      }
      if (fVar25 < 0.0 != fVar24 < 0.0) {
        fVar22 = fVar25 / (fVar25 - fVar24);
        if (fVar9 <= fVar22) {
          fVar22 = fVar9;
        }
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        pFVar17 = InterpolateVert(&local_a70,pFVar17,(FClipSMVertex *)&pTVar1->_s_0,fVar22);
        local_9b8._0_8_ = *(undefined8 *)&(pFVar17->Pos).field0_0x0;
        local_9b8._8_8_ = *(undefined8 *)((longlong)&(pFVar17->Pos).field0_0x0 + 8);
        local_9a8 = *(undefined8 *)((longlong)&(pFVar17->TangentX).field0_0x0 + 4);
        uStack_9a0 = *(undefined8 *)&(pFVar17->TangentY).field0_0x0;
        local_998 = *(undefined8 *)((longlong)&(pFVar17->TangentY).field0_0x0 + 8);
        uStack_990 = *(undefined8 *)((longlong)&(pFVar17->TangentZ).field0_0x0 + 4);
        local_988 = pFVar17->UVs[0].field0_0x0._s_0.X;
        dStack_980 = pFVar17->UVs[0].field0_0x0._s_0.Y;
        local_978 = pFVar17->UVs[1].field0_0x0._s_0.X;
        dStack_970 = pFVar17->UVs[1].field0_0x0._s_0.Y;
        local_968 = pFVar17->UVs[2].field0_0x0._s_0.X;
        dStack_960 = pFVar17->UVs[2].field0_0x0._s_0.Y;
        local_958 = pFVar17->UVs[3].field0_0x0._s_0.X;
        dStack_950 = pFVar17->UVs[3].field0_0x0._s_0.Y;
        local_948 = pFVar17->UVs[4].field0_0x0._s_0.X;
        dStack_940 = pFVar17->UVs[4].field0_0x0._s_0.Y;
        local_938 = pFVar17->UVs[5].field0_0x0._s_0.X;
        dStack_930 = pFVar17->UVs[5].field0_0x0._s_0.Y;
        local_928 = pFVar17->UVs[6].field0_0x0._s_0.X;
        dStack_920 = pFVar17->UVs[6].field0_0x0._s_0.Y;
        local_918 = pFVar17->UVs[7].field0_0x0._s_0.X;
        dStack_910 = pFVar17->UVs[7].field0_0x0._s_0.Y;
        local_908 = *(undefined8 *)&pFVar17->Color;
        if ((local_ac8.Data <= (TVector<float>_u_0 *)local_9b8) &&
           ((FScriptContainerElement *)local_9b8 < local_ac8.Data + (longlong)local_abc * 0xb8)) {
          local_ae0 = (longlong)local_ac0;
          local_ad8 = 0xb8;
          local_af8 = (TVector<float>_u_0 *)local_9b8;
          local_af0 = (TVector<float>_u_0 *)local_ac8.Data;
          local_ae8 = (longlong)local_abc;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (local_ac0 == local_abc) {
          local_ac0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x8b8,&local_ac8,&local_abc);
        }
        pFVar20 = local_ac8.Data + (longlong)local_ac0 * 0xb8;
        iVar19 = 1;
        local_ab8 = 1;
        *(undefined8 *)&pFVar20->field_0x0 = local_9b8._0_8_;
        *(undefined8 *)(pFVar20 + 8) = local_9b8._8_8_;
        *(undefined8 *)(pFVar20 + 0x10) = local_9a8;
        *(undefined8 *)(pFVar20 + 0x18) = uStack_9a0;
        *(undefined8 *)(pFVar20 + 0x20) = local_998;
        *(undefined8 *)(pFVar20 + 0x28) = uStack_990;
        *(double *)(pFVar20 + 0x30) = local_988;
        *(double *)(pFVar20 + 0x38) = dStack_980;
        *(double *)(pFVar20 + 0x40) = local_978;
        *(double *)(pFVar20 + 0x48) = dStack_970;
        *(double *)(pFVar20 + 0x50) = local_968;
        *(double *)(pFVar20 + 0x58) = dStack_960;
        *(double *)(pFVar20 + 0x60) = local_958;
        *(double *)(pFVar20 + 0x68) = dStack_950;
        *(double *)(pFVar20 + 0x70) = local_948;
        *(double *)(pFVar20 + 0x78) = dStack_940;
        *(double *)(pFVar20 + 0x80) = local_938;
        *(double *)(pFVar20 + 0x88) = dStack_930;
        *(double *)(pFVar20 + 0x90) = local_928;
        *(double *)(pFVar20 + 0x98) = dStack_920;
        *(double *)(pFVar20 + 0xa0) = local_918;
        *(double *)(pFVar20 + 0xa8) = dStack_910;
        *(undefined8 *)(pFVar20 + 0xb0) = local_908;
        local_ab0._0_8_ = local_9b8._0_8_;
        local_ab0._s_0.Z = (float)local_9b8._8_4_;
        local_ac0 = local_ac0 + 1;
      }
      if (fVar24 < 0.0) {
        if ((local_ac8.Data <= pTVar1) &&
           (pTVar1 < (TVector<float>_u_0 *)(local_ac8.Data + (longlong)local_abc * 0xb8))) {
          local_ad8 = 0xb8;
          local_ae0 = (longlong)local_ac0;
          local_af0 = (TVector<float>_u_0 *)local_ac8.Data;
          local_af8 = pTVar1;
          local_ae8 = (longlong)local_abc;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (local_ac0 == local_abc) {
          local_ac0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x8b8,&local_ac8,&local_abc);
        }
        lVar18 = (longlong)local_ac0;
        local_ac0 = local_ac0 + 1;
        uVar8 = *(undefined8 *)(pFVar16 + 0x6f0);
        pFVar20 = local_ac8.Data + lVar18 * 0xb8;
        *(undefined8 *)&pFVar20->field_0x0 =
             *(undefined8 *)&((TVector<float> *)&(pTVar1->_s_0).X)->field0_0x0;
        *(undefined8 *)(pFVar20 + 8) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x700);
        *(undefined8 *)(pFVar20 + 0x10) = *(undefined8 *)(pFVar16 + 0x6f8);
        *(undefined8 *)(pFVar20 + 0x18) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x710);
        *(undefined8 *)(pFVar20 + 0x20) = *(undefined8 *)(pFVar16 + 0x708);
        *(undefined8 *)(pFVar20 + 0x28) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x720);
        *(undefined8 *)(pFVar20 + 0x30) = *(undefined8 *)(pFVar16 + 0x718);
        *(undefined8 *)(pFVar20 + 0x38) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x730);
        *(undefined8 *)(pFVar20 + 0x40) = *(undefined8 *)(pFVar16 + 0x728);
        *(undefined8 *)(pFVar20 + 0x48) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x740);
        *(undefined8 *)(pFVar20 + 0x50) = *(undefined8 *)(pFVar16 + 0x738);
        *(undefined8 *)(pFVar20 + 0x58) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x750);
        *(undefined8 *)(pFVar20 + 0x60) = *(undefined8 *)(pFVar16 + 0x748);
        *(undefined8 *)(pFVar20 + 0x68) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x760);
        *(undefined8 *)(pFVar20 + 0x70) = *(undefined8 *)(pFVar16 + 0x758);
        *(undefined8 *)(pFVar20 + 0x78) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x770);
        *(undefined8 *)(pFVar20 + 0x80) = *(undefined8 *)(pFVar16 + 0x768);
        *(undefined8 *)(pFVar20 + 0x88) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x780);
        *(undefined8 *)(pFVar20 + 0x90) = *(undefined8 *)(pFVar16 + 0x778);
        *(undefined8 *)(pFVar20 + 0x98) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x790);
        *(undefined8 *)(pFVar20 + 0xa0) = *(undefined8 *)(pFVar16 + 0x788);
        *(undefined8 *)(pFVar20 + 0xa8) = uVar8;
        *(undefined8 *)(pFVar20 + 0xb0) = *(undefined8 *)(pFVar16 + 0x798);
        iVar19 = local_ab8;
      }
      if (fVar24 < 0.0 != fVar23 < 0.0) {
        fVar24 = fVar24 / (fVar24 - fVar23);
        if (fVar9 <= fVar24) {
          fVar24 = fVar9;
        }
        if (fVar24 <= 0.0) {
          fVar24 = 0.0;
        }
        pFVar17 = InterpolateVert(&local_a70,(FClipSMVertex *)&pTVar1->_s_0,
                                  (FClipSMVertex *)&pTVar2->_s_0,fVar24);
        local_9b8._0_8_ = *(undefined8 *)&(pFVar17->Pos).field0_0x0;
        local_9b8._8_8_ = *(undefined8 *)((longlong)&(pFVar17->Pos).field0_0x0 + 8);
        local_9a8 = *(undefined8 *)((longlong)&(pFVar17->TangentX).field0_0x0 + 4);
        uStack_9a0 = *(undefined8 *)&(pFVar17->TangentY).field0_0x0;
        local_998 = *(undefined8 *)((longlong)&(pFVar17->TangentY).field0_0x0 + 8);
        uStack_990 = *(undefined8 *)((longlong)&(pFVar17->TangentZ).field0_0x0 + 4);
        local_988 = pFVar17->UVs[0].field0_0x0._s_0.X;
        dStack_980 = pFVar17->UVs[0].field0_0x0._s_0.Y;
        local_978 = pFVar17->UVs[1].field0_0x0._s_0.X;
        dStack_970 = pFVar17->UVs[1].field0_0x0._s_0.Y;
        local_968 = pFVar17->UVs[2].field0_0x0._s_0.X;
        dStack_960 = pFVar17->UVs[2].field0_0x0._s_0.Y;
        local_958 = pFVar17->UVs[3].field0_0x0._s_0.X;
        dStack_950 = pFVar17->UVs[3].field0_0x0._s_0.Y;
        local_948 = pFVar17->UVs[4].field0_0x0._s_0.X;
        dStack_940 = pFVar17->UVs[4].field0_0x0._s_0.Y;
        local_938 = pFVar17->UVs[5].field0_0x0._s_0.X;
        dStack_930 = pFVar17->UVs[5].field0_0x0._s_0.Y;
        local_928 = pFVar17->UVs[6].field0_0x0._s_0.X;
        dStack_920 = pFVar17->UVs[6].field0_0x0._s_0.Y;
        local_918 = pFVar17->UVs[7].field0_0x0._s_0.X;
        dStack_910 = pFVar17->UVs[7].field0_0x0._s_0.Y;
        local_908 = *(undefined8 *)&pFVar17->Color;
        if ((local_ac8.Data <= (TVector<float>_u_0 *)local_9b8) &&
           ((FScriptContainerElement *)local_9b8 < local_ac8.Data + (longlong)local_abc * 0xb8)) {
          local_ae0 = (longlong)local_ac0;
          local_ad8 = 0xb8;
          local_af8 = (TVector<float>_u_0 *)local_9b8;
          local_af0 = (TVector<float>_u_0 *)local_ac8.Data;
          local_ae8 = (longlong)local_abc;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (local_ac0 == local_abc) {
          local_ac0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x8b8,&local_ac8,&local_abc);
        }
        pFVar20 = local_ac8.Data + (longlong)local_ac0 * 0xb8;
        *(undefined8 *)&pFVar20->field_0x0 = local_9b8._0_8_;
        *(undefined8 *)(pFVar20 + 8) = local_9b8._8_8_;
        *(undefined8 *)(pFVar20 + 0x10) = local_9a8;
        *(undefined8 *)(pFVar20 + 0x18) = uStack_9a0;
        *(undefined8 *)(pFVar20 + 0x20) = local_998;
        *(undefined8 *)(pFVar20 + 0x28) = uStack_990;
        *(double *)(pFVar20 + 0x30) = local_988;
        *(double *)(pFVar20 + 0x38) = dStack_980;
        *(double *)(pFVar20 + 0x40) = local_978;
        *(double *)(pFVar20 + 0x48) = dStack_970;
        *(double *)(pFVar20 + 0x50) = local_968;
        *(double *)(pFVar20 + 0x58) = dStack_960;
        *(double *)(pFVar20 + 0x60) = local_958;
        *(double *)(pFVar20 + 0x68) = dStack_950;
        *(double *)(pFVar20 + 0x70) = local_948;
        *(double *)(pFVar20 + 0x78) = dStack_940;
        *(double *)(pFVar20 + 0x80) = local_938;
        *(double *)(pFVar20 + 0x88) = dStack_930;
        *(double *)(pFVar20 + 0x90) = local_928;
        *(double *)(pFVar20 + 0x98) = dStack_920;
        *(double *)(pFVar20 + 0xa0) = local_918;
        *(double *)(pFVar20 + 0xa8) = dStack_910;
        *(undefined8 *)(pFVar20 + 0xb0) = local_908;
        if (local_ab8 == 0) {
          local_ab0._0_8_ = local_9b8._0_8_;
          local_ab0._s_0.Z = (float)local_9b8._8_4_;
        }
        else {
          uStack_aa4 = (undefined4)local_9b8._0_8_;
          uStack_aa0 = SUB84(local_9b8._0_8_,4);
          fStack_a9c = (float)local_9b8._8_4_;
        }
        iVar19 = local_ab8 + 1;
        local_ac0 = local_ac0 + 1;
        local_ab8 = iVar19;
      }
      if (fVar23 < 0.0) {
        if ((local_ac8.Data <= pTVar2) &&
           (pTVar2 < (TVector<float>_u_0 *)(local_ac8.Data + (longlong)local_abc * 0xb8))) {
          local_ad8 = 0xb8;
          local_ae0 = (longlong)local_ac0;
          local_af0 = (TVector<float>_u_0 *)local_ac8.Data;
          local_af8 = pTVar2;
          local_ae8 = (longlong)local_abc;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (local_ac0 == local_abc) {
          local_ac0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x8b8,&local_ac8,&local_abc);
        }
        uVar8 = *(undefined8 *)(pFVar16 + 0x7a8);
        pFVar20 = local_ac8.Data + (longlong)local_ac0 * 0xb8;
        *(undefined8 *)&pFVar20->field_0x0 =
             *(undefined8 *)&((TVector<float> *)&(pTVar2->_s_0).X)->field0_0x0;
        *(undefined8 *)(pFVar20 + 8) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x7b8);
        *(undefined8 *)(pFVar20 + 0x10) = *(undefined8 *)(pFVar16 + 0x7b0);
        *(undefined8 *)(pFVar20 + 0x18) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x7c8);
        *(undefined8 *)(pFVar20 + 0x20) = *(undefined8 *)(pFVar16 + 0x7c0);
        *(undefined8 *)(pFVar20 + 0x28) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x7d8);
        *(undefined8 *)(pFVar20 + 0x30) = *(undefined8 *)(pFVar16 + 2000);
        *(undefined8 *)(pFVar20 + 0x38) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x7e8);
        *(undefined8 *)(pFVar20 + 0x40) = *(undefined8 *)(pFVar16 + 0x7e0);
        *(undefined8 *)(pFVar20 + 0x48) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x7f8);
        *(undefined8 *)(pFVar20 + 0x50) = *(undefined8 *)(pFVar16 + 0x7f0);
        *(undefined8 *)(pFVar20 + 0x58) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x808);
        *(undefined8 *)(pFVar20 + 0x60) = *(undefined8 *)(pFVar16 + 0x800);
        *(undefined8 *)(pFVar20 + 0x68) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x818);
        *(undefined8 *)(pFVar20 + 0x70) = *(undefined8 *)(pFVar16 + 0x810);
        *(undefined8 *)(pFVar20 + 0x78) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x828);
        *(undefined8 *)(pFVar20 + 0x80) = *(undefined8 *)(pFVar16 + 0x820);
        *(undefined8 *)(pFVar20 + 0x88) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x838);
        *(undefined8 *)(pFVar20 + 0x90) = *(undefined8 *)(pFVar16 + 0x830);
        *(undefined8 *)(pFVar20 + 0x98) = uVar8;
        uVar8 = *(undefined8 *)(pFVar16 + 0x848);
        *(undefined8 *)(pFVar20 + 0xa0) = *(undefined8 *)(pFVar16 + 0x840);
        *(undefined8 *)(pFVar20 + 0xa8) = uVar8;
        *(undefined8 *)(pFVar20 + 0xb0) = *(undefined8 *)(pFVar16 + 0x850);
        iVar19 = local_ab8;
        local_ac0 = local_ac0 + 1;
      }
      pFVar16 = local_a98;
      if (fVar23 < 0.0 != fVar25 < 0.0) {
        fVar23 = fVar23 / (fVar23 - fVar25);
        if (fVar9 <= fVar23) {
          fVar23 = fVar9;
        }
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        pFVar17 = InterpolateVert(&local_a70,(FClipSMVertex *)&pTVar2->_s_0,
                                  (FClipSMVertex *)(local_a98 + 0x630),fVar23);
        local_9b8._0_8_ = *(undefined8 *)&(pFVar17->Pos).field0_0x0;
        local_9b8._8_8_ = *(undefined8 *)((longlong)&(pFVar17->Pos).field0_0x0 + 8);
        local_9a8 = *(undefined8 *)((longlong)&(pFVar17->TangentX).field0_0x0 + 4);
        uStack_9a0 = *(undefined8 *)&(pFVar17->TangentY).field0_0x0;
        local_998 = *(undefined8 *)((longlong)&(pFVar17->TangentY).field0_0x0 + 8);
        uStack_990 = *(undefined8 *)((longlong)&(pFVar17->TangentZ).field0_0x0 + 4);
        local_988 = pFVar17->UVs[0].field0_0x0._s_0.X;
        dStack_980 = pFVar17->UVs[0].field0_0x0._s_0.Y;
        local_978 = pFVar17->UVs[1].field0_0x0._s_0.X;
        dStack_970 = pFVar17->UVs[1].field0_0x0._s_0.Y;
        local_968 = pFVar17->UVs[2].field0_0x0._s_0.X;
        dStack_960 = pFVar17->UVs[2].field0_0x0._s_0.Y;
        local_958 = pFVar17->UVs[3].field0_0x0._s_0.X;
        dStack_950 = pFVar17->UVs[3].field0_0x0._s_0.Y;
        local_948 = pFVar17->UVs[4].field0_0x0._s_0.X;
        dStack_940 = pFVar17->UVs[4].field0_0x0._s_0.Y;
        local_938 = pFVar17->UVs[5].field0_0x0._s_0.X;
        dStack_930 = pFVar17->UVs[5].field0_0x0._s_0.Y;
        local_928 = pFVar17->UVs[6].field0_0x0._s_0.X;
        dStack_920 = pFVar17->UVs[6].field0_0x0._s_0.Y;
        local_918 = pFVar17->UVs[7].field0_0x0._s_0.X;
        dStack_910 = pFVar17->UVs[7].field0_0x0._s_0.Y;
        local_908 = *(undefined8 *)&pFVar17->Color;
        if ((local_ac8.Data <= (TVector<float>_u_0 *)local_9b8) &&
           ((FScriptContainerElement *)local_9b8 < local_ac8.Data + (longlong)local_abc * 0xb8)) {
          local_ae0 = (longlong)local_ac0;
          local_ad8 = 0xb8;
          local_af8 = (TVector<float>_u_0 *)local_9b8;
          local_af0 = (TVector<float>_u_0 *)local_ac8.Data;
          local_ae8 = (longlong)local_abc;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (local_ac0 == local_abc) {
          local_ac0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x8b8,&local_ac8,&local_abc);
        }
        pFVar20 = local_ac8.Data + (longlong)local_ac0 * 0xb8;
        *(undefined8 *)&pFVar20->field_0x0 = local_9b8._0_8_;
        *(undefined8 *)(pFVar20 + 8) = local_9b8._8_8_;
        *(undefined8 *)(pFVar20 + 0x10) = local_9a8;
        *(undefined8 *)(pFVar20 + 0x18) = uStack_9a0;
        *(undefined8 *)(pFVar20 + 0x20) = local_998;
        *(undefined8 *)(pFVar20 + 0x28) = uStack_990;
        *(double *)(pFVar20 + 0x30) = local_988;
        *(double *)(pFVar20 + 0x38) = dStack_980;
        *(double *)(pFVar20 + 0x40) = local_978;
        *(double *)(pFVar20 + 0x48) = dStack_970;
        *(double *)(pFVar20 + 0x50) = local_968;
        *(double *)(pFVar20 + 0x58) = dStack_960;
        *(double *)(pFVar20 + 0x60) = local_958;
        *(double *)(pFVar20 + 0x68) = dStack_950;
        *(double *)(pFVar20 + 0x70) = local_948;
        *(double *)(pFVar20 + 0x78) = dStack_940;
        *(double *)(pFVar20 + 0x80) = local_938;
        *(double *)(pFVar20 + 0x88) = dStack_930;
        *(double *)(pFVar20 + 0x90) = local_928;
        *(double *)(pFVar20 + 0x98) = dStack_920;
        *(double *)(pFVar20 + 0xa0) = local_918;
        *(double *)(pFVar20 + 0xa8) = dStack_910;
        *(undefined8 *)(pFVar20 + 0xb0) = local_908;
        if (local_ab8 == 0) {
          local_ab0._0_8_ = local_9b8._0_8_;
          local_ab0._s_0.Z = (float)local_9b8._8_4_;
        }
        else {
          uStack_aa4 = (undefined4)local_9b8._0_8_;
          uStack_aa0 = SUB84(local_9b8._0_8_,4);
          fStack_a9c = (float)local_9b8._8_4_;
        }
        iVar19 = local_ab8 + 1;
        local_ac0 = local_ac0 + 1;
        local_ab8 = iVar19;
      }
      uVar21 = 2;
      if (2 < local_ac0) {
        lVar18 = 0x170;
        do {
          iVar14 = local_ac0;
          memcpy(&local_8f8,pFVar16,0x860);
          if (iVar14 < 1) {
            local_af0 = (TVector<float>_u_0 *)(longlong)iVar14;
            local_af8 = (TVector<float>_u_0 *)0x0;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            iVar14 = local_ac0;
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          local_2c8 = *(undefined8 *)local_ac8.Data;
          uStack_2c0 = *(undefined8 *)(local_ac8.Data + 8);
          local_2b8 = *(undefined8 *)(local_ac8.Data + 0x10);
          uStack_2b0 = *(undefined8 *)(local_ac8.Data + 0x18);
          local_2a8 = *(undefined8 *)(local_ac8.Data + 0x20);
          uStack_2a0 = *(undefined8 *)(local_ac8.Data + 0x28);
          local_298 = *(undefined8 *)(local_ac8.Data + 0x30);
          uStack_290 = *(undefined8 *)(local_ac8.Data + 0x38);
          local_288 = *(undefined8 *)(local_ac8.Data + 0x40);
          uStack_280 = *(undefined8 *)(local_ac8.Data + 0x48);
          local_278 = *(undefined8 *)(local_ac8.Data + 0x50);
          uStack_270 = *(undefined8 *)(local_ac8.Data + 0x58);
          local_268 = *(undefined8 *)(local_ac8.Data + 0x60);
          uStack_260 = *(undefined8 *)(local_ac8.Data + 0x68);
          local_258 = *(undefined8 *)(local_ac8.Data + 0x70);
          uStack_250 = *(undefined8 *)(local_ac8.Data + 0x78);
          local_248 = *(undefined8 *)(local_ac8.Data + 0x80);
          uStack_240 = *(undefined8 *)(local_ac8.Data + 0x88);
          local_238 = *(undefined8 *)(local_ac8.Data + 0x90);
          uStack_230 = *(undefined8 *)(local_ac8.Data + 0x98);
          local_228 = *(undefined8 *)(local_ac8.Data + 0xa0);
          uStack_220 = *(undefined8 *)(local_ac8.Data + 0xa8);
          local_218 = *(undefined8 *)(local_ac8.Data + 0xb0);
          uVar15 = 0;
          if ((int)(uVar21 - 1) < iVar14) {
            uVar15 = -uVar21 >> 0x1f;
          }
          if (uVar15 == 0) {
            local_af8 = (TVector<float>_u_0 *)(longlong)(int)(uVar21 - 1);
            local_af0 = (TVector<float>_u_0 *)(longlong)iVar14;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            iVar14 = local_ac0;
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar20 = local_ac8.Data + lVar18 + -0xb8;
          local_210 = *(undefined8 *)pFVar20;
          uStack_208 = *(undefined8 *)(pFVar20 + 8);
          local_200 = *(undefined8 *)(pFVar20 + 0x10);
          uStack_1f8 = *(undefined8 *)(pFVar20 + 0x18);
          local_1f0 = *(undefined8 *)(pFVar20 + 0x20);
          uStack_1e8 = *(undefined8 *)(pFVar20 + 0x28);
          local_1e0 = *(undefined8 *)(pFVar20 + 0x30);
          uStack_1d8 = *(undefined8 *)(pFVar20 + 0x38);
          local_1d0 = *(undefined8 *)(pFVar20 + 0x40);
          uStack_1c8 = *(undefined8 *)(pFVar20 + 0x48);
          local_1c0 = *(undefined8 *)(pFVar20 + 0x50);
          uStack_1b8 = *(undefined8 *)(pFVar20 + 0x58);
          local_1b0 = *(undefined8 *)(pFVar20 + 0x60);
          uStack_1a8 = *(undefined8 *)(pFVar20 + 0x68);
          local_1a0 = *(undefined8 *)(pFVar20 + 0x70);
          uStack_198 = *(undefined8 *)(pFVar20 + 0x78);
          local_190 = *(undefined8 *)(pFVar20 + 0x80);
          uStack_188 = *(undefined8 *)(pFVar20 + 0x88);
          local_180 = *(undefined8 *)(pFVar20 + 0x90);
          uStack_178 = *(undefined8 *)(pFVar20 + 0x98);
          local_170 = *(undefined8 *)(pFVar20 + 0xa0);
          uStack_168 = *(undefined8 *)(pFVar20 + 0xa8);
          local_160 = *(undefined8 *)(pFVar20 + 0xb0);
          uVar15 = 0;
          if ((int)uVar21 < iVar14) {
            uVar15 = ~uVar21 >> 0x1f;
          }
          if (uVar15 == 0) {
            local_af0 = (TVector<float>_u_0 *)(longlong)iVar14;
            local_af8 = (TVector<float>_u_0 *)(longlong)(int)uVar21;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar20 = local_ac8.Data + lVar18;
          local_158 = *(undefined8 *)pFVar20;
          uStack_150 = *(undefined8 *)(pFVar20 + 8);
          local_148 = *(undefined8 *)(pFVar20 + 0x10);
          uStack_140 = *(undefined8 *)(pFVar20 + 0x18);
          local_138 = *(undefined8 *)(pFVar20 + 0x20);
          uStack_130 = *(undefined8 *)(pFVar20 + 0x28);
          local_128 = *(undefined8 *)(pFVar20 + 0x30);
          uStack_120 = *(undefined8 *)(pFVar20 + 0x38);
          local_118 = *(undefined8 *)(pFVar20 + 0x40);
          uStack_110 = *(undefined8 *)(pFVar20 + 0x48);
          local_108 = *(undefined8 *)(pFVar20 + 0x50);
          uStack_100 = *(undefined8 *)(pFVar20 + 0x58);
          local_f8 = *(undefined8 *)(pFVar20 + 0x60);
          uStack_f0 = *(undefined8 *)(pFVar20 + 0x68);
          local_e8 = *(undefined8 *)(pFVar20 + 0x70);
          uStack_e0 = *(undefined8 *)(pFVar20 + 0x78);
          local_d8 = *(undefined8 *)(pFVar20 + 0x80);
          uStack_d0 = *(undefined8 *)(pFVar20 + 0x88);
          local_c8 = *(undefined8 *)(pFVar20 + 0x90);
          uStack_c0 = *(undefined8 *)(pFVar20 + 0x98);
          local_b8 = *(undefined8 *)(pFVar20 + 0xa0);
          uStack_b0 = *(undefined8 *)(pFVar20 + 0xa8);
          local_a8 = *(undefined8 *)(pFVar20 + 0xb0);
          pTVar1 = (TVector<float>_u_0 *)(param_1->AllocatorInstance).Data;
          local_8ec = 1;
          if ((pTVar1 <= &local_8f8) &&
             (&local_8f8 <
              (TVector<float>_u_0 *)((longlong)pTVar1 + (longlong)param_1->ArrayMax * 0x860))) {
            local_ae0 = (longlong)param_1->ArrayNum;
            local_ad8 = 0x860;
            local_af8 = &local_8f8;
            local_af0 = pTVar1;
            local_ae8 = (longlong)param_1->ArrayMax;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar14 = param_1->ArrayNum;
          if (iVar14 == param_1->ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x860,0x10,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar14 + 1;
          memcpy((param_1->AllocatorInstance).Data + (longlong)iVar14 * 0x860,&local_8f8,0x860);
          uVar21 = uVar21 + 1;
          lVar18 = lVar18 + 0xb8;
          iVar19 = local_ab8;
        } while ((int)uVar21 < local_ac0);
      }
      pTVar10 = local_a88;
      if (iVar19 == 2) {
        pTVar1 = (TVector<float>_u_0 *)(local_a88->AllocatorInstance).Data;
        if ((pTVar1 <= &local_ab0) && (&local_ab0 < pTVar1 + (longlong)local_a88->ArrayMax * 2)) {
          local_ae0 = (longlong)local_a88->ArrayNum;
          local_ad8 = 0x18;
          local_af8 = &local_ab0;
          local_af0 = pTVar1;
          local_ae8 = (longlong)local_a88->ArrayMax;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar14 = pTVar10->ArrayNum;
        if (iVar14 == pTVar10->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
        }
        pTVar10->ArrayNum = iVar14 + 1;
        pFVar20 = (pTVar10->AllocatorInstance).Data;
        pFVar16 = pFVar20 + (longlong)iVar14 * 0x18;
        *(undefined8 *)pFVar16 = local_ab0._0_8_;
        *(ulonglong *)(pFVar16 + 8) = CONCAT44(uStack_aa4,local_ab0._s_0.Z);
        *(ulonglong *)(pFVar20 + (longlong)iVar14 * 0x18 + 0x10) = CONCAT44(fStack_a9c,uStack_aa0);
      }
      if ((TVector<float>_u_0 *)local_ac8.Data != (TVector<float>_u_0 *)0x0) {
        FMemory::Free(local_ac8.Data);
      }
      local_ab4 = local_ab4 + 1;
      local_a90 = local_a90 + 0x860;
      iVar14 = local_a80->ArrayNum;
    } while ((int)local_ab4 < iVar14);
  }
  return;
}

// GeneratePlanarFitPolyUVs @ 147c52810

void __cdecl FGeomTools::GeneratePlanarFitPolyUVs(FUtilPoly2D *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 uVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined4 uVar20;
  
  iVar6 = (param_1->Verts).ArrayNum;
  uVar7 = 0;
  uVar18 = (undefined4)__real_c7eff933c0000000;
  uVar20 = (undefined4)((ulonglong)__real_c7eff933c0000000 >> 0x20);
  uVar9 = (undefined4)__real_47eff933c0000000;
  uVar11 = (undefined4)((ulonglong)__real_47eff933c0000000 >> 0x20);
  if (0 < iVar6) {
    lVar8 = 0;
    uVar15 = uVar18;
    uVar17 = uVar20;
    uVar12 = uVar9;
    uVar14 = uVar11;
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
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->Verts).AllocatorInstance.Data;
      uVar7 = uVar7 + 1;
      iVar6 = (param_1->Verts).ArrayNum;
      dVar19 = *(double *)(pFVar1 + lVar8);
      dVar16 = *(double *)(pFVar1 + lVar8 + 8);
      dVar10 = dVar19;
      if ((double)CONCAT44(uVar11,uVar9) <= dVar19) {
        dVar10 = (double)CONCAT44(uVar11,uVar9);
      }
      dVar13 = dVar16;
      if ((double)CONCAT44(uVar14,uVar12) <= dVar16) {
        dVar13 = (double)CONCAT44(uVar14,uVar12);
      }
      lVar8 = lVar8 + 0x30;
      if (dVar19 <= (double)CONCAT44(uVar20,uVar18)) {
        dVar19 = (double)CONCAT44(uVar20,uVar18);
      }
      if (dVar16 <= (double)CONCAT44(uVar17,uVar15)) {
        dVar16 = (double)CONCAT44(uVar17,uVar15);
      }
      uVar9 = SUB84(dVar10,0);
      uVar11 = (undefined4)((ulonglong)dVar10 >> 0x20);
      uVar12 = SUB84(dVar13,0);
      uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
      uVar18 = SUB84(dVar19,0);
      uVar20 = (undefined4)((ulonglong)dVar19 >> 0x20);
      uVar15 = SUB84(dVar16,0);
      uVar17 = (undefined4)((ulonglong)dVar16 >> 0x20);
    } while ((int)uVar7 < iVar6);
    uVar7 = 0;
    if (0 < iVar6) {
      lVar8 = 0;
      dVar3 = __real_3ff0000000000000 / (dVar19 - dVar10);
      dVar19 = __real_3ff0000000000000 / (dVar16 - dVar13);
      do {
        uVar5 = 0;
        if ((int)uVar7 < iVar6) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->Verts).AllocatorInstance.Data;
        uVar7 = uVar7 + 1;
        *(double *)(pFVar1 + lVar8 + 0x18) = (*(double *)(pFVar1 + lVar8) - dVar10) * dVar3;
        *(double *)(pFVar1 + lVar8 + 0x20) = (*(double *)(pFVar1 + lVar8 + 8) - dVar13) * dVar19;
        lVar8 = lVar8 + 0x30;
        iVar6 = (param_1->Verts).ArrayNum;
      } while ((int)uVar7 < iVar6);
    }
  }
  return;
}

// GeneratePlanarTilingPolyUVs @ 147c529f0

void __cdecl FGeomTools::GeneratePlanarTilingPolyUVs(FUtilPoly2D *param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar9 = (param_1->Verts).ArrayNum;
  uVar10 = 0;
  if (0 < iVar9) {
    lVar11 = 0;
    dVar6 = __real_3ff0000000000000 / (double)param_2;
    do {
      uVar8 = 0;
      if ((int)uVar10 < iVar9) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->Verts).AllocatorInstance.Data;
      uVar10 = uVar10 + 1;
      pFVar1 = pFVar2 + lVar11;
      dVar5 = *(double *)(pFVar1 + 8) * dVar6;
      auVar4._8_4_ = SUB84(dVar5,0);
      auVar4._0_8_ = *(double *)pFVar1 * dVar6;
      auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined1 (*) [16])(pFVar2 + lVar11 + 0x18) = auVar4;
      iVar9 = (param_1->Verts).ArrayNum;
      lVar11 = lVar11 + 0x30;
    } while ((int)uVar10 < iVar9);
  }
  return;
}

// GetClippableStaticMeshTriangles @ 147c551d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGeomTools::GetClippableStaticMeshTriangles
          (TArray<FClipSMTriangle,TSizedDefaultAllocator<32>_> *param_1,UStaticMesh *param_2)

{
  FClipSMTriangle *pFVar1;
  code *pcVar2;
  UStaticMesh *pUVar3;
  bool bVar4;
  FStaticMeshRenderData *pFVar5;
  FClipSMVertex *pFVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined1 auStack_9e8 [32];
  FClipSMTriangle *local_9c8;
  FClipSMTriangle *local_9c0;
  longlong local_9b8;
  longlong local_9b0;
  undefined8 local_9a8;
  uint local_998;
  FIndexArrayView local_990;
  UStaticMesh *local_980;
  longlong local_978;
  longlong local_970;
  longlong local_968;
  FClipSMVertex local_960;
  FClipSMTriangle local_8a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_9e8;
  local_980 = param_2;
  pFVar5 = UStaticMesh::GetRenderData(param_2);
  iVar11 = (pFVar5->LODResources).Array.ArrayNum;
  if (iVar11 < 1) {
    local_9c8 = (FClipSMTriangle *)0x0;
    local_9c0 = (FClipSMTriangle *)(longlong)iVar11;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar7 = *(longlong *)(pFVar5->LODResources).Array.AllocatorInstance.Data;
  local_978 = lVar7;
  FRawStaticIndexBuffer::GetArrayView((FRawStaticIndexBuffer *)(lVar7 + 0x228),&local_990);
  local_998 = 0;
  if (0 < *(int *)(lVar7 + 0x38)) {
    lVar13 = lVar7 + 0x10;
    local_970 = 0;
    local_968 = lVar13;
    do {
      lVar9 = local_970;
      uVar12 = 0;
      if ((int)local_998 < *(int *)(lVar13 + 0x28)) {
        uVar12 = ~local_998 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_9c8 = (FClipSMTriangle *)(longlong)(int)local_998;
        local_9c0 = (FClipSMTriangle *)(longlong)*(int *)(lVar13 + 0x28);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      lVar14 = lVar13;
      if (*(longlong *)(lVar13 + 0x20) != 0) {
        lVar14 = *(longlong *)(lVar13 + 0x20);
      }
      uVar12 = 0;
      puVar15 = (undefined4 *)(lVar14 + lVar9);
      if (puVar15[2] != 0) {
        iVar11 = 0;
        do {
          memset(&local_8a8.field_0xd,0,0x853);
          local_8a8._0_4_ = *puVar15;
          iVar8 = puVar15[1] + iVar11;
          local_8a8._8_4_ = *(undefined4 *)(lVar7 + 0x178);
          local_8a8._4_4_ = 0;
          local_8a8._12_1_ = 1;
          lVar7 = (longlong)iVar8;
          if (local_990.b32Bit == false) {
            uVar10 = (uint)*(ushort *)((longlong)local_990.UntypedIndexData + lVar7 * 2);
          }
          else {
            uVar10 = *(uint *)((longlong)local_990.UntypedIndexData + lVar7 * 4);
          }
          pFVar6 = GetVert(&local_960,local_980,uVar10);
          pUVar3 = local_980;
          local_8a8.Vertices[0].Pos.field0_0x0._0_8_ = *(undefined8 *)&(pFVar6->Pos).field0_0x0;
          local_8a8.Vertices[0]._8_8_ = *(undefined8 *)((longlong)&(pFVar6->Pos).field0_0x0 + 8);
          local_8a8.Vertices[0].TangentX.field0_0x0._4_8_ =
               *(undefined8 *)((longlong)&(pFVar6->TangentX).field0_0x0 + 4);
          local_8a8.Vertices[0].TangentY.field0_0x0._0_8_ =
               *(undefined8 *)&(pFVar6->TangentY).field0_0x0;
          local_8a8.Vertices[0]._32_8_ =
               *(undefined8 *)((longlong)&(pFVar6->TangentY).field0_0x0 + 8);
          local_8a8.Vertices[0].TangentZ.field0_0x0._4_8_ =
               *(undefined8 *)((longlong)&(pFVar6->TangentZ).field0_0x0 + 4);
          local_8a8.Vertices[0].UVs[0].field0_0x0._s_0.X = pFVar6->UVs[0].field0_0x0._s_0.X;
          local_8a8.Vertices[0].UVs[0].field0_0x0._s_0.Y = pFVar6->UVs[0].field0_0x0._s_0.Y;
          local_8a8.Vertices[0].UVs[1].field0_0x0._s_0.X = pFVar6->UVs[1].field0_0x0._s_0.X;
          local_8a8.Vertices[0].UVs[1].field0_0x0._s_0.Y = pFVar6->UVs[1].field0_0x0._s_0.Y;
          local_8a8.Vertices[0].UVs[2].field0_0x0._s_0.X = pFVar6->UVs[2].field0_0x0._s_0.X;
          local_8a8.Vertices[0].UVs[2].field0_0x0._s_0.Y = pFVar6->UVs[2].field0_0x0._s_0.Y;
          local_8a8.Vertices[0].UVs[3].field0_0x0._s_0.X = pFVar6->UVs[3].field0_0x0._s_0.X;
          local_8a8.Vertices[0].UVs[3].field0_0x0._s_0.Y = pFVar6->UVs[3].field0_0x0._s_0.Y;
          local_8a8.Vertices[0].UVs[4].field0_0x0._s_0.X = pFVar6->UVs[4].field0_0x0._s_0.X;
          local_8a8.Vertices[0].UVs[4].field0_0x0._s_0.Y = pFVar6->UVs[4].field0_0x0._s_0.Y;
          local_8a8.Vertices[0].UVs[5].field0_0x0._s_0.X = pFVar6->UVs[5].field0_0x0._s_0.X;
          local_8a8.Vertices[0].UVs[5].field0_0x0._s_0.Y = pFVar6->UVs[5].field0_0x0._s_0.Y;
          local_8a8.Vertices[0].UVs[6].field0_0x0._s_0.X = pFVar6->UVs[6].field0_0x0._s_0.X;
          local_8a8.Vertices[0].UVs[6].field0_0x0._s_0.Y = pFVar6->UVs[6].field0_0x0._s_0.Y;
          local_8a8.Vertices[0].UVs[7].field0_0x0._s_0.X = pFVar6->UVs[7].field0_0x0._s_0.X;
          local_8a8.Vertices[0].UVs[7].field0_0x0._s_0.Y = pFVar6->UVs[7].field0_0x0._s_0.Y;
          local_8a8.Vertices[0].Color.field0_0x0 = (pFVar6->Color).field0_0x0;
          local_8a8.Vertices[0]._180_4_ = *(undefined4 *)&pFVar6->field_0xb4;
          if (local_990.b32Bit == false) {
            uVar10 = (uint)*(ushort *)((longlong)local_990.UntypedIndexData + lVar7 * 2 + 2);
          }
          else {
            uVar10 = *(uint *)((longlong)local_990.UntypedIndexData + lVar7 * 4 + 4);
          }
          pFVar6 = GetVert(&local_960,local_980,uVar10);
          local_8a8.Vertices[1].Pos.field0_0x0._0_8_ = *(undefined8 *)&(pFVar6->Pos).field0_0x0;
          local_8a8.Vertices[1]._8_8_ = *(undefined8 *)((longlong)&(pFVar6->Pos).field0_0x0 + 8);
          local_8a8.Vertices[1].TangentX.field0_0x0._4_8_ =
               *(undefined8 *)((longlong)&(pFVar6->TangentX).field0_0x0 + 4);
          local_8a8.Vertices[1].TangentY.field0_0x0._0_8_ =
               *(undefined8 *)&(pFVar6->TangentY).field0_0x0;
          local_8a8.Vertices[1]._32_8_ =
               *(undefined8 *)((longlong)&(pFVar6->TangentY).field0_0x0 + 8);
          local_8a8.Vertices[1].TangentZ.field0_0x0._4_8_ =
               *(undefined8 *)((longlong)&(pFVar6->TangentZ).field0_0x0 + 4);
          local_8a8.Vertices[1].UVs[0].field0_0x0._s_0.X = pFVar6->UVs[0].field0_0x0._s_0.X;
          local_8a8.Vertices[1].UVs[0].field0_0x0._s_0.Y = pFVar6->UVs[0].field0_0x0._s_0.Y;
          local_8a8.Vertices[1].UVs[1].field0_0x0._s_0.X = pFVar6->UVs[1].field0_0x0._s_0.X;
          local_8a8.Vertices[1].UVs[1].field0_0x0._s_0.Y = pFVar6->UVs[1].field0_0x0._s_0.Y;
          local_8a8.Vertices[1].UVs[2].field0_0x0._s_0.X = pFVar6->UVs[2].field0_0x0._s_0.X;
          local_8a8.Vertices[1].UVs[2].field0_0x0._s_0.Y = pFVar6->UVs[2].field0_0x0._s_0.Y;
          local_8a8.Vertices[1].UVs[3].field0_0x0._s_0.X = pFVar6->UVs[3].field0_0x0._s_0.X;
          local_8a8.Vertices[1].UVs[3].field0_0x0._s_0.Y = pFVar6->UVs[3].field0_0x0._s_0.Y;
          local_8a8.Vertices[1].UVs[4].field0_0x0._s_0.X = pFVar6->UVs[4].field0_0x0._s_0.X;
          local_8a8.Vertices[1].UVs[4].field0_0x0._s_0.Y = pFVar6->UVs[4].field0_0x0._s_0.Y;
          local_8a8.Vertices[1].UVs[5].field0_0x0._s_0.X = pFVar6->UVs[5].field0_0x0._s_0.X;
          local_8a8.Vertices[1].UVs[5].field0_0x0._s_0.Y = pFVar6->UVs[5].field0_0x0._s_0.Y;
          local_8a8.Vertices[1].UVs[6].field0_0x0._s_0.X = pFVar6->UVs[6].field0_0x0._s_0.X;
          local_8a8.Vertices[1].UVs[6].field0_0x0._s_0.Y = pFVar6->UVs[6].field0_0x0._s_0.Y;
          local_8a8.Vertices[1].UVs[7].field0_0x0._s_0.X = pFVar6->UVs[7].field0_0x0._s_0.X;
          local_8a8.Vertices[1].UVs[7].field0_0x0._s_0.Y = pFVar6->UVs[7].field0_0x0._s_0.Y;
          local_8a8.Vertices[1].Color.field0_0x0 = (pFVar6->Color).field0_0x0;
          local_8a8.Vertices[1]._180_4_ = *(undefined4 *)&pFVar6->field_0xb4;
          if (local_990.b32Bit == false) {
            uVar10 = (uint)*(ushort *)
                            ((longlong)local_990.UntypedIndexData + (longlong)iVar8 * 2 + 4);
          }
          else {
            uVar10 = *(uint *)((longlong)local_990.UntypedIndexData + (longlong)iVar8 * 4 + 8);
          }
          pFVar6 = GetVert(&local_960,pUVar3,uVar10);
          local_8a8.Vertices[2].Pos.field0_0x0._0_8_ = *(undefined8 *)&(pFVar6->Pos).field0_0x0;
          local_8a8.Vertices[2]._8_8_ = *(undefined8 *)((longlong)&(pFVar6->Pos).field0_0x0 + 8);
          local_8a8.Vertices[2].TangentX.field0_0x0._4_8_ =
               *(undefined8 *)((longlong)&(pFVar6->TangentX).field0_0x0 + 4);
          local_8a8.Vertices[2].TangentY.field0_0x0._0_8_ =
               *(undefined8 *)&(pFVar6->TangentY).field0_0x0;
          local_8a8.Vertices[2]._32_8_ =
               *(undefined8 *)((longlong)&(pFVar6->TangentY).field0_0x0 + 8);
          local_8a8.Vertices[2].TangentZ.field0_0x0._4_8_ =
               *(undefined8 *)((longlong)&(pFVar6->TangentZ).field0_0x0 + 4);
          local_8a8.Vertices[2].UVs[0].field0_0x0._s_0.X = pFVar6->UVs[0].field0_0x0._s_0.X;
          local_8a8.Vertices[2].UVs[0].field0_0x0._s_0.Y = pFVar6->UVs[0].field0_0x0._s_0.Y;
          local_8a8.Vertices[2].UVs[1].field0_0x0._s_0.X = pFVar6->UVs[1].field0_0x0._s_0.X;
          local_8a8.Vertices[2].UVs[1].field0_0x0._s_0.Y = pFVar6->UVs[1].field0_0x0._s_0.Y;
          local_8a8.Vertices[2].UVs[2].field0_0x0._s_0.X = pFVar6->UVs[2].field0_0x0._s_0.X;
          local_8a8.Vertices[2].UVs[2].field0_0x0._s_0.Y = pFVar6->UVs[2].field0_0x0._s_0.Y;
          local_8a8.Vertices[2].UVs[3].field0_0x0._s_0.X = pFVar6->UVs[3].field0_0x0._s_0.X;
          local_8a8.Vertices[2].UVs[3].field0_0x0._s_0.Y = pFVar6->UVs[3].field0_0x0._s_0.Y;
          local_8a8.Vertices[2].UVs[4].field0_0x0._s_0.X = pFVar6->UVs[4].field0_0x0._s_0.X;
          local_8a8.Vertices[2].UVs[4].field0_0x0._s_0.Y = pFVar6->UVs[4].field0_0x0._s_0.Y;
          local_8a8.Vertices[2].UVs[5].field0_0x0._s_0.X = pFVar6->UVs[5].field0_0x0._s_0.X;
          local_8a8.Vertices[2].UVs[5].field0_0x0._s_0.Y = pFVar6->UVs[5].field0_0x0._s_0.Y;
          local_8a8.Vertices[2].UVs[6].field0_0x0._s_0.X = pFVar6->UVs[6].field0_0x0._s_0.X;
          local_8a8.Vertices[2].UVs[6].field0_0x0._s_0.Y = pFVar6->UVs[6].field0_0x0._s_0.Y;
          local_8a8.Vertices[2].UVs[7].field0_0x0._s_0.X = pFVar6->UVs[7].field0_0x0._s_0.X;
          local_8a8.Vertices[2].UVs[7].field0_0x0._s_0.Y = pFVar6->UVs[7].field0_0x0._s_0.Y;
          local_8a8.Vertices[2].Color.field0_0x0 = (pFVar6->Color).field0_0x0;
          local_8a8.Vertices[2]._180_4_ = *(undefined4 *)&pFVar6->field_0xb4;
          FClipSMTriangle::ComputeGradientsAndNormal(&local_8a8);
          pFVar1 = (FClipSMTriangle *)(param_1->AllocatorInstance).Data;
          if ((pFVar1 <= &local_8a8) && (&local_8a8 < pFVar1 + param_1->ArrayMax)) {
            local_9b0 = (longlong)param_1->ArrayNum;
            local_9a8 = 0x860;
            local_9c8 = &local_8a8;
            local_9c0 = pFVar1;
            local_9b8 = (longlong)param_1->ArrayMax;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          iVar8 = param_1->ArrayNum;
          if (iVar8 == param_1->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x860,0x10,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar8 + 1;
          memcpy((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x860,&local_8a8,0x860);
          uVar12 = uVar12 + 1;
          iVar11 = iVar11 + 3;
          lVar7 = local_978;
          lVar9 = local_970;
          lVar13 = local_968;
        } while (uVar12 < (uint)puVar15[2]);
      }
      local_998 = local_998 + 1;
      local_970 = lVar9 + 0x1c;
    } while ((int)local_998 < *(int *)(lVar7 + 0x38));
  }
  return;
}

// PointInTriangle @ 147c71c90

bool __cdecl
FGeomTools::PointInTriangle
          (TVector<float> *param_1,TVector<float> *param_2,TVector<float> *param_3,
          TVector<float> *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 local_cc;
  TVector<float>_u_0 local_c0 [15];
  
  fVar1 = (param_2->field0_0x0)._s_0.X;
  fVar2 = (param_2->field0_0x0)._s_0.Y;
  fVar3 = (param_2->field0_0x0)._s_0.Z;
  fVar4 = (param_1->field0_0x0)._s_0.X;
  fVar5 = (param_1->field0_0x0)._s_0.Y;
  fVar6 = (param_1->field0_0x0)._s_0.Z;
  fVar7 = (param_3->field0_0x0)._s_0.X;
  fVar8 = (param_3->field0_0x0)._s_0.Y;
  local_d8._s_0.X = fVar7 - fVar4;
  fVar9 = (param_3->field0_0x0)._s_0.Z;
  fVar10 = (param_4->field0_0x0)._s_0.X;
  local_d8._s_0.Y = fVar8 - fVar5;
  local_d8._s_0.Z = fVar9 - fVar6;
  local_cc._s_0.X = fVar10 - fVar4;
  local_cc._s_0.Y = (param_4->field0_0x0)._s_0.Y - fVar5;
  local_cc._s_0.Z = (param_4->field0_0x0)._s_0.Z - fVar6;
  local_c0[0]._0_4_ = fVar1 - fVar4;
  local_c0[0]._4_4_ = fVar2 - fVar5;
  local_c0[0]._8_4_ = fVar3 - fVar6;
  bVar11 = VectorsOnSameSide((TVector<float> *)&local_c0[0]._s_0,(TVector<float> *)&local_cc._s_0,
                             (TVector<float> *)&local_d8._s_0,param_5);
  if (bVar11) {
    local_c0[0]._0_4_ = fVar4 - fVar1;
    local_c0[0]._4_4_ = fVar5 - fVar2;
    local_c0[0]._8_4_ = fVar6 - fVar3;
    local_cc._s_0.X = fVar10 - fVar1;
    local_cc._s_0.Y = (param_4->field0_0x0)._s_0.Y - fVar2;
    local_cc._s_0.Z = (param_4->field0_0x0)._s_0.Z - fVar3;
    local_d8._s_0.X = fVar7 - fVar1;
    local_d8._s_0.Y = fVar8 - fVar2;
    local_d8._s_0.Z = fVar9 - fVar3;
    bVar11 = VectorsOnSameSide((TVector<float> *)&local_d8._s_0,(TVector<float> *)&local_cc._s_0,
                               (TVector<float> *)&local_c0[0]._s_0,param_5);
    if (bVar11) {
      local_c0[0]._0_4_ = fVar1 - fVar7;
      local_cc._s_0.Y = (param_4->field0_0x0)._s_0.Y - fVar8;
      local_c0[0]._4_4_ = fVar2 - fVar8;
      local_c0[0]._8_4_ = fVar3 - fVar9;
      local_cc._s_0.X = fVar10 - fVar7;
      local_d8._s_0.X = fVar4 - fVar7;
      local_d8._s_0.Y = fVar5 - fVar8;
      local_d8._s_0.Z = fVar6 - fVar9;
      local_cc._s_0.Z = (param_4->field0_0x0)._s_0.Z - fVar9;
      bVar11 = VectorsOnSameSide((TVector<float> *)&local_d8._s_0,(TVector<float> *)&local_cc._s_0,
                                 (TVector<float> *)&local_c0[0]._s_0,param_5);
      return bVar11;
    }
  }
  return false;
}

// ProjectEdges @ 147c778c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGeomTools::ProjectEdges
          (TArray<FUtilEdge2D,TSizedDefaultAllocator<32>_> *param_1,TMatrix<double> *param_2,
          TArray<FUtilEdge3D,TSizedDefaultAllocator<32>_> *param_3,TPlane<double> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong lVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStackY_2b8 [32];
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_250;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  dVar15 = (double)param_4->_padding_;
  dVar14 = (double)param_4->_padding_;
  local_280._s_0.Z = (double)param_4->_padding_;
  local_280._s_0.X = dVar15;
  local_280._s_0.Y = dVar14;
  UE::Math::TVector<double>::FindBestAxisVectors
            ((TVector<double> *)&local_280._s_0,(TVector<double> *)&local_268._s_0,
             (TVector<double> *)&local_250._s_0);
  dVar17 = __real_3ff0000000000000;
  dVar4 = param_4->W;
  lVar22 = param_4->_padding_;
  local_1f8 = (undefined4)param_4->_padding_;
  uStack_1f4 = *(undefined4 *)((longlong)&param_4->_padding_ + 4);
  uStack_1f0 = (undefined4)param_4->_padding_;
  lVar24 = param_4->_padding_;
  uVar25 = *(undefined4 *)((longlong)&param_4->_padding_ + 4);
  lVar16 = param_4->_padding_;
  local_1e8 = (double)param_4->_padding_;
  uVar27 = SUB84(__real_3ff0000000000000,0);
  uVar28 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  param_2->M[0][0] = local_268._s_0.X;
  param_2->M[0][1] = local_268._s_0.Y;
  param_2->M[0][2] = local_268._s_0.Z;
  param_2->M[0][3] = 0.0;
  local_238 = local_268._s_0.X;
  dStack_230 = local_268._s_0.Y;
  local_228 = local_268._s_0.Z;
  uStack_220 = 0;
  param_2->M[1][0] = local_250._s_0.X;
  param_2->M[1][1] = local_250._s_0.Y;
  param_2->M[1][2] = local_250._s_0.Z;
  param_2->M[1][3] = 0.0;
  local_218 = local_250._s_0.X;
  dStack_210 = local_250._s_0.Y;
  local_208 = local_250._s_0.Z;
  uStack_200 = 0;
  uStack_1ec = (undefined4)((ulonglong)lVar22 >> 0x20);
  *(int *)param_2->M[2] = (int)lVar24;
  *(undefined4 *)((longlong)param_2->M[2] + 4) = uVar25;
  *(int *)(param_2->M[2] + 1) = (int)lVar16;
  *(undefined4 *)((longlong)param_2->M[2] + 0xc) = uStack_1ec;
  param_2->M[2][2] = local_1e8;
  param_2->M[2][3] = 0.0;
  dVar15 = dVar4 * dVar15;
  uStack_1e0 = 0;
  dVar14 = dVar4 * dVar14;
  uVar25 = SUB84(dVar14,0);
  uVar26 = (undefined4)((ulonglong)dVar14 >> 0x20);
  local_1c8._8_4_ = uVar27;
  local_1c8._0_8_ = dVar4 * local_280._s_0.Z;
  local_1c8._12_4_ = uVar28;
  auVar7._8_4_ = uVar25;
  auVar7._0_8_ = dVar15;
  auVar7._12_4_ = uVar26;
  *(undefined1 (*) [16])param_2->M[3] = auVar7;
  auVar9._8_4_ = uVar27;
  auVar9._0_8_ = dVar4 * local_280._s_0.Z;
  auVar9._12_4_ = uVar28;
  *(undefined1 (*) [16])(param_2->M[3] + 2) = auVar9;
  local_1d8._8_4_ = uVar25;
  local_1d8._0_8_ = dVar15;
  local_1d8._12_4_ = uVar26;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,param_3->ArrayNum,&param_1->AllocatorInstance,&param_1->ArrayNum,
             &param_1->ArrayMax);
  iVar20 = param_3->ArrayNum;
  uVar21 = 0;
  if (0 < iVar20) {
    lVar22 = 0;
    lVar24 = 0;
    do {
      uVar23 = ~uVar21 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar21 < iVar20) {
        uVar19 = uVar23;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_3->AllocatorInstance).Data;
      fVar1 = *(float *)(pFVar5 + lVar24);
      fVar2 = *(float *)(pFVar5 + lVar24 + 4);
      fVar3 = *(float *)(pFVar5 + lVar24 + 8);
      UE::Math::TMatrix<double>::InverseFast(param_2,&local_1b8);
      uVar19 = 0;
      if ((int)uVar21 < param_1->ArrayNum) {
        uVar19 = uVar23;
      }
      dVar4 = (double)fVar1 * local_1b8.M[0][0];
      dVar15 = (double)fVar1 * local_1b8.M[0][1];
      dVar12 = (double)fVar2 * local_1b8.M[1][0];
      dVar13 = (double)fVar2 * local_1b8.M[1][1];
      dVar14 = (double)fVar3 * local_1b8.M[2][0];
      dVar8 = (double)fVar3 * local_1b8.M[2][1];
      dVar10 = dVar17 * local_1b8.M[3][0];
      dVar11 = dVar17 * local_1b8.M[3][1];
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(double *)((param_1->AllocatorInstance).Data + lVar22) = dVar12 + dVar4 + dVar14 + dVar10;
      uVar19 = 0;
      if ((int)uVar21 < param_1->ArrayNum) {
        uVar19 = uVar23;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(double *)((param_1->AllocatorInstance).Data + lVar22 + 8) = dVar13 + dVar15 + dVar8 + dVar11
      ;
      uVar19 = 0;
      if ((int)uVar21 < param_3->ArrayNum) {
        uVar19 = uVar23;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_3->AllocatorInstance).Data;
      fVar1 = *(float *)(pFVar5 + lVar24 + 0xc);
      fVar2 = *(float *)(pFVar5 + lVar24 + 0x10);
      fVar3 = *(float *)(pFVar5 + lVar24 + 0x14);
      UE::Math::TMatrix<double>::InverseFast(param_2,&local_138);
      uVar19 = 0;
      if ((int)uVar21 < param_1->ArrayNum) {
        uVar19 = uVar23;
      }
      dVar4 = (double)fVar1 * local_138.M[0][0];
      dVar15 = (double)fVar1 * local_138.M[0][1];
      dVar12 = (double)fVar2 * local_138.M[1][0];
      dVar13 = (double)fVar2 * local_138.M[1][1];
      dVar14 = (double)fVar3 * local_138.M[2][0];
      dVar8 = (double)fVar3 * local_138.M[2][1];
      dVar10 = dVar17 * local_138.M[3][0];
      dVar11 = dVar17 * local_138.M[3][1];
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(double *)((param_1->AllocatorInstance).Data + lVar22 + 0x10) =
           dVar12 + dVar4 + dVar14 + dVar10;
      uVar19 = 0;
      if ((int)uVar21 < param_1->ArrayNum) {
        uVar19 = uVar23;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar21 = uVar21 + 1;
      lVar24 = lVar24 + 0x18;
      *(double *)((param_1->AllocatorInstance).Data + lVar22 + 0x18) =
           dVar13 + dVar15 + dVar8 + dVar11;
      lVar22 = lVar22 + 0x20;
      iVar20 = param_3->ArrayNum;
    } while ((int)uVar21 < iVar20);
  }
  return;
}

// RemoveRedundantTriangles @ 147c7c710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGeomTools::RemoveRedundantTriangles(TArray<FClipSMTriangle,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *_Dst;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStackY_f48 [32];
  ForAnyElementType local_ef8;
  int local_ef0;
  int local_eec;
  TArray<FClipSMTriangle,TSizedDefaultAllocator<32>_> local_ee8;
  FClipSMPolygon local_ed8;
  undefined1 local_898 [1584];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f48;
  piVar2 = &param_1->ArrayNum;
  local_ef0 = 0;
  local_ef8.Data = (FScriptContainerElement *)0x0;
  local_eec = 0;
  iVar10 = *piVar2;
  while( true ) {
    if (iVar10 < 1) {
      uVar7 = 0;
      if (0 < local_ef0) {
        do {
          local_ee8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_ee8.ArrayNum = 0;
          local_ee8.ArrayMax = 0;
          uVar5 = 0;
          if ((int)uVar7 < local_ef0) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TriangulatePoly(&local_ee8,
                          (FClipSMPolygon *)(local_ef8.Data + (longlong)(int)uVar7 * 0x640),false);
          if ((param_1 == &local_ee8) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar9 = (longlong)local_ee8.ArrayNum;
          if (local_ee8.ArrayNum != 0) {
            iVar10 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x860,0x10,local_ee8.ArrayNum,&param_1->AllocatorInstance,piVar2,
                                &param_1->ArrayMax);
            memcpy((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x860,
                   local_ee8.AllocatorInstance.Data,lVar9 * 0x860);
          }
          if (local_ee8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ee8.AllocatorInstance.Data);
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < local_ef0);
      }
      DestructItems<FClipSMPolygon,int>((FClipSMPolygon *)local_ef8.Data,local_ef0);
      if ((FClipSMPolygon *)local_ef8.Data != (FClipSMPolygon *)0x0) {
        FMemory::Free(local_ef8.Data);
      }
      return;
    }
    uVar7 = 0;
    iVar10 = *piVar2;
    memcpy(local_898,(param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x860 + -0x860,0x860);
    iVar10 = iVar10 + -1;
    *piVar2 = iVar10;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x860,0x10,&param_1->AllocatorInstance,iVar10,&param_1->ArrayMax);
    local_ed8.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ed8.Vertices.ArrayNum = 0;
    local_ed8.Vertices.ArrayMax = 0;
    memcpy(&local_ed8,local_898,0x630);
    if (((local_ed8.Vertices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_268) &&
        ((FScriptContainerElement *)&local_268 <
         local_ed8.Vertices.AllocatorInstance.Data + (longlong)local_ed8.Vertices.ArrayMax * 0xb8))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar10 = local_ed8.Vertices.ArrayNum;
    if (local_ed8.Vertices.ArrayNum == local_ed8.Vertices.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8b8,&local_ed8.Vertices.AllocatorInstance,&local_ed8.Vertices.ArrayMax);
    }
    iVar1 = iVar10 + 1;
    pFVar6 = local_ed8.Vertices.AllocatorInstance.Data + (longlong)iVar10 * 0xb8;
    *(undefined8 *)pFVar6 = local_268;
    *(undefined8 *)(pFVar6 + 8) = uStack_260;
    *(undefined8 *)(pFVar6 + 0x10) = local_258;
    *(undefined8 *)(pFVar6 + 0x18) = uStack_250;
    *(undefined8 *)(pFVar6 + 0x20) = local_248;
    *(undefined8 *)(pFVar6 + 0x28) = uStack_240;
    *(undefined8 *)(pFVar6 + 0x30) = local_238;
    *(undefined8 *)(pFVar6 + 0x38) = uStack_230;
    *(undefined8 *)(pFVar6 + 0x40) = local_228;
    *(undefined8 *)(pFVar6 + 0x48) = uStack_220;
    *(undefined8 *)(pFVar6 + 0x50) = local_218;
    *(undefined8 *)(pFVar6 + 0x58) = uStack_210;
    *(undefined8 *)(pFVar6 + 0x60) = local_208;
    *(undefined8 *)(pFVar6 + 0x68) = uStack_200;
    *(undefined8 *)(pFVar6 + 0x70) = local_1f8;
    *(undefined8 *)(pFVar6 + 0x78) = uStack_1f0;
    *(undefined8 *)(pFVar6 + 0x80) = local_1e8;
    *(undefined8 *)(pFVar6 + 0x88) = uStack_1e0;
    *(undefined8 *)(pFVar6 + 0x90) = local_1d8;
    *(undefined8 *)(pFVar6 + 0x98) = uStack_1d0;
    *(undefined8 *)(pFVar6 + 0xa0) = local_1c8;
    *(undefined8 *)(pFVar6 + 0xa8) = uStack_1c0;
    *(undefined8 *)(pFVar6 + 0xb0) = local_1b8;
    local_ed8.Vertices.ArrayNum = iVar1;
    if (((local_ed8.Vertices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1b0) &&
        ((FScriptContainerElement *)&local_1b0 <
         local_ed8.Vertices.AllocatorInstance.Data + (longlong)local_ed8.Vertices.ArrayMax * 0xb8))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) break;
    if (local_ed8.Vertices.ArrayNum == local_ed8.Vertices.ArrayMax) {
      local_ed8.Vertices.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x8b8,&local_ed8.Vertices.AllocatorInstance,&local_ed8.Vertices.ArrayMax);
    }
    iVar10 = local_ed8.Vertices.ArrayNum + 1;
    pFVar6 = local_ed8.Vertices.AllocatorInstance.Data +
             (longlong)local_ed8.Vertices.ArrayNum * 0xb8;
    *(undefined8 *)pFVar6 = local_1b0;
    *(undefined8 *)(pFVar6 + 8) = uStack_1a8;
    *(undefined8 *)(pFVar6 + 0x10) = local_1a0;
    *(undefined8 *)(pFVar6 + 0x18) = uStack_198;
    *(undefined8 *)(pFVar6 + 0x20) = local_190;
    *(undefined8 *)(pFVar6 + 0x28) = uStack_188;
    *(undefined8 *)(pFVar6 + 0x30) = local_180;
    *(undefined8 *)(pFVar6 + 0x38) = uStack_178;
    *(undefined8 *)(pFVar6 + 0x40) = local_170;
    *(undefined8 *)(pFVar6 + 0x48) = uStack_168;
    *(undefined8 *)(pFVar6 + 0x50) = local_160;
    *(undefined8 *)(pFVar6 + 0x58) = uStack_158;
    *(undefined8 *)(pFVar6 + 0x60) = local_150;
    *(undefined8 *)(pFVar6 + 0x68) = uStack_148;
    *(undefined8 *)(pFVar6 + 0x70) = local_140;
    *(undefined8 *)(pFVar6 + 0x78) = uStack_138;
    *(undefined8 *)(pFVar6 + 0x80) = local_130;
    *(undefined8 *)(pFVar6 + 0x88) = uStack_128;
    *(undefined8 *)(pFVar6 + 0x90) = local_120;
    *(undefined8 *)(pFVar6 + 0x98) = uStack_118;
    *(undefined8 *)(pFVar6 + 0xa0) = local_110;
    *(undefined8 *)(pFVar6 + 0xa8) = uStack_108;
    *(undefined8 *)(pFVar6 + 0xb0) = local_100;
    local_ed8.Vertices.ArrayNum = iVar10;
    if (((local_ed8.Vertices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f8) &&
        ((FScriptContainerElement *)&local_f8 <
         local_ed8.Vertices.AllocatorInstance.Data + (longlong)local_ed8.Vertices.ArrayMax * 0xb8))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar10 = local_ed8.Vertices.ArrayNum;
    if (local_ed8.Vertices.ArrayNum == local_ed8.Vertices.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8b8,&local_ed8.Vertices.AllocatorInstance,&local_ed8.Vertices.ArrayMax);
    }
    local_ed8.Vertices.ArrayNum = iVar10 + 1;
    pFVar6 = local_ed8.Vertices.AllocatorInstance.Data + (longlong)iVar10 * 0xb8;
    *(undefined8 *)pFVar6 = local_f8;
    *(undefined8 *)(pFVar6 + 8) = uStack_f0;
    *(undefined8 *)(pFVar6 + 0x10) = local_e8;
    *(undefined8 *)(pFVar6 + 0x18) = uStack_e0;
    *(undefined8 *)(pFVar6 + 0x20) = local_d8;
    *(undefined8 *)(pFVar6 + 0x28) = uStack_d0;
    *(undefined8 *)(pFVar6 + 0x30) = local_c8;
    *(undefined8 *)(pFVar6 + 0x38) = uStack_c0;
    *(undefined8 *)(pFVar6 + 0x40) = local_b8;
    *(undefined8 *)(pFVar6 + 0x48) = uStack_b0;
    *(undefined8 *)(pFVar6 + 0x50) = local_a8;
    *(undefined8 *)(pFVar6 + 0x58) = uStack_a0;
    *(undefined8 *)(pFVar6 + 0x60) = local_98;
    *(undefined8 *)(pFVar6 + 0x68) = uStack_90;
    *(undefined8 *)(pFVar6 + 0x70) = local_88;
    *(undefined8 *)(pFVar6 + 0x78) = uStack_80;
    *(undefined8 *)(pFVar6 + 0x80) = local_78;
    *(undefined8 *)(pFVar6 + 0x88) = uStack_70;
    *(undefined8 *)(pFVar6 + 0x90) = local_68;
    *(undefined8 *)(pFVar6 + 0x98) = uStack_60;
    *(undefined8 *)(pFVar6 + 0xa0) = local_58;
    *(undefined8 *)(pFVar6 + 0xa8) = uStack_50;
    *(undefined8 *)(pFVar6 + 0xb0) = local_48;
    iVar10 = *piVar2;
    if (0 < iVar10) {
      do {
        uVar8 = ~uVar7 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar7 < iVar10) {
          uVar5 = uVar8;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar4 = MergeTriangleIntoPolygon
                          (&local_ed8,
                           (FClipSMTriangle *)
                           ((param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x860));
        if (bVar4) {
          uVar5 = 0;
          if ((int)uVar7 < *piVar2) {
            uVar5 = uVar8;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar6 = (param_1->AllocatorInstance).Data;
          iVar10 = *piVar2 + ~uVar7;
          if (1 < iVar10) {
            iVar10 = 1;
          }
          if (iVar10 != 0) {
            memmove(pFVar6 + (longlong)(int)uVar7 * 0x860,
                    pFVar6 + (longlong)(*piVar2 - iVar10) * 0x860,(longlong)iVar10 * 0x860);
          }
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x860,0x10,&param_1->AllocatorInstance,*piVar2,&param_1->ArrayMax);
          uVar7 = 0xffffffff;
        }
        iVar10 = *piVar2;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar10);
    }
    if (((local_ef8.Data <= &local_ed8) &&
        (&local_ed8 < (FClipSMPolygon *)(local_ef8.Data + (longlong)local_eec * 0x640))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_ef0 == local_eec) {
      local_ef0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x640,0x10,&local_ef8,&local_eec);
    }
    _Dst = local_ef8.Data + (longlong)local_ef0 * 0x640;
    local_ef0 = local_ef0 + 1;
    memcpy(_Dst,&local_ed8,0x630);
    _Src.Data = local_ed8.Vertices.AllocatorInstance.Data;
    pFVar6 = _Dst + 0x630;
    *(FScriptContainerElement **)pFVar6 = (FScriptContainerElement *)0x0;
    lVar9 = (longlong)local_ed8.Vertices.ArrayNum;
    *(int *)(_Dst + 0x638) = local_ed8.Vertices.ArrayNum;
    if (local_ed8.Vertices.ArrayNum == 0) {
      *(int *)(_Dst + 0x63c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,local_ed8.Vertices.ArrayNum,0,(ForAnyElementType *)pFVar6,
                 local_ed8.Vertices.ArrayNum,(int *)(_Dst + 0x63c));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar6,_Src.Data,lVar9 * 0xb8);
    }
    if (local_ed8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ed8.Vertices.AllocatorInstance.Data);
    }
    iVar10 = *piVar2;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Split2DPolysWithPlane @ 147c86790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGeomTools::Split2DPolysWithPlane
          (FUtilPoly2DSet *param_1,TPlane<double> *param_2,FColor *param_3,FColor *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ForAnyElementType _Src;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  FColor_u_0 *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  double *pdVar29;
  uint uVar30;
  ulonglong uVar31;
  FScriptContainerElement *pFVar32;
  uint uVar33;
  uint uVar34;
  double dVar35;
  double dVar36;
  undefined1 auStackY_2e8 [32];
  ForAnyElementType local_298;
  undefined8 local_290;
  char local_288;
  ForAnyElementType local_280;
  int local_278 [3];
  int local_26c;
  uint local_268;
  longlong local_260;
  uint local_258;
  uint local_254;
  uint local_250;
  longlong local_248;
  longlong local_240;
  FScriptContainerElement *local_238;
  FScriptContainerElement *local_230;
  FColor_u_0 *local_228;
  FColor_u_0 *local_220;
  FUtilPoly2DSet *local_218;
  double local_210;
  double dStack_208;
  FColor_u_0 local_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  double local_1e0;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  dVar5 = param_2->W;
  dVar6 = (double)param_2->_padding_;
  dVar7 = (double)param_2->_padding_;
  dVar8 = (double)param_2->_padding_;
  dVar13 = dVar5 * dVar6;
  dVar35 = dVar5 * dVar7;
  dVar5 = dVar5 * dVar8;
  local_228 = &param_3->field0_0x0;
  local_220 = &param_4->field0_0x0;
  local_218 = param_1;
  UE::Math::TMatrix<double>::InverseFast(&param_1->PolyToWorld,&local_1d8);
  dVar12 = 0.0;
  dVar11 = local_1d8.M[1][0] * dVar7 + local_1d8.M[0][0] * dVar6 + local_1d8.M[2][0] * dVar8 +
           local_1d8.M[3][0] * 0.0;
  dVar36 = local_1d8.M[1][1] * dVar7 + local_1d8.M[0][1] * dVar6 + local_1d8.M[2][1] * dVar8 +
           local_1d8.M[3][1] * 0.0;
  dVar6 = local_1d8.M[1][2] * dVar7 + local_1d8.M[0][2] * dVar6 + local_1d8.M[2][2] * dVar8 +
          local_1d8.M[3][2] * 0.0;
  uVar33 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar34 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3feff7ced9100000 <= (double)CONCAT44(uVar34,uVar33) &&
      (double)CONCAT44(uVar34,uVar33) != __real_3feff7ced9100000) {
    if (0.0 < (float)(((param_1->PolyToWorld).M[3][0] * (double)param_2->_padding_ +
                       (param_1->PolyToWorld).M[3][1] * (double)param_2->_padding_ +
                      (param_1->PolyToWorld).M[3][2] * (double)param_2->_padding_) - param_2->W)) {
      DestructItems<FUtilPoly2D,int>
                ((FUtilPoly2D *)(param_1->Polys).AllocatorInstance.Data,(param_1->Polys).ArrayNum);
      piVar1 = &(param_1->Polys).ArrayMax;
      (param_1->Polys).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)param_1,0,piVar1);
      }
    }
  }
  else {
    UE::Math::TMatrix<double>::InverseFast(&param_1->PolyToWorld,&local_158);
    dVar14 = __real_3ff0000000000000;
    dVar7 = local_158.M[1][0] * dVar35 + local_158.M[0][0] * dVar13 + local_158.M[2][0] * dVar5 +
            local_158.M[3][0] * __real_3ff0000000000000;
    dVar8 = local_158.M[1][1] * dVar35 + local_158.M[0][1] * dVar13 + local_158.M[2][1] * dVar5 +
            local_158.M[3][1] * __real_3ff0000000000000;
    dVar5 = local_158.M[1][2] * dVar35 + local_158.M[0][2] * dVar13 + local_158.M[2][2] * dVar5 +
            local_158.M[3][2] * __real_3ff0000000000000;
    dVar35 = (dVar5 - (__real_3ff0000000000000 - dVar6 * dVar6) * __real_4024000000000000) - dVar5;
    dVar13 = (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z - dVar5) / dVar35;
    dVar7 = ((dVar7 - dVar6 * dVar11 * __real_c024000000000000) - dVar7) * dVar13 + dVar7;
    dVar8 = ((dVar8 - dVar6 * dVar36 * __real_c024000000000000) - dVar8) * dVar13 + dVar8;
    iVar16 = _finite(dVar7);
    if ((((iVar16 == 0) || (iVar16 = _finite(dVar8), iVar16 == 0)) ||
        (iVar16 = _finite(dVar13 * dVar35 + dVar5), iVar16 == 0)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Intersect.ContainsNaN()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeomTools.cpp"
                            ,0x336,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    dVar5 = dVar36 * dVar36 + dVar11 * dVar11;
    if (dVar5 <= __real_3e45798ee0000000) {
      dVar36 = 0.0;
    }
    else {
      local_1e0 = dVar14 / SQRT(dVar5);
      dVar12 = local_1e0 * dVar11;
      dVar36 = local_1e0 * dVar36;
    }
    uVar33 = (param_1->Polys).ArrayNum - 1;
    if (-1 < (int)uVar33) {
      local_240 = (longlong)(int)uVar33;
      lVar22 = local_240 << 4;
      uVar25 = 0;
      do {
        local_250 = ~uVar33;
        uVar34 = local_250 >> 0x1f;
        uVar24 = 0;
        uVar30 = uVar24;
        if ((int)uVar33 < (param_1->Polys).ArrayNum) {
          uVar30 = uVar34;
        }
        local_268 = uVar33;
        local_260 = lVar22;
        local_254 = uVar34;
        if ((uVar30 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar32 = (param_1->Polys).AllocatorInstance.Data + lVar22;
        iVar16 = *(int *)&pFVar32[8].field_0x0;
        local_280.Data = (FScriptContainerElement *)0x0;
        local_278[0] = 0;
        local_278[1] = 0;
        local_26c = iVar16;
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar16,&local_280,local_278,local_278 + 1);
        memset(local_280.Data + (longlong)iVar17 * 4,0,(longlong)iVar16 << 2);
        if (iVar16 < 1) {
          local_298.Data = (FScriptContainerElement *)0x0;
          local_290 = 0;
        }
        else {
          uVar21 = uVar25;
          uVar27 = uVar25;
          uVar31 = uVar25;
          do {
            uVar34 = (uint)uVar21;
            uVar33 = uVar24;
            if ((int)uVar34 < *(int *)&pFVar32[8].field_0x0) {
              uVar33 = ~uVar34 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            dVar5 = *(double *)(*(longlong *)&pFVar32->field_0x0 + uVar27 + 8);
            dVar6 = *(double *)(*(longlong *)&pFVar32->field_0x0 + uVar27);
            uVar33 = uVar24;
            if ((int)uVar34 < local_278[0]) {
              uVar33 = ~uVar34 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar21 = (ulonglong)(uVar34 + 1);
            uVar27 = uVar27 + 0x30;
            *(float *)(local_280.Data + uVar31 * 4) =
                 (float)(((double)(float)dVar36 * dVar5 + (double)(float)dVar12 * dVar6) -
                        (double)(float)(dVar36 * dVar8 + dVar12 * dVar7));
            uVar31 = uVar31 + 1;
          } while ((int)(uVar34 + 1) < iVar16);
          local_298.Data = (FScriptContainerElement *)0x0;
          local_290 = 0;
          local_248 = 0;
          uVar21 = uVar25;
          uVar27 = uVar25;
          do {
            lVar22 = local_248;
            uVar30 = (uint)uVar27;
            uVar34 = ~uVar30 >> 0x1f;
            uVar33 = uVar24;
            if ((int)uVar30 < local_278[0]) {
              uVar33 = uVar34;
            }
            if ((uVar33 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            bVar15 = *(float *)(local_280.Data + uVar21 * 4) != 0.0;
            bVar9 = *(float *)(local_280.Data + uVar21 * 4) <= 0.0;
            local_288 = bVar9 && bVar15;
            if (bVar9 && bVar15) {
              uVar33 = uVar24;
              if ((int)uVar30 < *(int *)&pFVar32[8].field_0x0) {
                uVar33 = uVar34;
              }
              if ((uVar33 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar28 = (FScriptContainerElement *)(*(longlong *)&pFVar32->field_0x0 + lVar22);
              if (((local_298.Data <= pFVar28) &&
                  (pFVar28 < local_298.Data + (longlong)local_290._4_4_ * 0x30)) &&
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
              if ((int)local_290 == local_290._4_4_) {
                iVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x830,&local_298,(int *)((longlong)&local_290 + 4));
                local_290 = CONCAT44(local_290._4_4_,iVar16);
              }
              lVar22 = (longlong)(int)local_290;
              local_290 = CONCAT44(local_290._4_4_,(int)local_290 + 1);
              dVar5 = *(double *)(pFVar28 + 8);
              *(double *)(local_298.Data + lVar22 * 0x30) = *(double *)pFVar28;
              *(double *)(local_298.Data + lVar22 * 0x30 + 8) = dVar5;
              dVar5 = *(double *)(pFVar28 + 0x18);
              *(double *)(local_298.Data + lVar22 * 0x30 + 0x10) = *(double *)(pFVar28 + 0x10);
              *(double *)(local_298.Data + lVar22 * 0x30 + 0x10 + 8) = dVar5;
              dVar5 = *(double *)(pFVar28 + 0x28);
              *(double *)(local_298.Data + lVar22 * 0x30 + 0x20) = *(double *)(pFVar28 + 0x20);
              *(double *)(local_298.Data + lVar22 * 0x30 + 0x20 + 8) = dVar5;
            }
            local_258 = uVar30 + 1;
            uVar20 = (int)local_258 % local_26c;
            lVar22 = (longlong)(int)uVar20;
            uVar26 = ~uVar20 >> 0x1f;
            uVar18 = 0;
            uVar33 = uVar18;
            if ((int)uVar20 < local_278[0]) {
              uVar33 = uVar26;
            }
            if ((uVar33 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_238 = local_280.Data;
            uVar33 = uVar18;
            if ((int)uVar30 < local_278[0]) {
              uVar33 = uVar34;
            }
            if ((uVar33 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (*(float *)(local_280.Data + uVar21 * 4) * *(float *)(local_238 + lVar22 * 4) < 0.0)
            {
              uVar33 = uVar18;
              if ((int)uVar30 < local_278[0]) {
                uVar33 = uVar34;
              }
              if ((uVar33 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              local_238 = local_280.Data;
              uVar33 = uVar18;
              if ((int)uVar20 < local_278[0]) {
                uVar33 = uVar26;
              }
              if ((uVar33 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              local_230 = local_280.Data;
              uVar33 = uVar18;
              if ((int)uVar30 < local_278[0]) {
                uVar33 = uVar34;
              }
              if ((uVar33 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              fVar2 = *(float *)(local_238 + uVar21 * 4);
              fVar3 = *(float *)(local_230 + lVar22 * 4);
              fVar4 = *(float *)(local_280.Data + uVar21 * 4);
              uVar33 = uVar18;
              if ((int)uVar20 < *(int *)&pFVar32[8].field_0x0) {
                uVar33 = uVar26;
              }
              if ((uVar33 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pdVar29 = (double *)(*(longlong *)&pFVar32->field_0x0 + lVar22 * 0x30);
              uVar33 = uVar18;
              if ((int)uVar30 < *(int *)&pFVar32[8].field_0x0) {
                uVar33 = uVar34;
              }
              if ((uVar33 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar23 = local_248;
              lVar22 = *(longlong *)&pFVar32->field_0x0;
              dVar5 = (double)(fVar4 / (fVar2 - fVar3));
              dVar6 = (pdVar29[1] - *(double *)(lVar22 + local_248 + 8)) * dVar5 +
                      *(double *)(lVar22 + local_248 + 8);
              dVar5 = (*pdVar29 - *(double *)(lVar22 + local_248)) * dVar5 +
                      *(double *)(lVar22 + local_248);
              if ((int)uVar30 < *(int *)&pFVar32[8].field_0x0) {
                uVar18 = uVar34;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar19 = local_228;
              if (*(char *)(*(longlong *)&pFVar32->field_0x0 + lVar23 + 0x28) != '\0') {
                pFVar19 = local_220;
              }
              uStack_1f8 = 0;
              uStack_1f0 = 0;
              uStack_1e8 = 0;
              local_200 = (FColor_u_0)pFVar19->Bits;
              local_210 = dVar5;
              dStack_208 = dVar6;
              if (local_288 == '\0') {
                uVar33 = 0;
                if ((int)uVar30 < *(int *)&pFVar32[8].field_0x0) {
                  uVar33 = uVar34;
                }
                if ((uVar33 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                if (*(char *)(*(longlong *)&pFVar32->field_0x0 + lVar23 + 0x28) != '\0')
                goto LAB_147c8724e;
              }
              else {
LAB_147c8724e:
                uStack_1e8 = 1;
              }
              if (((local_298.Data <= (FScriptContainerElement *)&local_210) &&
                  ((FScriptContainerElement *)&local_210 <
                   local_298.Data + (longlong)local_290._4_4_ * 0x30)) &&
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
              if ((int)local_290 == local_290._4_4_) {
                iVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x830,&local_298,(int *)((longlong)&local_290 + 4));
                local_290 = CONCAT44(local_290._4_4_,iVar16);
              }
              lVar22 = (longlong)(int)local_290;
              local_290 = CONCAT44(local_290._4_4_,(int)local_290 + 1);
              *(double *)(local_298.Data + lVar22 * 0x30) = local_210;
              *(double *)(local_298.Data + lVar22 * 0x30 + 8) = dStack_208;
              *(ulonglong *)(local_298.Data + lVar22 * 0x30 + 0x10) =
                   CONCAT44(uStack_1fc,local_200.Bits);
              *(undefined8 *)(local_298.Data + lVar22 * 0x30 + 0x10 + 8) = uStack_1f8;
              *(undefined8 *)(local_298.Data + lVar22 * 0x30 + 0x20) = uStack_1f0;
              *(ulonglong *)(local_298.Data + lVar22 * 0x30 + 0x20 + 8) =
                   CONCAT71(uStack_1e7,uStack_1e8);
              local_248 = lVar23;
            }
            uVar27 = (ulonglong)local_258;
            local_248 = local_248 + 0x30;
            uVar21 = uVar21 + 1;
            param_1 = local_218;
            uVar33 = local_268;
            uVar34 = local_254;
          } while ((int)local_258 < local_26c);
        }
        _Src.Data = local_298.Data;
        lVar23 = (longlong)(int)local_290;
        if ((int)local_290 == 0) {
          uVar30 = 0;
          if ((int)uVar33 < (param_1->Polys).ArrayNum) {
            uVar30 = uVar34;
          }
          if ((uVar30 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar22 = local_260;
          pFVar32 = (param_1->Polys).AllocatorInstance.Data + local_260;
          if (*(void **)pFVar32 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar32);
          }
          iVar16 = local_250 + (param_1->Polys).ArrayNum;
          if (iVar16 != 0) {
            memmove(pFVar32,pFVar32 + 0x10,(longlong)iVar16 << 4);
          }
          piVar1 = &(param_1->Polys).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(ForAnyElementType *)param_1,(param_1->Polys).ArrayNum,
                     &(param_1->Polys).ArrayMax);
        }
        else {
          lVar22 = local_260;
          if (pFVar32 != (FScriptContainerElement *)&local_298) {
            iVar16 = *(int *)(pFVar32 + 0xc);
            *(int *)&pFVar32[8].field_0x0 = (int)local_290;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,(int)local_290,iVar16,(ForAnyElementType *)pFVar32,(int)local_290,
                       (int *)(pFVar32 + 0xc));
            memcpy(*(void **)&pFVar32->field_0x0,_Src.Data,lVar23 * 0x30);
            lVar22 = local_260;
          }
        }
        if (local_298.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data);
        }
        if (local_280.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data);
        }
        uVar33 = uVar33 - 1;
        local_240 = local_240 + -1;
        lVar22 = lVar22 + -0x10;
      } while (-1 < (int)uVar33);
    }
  }
  return;
}

// Transform2DPolygonToSMPolygon @ 147c8a640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FClipSMPolygon * __cdecl
FGeomTools::Transform2DPolygonToSMPolygon
          (FClipSMPolygon *__return_storage_ptr__,FUtilPoly2D *param_1,TMatrix<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  longlong lVar14;
  bool bVar15;
  uint uVar16;
  FClipSMPolygon *pFVar17;
  uint uVar18;
  int iVar19;
  FScriptContainerElement *_Dst;
  uint uVar20;
  double dVar21;
  double dVar22;
  longlong local_res10;
  
  memset(__return_storage_ptr__,0,0x640);
  dVar22 = _UNK_15061cbc8;
  dVar3 = ___xmm_3ff00000000000000000000000000000;
  iVar19 = (param_1->Verts).ArrayNum;
  uVar20 = 0;
  if (0 < iVar19) {
    local_res10 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar20 < iVar19) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar2 = (code *)swi(3);
        pFVar17 = (FClipSMPolygon *)(*pcVar2)();
        return pFVar17;
      }
      uVar16 = (__return_storage_ptr__->Vertices).ArrayNum;
      pFVar1 = (param_1->Verts).AllocatorInstance.Data;
      if (uVar16 == (__return_storage_ptr__->Vertices).ArrayMax) {
        uVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8b8,&(__return_storage_ptr__->Vertices).AllocatorInstance,
                            &(__return_storage_ptr__->Vertices).ArrayMax);
      }
      (__return_storage_ptr__->Vertices).ArrayNum = uVar16 + 1;
      uVar18 = 0;
      if ((int)uVar16 < (int)(uVar16 + 1)) {
        uVar18 = ~uVar16 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar2 = (code *)swi(3);
        pFVar17 = (FClipSMPolygon *)(*pcVar2)();
        return pFVar17;
      }
      _Dst = (__return_storage_ptr__->Vertices).AllocatorInstance.Data +
             (longlong)(int)uVar16 * 0xb8;
      memset(_Dst,0,0xb8);
      dVar4 = param_2->M[1][1];
      uVar20 = uVar20 + 1;
      dVar21 = param_2->M[0][1];
      dVar5 = param_2->M[2][1];
      dVar6 = *(double *)(pFVar1 + local_res10);
      dVar7 = *(double *)(pFVar1 + local_res10 + 8);
      dVar8 = param_2->M[1][2];
      dVar9 = param_2->M[3][1];
      dVar10 = param_2->M[2][2];
      dVar11 = param_2->M[0][2];
      dVar12 = param_2->M[3][2];
      *(float *)_Dst =
           (float)(param_2->M[1][0] * dVar7 + param_2->M[0][0] * dVar6 + param_2->M[2][0] * dVar3 +
                  param_2->M[3][0] * dVar22);
      *(float *)(_Dst + 4) =
           (float)(dVar4 * dVar7 + dVar21 * dVar6 + dVar5 * dVar3 + dVar9 * dVar22);
      *(float *)(_Dst + 8) =
           (float)(dVar8 * dVar7 + dVar11 * dVar6 + dVar10 * dVar3 + dVar12 * dVar22);
      *(undefined4 *)(_Dst + 0xb0) = *(undefined4 *)(pFVar1 + local_res10 + 0x10);
      lVar14 = local_res10 + 0x18;
      uVar13 = *(undefined8 *)(pFVar1 + lVar14 + 8);
      local_res10 = local_res10 + 0x30;
      *(undefined8 *)(_Dst + 0x30) = *(undefined8 *)(pFVar1 + lVar14);
      *(undefined8 *)(_Dst + 0x38) = uVar13;
      iVar19 = (param_1->Verts).ArrayNum;
    } while ((int)uVar20 < iVar19);
  }
  dVar3 = param_2->M[0][0] * 0.0 + param_2->M[1][0] * 0.0 +
          ___xmm_0000000000000000bff0000000000000 * param_2->M[2][0] +
          param_2->M[3][0] * _UNK_15076ad98;
  dVar22 = param_2->M[0][1] * 0.0 + param_2->M[1][1] * 0.0 +
           ___xmm_0000000000000000bff0000000000000 * param_2->M[2][1] +
           param_2->M[3][1] * _UNK_15076ad98;
  dVar4 = param_2->M[1][2] * 0.0 + param_2->M[0][2] * 0.0 +
          param_2->M[2][2] * ___xmm_0000000000000000bff0000000000000 +
          param_2->M[3][2] * _UNK_15076ad98;
  dVar21 = dVar22 * dVar22 + dVar3 * dVar3 + dVar4 * dVar4;
  if (dVar21 <= __real_3e45798ee0000000) {
    dVar22 = 0.0;
    dVar4 = 0.0;
    dVar3 = 0.0;
  }
  else {
    dVar21 = __real_3ff0000000000000 / SQRT(dVar21);
    dVar22 = dVar22 * dVar21;
    dVar4 = dVar4 * dVar21;
    dVar3 = dVar3 * dVar21;
  }
  __return_storage_ptr__->_padding_ = (longlong)dVar3;
  __return_storage_ptr__->_padding_ = (longlong)dVar22;
  __return_storage_ptr__->_padding_ = (longlong)dVar4;
  return __return_storage_ptr__;
}

// TriangulatePoly @ 147c8c2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FGeomTools::TriangulatePoly
          (TArray<FClipSMTriangle,TSizedDefaultAllocator<32>_> *param_1,FClipSMPolygon *param_2,
          bool param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  float fVar5;
  ForAnyElementType FVar6;
  TArray<FClipSMTriangle,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FClipSMVertex *pFVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FClipSMVertex *pFVar23;
  int iVar24;
  ulonglong uVar25;
  FScriptContainerElement *pFVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStackY_b28 [32];
  ForAnyElementType local_ad8;
  uint local_ad0;
  int local_acc;
  char local_ac8;
  uint local_ac4;
  FClipSMVertex *local_ac0;
  uint local_ab8;
  uint local_ab4;
  longlong local_ab0;
  longlong local_aa8;
  longlong local_aa0;
  uint local_a98;
  uint local_a94;
  FClipSMPolygon *local_a90;
  TArray<FClipSMTriangle,TSizedDefaultAllocator<32>_> *local_a88;
  FClipSMVertex local_a80;
  TVector<float>_u_0 local_9c8 [2];
  TVector<float>_u_0 aTStack_9b0 [2];
  TVector2<double>_u_0 local_998;
  TVector2<double>_u_0 local_988;
  TVector2<double>_u_0 local_978;
  TVector2<double>_u_0 local_968;
  TVector2<double>_u_0 local_958;
  TVector2<double>_u_0 local_948;
  TVector2<double>_u_0 local_938;
  TVector2<double>_u_0 local_928 [2];
  FScriptContainerElement local_908 [1584];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_b28;
  local_ad0 = (param_2->Vertices).ArrayNum;
  lVar19 = (longlong)(int)local_ad0;
  if ((int)local_ad0 < 3) {
    return true;
  }
  pFVar17 = (param_2->Vertices).AllocatorInstance.Data;
  local_ad8.Data = (FScriptContainerElement *)0x0;
  local_ac8 = param_3;
  local_a90 = param_2;
  local_a88 = param_1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xb8,8,local_ad0,0,&local_ad8,local_ad0,&local_acc);
  memcpy(local_ad8.Data,pFVar17,lVar19 * 0xb8);
  fVar5 = __real_3727c5ac;
  do {
    if ((param_3 == false) && (iVar24 = 0, 0 < (int)local_ad0)) {
      iVar27 = 2;
      iVar20 = 1;
      do {
        local_ac4 = iVar24 % (int)local_ad0;
        uVar11 = iVar20 % (int)local_ad0;
        uVar12 = iVar27 % (int)local_ad0;
        uVar15 = 0;
        if ((int)uVar12 < (int)local_ad0) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        pFVar23 = (FClipSMVertex *)(local_ad8.Data + (longlong)(int)uVar12 * 0xb8);
        uVar15 = 0;
        if ((int)uVar11 < (int)local_ad0) {
          uVar15 = ~uVar11 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        local_ab0 = (longlong)(int)uVar11 * 0xb8;
        local_ac0 = (FClipSMVertex *)(local_ad8.Data + local_ab0);
        uVar15 = 0;
        if ((int)local_ac4 < (int)local_ad0) {
          uVar15 = ~local_ac4 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        pFVar14 = (FClipSMVertex *)(local_ad8.Data + (longlong)(int)local_ac4 * 0xb8);
        fVar1 = (pFVar14->Pos).field0_0x0._s_0.X;
        fVar2 = (pFVar14->Pos).field0_0x0._s_0.Y;
        fVar30 = (pFVar23->Pos).field0_0x0._s_0.X - fVar1;
        fVar3 = (pFVar14->Pos).field0_0x0._s_0.Z;
        fVar31 = (pFVar23->Pos).field0_0x0._s_0.Y - fVar2;
        fVar32 = (pFVar23->Pos).field0_0x0._s_0.Z - fVar3;
        fVar28 = fVar31 * fVar31 + fVar30 * fVar30 + fVar32 * fVar32;
        if (fVar28 <= fVar5) {
LAB_147c8c677:
          uVar15 = 0;
          if ((int)uVar11 < (int)local_ad0) {
            uVar15 = ~uVar11 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          iVar10 = (local_ad0 - uVar11) + -1;
          if (iVar10 != 0) {
            memmove(local_ad8.Data + local_ab0,local_ad8.Data + local_ab0 + 0xb8,
                    (longlong)iVar10 * 0xb8);
          }
          local_ad0 = local_ad0 - 1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xb8,8,&local_ad8,local_ad0,&local_acc);
          iVar24 = iVar24 + -1;
          iVar20 = iVar20 + -1;
          iVar27 = iVar27 + -1;
        }
        else {
          pFVar23 = InterpolateVert(&local_a80,pFVar14,pFVar23,
                                    (((local_ac0->Pos).field0_0x0._s_0.Y - fVar2) * fVar31 +
                                     ((local_ac0->Pos).field0_0x0._s_0.X - fVar1) * fVar30 +
                                    ((local_ac0->Pos).field0_0x0._s_0.Z - fVar3) * fVar32) / fVar28)
          ;
          local_9c8[0]._0_8_ = *(undefined8 *)&(pFVar23->Pos).field0_0x0;
          local_9c8._8_8_ = *(undefined8 *)((longlong)&(pFVar23->Pos).field0_0x0 + 8);
          local_9c8[1]._4_8_ = *(undefined8 *)((longlong)&(pFVar23->TangentX).field0_0x0 + 4);
          aTStack_9b0[0]._0_8_ = *(undefined8 *)&(pFVar23->TangentY).field0_0x0;
          aTStack_9b0._8_8_ = *(undefined8 *)((longlong)&(pFVar23->TangentY).field0_0x0 + 8);
          aTStack_9b0[1]._4_8_ = *(undefined8 *)((longlong)&(pFVar23->TangentZ).field0_0x0 + 4);
          local_998._s_0.X = pFVar23->UVs[0].field0_0x0._s_0.X;
          local_998._s_0.Y = pFVar23->UVs[0].field0_0x0._s_0.Y;
          local_988._s_0.X = pFVar23->UVs[1].field0_0x0._s_0.X;
          local_988._s_0.Y = pFVar23->UVs[1].field0_0x0._s_0.Y;
          local_978._s_0.X = pFVar23->UVs[2].field0_0x0._s_0.X;
          local_978._s_0.Y = pFVar23->UVs[2].field0_0x0._s_0.Y;
          local_968._s_0.X = pFVar23->UVs[3].field0_0x0._s_0.X;
          local_968._s_0.Y = pFVar23->UVs[3].field0_0x0._s_0.Y;
          local_958._s_0.X = pFVar23->UVs[4].field0_0x0._s_0.X;
          local_958._s_0.Y = pFVar23->UVs[4].field0_0x0._s_0.Y;
          local_948._s_0.X = pFVar23->UVs[5].field0_0x0._s_0.X;
          local_948._s_0.Y = pFVar23->UVs[5].field0_0x0._s_0.Y;
          local_938._s_0.X = pFVar23->UVs[6].field0_0x0._s_0.X;
          local_938._s_0.Y = pFVar23->UVs[6].field0_0x0._s_0.Y;
          local_928[0]._0_8_ = pFVar23->UVs[7].field0_0x0._s_0.X;
          local_928[0]._8_8_ = pFVar23->UVs[7].field0_0x0._s_0.Y;
          local_928[1]._0_4_ = (pFVar23->Color).field0_0x0;
          local_928[1]._4_4_ = *(undefined4 *)&pFVar23->field_0xb4;
          bVar8 = VertsAreEqual((FClipSMVertex *)local_9c8,local_ac0);
          if (bVar8) goto LAB_147c8c677;
        }
        iVar24 = iVar24 + 1;
        iVar20 = iVar20 + 1;
        iVar27 = iVar27 + 1;
      } while (iVar24 < (int)local_ad0);
    }
    if ((int)local_ad0 < 3) {
      bVar8 = true;
LAB_147c8cfb3:
      if (local_ad8.Data == (FScriptContainerElement *)0x0) {
        return bVar8;
      }
      FMemory::Free(local_ad8.Data);
      return bVar8;
    }
    local_aa0 = 0;
    if ((int)local_ad0 < 1) {
LAB_147c8cf5a:
      if (4 < (byte)LogGeomTools._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGeomTools);
      }
      local_a88->ArrayNum = 0;
      if (local_a88->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x860,0x10,0,&local_a88->AllocatorInstance,0,&local_a88->ArrayMax);
      }
      bVar8 = false;
      goto LAB_147c8cfb3;
    }
    local_aa8 = 0;
    uVar15 = local_ad0;
    uVar11 = 0;
    while( true ) {
      uVar12 = uVar15;
      if (uVar11 != 0) {
        uVar12 = uVar11;
      }
      uVar12 = uVar12 - 1;
      local_a94 = uVar11 + 1;
      uVar21 = ~uVar11 >> 0x1f;
      uVar13 = (int)local_a94 % (int)uVar15;
      uVar25 = (ulonglong)(int)uVar13;
      uVar16 = 0;
      if ((int)uVar11 < (int)uVar15) {
        uVar16 = uVar21;
      }
      local_ab8 = uVar21;
      local_a98 = uVar13;
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar15 = local_ad0, bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      FVar6.Data = local_ad8.Data;
      uVar16 = ~uVar12 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar12 < (int)uVar15) {
        uVar18 = uVar16;
      }
      local_ac4 = uVar16;
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar15 = local_ad0, bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      local_ab0 = (longlong)(int)uVar12 * 0xb8;
      fVar1 = *(float *)(FVar6.Data + local_aa8);
      fVar2 = *(float *)(FVar6.Data + local_aa8 + 4);
      fVar3 = *(float *)(FVar6.Data + local_aa8 + 8);
      local_ab4 = ~uVar13 >> 0x1f;
      fVar28 = *(float *)(local_ad8.Data + local_ab0);
      fVar30 = *(float *)(local_ad8.Data + local_ab0 + 4);
      fVar31 = *(float *)(local_ad8.Data + local_ab0 + 8);
      uVar18 = 0;
      if ((int)uVar13 < (int)uVar15) {
        uVar18 = local_ab4;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar15 = local_ad0, bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      FVar6.Data = local_ad8.Data;
      local_ac0 = (FClipSMVertex *)(uVar25 * 0xb8);
      uVar18 = 0;
      if ((int)uVar12 < (int)uVar15) {
        uVar18 = uVar16;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar15 = local_ad0, bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      fVar32 = *(float *)((undefined1 *)((longlong)&(local_ac0->Pos).field0_0x0 + 8) +
                         (longlong)FVar6.Data) - *(float *)(local_ad8.Data + local_ab0 + 8);
      fVar29 = *(float *)((undefined1 *)((longlong)&(local_ac0->Pos).field0_0x0 + 4) +
                         (longlong)FVar6.Data) - *(float *)(local_ad8.Data + local_ab0 + 4);
      if (0.0 <= ((fVar3 - fVar31) *
                  (*(float *)(FVar6.Data + (longlong)(local_ac0->UVs + -3)) -
                  *(float *)(local_ad8.Data + local_ab0)) - (fVar1 - fVar28) * fVar32) *
                 (float)(double)local_a90->_padding_ +
                 ((fVar2 - fVar30) * fVar32 - (fVar3 - fVar31) * fVar29) *
                 (float)(double)local_a90->_padding_ +
                 ((fVar1 - fVar28) * fVar29 -
                 (fVar2 - fVar30) *
                 (*(float *)(FVar6.Data + (longlong)(local_ac0->UVs + -3)) -
                 *(float *)(local_ad8.Data + local_ab0))) * (float)(double)local_a90->_padding_)
      break;
LAB_147c8cf41:
      local_aa0 = local_aa0 + 1;
      local_aa8 = local_aa8 + 0xb8;
      uVar11 = local_a94;
      if ((int)uVar15 <= (int)local_a94) goto LAB_147c8cf5a;
    }
    uVar18 = 0;
    if (0 < (int)uVar15) {
      do {
        if (((uVar18 != uVar12) && (uVar18 != uVar11)) && (uVar18 != (uint)uVar25)) {
          uVar21 = 0;
          if ((int)uVar18 < (int)uVar15) {
            uVar21 = ~uVar18 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             uVar15 = local_ad0, bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          pFVar17 = local_ad8.Data + (longlong)(int)uVar18 * 0xb8;
          uVar21 = 0;
          if ((int)(uint)uVar25 < (int)uVar15) {
            uVar21 = local_ab4;
          }
          if ((uVar21 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             uVar15 = local_ad0, bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          pFVar22 = local_ad8.Data + (longlong)(local_ac0->UVs + -3);
          uVar21 = 0;
          if ((int)uVar11 < (int)uVar15) {
            uVar21 = local_ab8;
          }
          if ((uVar21 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             uVar15 = local_ad0, bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          pFVar26 = local_ad8.Data + local_aa8;
          uVar21 = 0;
          if ((int)uVar12 < (int)uVar15) {
            uVar21 = local_ac4;
          }
          if ((uVar21 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             uVar15 = local_ad0, bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          bVar8 = PointInTriangle((TVector<float> *)(local_ad8.Data + local_ab0),
                                  (TVector<float> *)pFVar26,(TVector<float> *)pFVar22,
                                  (TVector<float> *)pFVar17,0.0);
          if (bVar8) goto LAB_147c8cf41;
          uVar25 = (ulonglong)local_a98;
        }
        uVar13 = (uint)uVar25;
        uVar18 = uVar18 + 1;
        uVar21 = local_ab8;
        uVar16 = local_ac4;
        if ((int)uVar15 <= (int)uVar18) break;
      } while( true );
    }
    memset(local_908,0,0x860);
    memcpy(local_908,local_a90,0x630);
    uVar18 = 0;
    if ((int)uVar12 < (int)uVar15) {
      uVar18 = uVar16;
    }
    if ((uVar18 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar15 = local_ad0, bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    pFVar17 = local_ad8.Data + local_ab0;
    local_2d8 = *(undefined8 *)pFVar17;
    uStack_2d0 = *(undefined8 *)(pFVar17 + 8);
    local_2c8 = *(undefined8 *)(pFVar17 + 0x10);
    uStack_2c0 = *(undefined8 *)(pFVar17 + 0x18);
    local_2b8 = *(undefined8 *)(pFVar17 + 0x20);
    uStack_2b0 = *(undefined8 *)(pFVar17 + 0x28);
    local_2a8 = *(undefined8 *)(pFVar17 + 0x30);
    uStack_2a0 = *(undefined8 *)(pFVar17 + 0x38);
    local_298 = *(undefined8 *)(pFVar17 + 0x40);
    uStack_290 = *(undefined8 *)(pFVar17 + 0x48);
    local_288 = *(undefined8 *)(pFVar17 + 0x50);
    uStack_280 = *(undefined8 *)(pFVar17 + 0x58);
    local_278 = *(undefined8 *)(pFVar17 + 0x60);
    uStack_270 = *(undefined8 *)(pFVar17 + 0x68);
    local_268 = *(undefined8 *)(pFVar17 + 0x70);
    uStack_260 = *(undefined8 *)(pFVar17 + 0x78);
    local_258 = *(undefined8 *)(pFVar17 + 0x80);
    uStack_250 = *(undefined8 *)(pFVar17 + 0x88);
    local_248 = *(undefined8 *)(pFVar17 + 0x90);
    uStack_240 = *(undefined8 *)(pFVar17 + 0x98);
    local_238 = *(undefined8 *)(pFVar17 + 0xa0);
    uStack_230 = *(undefined8 *)(pFVar17 + 0xa8);
    local_228 = *(undefined8 *)(pFVar17 + 0xb0);
    uVar12 = 0;
    if ((int)uVar11 < (int)uVar15) {
      uVar12 = uVar21;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar15 = local_ad0, bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    pFVar17 = local_ad8.Data + local_aa0 * 0xb8;
    local_220 = *(undefined8 *)pFVar17;
    uStack_218 = *(undefined8 *)(pFVar17 + 8);
    local_210 = *(undefined8 *)(pFVar17 + 0x10);
    uStack_208 = *(undefined8 *)(pFVar17 + 0x18);
    local_200 = *(undefined8 *)(pFVar17 + 0x20);
    uStack_1f8 = *(undefined8 *)(pFVar17 + 0x28);
    local_1f0 = *(undefined8 *)(pFVar17 + 0x30);
    uStack_1e8 = *(undefined8 *)(pFVar17 + 0x38);
    local_1e0 = *(undefined8 *)(pFVar17 + 0x40);
    uStack_1d8 = *(undefined8 *)(pFVar17 + 0x48);
    local_1d0 = *(undefined8 *)(pFVar17 + 0x50);
    uStack_1c8 = *(undefined8 *)(pFVar17 + 0x58);
    local_1c0 = *(undefined8 *)(pFVar17 + 0x60);
    uStack_1b8 = *(undefined8 *)(pFVar17 + 0x68);
    local_1b0 = *(undefined8 *)(pFVar17 + 0x70);
    uStack_1a8 = *(undefined8 *)(pFVar17 + 0x78);
    local_1a0 = *(undefined8 *)(pFVar17 + 0x80);
    uStack_198 = *(undefined8 *)(pFVar17 + 0x88);
    local_190 = *(undefined8 *)(pFVar17 + 0x90);
    uStack_188 = *(undefined8 *)(pFVar17 + 0x98);
    local_180 = *(undefined8 *)(pFVar17 + 0xa0);
    uStack_178 = *(undefined8 *)(pFVar17 + 0xa8);
    local_170 = *(undefined8 *)(pFVar17 + 0xb0);
    uVar12 = 0;
    if ((int)uVar13 < (int)uVar15) {
      uVar12 = local_ab4;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    pTVar7 = local_a88;
    pFVar17 = local_ad8.Data + (longlong)local_ac0;
    local_168 = *(undefined8 *)pFVar17;
    uStack_160 = *(undefined8 *)(pFVar17 + 8);
    local_158 = *(undefined8 *)(pFVar17 + 0x10);
    uStack_150 = *(undefined8 *)(pFVar17 + 0x18);
    local_148 = *(undefined8 *)(pFVar17 + 0x20);
    uStack_140 = *(undefined8 *)(pFVar17 + 0x28);
    local_138 = *(undefined8 *)(pFVar17 + 0x30);
    uStack_130 = *(undefined8 *)(pFVar17 + 0x38);
    local_128 = *(undefined8 *)(pFVar17 + 0x40);
    uStack_120 = *(undefined8 *)(pFVar17 + 0x48);
    local_118 = *(undefined8 *)(pFVar17 + 0x50);
    uStack_110 = *(undefined8 *)(pFVar17 + 0x58);
    local_108 = *(undefined8 *)(pFVar17 + 0x60);
    uStack_100 = *(undefined8 *)(pFVar17 + 0x68);
    local_f8 = *(undefined8 *)(pFVar17 + 0x70);
    uStack_f0 = *(undefined8 *)(pFVar17 + 0x78);
    local_e8 = *(undefined8 *)(pFVar17 + 0x80);
    uStack_e0 = *(undefined8 *)(pFVar17 + 0x88);
    local_d8 = *(undefined8 *)(pFVar17 + 0x90);
    uStack_d0 = *(undefined8 *)(pFVar17 + 0x98);
    local_c8 = *(undefined8 *)(pFVar17 + 0xa0);
    uStack_c0 = *(undefined8 *)(pFVar17 + 0xa8);
    local_b8 = *(undefined8 *)(pFVar17 + 0xb0);
    pFVar17 = (local_a88->AllocatorInstance).Data;
    if (((pFVar17 <= local_908) && (local_908 < pFVar17 + (longlong)local_a88->ArrayMax * 0x860)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    iVar24 = pTVar7->ArrayNum;
    if (iVar24 == pTVar7->ArrayMax) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x860,0x10,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
    }
    pTVar7->ArrayNum = iVar24 + 1;
    memcpy((pTVar7->AllocatorInstance).Data + (longlong)iVar24 * 0x860,local_908,0x860);
    uVar15 = 0;
    if ((int)uVar11 < (int)local_ad0) {
      uVar15 = uVar21;
    }
    if ((uVar15 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    iVar24 = (local_ad0 - uVar11) + -1;
    if (iVar24 != 0) {
      memmove(local_ad8.Data + (longlong)(int)uVar11 * 0xb8,
              local_ad8.Data + (longlong)(int)uVar11 * 0xb8 + 0xb8,(longlong)iVar24 * 0xb8);
    }
    local_ad0 = local_ad0 - 1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,&local_ad8,local_ad0,&local_acc);
    param_3 = (bool)local_ac8;
  } while( true );
}

// VectorsOnSameSide @ 147c8fbd0

bool __cdecl
FGeomTools::VectorsOnSameSide
          (TVector<float> *param_1,TVector<float> *param_2,TVector<float> *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  fVar2 = (param_3->field0_0x0)._s_0.Z;
  fVar3 = (param_3->field0_0x0)._s_0.X;
  fVar4 = (param_1->field0_0x0)._s_0.Y;
  fVar5 = (param_2->field0_0x0)._s_0.X;
  fVar6 = (param_1->field0_0x0)._s_0.X;
  fVar7 = (param_3->field0_0x0)._s_0.Y;
  return 0.0 <= (fVar3 * fVar1 - fVar2 * fVar6) *
                (fVar5 * fVar1 - fVar6 * (param_2->field0_0x0)._s_0.Z) +
                (fVar2 * fVar4 - fVar7 * fVar1) *
                (fVar4 * (param_2->field0_0x0)._s_0.Z - fVar1 * (param_2->field0_0x0)._s_0.Y) +
                (fVar7 * fVar6 - fVar3 * fVar4) *
                (fVar6 * (param_2->field0_0x0)._s_0.Y - fVar5 * fVar4) + param_4;
}

