// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// ConstructMeshTopology @ 143587640

void __thiscall
UE::Geometry::FSweepGeneratorBase::ConstructMeshTopology
          (FSweepGeneratorBase *this,TPolygon2<double> *param_1,TArrayView<int_const_,int> *param_2,
          TArrayView<int_const_,int> *param_3,TArrayView<int_const_,int> *param_4,bool param_5,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_6,int param_7,bool param_8,
          ECapType *param_9,TVector2<float> param_10,TVector2<float> param_11,
          TVector2<float> param_12,TArrayView<float_const_,int> *param_13,
          TArrayView<float_const_,int> *param_14)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  FScriptContainerElement *pFVar7;
  TVector<double> *pTVar8;
  TVector<double> *pTVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined4 uVar13;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar14;
  TArrayView<int_const_,int> *pTVar15;
  ForAnyElementType FVar16;
  TVector2<float>_u_0 TVar17;
  bool bVar18;
  bool bVar19;
  int *piVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  int iVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  int iVar35;
  FScriptContainerElement *pFVar36;
  ulonglong uVar37;
  longlong lVar38;
  int iVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  float fVar45;
  undefined1 local_res8 [8];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_res10;
  TArrayView<int_const_,int> *local_res18;
  TArrayView<int_const_,int> *local_res20;
  TArray<float,TSizedDefaultAllocator<32>_> local_1e0;
  ForAnyElementType local_1d0;
  int local_1c8;
  int iStack_1c4;
  uint local_1c0;
  uint local_1bc;
  ulonglong local_1b8;
  uint local_1b0;
  int local_1ac;
  int local_1a8;
  float local_1a4;
  float local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  uint local_190;
  longlong local_188;
  int local_180;
  float local_17c;
  undefined4 local_178;
  undefined4 local_174;
  float local_170;
  int local_16c;
  int local_168;
  int iStack_164;
  int local_158;
  int iStack_154;
  int local_148;
  int iStack_144;
  int local_138;
  int iStack_134;
  int local_128;
  longlong local_120;
  FScriptContainerElement *local_118;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_110;
  int local_100;
  int iStack_fc;
  float local_f0;
  float fStack_ec;
  undefined8 local_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  int local_c0;
  uint uStack_bc;
  
  fVar2 = __real_358637bd;
  fVar3 = __real_3f800000;
  iVar4 = (param_1->Vertices).ArrayNum;
  iVar35 = iVar4;
  if (this->bProfileCurveIsClosed == false) {
    iVar35 = iVar4 + -1;
  }
  uVar22 = 0;
  local_19c = param_3->ArrayNum + iVar4;
  iVar26 = param_13->ArrayNum;
  local_1bc = param_2->ArrayNum + 1 + iVar35;
  local_1a4 = 0.0;
  local_1a0 = 0.0;
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax = 0;
  local_1d0.Data = (FScriptContainerElement *)0x0;
  local_1c8 = 0;
  iStack_1c4 = 0;
  local_res10 = &param_1->Vertices;
  local_res18 = param_2;
  local_res20 = param_3;
  local_1a8 = iVar35;
  if (this->bProfileCurveIsClosed == false) {
    if (iVar4 <= iVar26) {
      TArray<float,TSizedDefaultAllocator<32>_>::operator=<float_const_,int>(&local_1e0,param_13);
      goto LAB_14358777c;
    }
  }
  else {
    if (iVar4 + 1 <= iVar26) {
      pfVar6 = param_13->DataPtr;
      local_1e0.ArrayMax = 0;
      local_1e0.ArrayNum = iVar26;
      if (iVar26 != 0) {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar26,0,&local_1e0.AllocatorInstance,iVar26,&local_1e0.ArrayMax);
        memcpy(local_1e0.AllocatorInstance.Data,pfVar6,(longlong)iVar26 << 2);
      }
      goto LAB_14358777c;
    }
    if (iVar26 == iVar4) {
      TArray<float,TSizedDefaultAllocator<32>_>::operator=<float_const_,int>(&local_1e0,param_13);
      if ((local_1e0.ArrayNum < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar16.Data = local_1e0.AllocatorInstance.Data;
      if ((local_1e0.AllocatorInstance.Data <
           local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 4) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (local_1e0.ArrayNum == local_1e0.ArrayMax) {
        local_1e0.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
      }
      *(float *)(local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayNum * 4) =
           *(float *)FVar16.Data;
      local_1e0.ArrayNum = local_1e0.ArrayNum + 1;
      goto LAB_14358777c;
    }
  }
  if (param_5) {
    iVar21 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
    iVar26 = local_1a8;
    *(undefined4 *)(local_1e0.AllocatorInstance.Data + (longlong)iVar21 * 4) = 0;
    local_1e0.ArrayNum = iVar21 + 1;
    if (0 < iVar35) {
      lVar25 = 0;
      do {
        uVar27 = uVar22 + 1;
        uVar24 = (int)uVar27 % iVar26;
        uVar23 = 0;
        if ((int)uVar24 < (param_1->Vertices).ArrayNum) {
          uVar23 = ~uVar24 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar36 = (param_1->Vertices).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x10;
        uVar23 = 0;
        if ((int)uVar22 < (param_1->Vertices).ArrayNum) {
          uVar23 = ~uVar22 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar7 = (param_1->Vertices).AllocatorInstance.Data;
        dVar40 = *(double *)(pFVar36 + 8) - *(double *)(pFVar7 + lVar25 + 8);
        dVar41 = *(double *)pFVar36 - *(double *)(pFVar7 + lVar25);
        auVar43._0_8_ = dVar40 * dVar40 + dVar41 * dVar41;
        auVar43._8_8_ = 0;
        auVar43 = sqrtpd(auVar43,auVar43);
        local_1a4 = local_1a4 + (float)auVar43._0_8_;
        if (((local_1e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1a4) &&
            ((FScriptContainerElement *)&local_1a4 <
             local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 4)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (local_1e0.ArrayNum == local_1e0.ArrayMax) {
          local_1e0.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
        }
        iVar35 = local_1e0.ArrayNum + 1;
        lVar25 = lVar25 + 0x10;
        *(float *)(local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayNum * 4) = local_1a4;
        local_1e0.ArrayNum = iVar35;
        uVar22 = uVar27;
      } while ((int)uVar27 < iVar26);
    }
    uVar34 = 0;
    if (local_1a4 <= fVar2) {
      local_1a4 = fVar2;
    }
    uVar29 = uVar34;
    if (0 < local_1e0.ArrayNum) {
      do {
        fVar45 = local_1a4;
        uVar24 = (uint)uVar34;
        uVar23 = ~uVar24 >> 0x1f;
        uVar22 = 0;
        if ((int)uVar24 < local_1e0.ArrayNum) {
          uVar22 = uVar23;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(float *)(local_1e0.AllocatorInstance.Data + uVar29 * 4) =
             *(float *)(local_1e0.AllocatorInstance.Data + uVar29 * 4) / fVar45;
        uVar22 = 0;
        if ((int)uVar24 < local_1e0.ArrayNum) {
          uVar22 = uVar23;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        fVar45 = *(float *)(local_1e0.AllocatorInstance.Data + uVar29 * 4);
        uVar22 = 0;
        if ((int)uVar24 < local_1e0.ArrayNum) {
          uVar22 = uVar23;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar34 = (ulonglong)(uVar24 + 1);
        *(float *)(local_1e0.AllocatorInstance.Data + uVar29 * 4) = fVar3 - fVar45;
        uVar29 = uVar29 + 1;
      } while ((int)(uVar24 + 1) < local_1e0.ArrayNum);
    }
  }
  else {
    if (0 < iVar35) {
      fVar45 = __real_3f800000 / (float)iVar35;
      do {
        local_17c = fVar3 - (float)(int)uVar22 * fVar45;
        if (((local_1e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_17c) &&
            ((FScriptContainerElement *)&local_17c <
             local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 4)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (local_1e0.ArrayNum == local_1e0.ArrayMax) {
          local_1e0.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
        }
        iVar26 = local_1e0.ArrayNum + 1;
        uVar22 = uVar22 + 1;
        *(float *)(local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayNum * 4) = local_17c;
        local_1e0.ArrayNum = iVar26;
      } while ((int)uVar22 < iVar35);
    }
    local_178 = 0;
    if (((local_1e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_178) &&
        ((FScriptContainerElement *)&local_178 <
         local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 4)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (local_1e0.ArrayNum == local_1e0.ArrayMax) {
      local_1e0.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
    }
    *(undefined4 *)(local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayNum * 4) = local_178
    ;
    local_1e0.ArrayNum = local_1e0.ArrayNum + 1;
  }
LAB_14358777c:
  uVar34 = 0;
  iVar35 = param_14->ArrayNum;
  if (iVar35 < param_7) {
    if ((param_8) && (iVar35 == param_7 + -1)) {
      pfVar6 = param_14->DataPtr;
      _local_1c8 = CONCAT44(iStack_1c4,iVar35);
      if ((iVar35 != 0) || (iVar26 = 0, iStack_1c4 != 0)) {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar35,iStack_1c4,&local_1d0,iVar35,&iStack_1c4);
        if (iVar35 != 0) {
          memcpy(local_1d0.Data,pfVar6,(longlong)iVar35 << 2);
        }
        iVar26 = local_1c8;
      }
      if (iVar26 < 1) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar26 = local_1c8;
      }
      FVar16.Data = local_1d0.Data;
      if (local_1d0.Data < local_1d0.Data + (longlong)iStack_1c4 * 4) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar18) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar26 = local_1c8;
      }
      if (iVar26 == iStack_1c4) {
        iVar26 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_1d0,&iStack_1c4);
      }
      *(float *)(local_1d0.Data + (longlong)iVar26 * 4) = *(float *)FVar16.Data;
      local_1c8 = iVar26 + 1;
    }
    else if (param_5) {
      local_174 = 0;
      if (((local_1d0.Data <= (FScriptContainerElement *)&local_174) &&
          ((FScriptContainerElement *)&local_174 < local_1d0.Data + (longlong)iStack_1c4 * 4)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (local_1c8 == iStack_1c4) {
        local_1c8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_1d0,&iStack_1c4);
      }
      lVar25 = (longlong)local_1c8;
      local_1c8 = local_1c8 + 1;
      *(undefined4 *)(local_1d0.Data + lVar25 * 4) = local_174;
      iVar35 = param_6->ArrayNum;
      if (!param_8) {
        iVar35 = param_6->ArrayNum + -1;
      }
      param_14 = (TArrayView<float_const_,int> *)(longlong)iVar35;
      uVar29 = uVar34;
      if (0 < iVar35) {
        do {
          uVar22 = (uint)uVar34;
          uVar24 = (int)(uVar22 + 1) % param_6->ArrayNum;
          uVar23 = 0;
          if ((int)uVar24 < param_6->ArrayNum) {
            uVar23 = ~uVar24 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar8 = param_6->DataPtr;
          uVar23 = 0;
          if ((int)uVar22 < param_6->ArrayNum) {
            uVar23 = ~uVar22 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar9 = param_6->DataPtr;
          dVar40 = pTVar8[(int)uVar24].field0_0x0._s_0.Y -
                   *(double *)((longlong)&pTVar9->field0_0x0 + uVar29 + 8);
          dVar44 = pTVar8[(int)uVar24].field0_0x0._s_0.X -
                   *(double *)((longlong)&pTVar9->field0_0x0 + uVar29);
          dVar41 = pTVar8[(int)uVar24].field0_0x0._s_0.Z -
                   *(double *)((longlong)&pTVar9->field0_0x0 + uVar29 + 0x10);
          auVar42._0_8_ = dVar41 * dVar41;
          auVar42._8_8_ = 0;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = dVar40 * dVar40 + dVar44 * dVar44 + auVar42._0_8_;
          auVar43 = sqrtpd(auVar42,auVar11);
          local_1a0 = local_1a0 + (float)auVar43._0_8_;
          if (((local_1d0.Data <= (FScriptContainerElement *)&local_1a0) &&
              ((FScriptContainerElement *)&local_1a0 < local_1d0.Data + (longlong)iStack_1c4 * 4))
             && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (local_1c8 == iStack_1c4) {
            local_1c8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_1d0,&iStack_1c4);
          }
          iVar35 = local_1c8 + 1;
          uVar34 = (ulonglong)(uVar22 + 1);
          param_14 = (TArrayView<float_const_,int> *)&param_14[-1].field_0xf;
          *(float *)(local_1d0.Data + (longlong)local_1c8 * 4) = local_1a0;
          uVar29 = uVar29 + 0x18;
          local_1c8 = iVar35;
        } while (param_14 != (TArrayView<float_const_,int> *)0x0);
      }
      uVar34 = 0;
      if (local_1a0 <= fVar2) {
        local_1a0 = fVar2;
      }
      uVar29 = uVar34;
      if (0 < local_1c8) {
        do {
          fVar2 = local_1a0;
          uVar24 = (uint)uVar34;
          uVar23 = ~uVar24 >> 0x1f;
          uVar22 = 0;
          if ((int)uVar24 < local_1c8) {
            uVar22 = uVar23;
          }
          if ((uVar22 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          *(float *)(local_1d0.Data + uVar29 * 4) = *(float *)(local_1d0.Data + uVar29 * 4) / fVar2;
          uVar22 = 0;
          if ((int)uVar24 < local_1c8) {
            uVar22 = uVar23;
          }
          if ((uVar22 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          fVar2 = *(float *)(local_1d0.Data + uVar29 * 4);
          uVar22 = 0;
          if ((int)uVar24 < local_1c8) {
            uVar22 = uVar23;
          }
          if ((uVar22 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar34 = (ulonglong)(uVar24 + 1);
          *(float *)(local_1d0.Data + uVar29 * 4) = fVar3 - fVar2;
          uVar29 = uVar29 + 1;
        } while ((int)(uVar24 + 1) < local_1c8);
      }
    }
    else if (0 < param_7) {
      do {
        local_170 = fVar3 - (float)(int)uVar34 * (fVar3 / (float)(param_7 + -1));
        if (((local_1d0.Data <= (FScriptContainerElement *)&local_170) &&
            ((FScriptContainerElement *)&local_170 < local_1d0.Data + (longlong)iStack_1c4 * 4)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (local_1c8 == iStack_1c4) {
          local_1c8 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_1d0,&iStack_1c4);
        }
        lVar25 = (longlong)local_1c8;
        uVar22 = (int)uVar34 + 1;
        uVar34 = (ulonglong)uVar22;
        local_1c8 = local_1c8 + 1;
        *(float *)(local_1d0.Data + lVar25 * 4) = local_170;
      } while ((int)uVar22 < param_7);
    }
  }
  else {
    pfVar6 = param_14->DataPtr;
    local_1c8 = iVar35;
    if (((iVar35 != 0) || (iStack_1c4 != 0)) &&
       (Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar35,iStack_1c4,&local_1d0,iVar35,&iStack_1c4), iVar35 != 0)) {
      memcpy(local_1d0.Data,pfVar6,(longlong)iVar35 << 2);
    }
  }
  iVar26 = 0;
  iVar35 = 0;
  if (param_8) {
    iVar35 = iVar4;
  }
  iVar35 = iVar4 * param_7 - iVar35;
  if (param_7 < 2) {
    iVar21 = local_19c * param_4->ArrayNum;
  }
  else {
    iVar26 = 0;
    if (param_8) {
      iVar26 = local_19c;
    }
    iVar21 = local_19c * param_7 + (local_19c * param_4->ArrayNum - iVar26);
    iVar26 = local_1bc * param_7;
  }
  local_128 = (param_7 + -1) * local_1a8;
  iVar28 = 0;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  iVar39 = local_128 * 2;
  if (param_8) {
    if (((*param_9 != None) || (param_9[1] != None)) &&
       (bVar18 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7550971673701253249>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\SweepGenerator.cpp"
                            ,0x81,
                            "!bLoop || (Caps[0] == ECapType::None && Caps[1] == ECapType::None)"),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FMeshShapeGenerator::SetBufferSizes((FMeshShapeGenerator *)this,iVar35,iVar39,iVar26,iVar21);
  }
  else {
    piVar20 = this->CapNormalStart;
    iVar32 = local_128;
    while (iVar28 < 2) {
      piVar20[-2] = iVar35;
      *piVar20 = iVar21;
      piVar20[2] = iVar26;
      piVar20[4] = iVar39;
      piVar20[6] = iVar32;
      iVar5 = *(int *)((longlong)piVar20 + (longlong)param_9 + (-0xac - (longlong)this));
      if (iVar5 == 1) {
        iVar32 = iVar32 + 1;
        iVar39 = iVar39 + -2 + iVar4;
        iVar26 = iVar26 + iVar4;
        iVar21 = iVar21 + iVar4;
        iVar28 = iVar28 + 1;
        piVar20 = piVar20 + 1;
      }
      else if (iVar5 == 2) {
        iVar26 = iVar26 + 1 + iVar4;
        iVar21 = iVar21 + 1 + iVar4;
        iVar39 = iVar39 + local_1a8;
        iVar32 = iVar32 + 1;
        iVar35 = iVar35 + 1;
        iVar28 = iVar28 + 1;
        piVar20 = piVar20 + 1;
      }
      else {
        iVar28 = iVar28 + 1;
        piVar20 = piVar20 + 1;
      }
    }
    FMeshShapeGenerator::SetBufferSizes((FMeshShapeGenerator *)this,iVar35,iVar39,iVar26,iVar21);
    uVar22 = param_7 + -1;
    local_1ac = 0;
    local_1b8 = 0;
    local_1c0 = uVar22;
    local_128 = iVar32;
    do {
      uVar34 = local_1b8;
      if (param_9[local_1b8] == FlatTriangulation) {
        uVar23 = uVar22 * local_1ac * iVar4;
        local_1b0 = uVar23;
        PolygonTriangulation::TriangulateSimplePolygon<double>(local_res10,&local_110,true);
        uVar30 = (ulonglong)local_110.ArrayNum;
        uVar29 = (ulonglong)this->CapTriangleStart[uVar34];
        local_194 = this->CapPolygonStart[uVar34];
        local_190 = local_110.ArrayNum;
        lVar25 = uVar29 * 0xc;
        local_118 = local_110.AllocatorInstance.Data + uVar30 * 0xc;
        local_188 = uVar29 * 4;
        pFVar36 = local_110.AllocatorInstance.Data + 4;
        uVar34 = uVar30;
        while( true ) {
          pFVar7 = local_118;
          if ((int)uVar30 != (int)uVar34) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          pFVar1 = pFVar36 + -4;
          if (pFVar1 == pFVar7) break;
          bVar18 = local_1ac == 0;
          iStack_fc = *(int *)pFVar36 + uVar23;
          local_100 = uVar23 + *(int *)pFVar1;
          iVar35 = *(int *)(pFVar36 + 4) + uVar23;
          if ((bool)(char)this->_padding_ != bVar18) {
            iVar35 = local_100;
            local_100 = *(int *)(pFVar36 + 4) + uVar23;
          }
          uVar23 = (uint)uVar29;
          uVar22 = 0;
          if ((int)uVar23 < (int)this->_padding_) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar38 = this->_padding_;
          *(ulonglong *)(lVar38 + lVar25) = CONCAT44(iStack_fc,local_100);
          *(int *)(lVar38 + 8 + lVar25) = iVar35;
          iVar35 = this->CapUVStart[local_1b8];
          iStack_144 = *(int *)pFVar36 + iVar35;
          local_148 = *(int *)pFVar1 + iVar35;
          iVar26 = *(int *)(pFVar36 + 4) + iVar35;
          if ((bool)(char)this->_padding_ != bVar18) {
            iVar26 = local_148;
            local_148 = *(int *)(pFVar36 + 4) + iVar35;
          }
          uVar22 = 0;
          if ((int)uVar23 < (int)this->_padding_) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar38 = this->_padding_;
          *(ulonglong *)(lVar38 + lVar25) = CONCAT44(iStack_144,local_148);
          *(int *)(lVar38 + 8 + lVar25) = iVar26;
          iVar35 = this->CapNormalStart[local_1b8];
          iStack_134 = *(int *)pFVar36 + iVar35;
          local_138 = *(int *)(pFVar36 + -4) + iVar35;
          iVar26 = *(int *)(pFVar36 + 4) + iVar35;
          if ((bool)(char)this->_padding_ != bVar18) {
            iVar26 = local_138;
            local_138 = *(int *)(pFVar36 + 4) + iVar35;
          }
          uVar22 = 0;
          if ((int)uVar23 < (int)this->_padding_) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar38 = this->_padding_;
          *(ulonglong *)(lVar38 + lVar25) = CONCAT44(iStack_134,local_138);
          *(int *)(lVar38 + 8 + lVar25) = iVar26;
          uVar22 = 0;
          if ((int)uVar23 < (int)this->_padding_) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar29 = (ulonglong)(uVar23 + 1);
          lVar25 = lVar25 + 0xc;
          uVar34 = (ulonglong)local_190;
          *(int *)(local_188 + this->_padding_) = local_194;
          local_188 = local_188 + 4;
          uVar30 = local_110._8_8_ & 0xffffffff;
          pFVar36 = pFVar36 + 0xc;
          uVar23 = local_1b0;
        }
        uVar24 = 0;
        iVar35 = local_1ac * 2;
        uVar22 = local_1c0;
        if (0 < iVar4) {
          local_188 = 0;
          do {
            lVar25 = local_188;
            pTVar14 = local_res10;
            uVar22 = 0;
            if ((int)uVar24 < local_res10->ArrayNum) {
              uVar22 = ~uVar24 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar36 = (((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                       &pTVar14->AllocatorInstance)->AllocatorInstance).Data;
            local_f0 = ((float)*(double *)(pFVar36 + lVar25) * param_11.field0_0x0._s_0.X +
                       param_12.field0_0x0._s_0.X) * (float)(iVar35 + -1);
            uVar27 = this->CapUVStart[local_1b8] + uVar24;
            uVar22 = 0;
            if ((int)uVar27 < (int)this->_padding_) {
              uVar22 = ~uVar27 >> 0x1f;
            }
            fStack_ec = (float)*(double *)(pFVar36 + lVar25 + 8) * param_11.field0_0x0._s_0.Y +
                        param_12.field0_0x0._s_0.Y;
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            *(ulonglong *)(this->_padding_ + (longlong)(int)uVar27 * 8) =
                 CONCAT44(fStack_ec,local_f0);
            uVar22 = 0;
            if ((int)uVar27 < (int)this->_padding_) {
              uVar22 = ~uVar27 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar26 = uVar24 + uVar23;
            *(int *)(this->_padding_ + (longlong)(int)uVar27 * 4) = iVar26;
            uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            uVar23 = this->CapNormalStart[local_1b8] + uVar24;
            uVar22 = 0;
            if ((int)uVar23 < (int)this->_padding_) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar25 = this->_padding_;
            lVar38 = (longlong)(int)uVar23;
            *(undefined8 *)(lVar25 + lVar38 * 0xc) = uVar12;
            *(undefined4 *)(lVar25 + 8 + lVar38 * 0xc) = uVar13;
            uVar22 = 0;
            if ((int)uVar23 < (int)this->_padding_) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar24 = uVar24 + 1;
            *(int *)(this->_padding_ + lVar38 * 4) = iVar26;
            local_188 = local_188 + 0x10;
            uVar22 = local_1c0;
            uVar23 = local_1b0;
          } while ((int)uVar24 < iVar4);
        }
      }
      else if (param_9[local_1b8] == FlatMidpointFan) {
        local_1b0 = this->CapVertStart[local_1b8];
        local_190 = this->CapPolygonStart[local_1b8];
        uVar34 = (ulonglong)this->CapTriangleStart[local_1b8];
        local_194 = uVar22 * local_1ac * iVar4;
        if (0 < local_1a8) {
          bVar18 = local_1ac == 0;
          local_188 = uVar34 * 4;
          local_180 = local_194 + -1;
          lVar25 = uVar34 * 0xc;
          iVar35 = 1;
          uStack_bc = local_1b0;
          do {
            local_c0 = local_180 + iVar35;
            iVar26 = local_194 + iVar35 % iVar4;
            iVar21 = iVar26;
            if ((bool)(char)this->_padding_ != bVar18) {
              iVar21 = local_c0;
              local_c0 = iVar26;
            }
            uVar23 = (uint)uVar34;
            uVar22 = 0;
            if ((int)uVar23 < (int)this->_padding_) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar38 = this->_padding_;
            *(ulonglong *)(lVar25 + lVar38) = CONCAT44(uStack_bc,local_c0);
            *(int *)(lVar25 + 8 + lVar38) = iVar21;
            local_168 = this->CapUVStart[local_1b8];
            iStack_164 = iVar4 + local_168;
            iVar26 = iVar35 % iVar4 + local_168;
            local_168 = local_168 + iVar35 + -1;
            iVar21 = iVar26;
            if ((bool)(char)this->_padding_ != bVar18) {
              iVar21 = local_168;
              local_168 = iVar26;
            }
            uVar22 = 0;
            if ((int)uVar23 < (int)this->_padding_) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar38 = this->_padding_;
            *(ulonglong *)(lVar38 + lVar25) = CONCAT44(iStack_164,local_168);
            *(int *)(lVar38 + 8 + lVar25) = iVar21;
            iStack_154 = this->CapNormalStart[local_1b8];
            local_158 = iVar35 + -1 + iStack_154;
            iVar26 = iVar35 % iVar4 + iStack_154;
            iStack_154 = iStack_154 + iVar4;
            iVar21 = iVar26;
            if ((bool)(char)this->_padding_ != bVar18) {
              iVar21 = local_158;
              local_158 = iVar26;
            }
            uVar22 = 0;
            if ((int)uVar23 < (int)this->_padding_) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar38 = this->_padding_;
            *(ulonglong *)(lVar38 + lVar25) = CONCAT44(iStack_154,local_158);
            *(int *)(lVar38 + 8 + lVar25) = iVar21;
            uVar22 = 0;
            if ((int)uVar23 < (int)this->_padding_) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar34 = (ulonglong)(uVar23 + 1);
            lVar25 = lVar25 + 0xc;
            *(uint *)(local_188 + this->_padding_) = local_190;
            local_188 = local_188 + 4;
            bVar19 = iVar35 < local_1a8;
            iVar35 = iVar35 + 1;
          } while (bVar19);
        }
        uVar23 = local_1b0;
        uVar34 = local_1b8;
        uVar24 = this->CapUVStart[local_1b8] + iVar4;
        local_e8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        TVar17._s_0 = local_e8;
        local_e8._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
        local_e8._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
        local_e0 = (float)local_e8 + param_12.field0_0x0._s_0.X;
        fStack_dc = local_e8._4_4_ + param_12.field0_0x0._s_0.Y;
        uVar22 = 0;
        if ((int)uVar24 < (int)this->_padding_) {
          uVar22 = ~uVar24 >> 0x1f;
        }
        local_e8 = TVar17._s_0;
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(ulonglong *)(this->_padding_ + (longlong)(int)uVar24 * 8) = CONCAT44(fStack_dc,local_e0);
        uVar22 = 0;
        if ((int)uVar24 < (int)this->_padding_) {
          uVar22 = ~uVar24 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(uint *)(this->_padding_ + (longlong)(int)uVar24 * 4) = uVar23;
        uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar23 = this->CapNormalStart[uVar34] + iVar4;
        uVar22 = 0;
        if ((int)uVar23 < (int)this->_padding_) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar25 = this->_padding_;
        lVar38 = (longlong)(int)uVar23;
        *(undefined8 *)(lVar25 + lVar38 * 0xc) = uVar12;
        *(undefined4 *)(lVar25 + 8 + lVar38 * 0xc) = uVar13;
        uVar22 = 0;
        if ((int)uVar23 < (int)this->_padding_) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar23 = 0;
        *(uint *)(this->_padding_ + lVar38 * 4) = local_1b0;
        uVar22 = local_1c0;
        if (0 < iVar4) {
          local_120 = 0;
          local_188 = 0;
          do {
            lVar25 = local_120;
            pTVar14 = local_res10;
            uVar22 = 0;
            if ((int)uVar23 < local_res10->ArrayNum) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar34 = local_1b8;
            pFVar36 = (((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                       &pTVar14->AllocatorInstance)->AllocatorInstance).Data;
            uVar24 = this->CapUVStart[local_1b8] + uVar23;
            uVar22 = 0;
            if ((int)uVar24 < (int)this->_padding_) {
              uVar22 = ~uVar24 >> 0x1f;
            }
            local_d8 = (float)*(double *)(pFVar36 + lVar25) * param_11.field0_0x0._s_0.X +
                       param_12.field0_0x0._s_0.X;
            fStack_d4 = (float)*(double *)(pFVar36 + lVar25 + 8) * param_11.field0_0x0._s_0.Y +
                        param_12.field0_0x0._s_0.Y;
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            *(ulonglong *)(this->_padding_ + (longlong)(int)uVar24 * 8) =
                 CONCAT44(fStack_d4,local_d8);
            uVar22 = 0;
            if ((int)uVar24 < (int)this->_padding_) {
              uVar22 = ~uVar24 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar35 = local_194 + uVar23;
            *(int *)(this->_padding_ + (longlong)(int)uVar24 * 4) = iVar35;
            uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            uVar24 = this->CapNormalStart[uVar34] + uVar23;
            uVar22 = 0;
            if ((int)uVar24 < (int)this->_padding_) {
              uVar22 = ~uVar24 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar38 = (longlong)(int)uVar24;
            lVar25 = this->_padding_;
            *(undefined8 *)(lVar25 + lVar38 * 0xc) = uVar12;
            *(undefined4 *)(lVar25 + 8 + lVar38 * 0xc) = uVar13;
            uVar22 = 0;
            if ((int)uVar24 < (int)this->_padding_) {
              uVar22 = ~uVar24 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar23 = uVar23 + 1;
            local_188 = local_188 + 1;
            *(int *)(this->_padding_ + lVar38 * 4) = iVar35;
            local_120 = local_120 + 0x10;
            uVar22 = local_1c0;
          } while ((int)uVar23 < iVar4);
        }
      }
      local_1ac = local_1ac + 1;
      local_1b8 = local_1b8 + 1;
    } while (local_1ac < 2);
  }
  if ((int)(param_8 + 2) <= param_7) {
    uVar34 = 0;
    bVar18 = !param_8;
    _param_8 = 0;
    iVar35 = param_7 + -1;
    if (bVar18) {
      iVar35 = param_7;
    }
    local_180 = param_4->ArrayNum + iVar35;
    local_res10 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                  CONCAT44(local_res10._4_4_,iVar35);
    iVar35 = local_res18->ArrayNum;
    if (iVar35 < 1) {
      param_14 = (TArrayView<float_const_,int> *)&DAT_ffffffff;
    }
    else {
      param_14 = (TArrayView<float_const_,int> *)(ulonglong)(uint)*local_res18->DataPtr;
    }
    local_1c0 = 0;
    iVar26 = local_1a8;
    local_198 = iVar35;
    if (0 < local_1a8) {
      local_1b8 = 0;
      uVar29 = uVar34;
      uVar30 = uVar34;
      do {
        uVar33 = 0;
        if (param_7 < 1) {
          uVar31 = (ulonglong)local_1bc;
          uVar22 = (uint)uVar29;
        }
        else {
          lVar25 = (longlong)(int)(uint)uVar29;
          local_1b0 = ~(uint)uVar30 >> 0x1f;
          uVar37 = uVar33;
          do {
            uVar23 = (uint)uVar37;
            uVar22 = 0;
            if ((int)uVar23 < local_1c8) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            fVar3 = *(float *)(local_1d0.Data + uVar33);
            uVar22 = 0;
            if ((int)uVar30 < local_1e0.ArrayNum) {
              uVar22 = local_1b0;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar24 = (uint)uVar29;
            fStack_cc = fVar3 * param_10.field0_0x0._s_0.Y;
            local_d0 = param_10.field0_0x0._s_0.X *
                       *(float *)(local_1e0.AllocatorInstance.Data + local_1b8);
            uVar22 = 0;
            if ((int)uVar24 < (int)this->_padding_) {
              uVar22 = ~uVar24 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            *(ulonglong *)(this->_padding_ + lVar25 * 8) = CONCAT44(fStack_cc,local_d0);
            uVar22 = 0;
            if ((int)uVar24 < (int)this->_padding_) {
              uVar22 = ~uVar24 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar31 = (ulonglong)(int)local_1bc;
            uVar30 = (ulonglong)local_1c0;
            uVar37 = (ulonglong)(uVar23 + 1);
            uVar29 = (ulonglong)(uVar24 + local_1bc);
            uVar33 = uVar33 + 4;
            *(uint *)(this->_padding_ + lVar25 * 4) =
                 ((int)uVar23 % (int)local_res10) * iVar4 + local_1c0;
            lVar25 = lVar25 + uVar31;
            uVar34 = local_1b8;
            iVar35 = local_198;
            iVar26 = local_1a8;
            uVar22 = _param_8;
          } while ((int)(uVar23 + 1) < param_7);
        }
        uVar23 = local_1c0;
        pTVar15 = local_res18;
        if ((uint)uVar30 == (uint)param_14) {
          if (iVar35 < 1) {
            param_14 = (TArrayView<float_const_,int> *)&DAT_ffffffff;
            _param_8 = uVar22;
          }
          else {
            if ((local_res18->ArrayNum < 1) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            param_14 = (TArrayView<float_const_,int> *)(ulonglong)(uint)*pTVar15->DataPtr;
            uVar34 = local_1b8;
            iVar35 = local_198;
            iVar26 = local_1a8;
          }
        }
        else {
          uVar24 = (uint)uVar30;
          if (1 < param_7) {
            iVar21 = uVar22 + (int)uVar31;
            local_1b0 = 1 - (int)uVar31;
            iVar35 = 0;
            do {
              iVar39 = local_1b0 + iVar21;
              local_158 = iVar21 - (int)uVar31;
              uVar22 = (iVar26 * iVar35 + uVar23) * 2;
              iVar26 = iVar21;
              if ((char)this->_padding_ != '\x01') {
                iVar26 = local_158;
                local_158 = iVar21;
              }
              uVar24 = 0;
              if ((int)uVar22 < (int)this->_padding_) {
                uVar24 = ~uVar22 >> 0x1f;
              }
              iStack_154 = iVar39;
              if (uVar24 == 0) {
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar18) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                uVar31 = (ulonglong)local_1bc;
              }
              uVar24 = uVar22 + 1;
              lVar25 = this->_padding_;
              *(ulonglong *)(lVar25 + (longlong)(int)uVar22 * 0xc) = CONCAT44(iStack_154,local_158);
              *(int *)(lVar25 + 8 + (longlong)(int)uVar22 * 0xc) = iVar26;
              local_168 = iVar21 + 1;
              iVar26 = iVar39;
              if ((char)this->_padding_ != '\x01') {
                iVar26 = local_168;
                local_168 = iVar39;
              }
              uVar22 = 0;
              if ((int)uVar24 < (int)this->_padding_) {
                uVar22 = ~uVar24 >> 0x1f;
              }
              iStack_164 = iVar21;
              if (uVar22 == 0) {
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar18) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                uVar31 = (ulonglong)local_1bc;
              }
              iVar21 = iVar21 + (int)uVar31;
              lVar25 = this->_padding_;
              *(ulonglong *)(lVar25 + (longlong)(int)uVar24 * 0xc) = CONCAT44(iStack_164,local_168);
              *(int *)(lVar25 + 8 + (longlong)(int)uVar24 * 0xc) = iVar26;
              iVar39 = iVar35 + 2;
              uVar34 = local_1b8;
              iVar26 = local_1a8;
              uVar24 = uVar23;
              iVar35 = iVar35 + 1;
            } while (iVar39 < param_7);
          }
          local_1c0 = uVar24 + 1;
          uVar30 = (ulonglong)local_1c0;
          uVar34 = uVar34 + 4;
          iVar35 = local_198;
          iVar26 = local_1a8;
          local_1b8 = uVar34;
        }
        _param_8 = _param_8 + 1;
        uVar29 = (ulonglong)_param_8;
      } while ((int)uVar30 < iVar26);
    }
    uVar34 = 0;
    if (this->bProfileCurveIsClosed != false) {
      iVar26 = 0;
    }
    if (0 < param_7) {
      lVar25 = (longlong)(int)_param_8;
      uVar29 = uVar34;
      do {
        uVar23 = (uint)uVar29;
        uVar22 = 0;
        if ((int)uVar23 < local_1c8) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        fVar3 = *(float *)(local_1d0.Data + uVar34);
        uVar22 = 0;
        if ((int)(local_1e0.ArrayNum - 1U) < local_1e0.ArrayNum) {
          uVar22 = ~(local_1e0.ArrayNum - 1U) >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        fStack_c4 = fVar3 * param_10.field0_0x0._s_0.Y;
        local_c8 = param_10.field0_0x0._s_0.X *
                   *(float *)(local_1e0.AllocatorInstance.Data +
                             (longlong)(local_1e0.ArrayNum + -1) * 4);
        uVar22 = 0;
        if ((int)_param_8 < (int)this->_padding_) {
          uVar22 = ~_param_8 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(ulonglong *)(this->_padding_ + lVar25 * 8) = CONCAT44(fStack_c4,local_c8);
        uVar22 = 0;
        if ((int)_param_8 < (int)this->_padding_) {
          uVar22 = ~_param_8 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar29 = (ulonglong)(uVar23 + 1);
        _param_8 = _param_8 + local_1bc;
        uVar34 = uVar34 + 4;
        *(int *)(this->_padding_ + lVar25 * 4) = ((int)uVar23 % (int)local_res10) * iVar4 + iVar26;
        lVar25 = lVar25 + (int)local_1bc;
      } while ((int)(uVar23 + 1) < param_7);
    }
    uVar22 = local_res20->ArrayNum;
    if ((int)uVar22 < 1) {
      uVar23 = 0xffffffff;
    }
    else {
      uVar23 = *local_res20->DataPtr;
    }
    local_res18 = (TArrayView<int_const_,int> *)CONCAT44(local_res18._4_4_,uVar23);
    local_1c0 = uVar22;
    if ((iVar4 <= (int)uVar23) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextDupVertIdx < XVerts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\SweepGenerator.cpp"
                            ,0x138,L""), bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar24 = 0;
    param_14 = (TArrayView<float_const_,int> *)0x0;
    _param_8 = 0;
    if (0 < iVar4) {
      do {
        iVar35 = 0;
        if (param_7 < 1) {
          iVar26 = (int)local_res10;
        }
        else {
          local_1b8 = 0;
          iVar21 = iVar35;
          iVar39 = iVar35;
          do {
            uVar23 = (iVar35 % local_180) * local_19c + _param_8;
            uVar22 = 0;
            if ((int)uVar23 < (int)this->_padding_) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar25 = this->_padding_;
            lVar38 = (longlong)(int)uVar23;
            *(undefined8 *)(lVar25 + lVar38 * 0xc) = 0;
            *(undefined4 *)(lVar25 + 8 + lVar38 * 0xc) = 0;
            uVar22 = 0;
            if ((int)uVar23 < (int)this->_padding_) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            *(uint *)(this->_padding_ + lVar38 * 4) =
                 (iVar39 % (int)local_res10) * iVar4 + (uint)param_14;
            iVar26 = (int)local_res10;
            if (iVar21 < param_4->ArrayNum) {
              if (iVar21 < 0) {
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar18) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              iVar26 = (int)local_res10;
              if (iVar39 == *(int *)(local_1b8 + (longlong)param_4->DataPtr)) {
                iVar35 = iVar35 + 1;
                uVar23 = _param_8 + (iVar35 % local_180) * local_19c;
                uVar22 = 0;
                if ((int)uVar23 < (int)this->_padding_) {
                  uVar22 = ~uVar23 >> 0x1f;
                }
                if ((uVar22 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar25 = this->_padding_;
                lVar38 = (longlong)(int)uVar23;
                *(undefined8 *)(lVar25 + lVar38 * 0xc) = 0;
                *(undefined4 *)(lVar25 + 8 + lVar38 * 0xc) = 0;
                uVar22 = 0;
                if ((int)uVar23 < (int)this->_padding_) {
                  uVar22 = ~uVar23 >> 0x1f;
                }
                if ((uVar22 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                iVar21 = iVar21 + 1;
                local_1b8 = local_1b8 + 4;
                *(uint *)(this->_padding_ + lVar38 * 4) =
                     (iVar39 % (int)local_res10) * iVar4 + (uint)param_14;
                iVar26 = (int)local_res10;
              }
            }
            iVar39 = iVar39 + 1;
            iVar35 = iVar35 + 1;
          } while (iVar39 < param_7);
          uVar22 = local_1c0;
          uVar23 = (uint)local_res18;
          uVar24 = (uint)param_14;
        }
        pTVar15 = local_res20;
        if (uVar24 == uVar23) {
          if ((int)uVar22 < 1) {
            uVar23 = 0xffffffff;
            local_res18 = (TArrayView<int_const_,int> *)CONCAT44(local_res18._4_4_,0xffffffff);
          }
          else {
            if ((local_res20->ArrayNum < 1) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar23 = *pTVar15->DataPtr;
            local_res18 = (TArrayView<int_const_,int> *)CONCAT44(local_res18._4_4_,uVar23);
            uVar22 = local_1c0;
            if (iVar4 <= (int)uVar23) {
              local_res18 = (TArrayView<int_const_,int> *)CONCAT44(local_res18._4_4_,uVar23);
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NextDupVertIdx < XVerts",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\SweepGenerator.cpp"
                                  ,0x14c,L"");
              uVar22 = local_1c0;
              if (bVar18) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
          }
        }
        else {
          if ((int)uVar24 < local_1a8) {
            uVar34 = (longlong)(int)(_param_8 + 1) % (longlong)local_19c;
            local_1b8 = CONCAT44(local_1b8._4_4_,(int)uVar34);
            iVar35 = (int)(uVar24 + 1) % iVar4;
            local_188 = CONCAT44(local_188._4_4_,iVar35);
            local_16c = 0;
            if (1 < param_7) {
              local_118 = (FScriptContainerElement *)0x0;
              uVar34 = uVar34 & 0xffffffff;
              local_1bc = 1;
              local_1b0 = local_128 - 1;
              local_198 = 1;
              local_120 = CONCAT44(local_120._4_4_,uVar24 - iVar35);
              local_1ac = iVar35;
              local_194 = _param_8;
              do {
                iVar39 = (int)uVar34;
                iVar21 = uVar24 + (local_1bc - 1) * local_1a8;
                iVar26 = (int)local_1bc % iVar26;
                uVar22 = iVar21 * 2;
                uVar23 = uVar22 + 1;
                local_190 = local_198 % local_180;
                iVar35 = iVar21;
                if (this->bPolygroupPerQuad == false) {
                  iVar35 = local_1b0 + local_1bc;
                }
                uVar24 = 0;
                if ((int)uVar22 < (int)this->_padding_) {
                  uVar24 = ~uVar22 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                *(int *)(this->_padding_ + (longlong)(int)uVar22 * 4) = iVar35;
                if (this->bPolygroupPerQuad == false) {
                  iVar21 = local_1b0 + local_1bc;
                }
                uVar24 = 0;
                if ((int)uVar23 < (int)this->_padding_) {
                  uVar24 = ~uVar23 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                iVar26 = iVar26 * iVar4;
                iVar28 = (uint)param_14 + iVar26;
                iStack_154 = local_1ac;
                *(int *)(this->_padding_ + (longlong)(int)uVar23 * 4) = iVar21;
                local_158 = (int)local_120 + local_1ac;
                iVar35 = iVar28;
                if ((char)this->_padding_ != '\x01') {
                  iVar35 = local_158;
                  local_158 = iVar28;
                }
                uVar24 = 0;
                if ((int)uVar22 < (int)this->_padding_) {
                  uVar24 = ~uVar22 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar25 = this->_padding_;
                *(ulonglong *)(lVar25 + (longlong)(int)uVar22 * 0xc) =
                     CONCAT44(iStack_154,local_158);
                *(int *)(lVar25 + 8 + (longlong)(int)uVar22 * 0xc) = iVar35;
                iVar26 = (int)local_188 + iVar26;
                iVar35 = local_1ac;
                local_168 = iVar26;
                if ((char)this->_padding_ != '\x01') {
                  local_168 = local_1ac;
                  iVar35 = iVar26;
                }
                uVar24 = 0;
                if ((int)uVar23 < (int)this->_padding_) {
                  uVar24 = ~uVar23 >> 0x1f;
                }
                iStack_164 = iVar28;
                if ((uVar24 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                iVar26 = local_194;
                lVar25 = this->_padding_;
                *(ulonglong *)(lVar25 + (longlong)(int)uVar23 * 0xc) =
                     CONCAT44(iStack_164,local_168);
                *(int *)(lVar25 + 8 + (longlong)(int)uVar23 * 0xc) = iVar35;
                local_190 = local_190 * local_19c;
                iVar21 = _param_8 + local_190;
                iVar35 = local_194;
                local_138 = iVar21;
                if ((char)this->_padding_ == '\x01') {
                  local_138 = local_194;
                  iVar35 = iVar21;
                }
                uVar24 = 0;
                if ((int)uVar22 < (int)this->_padding_) {
                  uVar24 = ~uVar22 >> 0x1f;
                }
                iStack_134 = iVar39;
                if ((uVar24 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar25 = this->_padding_;
                *(ulonglong *)(lVar25 + (longlong)(int)uVar22 * 0xc) =
                     CONCAT44(iStack_134,local_138);
                *(int *)(lVar25 + 8 + (longlong)(int)uVar22 * 0xc) = iVar35;
                local_148 = local_190 + (int)local_1b8;
                iVar35 = iVar39;
                if ((char)this->_padding_ != '\x01') {
                  iVar35 = local_148;
                  local_148 = iVar39;
                }
                uVar22 = 0;
                if ((int)uVar23 < (int)this->_padding_) {
                  uVar22 = ~uVar23 >> 0x1f;
                }
                iStack_144 = iVar21;
                if ((uVar22 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar25 = this->_padding_;
                *(ulonglong *)(lVar25 + (longlong)(int)uVar23 * 0xc) =
                     CONCAT44(iStack_144,local_148);
                *(int *)(lVar25 + 8 + (longlong)(int)uVar23 * 0xc) = iVar35;
                if (local_16c < param_4->ArrayNum) {
                  if ((local_16c < 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar18)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  if (local_1bc == *(uint *)(local_118 + (longlong)param_4->DataPtr)) {
                    iVar39 = iVar39 + local_19c;
                    local_16c = local_16c + 1;
                    iVar26 = iVar26 + local_19c;
                    local_198 = local_198 + 1;
                    local_118 = local_118 + 4;
                  }
                }
                local_1bc = local_1bc + 1;
                local_1ac = local_1ac + iVar4;
                local_198 = local_198 + 1;
                local_194 = iVar26 + local_19c;
                uVar34 = (ulonglong)(uint)(iVar39 + local_19c);
                iVar26 = (int)local_res10;
                uVar24 = (uint)param_14;
              } while ((int)local_1bc < param_7);
              uVar23 = (uint)local_res18;
            }
          }
          uVar24 = uVar24 + 1;
          param_14 = (TArrayView<float_const_,int> *)(ulonglong)uVar24;
          uVar22 = local_1c0;
        }
        _param_8 = _param_8 + 1;
      } while ((int)uVar24 < iVar4);
    }
  }
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  if (local_1d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data);
  }
  if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  return;
}

