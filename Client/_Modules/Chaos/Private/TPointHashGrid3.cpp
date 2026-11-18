// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FindPointsInBall @ 14408b960

int __thiscall
UE::Geometry::TPointHashGrid3<int,float>::FindPointsInBall
          (TPointHashGrid3<int,float> *this,TVector<float> *param_1,float param_2,
          TFunctionRef<float___cdecl(int_const_&)> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TFunctionRef<bool___cdecl(int_const_&)> *param_5)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint local_f0;
  int local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  longlong local_d0;
  longlong local_c8;
  TBaseKeyIterator<1> local_c0;
  TBaseKeyIterator<1> local_a8 [5];
  
  dVar10 = __real_41f0000000000000;
  if (*(int *)&(this->Hash).field_0x8 == *(int *)&(this->Hash).field_0x34) {
    iVar13 = 0;
  }
  else {
    fVar21 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X * param_2;
    iVar13 = param_4->ArrayNum;
    fVar22 = (param_1->field0_0x0)._s_0.Y;
    fVar2 = (param_1->field0_0x0)._s_0.X;
    fVar23 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y * param_2;
    dVar5 = FGenericPlatformMath::Fmod
                      ((double)(((param_1->field0_0x0)._s_0.Z -
                                UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z * param_2) /
                               (this->Indexer).CellSize),__real_41f0000000000000);
    if (dVar5 < 0.0) {
      dVar5 = dVar5 + dVar10;
    }
    dVar6 = FGenericPlatformMath::Fmod
                      ((double)((fVar22 - fVar23) / (this->Indexer).CellSize),dVar10);
    if (dVar6 < 0.0) {
      dVar6 = dVar6 + dVar10;
    }
    dVar7 = FGenericPlatformMath::Fmod((double)((fVar2 - fVar21) / (this->Indexer).CellSize),dVar10)
    ;
    if (dVar7 < 0.0) {
      dVar7 = dVar7 + dVar10;
    }
    uVar18 = (ulonglong)dVar5;
    fVar23 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X * param_2;
    fVar21 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y * param_2;
    fVar22 = (param_1->field0_0x0)._s_0.X;
    fVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar5 = FGenericPlatformMath::Fmod
                      ((double)((UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z * param_2 +
                                (param_1->field0_0x0)._s_0.Z) / (this->Indexer).CellSize),dVar10);
    if (dVar5 < 0.0) {
      dVar5 = dVar5 + dVar10;
    }
    dVar8 = FGenericPlatformMath::Fmod((double)((fVar21 + fVar2) / (this->Indexer).CellSize),dVar10)
    ;
    if (dVar8 < 0.0) {
      dVar8 = dVar8 + dVar10;
    }
    dVar9 = FGenericPlatformMath::Fmod
                      ((double)((fVar23 + fVar22) / (this->Indexer).CellSize),dVar10);
    if (dVar9 < 0.0) {
      dVar9 = dVar9 + dVar10;
    }
    lVar16 = (longlong)dVar5;
    lVar15 = (longlong)dVar8;
    local_d0 = lVar15;
    local_c8 = lVar16;
    if ((int)uVar18 <= (int)lVar16) {
      do {
        local_e8 = (int)(longlong)dVar6;
        uVar20 = (longlong)dVar6;
        if (local_e8 <= (int)lVar15) {
          do {
            local_f0 = (uint)(longlong)dVar7;
            uVar17 = (longlong)dVar7;
            lVar16 = local_c8;
            while (local_c8 = lVar16, (int)local_f0 <= (int)(longlong)dVar9) {
              local_e0 = (int)uVar17;
              local_dc = (int)uVar20;
              local_d8 = (int)uVar18;
              TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
              ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                        (local_a8,(TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                                   *)this,(FVector3i *)&local_e0);
              local_c0._16_8_ = ZEXT48((uint)local_a8[0].Index);
              local_c0.Set = local_a8[0].Set;
              uVar19 = local_a8[0].Index;
              while (uVar19 != 0xffffffff) {
                pFVar1 = (FScriptContainerElement *)
                         (*(longlong *)&(local_c0.Set)->Elements + 0xc +
                         (longlong)(int)uVar19 * 0x18);
                cVar11 = (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,pFVar1);
                if ((cVar11 == '\0') &&
                   (fVar22 = (float)(**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,pFVar1),
                   fVar22 < param_2 * param_2)) {
                  pFVar3 = (param_4->AllocatorInstance).Data;
                  if ((pFVar3 <= pFVar1) &&
                     ((pFVar1 < pFVar3 + (longlong)param_4->ArrayMax * 4 &&
                      (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar12)))) {
                    pcVar4 = (code *)swi(3);
                    iVar13 = (*pcVar4)();
                    return iVar13;
                  }
                  iVar14 = param_4->ArrayNum;
                  if (iVar14 == param_4->ArrayMax) {
                    iVar14 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
                  }
                  param_4->ArrayNum = iVar14 + 1;
                  *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)iVar14 * 4) =
                       *(undefined4 *)pFVar1;
                }
                TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                ::TBaseKeyIterator<1>::operator++(&local_c0);
                uVar19 = local_c0.Index;
              }
              local_f0 = (int)uVar17 + 1;
              uVar17 = (ulonglong)local_f0;
              lVar15 = local_d0;
              lVar16 = local_c8;
            }
            uVar19 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar19;
          } while ((int)uVar19 <= (int)lVar15);
        }
        uVar19 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar19;
      } while ((int)uVar19 <= (int)lVar16);
    }
    iVar13 = param_4->ArrayNum - iVar13;
  }
  return iVar13;
}

