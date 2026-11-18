// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// FindNearestInRadius @ 14339fd10

TTuple<int,float> __thiscall
UE::Geometry::TPointHashGrid2<int,float>::FindNearestInRadius
          (TPointHashGrid2<int,float> *this,TVector2<float> *param_1,float param_2,
          TFunctionRef<float___cdecl(int_const_&)> *param_3,
          TFunctionRef<bool___cdecl(int_const_&)> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  TSet<TTuple<UE::Geometry::FVector2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,int,1>,FDefaultSetAllocator>
  *pTVar3;
  FVector2i *pFVar4;
  bool bVar5;
  char cVar6;
  TVector2<float>_u_0 TVar7;
  TTuple<int,float> TVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  TPointHashGrid2<int,float> *pTVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ForAnyElementType FVar17;
  float *in_R8;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float in_XMM3_Da;
  undefined8 *in_stack_00000030;
  undefined1 local_b8 [8];
  ForAnyElementType local_b0;
  uint local_a8;
  uint local_a4;
  float local_a0;
  int local_9c;
  undefined8 local_98;
  float local_90;
  int local_8c;
  int local_88;
  TBaseKeyIterator<1> local_80;
  int local_68;
  int local_64;
  
  if (*(int *)&(this->Hash).field_0x8 == *(int *)&(this->Hash).field_0x34) {
    (param_1->field0_0x0)._s_0.X = (float)this->InvalidValue;
    (param_1->field0_0x0)._s_0.Y = 3.4028235e+38;
  }
  else {
    auVar21._0_4_ = __real_3f800000 / (this->Indexer).CellSize;
    local_98._0_4_ = UE::Math::TVector2<float>::UnitVector.field0_0x0._0_4_;
    auVar18._0_4_ = (*in_R8 - (float)local_98 * in_XMM3_Da) * auVar21._0_4_;
    iVar15 = (int)auVar18._0_4_;
    pTVar13 = this;
    if ((iVar15 != -0x80000000) && ((float)iVar15 != auVar18._0_4_)) {
      auVar18._4_4_ = auVar18._0_4_;
      auVar18._8_8_ = 0;
      uVar11 = movmskps((int)this,auVar18);
      pTVar13 = (TPointHashGrid2<int,float> *)(ulonglong)(uVar11 & 1);
      auVar18._0_4_ = (float)(int)(iVar15 - (uVar11 & 1));
    }
    local_98._4_4_ = UE::Math::TVector2<float>::UnitVector.field0_0x0._4_4_;
    iVar15 = (int)auVar18._0_4_;
    auVar19._0_4_ = (in_R8[1] - local_98._4_4_ * in_XMM3_Da) * auVar21._0_4_;
    iVar16 = (int)auVar19._0_4_;
    if ((iVar16 != -0x80000000) && ((float)iVar16 != auVar19._0_4_)) {
      auVar19._4_4_ = auVar19._0_4_;
      auVar19._8_8_ = 0;
      uVar11 = movmskps((int)pTVar13,auVar19);
      auVar19._0_4_ = (float)(int)(iVar16 - (uVar11 & 1));
    }
    local_9c = (int)auVar19._0_4_;
    auVar20._0_4_ = ((float)local_98 * in_XMM3_Da + *in_R8) * auVar21._0_4_;
    iVar16 = (int)auVar20._0_4_;
    TVar7 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
    if ((iVar16 != -0x80000000) && ((float)iVar16 != auVar20._0_4_)) {
      auVar20._4_4_ = auVar20._0_4_;
      auVar20._8_8_ = 0;
      uVar11 = movmskps((float)local_98,auVar20);
      TVar7._0_4_ = uVar11 & 1;
      TVar7._s_0.Y = 0.0;
      auVar20._0_4_ = (float)(int)(iVar16 - TVar7._0_4_);
    }
    iVar16 = (int)auVar20._0_4_;
    auVar21._0_4_ = (local_98._4_4_ * in_XMM3_Da + in_R8[1]) * auVar21._0_4_;
    iVar12 = (int)auVar21._0_4_;
    if ((iVar12 != -0x80000000) && ((float)iVar12 != auVar21._0_4_)) {
      auVar21._4_4_ = auVar21._0_4_;
      auVar21._8_8_ = 0;
      uVar11 = movmskps(TVar7._s_0.X,auVar21);
      auVar21._0_4_ = (float)(int)(iVar12 - (uVar11 & 1));
    }
    auVar18._0_4_ = (float)this->InvalidValue;
    pFVar10 = (FScriptContainerElement *)0x0;
    iVar12 = (int)auVar21._0_4_;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = 0;
    local_a4 = 0;
    local_98 = CONCAT44(local_98._4_4_,iVar12);
    FVar17.Data = pFVar10;
    auVar21._0_4_ = __real_7f7fffff;
    local_90 = auVar18._0_4_;
    local_8c = iVar16;
    local_88 = iVar15;
    if (local_9c <= iVar12) {
      do {
        if (iVar15 <= iVar16) {
          do {
            local_a8 = 0;
            local_68 = iVar15;
            local_64 = local_9c;
            if (((int)pFVar10 < 0) && ((int)pFVar10 != 0)) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_b0,0,(int *)&local_a4);
            }
            TSet<TTuple<UE::Geometry::FVector2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,int,1>,FDefaultSetAllocator>
            ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                      (&local_80,
                       (TSet<TTuple<UE::Geometry::FVector2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,int,1>,FDefaultSetAllocator>
                        *)this,(FVector2i *)&local_68);
            pFVar4 = local_80.Key;
            pTVar3 = local_80.Set;
            iVar16 = local_80.NextIndex;
joined_r0x00014339ff48:
            local_80.NextIndex = iVar16;
            if (local_80.Index != -1) {
              pFVar10 = (FScriptContainerElement *)
                        (*(longlong *)&pTVar3->Elements + ((longlong)local_80.Index * 5 + 2) * 4);
              if (((local_b0.Data <= pFVar10) &&
                  (pFVar10 < local_b0.Data + (longlong)(int)local_a4 * 4)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar2 = (code *)swi(3);
                TVar8 = (TTuple<int,float>)(*pcVar2)();
                return TVar8;
              }
              if (local_a8 == local_a4) {
                local_a8 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_b0,(int *)&local_a4);
              }
              uVar11 = local_a8 + 1;
              *(float *)(local_b0.Data + (longlong)(int)local_a8 * 4) = *(float *)pFVar10;
              auVar18._0_4_ = local_90;
              local_a8 = uVar11;
              local_80.Index = iVar16;
              if (iVar16 == -1) goto LAB_1433a0056;
              lVar1 = *(longlong *)&pTVar3->Elements;
              do {
                lVar9 = (longlong)local_80.Index;
                iVar16 = *(int *)(lVar1 + 0xc + lVar9 * 0x14);
                if ((*(int *)(lVar1 + lVar9 * 0x14) == (pFVar4->field0_0x0)._s_0.X) &&
                   (*(int *)(lVar1 + 4 + lVar9 * 0x14) == (pFVar4->field0_0x0)._s_0.Y)) break;
                local_80.Index = iVar16;
              } while (iVar16 != -1);
              goto joined_r0x00014339ff48;
            }
LAB_1433a0056:
            uVar11 = local_a8;
            uVar14 = (ulonglong)(int)local_a8;
            pFVar10 = local_b0.Data + uVar14 * 4;
            FVar17.Data = local_b0.Data;
            while( true ) {
              if ((uint)uVar14 != uVar11) {
                local_b8[0] = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_b8);
              }
              if (FVar17.Data == pFVar10) break;
              local_a0 = *(float *)FVar17.Data;
              cVar6 = (*(code *)*in_stack_00000030)(in_stack_00000030[1],&local_a0);
              if (((cVar6 == '\0') &&
                  (auVar19._0_4_ =
                        (float)(**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_a0),
                  auVar19._0_4_ < in_XMM3_Da * in_XMM3_Da)) && (auVar19._0_4_ < auVar21._0_4_)) {
                auVar21._0_4_ = auVar19._0_4_;
                auVar18._0_4_ = local_a0;
              }
              uVar14 = (ulonglong)local_a8;
              FVar17.Data = FVar17.Data + 4;
            }
            iVar15 = iVar15 + 1;
            pFVar10 = (FScriptContainerElement *)(ulonglong)local_a4;
            local_90 = auVar18._0_4_;
          } while (iVar15 <= local_8c);
          FVar17.Data = local_b0.Data;
          iVar15 = local_88;
          iVar16 = local_8c;
          iVar12 = (int)(float)local_98;
        }
        local_9c = local_9c + 1;
      } while (local_9c <= iVar12);
    }
    (param_1->field0_0x0)._s_0.Y = auVar21._0_4_;
    (param_1->field0_0x0)._s_0.X = auVar18._0_4_;
    if (FVar17.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar17.Data);
    }
  }
  return (TTuple<int,float>)param_1;
}

// FindNearestInRadius @ 1433a0160

TTuple<int,double> * __thiscall
UE::Geometry::TPointHashGrid2<int,double>::FindNearestInRadius
          (TPointHashGrid2<int,double> *this,TTuple<int,double> *__return_storage_ptr__,
          TVector2<double> *param_1,double param_2,
          TFunctionRef<double___cdecl(int_const_&)> *param_3,
          TFunctionRef<bool___cdecl(int_const_&)> *param_4)

{
  double dVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  TSet<TTuple<UE::Geometry::FVector2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,int,1>,FDefaultSetAllocator>
  *pTVar8;
  FVector2i *pFVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  TTuple<int,double> *pTVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  double dVar24;
  double dVar25;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  uint local_98;
  uint local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  TBaseKeyIterator<1> local_78;
  int local_60;
  int local_5c;
  
  uVar12 = *(uint *)&(this->Hash).field_0x8;
  if (uVar12 == *(uint *)&(this->Hash).field_0x34) {
    *(int *)__return_storage_ptr__ = this->InvalidValue;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x7fefffffffffffff;
  }
  else {
    dVar25 = __real_3ff0000000000000 / (this->Indexer).CellSize;
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar24 = (param_1->field0_0x0)._s_0.Y;
    dVar6 = (dVar1 - UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X * param_2) * dVar25;
    lVar16 = (longlong)dVar6;
    if ((lVar16 != -0x8000000000000000) && ((double)lVar16 != dVar6)) {
      auVar4._8_4_ = SUB84(dVar6,0);
      auVar4._0_8_ = dVar6;
      auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      uVar12 = movmskpd(uVar12,auVar4);
      uVar12 = uVar12 & 1;
      dVar6 = (double)(longlong)(lVar16 - (ulonglong)uVar12);
    }
    iVar20 = (int)dVar6;
    dVar6 = (dVar24 - UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y * param_2) * dVar25;
    lVar16 = (longlong)dVar6;
    if ((lVar16 != -0x8000000000000000) && ((double)lVar16 != dVar6)) {
      auVar5._8_4_ = SUB84(dVar6,0);
      auVar5._0_8_ = dVar6;
      auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      uVar12 = movmskpd(uVar12,auVar5);
      uVar12 = uVar12 & 1;
      dVar6 = (double)(longlong)(lVar16 - (ulonglong)uVar12);
    }
    local_8c = (int)dVar6;
    dVar1 = (dVar1 + UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X * param_2) * dVar25;
    lVar16 = (longlong)dVar1;
    if ((lVar16 != -0x8000000000000000) && ((double)lVar16 != dVar1)) {
      auVar7._8_4_ = SUB84(dVar1,0);
      auVar7._0_8_ = dVar1;
      auVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      uVar12 = movmskpd(uVar12,auVar7);
      uVar12 = uVar12 & 1;
      dVar1 = (double)(longlong)(lVar16 - (ulonglong)uVar12);
    }
    iVar19 = (int)dVar1;
    dVar25 = (dVar24 + UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y * param_2) * dVar25;
    lVar16 = (longlong)dVar25;
    if ((lVar16 != -0x8000000000000000) && ((double)lVar16 != dVar25)) {
      auVar3._8_4_ = SUB84(dVar25,0);
      auVar3._0_8_ = dVar25;
      auVar3._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      uVar12 = movmskpd(uVar12,auVar3);
      dVar25 = (double)(longlong)(lVar16 - (ulonglong)(uVar12 & 1));
    }
    iVar23 = this->InvalidValue;
    pFVar15 = (FScriptContainerElement *)0x0;
    iVar21 = (int)dVar25;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = 0;
    local_94 = 0;
    FVar18.Data = pFVar15;
    local_88 = iVar23;
    local_84 = iVar19;
    local_80 = iVar20;
    local_7c = iVar21;
    dVar1 = __real_7fefffffffffffff;
    if (local_8c <= iVar21) {
      do {
        iVar22 = iVar20;
        if (iVar20 <= iVar19) {
          do {
            local_98 = 0;
            local_60 = iVar22;
            local_5c = local_8c;
            if (((int)pFVar15 < 0) && ((int)pFVar15 != 0)) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_a0,0,(int *)&local_94);
            }
            TSet<TTuple<UE::Geometry::FVector2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,int,1>,FDefaultSetAllocator>
            ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                      (&local_78,
                       (TSet<TTuple<UE::Geometry::FVector2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,int,1>,FDefaultSetAllocator>
                        *)this,(FVector2i *)&local_60);
            pFVar9 = local_78.Key;
            pTVar8 = local_78.Set;
            iVar20 = local_78.NextIndex;
joined_r0x0001433a03b8:
            local_78.NextIndex = iVar20;
            if (local_78.Index != -1) {
              pFVar15 = (FScriptContainerElement *)
                        (*(longlong *)&pTVar8->Elements + ((longlong)local_78.Index * 5 + 2) * 4);
              if (((local_a0.Data <= pFVar15) &&
                  (pFVar15 < local_a0.Data + (longlong)(int)local_94 * 4)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar2 = (code *)swi(3);
                pTVar13 = (TTuple<int,double> *)(*pcVar2)();
                return pTVar13;
              }
              if (local_98 == local_94) {
                local_98 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_a0,(int *)&local_94);
              }
              uVar12 = local_98 + 1;
              *(int *)(local_a0.Data + (longlong)(int)local_98 * 4) = *(int *)pFVar15;
              iVar23 = local_88;
              local_98 = uVar12;
              local_78.Index = iVar20;
              if (iVar20 == -1) goto LAB_1433a04c6;
              lVar16 = *(longlong *)&pTVar8->Elements;
              do {
                lVar14 = (longlong)local_78.Index;
                iVar20 = *(int *)(lVar16 + 0xc + lVar14 * 0x14);
                if ((*(int *)(lVar16 + lVar14 * 0x14) == (pFVar9->field0_0x0)._s_0.X) &&
                   (*(int *)(lVar16 + 4 + lVar14 * 0x14) == (pFVar9->field0_0x0)._s_0.Y)) break;
                local_78.Index = iVar20;
              } while (iVar20 != -1);
              goto joined_r0x0001433a03b8;
            }
LAB_1433a04c6:
            uVar12 = local_98;
            uVar17 = (ulonglong)(int)local_98;
            pFVar15 = local_a0.Data + uVar17 * 4;
            FVar18.Data = local_a0.Data;
            while( true ) {
              if ((uint)uVar17 != uVar12) {
                local_a8[0] = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_a8);
              }
              if (FVar18.Data == pFVar15) break;
              local_90 = *(int *)FVar18.Data;
              cVar11 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_90);
              if (((cVar11 == '\0') &&
                  (dVar24 = (double)(**(code **)param_3)
                                              (*(undefined8 *)&param_3->field_0x8,&local_90),
                  dVar24 < param_2 * param_2)) && (dVar24 < dVar1)) {
                iVar23 = local_90;
                dVar1 = dVar24;
              }
              uVar17 = (ulonglong)local_98;
              FVar18.Data = FVar18.Data + 4;
            }
            iVar22 = iVar22 + 1;
            pFVar15 = (FScriptContainerElement *)(ulonglong)local_94;
            FVar18.Data = local_a0.Data;
            iVar20 = local_80;
            iVar19 = local_84;
            iVar21 = local_7c;
            local_88 = iVar23;
          } while (iVar22 <= local_84);
        }
        local_8c = local_8c + 1;
      } while (local_8c <= iVar21);
    }
    *(double *)&__return_storage_ptr__->field_0x8 = dVar1;
    *(int *)__return_storage_ptr__ = iVar23;
    if (FVar18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar18.Data);
    }
  }
  return __return_storage_ptr__;
}

