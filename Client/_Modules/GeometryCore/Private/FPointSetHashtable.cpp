// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// Build @ 1435f24e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FPointSetHashtable::Build
          (FPointSetHashtable *this,double param_1,TVector<double> *param_2)

{
  TPointSetAdapter<double> *pTVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  ForAnyElementType *pFVar13;
  longlong *plVar14;
  longlong lVar15;
  int *piVar16;
  undefined1 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStackY_1a8 [32];
  uint local_158 [2];
  int local_150;
  int local_14c;
  int local_148;
  undefined4 local_140 [2];
  uint local_138;
  ForAnyElementType *local_130;
  TPairInitializer<UE::Geometry::FVector3i_const_&,TArray<int,TSizedDefaultAllocator<32>_>_*_const_&>
  local_128;
  ForAnyElementType **local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  void *local_78;
  undefined4 local_70;
  FVector3i_u_0 local_68 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar6 = param_1 < __real_3e45798ee2308c3a;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = dVar5;
  dStack_c8 = (param_2->field0_0x0)._s_0.Z;
  (this->Origin).field0_0x0._s_0.Z = dStack_c8;
  dStack_d8 = (this->Origin).field0_0x0._s_0.X;
  dStack_d0 = (this->Origin).field0_0x0._s_0.Y;
  this->CellSize = param_1;
  local_e0 = param_1;
  if ((bVar6) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2954325157570674525>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\GridIndexing3.h"
                         ,0xa3,"CellSize >= TMathUtil<RealType>::ZeroTolerance"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_100 = 0x80000001;
  uStack_fc = 0x80000001;
  (this->GridIndexer).CellSize = local_e0;
  (this->GridIndexer).Origin.field0_0x0._s_0.X = dStack_d8;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_110 = ___xmm_800000017fffffff7fffffff7fffffff;
  uStack_108 = _UNK_150a9e658;
  local_b8._8_8_ = 0;
  local_68[0]._0_8_ = ___xmm_800000017fffffff7fffffff7fffffff;
  local_68._8_8_ = _UNK_150a9e658;
  local_68[1]._4_8_ = 0x8000000180000001;
  (this->GridIndexer).Origin.field0_0x0._s_0.Y = dStack_d0;
  (this->GridIndexer).Origin.field0_0x0._s_0.Z = dStack_c8;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  TSparseGrid3<TArray<int,TSizedDefaultAllocator<32>_>_>::operator=
            (&this->Grid,(TSparseGrid3<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_b8);
  TSparseGrid3<TArray<int,TSizedDefaultAllocator<32>_>_>::FreeAll
            ((TSparseGrid3<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_b8);
  local_70 = 0;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  iVar8 = SUB84(local_b8._8_8_,4);
  local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
  }
  local_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  pTVar1 = this->Points;
  Core::Private::Function::CheckCallable(*(void **)&pTVar1->MaxPointID);
  plVar2 = *(longlong **)&(pTVar1->MaxPointID).field_0x28;
  pcVar4 = *(code **)&pTVar1->MaxPointID;
  plVar14 = (longlong *)&(pTVar1->MaxPointID).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar14 = plVar2;
  }
  uVar12 = (**(code **)(*plVar14 + 8))();
  iVar8 = (*pcVar4)(uVar12);
  dVar5 = __real_3ff0000000000000;
  local_158[0] = 0;
  pFVar13 = (ForAnyElementType *)0x0;
  if (0 < iVar8) {
    do {
      pTVar1 = this->Points;
      local_140[0] = SUB84(pFVar13,0);
      Core::Private::Function::CheckCallable(*(void **)&pTVar1->IsPoint);
      plVar2 = *(longlong **)&(pTVar1->IsPoint).field_0x28;
      pcVar4 = *(code **)&pTVar1->IsPoint;
      plVar14 = (longlong *)&(pTVar1->IsPoint).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar14 = plVar2;
      }
      uVar12 = (**(code **)(*plVar14 + 8))();
      cVar7 = (*pcVar4)(uVar12,local_140);
      if (cVar7 != '\0') {
        pTVar1 = this->Points;
        local_138 = local_158[0];
        Core::Private::Function::CheckCallable(*(void **)&pTVar1->GetPoint);
        plVar2 = *(longlong **)&(pTVar1->GetPoint).field_0x28;
        pcVar4 = *(code **)&pTVar1->GetPoint;
        plVar14 = (longlong *)&(pTVar1->GetPoint).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar14 = plVar2;
        }
        uVar12 = (**(code **)(*plVar14 + 8))();
        uVar9 = (*pcVar4)(&local_f8,uVar12);
        auVar20._0_8_ = dVar5 / (this->GridIndexer).CellSize;
        auVar18._0_8_ = (local_f8 - (this->GridIndexer).Origin.field0_0x0._s_0.X) * auVar20._0_8_;
        lVar15 = (longlong)auVar18._0_8_;
        if ((lVar15 != -0x8000000000000000) && ((double)lVar15 != auVar18._0_8_)) {
          auVar18._8_8_ = auVar18._0_8_;
          uVar10 = movmskpd(uVar9,auVar18);
          auVar18._0_8_ = (double)(longlong)(lVar15 - (ulonglong)(uVar10 & 1));
        }
        local_150 = (int)auVar18._0_8_;
        auVar19._0_8_ = (local_f0 - (this->GridIndexer).Origin.field0_0x0._s_0.Y) * auVar20._0_8_;
        lVar15 = (longlong)auVar19._0_8_;
        if ((lVar15 != -0x8000000000000000) && ((double)lVar15 != auVar19._0_8_)) {
          auVar19._8_8_ = auVar19._0_8_;
          uVar10 = movmskpd(local_150,auVar19);
          auVar19._0_8_ = (double)(longlong)(lVar15 - (ulonglong)(uVar10 & 1));
        }
        local_14c = (int)auVar19._0_8_;
        auVar20._0_8_ = (local_e8 - (this->GridIndexer).Origin.field0_0x0._s_0.Z) * auVar20._0_8_;
        lVar15 = (longlong)auVar20._0_8_;
        if ((lVar15 != -0x8000000000000000) && ((double)lVar15 != auVar20._0_8_)) {
          auVar20._8_8_ = auVar20._0_8_;
          uVar10 = movmskpd(local_14c,auVar20);
          auVar20._0_8_ = (double)(longlong)(lVar15 - (ulonglong)(uVar10 & 1));
        }
        local_148 = (int)auVar20._0_8_;
        uVar10 = FCrc::MemCrc_DEPRECATED(&local_150,0xc,0);
        if (*(int *)&(this->Grid).Elements.field_0x8 != *(int *)&(this->Grid).Elements.field_0x34) {
          puVar3 = *(undefined1 **)&(this->Grid).Elements.field_0x40;
          puVar17 = &(this->Grid).Elements.field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar17 = puVar3;
          }
          iVar11 = *(int *)(puVar17 +
                           (ulonglong)(*(int *)&(this->Grid).Elements.field_0x48 - 1U & uVar10) * 4)
          ;
          if (iVar11 != -1) {
            do {
              piVar16 = (int *)((longlong)iVar11 * 0x20 + *(longlong *)&(this->Grid).Elements);
              if (((*piVar16 == local_150) && (piVar16[1] == local_14c)) &&
                 (piVar16[2] == local_148)) {
                if (((iVar11 != -1) && (piVar16 != (int *)0x0)) &&
                   (pFVar13 = *(ForAnyElementType **)(piVar16 + 4),
                   *(ForAnyElementType **)(piVar16 + 4) != (ForAnyElementType *)0x0))
                goto LAB_1435f2971;
                break;
              }
              iVar11 = piVar16[6];
            } while (iVar11 != -1);
          }
        }
        pFVar13 = ::operator_new(0x10);
        local_130 = (ForAnyElementType *)0x0;
        if (pFVar13 != (ForAnyElementType *)0x0) {
          pFVar13->Data = (FScriptContainerElement *)0x0;
          pFVar13[1].Data = (FScriptContainerElement *)0x0;
          local_130 = pFVar13;
        }
        local_128.Value = (TArray<int,TSizedDefaultAllocator<32>_> **)&local_150;
        local_118 = &local_130;
        TSet<TTuple<UE::Geometry::FVector3i,TArray<int,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,TArray<int,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,TArray<int,TSizedDefaultAllocator<32>_>_*_const_&>_>
                  ((TSet<TTuple<UE::Geometry::FVector3i,TArray<int,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,TArray<int,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                    *)&this->Grid,&local_128,(bool *)&local_128.Value);
        if (local_150 < (this->Grid).Bounds.Min.field0_0x0._s_0.X) {
          (this->Grid).Bounds.Min.field0_0x0._s_0.X = local_150;
        }
        if ((this->Grid).Bounds.Max.field0_0x0._s_0.X < local_150) {
          (this->Grid).Bounds.Max.field0_0x0._s_0.X = local_150;
        }
        if (local_14c < (this->Grid).Bounds.Min.field0_0x0._s_0.Y) {
          (this->Grid).Bounds.Min.field0_0x0._s_0.Y = local_14c;
        }
        if ((this->Grid).Bounds.Max.field0_0x0._s_0.Y < local_14c) {
          (this->Grid).Bounds.Max.field0_0x0._s_0.Y = local_14c;
        }
        if (local_148 < (this->Grid).Bounds.Min.field0_0x0._s_0.Z) {
          (this->Grid).Bounds.Min.field0_0x0._s_0.Z = local_148;
        }
        pFVar13 = local_130;
        if ((this->Grid).Bounds.Max.field0_0x0._s_0.Z < local_148) {
          (this->Grid).Bounds.Max.field0_0x0._s_0.Z = local_148;
        }
LAB_1435f2971:
        if (((pFVar13->Data <= (FScriptContainerElement *)local_158) &&
            ((FScriptContainerElement *)local_158 <
             pFVar13->Data + (longlong)*(int *)((longlong)&pFVar13[1].Data + 4) * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = *(int *)&pFVar13[1].Data;
        piVar16 = (int *)((longlong)&pFVar13[1].Data + 4);
        if (iVar11 == *piVar16) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,pFVar13,piVar16);
        }
        *(int *)&pFVar13[1].Data = iVar11 + 1;
        *(uint *)(pFVar13->Data + (longlong)iVar11 * 4) = local_158[0];
      }
      local_158[0] = local_158[0] + 1;
      pFVar13 = (ForAnyElementType *)(ulonglong)local_158[0];
    } while ((int)local_158[0] < iVar8);
  }
  return;
}

// FindPointsInBall @ 1435fe190

bool __thiscall
UE::Geometry::FPointSetHashtable::FindPointsInBall
          (FPointSetHashtable *this,TVector<double> *param_1,double param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  TPointSetAdapter<double> *pTVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  int *piVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  FVector3i *pFVar19;
  undefined1 *puVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 local_res18 [8];
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined4 local_140 [2];
  FVector3i_u_0 local_138;
  int local_128;
  int local_124;
  int local_120;
  undefined4 local_118 [2];
  undefined4 local_110;
  undefined4 local_108 [2];
  undefined4 local_100;
  FVector3i *local_f8;
  undefined8 local_f0;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  
  dVar28 = this->CellSize;
  dVar7 = dVar28 * __real_3fe0000000000000;
  TShiftGridIndexer3<double>::ToGrid(&this->GridIndexer,(FVector3i *)&local_138._s_0,param_1);
  dVar31 = (this->GridIndexer).CellSize;
  dVar29 = (double)local_138._s_0.X * dVar31 + (this->GridIndexer).Origin.field0_0x0._s_0.X +
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar7;
  dVar30 = (double)local_138._s_0.Y * dVar31 + (this->GridIndexer).Origin.field0_0x0._s_0.Y +
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar7;
  dVar31 = (double)local_138._s_0.Z * dVar31 + (this->GridIndexer).Origin.field0_0x0._s_0.Z +
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * dVar7;
  if ((dVar28 < param_2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueryRadius <= CellSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\PointSetHashTable.cpp"
                         ,0x28,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  uVar12 = FCrc::MemCrc_DEPRECATED(&local_138,0xc,0);
  if (*(int *)&(this->Grid).Elements.field_0x8 != *(int *)&(this->Grid).Elements.field_0x34) {
    puVar18 = *(undefined1 **)&(this->Grid).Elements.field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->Grid).Elements.field_0x38;
    }
    iVar22 = *(int *)(puVar18 +
                     (ulonglong)(*(int *)&(this->Grid).Elements.field_0x48 - 1U & uVar12) * 4);
    if (iVar22 != -1) {
      do {
        piVar16 = (int *)((longlong)iVar22 * 0x20 + *(longlong *)&(this->Grid).Elements);
        if (((*piVar16 == local_138._s_0.X) && (piVar16[1] == local_138._s_0.Y)) &&
           (piVar16[2] == local_138._s_0.Z)) {
          if (((iVar22 != -1) && (piVar16 != (int *)0x0)) &&
             (puVar2 = *(undefined8 **)(piVar16 + 4), puVar2 != (undefined8 *)0x0)) {
            puVar25 = (undefined4 *)*puVar2;
            iVar22 = *(int *)(puVar2 + 1);
            puVar1 = puVar25 + iVar22;
            while( true ) {
              if (*(int *)(puVar2 + 1) != iVar22) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res18);
              }
              if (puVar25 == puVar1) break;
              local_144 = *puVar25;
              pTVar3 = this->Points;
              local_118[0] = local_144;
              Core::Private::Function::CheckCallable(*(void **)&pTVar3->IsPoint);
              plVar4 = *(longlong **)&(pTVar3->IsPoint).field_0x28;
              pcVar6 = *(code **)&pTVar3->IsPoint;
              plVar17 = (longlong *)&(pTVar3->IsPoint).field_0x10;
              if (plVar4 != (longlong *)0x0) {
                plVar17 = plVar4;
              }
              uVar15 = (**(code **)(*plVar17 + 8))();
              cVar11 = (*pcVar6)(uVar15,local_118);
              if (cVar11 != '\0') {
                local_110 = local_144;
                pTVar3 = this->Points;
                Core::Private::Function::CheckCallable(*(void **)&pTVar3->GetPoint);
                plVar4 = *(longlong **)&(pTVar3->GetPoint).field_0x28;
                pcVar6 = *(code **)&pTVar3->GetPoint;
                plVar17 = (longlong *)&(pTVar3->GetPoint).field_0x10;
                if (plVar4 != (longlong *)0x0) {
                  plVar17 = plVar4;
                }
                uVar15 = (**(code **)(*plVar17 + 8))();
                (*pcVar6)(&local_e0,uVar15);
                dVar27 = local_e0 - (param_1->field0_0x0)._s_0.X;
                dVar28 = local_d8 - (param_1->field0_0x0)._s_0.Y;
                dVar26 = local_d0 - (param_1->field0_0x0)._s_0.Z;
                if (dVar27 * dVar27 + dVar28 * dVar28 + dVar26 * dVar26 < param_2 * param_2) {
                  pFVar5 = (param_3->AllocatorInstance).Data;
                  if (((pFVar5 <= (FScriptContainerElement *)&local_144) &&
                      ((FScriptContainerElement *)&local_144 <
                       pFVar5 + (longlong)param_3->ArrayMax * 4)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  iVar14 = param_3->ArrayNum;
                  if (iVar14 == param_3->ArrayMax) {
                    iVar14 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
                  }
                  param_3->ArrayNum = iVar14 + 1;
                  *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar14 * 4) =
                       local_144;
                }
              }
              puVar25 = puVar25 + 1;
            }
          }
          break;
        }
        iVar22 = piVar16[6];
      } while (iVar22 != -1);
    }
  }
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar28 = (param_1->field0_0x0)._s_0.Y - dVar30;
  dVar26 = (param_1->field0_0x0)._s_0.X - dVar29;
  dVar27 = (param_1->field0_0x0)._s_0.Z - dVar31;
  dVar28 = (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar26 = (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar28 <= dVar26) {
    dVar28 = dVar26;
  }
  dVar26 = (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar28 <= dVar26) {
    dVar28 = dVar26;
  }
  if (dVar7 < dVar28 + param_2) {
    local_f8 = IndexUtil::GridOffsets26;
    uVar21 = local_138._s_0.Z;
    uVar24 = local_138._s_0.X;
    uVar23 = local_138._s_0.Y;
    do {
      pFVar19 = local_f8;
      local_f0 = *(undefined8 *)&local_f8->field0_0x0;
      local_120 = (local_f8->field0_0x0)._s_0.Z;
      local_124 = (int)((ulonglong)local_f0 >> 0x20);
      dVar28 = ((double)local_124 * dVar7 + dVar30) - (param_1->field0_0x0)._s_0.Y;
      dVar26 = ((double)(int)local_f0 * dVar7 + dVar29) - (param_1->field0_0x0)._s_0.X;
      dVar27 = ((double)local_120 * dVar7 + dVar31) - (param_1->field0_0x0)._s_0.Z;
      dVar28 = (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar8,SUB84(dVar28,0) & uVar12);
      dVar26 = (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar8,SUB84(dVar26,0) & uVar12);
      if (dVar26 <= dVar28) {
        dVar28 = dVar26;
      }
      dVar26 = (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar8,SUB84(dVar27,0) & uVar12);
      if (dVar26 <= dVar28) {
        dVar28 = dVar26;
      }
      if (dVar28 <= param_2) {
        local_128 = (int)local_f0 + uVar24;
        local_124 = local_124 + uVar23;
        local_120 = uVar21 + local_120;
        uVar13 = FCrc::MemCrc_DEPRECATED(&local_128,0xc,0);
        uVar21 = local_138._s_0.Z;
        uVar24 = local_138._s_0.X;
        uVar23 = local_138._s_0.Y;
        if (*(int *)&(this->Grid).Elements.field_0x8 != *(int *)&(this->Grid).Elements.field_0x34) {
          puVar18 = *(undefined1 **)&(this->Grid).Elements.field_0x40;
          puVar20 = &(this->Grid).Elements.field_0x38;
          if (puVar18 != (undefined1 *)0x0) {
            puVar20 = puVar18;
          }
          iVar22 = *(int *)(puVar20 +
                           (ulonglong)(*(int *)&(this->Grid).Elements.field_0x48 - 1U & uVar13) * 4)
          ;
          if (iVar22 != -1) {
            do {
              piVar16 = (int *)((longlong)iVar22 * 0x20 + *(longlong *)&(this->Grid).Elements);
              if (((*piVar16 == local_128) && (piVar16[1] == local_124)) &&
                 (piVar16[2] == local_120)) {
                if (((iVar22 != -1) && (piVar16 != (int *)0x0)) &&
                   (puVar2 = *(undefined8 **)(piVar16 + 4), puVar2 != (undefined8 *)0x0)) {
                  puVar25 = (undefined4 *)*puVar2;
                  iVar22 = *(int *)(puVar2 + 1);
                  puVar1 = puVar25 + iVar22;
                  while( true ) {
                    if (*(int *)(puVar2 + 1) != iVar22) {
                      local_148[0] = 0;
                      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                                (local_148);
                    }
                    pFVar19 = local_f8;
                    uVar21 = local_138._s_0.Z;
                    uVar24 = local_138._s_0.X;
                    uVar23 = local_138._s_0.Y;
                    if (puVar25 == puVar1) break;
                    local_140[0] = *puVar25;
                    pTVar3 = this->Points;
                    local_108[0] = local_140[0];
                    Core::Private::Function::CheckCallable(*(void **)&pTVar3->IsPoint);
                    plVar4 = *(longlong **)&(pTVar3->IsPoint).field_0x28;
                    pcVar6 = *(code **)&pTVar3->IsPoint;
                    plVar17 = (longlong *)&(pTVar3->IsPoint).field_0x10;
                    if (plVar4 != (longlong *)0x0) {
                      plVar17 = plVar4;
                    }
                    uVar15 = (**(code **)(*plVar17 + 8))();
                    cVar11 = (*pcVar6)(uVar15,local_108);
                    if (cVar11 != '\0') {
                      local_100 = local_140[0];
                      pTVar3 = this->Points;
                      Core::Private::Function::CheckCallable(*(void **)&pTVar3->GetPoint);
                      plVar4 = *(longlong **)&(pTVar3->GetPoint).field_0x28;
                      pcVar6 = *(code **)&pTVar3->GetPoint;
                      plVar17 = (longlong *)&(pTVar3->GetPoint).field_0x10;
                      if (plVar4 != (longlong *)0x0) {
                        plVar17 = plVar4;
                      }
                      uVar15 = (**(code **)(*plVar17 + 8))();
                      (*pcVar6)(&local_c8,uVar15);
                      dVar27 = local_c0 - (param_1->field0_0x0)._s_0.Y;
                      dVar26 = local_c8 - (param_1->field0_0x0)._s_0.X;
                      dVar28 = local_b8 - (param_1->field0_0x0)._s_0.Z;
                      if (dVar27 * dVar27 + dVar26 * dVar26 + dVar28 * dVar28 < param_2 * param_2) {
                        pFVar5 = (param_3->AllocatorInstance).Data;
                        if (((pFVar5 <= (FScriptContainerElement *)local_140) &&
                            ((FScriptContainerElement *)local_140 <
                             pFVar5 + (longlong)param_3->ArrayMax * 4)) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar9)) {
                          pcVar6 = (code *)swi(3);
                          uVar10 = (*pcVar6)();
                          return (bool)uVar10;
                        }
                        iVar14 = param_3->ArrayNum;
                        if (iVar14 == param_3->ArrayMax) {
                          iVar14 = Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
                        }
                        param_3->ArrayNum = iVar14 + 1;
                        *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar14 * 4) =
                             local_140[0];
                      }
                    }
                    puVar25 = puVar25 + 1;
                  }
                }
                break;
              }
              iVar22 = piVar16[6];
            } while (iVar22 != -1);
          }
        }
      }
      local_f8 = pFVar19 + 1;
    } while ((longlong)local_f8 < 0x150aa30e8);
  }
  return true;
}

