// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 17

// FWN_BoidsNavSystem @ 14948cc60

FWN_BoidsNavSystem * __thiscall FWN_BoidsNavSystem::FWN_BoidsNavSystem(FWN_BoidsNavSystem *this)

{
  (this->Route).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Route).ArrayNum = 0;
  (this->Route).ArrayMax = 0;
  (this->RouteDistList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RouteDistList).ArrayNum = 0;
  (this->RouteDistList).ArrayMax = 0;
  return this;
}

// ~FWN_BoidsNavSystem @ 14948ffa0

void __thiscall FWN_BoidsNavSystem::~FWN_BoidsNavSystem(FWN_BoidsNavSystem *this)

{
  FScriptContainerElement *pFVar1;
  
  (this->Route).ArrayNum = 0;
  if ((this->Route).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,&(this->Route).ArrayMax);
  }
  (this->RouteDistList).ArrayNum = 0;
  if ((this->RouteDistList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RouteDistList).AllocatorInstance,0,&(this->RouteDistList).ArrayMax);
  }
  pFVar1 = (this->RouteDistList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Route).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 149491d00

void __thiscall `FWN_BoidsNavSystem::CalculateRoute'::__l7::<lambda_1>::operator()(void *this)

{
  double dVar1;
  longlong *plVar2;
  int *piVar3;
  int *piVar4;
  FWN_BoidsNavSystem *this_00;
  TArray<FWN_TileNode_*,TSizedDefaultAllocator<32>_> *pTVar5;
  double *pdVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FWN_TileNode *pFVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FDS_Predicate local_res8 [8];
  FWN_TileNode *local_res10;
  
  pFVar11 = FWN_BoidsNavSystem::FindTileNode
                      (*(FWN_BoidsNavSystem **)this,
                       *(TArray<FWN_TileNode_*,TSizedDefaultAllocator<32>_> **)((longlong)this + 8),
                       *(int **)((longlong)this + 0x10),*(int **)((longlong)this + 0x18));
  if (pFVar11 == (FWN_TileNode *)0x0) {
    plVar2 = (longlong *)**(longlong **)((longlong)this + 0x20);
    iVar14 = **(int **)((longlong)this + 0x10);
    if ((-1 < iVar14) && (iVar14 < (int)plVar2[6])) {
      iVar12 = *(int *)**(undefined8 **)((longlong)this + 0x28);
      iVar13 = **(int **)((longlong)this + 0x18);
      iVar9 = (iVar14 - iVar12) + 1;
      if (iVar12 == iVar14) {
        iVar9 = 2;
      }
      if ((-1 < iVar13) && (iVar13 < *(int *)((longlong)plVar2 + 0x34))) {
        iVar14 = ((int *)**(undefined8 **)((longlong)this + 0x28))[1];
        if (iVar14 != iVar13) {
          iVar9 = iVar9 + (iVar13 - iVar14);
        }
        uVar15 = iVar9 + (iVar14 * (int)plVar2[6] + iVar12) * 4;
        uVar10 = 0;
        if ((int)uVar15 < (int)plVar2[1]) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(char *)((longlong)(int)uVar15 + *plVar2) == '\x01') {
          piVar3 = *(int **)((longlong)this + 0x18);
          piVar4 = *(int **)((longlong)this + 0x10);
          iVar12 = **(int **)((longlong)this + 0x50) - *piVar3;
          iVar14 = -iVar12;
          if (iVar14 < 0) {
            iVar14 = iVar12;
          }
          iVar13 = **(int **)((longlong)this + 0x48) - *piVar4;
          iVar12 = -iVar13;
          if (iVar12 < 0) {
            iVar12 = iVar13;
          }
          this_00 = *(FWN_BoidsNavSystem **)this;
          if (iVar14 < iVar12) {
            iVar14 = iVar12;
          }
          pTVar5 = *(TArray<FWN_TileNode_*,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x60);
          **(double **)((longlong)this + 0x30) =
               (double)**(int **)((longlong)this + 0x40) + **(double **)((longlong)this + 0x38) +
               (double)((float)iVar14 + (float)iVar14);
          local_res10 = FWN_BoidsNavSystem::FindTileNode(this_00,pTVar5,piVar4,piVar3);
          if (local_res10 == (FWN_TileNode *)0x0) {
            local_res10 = ::operator_new(0x20);
            if (local_res10 == (FWN_TileNode *)0x0) {
              local_res10 = (FWN_TileNode *)0x0;
            }
            else {
              piVar3 = *(int **)((longlong)this + 0x18);
              pdVar6 = *(double **)((longlong)this + 0x30);
              iVar14 = **(int **)((longlong)this + 0x40);
              dVar1 = **(double **)((longlong)this + 0x38);
              piVar4 = (int *)**(undefined8 **)((longlong)this + 0x28);
              local_res10->X = **(int **)((longlong)this + 0x10);
              local_res10->Y = *piVar3;
              local_res10->ParentX = *piVar4;
              iVar12 = piVar4[1];
              local_res10->GCost = (double)iVar14 + dVar1;
              local_res10->ParentY = iVar12;
              local_res10->FCost = *pdVar6;
            }
            TArray<FWN_TileNode_*,TSizedDefaultAllocator<32>_>::HeapPush<FDS_Predicate>
                      (*(TArray<FWN_TileNode_*,TSizedDefaultAllocator<32>_> **)
                        ((longlong)this + 0x60),&local_res10,local_res8);
            return;
          }
          if (**(double **)((longlong)this + 0x30) < local_res10->FCost) {
            piVar3 = *(int **)((longlong)this + 0x40);
            local_res10->FCost = **(double **)((longlong)this + 0x30);
            local_res10->GCost = (double)*piVar3 + **(double **)((longlong)this + 0x38);
            local_res10->ParentX = *(int *)**(undefined8 **)((longlong)this + 0x28);
            local_res10->ParentY = *(int *)(**(longlong **)((longlong)this + 0x28) + 4);
          }
        }
      }
    }
  }
  return;
}

// AddRoute @ 149494dc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWN_BoidsNavSystem::AddRoute
          (FWN_BoidsNavSystem *this,FWN_NavInfo *param_1,float *param_2,TVector<double> *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 local_48 [32];
  undefined8 local_28;
  
  dVar2 = (param_1->BoxLocation).field0_0x0._s_0.X;
  dVar3 = (param_1->BoxExtent).field0_0x0._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.X;
  if ((dVar2 - dVar3 <= dVar4) && (dVar4 <= dVar3 + dVar2)) {
    dVar2 = (param_1->BoxLocation).field0_0x0._s_0.Y;
    dVar3 = (param_1->BoxExtent).field0_0x0._s_0.Y;
    dVar4 = (param_3->field0_0x0)._s_0.Y;
    if ((dVar2 - dVar3 <= dVar4) && (dVar4 <= dVar3 + dVar2)) {
      iVar12 = (this->Route).ArrayNum;
      piVar1 = &(this->Route).ArrayNum;
      if (iVar12 == 0) {
        return false;
      }
      if ((iVar12 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      pFVar5 = (this->Route).AllocatorInstance.Data;
      local_48._16_8_ = *(undefined8 *)pFVar5;
      local_48._24_8_ = *(undefined8 *)(pFVar5 + 8);
      local_28 = *(undefined8 *)(pFVar5 + 0x10);
      local_48._0_8_ = (FScriptContainerElement *)0x0;
      local_48._8_4_ = 0;
      local_48._12_4_ = 0;
      bVar7 = CalculateRoute(this,param_1,(TVector<double> *)(local_48 + 0x10),param_3,
                             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                             local_48);
      if (bVar7) {
        if ((int)local_48._8_4_ < 1) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
        }
        iVar9 = (local_48._8_4_ - (local_48._8_4_ + -1)) + -1;
        iVar12 = local_48._8_4_;
        if (iVar9 != 0) {
          memmove((FScriptContainerElement *)
                  (local_48._0_8_ + (longlong)(local_48._8_4_ + -1) * 0x18),
                  (FScriptContainerElement *)
                  (local_48._0_8_ + (longlong)(local_48._8_4_ + -1) * 0x18) + 0x18,
                  (longlong)iVar9 * 0x18);
          iVar12 = local_48._8_4_;
        }
        local_48._8_4_ = iVar12 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(ForAnyElementType *)local_48,iVar12 + -1,(int *)(local_48 + 0xc));
        if ((int)local_48._8_4_ < 1) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
        }
        iVar9 = (local_48._8_4_ - (local_48._8_4_ + -1)) + -1;
        iVar12 = local_48._8_4_;
        if (iVar9 != 0) {
          memmove((FScriptContainerElement *)
                  (local_48._0_8_ + (longlong)(local_48._8_4_ + -1) * 0x18),
                  (FScriptContainerElement *)
                  (local_48._0_8_ + (longlong)(local_48._8_4_ + -1) * 0x18) + 0x18,
                  (longlong)iVar9 * 0x18);
          iVar12 = local_48._8_4_;
        }
        local_48._8_4_ = iVar12 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(ForAnyElementType *)local_48,iVar12 + -1,(int *)(local_48 + 0xc));
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->Route,1,Default);
        while( true ) {
          if ((*piVar1 < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          pFVar5 = (this->Route).AllocatorInstance.Data;
          uVar10 = 0;
          if ((int)(local_48._8_4_ - 1) < (int)local_48._8_4_) {
            uVar10 = ~(local_48._8_4_ - 1) >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
          }
          lVar11 = (longlong)(int)local_48._8_4_;
          if (((*(double *)(local_48._0_8_ + lVar11 * 0x18 + -0x18) != *(double *)pFVar5) ||
              (*(double *)(local_48._0_8_ + lVar11 * 0x18 + -0x10) != *(double *)(pFVar5 + 8))) ||
             (*(double *)(local_48._0_8_ + lVar11 * 0x18 + -8) != *(double *)(pFVar5 + 0x10)))
          break;
          if ((*piVar1 < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          pFVar5 = (this->Route).AllocatorInstance.Data;
          if (*piVar1 + -1 != 0) {
            memmove(pFVar5,pFVar5 + 0x18,(longlong)(*piVar1 + -1) * 0x18);
          }
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,(ForAnyElementType *)this,*piVar1,&(this->Route).ArrayMax);
        }
        iVar12 = local_48._8_4_;
        if (this == (FWN_BoidsNavSystem *)local_48) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(const void*)this != (const void*)&Items",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x767,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          iVar12 = local_48._8_4_;
        }
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,iVar12,(ForAnyElementType *)this,piVar1,&(this->Route).ArrayMax);
        pFVar5 = (this->Route).AllocatorInstance.Data;
        memmove(pFVar5 + (longlong)iVar12 * 0x18,pFVar5,(longlong)iVar9 * 0x18);
        if (iVar12 != 0) {
          memcpy((this->Route).AllocatorInstance.Data,(void *)local_48._0_8_,(longlong)iVar12 * 0x18
                );
        }
        GetRouteDist(this);
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48._0_8_);
        return bVar7;
      }
      return bVar7;
    }
  }
  if (2 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  return false;
}

// CalculateRoute @ 149497200

bool __thiscall
FWN_BoidsNavSystem::CalculateRoute
          (FWN_BoidsNavSystem *this,FWN_NavInfo *param_1,TVector<double> *param_2,
          TVector<double> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  double dVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  TVector<double> *pTVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  ForAnyElementType FVar25;
  int iVar26;
  int *piVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  uint uVar35;
  FWN_NavInfo *local_res10;
  TVector<double> *local_res18;
  TVector<double> *local_res20;
  undefined1 local_1e8;
  undefined1 local_1e7 [3];
  int local_1e4;
  int local_1e0 [2];
  int *local_1d8;
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  double local_198;
  int *local_190;
  int *local_188;
  int *local_180;
  undefined8 local_178;
  TVector<double>_u_0 local_170;
  FWN_BoidsNavSystem *local_158;
  ForAnyElementType *local_150;
  int *local_148;
  int *local_140;
  FWN_NavInfo **local_138;
  int **local_130;
  double *local_128;
  undefined8 *local_120;
  int *local_118;
  int *local_110;
  int *local_108;
  int *local_100;
  ForAnyElementType *local_f8;
  undefined8 local_d8;
  TVector<double> local_d0 [6];
  
  local_19c = param_1->TileMapWidth;
  dVar33 = (param_1->BoxLocation).field0_0x0._s_0.X - (param_1->BoxExtent).field0_0x0._s_0.X;
  dVar34 = (param_1->BoxLocation).field0_0x0._s_0.Y - (param_1->BoxExtent).field0_0x0._s_0.Y;
  local_1a0 = param_1->TileSize;
  dVar8 = __real_3ff0000000000000 / (double)local_1a0;
  iVar24 = (int)(((param_2->field0_0x0)._s_0.X - dVar33) / (double)local_1a0);
  iVar26 = (int)(((param_2->field0_0x0)._s_0.Y - dVar34) * dVar8);
  local_1e0[0] = (int)(((param_3->field0_0x0)._s_0.X - dVar33) * dVar8);
  local_1e4 = (int)(((param_3->field0_0x0)._s_0.Y - dVar34) * dVar8);
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  local_1a8 = iVar24;
  local_1a4 = iVar26;
  bVar11 = CanGoDest(this,param_1,&local_1a8,&local_1a4,local_1e0,&local_1e4);
  if (!bVar11) {
    return false;
  }
  iVar20 = -(local_1e4 - iVar26);
  if (iVar20 < 0) {
    iVar20 = local_1e4 - iVar26;
  }
  iVar19 = -(local_1e0[0] - iVar24);
  if (iVar19 < 0) {
    iVar19 = local_1e0[0] - iVar24;
  }
  if (iVar20 < iVar19) {
    iVar20 = iVar19;
  }
  local_198 = (double)((float)iVar20 + (float)iVar20);
  local_1d8 = ::operator_new(0x20);
  if (local_1d8 == (int *)0x0) {
    local_1d8 = (int *)0x0;
  }
  else {
    local_1d8[1] = iVar26;
    local_1d8[3] = iVar26;
    local_1d8[4] = 0;
    local_1d8[5] = 0;
    *local_1d8 = iVar24;
    local_1d8[2] = iVar24;
    *(double *)(local_1d8 + 6) = local_198;
  }
  local_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b8 = 0;
  local_1d0.Data = (FScriptContainerElement *)0x0;
  local_1c8 = 0;
  uVar13 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_1d0,(int *)((longlong)&local_1c8 + 4));
  iVar24 = uVar13 + 1;
  local_1c8 = CONCAT44(local_1c8._4_4_,iVar24);
  *(int **)(local_1d0.Data + (longlong)(int)uVar13 * 8) = local_1d8;
  while (0 < (int)uVar13) {
    uVar23 = (ulonglong)uVar13;
    uVar13 = (int)(uVar13 - 1) / 2;
    lVar16 = *(longlong *)(local_1d0.Data + uVar23 * 8);
    dVar8 = *(double *)(*(longlong *)(local_1d0.Data + (longlong)(int)uVar13 * 8) + 0x18);
    pdVar1 = (double *)(lVar16 + 0x18);
    if (dVar8 < *pdVar1 || dVar8 == *pdVar1) break;
    *(longlong *)(local_1d0.Data + uVar23 * 8) =
         *(longlong *)(local_1d0.Data + (longlong)(int)uVar13 * 8);
    *(longlong *)(local_1d0.Data + (longlong)(int)uVar13 * 8) = lVar16;
  }
  while (iVar24 != 0) {
    if (iVar24 < 1) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      iVar24 = (int)local_1c8;
    }
    local_1d8 = *(int **)local_1d0.Data;
    if (iVar24 < 1) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      iVar24 = (int)local_1c8;
    }
    iVar26 = iVar24 + -1;
    if (1 < iVar26) {
      iVar26 = 1;
    }
    if (iVar26 != 0) {
      memmove(local_1d0.Data,local_1d0.Data + (longlong)(iVar24 - iVar26) * 8,(longlong)iVar26 << 3)
      ;
      iVar24 = (int)local_1c8;
    }
    local_1c8 = CONCAT44(local_1c8._4_4_,iVar24 + -1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&local_1d0,iVar24 + -1,(int *)((longlong)&local_1c8 + 4));
    piVar27 = (int *)0x0;
    if (1 < (int)local_1c8) {
      do {
        iVar24 = (int)piVar27;
        uVar35 = iVar24 * 2;
        uVar13 = uVar35 + 1;
        if ((int)(uVar35 + 2) < (int)local_1c8) {
          if (*(double *)(*(longlong *)(local_1d0.Data + (longlong)(int)uVar13 * 8) + 0x18) <=
              *(double *)(*(longlong *)(local_1d0.Data + (longlong)(int)uVar35 * 8 + 0x10) + 0x18)
              && *(double *)
                  (*(longlong *)(local_1d0.Data + (longlong)(int)uVar35 * 8 + 0x10) + 0x18) !=
                 *(double *)(*(longlong *)(local_1d0.Data + (longlong)(int)uVar13 * 8) + 0x18)) {
            uVar13 = uVar35;
          }
          uVar13 = uVar13 + 1;
        }
        piVar27 = (int *)(ulonglong)uVar13;
        lVar16 = *(longlong *)(local_1d0.Data + (longlong)iVar24 * 8);
        dVar8 = *(double *)(lVar16 + 0x18);
        pdVar1 = (double *)(*(longlong *)(local_1d0.Data + (longlong)(int)uVar13 * 8) + 0x18);
        if (dVar8 < *pdVar1 || dVar8 == *pdVar1) break;
        *(longlong *)(local_1d0.Data + (longlong)iVar24 * 8) =
             *(longlong *)(local_1d0.Data + (longlong)(int)uVar13 * 8);
        *(longlong *)(local_1d0.Data + (longlong)(int)uVar13 * 8) = lVar16;
      } while ((int)(uVar13 * 2 + 1) < (int)local_1c8);
    }
    iVar24 = (int)local_1b8;
    if ((int)local_1b8 == local_1b8._4_4_) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_1c0,(int *)((longlong)&local_1b8 + 4));
    }
    local_1b8 = CONCAT44(local_1b8._4_4_,iVar24 + 1);
    *(int **)(local_1c0.Data + (longlong)iVar24 * 8) = local_1d8;
    if ((*local_1d8 == local_1e0[0]) && (local_1d8[1] == local_1e4)) break;
    local_1b0 = *local_1d8 + -1;
    local_1ac = local_1d8[1];
    local_150 = &local_1c0;
    local_178 = *(undefined8 *)(local_1d8 + 4);
    local_148 = &local_1b0;
    local_140 = &local_1ac;
    local_138 = &local_res10;
    local_130 = &local_1d8;
    local_128 = &local_198;
    local_120 = &local_178;
    local_118 = &local_1a0;
    local_110 = local_1e0;
    local_108 = &local_1e4;
    local_100 = &local_19c;
    local_f8 = &local_1d0;
    local_158 = this;
    `FWN_BoidsNavSystem::CalculateRoute'::__l7::<lambda_1>::operator()(&local_158);
    local_1b0 = *local_1d8 + 1;
    local_1ac = local_1d8[1];
    `FWN_BoidsNavSystem::CalculateRoute'::__l7::<lambda_1>::operator()(&local_158);
    local_1b0 = *local_1d8;
    local_1ac = local_1d8[1] + -1;
    `FWN_BoidsNavSystem::CalculateRoute'::__l7::<lambda_1>::operator()(&local_158);
    local_1b0 = *local_1d8;
    local_1ac = local_1d8[1] + 1;
    `FWN_BoidsNavSystem::CalculateRoute'::__l7::<lambda_1>::operator()(&local_158);
    iVar24 = (int)local_1c8;
  }
  iVar24 = (int)local_1b8;
  uVar23 = (ulonglong)(int)local_1b8;
  pFVar2 = local_1c0.Data + uVar23 * 8;
  FVar25.Data = local_1c0.Data;
  while( true ) {
    if ((int)uVar23 != iVar24) {
      local_1e8 = 0;
      `TCheckedPointerIterator<FWN_TileNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1e8);
      uVar23 = local_1b8 & 0xffffffff;
    }
    if (FVar25.Data == pFVar2) break;
    piVar27 = *(int **)FVar25.Data;
    if ((*piVar27 == local_1e0[0]) && (piVar27[1] == local_1e4)) {
      local_1d8 = piVar27;
      if (piVar27 == (int *)0x0) {
LAB_149497d62:
        bVar11 = false;
      }
      else {
        piVar27 = &param_4->ArrayNum;
        piVar3 = &param_4->ArrayMax;
        *piVar27 = 0;
        local_180 = piVar3;
        if (param_4->ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&param_4->AllocatorInstance,0,piVar3);
        }
        dVar4 = __real_3fe0000000000000;
        iVar24 = local_1d8[2];
        iVar26 = local_1d8[3];
        iVar20 = local_res10->TileSize;
        dVar28 = (double)local_1e0[0] + __real_3fe0000000000000;
        dVar8 = (local_res10->BoxLocation).field0_0x0._s_0.X;
        dVar33 = (local_res10->BoxExtent).field0_0x0._s_0.X;
        dVar34 = (local_res10->BoxLocation).field0_0x0._s_0.Y;
        dVar30 = (local_res10->BoxExtent).field0_0x0._s_0.Y;
        iVar19 = *piVar27;
        dVar29 = (double)local_1e4 + __real_3fe0000000000000;
        if (iVar19 == *piVar3) {
          local_190 = piVar27;
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&param_4->AllocatorInstance,piVar3);
        }
        local_190 = &param_4->ArrayNum;
        *piVar27 = iVar19 + 1;
        lVar16 = (longlong)iVar19;
        pFVar2 = (param_4->AllocatorInstance).Data;
        *(double *)(pFVar2 + lVar16 * 0x18) = (dVar8 - dVar33) + dVar28 * (double)iVar20;
        *(double *)(pFVar2 + lVar16 * 0x18 + 8) = (dVar34 - dVar30) + dVar29 * (double)iVar20;
        *(undefined8 *)(pFVar2 + lVar16 * 0x18 + 0x10) = 0;
        iVar20 = *piVar27;
        dVar8 = (local_res20->field0_0x0)._s_0.X;
        dVar33 = (local_res20->field0_0x0)._s_0.Y;
        local_188 = piVar27;
        if (iVar20 == *piVar3) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&param_4->AllocatorInstance,piVar3);
          local_188 = local_190;
          local_180 = &param_4->ArrayMax;
        }
        lVar16 = (longlong)iVar20;
        *piVar27 = iVar20 + 1;
        pFVar2 = (param_4->AllocatorInstance).Data;
        *(double *)(pFVar2 + lVar16 * 0x18) = dVar8;
        *(double *)(pFVar2 + lVar16 * 0x18 + 8) = dVar33;
        *(undefined8 *)(pFVar2 + lVar16 * 0x18 + 0x10) = 0;
        fVar10 = __real_3fa66666;
        fVar9 = __real_3f000000;
        uVar13 = (uint)__xmm_80000000000000008000000000000000;
        uVar35 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        local_res20 = (TVector<double> *)
                      CONCAT44(local_res20._4_4_,((local_1e4 - iVar26) * 2 - iVar24) + local_1e0[0])
        ;
        local_190 = local_188;
        while ((iVar24 != local_1a8 || (iVar26 != local_1a4))) {
          iVar20 = (int)local_1b8;
          pFVar2 = local_1c0.Data + (longlong)(int)local_1b8 * 8;
          FVar25.Data = local_1c0.Data;
          while( true ) {
            if ((int)local_1b8 != iVar20) {
              local_1e7[0] = 0;
              `TCheckedPointerIterator<FWN_TileNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_1e7);
            }
            piVar3 = local_188;
            piVar27 = (int *)0x0;
            if ((FVar25.Data == pFVar2) ||
               ((piVar27 = *(int **)FVar25.Data, *piVar27 == iVar24 && (piVar27[1] == iVar26))))
            break;
            FVar25.Data = FVar25.Data + 8;
          }
          iVar26 = ((piVar27[1] - piVar27[3]) * 2 - piVar27[2]) + *piVar27;
          dVar8 = ((local_res10->BoxLocation).field0_0x0._s_0.X -
                  (local_res10->BoxExtent).field0_0x0._s_0.X) +
                  ((double)piVar27[2] + dVar4) * (double)local_res10->TileSize;
          uVar21 = *local_188 - 1;
          uVar14 = 0;
          if ((int)uVar21 < *local_188) {
            uVar14 = ~uVar21 >> 0x1f;
          }
          dVar33 = ((local_res10->BoxLocation).field0_0x0._s_0.Y -
                   (local_res10->BoxExtent).field0_0x0._s_0.Y) +
                   ((double)piVar27[3] + dVar4) * (double)local_res10->TileSize;
          local_1d8 = piVar27;
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
          piVar27 = local_180;
          pFVar2 = (param_4->AllocatorInstance).Data;
          iVar24 = *piVar3;
          local_d8 = *(undefined8 *)(pFVar2 + (longlong)iVar24 * 0x18 + -8);
          pFVar2 = pFVar2 + (longlong)iVar24 * 0x18 + -0x18;
          if ((iVar26 != (int)local_res20) &&
             (dVar30 = (double)CONCAT44((uint)((ulonglong)local_d8 >> 0x20) ^ uVar35,
                                        (uint)local_d8 ^ uVar13), dVar28 = dVar8 - *(double *)pFVar2
             , dVar34 = dVar33 - *(double *)(pFVar2 + 8), auVar31._0_8_ = dVar28 * dVar28,
             auVar31._8_8_ = 0, auVar32._8_8_ = 0,
             auVar32._0_8_ = dVar34 * dVar34 + auVar31._0_8_ + dVar30 * dVar30,
             auVar32 = sqrtpd(auVar31,auVar32), (double)((float)local_1a0 * fVar10) < auVar32._0_8_)
             ) {
            dVar34 = (local_res10->BoxLocation).field0_0x0._s_0.X;
            dVar30 = (local_res10->BoxExtent).field0_0x0._s_0.X;
            iVar20 = *local_1d8;
            iVar19 = local_res10->TileSize;
            iVar15 = (int)local_res20 / 2;
            iVar22 = (int)local_res20 % 2;
            iVar5 = local_1d8[1];
            dVar28 = (local_res10->BoxLocation).field0_0x0._s_0.Y;
            dVar29 = (local_res10->BoxExtent).field0_0x0._s_0.Y;
            if (iVar24 == *local_180) {
              iVar24 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&param_4->AllocatorInstance,local_180);
              *piVar3 = iVar24;
            }
            lVar16 = (longlong)iVar24;
            *piVar3 = iVar24 + 1;
            pFVar2 = (param_4->AllocatorInstance).Data;
            *(double *)(pFVar2 + lVar16 * 0x18) =
                 (dVar34 - dVar30) +
                 ((double)((float)(iVar22 - iVar26 % 2) * fVar9 + (float)iVar20) + dVar4) *
                 (double)iVar19;
            *(double *)(pFVar2 + lVar16 * 0x18 + 8) =
                 ((double)((float)(iVar15 - iVar26 / 2) * fVar9 + (float)iVar5) + dVar4) *
                 (double)iVar19 + (dVar28 - dVar29);
            *(undefined8 *)(pFVar2 + lVar16 * 0x18 + 0x10) = 0;
            iVar24 = *piVar3;
            if (iVar24 == *piVar27) {
              iVar24 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&param_4->AllocatorInstance,piVar27);
              *piVar3 = iVar24;
            }
            lVar16 = (longlong)iVar24;
            *piVar3 = iVar24 + 1;
            pFVar2 = (param_4->AllocatorInstance).Data;
            *(double *)(pFVar2 + lVar16 * 0x18) = dVar8;
            *(double *)(pFVar2 + lVar16 * 0x18 + 8) = dVar33;
            *(undefined8 *)(pFVar2 + lVar16 * 0x18 + 0x10) = 0;
          }
          iVar24 = local_1d8[2];
          local_res20 = (TVector<double> *)CONCAT44(local_res20._4_4_,iVar26);
          iVar26 = local_1d8[3];
        }
        uVar21 = param_4->ArrayNum - 1;
        uVar14 = 0;
        if ((int)uVar21 < param_4->ArrayNum) {
          uVar14 = ~uVar21 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        iVar24 = param_4->ArrayNum;
        lVar16 = (longlong)iVar24;
        pFVar2 = (param_4->AllocatorInstance).Data;
        dVar8 = (local_res18->field0_0x0)._s_0.X;
        dVar33 = (local_res18->field0_0x0)._s_0.Y;
        if (iVar24 == param_4->ArrayMax) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        lVar17 = (longlong)iVar24;
        param_4->ArrayNum = iVar24 + 1;
        pFVar6 = (param_4->AllocatorInstance).Data;
        *(double *)(pFVar6 + lVar17 * 0x18) = dVar8;
        *(double *)(pFVar6 + lVar17 * 0x18 + 8) = dVar33;
        *(undefined8 *)(pFVar6 + lVar17 * 0x18 + 0x10) = 0;
        local_170._s_0.X = dVar8 - *(double *)(pFVar2 + lVar16 * 0x18 + -0x18);
        local_170._s_0.Y = dVar33 - *(double *)(pFVar2 + lVar16 * 0x18 + -0x10);
        local_170._s_0.Z =
             (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(pFVar2 + lVar16 * 0x18 + -8) >> 0x20
                                    ) ^ uVar35,
                              (uint)*(undefined8 *)(pFVar2 + lVar16 * 0x18 + -8) ^ uVar13);
        pTVar18 = UE::Math::TVector<double>::GetSafeNormal
                            ((TVector<double> *)&local_170._s_0,local_d0,__real_3e45798ee0000000,
                             &UE::Math::TVector<double>::ZeroVector);
        dVar34 = (pTVar18->field0_0x0)._s_0.X;
        dVar30 = (pTVar18->field0_0x0)._s_0.Y;
        dVar4 = (pTVar18->field0_0x0)._s_0.Z;
        iVar24 = param_4->ArrayNum;
        if (iVar24 == param_4->ArrayMax) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        lVar16 = local_1c8;
        lVar17 = (longlong)iVar24;
        param_4->ArrayNum = iVar24 + 1;
        pFVar2 = (param_4->AllocatorInstance).Data;
        *(double *)(pFVar2 + lVar17 * 0x18) = dVar8 + dVar34;
        *(double *)(pFVar2 + lVar17 * 0x18 + 8) = dVar33 + dVar30;
        *(double *)(pFVar2 + lVar17 * 0x18 + 0x10) = dVar4;
        uVar13 = local_1c8._4_4_;
        local_1c8 = (ulonglong)local_1c8._4_4_ << 0x20;
        if ((lVar16 < 0) && (uVar13 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_1d0,0,(int *)((longlong)&local_1c8 + 4));
        }
        uVar23 = local_1b8;
        uVar13 = local_1b8._4_4_;
        local_1b8 = (ulonglong)local_1b8._4_4_ << 0x20;
        if (((longlong)uVar23 < 0) && (uVar13 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_1c0,0,(int *)((longlong)&local_1b8 + 4));
        }
        bVar11 = true;
      }
      if (local_1d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data);
      }
      if (local_1c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data);
      }
      return bVar11;
    }
    FVar25.Data = FVar25.Data + 8;
  }
  local_1d8 = (int *)0x0;
  goto LAB_149497d62;
}

// CanGoDest @ 149497e60

bool __thiscall
FWN_BoidsNavSystem::CanGoDest
          (FWN_BoidsNavSystem *this,FWN_NavInfo *param_1,int *param_2,int *param_3,int *param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  
  iVar1 = param_1->TileMapWidth;
  uVar10 = 0;
  iVar12 = -0x7fffffff;
  iVar2 = *param_3;
  iVar11 = -0x7fffffff;
  iVar14 = -1;
  iVar3 = *param_2;
  iVar4 = *param_5;
  iVar5 = *param_4;
  if ((param_1->RootTileList).ArrayNum < 1) {
    return true;
  }
  lVar15 = 0;
  do {
    uVar13 = ~uVar10 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar10 < (param_1->RootTileNumList).ArrayNum) {
      uVar9 = uVar13;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    iVar14 = iVar14 + *(int *)((param_1->RootTileNumList).AllocatorInstance.Data + lVar15);
    if ((iVar1 * iVar2 + iVar3 <= iVar14) && (iVar12 == -0x7fffffff)) {
      uVar9 = 0;
      if ((int)uVar10 < (param_1->RootTileList).ArrayNum) {
        uVar9 = uVar13;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      iVar12 = *(int *)((param_1->RootTileList).AllocatorInstance.Data + lVar15);
    }
    if ((iVar1 * iVar4 + iVar5 <= iVar14) && (iVar11 == -0x7fffffff)) {
      uVar9 = 0;
      if ((int)uVar10 < (param_1->RootTileList).ArrayNum) {
        uVar9 = uVar13;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      iVar11 = *(int *)((param_1->RootTileList).AllocatorInstance.Data + lVar15);
    }
    if ((iVar12 != -0x7fffffff) && (iVar11 != -0x7fffffff)) break;
    uVar10 = uVar10 + 1;
    lVar15 = lVar15 + 4;
  } while ((int)uVar10 < (param_1->RootTileList).ArrayNum);
  if ((iVar12 != -1) && (iVar11 != -1)) {
    return iVar12 == iVar11;
  }
  return false;
}

// CatmullRomSpline @ 1494986b0

TVector<double> * __thiscall
FWN_BoidsNavSystem::CatmullRomSpline
          (FWN_BoidsNavSystem *this,TVector<double> *__return_storage_ptr__,int *param_1,
          double *param_2)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  ForAnyElementType FVar15;
  ForAnyElementType FVar16;
  undefined8 uVar17;
  bool bVar18;
  int iVar19;
  TVector<double> *pTVar20;
  longlong lVar21;
  double *pdVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined4 uVar40;
  double local_res8;
  double local_res18;
  ForAnyElementType local_168;
  int local_160 [2];
  undefined1 local_158 [16];
  double local_148;
  undefined1 local_138 [16];
  double local_128;
  double local_120;
  double local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  double local_100;
  double local_e8;
  
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160[0] = 0;
  local_160[1] = 0;
  iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,4,&local_168,local_160,local_160 + 1);
  *(undefined8 *)(local_168.Data + (longlong)iVar19 * 8) = 0;
  *(undefined8 *)(local_168.Data + (longlong)iVar19 * 8 + 8) = 0;
  *(undefined8 *)(local_168.Data + (longlong)iVar19 * 8 + 0x10) = 0;
  *(undefined8 *)(local_168.Data + (longlong)iVar19 * 8 + 0x10 + 8) = 0;
  if ((local_160[0] < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  *(double *)local_168.Data = 0.0;
  uVar25 = *param_1;
  lVar26 = (longlong)(int)uVar25;
  uVar23 = 0;
  if ((int)uVar25 < (this->Route).ArrayNum) {
    uVar23 = ~uVar25 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  pFVar3 = (this->Route).AllocatorInstance.Data;
  uVar23 = *param_1 - 1;
  uVar25 = 0;
  if ((int)uVar23 < (this->Route).ArrayNum) {
    uVar25 = ~uVar23 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  lVar21 = (longlong)(int)uVar23;
  pFVar4 = (this->Route).AllocatorInstance.Data;
  auVar33._8_8_ = 0;
  auVar33._0_8_ =
       (*(double *)(pFVar3 + lVar26 * 0x18 + 8) - *(double *)(pFVar4 + lVar21 * 0x18 + 8)) *
       (*(double *)(pFVar3 + lVar26 * 0x18 + 8) - *(double *)(pFVar4 + lVar21 * 0x18 + 8)) +
       (*(double *)(pFVar3 + lVar26 * 0x18) - *(double *)(pFVar4 + lVar21 * 0x18)) *
       (*(double *)(pFVar3 + lVar26 * 0x18) - *(double *)(pFVar4 + lVar21 * 0x18)) +
       (*(double *)(pFVar3 + lVar26 * 0x18 + 0x10) - *(double *)(pFVar4 + lVar21 * 0x18 + 0x10)) *
       (*(double *)(pFVar3 + lVar26 * 0x18 + 0x10) - *(double *)(pFVar4 + lVar21 * 0x18 + 0x10));
  auVar33 = sqrtpd(unaff_XMM6,auVar33);
  if ((local_160[0] < 2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  *(double *)(local_168.Data + 8) = auVar33._0_8_;
  if (local_160[0] < 2) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      pTVar20 = (TVector<double> *)(*pcVar5)();
      return pTVar20;
    }
  }
  auVar34._8_8_ = 0;
  auVar34._0_8_ = *(double *)(local_168.Data + 8);
  auVar33 = sqrtpd(auVar34,auVar34);
  iVar19 = local_160[0];
  if (local_160[0] < 1) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      pTVar20 = (TVector<double> *)(*pcVar5)();
      return pTVar20;
    }
    iVar19 = local_160[0];
  }
  auVar35._8_8_ = auVar33._8_8_;
  auVar35._0_8_ = auVar33._0_8_ + *(double *)local_168.Data;
  if ((iVar19 < 2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  *(double *)(local_168.Data + 8) = auVar35._0_8_;
  uVar24 = *param_1 + 1;
  uVar23 = 0;
  uVar25 = uVar23;
  if ((int)uVar24 < (this->Route).ArrayNum) {
    uVar25 = ~uVar24 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  pFVar3 = (this->Route).AllocatorInstance.Data;
  lVar26 = (longlong)(int)uVar24;
  uVar25 = *param_1;
  lVar21 = (longlong)(int)uVar25;
  uVar24 = uVar23;
  if ((int)uVar25 < (this->Route).ArrayNum) {
    uVar24 = ~uVar25 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  pFVar4 = (this->Route).AllocatorInstance.Data;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (*(double *)(pFVar3 + lVar26 * 0x18 + 8) - *(double *)(pFVar4 + lVar21 * 0x18 + 8))
                 * (*(double *)(pFVar3 + lVar26 * 0x18 + 8) -
                   *(double *)(pFVar4 + lVar21 * 0x18 + 8)) +
                 (*(double *)(pFVar3 + lVar26 * 0x18) - *(double *)(pFVar4 + lVar21 * 0x18)) *
                 (*(double *)(pFVar3 + lVar26 * 0x18) - *(double *)(pFVar4 + lVar21 * 0x18)) +
                 (*(double *)(pFVar3 + lVar26 * 0x18 + 0x10) -
                 *(double *)(pFVar4 + lVar21 * 0x18 + 0x10)) *
                 (*(double *)(pFVar3 + lVar26 * 0x18 + 0x10) -
                 *(double *)(pFVar4 + lVar21 * 0x18 + 0x10));
  auVar33 = sqrtpd(auVar35,auVar6);
  if ((local_160[0] < 3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  *(double *)(local_168.Data + 0x10) = auVar33._0_8_;
  if (local_160[0] < 3) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      pTVar20 = (TVector<double> *)(*pcVar5)();
      return pTVar20;
    }
  }
  auVar36._8_8_ = 0;
  auVar36._0_8_ = *(double *)(local_168.Data + 0x10);
  auVar33 = sqrtpd(auVar36,auVar36);
  iVar19 = local_160[0];
  if (local_160[0] < 2) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      pTVar20 = (TVector<double> *)(*pcVar5)();
      return pTVar20;
    }
    iVar19 = local_160[0];
  }
  auVar37._8_8_ = auVar33._8_8_;
  auVar37._0_8_ = auVar33._0_8_ + *(double *)(local_168.Data + 8);
  if ((iVar19 < 3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  *(double *)(local_168.Data + 0x10) = auVar37._0_8_;
  uVar24 = *param_1 + 2;
  uVar25 = uVar23;
  if ((int)uVar24 < (this->Route).ArrayNum) {
    uVar25 = ~uVar24 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  pFVar3 = (this->Route).AllocatorInstance.Data;
  lVar26 = (longlong)(int)uVar24;
  uVar25 = *param_1 + 1;
  if ((int)uVar25 < (this->Route).ArrayNum) {
    uVar23 = ~uVar25 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  lVar21 = (longlong)(int)uVar25;
  pFVar4 = (this->Route).AllocatorInstance.Data;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (*(double *)(pFVar3 + lVar26 * 0x18 + 8) - *(double *)(pFVar4 + lVar21 * 0x18 + 8))
                 * (*(double *)(pFVar3 + lVar26 * 0x18 + 8) -
                   *(double *)(pFVar4 + lVar21 * 0x18 + 8)) +
                 (*(double *)(pFVar3 + lVar26 * 0x18) - *(double *)(pFVar4 + lVar21 * 0x18)) *
                 (*(double *)(pFVar3 + lVar26 * 0x18) - *(double *)(pFVar4 + lVar21 * 0x18)) +
                 (*(double *)(pFVar3 + lVar26 * 0x18 + 0x10) -
                 *(double *)(pFVar4 + lVar21 * 0x18 + 0x10)) *
                 (*(double *)(pFVar3 + lVar26 * 0x18 + 0x10) -
                 *(double *)(pFVar4 + lVar21 * 0x18 + 0x10));
  auVar33 = sqrtpd(auVar37,auVar7);
  if ((local_160[0] < 4) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  *(double *)(local_168.Data + 0x18) = auVar33._0_8_;
  if (local_160[0] < 4) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      pTVar20 = (TVector<double> *)(*pcVar5)();
      return pTVar20;
    }
  }
  auVar38._8_8_ = 0;
  auVar38._0_8_ = *(double *)(local_168.Data + 0x18);
  auVar33 = sqrtpd(auVar38,auVar38);
  iVar19 = local_160[0];
  if (local_160[0] < 3) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      pTVar20 = (TVector<double> *)(*pcVar5)();
      return pTVar20;
    }
    iVar19 = local_160[0];
  }
  dVar30 = *(double *)(local_168.Data + 0x10);
  if ((iVar19 < 4) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  *(double *)(local_168.Data + 0x18) = auVar33._0_8_ + dVar30;
  if ((local_160[0] < 2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  FVar15.Data = local_168.Data;
  if ((local_160[0] < 3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  dVar30 = __real_3ff0000000000000;
  dVar31 = (__real_3ff0000000000000 - *param_2) * *(double *)(local_168.Data + 0x10) +
           *param_2 * *(double *)(FVar15.Data + 8);
  if ((local_160[0] < 2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  FVar15.Data = local_168.Data;
  if ((local_160[0] < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  FVar16.Data = local_168.Data;
  uVar25 = *param_1;
  lVar26 = (longlong)(int)uVar25;
  uVar23 = 0;
  if ((int)uVar25 < (this->Route).ArrayNum) {
    uVar23 = ~uVar25 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  pFVar3 = (this->Route).AllocatorInstance.Data;
  uVar23 = *param_1 - 1;
  uVar25 = 0;
  if ((int)uVar23 < (this->Route).ArrayNum) {
    uVar25 = ~uVar23 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  dVar1 = *(double *)FVar16.Data;
  dVar2 = *(double *)(FVar15.Data + 8);
  lVar21 = (longlong)(int)uVar23;
  pFVar4 = (this->Route).AllocatorInstance.Data;
  local_res8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  auVar14._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  auVar14._0_8_ = local_res8;
  auVar14._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if (dVar2 == dVar1) {
    local_138._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_138._0_8_ = auVar14._8_8_;
    local_138._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar27 = dVar30 / (dVar2 - dVar1);
    dVar2 = (dVar2 - dVar31) * dVar27;
    dVar27 = (dVar31 - dVar1) * dVar27;
    local_res8 = dVar27 * *(double *)(pFVar3 + lVar26 * 0x18) +
                 dVar2 * *(double *)(pFVar4 + lVar21 * 0x18);
    uVar8 = dVar2 * *(double *)(pFVar4 + lVar21 * 0x18 + 0x10) +
            dVar27 * *(double *)(pFVar3 + lVar26 * 0x18 + 0x10);
    local_138._0_8_ =
         dVar2 * *(double *)(pFVar4 + lVar21 * 0x18 + 8) +
         dVar27 * *(double *)(pFVar3 + lVar26 * 0x18 + 8);
  }
  if ((local_160[0] < 3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  FVar15.Data = local_168.Data;
  if ((local_160[0] < 2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  FVar16.Data = local_168.Data;
  uVar23 = *param_1 + 1;
  uVar25 = 0;
  if ((int)uVar23 < (this->Route).ArrayNum) {
    uVar25 = ~uVar23 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  pFVar3 = (this->Route).AllocatorInstance.Data;
  lVar26 = (longlong)(int)uVar23;
  uVar25 = *param_1;
  lVar21 = (longlong)(int)uVar25;
  uVar23 = 0;
  if ((int)uVar25 < (this->Route).ArrayNum) {
    uVar23 = ~uVar25 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  dVar27 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  dVar1 = *(double *)(FVar16.Data + 8);
  dVar2 = *(double *)(FVar15.Data + 0x10);
  pFVar4 = (this->Route).AllocatorInstance.Data;
  if (dVar2 == dVar1) {
    local_res18 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar32 = dVar30 / (dVar2 - dVar1);
    dVar2 = (dVar2 - dVar31) * dVar32;
    dVar32 = (dVar31 - dVar1) * dVar32;
    uVar39 = 0;
    uVar40 = 0;
    local_res18 = dVar32 * *(double *)(pFVar3 + lVar26 * 0x18) +
                  dVar2 * *(double *)(pFVar4 + lVar21 * 0x18);
    dVar27 = dVar2 * *(double *)(pFVar4 + lVar21 * 0x18 + 8) +
             dVar32 * *(double *)(pFVar3 + lVar26 * 0x18 + 8);
    uVar9 = dVar2 * *(double *)(pFVar4 + lVar21 * 0x18 + 0x10) +
            dVar32 * *(double *)(pFVar3 + lVar26 * 0x18 + 0x10);
  }
  local_158._8_4_ = uVar39;
  local_158._0_8_ = dVar27;
  local_158._12_4_ = uVar40;
  if ((local_160[0] < 4) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  FVar15.Data = local_168.Data;
  if ((local_160[0] < 3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  FVar16.Data = local_168.Data;
  uVar23 = *param_1 + 2;
  uVar25 = 0;
  if ((int)uVar23 < (this->Route).ArrayNum) {
    uVar25 = ~uVar23 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  pFVar3 = (this->Route).AllocatorInstance.Data;
  lVar26 = (longlong)(int)uVar23;
  uVar23 = *param_1 + 1;
  uVar25 = 0;
  if ((int)uVar23 < (this->Route).ArrayNum) {
    uVar25 = ~uVar23 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  dVar32 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  dVar11 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  dVar1 = *(double *)(FVar16.Data + 0x10);
  dVar2 = *(double *)(FVar15.Data + 0x18);
  lVar21 = (longlong)(int)uVar23;
  pFVar4 = (this->Route).AllocatorInstance.Data;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (dVar2 != dVar1) {
    dVar28 = dVar30 / (dVar2 - dVar1);
    dVar2 = (dVar2 - dVar31) * dVar28;
    dVar28 = (dVar31 - dVar1) * dVar28;
    dVar11 = dVar28 * *(double *)(pFVar3 + lVar26 * 0x18) +
             dVar2 * *(double *)(pFVar4 + lVar21 * 0x18);
    dVar32 = dVar2 * *(double *)(pFVar4 + lVar21 * 0x18 + 8) +
             dVar28 * *(double *)(pFVar3 + lVar26 * 0x18 + 8);
    uVar12 = dVar2 * *(double *)(pFVar4 + lVar21 * 0x18 + 0x10) +
             dVar28 * *(double *)(pFVar3 + lVar26 * 0x18 + 0x10);
    uVar13 = local_e8;
  }
  local_e8 = (double)uVar13;
  if ((local_160[0] < 3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  FVar15.Data = local_168.Data;
  if ((local_160[0] < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  dVar28 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  dVar10 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  dVar1 = *(double *)(FVar15.Data + 0x10);
  dVar2 = *(double *)local_168.Data;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (dVar1 != dVar2) {
    dVar30 = dVar30 / (dVar1 - dVar2);
    dVar2 = (dVar31 - dVar2) * dVar30;
    dVar30 = (dVar1 - dVar31) * dVar30;
    dVar10 = dVar2 * local_res18 + dVar30 * local_res8;
    dVar28 = dVar2 * dVar27 + dVar30 * (double)local_138._0_8_;
    uVar13 = dVar2 * (double)uVar9 + dVar30 * (double)uVar8;
    uVar17 = local_e8;
  }
  local_e8 = (double)uVar17;
  if ((local_160[0] < 4) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  FVar15.Data = local_168.Data;
  if ((local_160[0] < 2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  dVar2 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  dVar27 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  dVar30 = *(double *)(FVar15.Data + 0x18);
  dVar1 = *(double *)(local_168.Data + 8);
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (dVar30 != dVar1) {
    dVar29 = __real_3ff0000000000000 / (dVar30 - dVar1);
    dVar1 = (dVar31 - dVar1) * dVar29;
    dVar29 = (dVar30 - dVar31) * dVar29;
    dVar27 = dVar1 * dVar11 + dVar29 * local_res18;
    dVar2 = dVar32 * dVar1 + dVar29 * (double)local_158._0_8_;
    uVar8 = dVar1 * (double)uVar12 + dVar29 * (double)uVar9;
    uVar17 = local_e8;
  }
  local_e8 = (double)uVar17;
  if ((local_160[0] < 3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  FVar15.Data = local_168.Data;
  if ((local_160[0] < 2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar5)();
    return pTVar20;
  }
  dVar30 = *(double *)(FVar15.Data + 0x10);
  dVar1 = *(double *)(local_168.Data + 8);
  if (dVar30 == dVar1) {
    local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_10c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_104 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    pdVar22 = (double *)&local_110;
    local_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pdVar22 = &local_128;
    dVar32 = __real_3ff0000000000000 / (dVar30 - dVar1);
    dVar30 = (dVar30 - dVar31) * dVar32;
    dVar32 = (dVar31 - dVar1) * dVar32;
    local_128 = dVar32 * dVar27 + dVar30 * dVar10;
    local_120 = dVar32 * dVar2 + dVar30 * dVar28;
    local_118 = dVar32 * (double)uVar8 + dVar30 * (double)uVar13;
  }
  dVar31 = pdVar22[1];
  dVar30 = pdVar22[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar22;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar31;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar30;
  FMemory::Free(local_168.Data);
  return __return_storage_ptr__;
}

// FindRoute @ 14949fb30

bool __thiscall
FWN_BoidsNavSystem::FindRoute
          (FWN_BoidsNavSystem *this,FWN_NavInfo *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = (param_1->BoxLocation).field0_0x0._s_0.X;
  dVar5 = (param_1->BoxExtent).field0_0x0._s_0.X;
  dVar6 = (param_2->field0_0x0)._s_0.X;
  dVar7 = dVar1 - dVar5;
  dVar4 = (param_1->BoxExtent).field0_0x0._s_0.Y;
  dVar2 = (param_1->BoxLocation).field0_0x0._s_0.Y;
  if ((dVar7 <= dVar6) && (dVar5 = dVar5 + dVar1, dVar6 <= dVar5)) {
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    dVar6 = dVar2 - dVar4;
    if (((dVar6 <= dVar1) &&
        (((dVar4 = dVar4 + dVar2, dVar1 <= dVar4 &&
          (dVar1 = (param_3->field0_0x0)._s_0.X, dVar7 <= dVar1)) && (dVar1 <= dVar5)))) &&
       ((dVar1 = (param_3->field0_0x0)._s_0.Y, dVar6 <= dVar1 && (dVar1 <= dVar4)))) {
      bVar3 = CalculateRoute(this,param_1,param_2,param_3,&this->Route);
      if (bVar3) {
        GetRouteDist(this);
        return true;
      }
    }
  }
  return false;
}

// FindTileNode @ 14949fc40

FWN_TileNode * __thiscall
FWN_BoidsNavSystem::FindTileNode
          (FWN_BoidsNavSystem *this,TArray<FWN_TileNode_*,TSizedDefaultAllocator<32>_> *param_1,
          int *param_2,int *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FWN_TileNode *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FWN_TileNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    pFVar3 = *(FWN_TileNode **)pFVar4;
    if ((pFVar3->X == *param_2) && (pFVar3->Y == *param_3)) {
      return pFVar3;
    }
    pFVar4 = pFVar4 + 8;
  }
  return (FWN_TileNode *)0x0;
}

// GetRouteDist @ 1494a2690

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FWN_BoidsNavSystem::GetRouteDist(FWN_BoidsNavSystem *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  int local_res8 [2];
  double local_res10;
  double local_98;
  double dStack_90;
  double local_88;
  TVector<double>_u_0 local_80 [4];
  
  (this->RouteDistList).ArrayNum = 0;
  if ((this->RouteDistList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RouteDistList).AllocatorInstance,0,&(this->RouteDistList).ArrayMax);
  }
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum
            (&this->RouteDistList,(this->Route).ArrayNum + -3,Default);
  if (((this->Route).ArrayNum < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar5 = __real_bc23d70a;
  fVar4 = __real_3f800000;
  pFVar1 = (this->Route).AllocatorInstance.Data;
  local_res8[0] = 1;
  local_98 = *(double *)(pFVar1 + 0x18);
  dStack_90 = *(double *)(pFVar1 + 0x20);
  local_88 = *(double *)(pFVar1 + 0x28);
  if (1 < (this->Route).ArrayNum + -2) {
    do {
      iVar6 = local_res8[0];
      fVar13 = 0.0;
      fVar12 = fVar4;
      do {
        local_res10 = (double)fVar12;
        CatmullRomSpline(this,(TVector<double> *)&local_80[0]._s_0,local_res8,&local_res10);
        fVar12 = fVar12 + fVar5;
        local_98 = (double)CONCAT44(local_80[0]._4_4_,local_80[0]._0_4_) - local_98;
        dVar3 = (double)local_80[0]._16_8_ - local_88;
        auVar10._0_8_ = local_98 * local_98;
        auVar10._8_8_ = 0;
        local_88 = (double)local_80[0]._16_8_;
        auVar11._8_8_ = 0;
        auVar11._0_8_ =
             ((double)local_80[0]._8_8_ - dStack_90) * ((double)local_80[0]._8_8_ - dStack_90) +
             auVar10._0_8_ + dVar3 * dVar3;
        auVar11 = sqrtpd(auVar10,auVar11);
        local_98 = (double)CONCAT44(local_80[0]._4_4_,local_80[0]._0_4_);
        dStack_90 = (double)local_80[0]._8_8_;
        fVar13 = (float)(auVar11._0_8_ + (double)fVar13);
      } while (0.0 <= fVar12);
      uVar9 = iVar6 - 1;
      uVar8 = 0;
      if ((int)uVar9 < (this->RouteDistList).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res8[0] = iVar6 + 1;
      *(double *)((this->RouteDistList).AllocatorInstance.Data + (longlong)(int)uVar9 * 8) =
           (double)fVar13;
    } while (local_res8[0] < (this->Route).ArrayNum + -2);
  }
  return;
}

// GetTotalDist @ 1494a32f0

double __thiscall FWN_BoidsNavSystem::GetTotalDist(FWN_BoidsNavSystem *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->RouteDistList).AllocatorInstance.Data;
  iVar2 = (this->RouteDistList).ArrayNum;
  dVar3 = 0.0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RouteDistList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    dVar3 = dVar3 + *(double *)pFVar4;
    pFVar4 = pFVar4 + 8;
  }
  return dVar3;
}

// GetTransformInRoute @ 1494a3370

void __thiscall
FWN_BoidsNavSystem::GetTransformInRoute
          (FWN_BoidsNavSystem *this,double *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  TVector<double>_u_0 *pTVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  int local_res8 [2];
  double local_res10 [2];
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  
  iVar2 = (this->RouteDistList).ArrayNum;
  dVar12 = *param_1;
  if (iVar2 != 0) {
    uVar6 = iVar2 - 1;
    if (-1 < (int)uVar6) {
      lVar9 = (longlong)(int)uVar6 * 8;
      do {
        uVar7 = ~uVar6 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar6 < (this->RouteDistList).ArrayNum) {
          uVar5 = uVar7;
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
        iVar2 = (this->RouteDistList).ArrayNum;
        pFVar1 = (this->RouteDistList).AllocatorInstance.Data + lVar9;
        if (dVar12 < *(double *)pFVar1 || dVar12 == *(double *)pFVar1) {
          uVar5 = 0;
          if ((int)uVar6 < iVar2) {
            uVar5 = uVar7;
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
          local_res10[0] =
               dVar12 / *(double *)
                         ((this->RouteDistList).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
          local_res8[0] = uVar6 + 1;
          CatmullRomSpline(this,(TVector<double> *)&local_b8._s_0,local_res8,local_res10);
          local_a0 = (param_2->Translation).XY.m128d_f64[0];
          dStack_98 = (param_2->Translation).XY.m128d_f64[1];
          local_90 = (param_2->Translation).ZW.m128d_f64[0];
          if (param_4) {
            local_b8._s_0.Z = local_90;
          }
          (param_2->Translation).XY.m128d_f64[0] = local_b8._s_0.X;
          (param_2->Translation).XY.m128d_f64[1] = local_b8._s_0.Y;
          (param_2->Translation).ZW.m128d_f64[0] = local_b8._s_0.Z;
          (param_2->Translation).ZW.m128d_f64[1] = 0.0;
          local_e8._s_0.X = local_b8._s_0.X - local_a0;
          local_e8._s_0.Y = local_b8._s_0.Y - dStack_98;
          local_e8._s_0.Z = local_b8._s_0.Z - local_90;
          dVar12 = local_e8._s_0.Y * local_e8._s_0.Y + local_e8._s_0.X * local_e8._s_0.X +
                   local_e8._s_0.Z * local_e8._s_0.Z;
          if (dVar12 != __real_3ff0000000000000) {
            if (dVar12 < __real_3e45798ee0000000) {
              pTVar8 = &local_e8;
              local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              goto LAB_1494a36c0;
            }
            dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
            local_e8._s_0.X = local_e8._s_0.X * dVar12;
            local_e8._s_0.Y = local_e8._s_0.Y * dVar12;
            local_e8._s_0.Z = local_e8._s_0.Z * dVar12;
          }
          pTVar8 = &local_e8;
          goto LAB_1494a36c0;
        }
        uVar5 = 0;
        if ((int)uVar6 < iVar2) {
          uVar5 = uVar7;
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
        dVar12 = dVar12 - *(double *)((this->RouteDistList).AllocatorInstance.Data + lVar9);
        lVar9 = lVar9 + -8;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
    local_70 = (param_2->Translation).XY.m128d_f64[0];
    dStack_68 = (param_2->Translation).XY.m128d_f64[1];
    local_88 = (param_3->field0_0x0)._s_0.X;
    dStack_80 = (param_3->field0_0x0)._s_0.Y;
    local_60 = (param_2->Translation).ZW.m128d_f64[0];
    local_78 = *(double *)((longlong)&param_3->field0_0x0 + 0x10);
    uVar10 = SUB84(local_78,0);
    uVar11 = (undefined4)((ulonglong)local_78 >> 0x20);
    if (param_4) {
      uVar10 = SUB84(local_60,0);
      uVar11 = (undefined4)((ulonglong)local_60 >> 0x20);
      local_78 = local_60;
    }
    (param_2->Translation).XY.m128d_f64[0] = local_88;
    (param_2->Translation).XY.m128d_f64[1] = dStack_80;
    (param_2->Translation).ZW.m128d_f64[0] = (double)CONCAT44(uVar11,uVar10);
    (param_2->Translation).ZW.m128d_f64[1] = 0.0;
    local_d0._s_0.X = local_88 - local_70;
    local_d0._s_0.Y = dStack_80 - dStack_68;
    local_d0._s_0.Z = local_78 - local_60;
    dVar12 = local_d0._s_0.Y * local_d0._s_0.Y + local_d0._s_0.X * local_d0._s_0.X +
             local_d0._s_0.Z * local_d0._s_0.Z;
    if (dVar12 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar12) {
        dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
        local_d0._s_0.X = local_d0._s_0.X * dVar12;
        local_d0._s_0.Y = local_d0._s_0.Y * dVar12;
        local_d0._s_0.Z = local_d0._s_0.Z * dVar12;
      }
      else {
        local_d0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_d0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    pTVar8 = &local_d0;
LAB_1494a36c0:
    RotateToDir(this,param_2,(TVector<double> *)&pTVar8->_s_0,param_4);
  }
  return;
}

// MoveDecision @ 1494a61a0

bool __thiscall
FWN_BoidsNavSystem::MoveDecision
          (FWN_BoidsNavSystem *this,FWN_NavInfo *param_1,int *param_2,int *param_3,int *param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar1 = *param_4;
  if ((-1 < iVar1) && (iVar1 < param_1->TileMapWidth)) {
    iVar2 = *param_2;
    iVar8 = (iVar1 - iVar2) + 1;
    if (iVar2 == iVar1) {
      iVar8 = 2;
    }
    iVar1 = *param_5;
    if ((-1 < iVar1) && (iVar1 < param_1->TileMapHeight)) {
      iVar3 = *param_3;
      if (iVar3 != iVar1) {
        iVar8 = iVar8 + (iVar1 - iVar3);
      }
      uVar9 = iVar8 + (iVar3 * param_1->TileMapWidth + iVar2) * 4;
      uVar7 = 0;
      if ((int)uVar9 < (param_1->TileGraph).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      return (bool)(param_1->TileGraph).AllocatorInstance.Data[(int)uVar9];
    }
  }
  return false;
}

// PointInNavInfo @ 1494a9200

bool __thiscall
FWN_BoidsNavSystem::PointInNavInfo
          (FWN_BoidsNavSystem *this,FWN_NavInfo *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->BoxLocation).field0_0x0._s_0.X;
  dVar2 = (param_1->BoxExtent).field0_0x0._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  if ((dVar1 - dVar2 <= dVar3) && (dVar3 <= dVar2 + dVar1)) {
    dVar1 = (param_1->BoxLocation).field0_0x0._s_0.Y;
    dVar2 = (param_1->BoxExtent).field0_0x0._s_0.Y;
    dVar3 = (param_2->field0_0x0)._s_0.Y;
    if ((dVar1 - dVar2 <= dVar3) && (dVar3 <= dVar2 + dVar1)) {
      return true;
    }
  }
  return false;
}

// RotateToDir @ 1494ac8e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FWN_BoidsNavSystem::RotateToDir
          (FWN_BoidsNavSystem *this,TTransform<double> *param_1,TVector<double> *param_2,
          bool param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TQuat<double> *pTVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float _X;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  double dStack_100;
  TRotator<double> local_f8;
  TVector<double>_u_0 local_d8;
  TQuat<double> local_b8;
  TQuat<double> local_98 [4];
  
  local_118._s_0.Z = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_100 = (param_1->Rotation).ZW.m128d_f64[1];
  local_118._s_0.X = (param_1->Rotation).XY.m128d_f64[0];
  local_118._s_0.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_d8._s_0.Z = 0.0;
  local_d8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_d8._s_0.Y = _UNK_150689518;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)&local_118._s_0,(TVector<double> *)&local_138._s_0,
             (TVector<double> *)&local_d8._s_0);
  dVar1 = __real_3e45798ee0000000;
  dVar10 = __real_3ff0000000000000;
  dVar2 = local_138._s_0.Y * local_138._s_0.Y + local_138._s_0.X * local_138._s_0.X;
  if (dVar2 == __real_3ff0000000000000) {
    uVar3 = local_138._s_0.X;
    uVar4 = local_138._s_0.Y;
    if (local_138._s_0.Z == 0.0) {
      uVar15 = SUB84(local_138._s_0.Z,0);
      uVar16 = (undefined4)((ulonglong)local_138._16_8_ >> 0x20);
    }
    else {
LAB_1494aca07:
      uVar15 = 0;
      uVar16 = 0;
    }
  }
  else {
    if (__real_3e45798ee0000000 <= dVar2) {
      uVar3 = local_138._s_0.X * (__real_3ff0000000000000 / SQRT(dVar2));
      uVar4 = local_138._s_0.Y * (__real_3ff0000000000000 / SQRT(dVar2));
      goto LAB_1494aca07;
    }
    uVar15 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar16 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
  local_118._s_0.X = (param_1->Rotation).XY.m128d_f64[0];
  local_118._s_0.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_118._s_0.Z = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_100 = (param_1->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator((TQuat<double> *)&local_118._s_0,&local_f8);
  fVar17 = __real_c2652ee0;
  _X = __real_bf800000;
  fVar9 = __real_3f800000;
  uVar12 = (param_2->field0_0x0)._s_0.X;
  uVar11 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (double)uVar11 * (double)uVar11 + (double)uVar12 * (double)uVar12;
  if (dVar2 == dVar10) {
    if ((param_2->field0_0x0)._s_0.Z == 0.0) {
      local_118._s_0.Z = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
      uVar13 = SUB84(local_118._s_0.Z,0);
      uVar14 = (undefined4)((ulonglong)local_118._s_0.Z >> 0x20);
      uVar11 = (param_2->field0_0x0)._s_0.Y;
      uVar12 = (param_2->field0_0x0)._s_0.X;
      goto LAB_1494acab7;
    }
  }
  else {
    if (dVar2 < dVar1) {
      local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar13 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar14 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      goto LAB_1494acab7;
    }
    dVar10 = dVar10 / SQRT(dVar2);
    uVar12 = (double)uVar12 * dVar10;
    uVar11 = (double)uVar11 * dVar10;
  }
  uVar13 = 0;
  uVar14 = 0;
LAB_1494acab7:
  fVar8 = __real_c2652ee0;
  if (0.0 < ((double)CONCAT44(uVar14,uVar13) * (double)uVar4 -
            (double)uVar11 * (double)CONCAT44(uVar16,uVar15)) *
            UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X +
            ((double)uVar12 * (double)CONCAT44(uVar16,uVar15) -
            (double)CONCAT44(uVar14,uVar13) * (double)uVar3) *
            UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y +
            ((double)uVar11 * (double)uVar3 - (double)uVar12 * (double)uVar4) *
            UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z) {
    fVar8 = __real_42652ee0;
  }
  fVar6 = (float)((double)uVar11 * (double)uVar4 + (double)uVar12 * (double)uVar3 +
                 (double)CONCAT44(uVar14,uVar13) * (double)CONCAT44(uVar16,uVar15));
  fVar7 = __real_bf800000;
  if ((__real_bf800000 <= fVar6) && (fVar7 = fVar6, __real_3f800000 <= fVar6)) {
    fVar7 = __real_3f800000;
  }
  fVar7 = acosf(fVar7);
  local_f8.Yaw = local_f8.Yaw + (double)(fVar7 * fVar8);
  if (!param_3) {
    pTVar5 = UE::Math::TRotator<double>::Quaternion(&local_f8,(TQuat<double> *)&local_118._s_0);
    local_138._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_138._s_0.Y = _UNK_15061cbc8;
    local_138._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (pTVar5,(TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_138._s_0);
    pTVar5 = UE::Math::TRotator<double>::Quaternion(&local_f8,local_98);
    local_118._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_118._s_0.Y = _UNK_150689518;
    local_118._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (pTVar5,(TVector<double> *)&local_138._s_0,(TVector<double> *)&local_118._s_0);
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    dVar10 = (param_2->field0_0x0)._s_0.X;
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    if ((dVar10 * local_138._s_0.Z - dVar2 * local_138._s_0.X) * local_d8._s_0.Y +
        (dVar2 * local_138._s_0.Y - dVar1 * local_138._s_0.Z) * local_d8._s_0.X +
        (dVar1 * local_138._s_0.X - dVar10 * local_138._s_0.Y) * local_d8._s_0.Z <= 0.0) {
      fVar17 = __real_42652ee0;
    }
    fVar8 = (float)(dVar10 * local_138._s_0.X + dVar1 * local_138._s_0.Y + dVar2 * local_138._s_0.Z)
    ;
    if ((_X <= fVar8) && (_X = fVar8, fVar9 <= fVar8)) {
      _X = fVar9;
    }
    fVar9 = acosf(_X);
    local_f8.Pitch = local_f8.Pitch + (double)(fVar9 * fVar17);
  }
  local_f8.Roll = 0.0;
  UE::Math::TRotator<double>::Quaternion(&local_f8,&local_b8);
  (param_1->Rotation).XY.m128d_f64[0] = local_b8.X;
  (param_1->Rotation).XY.m128d_f64[1] = local_b8.Y;
  (param_1->Rotation).ZW.m128d_f64[0] = local_b8.Z;
  (param_1->Rotation).ZW.m128d_f64[1] = local_b8.W;
  return;
}

// SetRoute @ 1494ad6a0

void __thiscall
FWN_BoidsNavSystem::SetRoute
          (FWN_BoidsNavSystem *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->Route).ArrayMax;
  (this->Route).ArrayNum = 0;
  if ((this->Route).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  if (this != (FWN_BoidsNavSystem *)param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    (this->Route).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((this->Route).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0x18);
      }
    }
  }
  GetRouteDist(this);
  return;
}

// TileToWorldPos @ 1494ae6d0

TVector<double> * __thiscall
FWN_BoidsNavSystem::TileToWorldPos
          (FWN_BoidsNavSystem *this,TVector<double> *__return_storage_ptr__,FWN_NavInfo *param_1,
          double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = *param_2 + __real_3fe0000000000000;
  iVar5 = param_1->TileSize;
  dVar1 = (param_1->BoxLocation).field0_0x0._s_0.X;
  dVar2 = (param_1->BoxExtent).field0_0x0._s_0.X;
  dVar3 = (param_1->BoxLocation).field0_0x0._s_0.Y;
  dVar4 = (param_1->BoxExtent).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  dVar7 = *param_3 + __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar1 - dVar2) + dVar6 * (double)iVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar3 - dVar4) + dVar7 * (double)iVar5;
  return __return_storage_ptr__;
}

