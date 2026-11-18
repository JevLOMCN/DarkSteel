// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// ~FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> @ 143a38c10

void __thiscall
Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
~FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>
          (FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &___7__FMuscleActivationConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  pFVar1 = (this->MuscleVertexCount).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MuscleVertexOffset).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Chaos::FLinearCurve,int>
            ((FLinearCurve *)(this->LengthActivationCurves).AllocatorInstance.Data,
             (this->LengthActivationCurves).ArrayNum);
  pFVar1 = (this->LengthActivationCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InflationVolumeScale).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MuscleLengthRatioThresholdForMaxActivation).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FiberLengthRatioAtMaxActivation).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (this->ContractionVolumeScale).AllocatorInstance.Data,
             (this->ContractionVolumeScale).ArrayNum);
  pFVar1 = (this->ContractionVolumeScale).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_> *)
             (this->FiberDirectionMatrix).AllocatorInstance.Data,
             (this->FiberDirectionMatrix).ArrayNum);
  pFVar1 = (this->FiberDirectionMatrix).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MuscleActivation).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MuscleRestLength).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OriginInsertionPair).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->MuscleActivationElement).AllocatorInstance.Data,
             (this->MuscleActivationElement).ArrayNum);
  pFVar1 = (this->MuscleActivationElement).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddMuscles @ 143a48e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::AddMuscles
          (FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,FMuscleActivationFacade *param_2,int param_3,int param_4)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Chaos::FLinearCurve,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 *puVar6;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FManagedArrayCollection *this_00;
  longlong lVar8;
  code *pcVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  FName *pFVar18;
  TVector<float,3> *pTVar19;
  TVector<float,3> *pTVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  int local_168;
  int local_164;
  float local_160;
  undefined4 local_15c;
  int local_158;
  int local_154 [3];
  undefined1 local_148 [24];
  TIntVector2<int>_u_0 local_130 [2];
  ForAnyElementType local_120;
  int local_118;
  ForAnyElementType local_110;
  int local_108;
  float local_100;
  float local_fc;
  float local_f8 [2];
  ForAnyElementType local_f0;
  int local_e8;
  ForAnyElementType local_e0;
  undefined4 *local_c8;
  int *local_c0;
  undefined4 *local_b8;
  int *local_b0;
  undefined4 *local_a8;
  int *local_a0;
  undefined4 *local_98;
  int *local_90;
  FName local_88;
  FLinearCurve local_80 [4];
  
  fVar11 = __real_3f800000;
  local_168 = 0;
  do {
    pTVar7 = (param_2->MuscleActivationElementAttribute).ConstAttributeArray;
    if (pTVar7 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar14 = FManagedArrayCollection::NumElements
                         ((param_2->MuscleActivationElementAttribute).ConstCollection,
                          (param_2->MuscleActivationElementAttribute).Group);
    }
    else {
      iVar14 = (**(code **)(*(longlong *)pTVar7 + 0x60))();
    }
    if (iVar14 <= local_168) {
      return;
    }
    GeometryCollection::Facades::FMuscleActivationFacade::GetMuscleActivationData
              (param_2,(FMuscleActivationData *)local_148,local_168);
    uVar12 = local_148._0_4_;
    if (((int)local_148._0_4_ < 0) ||
       (iVar14 = FManagedArrayCollection::NumElements
                           (param_2->ConstCollection,FGeometryCollection::GeometryGroup),
       iVar14 <= (int)uVar12)) {
      if (1 < (byte)LogMuscleActivationConstraint._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::AddMuscles(Chaos::Softs::FSolverParticles_const&___ptr64,GeometryCollection::Facades::FMuscleActivationFacade_const&___ptr64,int,int)___ptr64'
                    ::__l38::LOG_Static,(FLogCategoryBase *)&LogMuscleActivationConstraint);
      }
    }
    else {
      if ((local_fc <= 0.0) || (fVar11 <= local_fc)) {
        local_c8 = (undefined4 *)local_148;
        local_c0 = &local_168;
        bVar13 = `Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
                 AddMuscles'::__l8::<lambda_1>::operator()(&local_c8);
        if (!bVar13) goto LAB_143a49bcb;
      }
      if (local_148._16_4_ != local_118) {
        local_b8 = (undefined4 *)local_148;
        local_b0 = &local_168;
        bVar13 = `Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
                 AddMuscles'::__l8::<lambda_2>::operator()(&local_b8);
        if (!bVar13) goto LAB_143a49bcb;
      }
      if ((local_100 <= 0.0) || (fVar11 <= local_100)) {
        local_a8 = (undefined4 *)local_148;
        local_a0 = &local_168;
        bVar13 = `Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
                 AddMuscles'::__l8::<lambda_3>::operator()(&local_a8);
        if (!bVar13) goto LAB_143a49bcb;
      }
      if (local_f8[0] <= 0.0) {
        local_98 = (undefined4 *)local_148;
        local_90 = &local_168;
        bVar13 = `Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
                 AddMuscles'::__l8::<lambda_4>::operator()(&local_98);
        if (!bVar13) goto LAB_143a49bcb;
      }
      local_130[0]._0_4_ = local_130[0]._s_0.X + param_3;
      local_130[0]._4_4_ = local_130[0]._s_0.Y + param_3;
      if (((((int)local_130[0]._0_4_ < 0) ||
           (iVar14 = (int)param_1->_padding_, iVar14 <= (int)local_130[0]._0_4_)) ||
          ((int)local_130[0]._4_4_ < 0)) || (iVar14 <= (int)local_130[0]._4_4_)) {
        if (1 < (byte)LogMuscleActivationConstraint._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_void___cdecl_Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::AddMuscles(Chaos::Softs::FSolverParticles_const&___ptr64,GeometryCollection::Facades::FMuscleActivationFacade_const&___ptr64,int,int)___ptr64'
                      ::__l14::LOG_Static,(FLogCategoryBase *)&LogMuscleActivationConstraint);
        }
      }
      else {
        uVar15 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,1,&(this->MuscleActivationElement).AllocatorInstance,
                            &(this->MuscleActivationElement).ArrayNum,
                            &(this->MuscleActivationElement).ArrayMax);
        lVar26 = (longlong)(int)uVar15 * 0x10;
        pFVar21 = (this->MuscleActivationElement).AllocatorInstance.Data + lVar26;
        *(undefined8 *)pFVar21 = 0;
        *(undefined8 *)(pFVar21 + 8) = 0;
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,1,&(this->FiberDirectionMatrix).AllocatorInstance,
                            &(this->FiberDirectionMatrix).ArrayNum,
                            &(this->FiberDirectionMatrix).ArrayMax);
        pFVar21 = (this->FiberDirectionMatrix).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
        *(undefined8 *)pFVar21 = 0;
        *(undefined8 *)(pFVar21 + 8) = 0;
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,1,&(this->ContractionVolumeScale).AllocatorInstance,
                            &(this->ContractionVolumeScale).ArrayNum,
                            &(this->ContractionVolumeScale).ArrayMax);
        uVar24 = 0;
        pFVar21 = (this->ContractionVolumeScale).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
        *(undefined8 *)pFVar21 = 0;
        *(undefined8 *)(pFVar21 + 8) = 0;
        if (0 < (int)local_148._16_4_) {
          lVar27 = 0;
          lVar25 = 0;
          do {
            uVar16 = 0;
            if ((int)uVar24 < (int)local_148._16_4_) {
              uVar16 = ~uVar24 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar14 = *(int *)(local_148._8_8_ + lVar27);
            if (-1 < iVar14) {
              this_00 = param_2->ConstCollection;
              pFVar18 = ::FName::FName(&local_88,"Tetrahedral");
              iVar17 = FManagedArrayCollection::NumElements(this_00,*pFVar18);
              if (iVar14 < iVar17) {
                uVar16 = 0;
                if ((int)uVar15 < (this->MuscleActivationElement).ArrayNum) {
                  uVar16 = ~uVar15 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar21 = (this->MuscleActivationElement).AllocatorInstance.Data + lVar26;
                uVar16 = 0;
                if ((int)uVar24 < (int)local_148._16_4_) {
                  uVar16 = ~uVar24 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                local_164 = param_4 + *(int *)(local_148._8_8_ + lVar27);
                if (((*(int **)&pFVar21->field_0x0 <= &local_164) &&
                    (&local_164 < *(int **)&pFVar21->field_0x0 + *(int *)(pFVar21 + 0xc))) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar14 = *(int *)&pFVar21[8].field_0x0;
                if (iVar14 == *(int *)(pFVar21 + 0xc)) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)pFVar21,(int *)(pFVar21 + 0xc));
                }
                *(int *)&pFVar21[8].field_0x0 = iVar14 + 1;
                *(int *)(*(longlong *)&pFVar21->field_0x0 + (longlong)iVar14 * 4) = local_164;
                uVar16 = 0;
                if ((int)uVar15 < (this->FiberDirectionMatrix).ArrayNum) {
                  uVar16 = ~uVar15 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar21 = (this->FiberDirectionMatrix).AllocatorInstance.Data + lVar26;
                uVar16 = 0;
                if ((int)uVar24 < local_118) {
                  uVar16 = ~uVar24 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar23 = local_120.Data + lVar25;
                if (((*(FScriptContainerElement **)&pFVar21->field_0x0 <= pFVar23) &&
                    (pFVar23 < *(FScriptContainerElement **)&pFVar21->field_0x0 +
                               (longlong)*(int *)(pFVar21 + 0xc) * 0x80)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar14 = *(int *)&pFVar21[8].field_0x0;
                if (iVar14 == *(int *)(pFVar21 + 0xc)) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x1080,(ForAnyElementType *)pFVar21,(int *)(pFVar21 + 0xc));
                }
                *(int *)&pFVar21[8].field_0x0 = iVar14 + 1;
                uVar10 = *(undefined8 *)(pFVar23 + 8);
                lVar8 = *(longlong *)&pFVar21->field_0x0;
                lVar22 = (longlong)iVar14 * 0x80;
                *(undefined8 *)(lVar8 + lVar22) = *(undefined8 *)pFVar23;
                ((undefined8 *)(lVar8 + lVar22))[1] = uVar10;
                uVar10 = *(undefined8 *)(pFVar23 + 0x18);
                puVar6 = (undefined8 *)(lVar8 + lVar22 + 0x10);
                *puVar6 = *(undefined8 *)(pFVar23 + 0x10);
                puVar6[1] = uVar10;
                uVar10 = *(undefined8 *)(pFVar23 + 0x28);
                puVar6 = (undefined8 *)(lVar8 + lVar22 + 0x20);
                *puVar6 = *(undefined8 *)(pFVar23 + 0x20);
                puVar6[1] = uVar10;
                uVar10 = *(undefined8 *)(pFVar23 + 0x38);
                puVar6 = (undefined8 *)(lVar8 + lVar22 + 0x30);
                *puVar6 = *(undefined8 *)(pFVar23 + 0x30);
                puVar6[1] = uVar10;
                uVar10 = *(undefined8 *)(pFVar23 + 0x48);
                puVar6 = (undefined8 *)(lVar8 + lVar22 + 0x40);
                *puVar6 = *(undefined8 *)(pFVar23 + 0x40);
                puVar6[1] = uVar10;
                uVar10 = *(undefined8 *)(pFVar23 + 0x58);
                puVar6 = (undefined8 *)(lVar8 + lVar22 + 0x50);
                *puVar6 = *(undefined8 *)(pFVar23 + 0x50);
                puVar6[1] = uVar10;
                uVar10 = *(undefined8 *)(pFVar23 + 0x68);
                puVar6 = (undefined8 *)(lVar8 + lVar22 + 0x60);
                *puVar6 = *(undefined8 *)(pFVar23 + 0x60);
                puVar6[1] = uVar10;
                uVar10 = *(undefined8 *)(pFVar23 + 0x78);
                puVar6 = (undefined8 *)(lVar8 + lVar22 + 0x70);
                *puVar6 = *(undefined8 *)(pFVar23 + 0x70);
                puVar6[1] = uVar10;
                uVar16 = 0;
                if ((int)uVar15 < (this->ContractionVolumeScale).ArrayNum) {
                  uVar16 = ~uVar15 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar21 = (this->ContractionVolumeScale).AllocatorInstance.Data + lVar26;
                uVar16 = 0;
                if ((int)uVar24 < local_108) {
                  uVar16 = ~uVar24 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar23 = local_110.Data + lVar27;
                if (((*(FScriptContainerElement **)&pFVar21->field_0x0 <= pFVar23) &&
                    (pFVar23 < *(FScriptContainerElement **)&pFVar21->field_0x0 +
                               (longlong)*(int *)(pFVar21 + 0xc) * 4)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar14 = *(int *)&pFVar21[8].field_0x0;
                if (iVar14 == *(int *)(pFVar21 + 0xc)) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)pFVar21,(int *)(pFVar21 + 0xc));
                }
                *(int *)&pFVar21[8].field_0x0 = iVar14 + 1;
                *(undefined4 *)(*(longlong *)&pFVar21->field_0x0 + (longlong)iVar14 * 4) =
                     *(undefined4 *)pFVar23;
              }
            }
            uVar24 = uVar24 + 1;
            lVar25 = lVar25 + 0x80;
            lVar27 = lVar27 + 4;
          } while ((int)uVar24 < (int)local_148._16_4_);
        }
        pFVar21 = (this->FiberLengthRatioAtMaxActivation).AllocatorInstance.Data;
        if (((pFVar21 <= (FScriptContainerElement *)(local_148 + 0x48)) &&
            ((FScriptContainerElement *)(local_148 + 0x48) <
             pFVar21 + (longlong)(this->FiberLengthRatioAtMaxActivation).ArrayMax * 4)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = (this->FiberLengthRatioAtMaxActivation).ArrayNum;
        piVar1 = &(this->FiberLengthRatioAtMaxActivation).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->FiberLengthRatioAtMaxActivation).AllocatorInstance,
                              piVar1);
        }
        (this->FiberLengthRatioAtMaxActivation).ArrayNum = iVar14 + 1;
        *(float *)((this->FiberLengthRatioAtMaxActivation).AllocatorInstance.Data +
                  (longlong)iVar14 * 4) = local_100;
        pFVar21 = (this->MuscleLengthRatioThresholdForMaxActivation).AllocatorInstance.Data;
        if (((pFVar21 <= (FScriptContainerElement *)(local_148 + 0x4c)) &&
            ((FScriptContainerElement *)(local_148 + 0x4c) <
             pFVar21 + (longlong)(this->MuscleLengthRatioThresholdForMaxActivation).ArrayMax * 4))
           && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = (this->MuscleLengthRatioThresholdForMaxActivation).ArrayNum;
        piVar1 = &(this->MuscleLengthRatioThresholdForMaxActivation).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->MuscleLengthRatioThresholdForMaxActivation).
                                     AllocatorInstance,piVar1);
        }
        (this->MuscleLengthRatioThresholdForMaxActivation).ArrayNum = iVar14 + 1;
        pTVar2 = &this->InflationVolumeScale;
        *(float *)((this->MuscleLengthRatioThresholdForMaxActivation).AllocatorInstance.Data +
                  (longlong)iVar14 * 4) = local_fc;
        pFVar21 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar21 <= (FScriptContainerElement *)local_f8) &&
            ((FScriptContainerElement *)local_f8 <
             pFVar21 + (longlong)(this->InflationVolumeScale).ArrayMax * 4)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = (this->InflationVolumeScale).ArrayNum;
        piVar1 = &(this->InflationVolumeScale).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->InflationVolumeScale).ArrayNum = iVar14 + 1;
        *(float *)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_f8[0];
        pFVar21 = (this->OriginInsertionPair).AllocatorInstance.Data;
        if (((pFVar21 <= (FScriptContainerElement *)(local_148 + 0x18)) &&
            ((FScriptContainerElement *)(local_148 + 0x18) <
             pFVar21 + (longlong)(this->OriginInsertionPair).ArrayMax * 8)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = (this->OriginInsertionPair).ArrayNum;
        piVar1 = &(this->OriginInsertionPair).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&(this->OriginInsertionPair).AllocatorInstance,piVar1);
        }
        (this->OriginInsertionPair).ArrayNum = iVar14 + 1;
        *(ulonglong *)((this->OriginInsertionPair).AllocatorInstance.Data + (longlong)iVar14 * 8) =
             CONCAT44(local_130[0]._s_0.Y,local_130[0]._s_0.X);
        pTVar19 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,local_130[0]._s_0.X);
        pTVar20 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,local_130[0]._s_0.Y);
        fVar28 = *(float *)&pTVar19->field_0x4 - *(float *)&pTVar20->field_0x4;
        fVar29 = *(float *)&pTVar19->field_0x8 - *(float *)&pTVar20->field_0x8;
        pFVar21 = (this->MuscleRestLength).AllocatorInstance.Data;
        local_160 = SQRT((*(float *)pTVar19 - *(float *)pTVar20) *
                         (*(float *)pTVar19 - *(float *)pTVar20) + fVar28 * fVar28 + fVar29 * fVar29
                        );
        if (((pFVar21 <= (FScriptContainerElement *)&local_160) &&
            ((FScriptContainerElement *)&local_160 <
             pFVar21 + (longlong)(this->MuscleRestLength).ArrayMax * 4)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = (this->MuscleRestLength).ArrayNum;
        piVar1 = &(this->MuscleRestLength).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->MuscleRestLength).AllocatorInstance,piVar1);
        }
        (this->MuscleRestLength).ArrayNum = iVar14 + 1;
        local_15c = 0;
        *(float *)((this->MuscleRestLength).AllocatorInstance.Data + (longlong)iVar14 * 4) =
             local_160;
        pFVar21 = (this->MuscleActivation).AllocatorInstance.Data;
        if (((pFVar21 <= (FScriptContainerElement *)&local_15c) &&
            ((FScriptContainerElement *)&local_15c <
             pFVar21 + (longlong)(this->MuscleActivation).ArrayMax * 4)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = (this->MuscleActivation).ArrayNum;
        piVar1 = &(this->MuscleActivation).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->MuscleActivation).AllocatorInstance,piVar1);
        }
        (this->MuscleActivation).ArrayNum = iVar14 + 1;
        pTVar3 = &this->MuscleVertexOffset;
        *(undefined4 *)((this->MuscleActivation).AllocatorInstance.Data + (longlong)iVar14 * 4) =
             local_15c;
        local_158 = GeometryCollection::Facades::FMuscleActivationFacade::MuscleVertexOffset
                              (param_2,local_168);
        pFVar21 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar21 <= (FScriptContainerElement *)&local_158) &&
            ((FScriptContainerElement *)&local_158 <
             pFVar21 + (longlong)(this->MuscleVertexOffset).ArrayMax * 4)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = (this->MuscleVertexOffset).ArrayNum;
        piVar1 = &(this->MuscleVertexOffset).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->MuscleVertexOffset).ArrayNum = iVar14 + 1;
        pTVar4 = &this->MuscleVertexCount;
        *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_158;
        local_154[0] = GeometryCollection::Facades::FMuscleActivationFacade::NumMuscleVertices
                                 (param_2,local_168);
        pFVar21 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar21 <= (FScriptContainerElement *)local_154) &&
            ((FScriptContainerElement *)local_154 <
             pFVar21 + (longlong)(this->MuscleVertexCount).ArrayMax * 4)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = (this->MuscleVertexCount).ArrayNum;
        piVar1 = &(this->MuscleVertexCount).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar4->AllocatorInstance,piVar1);
        }
        pTVar5 = &this->LengthActivationCurves;
        (this->MuscleVertexCount).ArrayNum = iVar14 + 1;
        *(int *)((pTVar4->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_154[0];
        pFVar23 = (FScriptContainerElement *)
                  GeometryCollection::Facades::FMuscleActivationFacade::GetLengthActivationCurve
                            (param_2,local_80,local_168);
        pFVar21 = (pTVar5->AllocatorInstance).Data;
        if (((pFVar21 <= pFVar23) &&
            (pFVar23 < pFVar21 + (longlong)(this->LengthActivationCurves).ArrayMax * 0x10)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = (this->LengthActivationCurves).ArrayNum;
        piVar1 = &(this->LengthActivationCurves).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar5->AllocatorInstance,piVar1);
        }
        lVar26 = (longlong)iVar14;
        (this->LengthActivationCurves).ArrayNum = iVar14 + 1;
        pFVar21 = (pTVar5->AllocatorInstance).Data;
        *(undefined8 *)(pFVar21 + lVar26 * 0x10) = 0;
        *(undefined8 *)(pFVar21 + lVar26 * 0x10) = *(undefined8 *)pFVar23;
        *(undefined8 *)pFVar23 = 0;
        *(int *)(pFVar21 + lVar26 * 0x10 + 8) = *(int *)(pFVar23 + 8);
        *(int *)(pFVar21 + lVar26 * 0x10 + 0xc) = *(int *)(pFVar23 + 0xc);
        *(undefined8 *)(pFVar23 + 8) = 0;
        if (local_80[0].Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80[0].Keys.AllocatorInstance.Data);
        }
      }
    }
LAB_143a49bcb:
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
    DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)local_f0.Data,
               local_e8);
    if ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)local_f0.Data !=
        (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_f0.Data);
    }
    if (local_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data);
    }
    if (local_120.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data);
    }
    if ((FScriptContainerElement *)local_148._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_148._8_8_);
    }
    local_168 = local_168 + 1;
  } while( true );
}

// ApplyInflationVolumeScale @ 143a4f440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
ApplyInflationVolumeScale
          (FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  float fVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  uint local_108 [2];
  uint *local_100;
  FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *local_f8;
  FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *local_f0;
  uint *local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_108[0] = 0;
  if (0 < (this->MuscleActivationElement).ArrayNum) {
    do {
      uVar17 = local_108[0];
      iVar9 = (this->FiberDirectionMatrix).ArrayNum;
      uVar13 = 0;
      if ((int)local_108[0] < iVar9) {
        uVar13 = ~local_108[0] >> 0x1f;
      }
      if (uVar13 == 0) {
        local_118 = (longlong)(int)local_108[0];
        local_110 = (longlong)iVar9;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      lVar15 = (longlong)(int)local_108[0];
      iVar9 = (this->MuscleActivationElement).ArrayNum;
      pFVar10 = (this->FiberDirectionMatrix).AllocatorInstance.Data;
      uVar13 = 0;
      if ((int)local_108[0] < iVar9) {
        uVar13 = ~local_108[0] >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (local_118 = lVar15, local_110 = (longlong)iVar9,
         bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (*(int *)((this->MuscleActivationElement).AllocatorInstance.Data + lVar15 * 0x10 + 8) ==
          *(int *)(pFVar10 + (longlong)(int)uVar17 * 0x10 + 8)) {
LAB_143a4f584:
        lVar15 = (longlong)(int)local_108[0];
        iVar9 = (this->InflationVolumeScale).ArrayNum;
        uVar17 = 0;
        if ((int)local_108[0] < iVar9) {
          uVar17 = ~local_108[0] >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_118 = lVar15, local_110 = (longlong)iVar9,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(float *)((this->InflationVolumeScale).AllocatorInstance.Data + lVar15 * 4) <= 0.0) {
          local_e8 = local_108;
          local_f0 = this;
          bVar12 = `Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>
                   ::ApplyInflationVolumeScale'::__l5::<lambda_2>::operator()(&local_f0);
          if (!bVar12) goto LAB_143a4f8a3;
        }
        uVar17 = 0;
        lVar18 = 0;
        lVar15 = 0;
        while( true ) {
          lVar16 = (longlong)(int)local_108[0];
          iVar9 = (this->MuscleActivationElement).ArrayNum;
          uVar13 = 0;
          if ((int)local_108[0] < iVar9) {
            uVar13 = ~local_108[0] >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (local_118 = lVar16, local_110 = (longlong)iVar9,
             bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(int *)((this->MuscleActivationElement).AllocatorInstance.Data + lVar16 * 0x10 + 8)
              <= (int)uVar17) break;
          lVar16 = (longlong)(int)local_108[0];
          iVar9 = (this->FiberDirectionMatrix).ArrayNum;
          uVar13 = 0;
          if ((int)local_108[0] < iVar9) {
            uVar13 = ~local_108[0] >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (local_118 = lVar16, local_110 = (longlong)iVar9,
             bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar10 = (this->FiberDirectionMatrix).AllocatorInstance.Data;
          iVar9 = *(int *)(pFVar10 + lVar16 * 0x10 + 8);
          uVar13 = 0;
          if ((int)uVar17 < iVar9) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if (uVar13 == 0) {
            local_118 = (longlong)(int)uVar17;
            local_110 = (longlong)iVar9;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          lVar16 = *(longlong *)(pFVar10 + lVar16 * 0x10);
          lVar14 = (longlong)(int)local_108[0];
          iVar9 = (this->InflationVolumeScale).ArrayNum;
          pdVar1 = (double *)(lVar16 + 0x10 + lVar15);
          pdVar2 = (double *)(lVar16 + 0x30 + lVar15);
          pdVar3 = (double *)(lVar16 + 0x20 + lVar15);
          pdVar4 = (double *)(lVar16 + 0x50 + lVar15);
          pdVar5 = (double *)(lVar16 + 0x40 + lVar15);
          pdVar6 = (double *)(lVar16 + 0x70 + lVar15);
          pdVar7 = (double *)(lVar16 + 0x60 + lVar15);
          fStack_d0 = (float)*pdVar1;
          fStack_cc = (float)pdVar1[1];
          uVar13 = 0;
          if ((int)local_108[0] < iVar9) {
            uVar13 = ~local_108[0] >> 0x1f;
          }
          local_d8 = (float)*(double *)(lVar16 + lVar15);
          fStack_d4 = (float)((double *)(lVar16 + lVar15))[1];
          local_c8 = (float)*pdVar3;
          fStack_c4 = (float)pdVar3[1];
          fStack_c0 = (float)*pdVar2;
          fStack_bc = (float)pdVar2[1];
          local_b8 = (float)*pdVar5;
          fStack_b4 = (float)pdVar5[1];
          fStack_b0 = (float)*pdVar4;
          fStack_ac = (float)pdVar4[1];
          local_a8 = (float)*pdVar7;
          fStack_a4 = (float)pdVar7[1];
          fStack_a0 = (float)*pdVar6;
          fStack_9c = (float)pdVar6[1];
          if ((uVar13 == 0) &&
             (local_118 = lVar14, local_110 = (longlong)iVar9,
             bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar9 = (this->MuscleActivationElement).ArrayNum;
          fVar8 = *(float *)((this->InflationVolumeScale).AllocatorInstance.Data + lVar14 * 4);
          lVar16 = (longlong)(int)local_108[0];
          uVar13 = 0;
          if ((int)local_108[0] < iVar9) {
            uVar13 = ~local_108[0] >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (local_118 = lVar16, local_110 = (longlong)iVar9,
             bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar10 = (this->MuscleActivationElement).AllocatorInstance.Data;
          iVar9 = *(int *)(pFVar10 + lVar16 * 0x10 + 8);
          uVar13 = 0;
          if ((int)uVar17 < iVar9) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (local_118 = lVar18, local_110 = (longlong)iVar9,
             bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
          ModifyDmInverseSaveFromInflationVolumeScale
                    (param_1,*(int *)(*(longlong *)(pFVar10 + lVar16 * 0x10) + lVar18 * 4),fVar8,
                     (PMatrix<float,3,3> *)&local_d8);
          uVar17 = uVar17 + 1;
          lVar18 = lVar18 + 1;
          lVar15 = lVar15 + 0x80;
        }
      }
      else {
        local_100 = local_108;
        local_f8 = this;
        bVar12 = `Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
                 ApplyInflationVolumeScale'::__l5::<lambda_1>::operator()(&local_100);
        if (bVar12) goto LAB_143a4f584;
      }
LAB_143a4f8a3:
      local_108[0] = local_108[0] + 1;
    } while ((int)local_108[0] < (this->MuscleActivationElement).ArrayNum);
  }
  return;
}

// ApplyMuscleActivation @ 143a4f940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
ApplyMuscleActivation
          (FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  float fVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStackY_168 [32];
  uint local_138 [2];
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *local_130;
  uint *local_128;
  FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *local_120;
  FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *local_118;
  uint *local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  fVar13 = __real_3f800000;
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_138[0] = 0;
  local_130 = param_1;
  if (0 < (this->MuscleActivationElement).ArrayNum) {
    do {
      uVar18 = local_138[0];
      uVar15 = 0;
      if ((int)local_138[0] < (this->FiberDirectionMatrix).ArrayNum) {
        uVar15 = ~local_138[0] >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar17 = (longlong)(int)local_138[0];
      pFVar11 = (this->FiberDirectionMatrix).AllocatorInstance.Data;
      uVar15 = 0;
      if ((int)local_138[0] < (this->MuscleActivationElement).ArrayNum) {
        uVar15 = ~local_138[0] >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (*(int *)((this->MuscleActivationElement).AllocatorInstance.Data + lVar17 * 0x10 + 8) ==
          *(int *)(pFVar11 + (longlong)(int)uVar18 * 0x10 + 8)) {
LAB_143a4faa6:
        lVar17 = (longlong)(int)local_138[0];
        uVar18 = 0;
        if ((int)local_138[0] < (this->FiberLengthRatioAtMaxActivation).ArrayNum) {
          uVar18 = ~local_138[0] >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (*(float *)((this->FiberLengthRatioAtMaxActivation).AllocatorInstance.Data + lVar17 * 4)
            <= 0.0) {
LAB_143a4fb52:
          local_110 = local_138;
          local_118 = this;
          bVar14 = `Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>
                   ::ApplyMuscleActivation'::__l5::<lambda_2>::operator()(&local_118);
          if (!bVar14) goto LAB_143a4ff1c;
        }
        else {
          lVar17 = (longlong)(int)local_138[0];
          uVar18 = 0;
          if ((int)local_138[0] < (this->FiberLengthRatioAtMaxActivation).ArrayNum) {
            uVar18 = ~local_138[0] >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar11 = (this->FiberLengthRatioAtMaxActivation).AllocatorInstance.Data + lVar17 * 4;
          if (fVar13 < *(float *)pFVar11 || fVar13 == *(float *)pFVar11) goto LAB_143a4fb52;
        }
        lVar17 = (longlong)(int)local_138[0];
        uVar18 = 0;
        if ((int)local_138[0] < (this->FiberLengthRatioAtMaxActivation).ArrayNum) {
          uVar18 = ~local_138[0] >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar11 = (this->FiberLengthRatioAtMaxActivation).AllocatorInstance.Data;
        lVar19 = (longlong)(int)local_138[0];
        uVar18 = 0;
        if ((int)local_138[0] < (this->MuscleActivation).ArrayNum) {
          uVar18 = ~local_138[0] >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        fVar8 = *(float *)(pFVar11 + lVar17 * 4);
        lVar21 = 0;
        fVar9 = *(float *)((this->MuscleActivation).AllocatorInstance.Data + lVar19 * 4);
        uVar18 = 0;
        lVar17 = 0;
        while( true ) {
          lVar19 = (longlong)(int)local_138[0];
          uVar15 = 0;
          if ((int)local_138[0] < (this->MuscleActivationElement).ArrayNum) {
            uVar15 = ~local_138[0] >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (*(int *)((this->MuscleActivationElement).AllocatorInstance.Data + lVar19 * 0x10 + 8)
              <= (int)uVar18) break;
          lVar19 = (longlong)(int)local_138[0];
          uVar15 = 0;
          if ((int)local_138[0] < (this->ContractionVolumeScale).ArrayNum) {
            uVar15 = ~local_138[0] >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar11 = (this->ContractionVolumeScale).AllocatorInstance.Data;
          uVar16 = ~uVar18 >> 0x1f;
          uVar15 = 0;
          if ((int)uVar18 < *(int *)(pFVar11 + lVar19 * 0x10 + 8)) {
            uVar15 = uVar16;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar20 = (longlong)(int)local_138[0];
          fVar10 = *(float *)(*(longlong *)(pFVar11 + lVar19 * 0x10) + lVar21 * 4);
          uVar15 = 0;
          if ((int)local_138[0] < (this->FiberDirectionMatrix).ArrayNum) {
            uVar15 = ~local_138[0] >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar11 = (this->FiberDirectionMatrix).AllocatorInstance.Data;
          uVar15 = 0;
          if ((int)uVar18 < *(int *)(pFVar11 + lVar20 * 0x10 + 8)) {
            uVar15 = uVar16;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar19 = *(longlong *)(pFVar11 + lVar20 * 0x10);
          lVar20 = (longlong)(int)local_138[0];
          pdVar1 = (double *)(lVar19 + 0x10 + lVar17);
          pdVar2 = (double *)(lVar19 + 0x30 + lVar17);
          pdVar3 = (double *)(lVar19 + 0x20 + lVar17);
          pdVar4 = (double *)(lVar19 + 0x50 + lVar17);
          pdVar5 = (double *)(lVar19 + 0x40 + lVar17);
          pdVar6 = (double *)(lVar19 + 0x70 + lVar17);
          pdVar7 = (double *)(lVar19 + 0x60 + lVar17);
          fStack_100 = (float)*pdVar1;
          fStack_fc = (float)pdVar1[1];
          uVar15 = 0;
          if ((int)local_138[0] < (this->MuscleActivationElement).ArrayNum) {
            uVar15 = ~local_138[0] >> 0x1f;
          }
          local_108 = (float)*(double *)(lVar19 + lVar17);
          fStack_104 = (float)((double *)(lVar19 + lVar17))[1];
          local_f8 = (float)*pdVar3;
          fStack_f4 = (float)pdVar3[1];
          fStack_f0 = (float)*pdVar2;
          fStack_ec = (float)pdVar2[1];
          local_e8 = (float)*pdVar5;
          fStack_e4 = (float)pdVar5[1];
          fStack_e0 = (float)*pdVar4;
          fStack_dc = (float)pdVar4[1];
          local_d8 = (float)*pdVar7;
          fStack_d4 = (float)pdVar7[1];
          fStack_d0 = (float)*pdVar6;
          fStack_cc = (float)pdVar6[1];
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar11 = (this->MuscleActivationElement).AllocatorInstance.Data;
          uVar15 = 0;
          if ((int)uVar18 < *(int *)(pFVar11 + lVar20 * 0x10 + 8)) {
            uVar15 = uVar16;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
          ModifyDmInverseFromMuscleLength
                    (local_130,*(int *)(*(longlong *)(pFVar11 + lVar20 * 0x10) + lVar21 * 4),
                     fVar13 - (fVar13 - fVar8) * fVar9,(PMatrix<float,3,3> *)&local_108,fVar10);
          uVar18 = uVar18 + 1;
          lVar21 = lVar21 + 1;
          lVar17 = lVar17 + 0x80;
        }
      }
      else {
        local_128 = local_138;
        local_120 = this;
        bVar14 = `Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
                 ApplyMuscleActivation'::__l5::<lambda_1>::operator()(&local_128);
        if (bVar14) goto LAB_143a4faa6;
      }
LAB_143a4ff1c:
      local_138[0] = local_138[0] + 1;
    } while ((int)local_138[0] < (this->MuscleActivationElement).ArrayNum);
  }
  return;
}

// SetMuscleActivation @ 143a91f80

bool __thiscall
Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
SetMuscleActivation(FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *this,
                   int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->MuscleActivation).ArrayNum)) {
    if (__real_3f800000 <= param_2) {
      param_2 = __real_3f800000;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    uVar4 = 0;
    if (param_1 < (this->MuscleActivation).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    *(float *)((this->MuscleActivation).AllocatorInstance.Data + (longlong)param_1 * 4) = param_2;
    return true;
  }
  return false;
}

// UpdateLengthBasedMuscleActivation @ 143a985b0

void __thiscall
Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
UpdateLengthBasedMuscleActivation
          (FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint local_res8 [2];
  FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles> *local_68;
  uint *local_60;
  
  fVar3 = __real_3f800000;
  local_res8[0] = 0;
  if (0 < (this->MuscleActivationElement).ArrayNum) {
    do {
      uVar6 = local_res8[0];
      uVar5 = 0;
      if ((int)local_res8[0] < (this->MuscleLengthRatioThresholdForMaxActivation).ArrayNum) {
        uVar5 = ~local_res8[0] >> 0x1f;
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
      if (*(float *)((this->MuscleLengthRatioThresholdForMaxActivation).AllocatorInstance.Data +
                    (longlong)(int)uVar6 * 4) <= 0.0) {
LAB_143a986b8:
        local_60 = local_res8;
        local_68 = this;
        bVar4 = `Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
                UpdateLengthBasedMuscleActivation'::__l5::<lambda_1>::operator()(&local_68);
        if (bVar4) goto LAB_143a986dc;
      }
      else {
        lVar8 = (longlong)(int)local_res8[0];
        uVar6 = 0;
        if ((int)local_res8[0] < (this->MuscleLengthRatioThresholdForMaxActivation).ArrayNum) {
          uVar6 = ~local_res8[0] >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->MuscleLengthRatioThresholdForMaxActivation).AllocatorInstance.Data +
                 lVar8 * 4;
        if (fVar3 < *(float *)pFVar1 || fVar3 == *(float *)pFVar1) goto LAB_143a986b8;
LAB_143a986dc:
        lVar8 = (longlong)(int)local_res8[0];
        uVar6 = 0;
        if ((int)local_res8[0] < (this->OriginInsertionPair).ArrayNum) {
          uVar6 = ~local_res8[0] >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = *(uint *)((this->OriginInsertionPair).AllocatorInstance.Data + lVar8 * 8);
        uVar5 = 0;
        if ((int)uVar6 < *(int *)&(param_1->MPAndInvM).field_0x10) {
          uVar5 = ~uVar6 >> 0x1f;
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
        lVar8 = (longlong)(int)local_res8[0];
        pfVar7 = (float *)((longlong)(int)uVar6 * 0x10 +
                          *(longlong *)&(param_1->MPAndInvM).field_0x8);
        uVar6 = 0;
        if ((int)local_res8[0] < (this->OriginInsertionPair).ArrayNum) {
          uVar6 = ~local_res8[0] >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = *(uint *)((this->OriginInsertionPair).AllocatorInstance.Data + lVar8 * 8 + 4);
        lVar8 = (longlong)(int)uVar6;
        uVar5 = 0;
        if ((int)uVar6 < *(int *)&(param_1->MPAndInvM).field_0x10) {
          uVar5 = ~uVar6 >> 0x1f;
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
        lVar10 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
        lVar9 = (longlong)(int)local_res8[0];
        fVar12 = *pfVar7 - *(float *)(lVar10 + lVar8 * 0x10);
        fVar11 = pfVar7[1] - *(float *)(lVar10 + 4 + lVar8 * 0x10);
        fVar13 = pfVar7[2] - *(float *)(lVar10 + 8 + lVar8 * 0x10);
        uVar6 = 0;
        if ((int)local_res8[0] < (this->MuscleRestLength).ArrayNum) {
          uVar6 = ~local_res8[0] >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar11 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13) /
                 *(float *)((this->MuscleRestLength).AllocatorInstance.Data + lVar9 * 4);
        lVar8 = (longlong)(int)local_res8[0];
        if (fVar11 < fVar3) {
          uVar6 = 0;
          if ((int)local_res8[0] < (this->MuscleLengthRatioThresholdForMaxActivation).ArrayNum) {
            uVar6 = ~local_res8[0] >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar10 = (longlong)(int)local_res8[0];
          fVar11 = (fVar3 - fVar11) /
                   (fVar3 - *(float *)((this->MuscleLengthRatioThresholdForMaxActivation).
                                       AllocatorInstance.Data + lVar8 * 4));
          uVar6 = 0;
          if ((int)local_res8[0] < (this->LengthActivationCurves).ArrayNum) {
            uVar6 = ~local_res8[0] >> 0x1f;
          }
          if (fVar3 <= fVar11) {
            fVar11 = fVar3;
          }
          if (fVar11 <= 0.0) {
            fVar11 = 0.0;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar8 = (longlong)(int)local_res8[0];
          uVar6 = ~local_res8[0];
          if (*(int *)((this->LengthActivationCurves).AllocatorInstance.Data + lVar10 * 0x10 + 8) !=
              0) {
            uVar5 = 0;
            if ((int)local_res8[0] < (this->LengthActivationCurves).ArrayNum) {
              uVar5 = uVar6 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            fVar11 = FLinearCurve::Eval((FLinearCurve *)
                                        ((this->LengthActivationCurves).AllocatorInstance.Data +
                                        lVar8 * 0x10),fVar11);
            lVar8 = (longlong)(int)local_res8[0];
            uVar6 = ~local_res8[0];
          }
          uVar5 = 0;
          if ((int)lVar8 < (this->MuscleActivation).ArrayNum) {
            uVar5 = uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(float *)((this->MuscleActivation).AllocatorInstance.Data + lVar8 * 4) = fVar11;
        }
        else {
          uVar6 = 0;
          if ((int)local_res8[0] < (this->MuscleActivation).ArrayNum) {
            uVar6 = ~local_res8[0] >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)((this->MuscleActivation).AllocatorInstance.Data + lVar8 * 4) = 0;
        }
      }
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < (this->MuscleActivationElement).ArrayNum);
  }
  return;
}

// operator() @ 1504a4e10

bool __thiscall
`Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
ApplyInflationVolumeScale'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6516659663818195086>);
  if (bVar2) {
    uVar4 = 0;
    if ((int)**(uint **)this < *(int *)(*(longlong *)((longlong)this + 8) + 0x50)) {
      uVar4 = ~**(uint **)this >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    uVar4 = 0;
    if ((int)**(uint **)this < *(int *)(*(longlong *)((longlong)this + 8) + 0x10)) {
      uVar4 = ~**(uint **)this >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6516659663818195086>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInflationVolumeScale(Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>&___ptr64)const___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a4f50

bool __thiscall
`Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
ApplyMuscleActivation'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6516659663818195067>);
  if (bVar2) {
    uVar4 = 0;
    if ((int)**(uint **)this < *(int *)(*(longlong *)((longlong)this + 8) + 0x50)) {
      uVar4 = ~**(uint **)this >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    uVar4 = 0;
    if ((int)**(uint **)this < *(int *)(*(longlong *)((longlong)this + 8) + 0x10)) {
      uVar4 = ~**(uint **)this >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6516659663818195067>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::ApplyMuscleActivation(Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>&___ptr64)const___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a5090

bool __thiscall
`Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
UpdateLengthBasedMuscleActivation'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6516659663818195036>);
  if (bVar2) {
    uVar4 = 0;
    if ((int)**(uint **)((longlong)this + 8) < *(int *)(*(longlong *)this + 0x80)) {
      uVar4 = ~**(uint **)((longlong)this + 8) >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6516659663818195036>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::UpdateLengthBasedMuscleActivation(Chaos::Softs::FSolverParticles_const&___ptr64)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a5190

bool __thiscall
`Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::AddMuscles'::__l8
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6516659663818194978>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6516659663818194978>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::AddMuscles(Chaos::Softs::FSolverParticles_const&___ptr64,GeometryCollection::Facades::FMuscleActivationFacade_const&___ptr64,int,int)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a5270

bool __thiscall
`Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
ApplyInflationVolumeScale'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6516659663818195088>);
  if (bVar2) {
    uVar4 = 0;
    if ((int)**(uint **)((longlong)this + 8) < *(int *)(*(longlong *)this + 0x90)) {
      uVar4 = ~**(uint **)((longlong)this + 8) >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6516659663818195088>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInflationVolumeScale(Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>&___ptr64)const___ptr64'::`5'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a5330

bool __thiscall
`Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::
ApplyMuscleActivation'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6516659663818195070>);
  if (bVar2) {
    uVar4 = 0;
    if ((int)**(uint **)((longlong)this + 8) < *(int *)(*(longlong *)this + 0x70)) {
      uVar4 = ~**(uint **)((longlong)this + 8) >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6516659663818195070>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::ApplyMuscleActivation(Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>&___ptr64)const___ptr64'::`5'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a54b0

bool __thiscall
`Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::AddMuscles'::__l8
::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6516659663818194981>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6516659663818194981>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::AddMuscles(Chaos::Softs::FSolverParticles_const&___ptr64,GeometryCollection::Facades::FMuscleActivationFacade_const&___ptr64,int,int)___ptr64'::`8'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a5510

bool __thiscall
`Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::AddMuscles'::__l8
::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6516659663818194985>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6516659663818194985>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::AddMuscles(Chaos::Softs::FSolverParticles_const&___ptr64,GeometryCollection::Facades::FMuscleActivationFacade_const&___ptr64,int,int)___ptr64'::`8'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a5570

bool __thiscall
`Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::AddMuscles'::__l8
::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6516659663818194988>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6516659663818194988>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::Softs::FMuscleActivationConstraints<float,Chaos::Softs::FSolverParticles>::AddMuscles(Chaos::Softs::FSolverParticles_const&___ptr64,GeometryCollection::Facades::FMuscleActivationFacade_const&___ptr64,int,int)___ptr64'::`8'::<lambda_4>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

