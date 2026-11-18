// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 16

// FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> @ 143a32d40

FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> * __thiscall
Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_5,
          FDeformableXPBDWeakConstraintParams *param_6)

{
  TArrayCollectionArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TArrayCollectionArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TArrayCollectionArray<float> *pTVar4;
  TArrayCollectionArray<bool> *pTVar5;
  TArrayCollectionArray<Chaos::TVector<float,3>_> *pTVar6;
  TArrayCollectionArray<bool> *pTVar7;
  TArrayCollectionArray<float> *pTVar8;
  longlong *plVar9;
  int *piVar10;
  undefined8 uVar11;
  int iVar12;
  longlong *plVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  code *pcVar17;
  TGaussSeidelWeakConstraintData<float> *this_00;
  bool bVar18;
  uint uVar19;
  ulonglong uVar20;
  FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *pFVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  int *piVar24;
  uint uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined1 local_b8;
  undefined1 local_b7 [7];
  TGaussSeidelWeakConstraintData<float> *local_b0;
  undefined1 local_a8 [16];
  ForAnyElementType local_98;
  undefined8 local_90;
  float local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  bool local_60;
  TVector<float,3> local_5c;
  bool local_50;
  float local_4c;
  
  *(undefined ***)&(this->ConstraintsData).MSecondIndices =
       &___7__TArrayCollectionArray_V__TArray_HV__TSizedDefaultAllocator__0CA______Chaos__6B_;
  (this->ConstraintsData)._padding_ = 0;
  this->_padding_ =
       (longlong)
       &___7__FGaussSeidelWeakConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  local_b0 = &this->ConstraintsData;
  pTVar1 = &(this->ConstraintsData).MIndices;
  pTVar2 = &(this->ConstraintsData).MWeights;
  *(undefined ***)pTVar1 =
       &___7__TArrayCollectionArray_V__TArray_HV__TSizedDefaultAllocator__0CA______Chaos__6B_;
  pTVar3 = &(this->ConstraintsData).MSecondWeights;
  *(undefined8 *)&(this->ConstraintsData).MIndices.field_0x8 = 0;
  pTVar4 = &(this->ConstraintsData).MStiffness;
  (this->ConstraintsData)._padding_ = 0;
  pTVar5 = &(this->ConstraintsData).MIsAnisotropic;
  *(undefined4 *)&(this->ConstraintsData)._padding_ = 0;
  pTVar6 = &(this->ConstraintsData).MNormals;
  *(undefined8 *)&(this->ConstraintsData).MIndices.field_0x10 = 0;
  pTVar7 = &(this->ConstraintsData).MIsZeroRestLength;
  *(undefined8 *)&(this->ConstraintsData).MSecondIndices.field_0x8 = 0;
  pTVar8 = &(this->ConstraintsData).MRestLength;
  *(undefined8 *)&(this->ConstraintsData).MSecondIndices.field_0x10 = 0;
  *(undefined8 *)&(this->ConstraintsData).MWeights.field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintsData).MWeights.field_0x10 = 0;
  local_b0->_padding_ = (longlong)&___7__TGaussSeidelWeakConstraintData_M_Softs_Chaos__6B_;
  *(undefined ***)pTVar2 =
       &___7__TArrayCollectionArray_V__TArray_MV__TSizedDefaultAllocator__0CA______Chaos__6B_;
  *(undefined ***)pTVar3 =
       &___7__TArrayCollectionArray_V__TArray_MV__TSizedDefaultAllocator__0CA______Chaos__6B_;
  *(undefined ***)pTVar6 = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->ConstraintsData).MSecondWeights.field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintsData).MSecondWeights.field_0x10 = 0;
  *(undefined8 *)&(this->ConstraintsData).MStiffness.field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintsData).MStiffness.field_0x10 = 0;
  *(undefined ***)pTVar4 = &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined8 *)&(this->ConstraintsData).MIsAnisotropic.field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintsData).MIsAnisotropic.field_0x10 = 0;
  *(undefined ***)pTVar5 = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->ConstraintsData).MNormals.field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintsData).MNormals.field_0x10 = 0;
  *(undefined8 *)&(this->ConstraintsData).MIsZeroRestLength.field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintsData).MIsZeroRestLength.field_0x10 = 0;
  *(undefined ***)pTVar7 = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->ConstraintsData).MRestLength.field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintsData).MRestLength.field_0x10 = 0;
  *(undefined ***)pTVar8 = &___7__TArrayCollectionArray_M_Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)local_b0,(TArrayCollectionArrayBase *)pTVar1);
  TArrayCollection::AddArray
            ((TArrayCollection *)local_b0,(TArrayCollectionArrayBase *)&local_b0->MSecondIndices);
  TArrayCollection::AddArray((TArrayCollection *)local_b0,(TArrayCollectionArrayBase *)pTVar2);
  TArrayCollection::AddArray((TArrayCollection *)local_b0,(TArrayCollectionArrayBase *)pTVar3);
  this_00 = local_b0;
  TArrayCollection::AddArray((TArrayCollection *)local_b0,(TArrayCollectionArrayBase *)pTVar4);
  TArrayCollection::AddArray((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)pTVar5);
  TArrayCollection::AddArray((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)pTVar6);
  TArrayCollection::AddArray((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)pTVar7);
  TArrayCollection::AddArray((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)pTVar8);
  (this->NodalWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodalWeights).ArrayNum = 0;
  (this->NodalWeights).ArrayMax = 0;
  (this->WCIncidentElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WCIncidentElements).ArrayNum = 0;
  (this->WCIncidentElements).ArrayMax = 0;
  (this->WCIncidentElementsLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WCIncidentElementsLocal).ArrayNum = 0;
  (this->WCIncidentElementsLocal).ArrayMax = 0;
  uVar11 = *(undefined8 *)CONCAT71(param_6._1_7_,param_6._0_1_);
  (this->DebugDrawParams).DebugLineWidth = (float)(int)uVar11;
  (this->DebugDrawParams).DebugParticleWidth = (float)(int)((ulonglong)uVar11 >> 0x20);
  *(undefined4 *)&(this->DebugDrawParams).bVisualizeBindings =
       *(undefined4 *)((undefined8 *)CONCAT71(param_6._1_7_,param_6._0_1_) + 1);
  (this->NoCollisionNodalWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NoCollisionNodalWeights).ArrayNum = 0;
  (this->NoCollisionNodalWeights).ArrayMax = 0;
  (this->NoCollisionConstraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NoCollisionConstraints).ArrayNum = 0;
  (this->NoCollisionConstraints).ArrayMax = 0;
  (this->NoCollisionWCIncidentElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NoCollisionWCIncidentElements).ArrayNum = 0;
  (this->NoCollisionWCIncidentElements).ArrayMax = 0;
  (this->NoCollisionWCIncidentElementsLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->NoCollisionWCIncidentElementsLocal).ArrayNum = 0;
  (this->NoCollisionWCIncidentElementsLocal).ArrayMax = 0;
  if (param_1->ArrayNum != param_4->ArrayNum) {
    param_6._0_1_ = 0;
    `Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
    FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>::operator()
              (&param_6);
  }
  *(undefined4 *)&(this->ConstraintsData)._padding_ = 0;
  plVar26 = (longlong *)(this->ConstraintsData)._padding_;
  iVar22 = (int)(this->ConstraintsData)._padding_;
  plVar9 = plVar26 + iVar22;
  while( true ) {
    if ((int)(this->ConstraintsData)._padding_ != iVar22) {
      local_b8 = 0;
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_b8);
    }
    if (plVar26 == plVar9) break;
    plVar13 = (longlong *)*plVar26;
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 8))(plVar13,0);
    }
    plVar26 = plVar26 + 1;
  }
  if (param_1->ArrayNum != 0) {
    TArrayCollection::ResizeHelper
              ((TArrayCollection *)this_00,*(uint *)&this_00->_padding_ + param_1->ArrayNum);
  }
  iVar22 = param_1->ArrayNum;
  uVar20 = 0;
  uVar27 = uVar20;
  uVar29 = uVar20;
  if (0 < iVar22) {
    do {
      uVar25 = (uint)uVar20;
      local_a8._0_8_ = (FScriptContainerElement *)0x0;
      local_98.Data = (FScriptContainerElement *)0x0;
      uVar28 = ~uVar25 >> 0x1f;
      local_80.Data = (FScriptContainerElement *)0x0;
      local_70.Data = (FScriptContainerElement *)0x0;
      uVar19 = 0;
      if ((int)uVar25 < iVar22) {
        uVar19 = uVar28;
      }
      local_a8._8_4_ = 0;
      local_a8._12_4_ = 0;
      local_90._0_4_ = 0;
      local_90._4_4_ = 0;
      local_88 = 0.0;
      local_78._0_4_ = 0;
      local_78._4_4_ = 0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      local_60 = false;
      local_5c._0_8_ = 0;
      local_5c._8_4_ = 0;
      local_50 = false;
      local_4c = 0.0;
      iVar22 = 0;
      if (uVar19 == 0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar17 = (code *)swi(3);
          pFVar21 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
                    (*pcVar17)();
          return pFVar21;
        }
        iVar22 = local_a8._12_4_;
      }
      pFVar23 = (param_1->AllocatorInstance).Data + uVar29;
      if ((FScriptContainerElement *)local_a8 != pFVar23) {
        iVar12 = *(int *)(pFVar23 + 8);
        pvVar14 = *(void **)&pFVar23->field_0x0;
        local_a8._8_4_ = iVar12;
        if ((iVar12 == 0) && (iVar22 == 0)) {
          local_a8._8_4_ = 0;
          local_a8._12_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar12,iVar22,(ForAnyElementType *)local_a8,iVar12,(int *)(local_a8 + 0xc))
          ;
          if (iVar12 != 0) {
            memcpy((void *)local_a8._0_8_,pvVar14,(longlong)iVar12 << 2);
          }
        }
      }
      uVar19 = 0;
      if ((int)uVar25 < param_4->ArrayNum) {
        uVar19 = uVar28;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar17 = (code *)swi(3);
        pFVar21 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar17)();
        return pFVar21;
      }
      pFVar23 = (param_4->AllocatorInstance).Data + uVar29;
      if ((FScriptContainerElement *)(local_a8 + 0x10) != pFVar23) {
        iVar22 = *(int *)(pFVar23 + 8);
        pvVar14 = *(void **)pFVar23;
        local_90._0_4_ = iVar22;
        if ((iVar22 == 0) && (local_90._4_4_ == 0)) {
          local_90._0_4_ = 0;
          local_90._4_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar22,local_90._4_4_,(ForAnyElementType *)(local_a8 + 0x10),iVar22,
                     (int *)(local_a8 + 0x1c));
          if (iVar22 != 0) {
            memcpy(local_98.Data,pvVar14,(longlong)iVar22 << 2);
          }
        }
      }
      uVar19 = 0;
      if ((int)uVar25 < param_2->ArrayNum) {
        uVar19 = uVar28;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar17 = (code *)swi(3);
        pFVar21 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar17)();
        return pFVar21;
      }
      pFVar23 = (param_2->AllocatorInstance).Data + uVar29;
      if ((FScriptContainerElement *)(local_a8 + 0x28) != pFVar23) {
        iVar22 = *(int *)(pFVar23 + 8);
        pvVar14 = *(void **)pFVar23;
        local_78._0_4_ = iVar22;
        if ((iVar22 == 0) && (local_78._4_4_ == 0)) {
          local_78._0_4_ = 0;
          local_78._4_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar22,local_78._4_4_,(ForAnyElementType *)(local_a8 + 0x28),iVar22,
                     (int *)(local_a8 + 0x34));
          if (iVar22 != 0) {
            memcpy(local_80.Data,pvVar14,(longlong)iVar22 << 2);
          }
        }
      }
      uVar19 = 0;
      if ((int)uVar25 < param_5->ArrayNum) {
        uVar19 = uVar28;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar17 = (code *)swi(3);
        pFVar21 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar17)();
        return pFVar21;
      }
      pFVar23 = (param_5->AllocatorInstance).Data + uVar29;
      if ((FScriptContainerElement *)(local_a8 + 0x38) != pFVar23) {
        iVar22 = *(int *)(pFVar23 + 8);
        pvVar14 = *(void **)pFVar23;
        local_68._0_4_ = iVar22;
        if ((iVar22 == 0) && (local_68._4_4_ == 0)) {
          local_68._0_4_ = 0;
          local_68._4_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar22,local_68._4_4_,(ForAnyElementType *)(local_a8 + 0x38),iVar22,
                     (int *)(local_a8 + 0x44));
          if (iVar22 != 0) {
            memcpy(local_70.Data,pvVar14,(longlong)iVar22 << 2);
          }
        }
      }
      uVar19 = 0;
      if ((int)uVar25 < param_3->ArrayNum) {
        uVar19 = uVar28;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar17 = (code *)swi(3);
        pFVar21 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar17)();
        return pFVar21;
      }
      local_88 = *(float *)((param_3->AllocatorInstance).Data + uVar27 * 4);
      TGaussSeidelWeakConstraintData<float>::SetSingleConstraint
                (local_b0,(FGaussSeidelWeakConstraintSingleData<float> *)local_a8,uVar25);
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data);
      }
      if (local_80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data);
      }
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_a8._0_8_);
      }
      uVar20 = (ulonglong)(uVar25 + 1);
      iVar22 = param_1->ArrayNum;
      uVar27 = uVar27 + 1;
      uVar29 = uVar29 + 0x10;
    } while ((int)(uVar25 + 1) < iVar22);
  }
  uVar29 = 0;
  uVar27 = uVar29;
  if (0 < (int)(this->ConstraintsData)._padding_) {
    do {
      uVar25 = (uint)uVar27;
      uVar19 = 0;
      if ((int)uVar25 < *(int *)&(this->ConstraintsData).MIndices.field_0x10) {
        uVar19 = ~uVar25 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar17 = (code *)swi(3);
        pFVar21 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar17)();
        return pFVar21;
      }
      lVar15 = *(longlong *)&(this->ConstraintsData).MIndices.field_0x8;
      uVar19 = 0;
      if ((int)uVar25 < *(int *)&(this->ConstraintsData).MSecondIndices.field_0x10) {
        uVar19 = ~uVar25 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar17 = (code *)swi(3);
        pFVar21 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)(*pcVar17)();
        return pFVar21;
      }
      lVar16 = *(longlong *)&(this->ConstraintsData).MSecondIndices.field_0x8;
      uVar20 = 0;
      iVar22 = *(int *)(uVar29 + 8 + lVar16);
      uVar27 = uVar20;
      if (0 < iVar22) {
        do {
          uVar28 = (uint)uVar20;
          uVar19 = 0;
          if ((int)uVar28 < iVar22) {
            uVar19 = ~uVar28 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar17 = (code *)swi(3);
            pFVar21 = (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *)
                      (*pcVar17)();
            return pFVar21;
          }
          piVar24 = *(int **)(uVar29 + lVar15);
          piVar10 = piVar24 + *(int *)(uVar29 + 8 + lVar15);
          if (piVar24 != piVar10) {
            do {
              if (*piVar24 == *(int *)(uVar27 + *(longlong *)(uVar29 + lVar16))) {
                local_b7[0] = 0;
                `Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
                FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>'::__l8::<lambda_2>
                ::operator()(local_b7);
                break;
              }
              piVar24 = piVar24 + 1;
            } while (piVar24 != piVar10);
          }
          iVar22 = *(int *)(uVar29 + 8 + lVar16);
          uVar20 = (ulonglong)(uVar28 + 1);
          uVar27 = uVar27 + 4;
        } while ((int)(uVar28 + 1) < iVar22);
      }
      uVar29 = uVar29 + 0x10;
      uVar27 = (ulonglong)(uVar25 + 1);
    } while ((int)(uVar25 + 1) < (int)(this->ConstraintsData)._padding_);
  }
  return this;
}

// ~FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> @ 143a38af0

void __thiscall
Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
~FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &___7__FGaussSeidelWeakConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->NoCollisionWCIncidentElementsLocal).AllocatorInstance.Data,
             (this->NoCollisionWCIncidentElementsLocal).ArrayNum);
  pFVar1 = (this->NoCollisionWCIncidentElementsLocal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->NoCollisionWCIncidentElements).AllocatorInstance.Data,
             (this->NoCollisionWCIncidentElements).ArrayNum);
  pFVar1 = (this->NoCollisionWCIncidentElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->NoCollisionConstraints).AllocatorInstance.Data,
             (this->NoCollisionConstraints).ArrayNum);
  pFVar1 = (this->NoCollisionConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (this->NoCollisionNodalWeights).AllocatorInstance.Data,
             (this->NoCollisionNodalWeights).ArrayNum);
  pFVar1 = (this->NoCollisionNodalWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->WCIncidentElementsLocal).AllocatorInstance.Data,
             (this->WCIncidentElementsLocal).ArrayNum);
  pFVar1 = (this->WCIncidentElementsLocal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->WCIncidentElements).AllocatorInstance.Data,(this->WCIncidentElements).ArrayNum);
  pFVar1 = (this->WCIncidentElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (this->NodalWeights).AllocatorInstance.Data,(this->NodalWeights).ArrayNum);
  pFVar1 = (this->NodalWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TGaussSeidelWeakConstraintData<float>::~TGaussSeidelWeakConstraintData<float>
            (&this->ConstraintsData);
  return;
}

// operator() @ 143a3bd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
CollisionDetectionSpatialHash<Chaos::THierarchicalSpatialHash<int,float>_>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

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
  longlong *plVar10;
  FTriangleMesh *this_00;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  code *pcVar14;
  undefined8 uVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  TVector<float,3> *pTVar21;
  uint uVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [16];
  FGaussSeidelWeakConstraintSingleData<float> local_168;
  undefined4 local_108;
  int local_104;
  uint local_100;
  TArray<Chaos::TTriangleCollisionPoint<float>,TSizedDefaultAllocator<32>_> local_f8;
  FScriptContainerElement *local_e8;
  longlong local_d8;
  longlong local_d0;
  code *local_c8;
  undefined8 *local_c0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  float local_78;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  plVar10 = *(longlong **)((longlong)this + 0x18);
  uVar22 = 0;
  if (param_1 < (int)plVar10[1]) {
    uVar22 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  this_00 = *(FTriangleMesh **)((longlong)this + 0x28);
  uVar22 = *(uint *)(*plVar10 + (longlong)param_1 * 4);
  local_a8 = *(undefined8 *)this;
  local_a0 = *(undefined8 *)((longlong)this + 0x40);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_c0 = &local_a8;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<``Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::CollisionDetectionSpatialHash<Chaos::THierarchicalSpatialHash<int,float>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
             ::Call;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  fVar1 = **(float **)((longlong)this + 0x38);
  pTVar21 = Chaos::TParticles<float,3>::GetX
                      (*(TParticles<float,3> **)((longlong)this + 0x10),uVar22);
  local_b8.DataPtr = *(TVector<float,3> **)(*(longlong *)((longlong)this + 0x10) + 0x28);
  local_b8.ArrayNum = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x30);
  if ((local_b8.ArrayNum < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  bVar18 = Chaos::FTriangleMesh::PointClosestTriangleQuery<float>
                     (this_00,*(THierarchicalSpatialHash<int,float> **)((longlong)this + 8),
                      &local_b8,uVar22,pTVar21,fVar1,fVar1,
                      (TFunctionRef<bool___cdecl(int,int)> *)&local_c8,&local_f8);
  if (bVar18) {
    uVar23 = (ulonglong)local_f8.ArrayNum;
    pFVar26 = local_f8.AllocatorInstance.Data + 8;
    pFVar24 = local_f8.AllocatorInstance.Data + uVar23 * 0x38;
    local_100 = local_f8.ArrayNum;
    local_e8 = pFVar24;
    while( true ) {
      if (local_f8.ArrayNum != (int)uVar23) {
        local_178[0] = 0;
        `TCheckedPointerIterator<Chaos::TTriangleCollisionPoint<float>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_178);
      }
      if (pFVar26 + -8 == pFVar24) break;
      if (*(float *)(pFVar26 + 0x2c) <= 0.0 && *(float *)(pFVar26 + 0x2c) != 0.0) {
        uVar20 = *(uint *)pFVar26;
        lVar25 = (longlong)(int)uVar20;
        plVar10 = *(longlong **)((longlong)this + 0x30);
        uVar19 = 0;
        if ((int)uVar20 < (int)plVar10[1]) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        piVar11 = *(int **)((longlong)this + 0x20);
        local_d0 = lVar25 * 3;
        lVar12 = *plVar10;
        LOCK();
        local_104 = *piVar11;
        *piVar11 = *piVar11 + 1;
        UNLOCK();
        local_168.SingleIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.SingleIndices.ArrayMax = 0;
        local_168.SingleSecondIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.SingleSecondIndices.ArrayNum = 0;
        local_168.SingleSecondIndices.ArrayMax = 0;
        local_168.SingleStiffness = 0.0;
        local_168.SingleWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.SingleWeights.ArrayNum = 0;
        local_168.SingleWeights.ArrayMax = 0;
        local_168.SingleSecondWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.SingleSecondWeights.ArrayNum = 0;
        local_168.SingleSecondWeights.ArrayMax = 0;
        local_168.bIsAnisotropic = false;
        local_168.SingleNormal._0_8_ = 0;
        local_168.SingleNormal._8_4_ = 0;
        local_168.bIsZeroRestLength = false;
        local_168.RestLength = 0.0;
        local_90 = *(undefined4 *)(lVar12 + lVar25 * 0xc);
        uStack_8c = *(undefined4 *)(lVar12 + 4 + lVar25 * 0xc);
        local_88 = *(undefined4 *)(lVar12 + 8 + lVar25 * 0xc);
        local_168.SingleIndices.ArrayNum = 3;
        local_d8 = lVar12;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,3,0,(ForAnyElementType *)&local_168,3,&local_168.SingleIndices.ArrayMax);
        *(ulonglong *)local_168.SingleIndices.AllocatorInstance.Data = CONCAT44(uStack_8c,local_90);
        *(undefined4 *)(local_168.SingleIndices.AllocatorInstance.Data + 8) = local_88;
        local_168.SingleSecondIndices.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,1,local_168.SingleSecondIndices.ArrayMax,
                   &local_168.SingleSecondIndices.AllocatorInstance,1,
                   &local_168.SingleSecondIndices.ArrayMax);
        *(uint *)local_168.SingleSecondIndices.AllocatorInstance.Data = uVar22;
        local_78 = *(float *)(pFVar26 + 0x10);
        uVar15 = *(undefined8 *)(pFVar26 + 8);
        local_168.SingleWeights.ArrayNum = 3;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,3,local_168.SingleWeights.ArrayMax,&local_168.SingleWeights.AllocatorInstance
                   ,3,&local_168.SingleWeights.ArrayMax);
        local_108 = 0x3f800000;
        *(undefined8 *)local_168.SingleWeights.AllocatorInstance.Data = uVar15;
        *(float *)(local_168.SingleWeights.AllocatorInstance.Data + 8) = local_78;
        local_168.SingleSecondWeights.ArrayNum = 1;
        local_80 = uVar15;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,1,local_168.SingleSecondWeights.ArrayMax,
                   &local_168.SingleSecondWeights.AllocatorInstance,1,
                   &local_168.SingleSecondWeights.ArrayMax);
        *(undefined4 *)local_168.SingleSecondWeights.AllocatorInstance.Data = local_108;
        local_168.SingleNormal._0_8_ = *(undefined8 *)(pFVar26 + 0x20);
        lVar13 = *(longlong *)((longlong)this + 0x10);
        local_168.bIsAnisotropic = (bool)**(undefined1 **)((longlong)this + 0x50);
        local_168.SingleNormal._8_4_ = *(undefined4 *)(pFVar26 + 0x28);
        local_168.bIsZeroRestLength = true;
        uVar20 = *(uint *)(lVar12 + lVar25 * 0xc);
        if ((local_168.SingleWeights.ArrayNum < 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        FVar16.Data = local_168.SingleWeights.AllocatorInstance.Data;
        uVar19 = 0;
        if ((int)uVar20 < *(int *)(lVar13 + 0x80)) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar17 = local_d8;
        fVar1 = **(float **)((longlong)this + 0x48);
        fVar2 = *(float *)FVar16.Data;
        lVar12 = *(longlong *)((longlong)this + 0x10);
        fVar3 = *(float *)(*(longlong *)(lVar13 + 0x78) + (longlong)(int)uVar20 * 4);
        uVar20 = *(uint *)(local_d8 + 4 + lVar25 * 0xc);
        if ((local_168.SingleWeights.ArrayNum < 2) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        FVar16.Data = local_168.SingleWeights.AllocatorInstance.Data;
        uVar19 = 0;
        if ((int)uVar20 < *(int *)(lVar12 + 0x80)) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar25 = *(longlong *)((longlong)this + 0x10);
        fVar4 = **(float **)((longlong)this + 0x48);
        fVar5 = *(float *)(FVar16.Data + 4);
        fVar6 = *(float *)(*(longlong *)(lVar12 + 0x78) + (longlong)(int)uVar20 * 4);
        uVar20 = *(uint *)(lVar17 + 8 + local_d0 * 4);
        if ((local_168.SingleWeights.ArrayNum < 3) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        FVar16.Data = local_168.SingleWeights.AllocatorInstance.Data;
        uVar19 = 0;
        if ((int)uVar20 < *(int *)(lVar25 + 0x80)) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        fVar7 = **(float **)((longlong)this + 0x48);
        fVar8 = *(float *)(FVar16.Data + 8);
        fVar9 = *(float *)(*(longlong *)(lVar25 + 0x78) + (longlong)(int)uVar20 * 4);
        lVar25 = *(longlong *)((longlong)this + 0x10);
        uVar20 = 0;
        if ((int)uVar22 < *(int *)(lVar25 + 0x80)) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        local_168.SingleStiffness =
             *(float *)(*(longlong *)(lVar25 + 0x78) + (longlong)(int)uVar22 * 4) *
             **(float **)((longlong)this + 0x48) +
             fVar1 * fVar2 * fVar3 + fVar4 * fVar5 * fVar6 + fVar7 * fVar8 * fVar9;
        Chaos::Softs::TGaussSeidelWeakConstraintData<float>::SetSingleConstraint
                  ((TGaussSeidelWeakConstraintData<float> *)(*(longlong *)this + 8),&local_168,
                   local_104);
        if (local_168.SingleSecondWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_168.SingleSecondWeights.AllocatorInstance.Data);
        }
        if (local_168.SingleWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.SingleWeights.AllocatorInstance.Data);
        }
        if (local_168.SingleSecondIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_168.SingleSecondIndices.AllocatorInstance.Data);
        }
        pFVar24 = local_e8;
        if (local_168.SingleIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.SingleIndices.AllocatorInstance.Data);
          pFVar24 = local_e8;
        }
      }
      uVar23 = (ulonglong)local_100;
      pFVar26 = pFVar26 + 0x38;
    }
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 143a3c4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
CollisionDetectionSpatialHashInComponent<Chaos::THierarchicalSpatialHash<int,float>_>'::__l2::
<lambda_1>::operator()(void *this,int param_1)

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
  longlong *plVar10;
  FTriangleMesh *this_00;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  code *pcVar14;
  undefined8 uVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  TVector<float,3> *pTVar21;
  uint uVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [16];
  FGaussSeidelWeakConstraintSingleData<float> local_168;
  undefined4 local_108;
  int local_104;
  uint local_100;
  TArray<Chaos::TTriangleCollisionPoint<float>,TSizedDefaultAllocator<32>_> local_f8;
  FScriptContainerElement *local_e8;
  longlong local_d8;
  longlong local_d0;
  code *local_c8;
  undefined8 *local_c0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  float local_78;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  plVar10 = *(longlong **)((longlong)this + 0x18);
  uVar22 = 0;
  if (param_1 < (int)plVar10[1]) {
    uVar22 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  this_00 = *(FTriangleMesh **)((longlong)this + 0x28);
  uVar22 = *(uint *)(*plVar10 + (longlong)param_1 * 4);
  local_a8 = *(undefined8 *)this;
  local_a0 = *(undefined8 *)((longlong)this + 0x38);
  local_98 = *(undefined8 *)((longlong)this + 0x30);
  local_c0 = &local_a8;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<``Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::CollisionDetectionSpatialHashInComponent<Chaos::THierarchicalSpatialHash<int,float>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
             ::Call;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  fVar1 = **(float **)((longlong)this + 0x40);
  pTVar21 = Chaos::TParticles<float,3>::GetX
                      (*(TParticles<float,3> **)((longlong)this + 0x10),uVar22);
  local_b8.DataPtr = *(TVector<float,3> **)(*(longlong *)((longlong)this + 0x10) + 0x28);
  local_b8.ArrayNum = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x30);
  if ((local_b8.ArrayNum < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  bVar18 = Chaos::FTriangleMesh::PointClosestTriangleQuery<float>
                     (this_00,*(THierarchicalSpatialHash<int,float> **)((longlong)this + 8),
                      &local_b8,uVar22,pTVar21,fVar1,fVar1,
                      (TFunctionRef<bool___cdecl(int,int)> *)&local_c8,&local_f8);
  if (bVar18) {
    uVar23 = (ulonglong)local_f8.ArrayNum;
    pFVar26 = local_f8.AllocatorInstance.Data + 8;
    pFVar24 = local_f8.AllocatorInstance.Data + uVar23 * 0x38;
    local_100 = local_f8.ArrayNum;
    local_e8 = pFVar24;
    while( true ) {
      if (local_f8.ArrayNum != (int)uVar23) {
        local_178[0] = 0;
        `TCheckedPointerIterator<Chaos::TTriangleCollisionPoint<float>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_178);
      }
      if (pFVar26 + -8 == pFVar24) break;
      if (*(float *)(pFVar26 + 0x2c) <= 0.0 && *(float *)(pFVar26 + 0x2c) != 0.0) {
        uVar20 = *(uint *)pFVar26;
        lVar25 = (longlong)(int)uVar20;
        plVar10 = *(longlong **)((longlong)this + 0x38);
        uVar19 = 0;
        if ((int)uVar20 < (int)plVar10[1]) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        piVar11 = *(int **)((longlong)this + 0x20);
        local_d0 = lVar25 * 3;
        lVar12 = *plVar10;
        LOCK();
        local_104 = *piVar11;
        *piVar11 = *piVar11 + 1;
        UNLOCK();
        local_168.SingleIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.SingleIndices.ArrayMax = 0;
        local_168.SingleSecondIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.SingleSecondIndices.ArrayNum = 0;
        local_168.SingleSecondIndices.ArrayMax = 0;
        local_168.SingleStiffness = 0.0;
        local_168.SingleWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.SingleWeights.ArrayNum = 0;
        local_168.SingleWeights.ArrayMax = 0;
        local_168.SingleSecondWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.SingleSecondWeights.ArrayNum = 0;
        local_168.SingleSecondWeights.ArrayMax = 0;
        local_168.bIsAnisotropic = false;
        local_168.SingleNormal._0_8_ = 0;
        local_168.SingleNormal._8_4_ = 0;
        local_168.bIsZeroRestLength = false;
        local_168.RestLength = 0.0;
        local_90 = *(undefined4 *)(lVar12 + lVar25 * 0xc);
        uStack_8c = *(undefined4 *)(lVar12 + 4 + lVar25 * 0xc);
        local_88 = *(undefined4 *)(lVar12 + 8 + lVar25 * 0xc);
        local_168.SingleIndices.ArrayNum = 3;
        local_d8 = lVar12;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,3,0,(ForAnyElementType *)&local_168,3,&local_168.SingleIndices.ArrayMax);
        *(ulonglong *)local_168.SingleIndices.AllocatorInstance.Data = CONCAT44(uStack_8c,local_90);
        *(undefined4 *)(local_168.SingleIndices.AllocatorInstance.Data + 8) = local_88;
        local_168.SingleSecondIndices.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,1,local_168.SingleSecondIndices.ArrayMax,
                   &local_168.SingleSecondIndices.AllocatorInstance,1,
                   &local_168.SingleSecondIndices.ArrayMax);
        *(uint *)local_168.SingleSecondIndices.AllocatorInstance.Data = uVar22;
        local_78 = *(float *)(pFVar26 + 0x10);
        uVar15 = *(undefined8 *)(pFVar26 + 8);
        local_168.SingleWeights.ArrayNum = 3;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,3,local_168.SingleWeights.ArrayMax,&local_168.SingleWeights.AllocatorInstance
                   ,3,&local_168.SingleWeights.ArrayMax);
        local_108 = 0x3f800000;
        *(undefined8 *)local_168.SingleWeights.AllocatorInstance.Data = uVar15;
        *(float *)(local_168.SingleWeights.AllocatorInstance.Data + 8) = local_78;
        local_168.SingleSecondWeights.ArrayNum = 1;
        local_80 = uVar15;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,1,local_168.SingleSecondWeights.ArrayMax,
                   &local_168.SingleSecondWeights.AllocatorInstance,1,
                   &local_168.SingleSecondWeights.ArrayMax);
        *(undefined4 *)local_168.SingleSecondWeights.AllocatorInstance.Data = local_108;
        local_168.SingleNormal._0_8_ = *(undefined8 *)(pFVar26 + 0x20);
        lVar13 = *(longlong *)((longlong)this + 0x10);
        local_168.bIsAnisotropic = (bool)**(undefined1 **)((longlong)this + 0x50);
        local_168.SingleNormal._8_4_ = *(undefined4 *)(pFVar26 + 0x28);
        local_168.bIsZeroRestLength = true;
        uVar20 = *(uint *)(lVar12 + lVar25 * 0xc);
        if ((local_168.SingleWeights.ArrayNum < 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        FVar16.Data = local_168.SingleWeights.AllocatorInstance.Data;
        uVar19 = 0;
        if ((int)uVar20 < *(int *)(lVar13 + 0x80)) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar17 = local_d8;
        fVar1 = **(float **)((longlong)this + 0x48);
        fVar2 = *(float *)FVar16.Data;
        lVar12 = *(longlong *)((longlong)this + 0x10);
        fVar3 = *(float *)(*(longlong *)(lVar13 + 0x78) + (longlong)(int)uVar20 * 4);
        uVar20 = *(uint *)(local_d8 + 4 + lVar25 * 0xc);
        if ((local_168.SingleWeights.ArrayNum < 2) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        FVar16.Data = local_168.SingleWeights.AllocatorInstance.Data;
        uVar19 = 0;
        if ((int)uVar20 < *(int *)(lVar12 + 0x80)) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar25 = *(longlong *)((longlong)this + 0x10);
        fVar4 = **(float **)((longlong)this + 0x48);
        fVar5 = *(float *)(FVar16.Data + 4);
        fVar6 = *(float *)(*(longlong *)(lVar12 + 0x78) + (longlong)(int)uVar20 * 4);
        uVar20 = *(uint *)(lVar17 + 8 + local_d0 * 4);
        if ((local_168.SingleWeights.ArrayNum < 3) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        FVar16.Data = local_168.SingleWeights.AllocatorInstance.Data;
        uVar19 = 0;
        if ((int)uVar20 < *(int *)(lVar25 + 0x80)) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        fVar7 = **(float **)((longlong)this + 0x48);
        fVar8 = *(float *)(FVar16.Data + 8);
        fVar9 = *(float *)(*(longlong *)(lVar25 + 0x78) + (longlong)(int)uVar20 * 4);
        lVar25 = *(longlong *)((longlong)this + 0x10);
        uVar20 = 0;
        if ((int)uVar22 < *(int *)(lVar25 + 0x80)) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        local_168.SingleStiffness =
             *(float *)(*(longlong *)(lVar25 + 0x78) + (longlong)(int)uVar22 * 4) *
             **(float **)((longlong)this + 0x48) +
             fVar1 * fVar2 * fVar3 + fVar4 * fVar5 * fVar6 + fVar7 * fVar8 * fVar9;
        Chaos::Softs::TGaussSeidelWeakConstraintData<float>::SetSingleConstraint
                  ((TGaussSeidelWeakConstraintData<float> *)(*(longlong *)this + 8),&local_168,
                   local_104);
        if (local_168.SingleSecondWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_168.SingleSecondWeights.AllocatorInstance.Data);
        }
        if (local_168.SingleWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.SingleWeights.AllocatorInstance.Data);
        }
        if (local_168.SingleSecondIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_168.SingleSecondIndices.AllocatorInstance.Data);
        }
        pFVar24 = local_e8;
        if (local_168.SingleIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.SingleIndices.AllocatorInstance.Data);
          pFVar24 = local_e8;
        }
      }
      uVar23 = (ulonglong)local_100;
      pFVar26 = pFVar26 + 0x38;
    }
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// AddExtraConstraints @ 143a463f0

void __thiscall
Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::AddExtraConstraints
          (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_6,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_7)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 local_a8 [16];
  ForAnyElementType local_98;
  undefined8 local_90;
  float local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  FScriptContainerElement local_60;
  TVector<float,3> local_5c;
  FScriptContainerElement local_50;
  float local_4c;
  
  iVar1 = (int)(this->ConstraintsData)._padding_;
  if (param_1->ArrayNum != 0) {
    TArrayCollection::ResizeHelper
              ((TArrayCollection *)&this->ConstraintsData,iVar1 + param_1->ArrayNum);
  }
  iVar6 = param_1->ArrayNum;
  uVar8 = 0;
  uVar11 = uVar8;
  uVar13 = uVar8;
  if (0 < iVar6) {
    do {
      uVar9 = (uint)uVar8;
      local_a8._0_8_ = (FScriptContainerElement *)0x0;
      local_a8._8_4_ = 0;
      local_a8._12_4_ = 0;
      uVar12 = ~uVar9 >> 0x1f;
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90._0_4_ = 0;
      local_90._4_4_ = 0;
      uVar5 = 0;
      if ((int)uVar9 < iVar6) {
        uVar5 = uVar12;
      }
      local_88 = 0.0;
      local_80.Data = (FScriptContainerElement *)0x0;
      local_78._0_4_ = 0;
      local_78._4_4_ = 0;
      local_70.Data = (FScriptContainerElement *)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0;
      local_60 = (FScriptContainerElement)0x0;
      local_5c._0_8_ = 0;
      local_5c._8_4_ = 0;
      local_50 = (FScriptContainerElement)0x0;
      local_4c = 0.0;
      uVar10 = 0;
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = local_a8._12_4_;
      }
      pFVar7 = (param_1->AllocatorInstance).Data + uVar11;
      if ((FScriptContainerElement *)local_a8 != pFVar7) {
        iVar6 = *(int *)(pFVar7 + 8);
        pvVar2 = *(void **)&pFVar7->field_0x0;
        local_a8._8_4_ = iVar6;
        if ((iVar6 == 0) && (uVar10 == 0)) {
          local_a8._8_4_ = 0;
          local_a8._12_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar6,uVar10,(ForAnyElementType *)local_a8,iVar6,(int *)(local_a8 + 0xc));
          if (iVar6 != 0) {
            memcpy((void *)local_a8._0_8_,pvVar2,(longlong)iVar6 << 2);
          }
        }
      }
      uVar5 = 0;
      if ((int)uVar9 < param_4->ArrayNum) {
        uVar5 = uVar12;
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
      pFVar7 = (param_4->AllocatorInstance).Data + uVar11;
      if ((FScriptContainerElement *)(local_a8 + 0x10) != pFVar7) {
        iVar6 = *(int *)(pFVar7 + 8);
        pvVar2 = *(void **)pFVar7;
        local_90._0_4_ = iVar6;
        if ((iVar6 == 0) && (local_90._4_4_ == 0)) {
          local_90._0_4_ = 0;
          local_90._4_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar6,local_90._4_4_,(ForAnyElementType *)(local_a8 + 0x10),iVar6,
                     (int *)(local_a8 + 0x1c));
          if (iVar6 != 0) {
            memcpy(local_98.Data,pvVar2,(longlong)iVar6 << 2);
          }
        }
      }
      uVar5 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar5 = uVar12;
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
      pFVar7 = (param_2->AllocatorInstance).Data + uVar11;
      if ((FScriptContainerElement *)(local_a8 + 0x28) != pFVar7) {
        iVar6 = *(int *)(pFVar7 + 8);
        pvVar2 = *(void **)pFVar7;
        local_78._0_4_ = iVar6;
        if ((iVar6 == 0) && (local_78._4_4_ == 0)) {
          local_78._0_4_ = 0;
          local_78._4_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar6,local_78._4_4_,(ForAnyElementType *)(local_a8 + 0x28),iVar6,
                     (int *)(local_a8 + 0x34));
          if (iVar6 != 0) {
            memcpy(local_80.Data,pvVar2,(longlong)iVar6 << 2);
          }
        }
      }
      uVar5 = 0;
      if ((int)uVar9 < param_5->ArrayNum) {
        uVar5 = uVar12;
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
      pFVar7 = (param_5->AllocatorInstance).Data + uVar11;
      if ((FScriptContainerElement *)(local_a8 + 0x38) != pFVar7) {
        iVar6 = *(int *)(pFVar7 + 8);
        pvVar2 = *(void **)pFVar7;
        local_68._0_4_ = iVar6;
        if ((iVar6 == 0) && (local_68._4_4_ == 0)) {
          local_68._0_4_ = 0;
          local_68._4_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar6,local_68._4_4_,(ForAnyElementType *)(local_a8 + 0x38),iVar6,
                     (int *)(local_a8 + 0x44));
          if (iVar6 != 0) {
            memcpy(local_70.Data,pvVar2,(longlong)iVar6 << 2);
          }
        }
      }
      uVar5 = 0;
      if ((int)uVar9 < param_3->ArrayNum) {
        uVar5 = uVar12;
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
      local_88 = *(float *)((param_3->AllocatorInstance).Data + uVar13 * 4);
      uVar5 = 0;
      if ((int)uVar9 < param_6->ArrayNum) {
        uVar5 = uVar12;
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
      local_60 = (param_6->AllocatorInstance).Data[uVar13];
      uVar5 = 0;
      if ((int)uVar9 < param_7->ArrayNum) {
        uVar5 = uVar12;
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
      local_50 = (param_7->AllocatorInstance).Data[uVar13];
      TGaussSeidelWeakConstraintData<float>::SetSingleConstraint
                (&this->ConstraintsData,(FGaussSeidelWeakConstraintSingleData<float> *)local_a8,
                 iVar1 + uVar9);
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data);
      }
      if (local_80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data);
      }
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_a8._0_8_);
      }
      iVar6 = param_1->ArrayNum;
      uVar8 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 0x10;
      uVar13 = uVar13 + 1;
    } while ((int)(uVar9 + 1) < iVar6);
  }
  return;
}

// AddWCHessian @ 143a4bd80

void __thiscall
Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::AddWCHessian
          (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *this,int param_1,
          float param_2,PMatrix<float,3,3> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  
  lVar7 = (longlong)param_1;
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < (this->NodalWeights).ArrayNum) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (0 < *(int *)((this->NodalWeights).AllocatorInstance.Data + lVar7 * 0x10 + 8)) {
    uVar4 = 0;
    if (param_1 < (this->NodalWeights).ArrayNum) {
      uVar4 = uVar6;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->NodalWeights).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + lVar7 * 0x10 + 8) < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    fVar8 = param_2 * param_2;
    *(float *)param_3 = fVar8 * **(float **)(pFVar1 + lVar7 * 0x10) + *(float *)param_3;
    uVar5 = 0;
    uVar4 = uVar5;
    if (param_1 < (this->NodalWeights).ArrayNum) {
      uVar4 = uVar6;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->NodalWeights).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + lVar7 * 0x10 + 8) < 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(float *)&param_3->field_0x14 =
         fVar8 * *(float *)(*(longlong *)(pFVar1 + lVar7 * 0x10) + 4) +
         *(float *)&param_3->field_0x14;
    uVar4 = uVar5;
    if (param_1 < (this->NodalWeights).ArrayNum) {
      uVar4 = uVar6;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->NodalWeights).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + lVar7 * 0x10 + 8) < 3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(float *)&param_3->field_0x28 =
         fVar8 * *(float *)(*(longlong *)(pFVar1 + lVar7 * 0x10) + 8) +
         *(float *)&param_3->field_0x28;
    uVar4 = uVar5;
    if (param_1 < (this->NodalWeights).ArrayNum) {
      uVar4 = uVar6;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->NodalWeights).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + lVar7 * 0x10 + 8) < 4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(float *)&param_3->field_0x10 =
         fVar8 * *(float *)(*(longlong *)(pFVar1 + lVar7 * 0x10) + 0xc) +
         *(float *)&param_3->field_0x10;
    uVar4 = uVar5;
    if (param_1 < (this->NodalWeights).ArrayNum) {
      uVar4 = uVar6;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->NodalWeights).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + lVar7 * 0x10 + 8) < 5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(float *)&param_3->field_0x20 =
         fVar8 * *(float *)(*(longlong *)(pFVar1 + lVar7 * 0x10) + 0x10) +
         *(float *)&param_3->field_0x20;
    if (param_1 < (this->NodalWeights).ArrayNum) {
      uVar5 = uVar6;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->NodalWeights).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + lVar7 * 0x10 + 8) < 6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(float *)&param_3->field_0x24 =
         fVar8 * *(float *)(*(longlong *)(pFVar1 + lVar7 * 0x10) + 0x14) +
         *(float *)&param_3->field_0x24;
    uVar5 = 0;
    uVar4 = uVar5;
    if (param_1 < (this->NodalWeights).ArrayNum) {
      uVar4 = uVar6;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->NodalWeights).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + lVar7 * 0x10 + 8) < 4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(float *)&param_3->field_0x4 =
         fVar8 * *(float *)(*(longlong *)(pFVar1 + lVar7 * 0x10) + 0xc) +
         *(float *)&param_3->field_0x4;
    uVar4 = uVar5;
    if (param_1 < (this->NodalWeights).ArrayNum) {
      uVar4 = uVar6;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->NodalWeights).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + lVar7 * 0x10 + 8) < 5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(float *)&param_3->field_0x8 =
         fVar8 * *(float *)(*(longlong *)(pFVar1 + lVar7 * 0x10) + 0x10) +
         *(float *)&param_3->field_0x8;
    if (param_1 < (this->NodalWeights).ArrayNum) {
      uVar5 = uVar6;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->NodalWeights).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + lVar7 * 0x10 + 8) < 6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(float *)&param_3->field_0x18 =
         fVar8 * *(float *)(*(longlong *)(pFVar1 + lVar7 * 0x10) + 0x14) +
         *(float *)&param_3->field_0x18;
  }
  return;
}

// AddWCResidual @ 143a4c3f0

void __thiscall
Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::AddWCResidual
          (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,int param_2,int param_3,float param_4,TVector<float,3> *param_5,
          PMatrix<float,3,3> *param_6)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_a0;
  undefined1 local_98 [80];
  float local_48;
  float local_44;
  bool local_40;
  float local_3c;
  
  TGaussSeidelWeakConstraintData<float>::GetSingleConstraintData
            (&this->ConstraintsData,(FGaussSeidelWeakConstraintSingleData<float> *)local_98,param_2)
  ;
  ComputeSpringEdge(this,(TVector<float,3> *)&local_b8,param_1,
                    (TArray<int,TSizedDefaultAllocator<32>_> *)local_98,
                    (TArray<int,TSizedDefaultAllocator<32>_> *)(local_98 + 0x10),
                    (TArray<float,TSizedDefaultAllocator<32>_> *)(local_98 + 0x28),
                    (TArray<float,TSizedDefaultAllocator<32>_> *)(local_98 + 0x38),false);
  if (param_3 < (int)local_98._8_4_) {
    uVar3 = 0;
    if (param_3 < (int)local_98._48_4_) {
      uVar3 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar9 = *(float *)(local_98._40_8_ + (longlong)param_3 * 4);
  }
  else {
    uVar4 = param_3 - local_98._8_4_;
    uVar3 = 0;
    if ((int)uVar4 < (int)local_98._64_4_) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar9 = (float)(*(uint *)(local_98._56_8_ + (longlong)(int)uVar4 * 4) ^
                   __xmm_80000000800000008000000080000000);
  }
  if (local_98[0x48] == false) {
    local_a0 = local_b0;
    if (local_40 == false) {
      fVar5 = fStack_b4 * fStack_b4 + local_b8 * local_b8 + local_b0 * local_b0;
      uVar6 = local_b8;
      uVar7 = fStack_b4;
      uVar8 = local_b0;
      if ((fVar5 != __real_3f800000) &&
         (uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
         uVar7 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
         uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, __real_322bcc77 <= fVar5))
      {
        fVar5 = __real_3f800000 / SQRT(fVar5);
        uVar6 = fVar5 * local_b8;
        uVar7 = fVar5 * fStack_b4;
        uVar8 = fVar5 * local_b0;
      }
      local_b8 = local_b8 - (float)uVar6 * local_3c;
      fStack_b4 = fStack_b4 - local_3c * (float)uVar7;
      local_b0 = local_b0 - local_3c * (float)uVar8;
    }
  }
  else {
    local_3c = (local_48 * fStack_b4 + (float)local_98._76_4_ * local_b8 + local_44 * local_b0) -
               local_3c;
    local_b8 = local_3c * (float)local_98._76_4_;
    fStack_b4 = local_3c * local_48;
    local_b0 = local_3c * local_44;
  }
  fVar5 = param_4 * param_4 * (float)local_98._32_4_;
  *(float *)param_5 = fVar5 * local_b8 * fVar9 + *(float *)param_5;
  *(float *)&param_5->field_0x4 = fVar5 * fStack_b4 * fVar9 + *(float *)&param_5->field_0x4;
  *(float *)&param_5->field_0x8 = fVar5 * local_b0 * fVar9 + *(float *)&param_5->field_0x8;
  if ((FScriptContainerElement *)local_98._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._56_8_);
  }
  if ((FScriptContainerElement *)local_98._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._40_8_);
  }
  if ((FScriptContainerElement *)local_98._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._16_8_);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// ComputeCollisionWCDataSimplified @ 143a5ac90

void __thiscall
Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
ComputeCollisionWCDataSimplified
          (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  void *_Dst;
  undefined4 uVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  undefined4 local_138;
  uint local_134;
  undefined1 local_130 [8];
  ulonglong local_128;
  uint local_120;
  uint local_11c;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  TArray<int,TSizedDefaultAllocator<32>_> local_100;
  undefined1 local_e8 [80];
  float local_98;
  float local_94;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_88 [4];
  
  if ((int)(this->ConstraintsData)._padding_ < this->InitialWCSize) {
    local_130[0] = 0;
    `Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
    ComputeCollisionWCDataSimplified'::__l2::<lambda_1>::operator()(local_130);
  }
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Init
            (param_1,&local_100,(int)(this->ConstraintsData)._padding_ - this->InitialWCSize);
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  local_134 = this->InitialWCSize;
  uVar16 = (ulonglong)(int)local_134;
  if ((int)local_134 < (int)(this->ConstraintsData)._padding_) {
    lVar13 = uVar16 << 4;
    uVar17 = uVar16;
    do {
      uVar10 = (uint)uVar17;
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&(this->ConstraintsData).MIndices.field_0x10) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      local_128 = uVar16;
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar18 = *(longlong *)&(this->ConstraintsData).MIndices.field_0x8;
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&(this->ConstraintsData).MSecondIndices.field_0x10) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      local_110 = lVar18;
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar15 = *(longlong *)&(this->ConstraintsData).MSecondIndices.field_0x8;
      uVar8 = uVar10 - this->InitialWCSize;
      uVar9 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      local_118 = lVar15;
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar9 = *(int *)(lVar13 + 8 + lVar15) + *(int *)(lVar13 + 8 + lVar18);
      pFVar14 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10;
      iVar6 = *(int *)&pFVar14[8].field_0x0;
      pFVar11 = pFVar14 + 8;
      if (iVar6 < (int)uVar9) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar9 - iVar6,(ForAnyElementType *)pFVar14,(int *)pFVar11,
                           (int *)(pFVar14 + 0xc));
        memset((void *)(*(longlong *)&pFVar14->field_0x0 + (longlong)iVar5 * 4),0,
               (longlong)(int)(uVar9 - iVar6) << 2);
      }
      else {
        if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
        }
        if ((int)uVar9 < iVar6) {
          uVar8 = iVar6 - uVar9;
          if (((int)(uVar8 | uVar9) < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar8 != 0) {
            _Dst = (void *)(*(longlong *)&pFVar14->field_0x0 + (longlong)(int)uVar9 * 4);
            iVar6 = (*(int *)&pFVar11->field_0x0 - uVar8) - uVar9;
            if (iVar6 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2)
              ;
            }
            *(uint *)&pFVar11->field_0x0 = *(int *)&pFVar11->field_0x0 - uVar8;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)pFVar14,*(int *)&pFVar11->field_0x0,
                       (int *)(pFVar14 + 0xc));
          }
        }
      }
      iVar6 = *(int *)(lVar13 + 8 + lVar18);
      uVar9 = 0;
      if (0 < iVar6) {
        lVar15 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar9 < iVar6) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
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
          uVar1 = *(undefined4 *)(lVar15 + *(longlong *)(lVar13 + lVar18));
          uVar8 = (int)uVar17 - this->InitialWCSize;
          uVar10 = 0;
          if ((int)uVar8 < param_1->ArrayNum) {
            uVar10 = ~uVar8 >> 0x1f;
          }
          if ((uVar10 == 0) &&
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
          pFVar11 = (param_1->AllocatorInstance).Data;
          uVar10 = 0;
          if ((int)uVar9 < *(int *)(pFVar11 + (longlong)(int)uVar8 * 0x10 + 8)) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
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
          uVar9 = uVar9 + 1;
          uVar17 = (ulonglong)local_134;
          *(undefined4 *)(lVar15 + *(longlong *)(pFVar11 + (longlong)(int)uVar8 * 0x10)) = uVar1;
          lVar15 = lVar15 + 4;
          iVar6 = *(int *)(lVar13 + 8 + local_110);
          lVar18 = local_110;
          uVar10 = local_134;
        } while ((int)uVar9 < iVar6);
      }
      uVar9 = 0;
      iVar6 = *(int *)(lVar13 + 8 + local_118);
      if (0 < iVar6) {
        lVar18 = 0;
        do {
          lVar15 = local_118;
          uVar10 = 0;
          if ((int)uVar9 < iVar6) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
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
          uVar1 = *(undefined4 *)(lVar18 + *(longlong *)(lVar13 + lVar15));
          uVar8 = local_134 - this->InitialWCSize;
          uVar10 = 0;
          if ((int)uVar8 < param_1->ArrayNum) {
            uVar10 = ~uVar8 >> 0x1f;
          }
          if ((uVar10 == 0) &&
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
          pFVar11 = (param_1->AllocatorInstance).Data;
          uVar12 = *(int *)(lVar13 + 8 + local_110) + uVar9;
          uVar10 = 0;
          if ((int)uVar12 < *(int *)(pFVar11 + (longlong)(int)uVar8 * 0x10 + 8)) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
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
          uVar9 = uVar9 + 1;
          lVar18 = lVar18 + 4;
          *(undefined4 *)
           (*(longlong *)(pFVar11 + (longlong)(int)uVar8 * 0x10) + (longlong)(int)uVar12 * 4) =
               uVar1;
          iVar6 = *(int *)(lVar13 + 8 + local_118);
          uVar10 = local_134;
        } while ((int)uVar9 < iVar6);
      }
      local_134 = uVar10 + 1;
      uVar17 = (ulonglong)local_134;
      uVar16 = local_128 + 1;
      lVar13 = lVar13 + 0x10;
      local_128 = uVar16;
    } while ((int)local_134 < (int)(this->ConstraintsData)._padding_);
  }
  pTVar7 = Utilities::ComputeIncidentElements(local_88,param_1,param_3);
  if (param_2 != pTVar7) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_2->AllocatorInstance).Data,
               param_2->ArrayNum);
    pFVar11 = (param_2->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (param_2->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_2->ArrayNum = pTVar7->ArrayNum;
    param_2->ArrayMax = pTVar7->ArrayMax;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_88[0].AllocatorInstance.Data,
             local_88[0].ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_88[0].AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_88[0].AllocatorInstance.Data);
  }
  this_00 = &this->NodalWeights;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (this_00,&this->NoCollisionNodalWeights);
  iVar6 = param_2->ArrayNum;
  local_11c = 0;
  if (0 < iVar6) {
    local_108 = 0;
    local_128 = 0;
    do {
      lVar13 = local_108;
      uVar10 = local_11c;
      uVar16 = local_128;
      uVar8 = ~local_11c >> 0x1f;
      uVar9 = 0;
      if ((int)local_11c < iVar6) {
        uVar9 = uVar8;
      }
      local_120 = uVar8;
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (0 < *(int *)((param_2->AllocatorInstance).Data + lVar13 + 8)) {
        uVar12 = 0;
        uVar9 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar9 = uVar8;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar11 = (param_2->AllocatorInstance).Data;
        if ((*(int *)(pFVar11 + uVar16 * 0x10 + 8) < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = **(uint **)(pFVar11 + uVar16 * 0x10);
        uVar9 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar16 = local_128;
        uVar9 = 0;
        pFVar11 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
        uVar10 = uVar9;
        if ((int)local_11c < param_3->ArrayNum) {
          uVar10 = uVar8;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar14 = (param_3->AllocatorInstance).Data;
        if ((*(int *)(pFVar14 + uVar16 * 0x10 + 8) < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = **(uint **)(pFVar14 + uVar16 * 0x10);
        uVar8 = uVar9;
        if ((int)uVar10 < *(int *)(pFVar11 + 8)) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = *(uint *)(*(longlong *)pFVar11 + (longlong)(int)uVar10 * 4);
        lVar18 = (longlong)(int)uVar8;
        local_134 = ~uVar8 >> 0x1f;
        uVar10 = uVar9;
        if ((int)uVar8 < (this->NodalWeights).ArrayNum) {
          uVar10 = local_134;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)((this_00->AllocatorInstance).Data + lVar18 * 0x10 + 8) == 0) {
          if ((int)uVar8 < (this->NodalWeights).ArrayNum) {
            uVar9 = local_134;
          }
          if ((uVar9 == 0) &&
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
          pFVar14 = (this_00->AllocatorInstance).Data + lVar18 * 0x10;
          local_138 = 0;
          pFVar11 = pFVar14 + 0xc;
          iVar6 = *(int *)pFVar11;
          *(undefined4 *)&pFVar14[8].field_0x0 = 0;
          if (iVar6 != 6) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,6,(ForAnyElementType *)pFVar14,0,(int *)pFVar11);
            iVar6 = *(int *)pFVar11;
          }
          if (((*(undefined4 **)&pFVar14->field_0x0 <= &local_138) &&
              (&local_138 < *(undefined4 **)&pFVar14->field_0x0 + iVar6)) &&
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
          iVar6 = *(int *)&pFVar14[8].field_0x0;
          if (iVar6 == *(int *)pFVar11) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)pFVar14,(int *)pFVar11);
          }
          *(int *)&pFVar14[8].field_0x0 = iVar6 + 1;
          *(undefined4 *)(*(longlong *)&pFVar14->field_0x0 + (longlong)iVar6 * 4) = local_138;
          if (((*(undefined4 **)&pFVar14->field_0x0 <= &local_138) &&
              (&local_138 < *(undefined4 **)&pFVar14->field_0x0 + *(int *)(pFVar14 + 0xc))) &&
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
          iVar6 = *(int *)&pFVar14[8].field_0x0;
          if (iVar6 == *(int *)(pFVar14 + 0xc)) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)pFVar14,(int *)pFVar11);
          }
          *(int *)&pFVar14[8].field_0x0 = iVar6 + 1;
          *(undefined4 *)(*(longlong *)&pFVar14->field_0x0 + (longlong)iVar6 * 4) = local_138;
          if (((*(undefined4 **)&pFVar14->field_0x0 <= &local_138) &&
              (&local_138 < *(undefined4 **)&pFVar14->field_0x0 + *(int *)(pFVar14 + 0xc))) &&
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
          iVar6 = *(int *)&pFVar14[8].field_0x0;
          if (iVar6 == *(int *)(pFVar14 + 0xc)) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)pFVar14,(int *)pFVar11);
          }
          *(int *)&pFVar14[8].field_0x0 = iVar6 + 1;
          *(undefined4 *)(*(longlong *)&pFVar14->field_0x0 + (longlong)iVar6 * 4) = local_138;
          if (((*(undefined4 **)&pFVar14->field_0x0 <= &local_138) &&
              (&local_138 < *(undefined4 **)&pFVar14->field_0x0 + *(int *)(pFVar14 + 0xc))) &&
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
          iVar6 = *(int *)&pFVar14[8].field_0x0;
          if (iVar6 == *(int *)(pFVar14 + 0xc)) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)pFVar14,(int *)pFVar11);
          }
          *(int *)&pFVar14[8].field_0x0 = iVar6 + 1;
          *(undefined4 *)(*(longlong *)&pFVar14->field_0x0 + (longlong)iVar6 * 4) = local_138;
          if (((*(undefined4 **)&pFVar14->field_0x0 <= &local_138) &&
              (&local_138 < *(undefined4 **)&pFVar14->field_0x0 + *(int *)(pFVar14 + 0xc))) &&
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
          iVar6 = *(int *)&pFVar14[8].field_0x0;
          if (iVar6 == *(int *)(pFVar14 + 0xc)) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)pFVar14,(int *)pFVar11);
          }
          *(int *)&pFVar14[8].field_0x0 = iVar6 + 1;
          *(undefined4 *)(*(longlong *)&pFVar14->field_0x0 + (longlong)iVar6 * 4) = local_138;
          if (((*(undefined4 **)&pFVar14->field_0x0 <= &local_138) &&
              (&local_138 < *(undefined4 **)&pFVar14->field_0x0 + *(int *)(pFVar14 + 0xc))) &&
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
          iVar6 = *(int *)&pFVar14[8].field_0x0;
          if (iVar6 == *(int *)(pFVar14 + 0xc)) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)pFVar14,(int *)pFVar11);
          }
          *(int *)&pFVar14[8].field_0x0 = iVar6 + 1;
          *(undefined4 *)(*(longlong *)&pFVar14->field_0x0 + (longlong)iVar6 * 4) = local_138;
        }
        local_118 = 0;
        local_110 = local_128 << 4;
        while( true ) {
          lVar15 = local_110;
          uVar10 = local_11c;
          uVar16 = local_128;
          uVar9 = 0;
          if ((int)local_11c < param_2->ArrayNum) {
            uVar9 = local_120;
          }
          if ((uVar9 == 0) &&
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
          lVar13 = local_108;
          if (*(int *)((param_2->AllocatorInstance).Data + lVar15 + 8) <= (int)uVar12) break;
          uVar9 = 0;
          if ((int)uVar10 < param_3->ArrayNum) {
            uVar9 = local_120;
          }
          if ((uVar9 == 0) &&
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
          pFVar11 = (param_3->AllocatorInstance).Data;
          uVar10 = 0;
          if ((int)uVar12 < *(int *)(pFVar11 + lVar15 + 8)) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
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
          uVar10 = *(uint *)(local_118 + *(longlong *)(pFVar11 + lVar15));
          uVar9 = 0;
          if ((int)local_11c < param_2->ArrayNum) {
            uVar9 = local_120;
          }
          if ((uVar9 == 0) &&
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
          pFVar11 = (param_2->AllocatorInstance).Data;
          uVar9 = 0;
          if ((int)uVar12 < *(int *)(pFVar11 + local_110 + 8)) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          TGaussSeidelWeakConstraintData<float>::GetSingleConstraintData
                    (&this->ConstraintsData,(FGaussSeidelWeakConstraintSingleData<float> *)local_e8,
                     *(int *)(*(longlong *)(pFVar11 + local_110) + local_118) + this->InitialWCSize)
          ;
          if ((int)uVar10 < (int)local_e8._8_8_) {
            uVar9 = 0;
            if ((int)uVar10 < (int)local_e8._48_8_) {
              uVar9 = ~uVar10 >> 0x1f;
            }
            if ((uVar9 == 0) &&
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
            fVar20 = *(float *)(local_e8._40_8_ + (longlong)(int)uVar10 * 4);
          }
          else {
            uVar10 = uVar10 - (int)local_e8._8_8_;
            uVar9 = 0;
            if ((int)uVar10 < (int)local_e8._48_8_) {
              uVar9 = ~uVar10 >> 0x1f;
            }
            if ((uVar9 == 0) &&
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
            fVar20 = *(float *)(local_e8._40_8_ + (longlong)(int)uVar10 * 4);
          }
          uVar10 = local_134;
          iVar6 = (this->NodalWeights).ArrayNum;
          if (local_e8[0x48] == false) {
            uVar10 = 0;
            if ((int)uVar8 < iVar6) {
              uVar10 = local_134;
            }
            fVar19 = fVar20 * fVar20 * (float)local_e8._32_4_;
            if ((uVar10 == 0) &&
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
            pFVar11 = (this_00->AllocatorInstance).Data;
            if ((*(int *)(pFVar11 + lVar18 * 0x10 + 8) < 1) &&
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
            pfVar2 = *(float **)(pFVar11 + lVar18 * 0x10);
            *pfVar2 = fVar19 + *pfVar2;
            fVar19 = fVar20 * fVar20 * (float)local_e8._32_4_;
            uVar10 = 0;
            if ((int)uVar8 < (this->NodalWeights).ArrayNum) {
              uVar10 = local_134;
            }
            if ((uVar10 == 0) &&
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
            pFVar11 = (this_00->AllocatorInstance).Data;
            if ((*(int *)(pFVar11 + lVar18 * 0x10 + 8) < 2) &&
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
            lVar13 = *(longlong *)(pFVar11 + lVar18 * 0x10);
            *(float *)(lVar13 + 4) = fVar19 + *(float *)(lVar13 + 4);
            fVar20 = fVar20 * fVar20 * (float)local_e8._32_4_;
            uVar10 = 0;
            if ((int)uVar8 < (this->NodalWeights).ArrayNum) {
              uVar10 = local_134;
            }
            if ((uVar10 == 0) &&
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
            pFVar11 = (this_00->AllocatorInstance).Data;
            if ((*(int *)(pFVar11 + lVar18 * 0x10 + 8) < 3) &&
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
            lVar13 = *(longlong *)(pFVar11 + lVar18 * 0x10);
            *(float *)(lVar13 + 8) = fVar20 + *(float *)(lVar13 + 8);
          }
          else {
            uVar9 = 0;
            if ((int)uVar8 < iVar6) {
              uVar9 = local_134;
            }
            fVar19 = (float)local_e8._76_4_ * (float)local_e8._76_4_ * fVar20 * fVar20 *
                     (float)local_e8._32_4_;
            if ((uVar9 == 0) &&
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
            pFVar11 = (this_00->AllocatorInstance).Data;
            if ((*(int *)(pFVar11 + lVar18 * 0x10 + 8) < 1) &&
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
            pfVar2 = *(float **)(pFVar11 + lVar18 * 0x10);
            *pfVar2 = fVar19 + *pfVar2;
            uVar9 = 0;
            if ((int)uVar8 < (this->NodalWeights).ArrayNum) {
              uVar9 = uVar10;
            }
            fVar19 = local_98 * local_98 * fVar20 * fVar20 * (float)local_e8._32_4_;
            if ((uVar9 == 0) &&
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
            pFVar11 = (this_00->AllocatorInstance).Data;
            if ((*(int *)(pFVar11 + lVar18 * 0x10 + 8) < 2) &&
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
            lVar13 = *(longlong *)(pFVar11 + lVar18 * 0x10);
            *(float *)(lVar13 + 4) = fVar19 + *(float *)(lVar13 + 4);
            uVar9 = 0;
            if ((int)uVar8 < (this->NodalWeights).ArrayNum) {
              uVar9 = uVar10;
            }
            fVar19 = local_94 * local_94 * fVar20 * fVar20 * (float)local_e8._32_4_;
            if ((uVar9 == 0) &&
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
            pFVar11 = (this_00->AllocatorInstance).Data;
            if ((*(int *)(pFVar11 + lVar18 * 0x10 + 8) < 3) &&
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
            lVar13 = *(longlong *)(pFVar11 + lVar18 * 0x10);
            *(float *)(lVar13 + 8) = fVar19 + *(float *)(lVar13 + 8);
            uVar9 = 0;
            if ((int)uVar8 < (this->NodalWeights).ArrayNum) {
              uVar9 = uVar10;
            }
            fVar19 = local_98 * (float)local_e8._76_4_ * fVar20 * fVar20 * (float)local_e8._32_4_;
            if ((uVar9 == 0) &&
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
            pFVar11 = (this_00->AllocatorInstance).Data;
            if ((*(int *)(pFVar11 + lVar18 * 0x10 + 8) < 4) &&
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
            lVar13 = *(longlong *)(pFVar11 + lVar18 * 0x10);
            *(float *)(lVar13 + 0xc) = fVar19 + *(float *)(lVar13 + 0xc);
            uVar9 = 0;
            if ((int)uVar8 < (this->NodalWeights).ArrayNum) {
              uVar9 = uVar10;
            }
            fVar19 = local_94 * (float)local_e8._76_4_ * fVar20 * fVar20 * (float)local_e8._32_4_;
            if ((uVar9 == 0) &&
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
            pFVar11 = (this_00->AllocatorInstance).Data;
            if ((*(int *)(pFVar11 + lVar18 * 0x10 + 8) < 5) &&
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
            lVar13 = *(longlong *)(pFVar11 + lVar18 * 0x10);
            *(float *)(lVar13 + 0x10) = fVar19 + *(float *)(lVar13 + 0x10);
            uVar9 = 0;
            if ((int)uVar8 < (this->NodalWeights).ArrayNum) {
              uVar9 = uVar10;
            }
            fVar20 = local_94 * local_98 * fVar20 * fVar20 * (float)local_e8._32_4_;
            if ((uVar9 == 0) &&
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
            pFVar11 = (this_00->AllocatorInstance).Data;
            if ((*(int *)(pFVar11 + lVar18 * 0x10 + 8) < 6) &&
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
            lVar13 = *(longlong *)(pFVar11 + lVar18 * 0x10);
            *(float *)(lVar13 + 0x14) = fVar20 + *(float *)(lVar13 + 0x14);
          }
          if ((FScriptContainerElement *)local_e8._56_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_e8._56_8_);
          }
          if ((FScriptContainerElement *)local_e8._40_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_e8._40_8_);
          }
          if ((FScriptContainerElement *)local_e8._16_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_e8._16_8_);
          }
          if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_e8._0_8_);
          }
          uVar12 = uVar12 + 1;
          local_118 = local_118 + 4;
        }
      }
      iVar6 = param_2->ArrayNum;
      local_11c = uVar10 + 1;
      local_128 = uVar16 + 1;
      local_108 = lVar13 + 0x10;
    } while ((int)local_11c < iVar6);
  }
  return;
}

// ComputeInitialWCData @ 143a5e270

void __thiscall
Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
ComputeInitialWCData
          (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  ulonglong uVar22;
  float fVar23;
  longlong local_res8;
  longlong local_res20;
  float local_98;
  float local_94;
  float local_90;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_68 [2];
  
  uVar13 = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Init
            (&local_88,&local_78,(int)(this->ConstraintsData)._padding_);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  uVar15 = uVar13;
  if (0 < local_88.ArrayNum) {
    do {
      uVar16 = (uint)uVar15;
      uVar17 = ~uVar16 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar16 < local_88.ArrayNum) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar20 = local_88.AllocatorInstance.Data + uVar13;
      uVar14 = 0;
      if ((int)uVar16 < *(int *)&(this->ConstraintsData).MSecondIndices.field_0x10) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar21 = *(longlong *)&(this->ConstraintsData).MSecondIndices.field_0x8;
      uVar14 = 0;
      if ((int)uVar16 < *(int *)&(this->ConstraintsData).MIndices.field_0x10) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar1 = pFVar20 + 8;
      iVar11 = *(int *)pFVar1;
      uVar14 = *(int *)(uVar13 + 8 + lVar21) +
               *(int *)(uVar13 + 8 + *(longlong *)&(this->ConstraintsData).MIndices.field_0x8);
      if (iVar11 < (int)uVar14) {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar14 - iVar11,(ForAnyElementType *)pFVar20,(int *)pFVar1,
                            (int *)(pFVar20 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memset(*pFVar20 + (longlong)iVar10 * 4,0,(longlong)(int)(uVar14 - iVar11) << 2);
      }
      else {
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
        }
        if ((int)uVar14 < iVar11) {
          uVar19 = iVar11 - uVar14;
          if (((int)(uVar19 | uVar14) < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (uVar19 != 0) {
                    /* WARNING: Load size is inaccurate */
            iVar11 = (*(int *)pFVar1 - uVar19) - uVar14;
            if (iVar11 != 0) {
              memmove(*pFVar20 + (longlong)(int)uVar14 * 4,
                      *pFVar20 + (longlong)(int)uVar14 * 4 + (longlong)(int)uVar19 * 4,
                      (longlong)iVar11 << 2);
            }
            *(uint *)pFVar1 = *(int *)pFVar1 - uVar19;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)pFVar20,*(int *)pFVar1,(int *)(pFVar20 + 0xc));
          }
        }
      }
      uVar14 = 0;
      local_res20 = 0;
      while( true ) {
        uVar19 = 0;
        if ((int)uVar16 < *(int *)&(this->ConstraintsData).MIndices.field_0x10) {
          uVar19 = uVar17;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)(uVar13 + 8 + *(longlong *)&(this->ConstraintsData).MIndices.field_0x8) <=
            (int)uVar14) break;
        uVar19 = 0;
        if ((int)uVar16 < *(int *)&(this->ConstraintsData).MIndices.field_0x10) {
          uVar19 = uVar17;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar21 = *(longlong *)&(this->ConstraintsData).MIndices.field_0x8;
        uVar19 = 0;
        if ((int)uVar14 < *(int *)(uVar13 + 8 + lVar21)) {
          uVar19 = ~uVar14 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar4 = *(undefined4 *)(local_res20 + *(longlong *)(uVar13 + lVar21));
        uVar19 = 0;
        if ((int)uVar16 < local_88.ArrayNum) {
          uVar19 = uVar17;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar8.Data = local_88.AllocatorInstance.Data;
        uVar19 = 0;
        if ((int)uVar14 < *(int *)(local_88.AllocatorInstance.Data + uVar13 + 8)) {
          uVar19 = ~uVar14 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = uVar14 + 1;
        *(undefined4 *)(local_res20 + *(longlong *)(FVar8.Data + uVar13)) = uVar4;
        local_res20 = local_res20 + 4;
      }
      uVar14 = 0;
      lVar21 = 0;
      while( true ) {
        uVar19 = 0;
        if ((int)uVar16 < *(int *)&(this->ConstraintsData).MSecondIndices.field_0x10) {
          uVar19 = uVar17;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)(*(longlong *)&(this->ConstraintsData).MSecondIndices.field_0x8 + 8 + uVar13) <=
            (int)uVar14) break;
        uVar19 = 0;
        if ((int)uVar16 < *(int *)&(this->ConstraintsData).MSecondIndices.field_0x10) {
          uVar19 = uVar17;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)&(this->ConstraintsData).MSecondIndices.field_0x8;
        uVar19 = 0;
        if ((int)uVar14 < *(int *)(lVar5 + 8 + uVar13)) {
          uVar19 = ~uVar14 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar4 = *(undefined4 *)(lVar21 + *(longlong *)(lVar5 + uVar13));
        uVar19 = 0;
        if ((int)uVar16 < local_88.ArrayNum) {
          uVar19 = uVar17;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar8.Data = local_88.AllocatorInstance.Data;
        uVar19 = 0;
        if ((int)uVar16 < *(int *)&(this->ConstraintsData).MIndices.field_0x10) {
          uVar19 = uVar17;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar18 = *(int *)(uVar13 + 8 + *(longlong *)&(this->ConstraintsData).MIndices.field_0x8) +
                 uVar14;
        uVar19 = 0;
        if ((int)uVar18 < *(int *)(FVar8.Data + uVar13 + 8)) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = uVar14 + 1;
        lVar21 = lVar21 + 4;
        *(undefined4 *)(*(longlong *)(FVar8.Data + uVar13) + (longlong)(int)uVar18 * 4) = uVar4;
      }
      uVar13 = uVar13 + 0x10;
      uVar15 = (ulonglong)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < local_88.ArrayNum);
  }
  uVar13 = 0;
  pTVar12 = Utilities::ComputeIncidentElements(local_68,&local_88,&this->WCIncidentElementsLocal);
  pTVar3 = &this->WCIncidentElements;
  if (pTVar3 != pTVar12) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar3->AllocatorInstance).Data,
               (this->WCIncidentElements).ArrayNum);
    pFVar20 = (pTVar3->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar12->AllocatorInstance).Data;
    (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->WCIncidentElements).ArrayNum = pTVar12->ArrayNum;
    (this->WCIncidentElements).ArrayMax = pTVar12->ArrayMax;
    pTVar12->ArrayNum = 0;
    pTVar12->ArrayMax = 0;
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_68[0].AllocatorInstance.Data,
             local_68[0].ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_68[0].AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_68[0].AllocatorInstance.Data);
  }
  UpdateTriangleNormalAndNodalWeight(this,param_1,true);
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&this->NoCollisionNodalWeights,&this->NodalWeights);
  pTVar12 = &this->NoCollisionConstraints;
  if (pTVar12 != &local_88) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar12->AllocatorInstance).Data,
               (this->NoCollisionConstraints).ArrayNum);
    FVar8.Data = local_88.AllocatorInstance.Data;
    iVar11 = local_88.ArrayNum;
    piVar2 = &(this->NoCollisionConstraints).ArrayMax;
    (this->NoCollisionConstraints).ArrayNum = local_88.ArrayNum;
    if ((local_88.ArrayNum == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_88.ArrayNum,*piVar2,&pTVar12->AllocatorInstance,local_88.ArrayNum,
                 piVar2);
      ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((pTVar12->AllocatorInstance).Data,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)FVar8.Data,iVar11);
    }
  }
  this->InitialWCSize = (int)(this->ConstraintsData)._padding_;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&this->NoCollisionWCIncidentElements,pTVar3);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&this->NoCollisionWCIncidentElementsLocal,&this->WCIncidentElementsLocal);
  if (0 < (int)(this->ConstraintsData)._padding_) {
    local_res8 = 0;
    uVar15 = uVar13;
    uVar22 = uVar13;
    do {
      uVar17 = (uint)uVar15;
      uVar16 = 0;
      uVar19 = ~uVar17 >> 0x1f;
      uVar14 = uVar16;
      if ((int)uVar17 < *(int *)&(this->ConstraintsData).MIsZeroRestLength.field_0x10) {
        uVar14 = uVar19;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(char *)(uVar13 + *(longlong *)&(this->ConstraintsData).MIsZeroRestLength.field_0x8) ==
          '\0') {
        uVar14 = uVar16;
        if ((int)uVar17 < *(int *)&(this->ConstraintsData).MIndices.field_0x10) {
          uVar14 = uVar19;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar21 = *(longlong *)&(this->ConstraintsData).MIndices.field_0x8;
        if ((int)uVar17 < *(int *)&(this->ConstraintsData).MSecondIndices.field_0x10) {
          uVar16 = uVar19;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)&(this->ConstraintsData).MSecondIndices.field_0x8;
        uVar14 = 0;
        if ((int)uVar17 < *(int *)&(this->ConstraintsData).MWeights.field_0x10) {
          uVar14 = uVar19;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = *(longlong *)&(this->ConstraintsData).MWeights.field_0x8;
        uVar14 = 0;
        if ((int)uVar17 < *(int *)&(this->ConstraintsData).MSecondWeights.field_0x10) {
          uVar14 = uVar19;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        ComputeSpringEdge(this,(TVector<float,3> *)&local_98,param_1,
                          (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar21 + uVar22),
                          (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar5 + uVar22),
                          (TArray<float,TSizedDefaultAllocator<32>_> *)(lVar6 + uVar22),
                          (TArray<float,TSizedDefaultAllocator<32>_> *)
                          (*(longlong *)&(this->ConstraintsData).MSecondWeights.field_0x8 + uVar22),
                          true);
        uVar14 = 0;
        if ((int)uVar17 < *(int *)&(this->ConstraintsData).MIsAnisotropic.field_0x10) {
          uVar14 = uVar19;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(char *)(uVar13 + *(longlong *)&(this->ConstraintsData).MIsAnisotropic.field_0x8) ==
            '\0') {
          uVar14 = 0;
          if ((int)uVar17 < *(int *)&(this->ConstraintsData).MRestLength.field_0x10) {
            uVar14 = uVar19;
          }
          fVar23 = SQRT(local_94 * local_94 + local_98 * local_98 + local_90 * local_90);
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          uVar14 = 0;
          if ((int)uVar17 < *(int *)&(this->ConstraintsData).MNormals.field_0x10) {
            uVar14 = uVar19;
          }
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar21 = *(longlong *)&(this->ConstraintsData).MNormals.field_0x8;
          uVar14 = 0;
          if ((int)uVar17 < *(int *)&(this->ConstraintsData).MRestLength.field_0x10) {
            uVar14 = uVar19;
          }
          fVar23 = local_94 * *(float *)(lVar21 + 4 + local_res8) +
                   local_98 * *(float *)(lVar21 + local_res8) +
                   local_90 * *(float *)(lVar21 + 8 + local_res8);
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        *(float *)(*(longlong *)&(this->ConstraintsData).MRestLength.field_0x8 + uVar13 * 4) =
             fVar23;
      }
      else {
        if ((int)uVar17 < *(int *)&(this->ConstraintsData).MRestLength.field_0x10) {
          uVar16 = uVar19;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)(*(longlong *)&(this->ConstraintsData).MRestLength.field_0x8 + uVar13 * 4) =
             0;
      }
      local_res8 = local_res8 + 0xc;
      uVar15 = (ulonglong)(uVar17 + 1);
      uVar13 = uVar13 + 1;
      uVar22 = uVar22 + 0x10;
    } while ((int)(uVar17 + 1) < (int)(this->ConstraintsData)._padding_);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_88.AllocatorInstance.Data,
             local_88.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_88.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// ComputeSpringEdge @ 143a5f140

TVector<float,3> * __thiscall
Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::ComputeSpringEdge
          (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *this,
          TVector<float,3> *__return_storage_ptr__,FSolverParticles *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5,bool param_6)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TVector<float,3> *pTVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  iVar8 = param_2->ArrayNum;
  if ((iVar8 == param_4->ArrayNum) && (param_3->ArrayNum == param_5->ArrayNum)) {
    uVar9 = 0;
    if (param_6) {
      if (0 < iVar8) {
        plVar12 = &param_1->_padding_;
        lVar13 = 0;
        do {
          uVar11 = ~uVar9 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar9 < iVar8) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar5 = *(uint *)((param_2->AllocatorInstance).Data + lVar13);
          uVar6 = 0;
          if ((int)uVar5 < (int)param_1->_padding_) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          fVar2 = *(float *)(*plVar12 + (longlong)(int)uVar5 * 0xc);
          uVar5 = 0;
          if ((int)uVar9 < param_4->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          *(float *)__return_storage_ptr__ =
               fVar2 * *(float *)((param_4->AllocatorInstance).Data + lVar13) +
               *(float *)__return_storage_ptr__;
          uVar5 = 0;
          if ((int)uVar9 < param_2->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar5 = *(uint *)((param_2->AllocatorInstance).Data + lVar13);
          uVar6 = 0;
          if ((int)uVar5 < (int)param_1->_padding_) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          fVar2 = *(float *)(*plVar12 + 4 + (longlong)(int)uVar5 * 0xc);
          uVar5 = 0;
          if ((int)uVar9 < param_4->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          *(float *)&__return_storage_ptr__->field_0x4 =
               fVar2 * *(float *)((param_4->AllocatorInstance).Data + lVar13) +
               *(float *)&__return_storage_ptr__->field_0x4;
          uVar5 = 0;
          if ((int)uVar9 < param_2->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar5 = *(uint *)((param_2->AllocatorInstance).Data + lVar13);
          uVar6 = 0;
          if ((int)uVar5 < (int)param_1->_padding_) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          fVar2 = *(float *)(*plVar12 + 8 + (longlong)(int)uVar5 * 0xc);
          uVar5 = 0;
          if ((int)uVar9 < param_4->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar9 = uVar9 + 1;
          pFVar1 = (param_4->AllocatorInstance).Data + lVar13;
          lVar13 = lVar13 + 4;
          *(float *)&__return_storage_ptr__->field_0x8 =
               fVar2 * *(float *)pFVar1 + *(float *)&__return_storage_ptr__->field_0x8;
          iVar8 = param_2->ArrayNum;
        } while ((int)uVar9 < iVar8);
      }
      piVar10 = &param_3->ArrayNum;
      plVar12 = &param_1->_padding_;
      iVar8 = param_3->ArrayNum;
      uVar9 = 0;
      if (0 < iVar8) {
        lVar13 = 0;
        do {
          uVar11 = ~uVar9 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar9 < iVar8) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar5 = *(uint *)((param_3->AllocatorInstance).Data + lVar13);
          uVar6 = 0;
          if ((int)uVar5 < (int)param_1->_padding_) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          fVar2 = *(float *)(*plVar12 + (longlong)(int)uVar5 * 0xc);
          uVar5 = 0;
          if ((int)uVar9 < param_5->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          *(float *)__return_storage_ptr__ =
               *(float *)__return_storage_ptr__ -
               fVar2 * *(float *)((param_5->AllocatorInstance).Data + lVar13);
          uVar5 = 0;
          if ((int)uVar9 < *piVar10) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar5 = *(uint *)((param_3->AllocatorInstance).Data + lVar13);
          uVar6 = 0;
          if ((int)uVar5 < (int)param_1->_padding_) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          fVar2 = *(float *)(*plVar12 + 4 + (longlong)(int)uVar5 * 0xc);
          uVar5 = 0;
          if ((int)uVar9 < param_5->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          *(float *)&__return_storage_ptr__->field_0x4 =
               *(float *)&__return_storage_ptr__->field_0x4 -
               fVar2 * *(float *)((param_5->AllocatorInstance).Data + lVar13);
          uVar5 = 0;
          if ((int)uVar9 < *piVar10) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar5 = *(uint *)((param_3->AllocatorInstance).Data + lVar13);
          uVar6 = 0;
          if ((int)uVar5 < (int)param_1->_padding_) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          fVar2 = *(float *)(*plVar12 + 8 + (longlong)(int)uVar5 * 0xc);
          uVar5 = 0;
          if ((int)uVar9 < param_5->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar9 = uVar9 + 1;
          pFVar1 = (param_5->AllocatorInstance).Data + lVar13;
          lVar13 = lVar13 + 4;
          *(float *)&__return_storage_ptr__->field_0x8 =
               *(float *)&__return_storage_ptr__->field_0x8 - fVar2 * *(float *)pFVar1;
          iVar8 = *piVar10;
        } while ((int)uVar9 < iVar8);
      }
    }
    else {
      if (0 < iVar8) {
        lVar13 = 0;
        do {
          uVar11 = ~uVar9 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar9 < iVar8) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar5 = *(uint *)((param_2->AllocatorInstance).Data + lVar13);
          uVar6 = 0;
          if ((int)uVar5 < *(int *)&(param_1->MPAndInvM).field_0x10) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          fVar2 = *(float *)(*(longlong *)&(param_1->MPAndInvM).field_0x8 +
                            (longlong)(int)uVar5 * 0x10);
          uVar5 = 0;
          if ((int)uVar9 < param_4->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          *(float *)__return_storage_ptr__ =
               fVar2 * *(float *)((param_4->AllocatorInstance).Data + lVar13) +
               *(float *)__return_storage_ptr__;
          uVar5 = 0;
          if ((int)uVar9 < param_2->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar5 = *(uint *)((param_2->AllocatorInstance).Data + lVar13);
          uVar6 = 0;
          if ((int)uVar5 < *(int *)&(param_1->MPAndInvM).field_0x10) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          fVar2 = *(float *)(*(longlong *)&(param_1->MPAndInvM).field_0x8 + 4 +
                            (longlong)(int)uVar5 * 0x10);
          uVar5 = 0;
          if ((int)uVar9 < param_4->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          *(float *)&__return_storage_ptr__->field_0x4 =
               fVar2 * *(float *)((param_4->AllocatorInstance).Data + lVar13) +
               *(float *)&__return_storage_ptr__->field_0x4;
          uVar5 = 0;
          if ((int)uVar9 < param_2->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar5 = *(uint *)((param_2->AllocatorInstance).Data + lVar13);
          uVar6 = 0;
          if ((int)uVar5 < *(int *)&(param_1->MPAndInvM).field_0x10) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          fVar2 = *(float *)(*(longlong *)&(param_1->MPAndInvM).field_0x8 + 8 +
                            (longlong)(int)uVar5 * 0x10);
          uVar5 = 0;
          if ((int)uVar9 < param_4->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar9 = uVar9 + 1;
          pFVar1 = (param_4->AllocatorInstance).Data + lVar13;
          lVar13 = lVar13 + 4;
          *(float *)&__return_storage_ptr__->field_0x8 =
               fVar2 * *(float *)pFVar1 + *(float *)&__return_storage_ptr__->field_0x8;
          iVar8 = param_2->ArrayNum;
        } while ((int)uVar9 < iVar8);
      }
      piVar10 = &param_3->ArrayNum;
      iVar8 = *piVar10;
      uVar9 = 0;
      if (0 < iVar8) {
        lVar13 = 0;
        do {
          uVar11 = ~uVar9 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar9 < iVar8) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar5 = *(uint *)((param_3->AllocatorInstance).Data + lVar13);
          uVar6 = 0;
          if ((int)uVar5 < *(int *)&(param_1->MPAndInvM).field_0x10) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          fVar2 = *(float *)(*(longlong *)&(param_1->MPAndInvM).field_0x8 +
                            (longlong)(int)uVar5 * 0x10);
          uVar5 = 0;
          if ((int)uVar9 < param_5->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          *(float *)__return_storage_ptr__ =
               *(float *)__return_storage_ptr__ -
               fVar2 * *(float *)((param_5->AllocatorInstance).Data + lVar13);
          uVar5 = 0;
          if ((int)uVar9 < *piVar10) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar5 = *(uint *)((param_3->AllocatorInstance).Data + lVar13);
          uVar6 = 0;
          if ((int)uVar5 < *(int *)&(param_1->MPAndInvM).field_0x10) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          fVar2 = *(float *)(*(longlong *)&(param_1->MPAndInvM).field_0x8 + 4 +
                            (longlong)(int)uVar5 * 0x10);
          uVar5 = 0;
          if ((int)uVar9 < param_5->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          *(float *)&__return_storage_ptr__->field_0x4 =
               *(float *)&__return_storage_ptr__->field_0x4 -
               fVar2 * *(float *)((param_5->AllocatorInstance).Data + lVar13);
          uVar5 = 0;
          if ((int)uVar9 < *piVar10) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar5 = *(uint *)((param_3->AllocatorInstance).Data + lVar13);
          uVar6 = 0;
          if ((int)uVar5 < *(int *)&(param_1->MPAndInvM).field_0x10) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          fVar2 = *(float *)(*(longlong *)&(param_1->MPAndInvM).field_0x8 + 8 +
                            (longlong)(int)uVar5 * 0x10);
          uVar5 = 0;
          if ((int)uVar9 < param_5->ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<float,3> *)(*pcVar3)();
            return pTVar7;
          }
          uVar9 = uVar9 + 1;
          pFVar1 = (param_5->AllocatorInstance).Data + lVar13;
          lVar13 = lVar13 + 4;
          *(float *)&__return_storage_ptr__->field_0x8 =
               *(float *)&__return_storage_ptr__->field_0x8 - fVar2 * *(float *)pFVar1;
          iVar8 = *piVar10;
        } while ((int)uVar9 < iVar8);
      }
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1229739803604418946>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Deformable\\GaussSeidelWeakConstraints.h"
                       ,0x182,
                       "LocalIndices.Num() == Weight.Num() && LocalSecondIndices.Num() == SecondWeight.Num()"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector<float,3> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// UpdateTriangleNormalAndNodalWeight @ 143a9b390

void __thiscall
Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
UpdateTriangleNormalAndNodalWeight
          (FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,bool param_2)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  char local_res18;
  ulonglong local_res20;
  undefined4 local_128;
  uint local_124;
  uint local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_f8;
  longlong local_e8;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  TArray<float,TSizedDefaultAllocator<32>_> local_b8 [7];
  
  fVar1 = __real_3f800000;
  fVar24 = __real_322bcc77;
  uVar10 = 0;
  local_res18 = param_2;
  if (0 < (int)(this->ConstraintsData)._padding_) {
    lVar12 = 0;
    local_118 = 0;
    local_res20 = 0;
    do {
      lVar11 = local_118;
      uVar16 = ~uVar10 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar10 < *(int *)&(this->ConstraintsData).MIsAnisotropic.field_0x10) {
        uVar14 = uVar16;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(char *)(lVar11 + *(longlong *)&(this->ConstraintsData).MIsAnisotropic.field_0x8) != '\0'
         ) {
        uVar14 = 0;
        if ((int)uVar10 < *(int *)&(this->ConstraintsData).MIndices.field_0x10) {
          uVar14 = uVar16;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar11 = *(longlong *)&(this->ConstraintsData).MIndices.field_0x8;
        uVar14 = 0;
        if ((int)uVar10 < *(int *)&(this->ConstraintsData).MSecondIndices.field_0x10) {
          uVar14 = uVar16;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar14 = 0;
        if ((int)uVar10 < *(int *)&(this->ConstraintsData).MIndices.field_0x10) {
          uVar14 = uVar16;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)(*(longlong *)&(this->ConstraintsData).MIndices.field_0x8 + 8 + lVar12) != 3) {
          local_res8[0] = 0;
          `Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
          UpdateTriangleNormalAndNodalWeight'::__l7::<lambda_1>::operator()(local_res8);
        }
        uVar14 = 0;
        if ((int)uVar10 < *(int *)&(this->ConstraintsData).MSecondIndices.field_0x10) {
          uVar14 = uVar16;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)(lVar12 + 8 + *(longlong *)&(this->ConstraintsData).MSecondIndices.field_0x8) !=
            1) {
          local_res10[0] = 0;
          `Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
          UpdateTriangleNormalAndNodalWeight'::__l7::<lambda_2>::operator()(local_res10);
        }
        iVar8 = *(int *)(lVar12 + 8 + lVar11);
        if (local_res18 == '\0') {
          if ((iVar8 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = **(uint **)(lVar12 + lVar11);
          uVar7 = 0;
          if ((int)uVar14 < *(int *)&(param_1->MPAndInvM).field_0x10) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar17 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
          local_c8 = *(undefined8 *)(lVar17 + (longlong)(int)uVar14 * 0x10);
          local_c0 = *(float *)(lVar17 + 8 + (longlong)(int)uVar14 * 0x10);
          if ((*(int *)(lVar12 + 8 + lVar11) < 2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = *(uint *)(*(longlong *)(lVar12 + lVar11) + 4);
          uVar7 = 0;
          if ((int)uVar14 < *(int *)&(param_1->MPAndInvM).field_0x10) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar17 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
          local_108 = *(longlong *)(lVar17 + (longlong)(int)uVar14 * 0x10);
          fVar20 = *(float *)(lVar17 + 8 + (longlong)(int)uVar14 * 0x10);
          if ((*(int *)(lVar12 + 8 + lVar11) < 3) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = *(uint *)(*(longlong *)(lVar12 + lVar11) + 8);
          uVar7 = 0;
          if ((int)uVar14 < *(int *)&(param_1->MPAndInvM).field_0x10) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar11 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
          local_e8 = *(longlong *)(lVar11 + (longlong)(int)uVar14 * 0x10);
          fVar22 = *(float *)(lVar11 + 8 + (longlong)(int)uVar14 * 0x10) - local_c0;
          fVar20 = fVar20 - local_c0;
          fVar19 = (float)((ulonglong)local_e8 >> 0x20) - local_c8._4_4_;
          fVar21 = (float)local_e8 - (float)local_c8;
          fVar23 = fVar20 * fVar19 - fVar22 * (local_108._4_4_ - local_c8._4_4_);
          fVar22 = fVar22 * ((float)local_108 - (float)local_c8) - fVar20 * fVar21;
          fVar19 = (local_108._4_4_ - local_c8._4_4_) * fVar21 -
                   ((float)local_108 - (float)local_c8) * fVar19;
          fVar20 = fVar22 * fVar22 + fVar23 * fVar23 + fVar19 * fVar19;
          if (fVar20 != fVar1) {
            uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            uVar15 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            if (fVar20 < fVar24) goto LAB_143a9bb85;
            fVar20 = fVar1 / SQRT(fVar20);
            fVar23 = fVar23 * fVar20;
            fVar22 = fVar22 * fVar20;
            fVar19 = fVar19 * fVar20;
          }
          uVar18 = CONCAT44(fVar22,fVar23);
          uVar15 = fVar19;
        }
        else {
          if ((iVar8 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = **(uint **)(lVar12 + lVar11);
          uVar7 = 0;
          if ((int)uVar14 < (int)param_1->_padding_) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_d8 = *(undefined8 *)(param_1->_padding_ + (longlong)(int)uVar14 * 0xc);
          local_d0 = *(float *)(param_1->_padding_ + 8 + (longlong)(int)uVar14 * 0xc);
          if ((*(int *)(lVar12 + 8 + lVar11) < 2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = *(uint *)(*(longlong *)(lVar12 + lVar11) + 4);
          uVar7 = 0;
          if ((int)uVar14 < (int)param_1->_padding_) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_f8 = *(longlong *)(param_1->_padding_ + (longlong)(int)uVar14 * 0xc);
          fVar20 = *(float *)(param_1->_padding_ + 8 + (longlong)(int)uVar14 * 0xc);
          if ((*(int *)(lVar12 + 8 + lVar11) < 3) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = *(uint *)(*(longlong *)(lVar12 + lVar11) + 8);
          uVar7 = 0;
          if ((int)uVar14 < (int)param_1->_padding_) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_e8 = *(longlong *)(param_1->_padding_ + (longlong)(int)uVar14 * 0xc);
          fVar22 = *(float *)(param_1->_padding_ + 8 + (longlong)(int)uVar14 * 0xc) - local_d0;
          fVar19 = (float)((ulonglong)local_e8 >> 0x20) - local_d8._4_4_;
          fVar21 = (float)local_e8 - (float)local_d8;
          fVar20 = fVar20 - local_d0;
          fVar23 = fVar19 * fVar20 - fVar22 * (local_f8._4_4_ - local_d8._4_4_);
          fVar22 = fVar22 * ((float)local_f8 - (float)local_d8) - fVar21 * fVar20;
          fVar19 = fVar21 * (local_f8._4_4_ - local_d8._4_4_) -
                   fVar19 * ((float)local_f8 - (float)local_d8);
          fVar20 = fVar22 * fVar22 + fVar23 * fVar23 + fVar19 * fVar19;
          if (fVar20 == fVar1) {
            uVar18 = CONCAT44(fVar22,fVar23);
            uVar15 = fVar19;
          }
          else {
            uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            uVar15 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            if (fVar24 <= fVar20) {
              fVar20 = fVar1 / SQRT(fVar20);
              uVar18 = CONCAT44(fVar20 * fVar22,fVar20 * fVar23);
              uVar15 = fVar20 * fVar19;
            }
          }
        }
LAB_143a9bb85:
        uVar14 = 0;
        if ((int)uVar10 < *(int *)&(this->ConstraintsData).MNormals.field_0x10) {
          uVar14 = uVar16;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar11 = *(longlong *)&(this->ConstraintsData).MNormals.field_0x8;
        *(undefined8 *)(lVar11 + local_res20) = uVar18;
        *(undefined4 *)(lVar11 + 8 + local_res20) = uVar15;
        lVar11 = local_118;
      }
      local_118 = lVar11 + 1;
      local_res20 = local_res20 + 0xc;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar10 < (int)(this->ConstraintsData)._padding_);
  }
  uVar10 = 0;
  local_b8[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8[0].ArrayNum = 0;
  local_b8[0].ArrayMax = 0;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Init
            (&this->NodalWeights,local_b8,(int)param_1->_padding_);
  if (local_b8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8[0].AllocatorInstance.Data);
  }
  local_res20 = local_res20 & 0xffffffff00000000;
  if (0 < (this->WCIncidentElements).ArrayNum) {
    local_110 = 0;
    do {
      lVar12 = local_110;
      uVar14 = ~uVar10 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar10 < (this->WCIncidentElements).ArrayNum) {
        uVar16 = uVar14;
      }
      local_124 = uVar14;
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (0 < *(int *)((this->WCIncidentElements).AllocatorInstance.Data + lVar12 * 0x10 + 8)) {
        uVar16 = 0;
        if ((int)uVar10 < (this->NodalWeights).ArrayNum) {
          uVar16 = uVar14;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar13 = (this->NodalWeights).AllocatorInstance.Data + lVar12 * 0x10;
        local_128 = 0;
        iVar8 = *(int *)(pFVar13 + 0xc);
        *(undefined4 *)&pFVar13[8].field_0x0 = 0;
        pFVar2 = pFVar13 + 0xc;
        if (iVar8 != 6) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,6,(ForAnyElementType *)pFVar13,0,(int *)pFVar2);
          iVar8 = *(int *)pFVar2;
        }
        if (((*(undefined4 **)&pFVar13->field_0x0 <= &local_128) &&
            (&local_128 < *(undefined4 **)&pFVar13->field_0x0 + iVar8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = *(int *)&pFVar13[8].field_0x0;
        if (iVar8 == *(int *)pFVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar13,(int *)pFVar2);
        }
        *(int *)&pFVar13[8].field_0x0 = iVar8 + 1;
        *(undefined4 *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar8 * 4) = local_128;
        if (((*(undefined4 **)&pFVar13->field_0x0 <= &local_128) &&
            (&local_128 < *(undefined4 **)&pFVar13->field_0x0 + *(int *)(pFVar13 + 0xc))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = *(int *)&pFVar13[8].field_0x0;
        if (iVar8 == *(int *)(pFVar13 + 0xc)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar13,(int *)pFVar2);
        }
        *(int *)&pFVar13[8].field_0x0 = iVar8 + 1;
        *(undefined4 *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar8 * 4) = local_128;
        if (((*(undefined4 **)&pFVar13->field_0x0 <= &local_128) &&
            (&local_128 < *(undefined4 **)&pFVar13->field_0x0 + *(int *)(pFVar13 + 0xc))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = *(int *)&pFVar13[8].field_0x0;
        if (iVar8 == *(int *)(pFVar13 + 0xc)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar13,(int *)pFVar2);
        }
        *(int *)&pFVar13[8].field_0x0 = iVar8 + 1;
        *(undefined4 *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar8 * 4) = local_128;
        if (((*(undefined4 **)&pFVar13->field_0x0 <= &local_128) &&
            (&local_128 < *(undefined4 **)&pFVar13->field_0x0 + *(int *)(pFVar13 + 0xc))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = *(int *)&pFVar13[8].field_0x0;
        if (iVar8 == *(int *)(pFVar13 + 0xc)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar13,(int *)pFVar2);
        }
        *(int *)&pFVar13[8].field_0x0 = iVar8 + 1;
        *(undefined4 *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar8 * 4) = local_128;
        if (((*(undefined4 **)&pFVar13->field_0x0 <= &local_128) &&
            (&local_128 < *(undefined4 **)&pFVar13->field_0x0 + *(int *)(pFVar13 + 0xc))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = *(int *)&pFVar13[8].field_0x0;
        if (iVar8 == *(int *)(pFVar13 + 0xc)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar13,(int *)pFVar2);
        }
        *(int *)&pFVar13[8].field_0x0 = iVar8 + 1;
        *(undefined4 *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar8 * 4) = local_128;
        if (((*(undefined4 **)&pFVar13->field_0x0 <= &local_128) &&
            (&local_128 < *(undefined4 **)&pFVar13->field_0x0 + *(int *)(pFVar13 + 0xc))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = *(int *)&pFVar13[8].field_0x0;
        if (iVar8 == *(int *)(pFVar13 + 0xc)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar13,(int *)pFVar2);
        }
        *(int *)&pFVar13[8].field_0x0 = iVar8 + 1;
        uVar16 = 0;
        local_118 = lVar12 << 4;
        local_108 = 0;
        *(undefined4 *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar8 * 4) = local_128;
        local_f8 = 0;
        while( true ) {
          lVar11 = local_118;
          uVar7 = 0;
          if ((int)uVar10 < (this->WCIncidentElements).ArrayNum) {
            uVar7 = uVar14;
          }
          local_120 = uVar16;
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)((this->WCIncidentElements).AllocatorInstance.Data + lVar11 + 8) <=
              (int)uVar16) break;
          uVar7 = 0;
          if ((int)uVar10 < (this->WCIncidentElements).ArrayNum) {
            uVar7 = uVar14;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar2 = (this->WCIncidentElements).AllocatorInstance.Data;
          uVar7 = 0;
          if ((int)local_120 < *(int *)(pFVar2 + lVar12 * 0x10 + 8)) {
            uVar7 = ~uVar16 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar7 = *(uint *)(local_f8 + *(longlong *)(pFVar2 + lVar12 * 0x10));
          lVar11 = (longlong)(int)uVar7;
          uVar9 = 0;
          if ((int)uVar10 < (this->WCIncidentElementsLocal).ArrayNum) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar2 = (this->WCIncidentElementsLocal).AllocatorInstance.Data;
          uVar10 = 0;
          if ((int)local_120 < *(int *)(pFVar2 + lVar12 * 0x10 + 8)) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar16 = ~uVar7 >> 0x1f;
          uVar10 = *(uint *)(*(longlong *)(pFVar2 + lVar12 * 0x10) + local_108 * 4);
          uVar14 = 0;
          if ((int)uVar7 < *(int *)&(this->ConstraintsData).MIndices.field_0x10) {
            uVar14 = uVar16;
          }
          if ((uVar14 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar17 = lVar11 * 0x10;
          if ((int)uVar10 <
              *(int *)(*(longlong *)&(this->ConstraintsData).MIndices.field_0x8 + 8 + lVar17)) {
            uVar14 = 0;
            if ((int)uVar7 < *(int *)&(this->ConstraintsData).MWeights.field_0x10) {
              uVar14 = uVar16;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)&(this->ConstraintsData).MWeights.field_0x8;
            uVar14 = 0;
            if ((int)uVar10 < *(int *)(lVar17 + 8 + lVar3)) {
              uVar14 = ~uVar10 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar24 = *(float *)(*(longlong *)(lVar17 + lVar3) + (longlong)(int)uVar10 * 4);
          }
          else {
            uVar14 = 0;
            if ((int)uVar7 < *(int *)&(this->ConstraintsData).MSecondWeights.field_0x10) {
              uVar14 = uVar16;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar12 = *(longlong *)&(this->ConstraintsData).MSecondWeights.field_0x8;
            uVar14 = 0;
            if ((int)uVar7 < *(int *)&(this->ConstraintsData).MIndices.field_0x10) {
              uVar14 = uVar16;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar10 = uVar10 - *(int *)(lVar17 + 8 +
                                      *(longlong *)&(this->ConstraintsData).MIndices.field_0x8);
            uVar14 = 0;
            if ((int)uVar10 < *(int *)(lVar17 + 8 + lVar12)) {
              uVar14 = ~uVar10 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar24 = *(float *)(*(longlong *)(lVar17 + lVar12) + (longlong)(int)uVar10 * 4);
            lVar12 = local_110;
          }
          uVar10 = 0;
          if ((int)uVar7 < *(int *)&(this->ConstraintsData).MIsAnisotropic.field_0x10) {
            uVar10 = uVar16;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(char *)(lVar11 + *(longlong *)&(this->ConstraintsData).MIsAnisotropic.field_0x8) ==
              '\0') {
            uVar10 = 0;
            if ((int)uVar7 < *(int *)&(this->ConstraintsData).MStiffness.field_0x10) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar1 = *(float *)(*(longlong *)&(this->ConstraintsData).MStiffness.field_0x8 +
                              lVar11 * 4);
            uVar10 = 0;
            if ((int)(uint)local_res20 < (this->NodalWeights).ArrayNum) {
              uVar10 = local_124;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar2 = (this->NodalWeights).AllocatorInstance.Data;
            if ((*(int *)(pFVar2 + lVar12 * 0x10 + 8) < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pfVar4 = *(float **)(pFVar2 + lVar12 * 0x10);
            *pfVar4 = fVar24 * fVar24 * fVar1 + *pfVar4;
            uVar10 = 0;
            if ((int)uVar7 < *(int *)&(this->ConstraintsData).MStiffness.field_0x10) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar1 = *(float *)(*(longlong *)&(this->ConstraintsData).MStiffness.field_0x8 +
                              lVar11 * 4);
            uVar10 = 0;
            if ((int)(uint)local_res20 < (this->NodalWeights).ArrayNum) {
              uVar10 = local_124;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar2 = (this->NodalWeights).AllocatorInstance.Data;
            if ((*(int *)(pFVar2 + lVar12 * 0x10 + 8) < 2) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar17 = *(longlong *)(pFVar2 + lVar12 * 0x10);
            *(float *)(lVar17 + 4) = fVar24 * fVar24 * fVar1 + *(float *)(lVar17 + 4);
            uVar10 = 0;
            if ((int)uVar7 < *(int *)&(this->ConstraintsData).MStiffness.field_0x10) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar14 = local_124;
            uVar10 = (uint)local_res20;
            fVar1 = *(float *)(*(longlong *)&(this->ConstraintsData).MStiffness.field_0x8 +
                              lVar11 * 4);
            uVar16 = 0;
            if ((int)(uint)local_res20 < (this->NodalWeights).ArrayNum) {
              uVar16 = local_124;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar2 = (this->NodalWeights).AllocatorInstance.Data;
            if ((*(int *)(pFVar2 + lVar12 * 0x10 + 8) < 3) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar11 = *(longlong *)(pFVar2 + lVar12 * 0x10);
            *(float *)(lVar11 + 8) = fVar24 * fVar24 * fVar1 + *(float *)(lVar11 + 8);
          }
          else {
            iVar8 = 0;
            lVar12 = 0;
            local_e8 = 0;
            do {
              uVar10 = 0;
              if ((int)uVar7 < *(int *)&(this->ConstraintsData).MNormals.field_0x10) {
                uVar10 = uVar16;
              }
              if ((uVar10 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar17 = *(longlong *)&(this->ConstraintsData).MNormals.field_0x8;
              uVar10 = 0;
              if ((int)uVar7 < *(int *)&(this->ConstraintsData).MNormals.field_0x10) {
                uVar10 = uVar16;
              }
              if ((uVar10 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              fVar1 = *(float *)(lVar17 + lVar11 * 0xc + lVar12);
              fVar20 = *(float *)(*(longlong *)&(this->ConstraintsData).MNormals.field_0x8 +
                                  lVar11 * 0xc + lVar12);
              uVar10 = 0;
              if ((int)uVar7 < *(int *)&(this->ConstraintsData).MStiffness.field_0x10) {
                uVar10 = uVar16;
              }
              if ((uVar10 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              fVar19 = *(float *)(*(longlong *)&(this->ConstraintsData).MStiffness.field_0x8 +
                                 lVar11 * 4);
              uVar10 = 0;
              if ((int)(uint)local_res20 < (this->NodalWeights).ArrayNum) {
                uVar10 = local_124;
              }
              if ((uVar10 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar2 = (this->NodalWeights).AllocatorInstance.Data;
              if ((*(int *)(pFVar2 + local_118 + 8) <= iVar8) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar8 = iVar8 + 1;
              local_e8 = local_e8 + 1;
              lVar17 = *(longlong *)(pFVar2 + local_118);
              *(float *)(lVar17 + lVar12) =
                   fVar24 * fVar19 * fVar24 * fVar20 * fVar1 + *(float *)(lVar17 + lVar12);
              lVar12 = lVar12 + 4;
            } while (iVar8 < 3);
            uVar10 = 0;
            if ((int)uVar7 < *(int *)&(this->ConstraintsData).MNormals.field_0x10) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar12 = *(longlong *)&(this->ConstraintsData).MNormals.field_0x8;
            uVar10 = 0;
            if ((int)uVar7 < *(int *)&(this->ConstraintsData).MNormals.field_0x10) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar1 = *(float *)(lVar12 + lVar11 * 0xc);
            fVar20 = *(float *)(*(longlong *)&(this->ConstraintsData).MNormals.field_0x8 + 4 +
                               lVar11 * 0xc);
            uVar10 = 0;
            if ((int)uVar7 < *(int *)&(this->ConstraintsData).MStiffness.field_0x10) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar12 = local_110;
            fVar19 = *(float *)(*(longlong *)&(this->ConstraintsData).MStiffness.field_0x8 +
                               lVar11 * 4);
            uVar10 = 0;
            if ((int)(uint)local_res20 < (this->NodalWeights).ArrayNum) {
              uVar10 = local_124;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar2 = (this->NodalWeights).AllocatorInstance.Data;
            if ((*(int *)(pFVar2 + lVar12 * 0x10 + 8) < 4) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar17 = *(longlong *)(pFVar2 + lVar12 * 0x10);
            *(float *)(lVar17 + 0xc) =
                 fVar24 * fVar19 * fVar24 * fVar1 * fVar20 + *(float *)(lVar17 + 0xc);
            uVar10 = 0;
            if ((int)uVar7 < *(int *)&(this->ConstraintsData).MNormals.field_0x10) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar17 = *(longlong *)&(this->ConstraintsData).MNormals.field_0x8;
            uVar10 = 0;
            if ((int)uVar7 < *(int *)&(this->ConstraintsData).MNormals.field_0x10) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar1 = *(float *)(lVar17 + lVar11 * 0xc);
            fVar20 = *(float *)(*(longlong *)&(this->ConstraintsData).MNormals.field_0x8 + 8 +
                               lVar11 * 0xc);
            uVar10 = 0;
            if ((int)uVar7 < *(int *)&(this->ConstraintsData).MStiffness.field_0x10) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar19 = *(float *)(*(longlong *)&(this->ConstraintsData).MStiffness.field_0x8 +
                               lVar11 * 4);
            uVar10 = 0;
            if ((int)(uint)local_res20 < (this->NodalWeights).ArrayNum) {
              uVar10 = local_124;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar2 = (this->NodalWeights).AllocatorInstance.Data;
            if ((*(int *)(pFVar2 + lVar12 * 0x10 + 8) < 5) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar17 = *(longlong *)(pFVar2 + lVar12 * 0x10);
            *(float *)(lVar17 + 0x10) =
                 fVar24 * fVar19 * fVar24 * fVar20 * fVar1 + *(float *)(lVar17 + 0x10);
            uVar10 = 0;
            if ((int)uVar7 < *(int *)&(this->ConstraintsData).MNormals.field_0x10) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar17 = *(longlong *)&(this->ConstraintsData).MNormals.field_0x8;
            uVar10 = 0;
            if ((int)uVar7 < *(int *)&(this->ConstraintsData).MNormals.field_0x10) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar1 = *(float *)(lVar17 + 4 + lVar11 * 0xc);
            fVar20 = *(float *)(*(longlong *)&(this->ConstraintsData).MNormals.field_0x8 + 8 +
                               lVar11 * 0xc);
            uVar10 = 0;
            if ((int)uVar7 < *(int *)&(this->ConstraintsData).MStiffness.field_0x10) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar14 = local_124;
            uVar10 = (uint)local_res20;
            fVar19 = *(float *)(*(longlong *)&(this->ConstraintsData).MStiffness.field_0x8 +
                               lVar11 * 4);
            uVar16 = 0;
            if ((int)(uint)local_res20 < (this->NodalWeights).ArrayNum) {
              uVar16 = local_124;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar2 = (this->NodalWeights).AllocatorInstance.Data;
            if ((*(int *)(pFVar2 + lVar12 * 0x10 + 8) < 6) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar11 = *(longlong *)(pFVar2 + lVar12 * 0x10);
            *(float *)(lVar11 + 0x14) =
                 fVar24 * fVar19 * fVar24 * fVar1 * fVar20 + *(float *)(lVar11 + 0x14);
          }
          local_108 = local_108 + 1;
          uVar16 = local_120 + 1;
          local_f8 = local_f8 + 4;
        }
      }
      uVar10 = uVar10 + 1;
      local_110 = lVar12 + 1;
      local_res20 = CONCAT44(local_res20._4_4_,uVar10);
    } while ((int)uVar10 < (this->WCIncidentElements).ArrayNum);
  }
  return;
}

// operator() @ 1504a4790

bool __thiscall
`Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1229739803604418852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1229739803604418852>,
                       &`public:___cdecl_`public:___cdecl_Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>(TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FDeformableXPBDWeakConstraintParams_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a4dd0

bool __thiscall
`Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
ComputeCollisionWCDataSimplified'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1229739803604419439>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1229739803604419439>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::ComputeCollisionWCDataSimplified(TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a5150

bool __thiscall
`Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
UpdateTriangleNormalAndNodalWeight'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1229739803604419125>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1229739803604419125>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::UpdateTriangleNormalAndNodalWeight(Chaos::Softs::FSolverParticles_const&___ptr64,bool)___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a5430

bool __thiscall
`Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
UpdateTriangleNormalAndNodalWeight'::__l7::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1229739803604419126>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1229739803604419126>,
                       &`public:___cdecl_`public:_void___cdecl_Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::UpdateTriangleNormalAndNodalWeight(Chaos::Softs::FSolverParticles_const&___ptr64,bool)___ptr64'::`7'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a5470

bool __thiscall
`Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>'::__l8::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1229739803604418875>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1229739803604418875>,
                       &`public:___cdecl_`public:___cdecl_Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>(TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_const&___ptr64,Chaos::Softs::FDeformableXPBDWeakConstraintParams_const&___ptr64)___ptr64'::`8'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

