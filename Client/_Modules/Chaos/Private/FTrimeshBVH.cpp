// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 18

// FindAllIntersectionsNoMTD<Chaos::TBox<double,3>_> @ 143e8a370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::FindAllIntersectionsNoMTD<Chaos::TBox<double,3>_>
          (FTrimeshBVH *this,TAABB<double,3> *param_1,TRigidTransform<double,3> *param_2,
          TBox<double,3> *param_3,double param_4,TVector<double,3> *param_5,
          FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined7 extraout_var_00;
  ForElementType<int> FVar15;
  longlong lVar16;
  ForElementType<int> FVar17;
  uint uVar18;
  ulonglong uVar19;
  int *piVar20;
  ulonglong uVar21;
  int *piVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined1 auStackY_258 [32];
  undefined1 local_208 [8];
  int *local_200;
  longlong local_1f8;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  ForElementType<int> local_1d8;
  int local_190;
  int local_18c;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TBox<double,3>_> local_188;
  ulonglong local_68;
  undefined7 extraout_var;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1f0 = (float)*(double *)param_5;
  local_1ec = (float)*(double *)&param_5->field_0x8;
  local_1e8 = (float)*(double *)&param_5->field_0x10;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TBox<double,3>_>::
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TBox<double,3>_>
            (&local_188,param_2,param_3,param_4,(TVector<float,3> *)&local_1f0,param_6);
  dVar8 = *(double *)&param_1->MMin;
  fVar30 = (float)*(double *)&(param_1->MMin).field_0x8;
  fVar26 = (float)*(double *)&(param_1->MMin).field_0x10;
  dVar9 = *(double *)&param_1->MMax;
  fVar31 = (float)*(double *)&(param_1->MMax).field_0x8;
  fVar27 = (float)*(double *)&(param_1->MMax).field_0x10;
  if ((this->Nodes).ArrayNum != 0) {
    local_18c = 0x10;
    local_190 = 0;
    local_1d8.SecondaryData = (ForElementType<int>)0x0;
    local_208[0] = '\0';
    local_208[1] = '\0';
    local_208[2] = '\0';
    local_208[3] = '\0';
    iVar12 = 0;
    if ((&local_1d8 <= (ForElementType<int> *)local_208) && (local_208 < &local_1d8.SecondaryData))
    {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      iVar12 = local_190;
      if (local_190 == local_18c) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_1d8,&local_18c);
      }
    }
    local_190 = iVar12 + 1;
    FVar17 = (ForElementType<int>)&local_1d8;
    if (local_1d8.SecondaryData != (ForElementType<int>)0x0) {
      FVar17 = local_1d8.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar17 + (longlong)iVar12 * 4) = local_208._0_4_;
    piVar20 = &(this->Nodes).ArrayNum;
    FVar17 = local_1d8.SecondaryData;
    while (local_190 != 0) {
      piVar22 = &(this->Nodes).ArrayNum;
      local_200 = piVar20;
      if ((local_190 < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar17 = local_1d8.SecondaryData, bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      FVar15 = (ForElementType<int>)&local_1d8;
      if (FVar17 != (ForElementType<int>)0x0) {
        FVar15 = FVar17;
      }
      iVar12 = local_190 + -1;
      uVar13 = *(uint *)((longlong)FVar15 + (longlong)iVar12 * 4);
      FVar15 = (ForElementType<int>)&local_1d8;
      if (FVar17 != (ForElementType<int>)0x0) {
        FVar15 = FVar17;
      }
      _Dst = (void *)((longlong)FVar15 + (longlong)iVar12 * 4);
      iVar12 = (local_190 - iVar12) + -1;
      if (iVar12 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar12 << 2);
        FVar17 = local_1d8.SecondaryData;
      }
      local_190 = local_190 + -1;
      if ((((int)uVar13 < 0) || (piVar20 = piVar22, local_200 = piVar22, *piVar22 <= (int)uVar13))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Nodes.IsValidIndex(NodeIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                                 ,0xf6,L""), FVar17 = local_1d8.SecondaryData, bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      uVar14 = 0;
      if ((int)uVar13 < *piVar20) {
        uVar14 = (ulonglong)(~uVar13 >> 0x1f);
      }
      if ((int)uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar14 = CONCAT71(extraout_var,bVar10);
        FVar17 = local_1d8.SecondaryData;
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
      }
      pFVar25 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x50;
      local_1f8 = 0;
      pFVar24 = pFVar25 + 0x48;
      do {
        lVar23 = local_1f8;
        local_208._4_4_ = *(undefined4 *)(pFVar24 + -8);
        uVar19 = (ulonglong)(int)local_208._4_4_;
        local_1f8 = lVar23;
        if ((float)local_208._4_4_ != -NAN) {
          auVar28._4_4_ = -(uint)(*(float *)(pFVar25 + 0x14) < fVar30);
          auVar28._0_4_ = -(uint)(*(float *)(pFVar25 + 0x10) < (float)dVar8);
          auVar28._8_4_ = -(uint)(*(float *)(pFVar25 + 0x18) < fVar26);
          auVar28._12_4_ = -(uint)(*(float *)(pFVar25 + 0x1c) < 0.0);
          auVar6._4_4_ = -(uint)(fVar31 < *(float *)(pFVar25 + 4));
          auVar6._0_4_ = -(uint)((float)dVar9 < *(float *)pFVar25);
          auVar6._8_4_ = -(uint)(fVar27 < *(float *)(pFVar25 + 8));
          auVar6._12_4_ = -(uint)(0.0 < *(float *)(pFVar25 + 0xc));
          uVar13 = movmskps((int)uVar14,auVar28 | auVar6);
          uVar14 = (ulonglong)uVar13;
          if (uVar13 == 0) {
            fVar3 = *(float *)pFVar24;
            uVar14 = (ulonglong)(uint)fVar3;
            if (fVar3 == 0.0) {
              FVar15 = (ForElementType<int>)&local_1d8;
              if (FVar17 != (ForElementType<int>)0x0) {
                FVar15 = FVar17;
              }
              if ((ulonglong)FVar15 <= (longlong)local_208 + 4U) {
                FVar15 = (ForElementType<int>)&local_1d8;
                if (FVar17 != (ForElementType<int>)0x0) {
                  FVar15 = FVar17;
                }
                if ((local_208 + 4 < (undefined1 *)((longlong)FVar15 + (longlong)local_18c * 4)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), FVar17 = local_1d8.SecondaryData, bVar10)) {
                  pcVar5 = (code *)swi(3);
                  uVar11 = (*pcVar5)();
                  return (bool)uVar11;
                }
              }
              if (local_190 == local_18c) {
                local_190 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                      (0x404,&local_1d8,&local_18c);
                FVar17 = local_1d8.SecondaryData;
              }
              lVar16 = (longlong)local_190;
              FVar15 = (ForElementType<int>)&local_1d8;
              if (FVar17 != (ForElementType<int>)0x0) {
                FVar15 = FVar17;
              }
              local_190 = local_190 + 1;
              uVar14 = (ulonglong)(uint)local_208._4_4_;
              *(undefined4 *)((longlong)FVar15 + lVar16 * 4) = local_208._4_4_;
              local_1f8 = lVar23;
              FVar17 = local_1d8.SecondaryData;
            }
            else {
              iVar12 = local_208._4_4_ + (int)fVar3;
              if ((int)local_208._4_4_ < iVar12) {
                lVar23 = uVar19 << 5;
                uVar21 = uVar19;
                do {
                  uVar18 = (uint)uVar19;
                  uVar13 = 0;
                  if ((int)uVar18 < (this->FaceBounds).ArrayNum) {
                    uVar13 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    uVar11 = (*pcVar5)();
                    return (bool)uVar11;
                  }
                  pFVar4 = (this->FaceBounds).AllocatorInstance.Data;
                  pFVar2 = pFVar4 + lVar23 + 0x10;
                  pFVar1 = pFVar4 + lVar23;
                  auVar29._4_4_ = -(uint)(*(float *)(pFVar2 + 4) < fVar30);
                  auVar29._0_4_ = -(uint)(*(float *)pFVar2 < (float)dVar8);
                  auVar29._8_4_ = -(uint)(*(float *)(pFVar2 + 8) < fVar26);
                  auVar29._12_4_ = -(uint)(*(float *)(pFVar2 + 0xc) < 0.0);
                  auVar7._4_4_ = -(uint)(fVar31 < *(float *)(pFVar1 + 4));
                  auVar7._0_4_ = -(uint)((float)dVar9 < *(float *)pFVar1);
                  auVar7._8_4_ = -(uint)(fVar27 < *(float *)(pFVar1 + 8));
                  auVar7._12_4_ = -(uint)(0.0 < *(float *)(pFVar1 + 0xc));
                  uVar13 = movmskps((int)pFVar4,auVar29 | auVar7);
                  uVar14 = (ulonglong)uVar13;
                  if (uVar13 == 0) {
                    bVar10 = FTriangleMeshOverlapVisitorNoMTD<Chaos::TBox<double,3>_>::VisitOverlap
                                       (&local_188,uVar18);
                    uVar14 = CONCAT71(extraout_var_00,bVar10);
                    FVar17 = local_1d8.SecondaryData;
                    if (!bVar10) goto joined_r0x000143e8a85a;
                  }
                  uVar19 = (ulonglong)(uVar18 + 1);
                  uVar21 = uVar21 + 1;
                  lVar23 = lVar23 + 0x20;
                  FVar17 = local_1d8.SecondaryData;
                } while ((longlong)uVar21 < (longlong)iVar12);
              }
            }
          }
        }
        local_1f8 = local_1f8 + 1;
        pFVar24 = pFVar24 + 4;
        pFVar25 = pFVar25 + 0x20;
        piVar20 = local_200;
      } while (local_1f8 < 2);
    }
    local_190 = 0;
joined_r0x000143e8a85a:
    if (FVar17 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar17);
    }
  }
  return local_188.bFoundIntersection;
}

// FindAllIntersectionsNoMTD<Chaos::TBox<double,3>_> @ 143e8a8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::FindAllIntersectionsNoMTD<Chaos::TBox<double,3>_>
          (FTrimeshBVH *this,FOBBVectorized *param_1,TRigidTransform<double,3> *param_2,
          TBox<double,3> *param_3,double param_4,TVector<double,3> *param_5,
          FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  ForElementType<int> FVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  undefined1 auStackY_228 [32];
  uint local_1d8;
  undefined1 local_1d4 [12];
  float local_1c8;
  float local_1c4;
  float local_1c0;
  ForElementType<int> local_1b8;
  int local_170;
  int local_16c;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TBox<double,3>_> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1c8 = (float)*(double *)param_5;
  local_1c4 = (float)*(double *)&param_5->field_0x8;
  local_1c0 = (float)*(double *)&param_5->field_0x10;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TBox<double,3>_>::
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TBox<double,3>_>
            (&local_168,param_2,param_3,param_4,(TVector<float,3> *)&local_1c8,param_6);
  if ((this->Nodes).ArrayNum != 0) {
    local_16c = 0x10;
    local_1b8.SecondaryData = (ForElementType<int>)0x0;
    local_1d4[0] = '\0';
    local_1d4[1] = '\0';
    local_1d4[2] = '\0';
    local_1d4[3] = '\0';
    local_170 = 0;
    iVar6 = 0;
    if ((&local_1b8 <= (ForElementType<int> *)local_1d4) &&
       (iVar6 = 0, local_1d4 < &local_1b8.SecondaryData)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = local_170;
      if (local_170 == local_16c) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,&local_1b8,&local_16c);
      }
    }
    local_170 = iVar6 + 1;
    FVar8 = (ForElementType<int>)&local_1b8;
    if (local_1b8.SecondaryData != (ForElementType<int>)0x0) {
      FVar8 = local_1b8.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_1d4._0_4_;
    piVar11 = &(this->Nodes).ArrayNum;
    while (local_170 != 0) {
      uVar13 = 0;
      piVar10 = &(this->Nodes).ArrayNum;
      local_1d4._4_8_ = piVar11;
      if ((local_170 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FVar8 = (ForElementType<int>)&local_1b8;
      if (local_1b8.SecondaryData != (ForElementType<int>)0x0) {
        FVar8 = local_1b8.SecondaryData;
      }
      iVar6 = local_170 + -1;
      uVar1 = *(uint *)((longlong)FVar8 + (longlong)iVar6 * 4);
      FVar8 = (ForElementType<int>)&local_1b8;
      if (local_1b8.SecondaryData != (ForElementType<int>)0x0) {
        FVar8 = local_1b8.SecondaryData;
      }
      _Dst = (void *)((longlong)FVar8 + (longlong)iVar6 * 4);
      iVar6 = (local_170 - iVar6) + -1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar6 << 2);
      }
      local_170 = local_170 + -1;
      if ((((int)uVar1 < 0) ||
          (piVar11 = piVar10, local_1d4._4_8_ = piVar10, *piVar10 <= (int)uVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Nodes.IsValidIndex(NodeIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                             ,0xf6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = 0;
      if ((int)uVar1 < *piVar11) {
        uVar9 = ~uVar1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->Nodes).AllocatorInstance.Data;
      pFVar12 = pFVar2 + (longlong)(int)uVar1 * 0x50 + 0x48;
      do {
        local_1d8 = *(uint *)(pFVar12 + -8);
        if ((local_1d8 != 0xffffffff) &&
           (bVar4 = Chaos::Private::FOBBVectorized::IntersectAABB
                              (param_1,(FAABBVectorized *)
                                       (pFVar2 + uVar13 * 0x20 + (longlong)(int)uVar1 * 0x50)),
           bVar4)) {
          if (*(int *)pFVar12 == 0) {
            FVar8 = (ForElementType<int>)&local_1b8;
            if (local_1b8.SecondaryData != (ForElementType<int>)0x0) {
              FVar8 = local_1b8.SecondaryData;
            }
            if ((ulonglong)FVar8 <= &local_1d8) {
              FVar8 = (ForElementType<int>)&local_1b8;
              if (local_1b8.SecondaryData != (ForElementType<int>)0x0) {
                FVar8 = local_1b8.SecondaryData;
              }
              if ((&local_1d8 < (uint *)((longlong)FVar8 + (longlong)local_16c * 4)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
            }
            iVar6 = local_170;
            if (local_170 == local_16c) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                (0x404,&local_1b8,&local_16c);
            }
            local_170 = iVar6 + 1;
            FVar8 = (ForElementType<int>)&local_1b8;
            if (local_1b8.SecondaryData != (ForElementType<int>)0x0) {
              FVar8 = local_1b8.SecondaryData;
            }
            *(uint *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_1d8;
          }
          else {
            iVar6 = *(int *)pFVar12 + local_1d8;
            for (uVar9 = local_1d8; (int)uVar9 < iVar6; uVar9 = uVar9 + 1) {
              uVar7 = 0;
              if ((int)uVar9 < (this->FaceBounds).ArrayNum) {
                uVar7 = ~uVar9 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              bVar4 = Chaos::Private::FOBBVectorized::IntersectAABB
                                (param_1,(FAABBVectorized *)
                                         ((this->FaceBounds).AllocatorInstance.Data +
                                         (longlong)(int)uVar9 * 0x20));
              if ((bVar4) &&
                 (bVar4 = FTriangleMeshOverlapVisitorNoMTD<Chaos::TBox<double,3>_>::VisitOverlap
                                    (&local_168,uVar9), !bVar4)) goto joined_r0x000143e8ad4c;
            }
          }
        }
        uVar9 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar9;
        pFVar12 = pFVar12 + 4;
        piVar11 = (int *)local_1d4._4_8_;
      } while ((int)uVar9 < 2);
    }
    local_170 = 0;
joined_r0x000143e8ad4c:
    if (local_1b8.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_1b8.SecondaryData);
    }
  }
  return local_168.bFoundIntersection;
}

// FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> @ 143e8adb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::
FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
          (FTrimeshBVH *this,TAABB<double,3> *param_1,TRigidTransform<double,3> *param_2,
          TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_3,double param_4,
          TVector<double,3> *param_5,FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined7 extraout_var_00;
  ForElementType<int> FVar15;
  longlong lVar16;
  ForElementType<int> FVar17;
  uint uVar18;
  ulonglong uVar19;
  int *piVar20;
  ulonglong uVar21;
  int *piVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined1 auStackY_258 [32];
  undefined1 local_208 [8];
  int *local_200;
  longlong local_1f8;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  ForElementType<int> local_1d8;
  int local_190;
  int local_18c;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> local_188
  ;
  ulonglong local_68;
  undefined7 extraout_var;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1f0 = (float)*(double *)param_5;
  local_1ec = (float)*(double *)&param_5->field_0x8;
  local_1e8 = (float)*(double *)&param_5->field_0x10;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
            (&local_188,param_2,param_3,param_4,(TVector<float,3> *)&local_1f0,param_6);
  dVar8 = *(double *)&param_1->MMin;
  fVar30 = (float)*(double *)&(param_1->MMin).field_0x8;
  fVar26 = (float)*(double *)&(param_1->MMin).field_0x10;
  dVar9 = *(double *)&param_1->MMax;
  fVar31 = (float)*(double *)&(param_1->MMax).field_0x8;
  fVar27 = (float)*(double *)&(param_1->MMax).field_0x10;
  if ((this->Nodes).ArrayNum != 0) {
    local_18c = 0x10;
    local_190 = 0;
    local_1d8.SecondaryData = (ForElementType<int>)0x0;
    local_208[0] = '\0';
    local_208[1] = '\0';
    local_208[2] = '\0';
    local_208[3] = '\0';
    iVar12 = 0;
    if ((&local_1d8 <= (ForElementType<int> *)local_208) && (local_208 < &local_1d8.SecondaryData))
    {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      iVar12 = local_190;
      if (local_190 == local_18c) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_1d8,&local_18c);
      }
    }
    local_190 = iVar12 + 1;
    FVar17 = (ForElementType<int>)&local_1d8;
    if (local_1d8.SecondaryData != (ForElementType<int>)0x0) {
      FVar17 = local_1d8.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar17 + (longlong)iVar12 * 4) = local_208._0_4_;
    piVar20 = &(this->Nodes).ArrayNum;
    FVar17 = local_1d8.SecondaryData;
    while (local_190 != 0) {
      piVar22 = &(this->Nodes).ArrayNum;
      local_200 = piVar20;
      if ((local_190 < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar17 = local_1d8.SecondaryData, bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      FVar15 = (ForElementType<int>)&local_1d8;
      if (FVar17 != (ForElementType<int>)0x0) {
        FVar15 = FVar17;
      }
      iVar12 = local_190 + -1;
      uVar13 = *(uint *)((longlong)FVar15 + (longlong)iVar12 * 4);
      FVar15 = (ForElementType<int>)&local_1d8;
      if (FVar17 != (ForElementType<int>)0x0) {
        FVar15 = FVar17;
      }
      _Dst = (void *)((longlong)FVar15 + (longlong)iVar12 * 4);
      iVar12 = (local_190 - iVar12) + -1;
      if (iVar12 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar12 << 2);
        FVar17 = local_1d8.SecondaryData;
      }
      local_190 = local_190 + -1;
      if ((((int)uVar13 < 0) || (piVar20 = piVar22, local_200 = piVar22, *piVar22 <= (int)uVar13))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Nodes.IsValidIndex(NodeIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                                 ,0xf6,L""), FVar17 = local_1d8.SecondaryData, bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      uVar14 = 0;
      if ((int)uVar13 < *piVar20) {
        uVar14 = (ulonglong)(~uVar13 >> 0x1f);
      }
      if ((int)uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar14 = CONCAT71(extraout_var,bVar10);
        FVar17 = local_1d8.SecondaryData;
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
      }
      pFVar25 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x50;
      local_1f8 = 0;
      pFVar24 = pFVar25 + 0x48;
      do {
        lVar23 = local_1f8;
        local_208._4_4_ = *(undefined4 *)(pFVar24 + -8);
        uVar19 = (ulonglong)(int)local_208._4_4_;
        local_1f8 = lVar23;
        if ((float)local_208._4_4_ != -NAN) {
          auVar28._4_4_ = -(uint)(*(float *)(pFVar25 + 0x14) < fVar30);
          auVar28._0_4_ = -(uint)(*(float *)(pFVar25 + 0x10) < (float)dVar8);
          auVar28._8_4_ = -(uint)(*(float *)(pFVar25 + 0x18) < fVar26);
          auVar28._12_4_ = -(uint)(*(float *)(pFVar25 + 0x1c) < 0.0);
          auVar6._4_4_ = -(uint)(fVar31 < *(float *)(pFVar25 + 4));
          auVar6._0_4_ = -(uint)((float)dVar9 < *(float *)pFVar25);
          auVar6._8_4_ = -(uint)(fVar27 < *(float *)(pFVar25 + 8));
          auVar6._12_4_ = -(uint)(0.0 < *(float *)(pFVar25 + 0xc));
          uVar13 = movmskps((int)uVar14,auVar28 | auVar6);
          uVar14 = (ulonglong)uVar13;
          if (uVar13 == 0) {
            fVar3 = *(float *)pFVar24;
            uVar14 = (ulonglong)(uint)fVar3;
            if (fVar3 == 0.0) {
              FVar15 = (ForElementType<int>)&local_1d8;
              if (FVar17 != (ForElementType<int>)0x0) {
                FVar15 = FVar17;
              }
              if ((ulonglong)FVar15 <= (longlong)local_208 + 4U) {
                FVar15 = (ForElementType<int>)&local_1d8;
                if (FVar17 != (ForElementType<int>)0x0) {
                  FVar15 = FVar17;
                }
                if ((local_208 + 4 < (undefined1 *)((longlong)FVar15 + (longlong)local_18c * 4)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), FVar17 = local_1d8.SecondaryData, bVar10)) {
                  pcVar5 = (code *)swi(3);
                  uVar11 = (*pcVar5)();
                  return (bool)uVar11;
                }
              }
              if (local_190 == local_18c) {
                local_190 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                      (0x404,&local_1d8,&local_18c);
                FVar17 = local_1d8.SecondaryData;
              }
              lVar16 = (longlong)local_190;
              FVar15 = (ForElementType<int>)&local_1d8;
              if (FVar17 != (ForElementType<int>)0x0) {
                FVar15 = FVar17;
              }
              local_190 = local_190 + 1;
              uVar14 = (ulonglong)(uint)local_208._4_4_;
              *(undefined4 *)((longlong)FVar15 + lVar16 * 4) = local_208._4_4_;
              local_1f8 = lVar23;
              FVar17 = local_1d8.SecondaryData;
            }
            else {
              iVar12 = local_208._4_4_ + (int)fVar3;
              if ((int)local_208._4_4_ < iVar12) {
                lVar23 = uVar19 << 5;
                uVar21 = uVar19;
                do {
                  uVar18 = (uint)uVar19;
                  uVar13 = 0;
                  if ((int)uVar18 < (this->FaceBounds).ArrayNum) {
                    uVar13 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    uVar11 = (*pcVar5)();
                    return (bool)uVar11;
                  }
                  pFVar4 = (this->FaceBounds).AllocatorInstance.Data;
                  pFVar2 = pFVar4 + lVar23 + 0x10;
                  pFVar1 = pFVar4 + lVar23;
                  auVar29._4_4_ = -(uint)(*(float *)(pFVar2 + 4) < fVar30);
                  auVar29._0_4_ = -(uint)(*(float *)pFVar2 < (float)dVar8);
                  auVar29._8_4_ = -(uint)(*(float *)(pFVar2 + 8) < fVar26);
                  auVar29._12_4_ = -(uint)(*(float *)(pFVar2 + 0xc) < 0.0);
                  auVar7._4_4_ = -(uint)(fVar31 < *(float *)(pFVar1 + 4));
                  auVar7._0_4_ = -(uint)((float)dVar9 < *(float *)pFVar1);
                  auVar7._8_4_ = -(uint)(fVar27 < *(float *)(pFVar1 + 8));
                  auVar7._12_4_ = -(uint)(0.0 < *(float *)(pFVar1 + 0xc));
                  uVar13 = movmskps((int)pFVar4,auVar29 | auVar7);
                  uVar14 = (ulonglong)uVar13;
                  if (uVar13 == 0) {
                    bVar10 = FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                             ::VisitOverlap(&local_188,uVar18);
                    uVar14 = CONCAT71(extraout_var_00,bVar10);
                    FVar17 = local_1d8.SecondaryData;
                    if (!bVar10) goto joined_r0x000143e8b29a;
                  }
                  uVar19 = (ulonglong)(uVar18 + 1);
                  uVar21 = uVar21 + 1;
                  lVar23 = lVar23 + 0x20;
                  FVar17 = local_1d8.SecondaryData;
                } while ((longlong)uVar21 < (longlong)iVar12);
              }
            }
          }
        }
        local_1f8 = local_1f8 + 1;
        pFVar24 = pFVar24 + 4;
        pFVar25 = pFVar25 + 0x20;
        piVar20 = local_200;
      } while (local_1f8 < 2);
    }
    local_190 = 0;
joined_r0x000143e8b29a:
    if (FVar17 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar17);
    }
  }
  return local_188.bFoundIntersection;
}

// FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> @ 143e8b310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::
FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
          (FTrimeshBVH *this,FOBBVectorized *param_1,TRigidTransform<double,3> *param_2,
          TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_3,double param_4,
          TVector<double,3> *param_5,FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  ForElementType<int> FVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  undefined1 auStackY_228 [32];
  uint local_1d8;
  undefined1 local_1d4 [12];
  float local_1c8;
  float local_1c4;
  float local_1c0;
  ForElementType<int> local_1b8;
  int local_170;
  int local_16c;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> local_168
  ;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1c8 = (float)*(double *)param_5;
  local_1c4 = (float)*(double *)&param_5->field_0x8;
  local_1c0 = (float)*(double *)&param_5->field_0x10;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
            (&local_168,param_2,param_3,param_4,(TVector<float,3> *)&local_1c8,param_6);
  if ((this->Nodes).ArrayNum != 0) {
    local_16c = 0x10;
    local_1b8.SecondaryData = (ForElementType<int>)0x0;
    local_1d4[0] = '\0';
    local_1d4[1] = '\0';
    local_1d4[2] = '\0';
    local_1d4[3] = '\0';
    local_170 = 0;
    iVar6 = 0;
    if ((&local_1b8 <= (ForElementType<int> *)local_1d4) &&
       (iVar6 = 0, local_1d4 < &local_1b8.SecondaryData)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = local_170;
      if (local_170 == local_16c) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,&local_1b8,&local_16c);
      }
    }
    local_170 = iVar6 + 1;
    FVar8 = (ForElementType<int>)&local_1b8;
    if (local_1b8.SecondaryData != (ForElementType<int>)0x0) {
      FVar8 = local_1b8.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_1d4._0_4_;
    piVar11 = &(this->Nodes).ArrayNum;
    while (local_170 != 0) {
      uVar13 = 0;
      piVar10 = &(this->Nodes).ArrayNum;
      local_1d4._4_8_ = piVar11;
      if ((local_170 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FVar8 = (ForElementType<int>)&local_1b8;
      if (local_1b8.SecondaryData != (ForElementType<int>)0x0) {
        FVar8 = local_1b8.SecondaryData;
      }
      iVar6 = local_170 + -1;
      uVar1 = *(uint *)((longlong)FVar8 + (longlong)iVar6 * 4);
      FVar8 = (ForElementType<int>)&local_1b8;
      if (local_1b8.SecondaryData != (ForElementType<int>)0x0) {
        FVar8 = local_1b8.SecondaryData;
      }
      _Dst = (void *)((longlong)FVar8 + (longlong)iVar6 * 4);
      iVar6 = (local_170 - iVar6) + -1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar6 << 2);
      }
      local_170 = local_170 + -1;
      if ((((int)uVar1 < 0) ||
          (piVar11 = piVar10, local_1d4._4_8_ = piVar10, *piVar10 <= (int)uVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Nodes.IsValidIndex(NodeIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                             ,0xf6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = 0;
      if ((int)uVar1 < *piVar11) {
        uVar9 = ~uVar1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->Nodes).AllocatorInstance.Data;
      pFVar12 = pFVar2 + (longlong)(int)uVar1 * 0x50 + 0x48;
      do {
        local_1d8 = *(uint *)(pFVar12 + -8);
        if ((local_1d8 != 0xffffffff) &&
           (bVar4 = Chaos::Private::FOBBVectorized::IntersectAABB
                              (param_1,(FAABBVectorized *)
                                       (pFVar2 + uVar13 * 0x20 + (longlong)(int)uVar1 * 0x50)),
           bVar4)) {
          if (*(int *)pFVar12 == 0) {
            FVar8 = (ForElementType<int>)&local_1b8;
            if (local_1b8.SecondaryData != (ForElementType<int>)0x0) {
              FVar8 = local_1b8.SecondaryData;
            }
            if ((ulonglong)FVar8 <= &local_1d8) {
              FVar8 = (ForElementType<int>)&local_1b8;
              if (local_1b8.SecondaryData != (ForElementType<int>)0x0) {
                FVar8 = local_1b8.SecondaryData;
              }
              if ((&local_1d8 < (uint *)((longlong)FVar8 + (longlong)local_16c * 4)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
            }
            iVar6 = local_170;
            if (local_170 == local_16c) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                (0x404,&local_1b8,&local_16c);
            }
            local_170 = iVar6 + 1;
            FVar8 = (ForElementType<int>)&local_1b8;
            if (local_1b8.SecondaryData != (ForElementType<int>)0x0) {
              FVar8 = local_1b8.SecondaryData;
            }
            *(uint *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_1d8;
          }
          else {
            iVar6 = *(int *)pFVar12 + local_1d8;
            for (uVar9 = local_1d8; (int)uVar9 < iVar6; uVar9 = uVar9 + 1) {
              uVar7 = 0;
              if ((int)uVar9 < (this->FaceBounds).ArrayNum) {
                uVar7 = ~uVar9 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              bVar4 = Chaos::Private::FOBBVectorized::IntersectAABB
                                (param_1,(FAABBVectorized *)
                                         ((this->FaceBounds).AllocatorInstance.Data +
                                         (longlong)(int)uVar9 * 0x20));
              if ((bVar4) &&
                 (bVar4 = FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                          ::VisitOverlap(&local_168,uVar9), !bVar4)) goto joined_r0x000143e8b78c;
            }
          }
        }
        uVar9 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar9;
        pFVar12 = pFVar12 + 4;
        piVar11 = (int *)local_1d4._4_8_;
      } while ((int)uVar9 < 2);
    }
    local_170 = 0;
joined_r0x000143e8b78c:
    if (local_1b8.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_1b8.SecondaryData);
    }
  }
  return local_168.bFoundIntersection;
}

// FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> @ 143e8b7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::
FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
          (FTrimeshBVH *this,TAABB<double,3> *param_1,TRigidTransform<double,3> *param_2,
          TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_3,double param_4,
          TVector<double,3> *param_5,FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined7 extraout_var_00;
  ForElementType<int> FVar15;
  longlong lVar16;
  ForElementType<int> FVar17;
  uint uVar18;
  ulonglong uVar19;
  int *piVar20;
  ulonglong uVar21;
  int *piVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [8];
  int *local_120;
  longlong local_118;
  float local_110;
  float local_10c;
  float local_108;
  ForElementType<int> local_f8;
  int local_b0;
  int local_ac;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
  local_a8;
  ulonglong local_68;
  undefined7 extraout_var;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_110 = (float)*(double *)param_5;
  local_10c = (float)*(double *)&param_5->field_0x8;
  local_108 = (float)*(double *)&param_5->field_0x10;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>::
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
            (&local_a8,param_2,param_3,param_4,(TVector<float,3> *)&local_110,param_6);
  dVar8 = *(double *)&param_1->MMin;
  fVar30 = (float)*(double *)&(param_1->MMin).field_0x8;
  fVar26 = (float)*(double *)&(param_1->MMin).field_0x10;
  dVar9 = *(double *)&param_1->MMax;
  fVar31 = (float)*(double *)&(param_1->MMax).field_0x8;
  fVar27 = (float)*(double *)&(param_1->MMax).field_0x10;
  if ((this->Nodes).ArrayNum != 0) {
    local_ac = 0x10;
    local_b0 = 0;
    local_f8.SecondaryData = (ForElementType<int>)0x0;
    local_128[0] = '\0';
    local_128[1] = '\0';
    local_128[2] = '\0';
    local_128[3] = '\0';
    iVar12 = 0;
    if ((&local_f8 <= (ForElementType<int> *)local_128) && (local_128 < &local_f8.SecondaryData)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      iVar12 = local_b0;
      if (local_b0 == local_ac) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_f8,&local_ac);
      }
    }
    local_b0 = iVar12 + 1;
    FVar17 = (ForElementType<int>)&local_f8;
    if (local_f8.SecondaryData != (ForElementType<int>)0x0) {
      FVar17 = local_f8.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar17 + (longlong)iVar12 * 4) = local_128._0_4_;
    piVar20 = &(this->Nodes).ArrayNum;
    FVar17 = local_f8.SecondaryData;
    while (local_b0 != 0) {
      piVar22 = &(this->Nodes).ArrayNum;
      local_120 = piVar20;
      if ((local_b0 < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar17 = local_f8.SecondaryData, bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      FVar15 = (ForElementType<int>)&local_f8;
      if (FVar17 != (ForElementType<int>)0x0) {
        FVar15 = FVar17;
      }
      iVar12 = local_b0 + -1;
      uVar13 = *(uint *)((longlong)FVar15 + (longlong)iVar12 * 4);
      FVar15 = (ForElementType<int>)&local_f8;
      if (FVar17 != (ForElementType<int>)0x0) {
        FVar15 = FVar17;
      }
      _Dst = (void *)((longlong)FVar15 + (longlong)iVar12 * 4);
      iVar12 = (local_b0 - iVar12) + -1;
      if (iVar12 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar12 << 2);
        FVar17 = local_f8.SecondaryData;
      }
      local_b0 = local_b0 + -1;
      if ((((int)uVar13 < 0) || (piVar20 = piVar22, local_120 = piVar22, *piVar22 <= (int)uVar13))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Nodes.IsValidIndex(NodeIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                                 ,0xf6,L""), FVar17 = local_f8.SecondaryData, bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      uVar14 = 0;
      if ((int)uVar13 < *piVar20) {
        uVar14 = (ulonglong)(~uVar13 >> 0x1f);
      }
      if ((int)uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar14 = CONCAT71(extraout_var,bVar10);
        FVar17 = local_f8.SecondaryData;
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
      }
      pFVar25 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x50;
      local_118 = 0;
      pFVar24 = pFVar25 + 0x48;
      do {
        lVar23 = local_118;
        local_128._4_4_ = *(undefined4 *)(pFVar24 + -8);
        uVar19 = (ulonglong)(int)local_128._4_4_;
        local_118 = lVar23;
        if ((float)local_128._4_4_ != -NAN) {
          auVar28._4_4_ = -(uint)(*(float *)(pFVar25 + 0x14) < fVar30);
          auVar28._0_4_ = -(uint)(*(float *)(pFVar25 + 0x10) < (float)dVar8);
          auVar28._8_4_ = -(uint)(*(float *)(pFVar25 + 0x18) < fVar26);
          auVar28._12_4_ = -(uint)(*(float *)(pFVar25 + 0x1c) < 0.0);
          auVar6._4_4_ = -(uint)(fVar31 < *(float *)(pFVar25 + 4));
          auVar6._0_4_ = -(uint)((float)dVar9 < *(float *)pFVar25);
          auVar6._8_4_ = -(uint)(fVar27 < *(float *)(pFVar25 + 8));
          auVar6._12_4_ = -(uint)(0.0 < *(float *)(pFVar25 + 0xc));
          uVar13 = movmskps((int)uVar14,auVar28 | auVar6);
          uVar14 = (ulonglong)uVar13;
          if (uVar13 == 0) {
            fVar3 = *(float *)pFVar24;
            uVar14 = (ulonglong)(uint)fVar3;
            if (fVar3 == 0.0) {
              FVar15 = (ForElementType<int>)&local_f8;
              if (FVar17 != (ForElementType<int>)0x0) {
                FVar15 = FVar17;
              }
              if ((ulonglong)FVar15 <= (longlong)local_128 + 4U) {
                FVar15 = (ForElementType<int>)&local_f8;
                if (FVar17 != (ForElementType<int>)0x0) {
                  FVar15 = FVar17;
                }
                if ((local_128 + 4 < (undefined1 *)((longlong)FVar15 + (longlong)local_ac * 4)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), FVar17 = local_f8.SecondaryData, bVar10)) {
                  pcVar5 = (code *)swi(3);
                  uVar11 = (*pcVar5)();
                  return (bool)uVar11;
                }
              }
              if (local_b0 == local_ac) {
                local_b0 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                     (0x404,&local_f8,&local_ac);
                FVar17 = local_f8.SecondaryData;
              }
              lVar16 = (longlong)local_b0;
              FVar15 = (ForElementType<int>)&local_f8;
              if (FVar17 != (ForElementType<int>)0x0) {
                FVar15 = FVar17;
              }
              local_b0 = local_b0 + 1;
              uVar14 = (ulonglong)(uint)local_128._4_4_;
              *(undefined4 *)((longlong)FVar15 + lVar16 * 4) = local_128._4_4_;
              local_118 = lVar23;
              FVar17 = local_f8.SecondaryData;
            }
            else {
              iVar12 = local_128._4_4_ + (int)fVar3;
              if ((int)local_128._4_4_ < iVar12) {
                lVar23 = uVar19 << 5;
                uVar21 = uVar19;
                do {
                  uVar18 = (uint)uVar19;
                  uVar13 = 0;
                  if ((int)uVar18 < (this->FaceBounds).ArrayNum) {
                    uVar13 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    uVar11 = (*pcVar5)();
                    return (bool)uVar11;
                  }
                  pFVar4 = (this->FaceBounds).AllocatorInstance.Data;
                  pFVar2 = pFVar4 + lVar23 + 0x10;
                  pFVar1 = pFVar4 + lVar23;
                  auVar29._4_4_ = -(uint)(*(float *)(pFVar2 + 4) < fVar30);
                  auVar29._0_4_ = -(uint)(*(float *)pFVar2 < (float)dVar8);
                  auVar29._8_4_ = -(uint)(*(float *)(pFVar2 + 8) < fVar26);
                  auVar29._12_4_ = -(uint)(*(float *)(pFVar2 + 0xc) < 0.0);
                  auVar7._4_4_ = -(uint)(fVar31 < *(float *)(pFVar1 + 4));
                  auVar7._0_4_ = -(uint)((float)dVar9 < *(float *)pFVar1);
                  auVar7._8_4_ = -(uint)(fVar27 < *(float *)(pFVar1 + 8));
                  auVar7._12_4_ = -(uint)(0.0 < *(float *)(pFVar1 + 0xc));
                  uVar13 = movmskps((int)pFVar4,auVar29 | auVar7);
                  uVar14 = (ulonglong)uVar13;
                  if (uVar13 == 0) {
                    bVar10 = FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                             ::VisitOverlap(&local_a8,uVar18);
                    uVar14 = CONCAT71(extraout_var_00,bVar10);
                    FVar17 = local_f8.SecondaryData;
                    if (!bVar10) goto joined_r0x000143e8bcca;
                  }
                  uVar19 = (ulonglong)(uVar18 + 1);
                  uVar21 = uVar21 + 1;
                  lVar23 = lVar23 + 0x20;
                  FVar17 = local_f8.SecondaryData;
                } while ((longlong)uVar21 < (longlong)iVar12);
              }
            }
          }
        }
        local_118 = local_118 + 1;
        pFVar24 = pFVar24 + 4;
        pFVar25 = pFVar25 + 0x20;
        piVar20 = local_120;
      } while (local_118 < 2);
    }
    local_b0 = 0;
joined_r0x000143e8bcca:
    if (FVar17 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar17);
    }
  }
  return local_a8.bFoundIntersection;
}

// FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> @ 143e8bd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::
FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
          (FTrimeshBVH *this,FOBBVectorized *param_1,TRigidTransform<double,3> *param_2,
          TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_3,double param_4,
          TVector<double,3> *param_5,FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  ForElementType<int> FVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  undefined1 auStackY_148 [32];
  uint local_f8;
  undefined1 local_f4 [12];
  float local_e8;
  float local_e4;
  float local_e0;
  ForElementType<int> local_d8;
  int local_90;
  int local_8c;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
  local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_e8 = (float)*(double *)param_5;
  local_e4 = (float)*(double *)&param_5->field_0x8;
  local_e0 = (float)*(double *)&param_5->field_0x10;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>::
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
            (&local_88,param_2,param_3,param_4,(TVector<float,3> *)&local_e8,param_6);
  if ((this->Nodes).ArrayNum != 0) {
    local_8c = 0x10;
    local_d8.SecondaryData = (ForElementType<int>)0x0;
    local_f4[0] = '\0';
    local_f4[1] = '\0';
    local_f4[2] = '\0';
    local_f4[3] = '\0';
    local_90 = 0;
    iVar6 = 0;
    if ((&local_d8 <= (ForElementType<int> *)local_f4) &&
       (iVar6 = 0, local_f4 < &local_d8.SecondaryData)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = local_90;
      if (local_90 == local_8c) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,&local_d8,&local_8c);
      }
    }
    local_90 = iVar6 + 1;
    FVar8 = (ForElementType<int>)&local_d8;
    if (local_d8.SecondaryData != (ForElementType<int>)0x0) {
      FVar8 = local_d8.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_f4._0_4_;
    piVar11 = &(this->Nodes).ArrayNum;
    while (local_90 != 0) {
      uVar13 = 0;
      piVar10 = &(this->Nodes).ArrayNum;
      local_f4._4_8_ = piVar11;
      if ((local_90 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FVar8 = (ForElementType<int>)&local_d8;
      if (local_d8.SecondaryData != (ForElementType<int>)0x0) {
        FVar8 = local_d8.SecondaryData;
      }
      iVar6 = local_90 + -1;
      uVar1 = *(uint *)((longlong)FVar8 + (longlong)iVar6 * 4);
      FVar8 = (ForElementType<int>)&local_d8;
      if (local_d8.SecondaryData != (ForElementType<int>)0x0) {
        FVar8 = local_d8.SecondaryData;
      }
      _Dst = (void *)((longlong)FVar8 + (longlong)iVar6 * 4);
      iVar6 = (local_90 - iVar6) + -1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar6 << 2);
      }
      local_90 = local_90 + -1;
      if ((((int)uVar1 < 0) || (piVar11 = piVar10, local_f4._4_8_ = piVar10, *piVar10 <= (int)uVar1)
          ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Nodes.IsValidIndex(NodeIndex)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                                   ,0xf6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = 0;
      if ((int)uVar1 < *piVar11) {
        uVar9 = ~uVar1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->Nodes).AllocatorInstance.Data;
      pFVar12 = pFVar2 + (longlong)(int)uVar1 * 0x50 + 0x48;
      do {
        local_f8 = *(uint *)(pFVar12 + -8);
        if ((local_f8 != 0xffffffff) &&
           (bVar4 = Chaos::Private::FOBBVectorized::IntersectAABB
                              (param_1,(FAABBVectorized *)
                                       (pFVar2 + uVar13 * 0x20 + (longlong)(int)uVar1 * 0x50)),
           bVar4)) {
          if (*(int *)pFVar12 == 0) {
            FVar8 = (ForElementType<int>)&local_d8;
            if (local_d8.SecondaryData != (ForElementType<int>)0x0) {
              FVar8 = local_d8.SecondaryData;
            }
            if ((ulonglong)FVar8 <= &local_f8) {
              FVar8 = (ForElementType<int>)&local_d8;
              if (local_d8.SecondaryData != (ForElementType<int>)0x0) {
                FVar8 = local_d8.SecondaryData;
              }
              if ((&local_f8 < (uint *)((longlong)FVar8 + (longlong)local_8c * 4)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
            }
            iVar6 = local_90;
            if (local_90 == local_8c) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                (0x404,&local_d8,&local_8c);
            }
            local_90 = iVar6 + 1;
            FVar8 = (ForElementType<int>)&local_d8;
            if (local_d8.SecondaryData != (ForElementType<int>)0x0) {
              FVar8 = local_d8.SecondaryData;
            }
            *(uint *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_f8;
          }
          else {
            iVar6 = *(int *)pFVar12 + local_f8;
            for (uVar9 = local_f8; (int)uVar9 < iVar6; uVar9 = uVar9 + 1) {
              uVar7 = 0;
              if ((int)uVar9 < (this->FaceBounds).ArrayNum) {
                uVar7 = ~uVar9 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              bVar4 = Chaos::Private::FOBBVectorized::IntersectAABB
                                (param_1,(FAABBVectorized *)
                                         ((this->FaceBounds).AllocatorInstance.Data +
                                         (longlong)(int)uVar9 * 0x20));
              if ((bVar4) &&
                 (bVar4 = FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                          ::VisitOverlap(&local_88,uVar9), !bVar4)) goto joined_r0x000143e8c19c;
            }
          }
        }
        uVar9 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar9;
        pFVar12 = pFVar12 + 4;
        piVar11 = (int *)local_f4._4_8_;
      } while ((int)uVar9 < 2);
    }
    local_90 = 0;
joined_r0x000143e8c19c:
    if (local_d8.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_d8.SecondaryData);
    }
  }
  return local_88.bFoundIntersection;
}

// FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> @ 143e8c200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
          (FTrimeshBVH *this,TAABB<double,3> *param_1,TRigidTransform<double,3> *param_2,
          TImplicitObjectScaled<Chaos::FCapsule,1> *param_3,double param_4,
          TVector<double,3> *param_5,FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined7 extraout_var_00;
  ForElementType<int> FVar15;
  longlong lVar16;
  ForElementType<int> FVar17;
  uint uVar18;
  ulonglong uVar19;
  int *piVar20;
  ulonglong uVar21;
  int *piVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined1 auStackY_188 [32];
  undefined1 local_138 [8];
  int *local_130;
  longlong local_128;
  float local_120;
  float local_11c;
  float local_118;
  ForElementType<int> local_108;
  int local_c0;
  int local_bc;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> local_b8;
  ulonglong local_68;
  undefined7 extraout_var;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_120 = (float)*(double *)param_5;
  local_11c = (float)*(double *)&param_5->field_0x8;
  local_118 = (float)*(double *)&param_5->field_0x10;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>::
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
            (&local_b8,param_2,param_3,param_4,(TVector<float,3> *)&local_120,param_6);
  dVar8 = *(double *)&param_1->MMin;
  fVar30 = (float)*(double *)&(param_1->MMin).field_0x8;
  fVar26 = (float)*(double *)&(param_1->MMin).field_0x10;
  dVar9 = *(double *)&param_1->MMax;
  fVar31 = (float)*(double *)&(param_1->MMax).field_0x8;
  fVar27 = (float)*(double *)&(param_1->MMax).field_0x10;
  if ((this->Nodes).ArrayNum != 0) {
    local_bc = 0x10;
    local_c0 = 0;
    local_108.SecondaryData = (ForElementType<int>)0x0;
    local_138[0] = '\0';
    local_138[1] = '\0';
    local_138[2] = '\0';
    local_138[3] = '\0';
    iVar12 = 0;
    if ((&local_108 <= (ForElementType<int> *)local_138) && (local_138 < &local_108.SecondaryData))
    {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      iVar12 = local_c0;
      if (local_c0 == local_bc) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_108,&local_bc);
      }
    }
    local_c0 = iVar12 + 1;
    FVar17 = (ForElementType<int>)&local_108;
    if (local_108.SecondaryData != (ForElementType<int>)0x0) {
      FVar17 = local_108.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar17 + (longlong)iVar12 * 4) = local_138._0_4_;
    piVar20 = &(this->Nodes).ArrayNum;
    FVar17 = local_108.SecondaryData;
    while (local_c0 != 0) {
      piVar22 = &(this->Nodes).ArrayNum;
      local_130 = piVar20;
      if ((local_c0 < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar17 = local_108.SecondaryData, bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      FVar15 = (ForElementType<int>)&local_108;
      if (FVar17 != (ForElementType<int>)0x0) {
        FVar15 = FVar17;
      }
      iVar12 = local_c0 + -1;
      uVar13 = *(uint *)((longlong)FVar15 + (longlong)iVar12 * 4);
      FVar15 = (ForElementType<int>)&local_108;
      if (FVar17 != (ForElementType<int>)0x0) {
        FVar15 = FVar17;
      }
      _Dst = (void *)((longlong)FVar15 + (longlong)iVar12 * 4);
      iVar12 = (local_c0 - iVar12) + -1;
      if (iVar12 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar12 << 2);
        FVar17 = local_108.SecondaryData;
      }
      local_c0 = local_c0 + -1;
      if ((((int)uVar13 < 0) || (piVar20 = piVar22, local_130 = piVar22, *piVar22 <= (int)uVar13))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Nodes.IsValidIndex(NodeIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                                 ,0xf6,L""), FVar17 = local_108.SecondaryData, bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      uVar14 = 0;
      if ((int)uVar13 < *piVar20) {
        uVar14 = (ulonglong)(~uVar13 >> 0x1f);
      }
      if ((int)uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar14 = CONCAT71(extraout_var,bVar10);
        FVar17 = local_108.SecondaryData;
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
      }
      pFVar25 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x50;
      local_128 = 0;
      pFVar24 = pFVar25 + 0x48;
      do {
        lVar23 = local_128;
        local_138._4_4_ = *(undefined4 *)(pFVar24 + -8);
        uVar19 = (ulonglong)(int)local_138._4_4_;
        local_128 = lVar23;
        if ((float)local_138._4_4_ != -NAN) {
          auVar28._4_4_ = -(uint)(*(float *)(pFVar25 + 0x14) < fVar30);
          auVar28._0_4_ = -(uint)(*(float *)(pFVar25 + 0x10) < (float)dVar8);
          auVar28._8_4_ = -(uint)(*(float *)(pFVar25 + 0x18) < fVar26);
          auVar28._12_4_ = -(uint)(*(float *)(pFVar25 + 0x1c) < 0.0);
          auVar6._4_4_ = -(uint)(fVar31 < *(float *)(pFVar25 + 4));
          auVar6._0_4_ = -(uint)((float)dVar9 < *(float *)pFVar25);
          auVar6._8_4_ = -(uint)(fVar27 < *(float *)(pFVar25 + 8));
          auVar6._12_4_ = -(uint)(0.0 < *(float *)(pFVar25 + 0xc));
          uVar13 = movmskps((int)uVar14,auVar28 | auVar6);
          uVar14 = (ulonglong)uVar13;
          if (uVar13 == 0) {
            fVar3 = *(float *)pFVar24;
            uVar14 = (ulonglong)(uint)fVar3;
            if (fVar3 == 0.0) {
              FVar15 = (ForElementType<int>)&local_108;
              if (FVar17 != (ForElementType<int>)0x0) {
                FVar15 = FVar17;
              }
              if ((ulonglong)FVar15 <= (longlong)local_138 + 4U) {
                FVar15 = (ForElementType<int>)&local_108;
                if (FVar17 != (ForElementType<int>)0x0) {
                  FVar15 = FVar17;
                }
                if ((local_138 + 4 < (undefined1 *)((longlong)FVar15 + (longlong)local_bc * 4)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), FVar17 = local_108.SecondaryData, bVar10)) {
                  pcVar5 = (code *)swi(3);
                  uVar11 = (*pcVar5)();
                  return (bool)uVar11;
                }
              }
              if (local_c0 == local_bc) {
                local_c0 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                     (0x404,&local_108,&local_bc);
                FVar17 = local_108.SecondaryData;
              }
              lVar16 = (longlong)local_c0;
              FVar15 = (ForElementType<int>)&local_108;
              if (FVar17 != (ForElementType<int>)0x0) {
                FVar15 = FVar17;
              }
              local_c0 = local_c0 + 1;
              uVar14 = (ulonglong)(uint)local_138._4_4_;
              *(undefined4 *)((longlong)FVar15 + lVar16 * 4) = local_138._4_4_;
              local_128 = lVar23;
              FVar17 = local_108.SecondaryData;
            }
            else {
              iVar12 = local_138._4_4_ + (int)fVar3;
              if ((int)local_138._4_4_ < iVar12) {
                lVar23 = uVar19 << 5;
                uVar21 = uVar19;
                do {
                  uVar18 = (uint)uVar19;
                  uVar13 = 0;
                  if ((int)uVar18 < (this->FaceBounds).ArrayNum) {
                    uVar13 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    uVar11 = (*pcVar5)();
                    return (bool)uVar11;
                  }
                  pFVar4 = (this->FaceBounds).AllocatorInstance.Data;
                  pFVar2 = pFVar4 + lVar23 + 0x10;
                  pFVar1 = pFVar4 + lVar23;
                  auVar29._4_4_ = -(uint)(*(float *)(pFVar2 + 4) < fVar30);
                  auVar29._0_4_ = -(uint)(*(float *)pFVar2 < (float)dVar8);
                  auVar29._8_4_ = -(uint)(*(float *)(pFVar2 + 8) < fVar26);
                  auVar29._12_4_ = -(uint)(*(float *)(pFVar2 + 0xc) < 0.0);
                  auVar7._4_4_ = -(uint)(fVar31 < *(float *)(pFVar1 + 4));
                  auVar7._0_4_ = -(uint)((float)dVar9 < *(float *)pFVar1);
                  auVar7._8_4_ = -(uint)(fVar27 < *(float *)(pFVar1 + 8));
                  auVar7._12_4_ = -(uint)(0.0 < *(float *)(pFVar1 + 0xc));
                  uVar13 = movmskps((int)pFVar4,auVar29 | auVar7);
                  uVar14 = (ulonglong)uVar13;
                  if (uVar13 == 0) {
                    bVar10 = FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                             ::VisitOverlap(&local_b8,uVar18);
                    uVar14 = CONCAT71(extraout_var_00,bVar10);
                    FVar17 = local_108.SecondaryData;
                    if (!bVar10) goto joined_r0x000143e8c6da;
                  }
                  uVar19 = (ulonglong)(uVar18 + 1);
                  uVar21 = uVar21 + 1;
                  lVar23 = lVar23 + 0x20;
                  FVar17 = local_108.SecondaryData;
                } while ((longlong)uVar21 < (longlong)iVar12);
              }
            }
          }
        }
        local_128 = local_128 + 1;
        pFVar24 = pFVar24 + 4;
        pFVar25 = pFVar25 + 0x20;
        piVar20 = local_130;
      } while (local_128 < 2);
    }
    local_c0 = 0;
joined_r0x000143e8c6da:
    if (FVar17 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar17);
    }
  }
  return local_b8.bFoundIntersection;
}

// FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> @ 143e8c740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
          (FTrimeshBVH *this,FOBBVectorized *param_1,TRigidTransform<double,3> *param_2,
          TImplicitObjectScaled<Chaos::FCapsule,1> *param_3,double param_4,
          TVector<double,3> *param_5,FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  ForElementType<int> FVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  undefined1 auStackY_158 [32];
  uint local_108;
  undefined1 local_104 [12];
  float local_f8;
  float local_f4;
  float local_f0;
  ForElementType<int> local_e8;
  int local_a0;
  int local_9c;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_f8 = (float)*(double *)param_5;
  local_f4 = (float)*(double *)&param_5->field_0x8;
  local_f0 = (float)*(double *)&param_5->field_0x10;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>::
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
            (&local_98,param_2,param_3,param_4,(TVector<float,3> *)&local_f8,param_6);
  if ((this->Nodes).ArrayNum != 0) {
    local_9c = 0x10;
    local_e8.SecondaryData = (ForElementType<int>)0x0;
    local_104[0] = '\0';
    local_104[1] = '\0';
    local_104[2] = '\0';
    local_104[3] = '\0';
    local_a0 = 0;
    iVar6 = 0;
    if ((&local_e8 <= (ForElementType<int> *)local_104) &&
       (iVar6 = 0, local_104 < &local_e8.SecondaryData)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = local_a0;
      if (local_a0 == local_9c) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,&local_e8,&local_9c);
      }
    }
    local_a0 = iVar6 + 1;
    FVar8 = (ForElementType<int>)&local_e8;
    if (local_e8.SecondaryData != (ForElementType<int>)0x0) {
      FVar8 = local_e8.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_104._0_4_;
    piVar11 = &(this->Nodes).ArrayNum;
    while (local_a0 != 0) {
      uVar13 = 0;
      piVar10 = &(this->Nodes).ArrayNum;
      local_104._4_8_ = piVar11;
      if ((local_a0 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FVar8 = (ForElementType<int>)&local_e8;
      if (local_e8.SecondaryData != (ForElementType<int>)0x0) {
        FVar8 = local_e8.SecondaryData;
      }
      iVar6 = local_a0 + -1;
      uVar1 = *(uint *)((longlong)FVar8 + (longlong)iVar6 * 4);
      FVar8 = (ForElementType<int>)&local_e8;
      if (local_e8.SecondaryData != (ForElementType<int>)0x0) {
        FVar8 = local_e8.SecondaryData;
      }
      _Dst = (void *)((longlong)FVar8 + (longlong)iVar6 * 4);
      iVar6 = (local_a0 - iVar6) + -1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar6 << 2);
      }
      local_a0 = local_a0 + -1;
      if ((((int)uVar1 < 0) ||
          (piVar11 = piVar10, local_104._4_8_ = piVar10, *piVar10 <= (int)uVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Nodes.IsValidIndex(NodeIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                             ,0xf6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = 0;
      if ((int)uVar1 < *piVar11) {
        uVar9 = ~uVar1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->Nodes).AllocatorInstance.Data;
      pFVar12 = pFVar2 + (longlong)(int)uVar1 * 0x50 + 0x48;
      do {
        local_108 = *(uint *)(pFVar12 + -8);
        if ((local_108 != 0xffffffff) &&
           (bVar4 = Chaos::Private::FOBBVectorized::IntersectAABB
                              (param_1,(FAABBVectorized *)
                                       (pFVar2 + uVar13 * 0x20 + (longlong)(int)uVar1 * 0x50)),
           bVar4)) {
          if (*(int *)pFVar12 == 0) {
            FVar8 = (ForElementType<int>)&local_e8;
            if (local_e8.SecondaryData != (ForElementType<int>)0x0) {
              FVar8 = local_e8.SecondaryData;
            }
            if ((ulonglong)FVar8 <= &local_108) {
              FVar8 = (ForElementType<int>)&local_e8;
              if (local_e8.SecondaryData != (ForElementType<int>)0x0) {
                FVar8 = local_e8.SecondaryData;
              }
              if ((&local_108 < (uint *)((longlong)FVar8 + (longlong)local_9c * 4)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
            }
            iVar6 = local_a0;
            if (local_a0 == local_9c) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                (0x404,&local_e8,&local_9c);
            }
            local_a0 = iVar6 + 1;
            FVar8 = (ForElementType<int>)&local_e8;
            if (local_e8.SecondaryData != (ForElementType<int>)0x0) {
              FVar8 = local_e8.SecondaryData;
            }
            *(uint *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_108;
          }
          else {
            iVar6 = *(int *)pFVar12 + local_108;
            for (uVar9 = local_108; (int)uVar9 < iVar6; uVar9 = uVar9 + 1) {
              uVar7 = 0;
              if ((int)uVar9 < (this->FaceBounds).ArrayNum) {
                uVar7 = ~uVar9 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              bVar4 = Chaos::Private::FOBBVectorized::IntersectAABB
                                (param_1,(FAABBVectorized *)
                                         ((this->FaceBounds).AllocatorInstance.Data +
                                         (longlong)(int)uVar9 * 0x20));
              if ((bVar4) &&
                 (bVar4 = FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                          ::VisitOverlap(&local_98,uVar9), !bVar4)) goto joined_r0x000143e8cbac;
            }
          }
        }
        uVar9 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar9;
        pFVar12 = pFVar12 + 4;
        piVar11 = (int *)local_104._4_8_;
      } while ((int)uVar9 < 2);
    }
    local_a0 = 0;
joined_r0x000143e8cbac:
    if (local_e8.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_e8.SecondaryData);
    }
  }
  return local_98.bFoundIntersection;
}

// FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 143e8cc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (FTrimeshBVH *this,TAABB<double,3> *param_1,TRigidTransform<double,3> *param_2,
          TImplicitObjectScaled<Chaos::FConvex,1> *param_3,double param_4,TVector<double,3> *param_5
          ,FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined7 extraout_var_00;
  ForElementType<int> FVar13;
  longlong lVar14;
  ulonglong uVar15;
  int *piVar16;
  ulonglong uVar17;
  int *piVar18;
  longlong lVar19;
  ForElementType<int> FVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar40;
  float fVar41;
  undefined1 auStack_1a8 [32];
  undefined1 *local_188;
  ForElementType<int> local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined1 local_158 [8];
  int *local_150;
  longlong local_148;
  __m128 local_138;
  undefined1 local_128 [16];
  ForElementType<int> local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  float local_f8;
  FTriangleMeshImplicitObject *local_f0;
  undefined1 local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  ForElementType<int> local_b8;
  int local_70;
  int local_6c;
  ulonglong local_68;
  undefined7 extraout_var;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  auVar27 = *(undefined1 (*) [16])&param_2->field_0x10;
  piVar16 = &(this->Nodes).ArrayNum;
  local_e8 = 0;
  local_110 = *(undefined8 *)param_5;
  uStack_108 = *(undefined8 *)&param_5->field_0x8;
  local_100 = *(undefined8 *)&param_5->field_0x10;
  local_f0 = param_6;
  local_f8 = (float)param_4;
  auVar6._4_8_ = *(double *)&param_2->field_0x8;
  auVar6._0_4_ = auVar27._4_4_;
  auVar33._0_8_ = auVar6._0_8_ << 0x20;
  auVar33._8_4_ = auVar27._8_4_;
  auVar33._12_4_ = auVar27._12_4_;
  fVar40 = (float)*(double *)param_2;
  fVar41 = (float)*(double *)&param_2->field_0x8;
  fVar31 = (float)auVar27._0_8_;
  fVar36 = (float)auVar33._8_8_;
  fVar32 = fVar41 * fVar41 + fVar40 * fVar40;
  fVar37 = fVar40 * fVar40 + fVar41 * fVar41;
  fVar38 = fVar36 * fVar36 + fVar31 * fVar31;
  fVar39 = fVar31 * fVar31 + fVar36 * fVar36;
  auVar27._0_4_ = fVar38 + fVar32;
  auVar27._4_4_ = fVar39 + fVar37;
  auVar27._8_4_ = fVar32 + fVar38;
  auVar27._12_4_ = fVar37 + fVar39;
  uVar23 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar27._0_4_);
  uVar24 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar27._4_4_);
  uVar25 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar27._8_4_);
  uVar26 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar27._12_4_);
  auVar27 = sqrtps(auVar27,auVar27);
  auVar33 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar27);
  local_c8 = *(double *)&param_2->field_0x30;
  local_138.m128_u32[0] =
       (uint)(auVar33._0_4_ * fVar40) & uVar23 |
       ~uVar23 & GlobalVectorConstants::Float0001.m128_u32[0];
  local_138.m128_u32[1] =
       (uint)(auVar33._4_4_ * fVar41) & uVar24 |
       ~uVar24 & GlobalVectorConstants::Float0001.m128_u32[1];
  local_138.m128_u32[2] =
       (uint)(auVar33._8_4_ * fVar31) & uVar25 |
       ~uVar25 & GlobalVectorConstants::Float0001.m128_u32[2];
  local_138.m128_u32[3] =
       (uint)(auVar33._12_4_ * fVar36) & uVar26 |
       ~uVar26 & GlobalVectorConstants::Float0001.m128_u32[3];
  local_d8 = *(undefined1 (*) [16])&param_2->field_0x20;
  auVar7._4_8_ = auVar27._8_8_;
  auVar7._0_4_ = local_d8._4_4_;
  auVar28._0_8_ = auVar7._0_8_ << 0x20;
  auVar28._8_4_ = local_d8._8_4_;
  auVar28._12_4_ = local_d8._12_4_;
  fVar31 = (float)*(double *)&(param_1->MMin).field_0x10;
  local_128._4_4_ = (float)auVar28._8_8_;
  local_128._0_4_ = (float)local_d8._0_8_;
  local_128._8_4_ = (float)local_c8;
  local_128._12_4_ = 0;
  fVar36 = (float)SUB168(*(undefined1 (*) [16])&param_1->MMin,0);
  fVar37 = (float)SUB168(*(undefined1 (*) [16])&param_1->MMin,8);
  dVar8 = *(double *)&param_1->MMax;
  fVar38 = (float)*(double *)&(param_1->MMax).field_0x8;
  fVar32 = (float)*(double *)&(param_1->MMax).field_0x10;
  if (*piVar16 == 0) {
    uVar10 = 0;
  }
  else {
    local_6c = 0x10;
    local_70 = 0;
    local_b8.SecondaryData = (ForElementType<int>)0x0;
    local_158[0] = '\0';
    local_158[1] = '\0';
    local_158[2] = '\0';
    local_158[3] = '\0';
    iVar11 = 0;
    local_118 = (ForElementType<int>)param_3;
    if ((&local_b8 <= (ForElementType<int> *)local_158) && (local_158 < &local_b8.SecondaryData)) {
      local_168 = 4;
      local_180 = (ForElementType<int>)&local_b8;
      local_170 = 0;
      local_178 = 0x10;
      local_188 = local_158;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      iVar11 = local_70;
      if (local_70 == local_6c) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_b8,&local_6c);
      }
    }
    local_70 = iVar11 + 1;
    FVar13 = (ForElementType<int>)&local_b8;
    if (local_b8.SecondaryData != (ForElementType<int>)0x0) {
      FVar13 = local_b8.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar13 + (longlong)iVar11 * 4) = local_158._0_4_;
    uVar10 = 0;
    FVar13 = local_180;
    FVar20 = local_b8.SecondaryData;
    while (local_70 != 0) {
      piVar18 = &(this->Nodes).ArrayNum;
      local_180 = (ForElementType<int>)(longlong)local_70;
      local_150 = piVar16;
      if (local_70 < 1) {
        local_188 = (undefined1 *)0x0;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        FVar20 = local_b8.SecondaryData;
        FVar13 = local_180;
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      local_180 = FVar13;
      FVar13 = (ForElementType<int>)&local_b8;
      if (FVar20 != (ForElementType<int>)0x0) {
        FVar13 = FVar20;
      }
      iVar11 = local_70 + -1;
      uVar23 = *(uint *)((longlong)FVar13 + (longlong)iVar11 * 4);
      FVar13 = (ForElementType<int>)&local_b8;
      if (FVar20 != (ForElementType<int>)0x0) {
        FVar13 = FVar20;
      }
      _Dst = (void *)((longlong)FVar13 + (longlong)iVar11 * 4);
      iVar11 = (local_70 - iVar11) + -1;
      if (iVar11 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar11 << 2);
        FVar20 = local_b8.SecondaryData;
      }
      local_70 = local_70 + -1;
      if ((((int)uVar23 < 0) || (piVar16 = piVar18, local_150 = piVar18, *piVar18 <= (int)uVar23))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Nodes.IsValidIndex(NodeIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                                ,0xf6,L""), FVar20 = local_b8.SecondaryData, bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      uVar12 = 0;
      if ((int)uVar23 < *piVar16) {
        uVar12 = (ulonglong)(~uVar23 >> 0x1f);
      }
      if ((int)uVar12 == 0) {
        local_188 = (undefined1 *)(longlong)(int)uVar23;
        local_180 = (ForElementType<int>)(longlong)*piVar16;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar12 = CONCAT71(extraout_var,bVar9);
        FVar20 = local_b8.SecondaryData;
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      pFVar22 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar23 * 0x50;
      local_148 = 0;
      pFVar21 = pFVar22 + 0x48;
      do {
        lVar19 = local_148;
        local_158._4_4_ = *(undefined4 *)(pFVar21 + -8);
        uVar15 = (ulonglong)(int)local_158._4_4_;
        local_148 = lVar19;
        if ((float)local_158._4_4_ != -NAN) {
          auVar29._4_4_ = -(uint)(fVar38 < *(float *)(pFVar22 + 4));
          auVar29._0_4_ = -(uint)((float)dVar8 < *(float *)pFVar22);
          auVar29._8_4_ = -(uint)(fVar32 < *(float *)(pFVar22 + 8));
          auVar29._12_4_ = -(uint)(0.0 < *(float *)(pFVar22 + 0xc));
          auVar34._4_4_ = -(uint)(*(float *)(pFVar22 + 0x14) < fVar37);
          auVar34._0_4_ = -(uint)(*(float *)(pFVar22 + 0x10) < fVar36);
          auVar34._8_4_ = -(uint)(*(float *)(pFVar22 + 0x18) < fVar31);
          auVar34._12_4_ = -(uint)(*(float *)(pFVar22 + 0x1c) < 0.0);
          uVar23 = movmskps((int)uVar12,auVar34 | auVar29);
          uVar12 = (ulonglong)uVar23;
          if (uVar23 == 0) {
            fVar39 = *(float *)pFVar21;
            uVar12 = (ulonglong)(uint)fVar39;
            if (fVar39 == 0.0) {
              FVar13 = (ForElementType<int>)&local_b8;
              if (FVar20 != (ForElementType<int>)0x0) {
                FVar13 = FVar20;
              }
              if ((ulonglong)FVar13 <= (longlong)local_158 + 4U) {
                FVar13 = (ForElementType<int>)&local_b8;
                if (FVar20 != (ForElementType<int>)0x0) {
                  FVar13 = FVar20;
                }
                if (local_158 + 4 < (undefined1 *)((longlong)FVar13 + (longlong)local_6c * 4)) {
                  local_170 = (longlong)local_70;
                  local_168 = 4;
                  local_188 = local_158 + 4;
                  local_180 = (ForElementType<int>)&local_b8;
                  if (FVar20 != (ForElementType<int>)0x0) {
                    local_180 = FVar20;
                  }
                  local_178 = (longlong)local_6c;
                  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  FVar20 = local_b8.SecondaryData;
                  if (bVar9) {
                    pcVar5 = (code *)swi(3);
                    uVar10 = (*pcVar5)();
                    return (bool)uVar10;
                  }
                }
              }
              if (local_70 == local_6c) {
                local_70 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                     (0x404,&local_b8,&local_6c);
                FVar20 = local_b8.SecondaryData;
              }
              lVar14 = (longlong)local_70;
              FVar13 = (ForElementType<int>)&local_b8;
              if (FVar20 != (ForElementType<int>)0x0) {
                FVar13 = FVar20;
              }
              local_70 = local_70 + 1;
              uVar12 = (ulonglong)(uint)local_158._4_4_;
              *(undefined4 *)((longlong)FVar13 + lVar14 * 4) = local_158._4_4_;
              local_148 = lVar19;
              FVar20 = local_b8.SecondaryData;
            }
            else {
              iVar11 = (int)fVar39 + local_158._4_4_;
              if ((int)local_158._4_4_ < iVar11) {
                lVar19 = uVar15 << 5;
                uVar17 = uVar15;
                do {
                  iVar3 = (this->FaceBounds).ArrayNum;
                  uVar24 = (uint)uVar15;
                  uVar23 = 0;
                  if ((int)uVar24 < iVar3) {
                    uVar23 = ~uVar24 >> 0x1f;
                  }
                  if (uVar23 == 0) {
                    local_188 = (undefined1 *)(longlong)(int)uVar24;
                    local_180 = (ForElementType<int>)(longlong)iVar3;
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar9) {
                      pcVar5 = (code *)swi(3);
                      uVar10 = (*pcVar5)();
                      return (bool)uVar10;
                    }
                  }
                  pFVar4 = (this->FaceBounds).AllocatorInstance.Data;
                  pFVar2 = pFVar4 + lVar19 + 0x10;
                  pFVar1 = pFVar4 + lVar19;
                  auVar30._4_4_ = -(uint)(fVar38 < *(float *)(pFVar1 + 4));
                  auVar30._0_4_ = -(uint)((float)dVar8 < *(float *)pFVar1);
                  auVar30._8_4_ = -(uint)(fVar32 < *(float *)(pFVar1 + 8));
                  auVar30._12_4_ = -(uint)(0.0 < *(float *)(pFVar1 + 0xc));
                  auVar35._4_4_ = -(uint)(*(float *)(pFVar2 + 4) < fVar37);
                  auVar35._0_4_ = -(uint)(*(float *)pFVar2 < fVar36);
                  auVar35._8_4_ = -(uint)(*(float *)(pFVar2 + 8) < fVar31);
                  auVar35._12_4_ = -(uint)(*(float *)(pFVar2 + 0xc) < 0.0);
                  uVar23 = movmskps((int)pFVar4,auVar35 | auVar30);
                  uVar12 = (ulonglong)uVar23;
                  if (uVar23 == 0) {
                    bVar9 = FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                            ::VisitOverlap((FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                                            *)&local_138,uVar24);
                    uVar12 = CONCAT71(extraout_var_00,bVar9);
                    if (!bVar9) {
                      if (local_b8.SecondaryData == (ForElementType<int>)0x0) {
                        return (bool)local_e8;
                      }
                      FMemory::Free((void *)local_b8.SecondaryData);
                      return (bool)local_e8;
                    }
                  }
                  uVar15 = (ulonglong)(uVar24 + 1);
                  uVar17 = uVar17 + 1;
                  lVar19 = lVar19 + 0x20;
                  FVar20 = local_b8.SecondaryData;
                } while ((longlong)uVar17 < (longlong)iVar11);
              }
            }
          }
        }
        local_148 = local_148 + 1;
        pFVar21 = pFVar21 + 4;
        pFVar22 = pFVar22 + 0x20;
        piVar16 = local_150;
        uVar10 = local_e8;
        FVar13 = local_180;
      } while (local_148 < 2);
    }
    if (FVar20 != (ForElementType<int>)0x0) {
      local_180 = FVar13;
      FMemory::Free((void *)FVar20);
    }
  }
  return (bool)uVar10;
}

// FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 143e8d1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::FindAllIntersectionsNoMTD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (FTrimeshBVH *this,FOBBVectorized *param_1,TRigidTransform<double,3> *param_2,
          TImplicitObjectScaled<Chaos::FConvex,1> *param_3,double param_4,TVector<double,3> *param_5
          ,FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ForElementType<int> FVar9;
  uint *puVar10;
  int *piVar11;
  ulonglong uVar12;
  int *piVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  float fVar28;
  float fVar29;
  undefined1 auStack_178 [32];
  uint *local_158;
  ForElementType<int> local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  uint local_128;
  undefined1 local_124 [12];
  __m128 local_118;
  undefined1 local_108 [16];
  TImplicitObjectScaled<Chaos::FConvex,1> *local_f8;
  uchar local_f0 [16];
  undefined8 local_e0;
  float local_d8;
  FTriangleMeshImplicitObject *local_d0;
  undefined1 local_c8;
  undefined1 local_b8 [16];
  double local_a8;
  ForElementType<int> local_98;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  auVar19 = *(undefined1 (*) [16])&param_2->field_0x10;
  piVar13 = &(this->Nodes).ArrayNum;
  local_c8 = 0;
  local_f0[0] = param_5->field_0x0;
  local_f0[1] = param_5->field_0x1;
  local_f0[2] = param_5->field_0x2;
  local_f0[3] = param_5->field_0x3;
  local_f0[4] = param_5->field_0x4;
  local_f0[5] = param_5->field_0x5;
  local_f0[6] = param_5->field_0x6;
  local_f0[7] = param_5->field_0x7;
  local_f0[8] = param_5->field_0x8;
  local_f0[9] = param_5->field_0x9;
  local_f0[10] = param_5->field_0xa;
  local_f0[0xb] = param_5->field_0xb;
  local_f0._12_4_ = *(undefined4 *)&param_5->field_0xc;
  local_e0 = *(undefined8 *)&param_5->field_0x10;
  local_d0 = param_6;
  local_d8 = (float)param_4;
  auVar4._4_8_ = *(double *)&param_2->field_0x8;
  auVar4._0_4_ = auVar19._4_4_;
  auVar23._0_8_ = auVar4._0_8_ << 0x20;
  auVar23._8_4_ = auVar19._8_4_;
  auVar23._12_4_ = auVar19._12_4_;
  fVar28 = (float)*(double *)param_2;
  fVar29 = (float)*(double *)&param_2->field_0x8;
  fVar21 = (float)auVar19._0_8_;
  fVar24 = (float)auVar23._8_8_;
  fVar22 = fVar29 * fVar29 + fVar28 * fVar28;
  fVar25 = fVar28 * fVar28 + fVar29 * fVar29;
  fVar26 = fVar24 * fVar24 + fVar21 * fVar21;
  fVar27 = fVar21 * fVar21 + fVar24 * fVar24;
  auVar19._0_4_ = fVar26 + fVar22;
  auVar19._4_4_ = fVar27 + fVar25;
  auVar19._8_4_ = fVar22 + fVar26;
  auVar19._12_4_ = fVar25 + fVar27;
  uVar15 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar19._0_4_);
  uVar16 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar19._4_4_);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar19._8_4_);
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar19._12_4_);
  auVar19 = sqrtps(auVar19,auVar19);
  auVar23 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar19);
  local_a8 = *(double *)&param_2->field_0x30;
  local_118.m128_u32[0] =
       (uint)(auVar23._0_4_ * fVar28) & uVar15 |
       ~uVar15 & GlobalVectorConstants::Float0001.m128_u32[0];
  local_118.m128_u32[1] =
       (uint)(auVar23._4_4_ * fVar29) & uVar16 |
       ~uVar16 & GlobalVectorConstants::Float0001.m128_u32[1];
  local_118.m128_u32[2] =
       (uint)(auVar23._8_4_ * fVar21) & uVar17 |
       ~uVar17 & GlobalVectorConstants::Float0001.m128_u32[2];
  local_118.m128_u32[3] =
       (uint)(auVar23._12_4_ * fVar24) & uVar18 |
       ~uVar18 & GlobalVectorConstants::Float0001.m128_u32[3];
  local_b8 = *(undefined1 (*) [16])&param_2->field_0x20;
  auVar5._4_8_ = auVar19._8_8_;
  auVar5._0_4_ = local_b8._4_4_;
  auVar20._0_8_ = auVar5._0_8_ << 0x20;
  auVar20._8_4_ = local_b8._8_4_;
  auVar20._12_4_ = local_b8._12_4_;
  local_108._4_4_ = (float)auVar20._8_8_;
  local_108._0_4_ = (float)local_b8._0_8_;
  local_108._8_4_ = (float)local_a8;
  local_108._12_4_ = 0;
  if (*piVar13 == 0) {
    uVar7 = 0;
  }
  else {
    local_4c = 0x10;
    local_98.SecondaryData = (ForElementType<int>)0x0;
    local_124._0_4_ = 0;
    local_50 = 0;
    iVar8 = 0;
    local_f8 = param_3;
    if ((&local_98 <= (ForElementType<int> *)local_124) &&
       (iVar8 = 0, local_124 < &local_98.SecondaryData)) {
      local_138 = 4;
      local_150 = (ForElementType<int>)&local_98;
      local_140 = 0;
      local_148 = 0x10;
      local_158 = (uint *)local_124;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      iVar8 = local_50;
      if (local_50 == local_4c) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,&local_98,&local_4c);
      }
    }
    local_50 = iVar8 + 1;
    FVar9 = (ForElementType<int>)&local_98;
    if (local_98.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_98.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar9 + (longlong)iVar8 * 4) = local_124._0_4_;
    uVar7 = 0;
    FVar9 = local_150;
    while (local_50 != 0) {
      uVar12 = 0;
      piVar11 = &(this->Nodes).ArrayNum;
      local_150 = (ForElementType<int>)(longlong)local_50;
      local_124._4_8_ = piVar13;
      if (local_50 < 1) {
        local_158 = (uint *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        FVar9 = local_150;
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
      }
      local_150 = FVar9;
      FVar9 = (ForElementType<int>)&local_98;
      if (local_98.SecondaryData != (ForElementType<int>)0x0) {
        FVar9 = local_98.SecondaryData;
      }
      iVar8 = local_50 + -1;
      uVar15 = *(uint *)((longlong)FVar9 + (longlong)iVar8 * 4);
      puVar10 = (uint *)(longlong)(int)uVar15;
      FVar9 = (ForElementType<int>)&local_98;
      if (local_98.SecondaryData != (ForElementType<int>)0x0) {
        FVar9 = local_98.SecondaryData;
      }
      _Dst = (void *)((longlong)FVar9 + (longlong)iVar8 * 4);
      iVar8 = (local_50 - iVar8) + -1;
      if (iVar8 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar8 << 2);
      }
      local_50 = local_50 + -1;
      if ((((int)uVar15 < 0) ||
          (piVar13 = piVar11, local_124._4_8_ = piVar11, *piVar11 <= (int)uVar15)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Nodes.IsValidIndex(NodeIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                             ,0xf6,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      uVar16 = 0;
      if ((int)uVar15 < *piVar13) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (local_158 = puVar10, local_150 = (ForElementType<int>)(longlong)*piVar13,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pFVar2 = (this->Nodes).AllocatorInstance.Data;
      pFVar14 = pFVar2 + (longlong)puVar10 * 0x50 + 0x48;
      do {
        local_128 = *(uint *)(pFVar14 + -8);
        if ((local_128 != 0xffffffff) &&
           (bVar6 = Chaos::Private::FOBBVectorized::IntersectAABB
                              (param_1,(FAABBVectorized *)
                                       (pFVar2 + uVar12 * 0x20 + (longlong)puVar10 * 0x50)), bVar6))
        {
          if (*(int *)pFVar14 == 0) {
            FVar9 = (ForElementType<int>)&local_98;
            if (local_98.SecondaryData != (ForElementType<int>)0x0) {
              FVar9 = local_98.SecondaryData;
            }
            if ((ulonglong)FVar9 <= &local_128) {
              FVar9 = (ForElementType<int>)&local_98;
              if (local_98.SecondaryData != (ForElementType<int>)0x0) {
                FVar9 = local_98.SecondaryData;
              }
              if (&local_128 < (uint *)((longlong)FVar9 + (longlong)local_4c * 4)) {
                local_140 = (longlong)local_50;
                local_138 = 4;
                local_158 = &local_128;
                local_150 = (ForElementType<int>)&local_98;
                if (local_98.SecondaryData != (ForElementType<int>)0x0) {
                  local_150 = local_98.SecondaryData;
                }
                local_148 = (longlong)local_4c;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  uVar7 = (*pcVar3)();
                  return (bool)uVar7;
                }
              }
            }
            iVar8 = local_50;
            if (local_50 == local_4c) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                (0x404,&local_98,&local_4c);
            }
            local_50 = iVar8 + 1;
            FVar9 = (ForElementType<int>)&local_98;
            if (local_98.SecondaryData != (ForElementType<int>)0x0) {
              FVar9 = local_98.SecondaryData;
            }
            *(uint *)((longlong)FVar9 + (longlong)iVar8 * 4) = local_128;
          }
          else {
            iVar8 = *(int *)pFVar14 + local_128;
            FVar9 = local_150;
            for (uVar15 = local_128; local_150 = FVar9, (int)uVar15 < iVar8; uVar15 = uVar15 + 1) {
              iVar1 = (this->FaceBounds).ArrayNum;
              local_150 = (ForElementType<int>)(longlong)iVar1;
              uVar16 = 0;
              if ((int)uVar15 < iVar1) {
                uVar16 = ~uVar15 >> 0x1f;
              }
              if (uVar16 == 0) {
                local_158 = (uint *)(longlong)(int)uVar15;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                FVar9 = local_150;
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  uVar7 = (*pcVar3)();
                  return (bool)uVar7;
                }
              }
              local_150 = FVar9;
              bVar6 = Chaos::Private::FOBBVectorized::IntersectAABB
                                (param_1,(FAABBVectorized *)
                                         ((this->FaceBounds).AllocatorInstance.Data +
                                         (longlong)(int)uVar15 * 0x20));
              if ((bVar6) &&
                 (bVar6 = FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                          ::VisitOverlap((FTriangleMeshOverlapVisitorNoMTD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                                          *)&local_118,uVar15), !bVar6)) {
                if (local_98.SecondaryData == (ForElementType<int>)0x0) {
                  return (bool)local_c8;
                }
                FMemory::Free((void *)local_98.SecondaryData);
                return (bool)local_c8;
              }
              FVar9 = local_150;
            }
          }
        }
        uVar15 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar15;
        pFVar14 = pFVar14 + 4;
        piVar13 = (int *)local_124._4_8_;
        uVar7 = local_c8;
        FVar9 = local_150;
      } while ((int)uVar15 < 2);
    }
    if (local_98.SecondaryData != (ForElementType<int>)0x0) {
      local_150 = FVar9;
      FMemory::Free((void *)local_98.SecondaryData);
    }
  }
  return (bool)uVar7;
}

// FindAllIntersectionsNoMTD<Chaos::TSphere<double,3>_> @ 143e8d750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::FindAllIntersectionsNoMTD<Chaos::TSphere<double,3>_>
          (FTrimeshBVH *this,TAABB<double,3> *param_1,TRigidTransform<double,3> *param_2,
          TSphere<double,3> *param_3,double param_4,TVector<double,3> *param_5,
          FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined7 extraout_var_00;
  ForElementType<int> FVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  int *piVar21;
  ulonglong uVar22;
  int *piVar23;
  longlong lVar24;
  ForElementType<int> FVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auStack_1b8 [32];
  undefined1 *local_198;
  ForElementType<int> local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined1 local_168 [8];
  int *local_160;
  longlong local_158;
  undefined1 local_148 [16];
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  ForElementType<int> local_108;
  int local_c0;
  int local_bc;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TSphere<double,3>_> local_b8;
  ulonglong local_78;
  undefined7 extraout_var;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  dVar11 = *(double *)&param_2->field_0x18;
  local_b8.TriMesh = param_6;
  local_b8.bFoundIntersection = false;
  local_118 = (double)*(float *)&(param_3->Center).field_0x8;
  local_b8.Radius = (float)param_4 + *(float *)&param_3->_padding_;
  auVar28 = *(undefined1 (*) [16])param_2;
  dVar34 = (double)*(float *)&(param_3->Center).field_0x4;
  dVar9 = local_118 * *(double *)&param_2->field_0x50;
  dVar10 = *(double *)&param_2->field_0x58 * 0.0;
  auVar29 = *(undefined1 (*) [16])&param_2->field_0x10;
  dVar35 = auVar29._0_8_;
  auVar38 = blendpd(auVar28,auVar29,2);
  local_128._8_4_ = SUB84(dVar34,0);
  local_128._0_8_ = (double)*(float *)&param_3->Center;
  local_128._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  dVar8 = (double)*(float *)&param_3->Center * *(double *)&param_2->field_0x40;
  dVar34 = dVar34 * *(double *)&param_2->field_0x48;
  uVar43 = (undefined4)((ulonglong)dVar34 >> 0x20);
  auVar46._8_4_ = SUB84(dVar34,0);
  auVar46._0_8_ = dVar8;
  auVar46._12_4_ = uVar43;
  auVar47._0_8_ = auVar46._8_8_ * auVar28._0_8_ - auVar28._8_8_ * dVar8;
  auVar47._8_8_ = dVar9 * auVar28._8_8_ - dVar35 * dVar34;
  auVar48._8_4_ = SUB84(dVar34,0);
  auVar48._0_8_ = dVar8;
  auVar48._12_4_ = uVar43;
  auVar28._8_4_ = SUB84(dVar10,0);
  auVar28._0_8_ = dVar9;
  auVar28._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar28 = blendpd(auVar48,auVar28,2);
  auVar39._0_8_ = auVar28._0_8_ * dVar35 - auVar38._0_8_ * dVar9;
  auVar39._8_8_ = auVar28._8_8_ * auVar29._8_8_ - auVar38._8_8_ * dVar10;
  auVar28 = *(undefined1 (*) [16])param_2;
  auVar48 = blendpd(auVar47,auVar39,2);
  dVar10 = auVar47._8_8_ + auVar47._8_8_;
  dVar7 = auVar39._0_8_ + auVar39._0_8_;
  uVar43 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar49._0_8_ = auVar48._0_8_ + auVar48._0_8_;
  auVar49._8_8_ = auVar48._8_8_ + auVar48._8_8_;
  auVar41._8_4_ = SUB84(dVar7,0);
  auVar41._0_8_ = dVar10;
  auVar41._12_4_ = uVar43;
  auVar38._8_4_ = SUB84(dVar7,0);
  auVar38._0_8_ = dVar10;
  auVar38._12_4_ = uVar43;
  auVar39 = blendpd(auVar38,auVar49,2);
  auVar48 = blendpd(auVar28,auVar29,2);
  auVar40._0_8_ = auVar39._0_8_ * dVar35 - auVar48._0_8_ * auVar49._0_8_;
  auVar40._8_8_ = auVar39._8_8_ * auVar29._8_8_ - auVar48._8_8_ * auVar49._8_8_;
  auVar42._0_8_ = auVar41._8_8_ * auVar28._0_8_ - auVar28._8_8_ * dVar10;
  auVar42._8_8_ = auVar49._0_8_ * auVar28._8_8_ - dVar35 * dVar7;
  auVar29._8_4_ = SUB84(auVar42._8_8_,0);
  auVar29._0_8_ = auVar42._0_8_;
  auVar29._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
  auVar28 = blendpd(auVar42,auVar40,2);
  dVar10 = dVar10 * dVar11 + dVar8 + auVar29._8_8_ + *(double *)&param_2->field_0x20;
  dVar7 = dVar7 * dVar11 + dVar34 + auVar40._0_8_ + *(double *)&param_2->field_0x28;
  local_138 = auVar49._0_8_ * dVar11 + dVar9 + auVar28._0_8_ + *(double *)&param_2->field_0x30;
  local_b8.X._0_4_ = (float)dVar10;
  local_148._8_4_ = SUB84(dVar7,0);
  local_148._0_8_ = dVar10;
  local_148._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_b8.X.m128_f32[1] = (float)dVar7;
  local_b8.X.m128_f32[2] = (float)local_138;
  local_b8.X.m128_f32[3] = 0.0;
  local_b8.TriMeshScale._0_4_ = (float)*(double *)param_5;
  local_b8.TriMeshScale.m128_f32[1] = (float)*(double *)&param_5->field_0x8;
  dVar10 = *(double *)&param_1->MMin;
  local_b8.TriMeshScale.m128_f32[2] = (float)*(double *)&param_5->field_0x10;
  local_b8.TriMeshScale.m128_f32[3] = 0.0;
  fVar44 = (float)*(double *)&(param_1->MMin).field_0x8;
  fVar32 = (float)*(double *)&(param_1->MMin).field_0x10;
  dVar7 = *(double *)&param_1->MMax;
  fVar45 = (float)*(double *)&(param_1->MMax).field_0x8;
  fVar33 = (float)*(double *)&(param_1->MMax).field_0x10;
  if ((this->Nodes).ArrayNum == 0) {
    local_b8.bFoundIntersection = false;
  }
  else {
    local_bc = 0x10;
    local_c0 = 0;
    local_108.SecondaryData = (ForElementType<int>)0x0;
    local_168[0] = '\0';
    local_168[1] = '\0';
    local_168[2] = '\0';
    local_168[3] = '\0';
    iVar14 = 0;
    if ((&local_108 <= (ForElementType<int> *)local_168) && (local_168 < &local_108.SecondaryData))
    {
      local_178 = 4;
      local_190 = (ForElementType<int>)&local_108;
      local_180 = 0;
      local_188 = 0x10;
      local_198 = local_168;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      iVar14 = local_c0;
      if (local_c0 == local_bc) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_108,&local_bc);
      }
    }
    local_c0 = iVar14 + 1;
    FVar17 = (ForElementType<int>)&local_108;
    if (local_108.SecondaryData != (ForElementType<int>)0x0) {
      FVar17 = local_108.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar17 + (longlong)iVar14 * 4) = local_168._0_4_;
    piVar21 = &(this->Nodes).ArrayNum;
    FVar17 = local_190;
    FVar25 = local_108.SecondaryData;
    while (local_c0 != 0) {
      piVar23 = &(this->Nodes).ArrayNum;
      local_190 = (ForElementType<int>)(longlong)local_c0;
      local_160 = piVar21;
      if (local_c0 < 1) {
        local_198 = (undefined1 *)0x0;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        FVar25 = local_108.SecondaryData;
        FVar17 = local_190;
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
      }
      local_190 = FVar17;
      FVar17 = (ForElementType<int>)&local_108;
      if (FVar25 != (ForElementType<int>)0x0) {
        FVar17 = FVar25;
      }
      iVar14 = local_c0 + -1;
      uVar15 = *(uint *)((longlong)FVar17 + (longlong)iVar14 * 4);
      FVar17 = (ForElementType<int>)&local_108;
      if (FVar25 != (ForElementType<int>)0x0) {
        FVar17 = FVar25;
      }
      _Dst = (void *)((longlong)FVar17 + (longlong)iVar14 * 4);
      iVar14 = (local_c0 - iVar14) + -1;
      if (iVar14 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar14 << 2);
        FVar25 = local_108.SecondaryData;
      }
      local_c0 = local_c0 + -1;
      if ((((int)uVar15 < 0) || (piVar21 = piVar23, local_160 = piVar23, *piVar23 <= (int)uVar15))
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Nodes.IsValidIndex(NodeIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                                 ,0xf6,L""), FVar25 = local_108.SecondaryData, bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      uVar16 = 0;
      if ((int)uVar15 < *piVar21) {
        uVar16 = (ulonglong)(~uVar15 >> 0x1f);
      }
      if ((int)uVar16 == 0) {
        local_198 = (undefined1 *)(longlong)(int)uVar15;
        local_190 = (ForElementType<int>)(longlong)*piVar21;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar16 = CONCAT71(extraout_var,bVar12);
        FVar25 = local_108.SecondaryData;
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
      }
      pFVar27 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x50;
      local_158 = 0;
      pFVar26 = pFVar27 + 0x48;
      do {
        lVar24 = local_158;
        local_168._4_4_ = *(undefined4 *)(pFVar26 + -8);
        uVar20 = (ulonglong)(int)local_168._4_4_;
        local_158 = lVar24;
        if ((float)local_168._4_4_ != -NAN) {
          auVar30._4_4_ = -(uint)(fVar45 < *(float *)(pFVar27 + 4));
          auVar30._0_4_ = -(uint)((float)dVar7 < *(float *)pFVar27);
          auVar30._8_4_ = -(uint)(fVar33 < *(float *)(pFVar27 + 8));
          auVar30._12_4_ = -(uint)(0.0 < *(float *)(pFVar27 + 0xc));
          auVar36._4_4_ = -(uint)(*(float *)(pFVar27 + 0x14) < fVar44);
          auVar36._0_4_ = -(uint)(*(float *)(pFVar27 + 0x10) < (float)dVar10);
          auVar36._8_4_ = -(uint)(*(float *)(pFVar27 + 0x18) < fVar32);
          auVar36._12_4_ = -(uint)(*(float *)(pFVar27 + 0x1c) < 0.0);
          uVar15 = movmskps((int)uVar16,auVar36 | auVar30);
          uVar16 = (ulonglong)uVar15;
          if (uVar15 == 0) {
            fVar3 = *(float *)pFVar26;
            uVar16 = (ulonglong)(uint)fVar3;
            if (fVar3 == 0.0) {
              FVar17 = (ForElementType<int>)&local_108;
              if (FVar25 != (ForElementType<int>)0x0) {
                FVar17 = FVar25;
              }
              if ((ulonglong)FVar17 <= (longlong)local_168 + 4U) {
                FVar17 = (ForElementType<int>)&local_108;
                if (FVar25 != (ForElementType<int>)0x0) {
                  FVar17 = FVar25;
                }
                if (local_168 + 4 < (undefined1 *)((longlong)FVar17 + (longlong)local_bc * 4)) {
                  local_180 = (longlong)local_c0;
                  local_178 = 4;
                  local_198 = local_168 + 4;
                  local_190 = (ForElementType<int>)&local_108;
                  if (FVar25 != (ForElementType<int>)0x0) {
                    local_190 = FVar25;
                  }
                  local_188 = (longlong)local_bc;
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  FVar25 = local_108.SecondaryData;
                  if (bVar12) {
                    pcVar6 = (code *)swi(3);
                    uVar13 = (*pcVar6)();
                    return (bool)uVar13;
                  }
                }
              }
              if (local_c0 == local_bc) {
                local_c0 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                     (0x404,&local_108,&local_bc);
                FVar25 = local_108.SecondaryData;
              }
              lVar18 = (longlong)local_c0;
              FVar17 = (ForElementType<int>)&local_108;
              if (FVar25 != (ForElementType<int>)0x0) {
                FVar17 = FVar25;
              }
              local_c0 = local_c0 + 1;
              uVar16 = (ulonglong)(uint)local_168._4_4_;
              *(undefined4 *)((longlong)FVar17 + lVar18 * 4) = local_168._4_4_;
              local_158 = lVar24;
              FVar25 = local_108.SecondaryData;
            }
            else {
              iVar14 = local_168._4_4_ + (int)fVar3;
              if ((int)local_168._4_4_ < iVar14) {
                lVar24 = uVar20 << 5;
                uVar22 = uVar20;
                do {
                  iVar4 = (this->FaceBounds).ArrayNum;
                  uVar19 = (uint)uVar20;
                  uVar15 = 0;
                  if ((int)uVar19 < iVar4) {
                    uVar15 = ~uVar19 >> 0x1f;
                  }
                  if (uVar15 == 0) {
                    local_198 = (undefined1 *)(longlong)(int)uVar19;
                    local_190 = (ForElementType<int>)(longlong)iVar4;
                    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar12) {
                      pcVar6 = (code *)swi(3);
                      uVar13 = (*pcVar6)();
                      return (bool)uVar13;
                    }
                  }
                  pFVar5 = (this->FaceBounds).AllocatorInstance.Data;
                  pFVar2 = pFVar5 + lVar24 + 0x10;
                  pFVar1 = pFVar5 + lVar24;
                  auVar31._4_4_ = -(uint)(fVar45 < *(float *)(pFVar1 + 4));
                  auVar31._0_4_ = -(uint)((float)dVar7 < *(float *)pFVar1);
                  auVar31._8_4_ = -(uint)(fVar33 < *(float *)(pFVar1 + 8));
                  auVar31._12_4_ = -(uint)(0.0 < *(float *)(pFVar1 + 0xc));
                  auVar37._4_4_ = -(uint)(*(float *)(pFVar2 + 4) < fVar44);
                  auVar37._0_4_ = -(uint)(*(float *)pFVar2 < (float)dVar10);
                  auVar37._8_4_ = -(uint)(*(float *)(pFVar2 + 8) < fVar32);
                  auVar37._12_4_ = -(uint)(*(float *)(pFVar2 + 0xc) < 0.0);
                  uVar15 = movmskps((int)pFVar5,auVar37 | auVar31);
                  uVar16 = (ulonglong)uVar15;
                  if (uVar15 == 0) {
                    bVar12 = FTriangleMeshOverlapVisitorNoMTD<Chaos::TSphere<double,3>_>::
                             VisitOverlap(&local_b8,uVar19);
                    uVar16 = CONCAT71(extraout_var_00,bVar12);
                    FVar25 = local_108.SecondaryData;
                    if (!bVar12) goto joined_r0x000143e8dd7a;
                  }
                  uVar20 = (ulonglong)(uVar19 + 1);
                  uVar22 = uVar22 + 1;
                  lVar24 = lVar24 + 0x20;
                  FVar25 = local_108.SecondaryData;
                } while ((longlong)uVar22 < (longlong)iVar14);
              }
            }
          }
        }
        local_158 = local_158 + 1;
        pFVar26 = pFVar26 + 4;
        pFVar27 = pFVar27 + 0x20;
        piVar21 = local_160;
        FVar17 = local_190;
      } while (local_158 < 2);
    }
    local_c0 = 0;
    local_190 = FVar17;
joined_r0x000143e8dd7a:
    if (FVar25 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar25);
    }
  }
  return local_b8.bFoundIntersection;
}

// FindAllIntersectionsNoMTD<Chaos::TSphere<double,3>_> @ 143e8ddf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::FindAllIntersectionsNoMTD<Chaos::TSphere<double,3>_>
          (FTrimeshBVH *this,FOBBVectorized *param_1,TRigidTransform<double,3> *param_2,
          TSphere<double,3> *param_3,double param_4,TVector<double,3> *param_5,
          FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  ForElementType<int> FVar13;
  uint uVar14;
  uint *puVar15;
  int *piVar16;
  ulonglong uVar17;
  int *piVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_1a8 [32];
  uint *local_188;
  ForElementType<int> local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  uint local_158;
  undefined1 local_154 [12];
  undefined1 local_148 [16];
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  ForElementType<int> local_108;
  int local_c0;
  int local_bc;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::TSphere<double,3>_> local_b8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_b8.TriMesh = param_6;
  local_b8.bFoundIntersection = false;
  local_118 = (double)*(float *)&(param_3->Center).field_0x8;
  dVar4 = (double)*(float *)&(param_3->Center).field_0x4;
  local_b8.Radius = (float)param_4 + *(float *)&param_3->_padding_;
  auVar20 = *(undefined1 (*) [16])param_2;
  auVar21 = *(undefined1 (*) [16])&param_2->field_0x10;
  dVar7 = local_118 * *(double *)&param_2->field_0x50;
  dVar25 = *(double *)&param_2->field_0x58 * 0.0;
  dVar8 = *(double *)&param_2->field_0x18;
  auVar22 = blendpd(auVar20,auVar21,2);
  local_128._8_4_ = SUB84(dVar4,0);
  local_128._0_8_ = (double)*(float *)&param_3->Center;
  local_128._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  dVar6 = (double)*(float *)&param_3->Center * *(double *)&param_2->field_0x40;
  dVar4 = dVar4 * *(double *)&param_2->field_0x48;
  uVar27 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar30._8_4_ = SUB84(dVar4,0);
  auVar30._0_8_ = dVar6;
  auVar30._12_4_ = uVar27;
  dVar5 = auVar21._0_8_;
  auVar31._0_8_ = auVar30._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar6;
  auVar31._8_8_ = dVar7 * auVar20._8_8_ - dVar5 * dVar4;
  auVar32._8_4_ = SUB84(dVar4,0);
  auVar32._0_8_ = dVar6;
  auVar32._12_4_ = uVar27;
  auVar20._8_4_ = SUB84(dVar25,0);
  auVar20._0_8_ = dVar7;
  auVar20._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  auVar20 = blendpd(auVar32,auVar20,2);
  auVar23._0_8_ = auVar20._0_8_ * dVar5 - auVar22._0_8_ * dVar7;
  auVar23._8_8_ = auVar20._8_8_ * auVar21._8_8_ - auVar22._8_8_ * dVar25;
  auVar20 = *(undefined1 (*) [16])param_2;
  auVar32 = blendpd(auVar31,auVar23,2);
  dVar25 = auVar31._8_8_ + auVar31._8_8_;
  dVar26 = auVar23._0_8_ + auVar23._0_8_;
  auVar33._0_8_ = auVar32._0_8_ + auVar32._0_8_;
  auVar33._8_8_ = auVar32._8_8_ + auVar32._8_8_;
  auVar28._8_4_ = SUB84(dVar26,0);
  auVar28._0_8_ = dVar25;
  uVar27 = (undefined4)((ulonglong)dVar26 >> 0x20);
  auVar28._12_4_ = uVar27;
  auVar22._8_4_ = SUB84(dVar26,0);
  auVar22._0_8_ = dVar25;
  auVar22._12_4_ = uVar27;
  auVar23 = blendpd(auVar22,auVar33,2);
  auVar32 = blendpd(auVar20,auVar21,2);
  auVar24._0_8_ = auVar23._0_8_ * dVar5 - auVar32._0_8_ * auVar33._0_8_;
  auVar24._8_8_ = auVar23._8_8_ * auVar21._8_8_ - auVar32._8_8_ * auVar33._8_8_;
  auVar29._0_8_ = auVar28._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar25;
  auVar29._8_8_ = auVar33._0_8_ * auVar20._8_8_ - dVar5 * dVar26;
  auVar21._8_4_ = SUB84(auVar29._8_8_,0);
  auVar21._0_8_ = auVar29._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
  auVar20 = blendpd(auVar29,auVar24,2);
  dVar5 = dVar8 * dVar25 + dVar6 + auVar21._8_8_ + *(double *)&param_2->field_0x20;
  dVar4 = dVar8 * dVar26 + dVar4 + auVar24._0_8_ + *(double *)&param_2->field_0x28;
  local_138 = dVar8 * auVar33._0_8_ + dVar7 + auVar20._0_8_ + *(double *)&param_2->field_0x30;
  local_148._8_4_ = SUB84(dVar4,0);
  local_148._0_8_ = dVar5;
  local_148._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_b8.X._0_4_ = (float)dVar5;
  local_b8.X.m128_f32[1] = (float)dVar4;
  local_b8.X.m128_f32[2] = (float)local_138;
  local_b8.X.m128_f32[3] = 0.0;
  local_b8.TriMeshScale._0_4_ = (float)*(double *)param_5;
  local_b8.TriMeshScale.m128_f32[1] = (float)*(double *)&param_5->field_0x8;
  local_b8.TriMeshScale.m128_f32[2] = (float)*(double *)&param_5->field_0x10;
  local_b8.TriMeshScale.m128_f32[3] = 0.0;
  if ((this->Nodes).ArrayNum == 0) {
    local_b8.bFoundIntersection = false;
  }
  else {
    local_bc = 0x10;
    local_108.SecondaryData = (ForElementType<int>)0x0;
    local_154._0_4_ = 0;
    local_c0 = 0;
    iVar11 = 0;
    if ((&local_108 <= (ForElementType<int> *)local_154) &&
       (iVar11 = 0, local_154 < &local_108.SecondaryData)) {
      local_168 = 4;
      local_180 = (ForElementType<int>)&local_108;
      local_170 = 0;
      local_178 = 0x10;
      local_188 = (uint *)local_154;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      iVar11 = local_c0;
      if (local_c0 == local_bc) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_108,&local_bc);
      }
    }
    local_c0 = iVar11 + 1;
    FVar13 = (ForElementType<int>)&local_108;
    if (local_108.SecondaryData != (ForElementType<int>)0x0) {
      FVar13 = local_108.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar13 + (longlong)iVar11 * 4) = local_154._0_4_;
    piVar18 = &(this->Nodes).ArrayNum;
    FVar13 = local_180;
    while (local_c0 != 0) {
      uVar17 = 0;
      piVar16 = &(this->Nodes).ArrayNum;
      local_180 = (ForElementType<int>)(longlong)local_c0;
      local_154._4_8_ = piVar18;
      if (local_c0 < 1) {
        local_188 = (uint *)0x0;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        FVar13 = local_180;
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
      }
      local_180 = FVar13;
      FVar13 = (ForElementType<int>)&local_108;
      if (local_108.SecondaryData != (ForElementType<int>)0x0) {
        FVar13 = local_108.SecondaryData;
      }
      iVar11 = local_c0 + -1;
      uVar14 = *(uint *)((longlong)FVar13 + (longlong)iVar11 * 4);
      puVar15 = (uint *)(longlong)(int)uVar14;
      FVar13 = (ForElementType<int>)&local_108;
      if (local_108.SecondaryData != (ForElementType<int>)0x0) {
        FVar13 = local_108.SecondaryData;
      }
      _Dst = (void *)((longlong)FVar13 + (longlong)iVar11 * 4);
      iVar11 = (local_c0 - iVar11) + -1;
      if (iVar11 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar11 << 2);
      }
      local_c0 = local_c0 + -1;
      if ((((int)uVar14 < 0) ||
          (piVar18 = piVar16, local_154._4_8_ = piVar16, *piVar16 <= (int)uVar14)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Nodes.IsValidIndex(NodeIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                             ,0xf6,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      uVar12 = 0;
      if ((int)uVar14 < *piVar18) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (local_188 = puVar15, local_180 = (ForElementType<int>)(longlong)*piVar18,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      pFVar2 = (this->Nodes).AllocatorInstance.Data;
      pFVar19 = pFVar2 + (longlong)puVar15 * 0x50 + 0x48;
      do {
        local_158 = *(uint *)(pFVar19 + -8);
        if ((local_158 != 0xffffffff) &&
           (bVar9 = Chaos::Private::FOBBVectorized::IntersectAABB
                              (param_1,(FAABBVectorized *)
                                       (pFVar2 + uVar17 * 0x20 + (longlong)puVar15 * 0x50)), bVar9))
        {
          if (*(int *)pFVar19 == 0) {
            FVar13 = (ForElementType<int>)&local_108;
            if (local_108.SecondaryData != (ForElementType<int>)0x0) {
              FVar13 = local_108.SecondaryData;
            }
            if ((ulonglong)FVar13 <= &local_158) {
              FVar13 = (ForElementType<int>)&local_108;
              if (local_108.SecondaryData != (ForElementType<int>)0x0) {
                FVar13 = local_108.SecondaryData;
              }
              if (&local_158 < (uint *)((longlong)FVar13 + (longlong)local_bc * 4)) {
                local_170 = (longlong)local_c0;
                local_168 = 4;
                local_188 = &local_158;
                local_180 = (ForElementType<int>)&local_108;
                if (local_108.SecondaryData != (ForElementType<int>)0x0) {
                  local_180 = local_108.SecondaryData;
                }
                local_178 = (longlong)local_bc;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar9) {
                  pcVar3 = (code *)swi(3);
                  uVar10 = (*pcVar3)();
                  return (bool)uVar10;
                }
              }
            }
            iVar11 = local_c0;
            if (local_c0 == local_bc) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,&local_108,&local_bc);
            }
            local_c0 = iVar11 + 1;
            FVar13 = (ForElementType<int>)&local_108;
            if (local_108.SecondaryData != (ForElementType<int>)0x0) {
              FVar13 = local_108.SecondaryData;
            }
            *(uint *)((longlong)FVar13 + (longlong)iVar11 * 4) = local_158;
          }
          else {
            iVar11 = *(int *)pFVar19 + local_158;
            FVar13 = local_180;
            for (uVar14 = local_158; local_180 = FVar13, (int)uVar14 < iVar11; uVar14 = uVar14 + 1)
            {
              iVar1 = (this->FaceBounds).ArrayNum;
              local_180 = (ForElementType<int>)(longlong)iVar1;
              uVar12 = 0;
              if ((int)uVar14 < iVar1) {
                uVar12 = ~uVar14 >> 0x1f;
              }
              if (uVar12 == 0) {
                local_188 = (uint *)(longlong)(int)uVar14;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                FVar13 = local_180;
                if (bVar9) {
                  pcVar3 = (code *)swi(3);
                  uVar10 = (*pcVar3)();
                  return (bool)uVar10;
                }
              }
              local_180 = FVar13;
              bVar9 = Chaos::Private::FOBBVectorized::IntersectAABB
                                (param_1,(FAABBVectorized *)
                                         ((this->FaceBounds).AllocatorInstance.Data +
                                         (longlong)(int)uVar14 * 0x20));
              if ((bVar9) &&
                 (bVar9 = FTriangleMeshOverlapVisitorNoMTD<Chaos::TSphere<double,3>_>::VisitOverlap
                                    (&local_b8,uVar14), !bVar9)) goto joined_r0x000143e8e3a7;
              FVar13 = local_180;
            }
          }
        }
        uVar14 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar14;
        pFVar19 = pFVar19 + 4;
        piVar18 = (int *)local_154._4_8_;
        FVar13 = local_180;
      } while ((int)uVar14 < 2);
    }
    local_c0 = 0;
    local_180 = FVar13;
joined_r0x000143e8e3a7:
    if (local_108.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_108.SecondaryData);
    }
  }
  return local_b8.bFoundIntersection;
}

// FindAllIntersectionsNoMTD<Chaos::FCapsule> @ 143e8e410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::FindAllIntersectionsNoMTD<Chaos::FCapsule>
          (FTrimeshBVH *this,TAABB<double,3> *param_1,TRigidTransform<double,3> *param_2,
          FCapsule *param_3,double param_4,TVector<double,3> *param_5,
          FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined7 extraout_var_00;
  ForElementType<int> FVar15;
  longlong lVar16;
  ForElementType<int> FVar17;
  uint uVar18;
  ulonglong uVar19;
  int *piVar20;
  ulonglong uVar21;
  int *piVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined1 auStackY_188 [32];
  undefined1 local_138 [8];
  int *local_130;
  longlong local_128;
  float local_120;
  float local_11c;
  float local_118;
  ForElementType<int> local_108;
  int local_c0;
  int local_bc;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::FCapsule> local_b8;
  ulonglong local_68;
  undefined7 extraout_var;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_120 = (float)*(double *)param_5;
  local_11c = (float)*(double *)&param_5->field_0x8;
  local_118 = (float)*(double *)&param_5->field_0x10;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::FCapsule>::
  FTriangleMeshOverlapVisitorNoMTD<Chaos::FCapsule>
            (&local_b8,param_2,param_3,param_4,(TVector<float,3> *)&local_120,param_6);
  dVar8 = *(double *)&param_1->MMin;
  fVar30 = (float)*(double *)&(param_1->MMin).field_0x8;
  fVar26 = (float)*(double *)&(param_1->MMin).field_0x10;
  dVar9 = *(double *)&param_1->MMax;
  fVar31 = (float)*(double *)&(param_1->MMax).field_0x8;
  fVar27 = (float)*(double *)&(param_1->MMax).field_0x10;
  if ((this->Nodes).ArrayNum != 0) {
    local_bc = 0x10;
    local_c0 = 0;
    local_108.SecondaryData = (ForElementType<int>)0x0;
    local_138[0] = '\0';
    local_138[1] = '\0';
    local_138[2] = '\0';
    local_138[3] = '\0';
    iVar12 = 0;
    if ((&local_108 <= (ForElementType<int> *)local_138) && (local_138 < &local_108.SecondaryData))
    {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      iVar12 = local_c0;
      if (local_c0 == local_bc) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_108,&local_bc);
      }
    }
    local_c0 = iVar12 + 1;
    FVar17 = (ForElementType<int>)&local_108;
    if (local_108.SecondaryData != (ForElementType<int>)0x0) {
      FVar17 = local_108.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar17 + (longlong)iVar12 * 4) = local_138._0_4_;
    piVar20 = &(this->Nodes).ArrayNum;
    FVar17 = local_108.SecondaryData;
    while (local_c0 != 0) {
      piVar22 = &(this->Nodes).ArrayNum;
      local_130 = piVar20;
      if ((local_c0 < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar17 = local_108.SecondaryData, bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      FVar15 = (ForElementType<int>)&local_108;
      if (FVar17 != (ForElementType<int>)0x0) {
        FVar15 = FVar17;
      }
      iVar12 = local_c0 + -1;
      uVar13 = *(uint *)((longlong)FVar15 + (longlong)iVar12 * 4);
      FVar15 = (ForElementType<int>)&local_108;
      if (FVar17 != (ForElementType<int>)0x0) {
        FVar15 = FVar17;
      }
      _Dst = (void *)((longlong)FVar15 + (longlong)iVar12 * 4);
      iVar12 = (local_c0 - iVar12) + -1;
      if (iVar12 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar12 << 2);
        FVar17 = local_108.SecondaryData;
      }
      local_c0 = local_c0 + -1;
      if ((((int)uVar13 < 0) || (piVar20 = piVar22, local_130 = piVar22, *piVar22 <= (int)uVar13))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Nodes.IsValidIndex(NodeIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                                 ,0xf6,L""), FVar17 = local_108.SecondaryData, bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      uVar14 = 0;
      if ((int)uVar13 < *piVar20) {
        uVar14 = (ulonglong)(~uVar13 >> 0x1f);
      }
      if ((int)uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar14 = CONCAT71(extraout_var,bVar10);
        FVar17 = local_108.SecondaryData;
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
      }
      pFVar25 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x50;
      local_128 = 0;
      pFVar24 = pFVar25 + 0x48;
      do {
        lVar23 = local_128;
        local_138._4_4_ = *(undefined4 *)(pFVar24 + -8);
        uVar19 = (ulonglong)(int)local_138._4_4_;
        local_128 = lVar23;
        if ((float)local_138._4_4_ != -NAN) {
          auVar28._4_4_ = -(uint)(*(float *)(pFVar25 + 0x14) < fVar30);
          auVar28._0_4_ = -(uint)(*(float *)(pFVar25 + 0x10) < (float)dVar8);
          auVar28._8_4_ = -(uint)(*(float *)(pFVar25 + 0x18) < fVar26);
          auVar28._12_4_ = -(uint)(*(float *)(pFVar25 + 0x1c) < 0.0);
          auVar6._4_4_ = -(uint)(fVar31 < *(float *)(pFVar25 + 4));
          auVar6._0_4_ = -(uint)((float)dVar9 < *(float *)pFVar25);
          auVar6._8_4_ = -(uint)(fVar27 < *(float *)(pFVar25 + 8));
          auVar6._12_4_ = -(uint)(0.0 < *(float *)(pFVar25 + 0xc));
          uVar13 = movmskps((int)uVar14,auVar28 | auVar6);
          uVar14 = (ulonglong)uVar13;
          if (uVar13 == 0) {
            fVar3 = *(float *)pFVar24;
            uVar14 = (ulonglong)(uint)fVar3;
            if (fVar3 == 0.0) {
              FVar15 = (ForElementType<int>)&local_108;
              if (FVar17 != (ForElementType<int>)0x0) {
                FVar15 = FVar17;
              }
              if ((ulonglong)FVar15 <= (longlong)local_138 + 4U) {
                FVar15 = (ForElementType<int>)&local_108;
                if (FVar17 != (ForElementType<int>)0x0) {
                  FVar15 = FVar17;
                }
                if ((local_138 + 4 < (undefined1 *)((longlong)FVar15 + (longlong)local_bc * 4)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), FVar17 = local_108.SecondaryData, bVar10)) {
                  pcVar5 = (code *)swi(3);
                  uVar11 = (*pcVar5)();
                  return (bool)uVar11;
                }
              }
              if (local_c0 == local_bc) {
                local_c0 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                     (0x404,&local_108,&local_bc);
                FVar17 = local_108.SecondaryData;
              }
              lVar16 = (longlong)local_c0;
              FVar15 = (ForElementType<int>)&local_108;
              if (FVar17 != (ForElementType<int>)0x0) {
                FVar15 = FVar17;
              }
              local_c0 = local_c0 + 1;
              uVar14 = (ulonglong)(uint)local_138._4_4_;
              *(undefined4 *)((longlong)FVar15 + lVar16 * 4) = local_138._4_4_;
              local_128 = lVar23;
              FVar17 = local_108.SecondaryData;
            }
            else {
              iVar12 = local_138._4_4_ + (int)fVar3;
              if ((int)local_138._4_4_ < iVar12) {
                lVar23 = uVar19 << 5;
                uVar21 = uVar19;
                do {
                  uVar18 = (uint)uVar19;
                  uVar13 = 0;
                  if ((int)uVar18 < (this->FaceBounds).ArrayNum) {
                    uVar13 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    uVar11 = (*pcVar5)();
                    return (bool)uVar11;
                  }
                  pFVar4 = (this->FaceBounds).AllocatorInstance.Data;
                  pFVar2 = pFVar4 + lVar23 + 0x10;
                  pFVar1 = pFVar4 + lVar23;
                  auVar29._4_4_ = -(uint)(*(float *)(pFVar2 + 4) < fVar30);
                  auVar29._0_4_ = -(uint)(*(float *)pFVar2 < (float)dVar8);
                  auVar29._8_4_ = -(uint)(*(float *)(pFVar2 + 8) < fVar26);
                  auVar29._12_4_ = -(uint)(*(float *)(pFVar2 + 0xc) < 0.0);
                  auVar7._4_4_ = -(uint)(fVar31 < *(float *)(pFVar1 + 4));
                  auVar7._0_4_ = -(uint)((float)dVar9 < *(float *)pFVar1);
                  auVar7._8_4_ = -(uint)(fVar27 < *(float *)(pFVar1 + 8));
                  auVar7._12_4_ = -(uint)(0.0 < *(float *)(pFVar1 + 0xc));
                  uVar13 = movmskps((int)pFVar4,auVar29 | auVar7);
                  uVar14 = (ulonglong)uVar13;
                  if (uVar13 == 0) {
                    bVar10 = FTriangleMeshOverlapVisitorNoMTD<Chaos::FCapsule>::VisitOverlap
                                       (&local_b8,uVar18);
                    uVar14 = CONCAT71(extraout_var_00,bVar10);
                    FVar17 = local_108.SecondaryData;
                    if (!bVar10) goto joined_r0x000143e8e8ea;
                  }
                  uVar19 = (ulonglong)(uVar18 + 1);
                  uVar21 = uVar21 + 1;
                  lVar23 = lVar23 + 0x20;
                  FVar17 = local_108.SecondaryData;
                } while ((longlong)uVar21 < (longlong)iVar12);
              }
            }
          }
        }
        local_128 = local_128 + 1;
        pFVar24 = pFVar24 + 4;
        pFVar25 = pFVar25 + 0x20;
        piVar20 = local_130;
      } while (local_128 < 2);
    }
    local_c0 = 0;
joined_r0x000143e8e8ea:
    if (FVar17 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar17);
    }
  }
  return local_b8.bFoundIntersection;
}

// FindAllIntersectionsNoMTD<Chaos::FCapsule> @ 143e8e950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::FindAllIntersectionsNoMTD<Chaos::FCapsule>
          (FTrimeshBVH *this,FOBBVectorized *param_1,TRigidTransform<double,3> *param_2,
          FCapsule *param_3,double param_4,TVector<double,3> *param_5,
          FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  ForElementType<int> FVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  undefined1 auStackY_158 [32];
  uint local_108;
  undefined1 local_104 [12];
  float local_f8;
  float local_f4;
  float local_f0;
  ForElementType<int> local_e8;
  int local_a0;
  int local_9c;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::FCapsule> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_f8 = (float)*(double *)param_5;
  local_f4 = (float)*(double *)&param_5->field_0x8;
  local_f0 = (float)*(double *)&param_5->field_0x10;
  FTriangleMeshOverlapVisitorNoMTD<Chaos::FCapsule>::
  FTriangleMeshOverlapVisitorNoMTD<Chaos::FCapsule>
            (&local_98,param_2,param_3,param_4,(TVector<float,3> *)&local_f8,param_6);
  if ((this->Nodes).ArrayNum != 0) {
    local_9c = 0x10;
    local_e8.SecondaryData = (ForElementType<int>)0x0;
    local_104[0] = '\0';
    local_104[1] = '\0';
    local_104[2] = '\0';
    local_104[3] = '\0';
    local_a0 = 0;
    iVar6 = 0;
    if ((&local_e8 <= (ForElementType<int> *)local_104) &&
       (iVar6 = 0, local_104 < &local_e8.SecondaryData)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = local_a0;
      if (local_a0 == local_9c) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,&local_e8,&local_9c);
      }
    }
    local_a0 = iVar6 + 1;
    FVar8 = (ForElementType<int>)&local_e8;
    if (local_e8.SecondaryData != (ForElementType<int>)0x0) {
      FVar8 = local_e8.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_104._0_4_;
    piVar11 = &(this->Nodes).ArrayNum;
    while (local_a0 != 0) {
      uVar13 = 0;
      piVar10 = &(this->Nodes).ArrayNum;
      local_104._4_8_ = piVar11;
      if ((local_a0 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FVar8 = (ForElementType<int>)&local_e8;
      if (local_e8.SecondaryData != (ForElementType<int>)0x0) {
        FVar8 = local_e8.SecondaryData;
      }
      iVar6 = local_a0 + -1;
      uVar1 = *(uint *)((longlong)FVar8 + (longlong)iVar6 * 4);
      FVar8 = (ForElementType<int>)&local_e8;
      if (local_e8.SecondaryData != (ForElementType<int>)0x0) {
        FVar8 = local_e8.SecondaryData;
      }
      _Dst = (void *)((longlong)FVar8 + (longlong)iVar6 * 4);
      iVar6 = (local_a0 - iVar6) + -1;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar6 << 2);
      }
      local_a0 = local_a0 + -1;
      if ((((int)uVar1 < 0) ||
          (piVar11 = piVar10, local_104._4_8_ = piVar10, *piVar10 <= (int)uVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Nodes.IsValidIndex(NodeIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                             ,0xf6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = 0;
      if ((int)uVar1 < *piVar11) {
        uVar9 = ~uVar1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->Nodes).AllocatorInstance.Data;
      pFVar12 = pFVar2 + (longlong)(int)uVar1 * 0x50 + 0x48;
      do {
        local_108 = *(uint *)(pFVar12 + -8);
        if ((local_108 != 0xffffffff) &&
           (bVar4 = Chaos::Private::FOBBVectorized::IntersectAABB
                              (param_1,(FAABBVectorized *)
                                       (pFVar2 + uVar13 * 0x20 + (longlong)(int)uVar1 * 0x50)),
           bVar4)) {
          if (*(int *)pFVar12 == 0) {
            FVar8 = (ForElementType<int>)&local_e8;
            if (local_e8.SecondaryData != (ForElementType<int>)0x0) {
              FVar8 = local_e8.SecondaryData;
            }
            if ((ulonglong)FVar8 <= &local_108) {
              FVar8 = (ForElementType<int>)&local_e8;
              if (local_e8.SecondaryData != (ForElementType<int>)0x0) {
                FVar8 = local_e8.SecondaryData;
              }
              if ((&local_108 < (uint *)((longlong)FVar8 + (longlong)local_9c * 4)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
            }
            iVar6 = local_a0;
            if (local_a0 == local_9c) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                (0x404,&local_e8,&local_9c);
            }
            local_a0 = iVar6 + 1;
            FVar8 = (ForElementType<int>)&local_e8;
            if (local_e8.SecondaryData != (ForElementType<int>)0x0) {
              FVar8 = local_e8.SecondaryData;
            }
            *(uint *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_108;
          }
          else {
            iVar6 = *(int *)pFVar12 + local_108;
            for (uVar9 = local_108; (int)uVar9 < iVar6; uVar9 = uVar9 + 1) {
              uVar7 = 0;
              if ((int)uVar9 < (this->FaceBounds).ArrayNum) {
                uVar7 = ~uVar9 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              bVar4 = Chaos::Private::FOBBVectorized::IntersectAABB
                                (param_1,(FAABBVectorized *)
                                         ((this->FaceBounds).AllocatorInstance.Data +
                                         (longlong)(int)uVar9 * 0x20));
              if ((bVar4) &&
                 (bVar4 = FTriangleMeshOverlapVisitorNoMTD<Chaos::FCapsule>::VisitOverlap
                                    (&local_98,uVar9), !bVar4)) goto joined_r0x000143e8edbc;
            }
          }
        }
        uVar9 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar9;
        pFVar12 = pFVar12 + 4;
        piVar11 = (int *)local_104._4_8_;
      } while ((int)uVar9 < 2);
    }
    local_a0 = 0;
joined_r0x000143e8edbc:
    if (local_e8.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_e8.SecondaryData);
    }
  }
  return local_98.bFoundIntersection;
}

// FindAllIntersectionsNoMTD<Chaos::FConvex> @ 143e8ee20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::FindAllIntersectionsNoMTD<Chaos::FConvex>
          (FTrimeshBVH *this,TAABB<double,3> *param_1,TRigidTransform<double,3> *param_2,
          FConvex *param_3,double param_4,TVector<double,3> *param_5,
          FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined7 extraout_var_00;
  ForElementType<int> FVar13;
  longlong lVar14;
  ulonglong uVar15;
  int *piVar16;
  ulonglong uVar17;
  int *piVar18;
  longlong lVar19;
  ForElementType<int> FVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar40;
  float fVar41;
  undefined1 auStack_1a8 [32];
  undefined1 *local_188;
  ForElementType<int> local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined1 local_158 [8];
  int *local_150;
  longlong local_148;
  __m128 local_138;
  undefined1 local_128 [16];
  ForElementType<int> local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  float local_f8;
  FTriangleMeshImplicitObject *local_f0;
  undefined1 local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  ForElementType<int> local_b8;
  int local_70;
  int local_6c;
  ulonglong local_68;
  undefined7 extraout_var;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  auVar27 = *(undefined1 (*) [16])&param_2->field_0x10;
  piVar16 = &(this->Nodes).ArrayNum;
  local_e8 = 0;
  local_110 = *(undefined8 *)param_5;
  uStack_108 = *(undefined8 *)&param_5->field_0x8;
  local_100 = *(undefined8 *)&param_5->field_0x10;
  local_f0 = param_6;
  local_f8 = (float)param_4;
  auVar6._4_8_ = *(double *)&param_2->field_0x8;
  auVar6._0_4_ = auVar27._4_4_;
  auVar33._0_8_ = auVar6._0_8_ << 0x20;
  auVar33._8_4_ = auVar27._8_4_;
  auVar33._12_4_ = auVar27._12_4_;
  fVar40 = (float)*(double *)param_2;
  fVar41 = (float)*(double *)&param_2->field_0x8;
  fVar31 = (float)auVar27._0_8_;
  fVar36 = (float)auVar33._8_8_;
  fVar32 = fVar41 * fVar41 + fVar40 * fVar40;
  fVar37 = fVar40 * fVar40 + fVar41 * fVar41;
  fVar38 = fVar36 * fVar36 + fVar31 * fVar31;
  fVar39 = fVar31 * fVar31 + fVar36 * fVar36;
  auVar27._0_4_ = fVar38 + fVar32;
  auVar27._4_4_ = fVar39 + fVar37;
  auVar27._8_4_ = fVar32 + fVar38;
  auVar27._12_4_ = fVar37 + fVar39;
  uVar23 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar27._0_4_);
  uVar24 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar27._4_4_);
  uVar25 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar27._8_4_);
  uVar26 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar27._12_4_);
  auVar27 = sqrtps(auVar27,auVar27);
  auVar33 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar27);
  local_c8 = *(double *)&param_2->field_0x30;
  local_138.m128_u32[0] =
       (uint)(auVar33._0_4_ * fVar40) & uVar23 |
       ~uVar23 & GlobalVectorConstants::Float0001.m128_u32[0];
  local_138.m128_u32[1] =
       (uint)(auVar33._4_4_ * fVar41) & uVar24 |
       ~uVar24 & GlobalVectorConstants::Float0001.m128_u32[1];
  local_138.m128_u32[2] =
       (uint)(auVar33._8_4_ * fVar31) & uVar25 |
       ~uVar25 & GlobalVectorConstants::Float0001.m128_u32[2];
  local_138.m128_u32[3] =
       (uint)(auVar33._12_4_ * fVar36) & uVar26 |
       ~uVar26 & GlobalVectorConstants::Float0001.m128_u32[3];
  local_d8 = *(undefined1 (*) [16])&param_2->field_0x20;
  auVar7._4_8_ = auVar27._8_8_;
  auVar7._0_4_ = local_d8._4_4_;
  auVar28._0_8_ = auVar7._0_8_ << 0x20;
  auVar28._8_4_ = local_d8._8_4_;
  auVar28._12_4_ = local_d8._12_4_;
  fVar31 = (float)*(double *)&(param_1->MMin).field_0x10;
  local_128._4_4_ = (float)auVar28._8_8_;
  local_128._0_4_ = (float)local_d8._0_8_;
  local_128._8_4_ = (float)local_c8;
  local_128._12_4_ = 0;
  fVar36 = (float)SUB168(*(undefined1 (*) [16])&param_1->MMin,0);
  fVar37 = (float)SUB168(*(undefined1 (*) [16])&param_1->MMin,8);
  dVar8 = *(double *)&param_1->MMax;
  fVar38 = (float)*(double *)&(param_1->MMax).field_0x8;
  fVar32 = (float)*(double *)&(param_1->MMax).field_0x10;
  if (*piVar16 == 0) {
    uVar10 = 0;
  }
  else {
    local_6c = 0x10;
    local_70 = 0;
    local_b8.SecondaryData = (ForElementType<int>)0x0;
    local_158[0] = '\0';
    local_158[1] = '\0';
    local_158[2] = '\0';
    local_158[3] = '\0';
    iVar11 = 0;
    local_118 = (ForElementType<int>)param_3;
    if ((&local_b8 <= (ForElementType<int> *)local_158) && (local_158 < &local_b8.SecondaryData)) {
      local_168 = 4;
      local_180 = (ForElementType<int>)&local_b8;
      local_170 = 0;
      local_178 = 0x10;
      local_188 = local_158;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      iVar11 = local_70;
      if (local_70 == local_6c) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_b8,&local_6c);
      }
    }
    local_70 = iVar11 + 1;
    FVar13 = (ForElementType<int>)&local_b8;
    if (local_b8.SecondaryData != (ForElementType<int>)0x0) {
      FVar13 = local_b8.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar13 + (longlong)iVar11 * 4) = local_158._0_4_;
    uVar10 = 0;
    FVar13 = local_180;
    FVar20 = local_b8.SecondaryData;
    while (local_70 != 0) {
      piVar18 = &(this->Nodes).ArrayNum;
      local_180 = (ForElementType<int>)(longlong)local_70;
      local_150 = piVar16;
      if (local_70 < 1) {
        local_188 = (undefined1 *)0x0;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        FVar20 = local_b8.SecondaryData;
        FVar13 = local_180;
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      local_180 = FVar13;
      FVar13 = (ForElementType<int>)&local_b8;
      if (FVar20 != (ForElementType<int>)0x0) {
        FVar13 = FVar20;
      }
      iVar11 = local_70 + -1;
      uVar23 = *(uint *)((longlong)FVar13 + (longlong)iVar11 * 4);
      FVar13 = (ForElementType<int>)&local_b8;
      if (FVar20 != (ForElementType<int>)0x0) {
        FVar13 = FVar20;
      }
      _Dst = (void *)((longlong)FVar13 + (longlong)iVar11 * 4);
      iVar11 = (local_70 - iVar11) + -1;
      if (iVar11 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar11 << 2);
        FVar20 = local_b8.SecondaryData;
      }
      local_70 = local_70 + -1;
      if ((((int)uVar23 < 0) || (piVar16 = piVar18, local_150 = piVar18, *piVar18 <= (int)uVar23))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Nodes.IsValidIndex(NodeIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                                ,0xf6,L""), FVar20 = local_b8.SecondaryData, bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      uVar12 = 0;
      if ((int)uVar23 < *piVar16) {
        uVar12 = (ulonglong)(~uVar23 >> 0x1f);
      }
      if ((int)uVar12 == 0) {
        local_188 = (undefined1 *)(longlong)(int)uVar23;
        local_180 = (ForElementType<int>)(longlong)*piVar16;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar12 = CONCAT71(extraout_var,bVar9);
        FVar20 = local_b8.SecondaryData;
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      pFVar22 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar23 * 0x50;
      local_148 = 0;
      pFVar21 = pFVar22 + 0x48;
      do {
        lVar19 = local_148;
        local_158._4_4_ = *(undefined4 *)(pFVar21 + -8);
        uVar15 = (ulonglong)(int)local_158._4_4_;
        local_148 = lVar19;
        if ((float)local_158._4_4_ != -NAN) {
          auVar29._4_4_ = -(uint)(fVar38 < *(float *)(pFVar22 + 4));
          auVar29._0_4_ = -(uint)((float)dVar8 < *(float *)pFVar22);
          auVar29._8_4_ = -(uint)(fVar32 < *(float *)(pFVar22 + 8));
          auVar29._12_4_ = -(uint)(0.0 < *(float *)(pFVar22 + 0xc));
          auVar34._4_4_ = -(uint)(*(float *)(pFVar22 + 0x14) < fVar37);
          auVar34._0_4_ = -(uint)(*(float *)(pFVar22 + 0x10) < fVar36);
          auVar34._8_4_ = -(uint)(*(float *)(pFVar22 + 0x18) < fVar31);
          auVar34._12_4_ = -(uint)(*(float *)(pFVar22 + 0x1c) < 0.0);
          uVar23 = movmskps((int)uVar12,auVar34 | auVar29);
          uVar12 = (ulonglong)uVar23;
          if (uVar23 == 0) {
            fVar39 = *(float *)pFVar21;
            uVar12 = (ulonglong)(uint)fVar39;
            if (fVar39 == 0.0) {
              FVar13 = (ForElementType<int>)&local_b8;
              if (FVar20 != (ForElementType<int>)0x0) {
                FVar13 = FVar20;
              }
              if ((ulonglong)FVar13 <= (longlong)local_158 + 4U) {
                FVar13 = (ForElementType<int>)&local_b8;
                if (FVar20 != (ForElementType<int>)0x0) {
                  FVar13 = FVar20;
                }
                if (local_158 + 4 < (undefined1 *)((longlong)FVar13 + (longlong)local_6c * 4)) {
                  local_170 = (longlong)local_70;
                  local_168 = 4;
                  local_188 = local_158 + 4;
                  local_180 = (ForElementType<int>)&local_b8;
                  if (FVar20 != (ForElementType<int>)0x0) {
                    local_180 = FVar20;
                  }
                  local_178 = (longlong)local_6c;
                  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  FVar20 = local_b8.SecondaryData;
                  if (bVar9) {
                    pcVar5 = (code *)swi(3);
                    uVar10 = (*pcVar5)();
                    return (bool)uVar10;
                  }
                }
              }
              if (local_70 == local_6c) {
                local_70 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                     (0x404,&local_b8,&local_6c);
                FVar20 = local_b8.SecondaryData;
              }
              lVar14 = (longlong)local_70;
              FVar13 = (ForElementType<int>)&local_b8;
              if (FVar20 != (ForElementType<int>)0x0) {
                FVar13 = FVar20;
              }
              local_70 = local_70 + 1;
              uVar12 = (ulonglong)(uint)local_158._4_4_;
              *(undefined4 *)((longlong)FVar13 + lVar14 * 4) = local_158._4_4_;
              local_148 = lVar19;
              FVar20 = local_b8.SecondaryData;
            }
            else {
              iVar11 = (int)fVar39 + local_158._4_4_;
              if ((int)local_158._4_4_ < iVar11) {
                lVar19 = uVar15 << 5;
                uVar17 = uVar15;
                do {
                  iVar3 = (this->FaceBounds).ArrayNum;
                  uVar24 = (uint)uVar15;
                  uVar23 = 0;
                  if ((int)uVar24 < iVar3) {
                    uVar23 = ~uVar24 >> 0x1f;
                  }
                  if (uVar23 == 0) {
                    local_188 = (undefined1 *)(longlong)(int)uVar24;
                    local_180 = (ForElementType<int>)(longlong)iVar3;
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar9) {
                      pcVar5 = (code *)swi(3);
                      uVar10 = (*pcVar5)();
                      return (bool)uVar10;
                    }
                  }
                  pFVar4 = (this->FaceBounds).AllocatorInstance.Data;
                  pFVar2 = pFVar4 + lVar19 + 0x10;
                  pFVar1 = pFVar4 + lVar19;
                  auVar30._4_4_ = -(uint)(fVar38 < *(float *)(pFVar1 + 4));
                  auVar30._0_4_ = -(uint)((float)dVar8 < *(float *)pFVar1);
                  auVar30._8_4_ = -(uint)(fVar32 < *(float *)(pFVar1 + 8));
                  auVar30._12_4_ = -(uint)(0.0 < *(float *)(pFVar1 + 0xc));
                  auVar35._4_4_ = -(uint)(*(float *)(pFVar2 + 4) < fVar37);
                  auVar35._0_4_ = -(uint)(*(float *)pFVar2 < fVar36);
                  auVar35._8_4_ = -(uint)(*(float *)(pFVar2 + 8) < fVar31);
                  auVar35._12_4_ = -(uint)(*(float *)(pFVar2 + 0xc) < 0.0);
                  uVar23 = movmskps((int)pFVar4,auVar35 | auVar30);
                  uVar12 = (ulonglong)uVar23;
                  if (uVar23 == 0) {
                    bVar9 = FTriangleMeshOverlapVisitorNoMTD<Chaos::FConvex>::VisitOverlap
                                      ((FTriangleMeshOverlapVisitorNoMTD<Chaos::FConvex> *)
                                       &local_138,uVar24);
                    uVar12 = CONCAT71(extraout_var_00,bVar9);
                    if (!bVar9) {
                      if (local_b8.SecondaryData == (ForElementType<int>)0x0) {
                        return (bool)local_e8;
                      }
                      FMemory::Free((void *)local_b8.SecondaryData);
                      return (bool)local_e8;
                    }
                  }
                  uVar15 = (ulonglong)(uVar24 + 1);
                  uVar17 = uVar17 + 1;
                  lVar19 = lVar19 + 0x20;
                  FVar20 = local_b8.SecondaryData;
                } while ((longlong)uVar17 < (longlong)iVar11);
              }
            }
          }
        }
        local_148 = local_148 + 1;
        pFVar21 = pFVar21 + 4;
        pFVar22 = pFVar22 + 0x20;
        piVar16 = local_150;
        uVar10 = local_e8;
        FVar13 = local_180;
      } while (local_148 < 2);
    }
    if (FVar20 != (ForElementType<int>)0x0) {
      local_180 = FVar13;
      FMemory::Free((void *)FVar20);
    }
  }
  return (bool)uVar10;
}

// FindAllIntersectionsNoMTD<Chaos::FConvex> @ 143e8f400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTrimeshBVH::FindAllIntersectionsNoMTD<Chaos::FConvex>
          (FTrimeshBVH *this,FOBBVectorized *param_1,TRigidTransform<double,3> *param_2,
          FConvex *param_3,double param_4,TVector<double,3> *param_5,
          FTriangleMeshImplicitObject *param_6)

{
  void *_Dst;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ForElementType<int> FVar9;
  uint *puVar10;
  int *piVar11;
  ulonglong uVar12;
  int *piVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  float fVar28;
  float fVar29;
  undefined1 auStack_178 [32];
  uint *local_158;
  ForElementType<int> local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  uint local_128;
  undefined1 local_124 [12];
  __m128 local_118;
  undefined1 local_108 [16];
  FConvex *local_f8;
  uchar local_f0 [16];
  undefined8 local_e0;
  float local_d8;
  FTriangleMeshImplicitObject *local_d0;
  undefined1 local_c8;
  undefined1 local_b8 [16];
  double local_a8;
  ForElementType<int> local_98;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  auVar19 = *(undefined1 (*) [16])&param_2->field_0x10;
  piVar13 = &(this->Nodes).ArrayNum;
  local_c8 = 0;
  local_f0[0] = param_5->field_0x0;
  local_f0[1] = param_5->field_0x1;
  local_f0[2] = param_5->field_0x2;
  local_f0[3] = param_5->field_0x3;
  local_f0[4] = param_5->field_0x4;
  local_f0[5] = param_5->field_0x5;
  local_f0[6] = param_5->field_0x6;
  local_f0[7] = param_5->field_0x7;
  local_f0[8] = param_5->field_0x8;
  local_f0[9] = param_5->field_0x9;
  local_f0[10] = param_5->field_0xa;
  local_f0[0xb] = param_5->field_0xb;
  local_f0._12_4_ = *(undefined4 *)&param_5->field_0xc;
  local_e0 = *(undefined8 *)&param_5->field_0x10;
  local_d0 = param_6;
  local_d8 = (float)param_4;
  auVar4._4_8_ = *(double *)&param_2->field_0x8;
  auVar4._0_4_ = auVar19._4_4_;
  auVar23._0_8_ = auVar4._0_8_ << 0x20;
  auVar23._8_4_ = auVar19._8_4_;
  auVar23._12_4_ = auVar19._12_4_;
  fVar28 = (float)*(double *)param_2;
  fVar29 = (float)*(double *)&param_2->field_0x8;
  fVar21 = (float)auVar19._0_8_;
  fVar24 = (float)auVar23._8_8_;
  fVar22 = fVar29 * fVar29 + fVar28 * fVar28;
  fVar25 = fVar28 * fVar28 + fVar29 * fVar29;
  fVar26 = fVar24 * fVar24 + fVar21 * fVar21;
  fVar27 = fVar21 * fVar21 + fVar24 * fVar24;
  auVar19._0_4_ = fVar26 + fVar22;
  auVar19._4_4_ = fVar27 + fVar25;
  auVar19._8_4_ = fVar22 + fVar26;
  auVar19._12_4_ = fVar25 + fVar27;
  uVar15 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar19._0_4_);
  uVar16 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar19._4_4_);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar19._8_4_);
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar19._12_4_);
  auVar19 = sqrtps(auVar19,auVar19);
  auVar23 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar19);
  local_a8 = *(double *)&param_2->field_0x30;
  local_118.m128_u32[0] =
       (uint)(auVar23._0_4_ * fVar28) & uVar15 |
       ~uVar15 & GlobalVectorConstants::Float0001.m128_u32[0];
  local_118.m128_u32[1] =
       (uint)(auVar23._4_4_ * fVar29) & uVar16 |
       ~uVar16 & GlobalVectorConstants::Float0001.m128_u32[1];
  local_118.m128_u32[2] =
       (uint)(auVar23._8_4_ * fVar21) & uVar17 |
       ~uVar17 & GlobalVectorConstants::Float0001.m128_u32[2];
  local_118.m128_u32[3] =
       (uint)(auVar23._12_4_ * fVar24) & uVar18 |
       ~uVar18 & GlobalVectorConstants::Float0001.m128_u32[3];
  local_b8 = *(undefined1 (*) [16])&param_2->field_0x20;
  auVar5._4_8_ = auVar19._8_8_;
  auVar5._0_4_ = local_b8._4_4_;
  auVar20._0_8_ = auVar5._0_8_ << 0x20;
  auVar20._8_4_ = local_b8._8_4_;
  auVar20._12_4_ = local_b8._12_4_;
  local_108._4_4_ = (float)auVar20._8_8_;
  local_108._0_4_ = (float)local_b8._0_8_;
  local_108._8_4_ = (float)local_a8;
  local_108._12_4_ = 0;
  if (*piVar13 == 0) {
    uVar7 = 0;
  }
  else {
    local_4c = 0x10;
    local_98.SecondaryData = (ForElementType<int>)0x0;
    local_124._0_4_ = 0;
    local_50 = 0;
    iVar8 = 0;
    local_f8 = param_3;
    if ((&local_98 <= (ForElementType<int> *)local_124) &&
       (iVar8 = 0, local_124 < &local_98.SecondaryData)) {
      local_138 = 4;
      local_150 = (ForElementType<int>)&local_98;
      local_140 = 0;
      local_148 = 0x10;
      local_158 = (uint *)local_124;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      iVar8 = local_50;
      if (local_50 == local_4c) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,&local_98,&local_4c);
      }
    }
    local_50 = iVar8 + 1;
    FVar9 = (ForElementType<int>)&local_98;
    if (local_98.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_98.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar9 + (longlong)iVar8 * 4) = local_124._0_4_;
    uVar7 = 0;
    FVar9 = local_150;
    while (local_50 != 0) {
      uVar12 = 0;
      piVar11 = &(this->Nodes).ArrayNum;
      local_150 = (ForElementType<int>)(longlong)local_50;
      local_124._4_8_ = piVar13;
      if (local_50 < 1) {
        local_158 = (uint *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        FVar9 = local_150;
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
      }
      local_150 = FVar9;
      FVar9 = (ForElementType<int>)&local_98;
      if (local_98.SecondaryData != (ForElementType<int>)0x0) {
        FVar9 = local_98.SecondaryData;
      }
      iVar8 = local_50 + -1;
      uVar15 = *(uint *)((longlong)FVar9 + (longlong)iVar8 * 4);
      puVar10 = (uint *)(longlong)(int)uVar15;
      FVar9 = (ForElementType<int>)&local_98;
      if (local_98.SecondaryData != (ForElementType<int>)0x0) {
        FVar9 = local_98.SecondaryData;
      }
      _Dst = (void *)((longlong)FVar9 + (longlong)iVar8 * 4);
      iVar8 = (local_50 - iVar8) + -1;
      if (iVar8 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar8 << 2);
      }
      local_50 = local_50 + -1;
      if ((((int)uVar15 < 0) ||
          (piVar13 = piVar11, local_124._4_8_ = piVar11, *piVar11 <= (int)uVar15)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Nodes.IsValidIndex(NodeIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                             ,0xf6,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      uVar16 = 0;
      if ((int)uVar15 < *piVar13) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (local_158 = puVar10, local_150 = (ForElementType<int>)(longlong)*piVar13,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pFVar2 = (this->Nodes).AllocatorInstance.Data;
      pFVar14 = pFVar2 + (longlong)puVar10 * 0x50 + 0x48;
      do {
        local_128 = *(uint *)(pFVar14 + -8);
        if ((local_128 != 0xffffffff) &&
           (bVar6 = Chaos::Private::FOBBVectorized::IntersectAABB
                              (param_1,(FAABBVectorized *)
                                       (pFVar2 + uVar12 * 0x20 + (longlong)puVar10 * 0x50)), bVar6))
        {
          if (*(int *)pFVar14 == 0) {
            FVar9 = (ForElementType<int>)&local_98;
            if (local_98.SecondaryData != (ForElementType<int>)0x0) {
              FVar9 = local_98.SecondaryData;
            }
            if ((ulonglong)FVar9 <= &local_128) {
              FVar9 = (ForElementType<int>)&local_98;
              if (local_98.SecondaryData != (ForElementType<int>)0x0) {
                FVar9 = local_98.SecondaryData;
              }
              if (&local_128 < (uint *)((longlong)FVar9 + (longlong)local_4c * 4)) {
                local_140 = (longlong)local_50;
                local_138 = 4;
                local_158 = &local_128;
                local_150 = (ForElementType<int>)&local_98;
                if (local_98.SecondaryData != (ForElementType<int>)0x0) {
                  local_150 = local_98.SecondaryData;
                }
                local_148 = (longlong)local_4c;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  uVar7 = (*pcVar3)();
                  return (bool)uVar7;
                }
              }
            }
            iVar8 = local_50;
            if (local_50 == local_4c) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                (0x404,&local_98,&local_4c);
            }
            local_50 = iVar8 + 1;
            FVar9 = (ForElementType<int>)&local_98;
            if (local_98.SecondaryData != (ForElementType<int>)0x0) {
              FVar9 = local_98.SecondaryData;
            }
            *(uint *)((longlong)FVar9 + (longlong)iVar8 * 4) = local_128;
          }
          else {
            iVar8 = *(int *)pFVar14 + local_128;
            FVar9 = local_150;
            for (uVar15 = local_128; local_150 = FVar9, (int)uVar15 < iVar8; uVar15 = uVar15 + 1) {
              iVar1 = (this->FaceBounds).ArrayNum;
              local_150 = (ForElementType<int>)(longlong)iVar1;
              uVar16 = 0;
              if ((int)uVar15 < iVar1) {
                uVar16 = ~uVar15 >> 0x1f;
              }
              if (uVar16 == 0) {
                local_158 = (uint *)(longlong)(int)uVar15;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                FVar9 = local_150;
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  uVar7 = (*pcVar3)();
                  return (bool)uVar7;
                }
              }
              local_150 = FVar9;
              bVar6 = Chaos::Private::FOBBVectorized::IntersectAABB
                                (param_1,(FAABBVectorized *)
                                         ((this->FaceBounds).AllocatorInstance.Data +
                                         (longlong)(int)uVar15 * 0x20));
              if ((bVar6) &&
                 (bVar6 = FTriangleMeshOverlapVisitorNoMTD<Chaos::FConvex>::VisitOverlap
                                    ((FTriangleMeshOverlapVisitorNoMTD<Chaos::FConvex> *)&local_118,
                                     uVar15), !bVar6)) {
                if (local_98.SecondaryData == (ForElementType<int>)0x0) {
                  return (bool)local_c8;
                }
                FMemory::Free((void *)local_98.SecondaryData);
                return (bool)local_c8;
              }
              FVar9 = local_150;
            }
          }
        }
        uVar15 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar15;
        pFVar14 = pFVar14 + 4;
        piVar13 = (int *)local_124._4_8_;
        uVar7 = local_c8;
        FVar9 = local_150;
      } while ((int)uVar15 < 2);
    }
    if (local_98.SecondaryData != (ForElementType<int>)0x0) {
      local_150 = FVar9;
      FMemory::Free((void *)local_98.SecondaryData);
    }
  }
  return (bool)uVar7;
}

// FindAllIntersections @ 143ebdf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTrimeshBVH::FindAllIntersections
          (FTrimeshBVH *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TAABB<double,3> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  ForElementType<int> FVar14;
  ForElementType<int> FVar15;
  float fVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auStack_138 [32];
  float *local_118;
  ForElementType<int> local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_e8 [8];
  float local_e0 [2];
  float local_d8 [2];
  FScriptContainerElement *local_d0;
  longlong local_c8 [2];
  ForElementType<int> local_b8;
  int local_70;
  int local_6c;
  ulonglong local_68;
  undefined7 extraout_var;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_138;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  dVar6 = *(double *)&param_1->MMin;
  fVar26 = (float)*(double *)&(param_1->MMin).field_0x8;
  fVar22 = (float)*(double *)&(param_1->MMin).field_0x10;
  dVar7 = *(double *)&param_1->MMax;
  fVar27 = (float)*(double *)&(param_1->MMax).field_0x8;
  fVar23 = (float)*(double *)&(param_1->MMax).field_0x10;
  if ((this->Nodes).ArrayNum != 0) {
    local_b8.SecondaryData = (ForElementType<int>)0x0;
    local_70 = 0;
    local_6c = 0x10;
    local_e8._0_4_ = 0.0;
    iVar9 = 0;
    if ((&local_b8 <= (ForElementType<int> *)local_e8) &&
       (iVar9 = 0, local_e8 < &local_b8.SecondaryData)) {
      local_f8 = 4;
      local_110 = (ForElementType<int>)&local_b8;
      local_100 = 0;
      local_108 = 0x10;
      local_118 = (float *)local_e8;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar12;
      }
      iVar9 = local_70;
      if (local_70 == local_6c) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,&local_b8,&local_6c);
      }
    }
    local_70 = iVar9 + 1;
    FVar15 = (ForElementType<int>)&local_b8;
    if (local_b8.SecondaryData != (ForElementType<int>)0x0) {
      FVar15 = local_b8.SecondaryData;
    }
    *(undefined4 *)((longlong)FVar15 + (longlong)iVar9 * 4) = local_e8._0_4_;
    FVar15 = local_b8.SecondaryData;
    if (local_70 != 0) {
      do {
        if (local_70 < 1) {
          local_118 = (float *)0x0;
          local_110 = (ForElementType<int>)(longlong)local_70;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          FVar15 = local_b8.SecondaryData;
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar12;
          }
        }
        FVar14 = (ForElementType<int>)&local_b8;
        if (FVar15 != (ForElementType<int>)0x0) {
          FVar14 = FVar15;
        }
        iVar9 = local_70 + -1;
        uVar10 = *(uint *)((longlong)FVar14 + (longlong)iVar9 * 4);
        FVar14 = (ForElementType<int>)&local_b8;
        if (FVar15 != (ForElementType<int>)0x0) {
          FVar14 = FVar15;
        }
        pFVar20 = (FScriptContainerElement *)((longlong)FVar14 + (longlong)iVar9 * 4);
        iVar9 = (local_70 - iVar9) + -1;
        if (iVar9 != 0) {
          memmove(pFVar20,pFVar20 + 4,(longlong)iVar9 << 2);
          FVar15 = local_b8.SecondaryData;
        }
        local_70 = local_70 + -1;
        if ((((int)uVar10 < 0) || ((this->Nodes).ArrayNum <= (int)uVar10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Nodes.IsValidIndex(NodeIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                               ,0xf6,L""), FVar15 = local_b8.SecondaryData, bVar8)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar12;
        }
        iVar9 = (this->Nodes).ArrayNum;
        uVar13 = 0;
        if ((int)uVar10 < iVar9) {
          uVar13 = (ulonglong)(~uVar10 >> 0x1f);
        }
        if ((int)uVar13 == 0) {
          local_118 = (float *)(longlong)(int)uVar10;
          local_110 = (ForElementType<int>)(longlong)iVar9;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar13 = CONCAT71(extraout_var,bVar8);
          FVar15 = local_b8.SecondaryData;
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar12;
          }
        }
        pFVar18 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x50;
        local_c8[0] = 2;
        pFVar20 = pFVar18 + 0x48;
        do {
          lVar19 = local_c8[0];
          local_d8[0] = *(float *)(pFVar20 + -8);
          uVar17 = (ulonglong)(int)local_d8[0];
          local_d0 = pFVar18;
          if (local_d8[0] != -NAN) {
            auVar24._4_4_ = -(uint)(*(float *)(pFVar18 + 0x14) < fVar26);
            auVar24._0_4_ = -(uint)(*(float *)(pFVar18 + 0x10) < (float)dVar6);
            auVar24._8_4_ = -(uint)(*(float *)(pFVar18 + 0x18) < fVar22);
            auVar24._12_4_ = -(uint)(*(float *)(pFVar18 + 0x1c) < 0.0);
            auVar4._4_4_ = -(uint)(fVar27 < *(float *)(pFVar18 + 4));
            auVar4._0_4_ = -(uint)((float)dVar7 < *(float *)pFVar18);
            auVar4._8_4_ = -(uint)(fVar23 < *(float *)(pFVar18 + 8));
            auVar4._12_4_ = -(uint)(0.0 < *(float *)(pFVar18 + 0xc));
            uVar10 = movmskps((int)uVar13,auVar24 | auVar4);
            uVar13 = (ulonglong)uVar10;
            if (uVar10 == 0) {
              fVar11 = *(float *)pFVar20;
              uVar13 = (ulonglong)(uint)fVar11;
              if (fVar11 == 0.0) {
                FVar14 = (ForElementType<int>)&local_b8;
                if (FVar15 != (ForElementType<int>)0x0) {
                  FVar14 = FVar15;
                }
                if ((ulonglong)FVar14 <= local_d8) {
                  FVar14 = (ForElementType<int>)&local_b8;
                  if (FVar15 != (ForElementType<int>)0x0) {
                    FVar14 = FVar15;
                  }
                  if ((FScriptContainerElement *)local_d8 <
                      (FScriptContainerElement *)((longlong)FVar14 + (longlong)local_6c * 4)) {
                    local_100 = (longlong)local_70;
                    local_f8 = 4;
                    local_118 = local_d8;
                    local_110 = (ForElementType<int>)&local_b8;
                    if (FVar15 != (ForElementType<int>)0x0) {
                      local_110 = FVar15;
                    }
                    local_108 = (longlong)local_6c;
                    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    FVar15 = local_b8.SecondaryData;
                    if (bVar8) {
                      pcVar3 = (code *)swi(3);
                      pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                      return pTVar12;
                    }
                  }
                }
                if (local_70 == local_6c) {
                  local_70 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                       (0x404,&local_b8,&local_6c);
                  FVar15 = local_b8.SecondaryData;
                }
                lVar21 = (longlong)local_70;
                FVar14 = (ForElementType<int>)&local_b8;
                if (FVar15 != (ForElementType<int>)0x0) {
                  FVar14 = FVar15;
                }
                local_70 = local_70 + 1;
                *(float *)((longlong)FVar14 + lVar21 * 4) = local_d8[0];
                local_d0 = pFVar18;
                local_c8[0] = lVar19;
                fVar11 = local_d8[0];
              }
              else {
                if ((int)local_d8[0] + (int)fVar11 <= (int)local_d8[0]) goto LAB_143ebe3f8;
                lVar19 = uVar17 << 5;
                lVar21 = (longlong)((int)local_d8[0] + (int)fVar11) - uVar17;
                do {
                  iVar9 = (this->FaceBounds).ArrayNum;
                  fVar16 = (float)uVar17;
                  uVar10 = 0;
                  if ((int)fVar16 < iVar9) {
                    uVar10 = ~(uint)fVar16 >> 0x1f;
                  }
                  if (uVar10 == 0) {
                    local_118 = (float *)(longlong)(int)fVar16;
                    local_110 = (ForElementType<int>)(longlong)iVar9;
                    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar8) {
                      pcVar3 = (code *)swi(3);
                      pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                      return pTVar12;
                    }
                  }
                  pFVar2 = (this->FaceBounds).AllocatorInstance.Data;
                  pFVar1 = pFVar2 + lVar19 + 0x10;
                  pFVar18 = pFVar2 + lVar19;
                  auVar25._4_4_ = -(uint)(*(float *)(pFVar1 + 4) < fVar26);
                  auVar25._0_4_ = -(uint)(*(float *)pFVar1 < (float)dVar6);
                  auVar25._8_4_ = -(uint)(*(float *)(pFVar1 + 8) < fVar22);
                  auVar25._12_4_ = -(uint)(*(float *)(pFVar1 + 0xc) < 0.0);
                  auVar5._4_4_ = -(uint)(fVar27 < *(float *)(pFVar18 + 4));
                  auVar5._0_4_ = -(uint)((float)dVar7 < *(float *)pFVar18);
                  auVar5._8_4_ = -(uint)(fVar23 < *(float *)(pFVar18 + 8));
                  auVar5._12_4_ = -(uint)(0.0 < *(float *)(pFVar18 + 0xc));
                  fVar11 = (float)movmskps((int)pFVar2,auVar25 | auVar5);
                  if (fVar11 == 0.0) {
                    FVar15 = (ForElementType<int>)(__return_storage_ptr__->AllocatorInstance).Data;
                    local_e0[0] = fVar16;
                    if (((ulonglong)FVar15 <= local_e0) &&
                       ((FScriptContainerElement *)local_e0 <
                        (FScriptContainerElement *)
                        ((longlong)FVar15 + (longlong)__return_storage_ptr__->ArrayMax * 4))) {
                      local_100 = (longlong)__return_storage_ptr__->ArrayNum;
                      local_f8 = 4;
                      local_118 = local_e0;
                      local_110 = FVar15;
                      local_108 = (longlong)__return_storage_ptr__->ArrayMax;
                      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        );
                      if (bVar8) {
                        pcVar3 = (code *)swi(3);
                        pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                        return pTVar12;
                      }
                    }
                    iVar9 = __return_storage_ptr__->ArrayNum;
                    if (iVar9 == __return_storage_ptr__->ArrayMax) {
                      iVar9 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                                         &__return_storage_ptr__->ArrayMax);
                    }
                    __return_storage_ptr__->ArrayNum = iVar9 + 1;
                    *(float *)((__return_storage_ptr__->AllocatorInstance).Data +
                              (longlong)iVar9 * 4) = local_e0[0];
                    fVar11 = local_e0[0];
                  }
                  uVar17 = (ulonglong)((int)fVar16 + 1);
                  lVar19 = lVar19 + 0x20;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
              }
              uVar13 = (ulonglong)(uint)fVar11;
              FVar15 = local_b8.SecondaryData;
            }
          }
LAB_143ebe3f8:
          pFVar18 = local_d0 + 0x20;
          pFVar20 = pFVar20 + 4;
          local_c8[0] = local_c8[0] + -1;
        } while (local_c8[0] != 0);
        local_c8[0]._0_1_ = '\0';
        local_c8[0]._1_1_ = '\0';
        local_c8[0]._2_1_ = '\0';
        local_c8[0]._3_1_ = '\0';
        local_c8[0]._4_1_ = '\0';
        local_c8[0]._5_1_ = '\0';
        local_c8[0]._6_1_ = '\0';
        local_c8[0]._7_1_ = '\0';
        local_d0 = pFVar18;
      } while (local_70 != 0);
      local_c8[0]._0_1_ = '\0';
      local_c8[0]._1_1_ = '\0';
      local_c8[0]._2_1_ = '\0';
      local_c8[0]._3_1_ = '\0';
      local_c8[0]._4_1_ = '\0';
      local_c8[0]._5_1_ = '\0';
      local_c8[0]._6_1_ = '\0';
      local_c8[0]._7_1_ = '\0';
    }
    if (FVar15 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar15);
    }
  }
  return __return_storage_ptr__;
}

// Serialize @ 143ecc360

void __thiscall Chaos::FTrimeshBVH::Serialize(FTrimeshBVH *this,FChaosArchive *param_1)

{
  int iVar1;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  operator<<<Chaos::FTrimeshBVH::FNode_TSizedDefaultAllocator<32>_>(param_1,&this->Nodes);
  operator<<<Chaos::FAABBVectorized_TSizedDefaultAllocator<32>_>(param_1,&this->FaceBounds);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (iVar1 < 0x47) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    operator<<<int,TSizedDefaultAllocator<32>_>(param_1,&local_18);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

