// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 1

// FindPointsInBall @ 14c9d1120

int __thiscall
UE::Geometry::TPointHashGrid3<UE::Geometry::FIndex2i,double>::FindPointsInBall
          (TPointHashGrid3<UE::Geometry::FIndex2i,double> *this,TVector<double> *param_1,
          double param_2,TFunctionRef<double___cdecl(UE::Geometry::FIndex2i_const_&)> *param_3,
          TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *param_4,
          TFunctionRef<bool___cdecl(UE::Geometry::FIndex2i_const_&)> *param_5)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  double dVar21;
  uint local_f0;
  int local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  longlong local_d0;
  longlong local_c8;
  TBaseKeyIterator<1> local_c0;
  TBaseKeyIterator<1> local_a8 [5];
  
  dVar5 = __real_41f0000000000000;
  if (*(int *)&(this->Hash).field_0x8 == *(int *)&(this->Hash).field_0x34) {
    iVar12 = 0;
  }
  else {
    iVar12 = param_4->ArrayNum;
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * param_2;
    dVar2 = (param_1->field0_0x0)._s_0.X;
    dVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * param_2;
    dVar7 = FGenericPlatformMath::Fmod
                      (((param_1->field0_0x0)._s_0.Z -
                       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * param_2) /
                       (this->Indexer).CellSize,__real_41f0000000000000);
    if (dVar7 < 0.0) {
      dVar7 = dVar7 + dVar5;
    }
    dVar1 = FGenericPlatformMath::Fmod((dVar1 - dVar21) / (this->Indexer).CellSize,dVar5);
    if (dVar1 < 0.0) {
      dVar1 = dVar1 + dVar5;
    }
    dVar2 = FGenericPlatformMath::Fmod((dVar2 - dVar6) / (this->Indexer).CellSize,dVar5);
    if (dVar2 < 0.0) {
      dVar2 = dVar2 + dVar5;
    }
    uVar18 = (ulonglong)dVar7;
    dVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * param_2;
    dVar8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * param_2;
    dVar6 = (param_1->field0_0x0)._s_0.X;
    dVar7 = (param_1->field0_0x0)._s_0.Y;
    dVar21 = FGenericPlatformMath::Fmod
                       ((UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * param_2 +
                        (param_1->field0_0x0)._s_0.Z) / (this->Indexer).CellSize,dVar5);
    if (dVar21 < 0.0) {
      dVar21 = dVar21 + dVar5;
    }
    dVar7 = FGenericPlatformMath::Fmod((dVar8 + dVar7) / (this->Indexer).CellSize,dVar5);
    if (dVar7 < 0.0) {
      dVar7 = dVar7 + dVar5;
    }
    dVar6 = FGenericPlatformMath::Fmod((dVar9 + dVar6) / (this->Indexer).CellSize,dVar5);
    if (dVar6 < 0.0) {
      dVar6 = dVar6 + dVar5;
    }
    lVar15 = (longlong)dVar21;
    lVar14 = (longlong)dVar7;
    local_d0 = lVar14;
    local_c8 = lVar15;
    if ((int)uVar18 <= (int)lVar15) {
      do {
        local_e8 = (int)(longlong)dVar1;
        uVar20 = (longlong)dVar1;
        if (local_e8 <= (int)lVar14) {
          do {
            local_f0 = (uint)(longlong)dVar2;
            uVar16 = (longlong)dVar2;
            lVar15 = local_c8;
            while (local_c8 = lVar15, (int)local_f0 <= (int)(longlong)dVar6) {
              local_e0 = (int)uVar16;
              local_dc = (int)uVar20;
              local_d8 = (int)uVar18;
              TSet<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>,FDefaultSetAllocator>
              ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                        (local_a8,(TSet<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>,FDefaultSetAllocator>
                                   *)this,(FVector3i *)&local_e0);
              local_c0._16_8_ = ZEXT48((uint)local_a8[0].Index);
              local_c0.Set = local_a8[0].Set;
              uVar19 = local_a8[0].Index;
              while (uVar19 != 0xffffffff) {
                pFVar17 = (FScriptContainerElement *)
                          (*(longlong *)&(local_c0.Set)->Elements + 0xc +
                          (longlong)(int)uVar19 * 0x1c);
                cVar10 = (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,pFVar17);
                if ((cVar10 == '\0') &&
                   (dVar5 = (double)(**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,pFVar17)
                   , dVar5 < param_2 * param_2)) {
                  pFVar3 = (param_4->AllocatorInstance).Data;
                  if ((pFVar3 <= pFVar17) &&
                     ((pFVar17 < pFVar3 + (longlong)param_4->ArrayMax * 8 &&
                      (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar11)))) {
                    pcVar4 = (code *)swi(3);
                    iVar12 = (*pcVar4)();
                    return iVar12;
                  }
                  iVar13 = param_4->ArrayNum;
                  if (iVar13 == param_4->ArrayMax) {
                    iVar13 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x408,&param_4->AllocatorInstance,&param_4->ArrayMax);
                  }
                  param_4->ArrayNum = iVar13 + 1;
                  *(undefined8 *)((param_4->AllocatorInstance).Data + (longlong)iVar13 * 8) =
                       *(undefined8 *)pFVar17;
                }
                TSet<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>,FDefaultSetAllocator>
                ::TBaseKeyIterator<1>::operator++(&local_c0);
                uVar19 = local_c0.Index;
              }
              local_f0 = (int)uVar16 + 1;
              uVar16 = (ulonglong)local_f0;
              lVar14 = local_d0;
              lVar15 = local_c8;
            }
            uVar19 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar19;
          } while ((int)uVar19 <= (int)lVar14);
        }
        uVar19 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar19;
      } while ((int)uVar19 <= (int)lVar15);
    }
    iVar12 = param_4->ArrayNum - iVar12;
  }
  return iVar12;
}

