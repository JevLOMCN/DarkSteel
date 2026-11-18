// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FPBDEdgeSpringConstraints @ 143d912d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPBDEdgeSpringConstraints * __thiscall
Chaos::Softs::FPBDEdgeSpringConstraints::FPBDEdgeSpringConstraints
          (FPBDEdgeSpringConstraints *this,FSolverParticlesRange *param_1,FTriangleMesh *param_2,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_3,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_4,FCollectionPropertyConstFacade *param_5,bool param_6)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  undefined4 uVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  FString *pFVar11;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar12;
  FPBDEdgeSpringConstraints *pFVar13;
  int iVar14;
  uint uVar15;
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> *pTVar16;
  uint uVar17;
  ulonglong uVar18;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  longlong local_res18;
  ForAnyElementType local_1b8;
  int local_1b0 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_1a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  float local_180;
  float fStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  FCollectionPropertyConstFacade *local_170;
  TVector<float,2> local_168;
  FCollectionPropertyConstFacade *local_160;
  TVector<float,2> local_158;
  FCollectionPropertyConstFacade *local_150;
  TVector<float,2> local_148;
  TArrayView<float_const_,int> local_140;
  TArrayView<float_const_,int> local_130;
  TArrayView<float_const_,int> local_120;
  FString local_110;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_100;
  FString local_f0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70 [3];
  
  this_00 = &param_5->KeyNameIndices;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,EdgeSpringStiffnessName);
  if ((piVar10 == (int *)0x0) || (iVar14 = *piVar10, iVar14 == -1)) {
    local_168 = (TVector<float,2>)0x3f8000003f800000;
  }
  else {
    fVar21 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar14,&param_5->HighValueArray);
    fVar22 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar14,&param_5->LowValueArray);
    local_168._4_4_ = fVar21;
    local_168._0_4_ = fVar22;
  }
  pFVar11 = ::FName::ToString(&EdgeSpringStiffnessName,&local_c0);
  pFVar11 = ::FString::FString(&local_90,pFVar11);
  local_170 = param_5;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_5,&local_110,&EdgeSpringStiffnessName,(<lambda_1> *)&local_170,pFVar11,(int *)0x0
            );
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_4,&local_110);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_140.DataPtr = (float *)0x0;
    local_140._8_8_ = (ulonglong)(uint)local_140._12_4_ << 0x20;
  }
  else {
    local_140.DataPtr = *(float **)&pTVar12->field_0x10;
    local_140._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  FPBDSpringConstraints::FPBDSpringConstraints<3>
            ((FPBDSpringConstraints *)this,param_1,&param_2->MElements,&local_140,&local_168,param_6
             ,false,(void *)0x0);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  iVar14 = *(int *)((longlong)&this->_padding_ + 4);
  lVar5 = this->_padding_;
  this->_padding_ = (longlong)&___7FPBDEdgeSpringConstraints_Softs_Chaos__6B_;
  this->bWarpWeftScaleEnabled = false;
  local_100.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar7 = (int)this->_padding_;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FPBDEdgeSpringConstraints *)(*pcVar4)();
      return pFVar13;
    }
  }
  local_100.ArrayNum = iVar7;
  pFVar11 = ::FName::ToString(&EdgeSpringWarpScaleName,&local_b0);
  pFVar11 = ::FString::FString(&local_80,pFVar11);
  local_160 = param_5;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_5,&local_f0,&EdgeSpringWarpScaleName,(<lambda_1> *)&local_160,pFVar11,(int *)0x0)
  ;
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_4,&local_f0);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_130.DataPtr = (float *)0x0;
    local_130._8_8_ = (ulonglong)(uint)local_130._12_4_ << 0x20;
  }
  else {
    local_130.DataPtr = *(float **)&pTVar12->field_0x10;
    local_130._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  local_188 = 0x3f800000;
  uStack_184 = 0x3f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,EdgeSpringWarpScaleName);
  if ((piVar10 == (int *)0x0) || (iVar7 = *piVar10, iVar7 == -1)) {
    local_158._4_4_ = uStack_184;
    local_158._0_4_ = local_188;
  }
  else {
    fVar21 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar7,&param_5->HighValueArray);
    fVar22 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar7,&param_5->LowValueArray);
    local_158._4_4_ = fVar21;
    local_158._0_4_ = fVar22;
  }
  FPBDWeightMap::FPBDWeightMap<2>
            (&this->WarpScale,&local_158,&local_130,&local_100,(int)lVar5,iVar14,0x10,(void *)0x0);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  local_e0.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar14 = (int)this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  lVar5 = this->_padding_;
  if (iVar14 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FPBDEdgeSpringConstraints *)(*pcVar4)();
      return pFVar13;
    }
  }
  local_e0.ArrayNum = iVar14;
  pFVar11 = ::FName::ToString(&EdgeSpringWeftScaleName,&local_a0);
  pFVar11 = ::FString::FString(local_70,pFVar11);
  local_150 = param_5;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_5,&local_d0,&EdgeSpringWeftScaleName,(<lambda_1> *)&local_150,pFVar11,(int *)0x0)
  ;
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_4,&local_d0);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_120.DataPtr = (float *)0x0;
    local_120._8_8_ = (ulonglong)(uint)local_120._12_4_ << 0x20;
  }
  else {
    local_120.DataPtr = *(float **)&pTVar12->field_0x10;
    local_120._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  local_178 = 0x3f800000;
  uStack_174 = 0x3f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,EdgeSpringWeftScaleName);
  if ((piVar10 == (int *)0x0) || (iVar14 = *piVar10, iVar14 == -1)) {
    local_148._4_4_ = uStack_174;
    local_148._0_4_ = local_178;
  }
  else {
    fVar21 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar14,&param_5->HighValueArray);
    local_180 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (param_5,iVar14,&param_5->LowValueArray);
    local_148._4_4_ = fVar21;
    local_148._0_4_ = local_180;
    fStack_17c = fVar21;
  }
  FPBDWeightMap::FPBDWeightMap<2>
            (&this->WeftScale,&local_148,&local_120,&local_e0,(int)lVar5,iVar7,0x10,(void *)0x0);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  (this->BaseDists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseDists).ArrayNum = 0;
  (this->BaseDists).ArrayMax = 0;
  (this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpWeftScaleBaseMultipliers).ArrayNum = 0;
  (this->WarpWeftScaleBaseMultipliers).ArrayMax = 0;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,EdgeSpringStiffnessName);
  iVar14 = -1;
  if (piVar10 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar10;
  }
  (this->EdgeSpringStiffnessIndex).Index = iVar7;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,EdgeSpringWarpScaleName);
  if (piVar10 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar10;
  }
  (this->EdgeSpringWarpScaleIndex).Index = iVar7;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,EdgeSpringWeftScaleName);
  if (piVar10 != (int *)0x0) {
    iVar14 = *piVar10;
  }
  (this->EdgeSpringWeftScaleIndex).Index = iVar14;
  if (((this->EdgeSpringWarpScaleIndex).Index != -1) || (iVar14 != -1)) {
    InitFromPatternData(this,param_3,param_2);
  }
  FPBDSpringConstraints::InitColor<Chaos::Softs::FSolverParticlesRange>
            ((FPBDSpringConstraints *)this,&local_198,param_1);
  if ((this->bWarpWeftScaleEnabled == false) ||
     (iVar14 = (int)this->_padding_, local_198.ArrayNum != iVar14)) goto LAB_143d91ba9;
  uVar18 = 0;
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0[0] = 0;
  local_1b0[1] = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_1a8,iVar14,Default);
  uVar8 = (uint)this->_padding_;
  if (local_1b0[0] < (int)uVar8) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar8 - local_1b0[0],&local_1b8,local_1b0,local_1b0 + 1);
LAB_143d918ee:
    iVar14 = local_1b0[0];
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    iVar14 = local_1b0[0];
    if ((int)uVar8 < local_1b0[0]) {
      uVar15 = local_1b0[0] - uVar8;
      if ((int)(uVar15 | uVar8) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar13 = (FPBDEdgeSpringConstraints *)(*pcVar4)();
          return pFVar13;
        }
        iVar14 = local_1b0[0];
      }
      if (uVar15 != 0) {
        iVar7 = (iVar14 - uVar15) - uVar8;
        if (iVar7 != 0) {
          memmove(local_1b8.Data + (longlong)(int)uVar8 * 8,
                  local_1b8.Data + (longlong)(int)uVar8 * 8 + (longlong)(int)uVar15 * 8,
                  (longlong)iVar7 << 3);
          iVar14 = local_1b0[0];
        }
        local_1b0[0] = iVar14 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&local_1b8,iVar14 - uVar15,local_1b0 + 1);
        goto LAB_143d918ee;
      }
    }
  }
  if (0 < (int)this->_padding_) {
    local_res18 = 0;
    uVar20 = uVar18;
    do {
      uVar17 = (uint)uVar18;
      uVar15 = ~uVar17 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar17 < local_198.ArrayNum) {
        uVar8 = uVar15;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar13 = (FPBDEdgeSpringConstraints *)(*pcVar4)();
          return pFVar13;
        }
      }
      uVar8 = *(uint *)(local_198.AllocatorInstance.Data + uVar20);
      uVar9 = 0;
      if ((int)uVar17 < (this->BaseDists).ArrayNum) {
        uVar9 = uVar15;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar13 = (FPBDEdgeSpringConstraints *)(*pcVar4)();
          return pFVar13;
        }
      }
      uVar1 = *(undefined4 *)((this->BaseDists).AllocatorInstance.Data + uVar20);
      uVar9 = 0;
      if ((int)uVar8 < local_1a8.ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar13 = (FPBDEdgeSpringConstraints *)(*pcVar4)();
          return pFVar13;
        }
      }
      *(undefined4 *)(local_1a8.AllocatorInstance.Data + (longlong)(int)uVar8 * 4) = uVar1;
      uVar9 = 0;
      if ((int)uVar17 < (this->WarpWeftScaleBaseMultipliers).ArrayNum) {
        uVar9 = uVar15;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar13 = (FPBDEdgeSpringConstraints *)(*pcVar4)();
          return pFVar13;
        }
      }
      uVar2 = *(undefined8 *)
               ((this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data + local_res18);
      uVar15 = 0;
      if ((int)uVar8 < local_1b0[0]) {
        uVar15 = ~uVar8 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar13 = (FPBDEdgeSpringConstraints *)(*pcVar4)();
          return pFVar13;
        }
      }
      local_res18 = local_res18 + 8;
      uVar18 = (ulonglong)(uVar17 + 1);
      uVar20 = uVar20 + 4;
      *(undefined8 *)(local_1b8.Data + (longlong)(int)uVar8 * 8) = uVar2;
    } while ((int)(uVar17 + 1) < (int)this->_padding_);
    iVar14 = local_1b0[0];
  }
  pTVar19 = &this->BaseDists;
  pTVar16 = &this->WarpWeftScaleBaseMultipliers;
  if (pTVar19 != &local_1a8) {
    pFVar3 = (pTVar19->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
      iVar14 = local_1b0[0];
    }
    (pTVar19->AllocatorInstance).Data = local_1a8.AllocatorInstance.Data;
    (this->BaseDists).ArrayNum = local_1a8.ArrayNum;
    (this->BaseDists).ArrayMax = local_1a8.ArrayMax;
    local_1a8.ArrayNum = 0;
    local_1a8.ArrayMax = 0;
    local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (pTVar16 != (TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> *)&local_1b8) {
    pFVar3 = (pTVar16->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
      iVar14 = local_1b0[0];
    }
    (pTVar16->AllocatorInstance).Data = local_1b8.Data;
    (this->WarpWeftScaleBaseMultipliers).ArrayMax = local_1b0[1];
    local_1b0[0] = 0;
    local_1b0[1] = 0;
    local_1b8.Data = (FScriptContainerElement *)0x0;
    (this->WarpWeftScaleBaseMultipliers).ArrayNum = iVar14;
  }
  FPBDWeightMap::ReorderIndices(&this->WarpScale,&local_198);
  FPBDWeightMap::ReorderIndices(&this->WeftScale,&local_198);
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
LAB_143d91ba9:
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  return this;
}

// ~FPBDEdgeSpringConstraints @ 143d92910

void __thiscall
Chaos::Softs::FPBDEdgeSpringConstraints::~FPBDEdgeSpringConstraints(FPBDEdgeSpringConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BaseDists).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WeftScale).Table.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WeftScale).Indices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WarpScale).Table.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WarpScale).Indices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPBDSpringConstraints::~FPBDSpringConstraints((FPBDSpringConstraints *)this);
  return;
}

// ApplyProperties @ 143d9c840

void __thiscall
Chaos::Softs::FPBDEdgeSpringConstraints::ApplyProperties
          (FPBDEdgeSpringConstraints *this,float param_1,int param_2)

{
  bool local_res8 [24];
  <lambda_1> local_res20 [8];
  <lambda_1> local_18 [16];
  
  FPBDStiffness::ApplyPBDValues((FPBDStiffness *)&this->_padding_,param_1,param_2);
  if (this->bWarpWeftScaleEnabled != false) {
    local_res8[0] = false;
    FPBDWeightMap::ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
              (&this->WarpScale,local_res20,local_res8);
    local_res20[0] = (<lambda_1>)0x0;
    FPBDWeightMap::ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
              (&this->WeftScale,local_18,(bool *)local_res20);
    if ((local_res8[0] != false) || (local_res20[0] != (<lambda_1>)0x0)) {
      UpdateDists(this);
      return;
    }
  }
  return;
}

// InitFromPatternData @ 143dae8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FPBDEdgeSpringConstraints::InitFromPatternData
          (FPBDEdgeSpringConstraints *this,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_1,
          FTriangleMesh *param_2)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  float *pfVar3;
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> *pTVar4;
  float *pfVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  uint uVar11;
  float fVar12;
  TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *pTVar13;
  FTriangleMesh *pFVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ForElementType<FSetElementId> FVar20;
  float *pfVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  FPBDEdgeSpringConstraints *pFVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198 [4];
  uint local_194;
  uint uStack_190;
  uint local_18c;
  uint uStack_188;
  uint local_184;
  uint uStack_180;
  undefined8 local_17c;
  undefined8 local_174;
  undefined8 local_16c;
  int local_164;
  int local_160;
  int local_15c;
  FPBDEdgeSpringConstraints *local_158;
  TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *local_150;
  undefined8 local_148;
  undefined8 local_140;
  float local_138;
  float fStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  float local_f8;
  float fStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  uint *local_e8;
  uint *local_e0;
  uint *local_d8;
  FTriangleMesh *local_d0;
  TSet<TTuple<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_c8;
  ulonglong local_78;
  
  uVar18 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar30 = __real_3f800000;
  fVar12 = __real_322bcc77;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  uVar25 = 0;
  iVar16 = (param_2->MElements).ArrayNum;
  local_c8.Elements._0_8_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  uVar22 = uVar25;
  local_158 = this;
  local_150 = param_1;
  local_d0 = param_2;
  if (0 < iVar16) {
    do {
      pFVar14 = local_d0;
      pTVar13 = local_150;
      uVar26 = (uint)uVar25;
      uVar24 = 0;
      if ((int)uVar26 < iVar16) {
        uVar24 = ~uVar26 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar6 = (pFVar14->MElements).AllocatorInstance.Data;
      uVar24 = 0;
      if ((int)uVar26 < pTVar13->ArrayNum) {
        uVar24 = ~uVar26 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar24 = *(uint *)(pFVar6 + uVar22 * 0xc + 4);
      uStack_190 = *(uint *)(pFVar6 + uVar22 * 0xc);
      pFVar7 = (pTVar13->AllocatorInstance).Data;
      local_194 = uVar24;
      if ((int)uStack_190 <= (int)uVar24) {
        local_194 = uStack_190;
        uStack_190 = uVar24;
      }
      uVar24 = (local_194 >> 2) + 0x9e3779b9 + uStack_190 + local_194 * 0x40 ^ local_194;
      if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
        FVar20 = (ForElementType<FSetElementId>)&local_c8.Hash;
        if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar20 = local_c8.Hash.SecondaryData;
        }
        iVar16 = *(int *)((longlong)FVar20 + (ulonglong)(local_c8.HashSize - 1U & uVar24) * 4);
        while (iVar16 != -1) {
          puVar23 = (undefined8 *)((longlong)iVar16 * 0x20 + local_c8.Elements._0_8_);
          if (((uint)*puVar23 == local_194) && ((uint)((ulonglong)*puVar23 >> 0x20) == uStack_190))
          {
            if ((iVar16 != -1) && (puVar23 != (undefined8 *)0x0)) goto LAB_143daeafd;
            break;
          }
          iVar16 = *(int *)(puVar23 + 3);
        }
      }
      local_e8 = &local_194;
      TSet<TTuple<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<Chaos::TVector<int,2>_&&>_>
                (&local_c8,(uint)&local_164,
                 (TKeyInitializer<Chaos::TVector<int,2>_&&> *)(ulonglong)uVar24,(bool *)&local_e8);
      puVar23 = (undefined8 *)((longlong)local_164 * 0x20 + local_c8.Elements._0_8_);
LAB_143daeafd:
      uVar8 = *(undefined8 *)(pFVar7 + uVar22 * 0x18 + 8);
      pFVar1 = (ForAnyElementType *)(puVar23 + 1);
      local_148._0_4_ = (float)uVar8;
      local_148._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
      uVar9 = *(undefined8 *)(pFVar7 + uVar22 * 0x18);
      local_140._0_4_ = (float)uVar9;
      local_140._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
      fVar28 = (float)((uint)((float)local_148 - (float)local_140) & uVar18);
      fVar29 = (float)((uint)(local_148._4_4_ - local_140._4_4_) & uVar18);
      fVar31 = SQRT(fVar29 * fVar29 + fVar28 * fVar28);
      if (fVar31 <= fVar12) {
        local_130 = 0x3f3504f3;
        uStack_12c = 0x3f3504f3;
        local_17c = 0x3f3504f33f3504f3;
      }
      else {
        fVar31 = fVar30 / fVar31;
        local_138 = fVar28 * fVar31;
        fStack_134 = fVar29 * fVar31;
        local_17c = CONCAT44(fStack_134,local_138);
      }
      local_148 = uVar8;
      local_140 = uVar9;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_17c) &&
          ((FScriptContainerElement *)&local_17c <
           pFVar1->Data + (longlong)*(int *)((longlong)puVar23 + 0x14) * 8)) &&
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
      iVar16 = *(int *)(puVar23 + 2);
      if (iVar16 == *(int *)((longlong)puVar23 + 0x14)) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,pFVar1,(int *)((longlong)puVar23 + 0x14));
      }
      *(int *)(puVar23 + 2) = iVar16 + 1;
      *(undefined8 *)(pFVar1->Data + (longlong)iVar16 * 8) = local_17c;
      uVar24 = *(uint *)(pFVar6 + uVar22 * 0xc + 8);
      uStack_188 = *(uint *)(pFVar6 + uVar22 * 0xc + 4);
      local_18c = uVar24;
      if ((int)uStack_188 <= (int)uVar24) {
        local_18c = uStack_188;
        uStack_188 = uVar24;
      }
      uVar24 = (local_18c >> 2) + 0x9e3779b9 + uStack_188 + local_18c * 0x40 ^ local_18c;
      if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
        FVar20 = (ForElementType<FSetElementId>)&local_c8.Hash;
        if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar20 = local_c8.Hash.SecondaryData;
        }
        iVar16 = *(int *)((longlong)FVar20 + (ulonglong)(local_c8.HashSize - 1U & uVar24) * 4);
        while (iVar16 != -1) {
          puVar23 = (undefined8 *)((longlong)iVar16 * 0x20 + local_c8.Elements._0_8_);
          if (((uint)*puVar23 == local_18c) && ((uint)((ulonglong)*puVar23 >> 0x20) == uStack_188))
          {
            if ((iVar16 != -1) && (puVar23 != (undefined8 *)0x0)) goto LAB_143daed0a;
            break;
          }
          iVar16 = *(int *)(puVar23 + 3);
        }
      }
      local_e0 = &local_18c;
      TSet<TTuple<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<Chaos::TVector<int,2>_&&>_>
                (&local_c8,(uint)&local_160,
                 (TKeyInitializer<Chaos::TVector<int,2>_&&> *)(ulonglong)uVar24,(bool *)&local_e0);
      puVar23 = (undefined8 *)((longlong)local_160 * 0x20 + local_c8.Elements._0_8_);
LAB_143daed0a:
      uVar8 = *(undefined8 *)(pFVar7 + uVar22 * 0x18 + 0x10);
      pFVar1 = (ForAnyElementType *)(puVar23 + 1);
      local_128._0_4_ = (float)uVar8;
      local_128._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
      uVar9 = *(undefined8 *)(pFVar7 + uVar22 * 0x18 + 8);
      local_120._0_4_ = (float)uVar9;
      local_120._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
      fVar28 = (float)((uint)((float)local_128 - (float)local_120) & uVar18);
      fVar29 = (float)((uint)(local_128._4_4_ - local_120._4_4_) & uVar18);
      fVar31 = SQRT(fVar29 * fVar29 + fVar28 * fVar28);
      if (fVar31 <= fVar12) {
        local_110 = 0x3f3504f3;
        uStack_10c = 0x3f3504f3;
        local_174 = 0x3f3504f33f3504f3;
      }
      else {
        fVar31 = fVar30 / fVar31;
        local_118 = fVar28 * fVar31;
        fStack_114 = fVar29 * fVar31;
        local_174 = CONCAT44(fStack_114,local_118);
      }
      local_128 = uVar8;
      local_120 = uVar9;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_174) &&
          ((FScriptContainerElement *)&local_174 <
           pFVar1->Data + (longlong)*(int *)((longlong)puVar23 + 0x14) * 8)) &&
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
      iVar16 = *(int *)(puVar23 + 2);
      if (iVar16 == *(int *)((longlong)puVar23 + 0x14)) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,pFVar1,(int *)((longlong)puVar23 + 0x14));
      }
      *(int *)(puVar23 + 2) = iVar16 + 1;
      *(undefined8 *)(pFVar1->Data + (longlong)iVar16 * 8) = local_174;
      uVar24 = *(uint *)(pFVar6 + uVar22 * 0xc);
      uStack_180 = *(uint *)(pFVar6 + uVar22 * 0xc + 8);
      local_184 = uVar24;
      if ((int)uStack_180 <= (int)uVar24) {
        local_184 = uStack_180;
        uStack_180 = uVar24;
      }
      uVar24 = (local_184 >> 2) + 0x9e3779b9 + uStack_180 + local_184 * 0x40 ^ local_184;
      if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
        FVar20 = (ForElementType<FSetElementId>)&local_c8.Hash;
        if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar20 = local_c8.Hash.SecondaryData;
        }
        iVar16 = *(int *)((longlong)FVar20 + (ulonglong)(local_c8.HashSize - 1U & uVar24) * 4);
        while (iVar16 != -1) {
          puVar23 = (undefined8 *)((longlong)iVar16 * 0x20 + local_c8.Elements._0_8_);
          if (((uint)*puVar23 == local_184) && ((uint)((ulonglong)*puVar23 >> 0x20) == uStack_180))
          {
            if ((iVar16 != -1) && (puVar23 != (undefined8 *)0x0)) goto LAB_143daef0a;
            break;
          }
          iVar16 = *(int *)(puVar23 + 3);
        }
      }
      local_d8 = &local_184;
      TSet<TTuple<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<Chaos::TVector<int,2>_&&>_>
                (&local_c8,(uint)&local_15c,
                 (TKeyInitializer<Chaos::TVector<int,2>_&&> *)(ulonglong)uVar24,(bool *)&local_d8);
      puVar23 = (undefined8 *)((longlong)local_15c * 0x20 + local_c8.Elements._0_8_);
LAB_143daef0a:
      uVar8 = *(undefined8 *)(pFVar7 + uVar22 * 0x18);
      pFVar1 = (ForAnyElementType *)(puVar23 + 1);
      local_108._0_4_ = (float)uVar8;
      local_108._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
      uVar9 = *(undefined8 *)(pFVar7 + uVar22 * 0x18 + 0x10);
      local_100._0_4_ = (float)uVar9;
      local_100._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
      fVar28 = (float)((uint)((float)local_108 - (float)local_100) & uVar18);
      fVar29 = (float)((uint)(local_108._4_4_ - local_100._4_4_) & uVar18);
      fVar31 = SQRT(fVar29 * fVar29 + fVar28 * fVar28);
      if (fVar31 <= fVar12) {
        local_f0 = 0x3f3504f3;
        uStack_ec = 0x3f3504f3;
        local_16c = 0x3f3504f33f3504f3;
      }
      else {
        fVar31 = fVar30 / fVar31;
        local_f8 = fVar28 * fVar31;
        fStack_f4 = fVar29 * fVar31;
        local_16c = CONCAT44(fStack_f4,local_f8);
      }
      local_108 = uVar8;
      local_100 = uVar9;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_16c) &&
          ((FScriptContainerElement *)&local_16c <
           pFVar1->Data + (longlong)*(int *)((longlong)puVar23 + 0x14) * 8)) &&
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
      iVar16 = *(int *)(puVar23 + 2);
      if (iVar16 == *(int *)((longlong)puVar23 + 0x14)) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,pFVar1,(int *)((longlong)puVar23 + 0x14));
      }
      uVar25 = (ulonglong)(uVar26 + 1);
      *(int *)(puVar23 + 2) = iVar16 + 1;
      *(undefined8 *)(pFVar1->Data + (longlong)iVar16 * 8) = local_16c;
      iVar16 = (local_d0->MElements).ArrayNum;
      uVar22 = uVar22 + 1;
    } while ((int)(uVar26 + 1) < iVar16);
  }
  pFVar27 = local_158;
  uVar22 = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&local_158->BaseDists,
             (TArray<float,TSizedDefaultAllocator<32>_> *)&local_158->_padding_);
  uVar18 = (uint)pFVar27->_padding_;
  pTVar4 = &pFVar27->WarpWeftScaleBaseMultipliers;
  iVar16 = (pFVar27->WarpWeftScaleBaseMultipliers).ArrayNum;
  piVar2 = &(pFVar27->WarpWeftScaleBaseMultipliers).ArrayNum;
  local_150 = (TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *)
              piVar2;
  if (iVar16 < (int)uVar18) {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,4,uVar18 - iVar16,&pTVar4->AllocatorInstance,piVar2,
                        &(pFVar27->WarpWeftScaleBaseMultipliers).ArrayMax);
    memset((pTVar4->AllocatorInstance).Data + (longlong)iVar17 * 8,0,
           (longlong)(int)(uVar18 - iVar16) << 3);
  }
  else {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if ((int)uVar18 < iVar16) {
      uVar24 = iVar16 - uVar18;
      if (((int)(uVar24 | uVar18) < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (uVar24 != 0) {
        pFVar6 = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar18 * 8;
        iVar16 = (*piVar2 - uVar24) - uVar18;
        if (iVar16 != 0) {
          memmove(pFVar6,pFVar6 + (longlong)(int)uVar24 * 8,(longlong)iVar16 << 3);
        }
        *piVar2 = *piVar2 - uVar24;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&pTVar4->AllocatorInstance,*piVar2,
                   &(pFVar27->WarpWeftScaleBaseMultipliers).ArrayMax);
      }
    }
  }
  uVar25 = uVar22;
  if (0 < (int)pFVar27->_padding_) {
    do {
      uVar26 = (uint)uVar25;
      uVar24 = ~uVar26 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar26 < (int)pFVar27->_padding_) {
        uVar18 = uVar24;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar18 = *(uint *)(pFVar27->_padding_ + 4 + uVar22 * 8);
      uVar19 = 0;
      if ((int)uVar26 < (int)pFVar27->_padding_) {
        uVar19 = uVar24;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar19 = *(uint *)(pFVar27->_padding_ + uVar22 * 8);
      uVar11 = uVar19;
      if ((int)uVar18 < (int)uVar19) {
        uVar11 = uVar18;
        uVar18 = uVar19;
      }
      if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
        FVar20 = (ForElementType<FSetElementId>)&local_c8.Hash;
        if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar20 = local_c8.Hash.SecondaryData;
        }
        iVar16 = *(int *)((longlong)FVar20 +
                         (ulonglong)
                         (local_c8.HashSize - 1U &
                         (uVar11 * 0x40 + -0x61c88647 + uVar18 + (uVar11 >> 2) ^ uVar11)) * 4);
        while (iVar16 != -1) {
          puVar23 = (undefined8 *)((longlong)iVar16 * 0x20 + local_c8.Elements._0_8_);
          if (((uint)*puVar23 == uVar11) && ((uint)((ulonglong)*puVar23 >> 0x20) == uVar18)) {
            if (iVar16 != -1) {
              if (puVar23 != (undefined8 *)0x0) goto LAB_143daf2e7;
              goto LAB_143daf2c1;
            }
            break;
          }
          iVar16 = *(int *)(puVar23 + 3);
        }
      }
      puVar23 = (undefined8 *)0x0;
LAB_143daf2c1:
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar15) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
LAB_143daf2e7:
      if ((*(int *)(puVar23 + 2) == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("EdgeMultipliers.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSpringConstraints.cpp"
                              ,0x11a,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pfVar21 = (float *)puVar23[1];
      iVar16 = *(int *)(puVar23 + 2);
      pfVar5 = pfVar21 + (longlong)iVar16 * 2;
      while( true ) {
        if (*(int *)(puVar23 + 2) != iVar16) {
          local_198[0] = 0;
          `TCheckedPointerIterator<Chaos::TVector<float,2>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_198);
        }
        if (pfVar21 == pfVar5) break;
        uVar18 = 0;
        if ((int)uVar26 < *(int *)local_150) {
          uVar18 = uVar24;
        }
        if ((uVar18 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar6 = (local_158->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data;
        *(float *)(pFVar6 + uVar22 * 8) = *(float *)(pFVar6 + uVar22 * 8) + *pfVar21;
        pfVar3 = pfVar21 + 1;
        pfVar21 = pfVar21 + 2;
        *(float *)(pFVar6 + uVar22 * 8 + 4) = *pfVar3 + *(float *)(pFVar6 + uVar22 * 8 + 4);
      }
      uVar18 = 0;
      if ((int)uVar26 < *(int *)local_150) {
        uVar18 = uVar24;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar6 = (local_158->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data;
      fVar30 = *(float *)(pFVar6 + uVar22 * 8);
      fVar31 = *(float *)(pFVar6 + uVar22 * 8 + 4);
      fVar28 = fVar31 * fVar31 + fVar30 * fVar30;
      if (fVar28 <= fVar12) {
        fVar31 = 0.0;
        fVar30 = 0.0;
      }
      else {
        fVar28 = __real_3f800000 / SQRT(fVar28);
        fVar31 = fVar31 * fVar28;
        fVar30 = fVar30 * fVar28;
      }
      *(float *)(pFVar6 + uVar22 * 8) = fVar30;
      *(float *)(pFVar6 + uVar22 * 8 + 4) = fVar31;
      uVar22 = uVar22 + 1;
      uVar25 = (ulonglong)(uVar26 + 1);
      pFVar27 = local_158;
    } while ((int)(uVar26 + 1) < (int)local_158->_padding_);
  }
  pFVar27->bWarpWeftScaleEnabled = true;
  local_c8.HashSize = 0;
  if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.Elements);
  return;
}

// ResetRestLengths @ 143db48d0

void __thiscall
Chaos::Softs::FPBDEdgeSpringConstraints::ResetRestLengths
          (FPBDEdgeSpringConstraints *this,TArrayView<Chaos::TVector<float,3>_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  TArrayView<float,int> local_18;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId376,"FPBDSpringConstraints_ResetRestLengths",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSpringConstraints.cpp"
               ,0x178);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId376);
  }
  if (this->bWarpWeftScaleEnabled == false) {
    local_18.DataPtr = (float *)this->_padding_;
    iVar3 = (int)this->_padding_;
  }
  else {
    local_18.DataPtr = (float *)(this->BaseDists).AllocatorInstance.Data;
    iVar3 = (this->BaseDists).ArrayNum;
  }
  if ((iVar3 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_18.ArrayNum = iVar3;
  FPBDSpringConstraintsBase::CalculateRestLengths
            ((FPBDSpringConstraintsBase *)this,param_1,&local_18);
  UpdateDists(this);
  if (!bVar4) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// SetProperties @ 143db8480

void __thiscall
Chaos::Softs::FPBDEdgeSpringConstraints::SetProperties
          (FPBDEdgeSpringConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2)

{
  bool *pbVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  TVector<float,2> TVar5;
  ECollectionPropertyFlags EVar6;
  bool bVar7;
  byte bVar8;
  FString *pFVar9;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar10;
  FPBDWeightMap *pFVar11;
  TArrayView<unsigned_char_const_,int> *pTVar12;
  float fVar13;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined8 local_188;
  TVector2<float>_u_0 local_180;
  TArrayView<float_const_,int> local_178;
  TArrayView<float_const_,int> local_168;
  TArrayView<float_const_,int> local_158;
  undefined1 local_148 [40];
  undefined8 local_120;
  bool local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_100;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_f0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_e0;
  FPBDWeightMap local_d0;
  FPBDWeightMap local_98;
  
  iVar2 = (this->EdgeSpringStiffnessIndex).Index;
  if (iVar2 != -1) {
    pTVar12 = &param_1->FlagsArray;
    EVar6 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar2,pTVar12);
    if (((EVar6 & Animatable) != None) &&
       (EVar6 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->EdgeSpringStiffnessIndex).Index,pTVar12),
       (char)EVar6 < '\0')) {
      if (((this->EdgeSpringStiffnessIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("EdgeSpringStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSpringConstraints.h"
                             ,0xb7,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = (this->EdgeSpringStiffnessIndex).Index;
      local_188._4_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar2,&param_1->HighValueArray);
      local_188._0_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar2,&param_1->LowValueArray);
      if (((this->EdgeSpringStiffnessIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("EdgeSpringStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSpringConstraints.h"
                             ,0xb7,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->EdgeSpringStiffnessIndex).Index,pTVar12);
      if ((EVar6 & StringDirty) == None) {
        if (__real_3f800000 <= (float)local_188) {
          local_188._0_4_ = __real_3f800000;
        }
        if (__real_3f800000 <= local_188._4_4_) {
          local_188._4_4_ = __real_3f800000;
        }
        if ((float)local_188 <= 0.0) {
          local_188._0_4_ = 0.0;
        }
        if (local_188._4_4_ <= 0.0) {
          local_188._4_4_ = 0.0;
        }
        if (((float)local_188 == *(float *)&this->_padding_) &&
           (local_188._4_4_ == *(float *)((longlong)&this->_padding_ + 4))) {
          this->_padding_ = (longlong)local_188;
          *(char *)&this->_padding_ = (char)this->_padding_;
        }
        else {
          this->_padding_ = (longlong)local_188;
          *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
        }
      }
      else {
        if (((this->EdgeSpringStiffnessIndex).Index == -1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("EdgeSpringStiffnessIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSpringConstraints.h"
                               ,0xb7,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                           (param_1,(this->EdgeSpringStiffnessIndex).Index,
                            &param_1->StringValueArray);
        local_100.DataPtr = (TVector<int,2> *)this->_padding_;
        local_100.ArrayNum = (int)this->_padding_;
        iVar2 = *(int *)((longlong)&this->_padding_ + 4);
        lVar4 = this->_padding_;
        if ((local_100.ArrayNum < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar10 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                          *)param_2,pFVar9);
        if (pTVar10 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
          local_178.DataPtr = (float *)0x0;
          local_178._8_8_ = (ulonglong)(uint)local_178._12_4_ << 0x20;
        }
        else {
          local_178.DataPtr = *(float **)&pTVar10->field_0x10;
          local_178._8_8_ = *(undefined8 *)&pTVar10->field_0x18;
        }
        local_180 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        FPBDWeightMap::FPBDWeightMap<2>
                  ((FPBDWeightMap *)local_148,(TVector<float,2> *)&local_180._s_0,&local_178,
                   &local_100,(int)lVar4,iVar2,0x10,(void *)0x0);
        if (__real_3f800000 <= (float)local_188) {
          local_188._0_4_ = __real_3f800000;
        }
        if (__real_3f800000 <= local_188._4_4_) {
          local_188._4_4_ = __real_3f800000;
        }
        local_148._0_8_ = &___7FPBDStiffness_Softs_Chaos__6B_;
        local_110 = 0x447a0000;
        if ((float)local_188 <= 0.0) {
          local_188._0_4_ = 0.0;
        }
        local_10c = 0x40dd0c55;
        if (local_188._4_4_ <= 0.0) {
          local_188._4_4_ = 0.0;
        }
        local_104 = 0;
        if (((float)local_120 == (float)local_188) && (local_120._4_4_ == local_188._4_4_)) {
          bVar8 = 0;
        }
        else {
          bVar8 = 1;
        }
        local_118 = (bool)(local_118 | bVar8);
        local_120 = local_188;
        FPBDWeightMap::operator=((FPBDWeightMap *)&this->_padding_,(FPBDWeightMap *)local_148);
        *(undefined4 *)&this->_padding_ = local_110;
        *(undefined4 *)&this->_padding_ = local_10c._4_4_;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = (undefined4)local_10c;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = local_104;
        if ((FScriptContainerElement *)local_148._24_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_148._24_8_);
        }
        if ((FScriptContainerElement *)local_148._8_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_148._8_8_);
        }
      }
    }
  }
  pTVar12 = &param_1->FlagsArray;
  if (this->bWarpWeftScaleEnabled != false) {
    iVar2 = (this->EdgeSpringWarpScaleIndex).Index;
    if (((iVar2 != -1) &&
        (EVar6 = FCollectionPropertyConstFacade::
                 GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                           (param_1,iVar2,pTVar12), (EVar6 & Animatable) != None)) &&
       (EVar6 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->EdgeSpringWarpScaleIndex).Index,pTVar12),
       (char)EVar6 < '\0')) {
      if (((this->EdgeSpringWarpScaleIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("EdgeSpringWarpScaleIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSpringConstraints.h"
                             ,0xb8,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = (this->EdgeSpringWarpScaleIndex).Index;
      fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                         (param_1,iVar2,&param_1->HighValueArray);
      local_res8._0_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar2,&param_1->LowValueArray);
      local_res8._4_4_ = fVar13;
      TVar5 = local_res8;
      if (((this->EdgeSpringWarpScaleIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("EdgeSpringWarpScaleIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSpringConstraints.h"
                             ,0xb8,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->EdgeSpringWarpScaleIndex).Index,pTVar12);
      if ((EVar6 & StringDirty) == None) {
        if (((float)local_res8 == *(float *)&(this->WarpScale).WeightedValue) &&
           (local_res8._4_4_ == *(float *)&(this->WarpScale).WeightedValue.field_0x4)) {
          bVar8 = 0;
        }
        else {
          bVar8 = 1;
        }
        pbVar1 = &(this->WarpScale).bIsDirty;
        *pbVar1 = (bool)(*pbVar1 | bVar8);
        (this->WarpScale).WeightedValue = TVar5;
      }
      else {
        if (((this->EdgeSpringWarpScaleIndex).Index == -1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("EdgeSpringWarpScaleIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSpringConstraints.h"
                               ,0xb8,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                           (param_1,(this->EdgeSpringWarpScaleIndex).Index,
                            &param_1->StringValueArray);
        local_f0.DataPtr = (TVector<int,2> *)this->_padding_;
        local_f0.ArrayNum = (int)this->_padding_;
        iVar2 = *(int *)((longlong)&this->_padding_ + 4);
        lVar4 = this->_padding_;
        if ((local_f0.ArrayNum < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar10 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                          *)param_2,pFVar9);
        if (pTVar10 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
          local_168.DataPtr = (float *)0x0;
          local_168._8_8_ = (ulonglong)(uint)local_168._12_4_ << 0x20;
        }
        else {
          local_168.DataPtr = *(float **)&pTVar10->field_0x10;
          local_168._8_8_ = *(undefined8 *)&pTVar10->field_0x18;
        }
        pFVar11 = FPBDWeightMap::FPBDWeightMap<2>
                            (&local_d0,(TVector<float,2> *)&local_res8,&local_168,&local_f0,
                             (int)lVar4,iVar2,0x10,(void *)0x0);
        FPBDWeightMap::operator=(&this->WarpScale,pFVar11);
        if (local_d0.Table.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Table.AllocatorInstance.Data);
        }
        if (local_d0.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Indices.AllocatorInstance.Data);
        }
      }
    }
    iVar2 = (this->EdgeSpringWeftScaleIndex).Index;
    if (((iVar2 != -1) &&
        (EVar6 = FCollectionPropertyConstFacade::
                 GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                           (param_1,iVar2,pTVar12), (EVar6 & Animatable) != None)) &&
       (EVar6 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->EdgeSpringWeftScaleIndex).Index,pTVar12),
       (char)EVar6 < '\0')) {
      if (((this->EdgeSpringWeftScaleIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("EdgeSpringWeftScaleIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSpringConstraints.h"
                             ,0xb9,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = (this->EdgeSpringWeftScaleIndex).Index;
      fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                         (param_1,iVar2,&param_1->HighValueArray);
      local_res20._0_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar2,&param_1->LowValueArray);
      local_res20._4_4_ = fVar13;
      TVar5 = local_res20;
      if (((this->EdgeSpringWeftScaleIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("EdgeSpringWeftScaleIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSpringConstraints.h"
                             ,0xb9,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->EdgeSpringWeftScaleIndex).Index,pTVar12);
      if ((EVar6 & StringDirty) == None) {
        if (((float)local_res20 == *(float *)&(this->WeftScale).WeightedValue) &&
           (local_res20._4_4_ == *(float *)&(this->WeftScale).WeightedValue.field_0x4)) {
          bVar8 = 0;
        }
        else {
          bVar8 = 1;
        }
        pbVar1 = &(this->WeftScale).bIsDirty;
        *pbVar1 = (bool)(*pbVar1 | bVar8);
        (this->WeftScale).WeightedValue = TVar5;
      }
      else {
        if (((this->EdgeSpringWeftScaleIndex).Index == -1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("EdgeSpringWeftScaleIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDSpringConstraints.h"
                               ,0xb9,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                           (param_1,(this->EdgeSpringWeftScaleIndex).Index,
                            &param_1->StringValueArray);
        local_e0.DataPtr = (TVector<int,2> *)this->_padding_;
        local_e0.ArrayNum = (int)this->_padding_;
        iVar2 = *(int *)((longlong)&this->_padding_ + 4);
        lVar4 = this->_padding_;
        if ((local_e0.ArrayNum < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar10 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                          *)param_2,pFVar9);
        if (pTVar10 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
          local_158.DataPtr = (float *)0x0;
          local_158._8_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
        }
        else {
          local_158.DataPtr = *(float **)&pTVar10->field_0x10;
          local_158._8_8_ = *(undefined8 *)&pTVar10->field_0x18;
        }
        pFVar11 = FPBDWeightMap::FPBDWeightMap<2>
                            (&local_98,(TVector<float,2> *)&local_res20,&local_158,&local_e0,
                             (int)lVar4,iVar2,0x10,(void *)0x0);
        FPBDWeightMap::operator=(&this->WeftScale,pFVar11);
        if (local_98.Table.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Table.AllocatorInstance.Data);
        }
        if (local_98.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Indices.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// UpdateDists @ 143dbb8b0

void __thiscall
Chaos::Softs::FPBDEdgeSpringConstraints::UpdateDists(FPBDEdgeSpringConstraints *this)

{
  float fVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (this->bWarpWeftScaleEnabled != false) {
    if (((this->WarpScale).Table.ArrayNum < 2) ||
       ((float)((uint)(*(float *)&(this->WarpScale).WeightedValue -
                      *(float *)&(this->WarpScale).WeightedValue.field_0x4) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (((this->WeftScale).Table.ArrayNum < 2) ||
       ((float)((uint)(*(float *)&(this->WeftScale).WeightedValue -
                      *(float *)&(this->WeftScale).WeightedValue.field_0x4) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    fVar13 = FPBDWeightMap::operator_float(&this->WarpScale);
    fVar14 = FPBDWeightMap::operator_float(&this->WeftScale);
    uVar10 = 0;
    if (0 < (this->BaseDists).ArrayNum) {
      lVar12 = 0;
      do {
        uVar11 = ~uVar10 >> 0x1f;
        fVar16 = fVar13;
        if (bVar5) {
          uVar8 = 0;
          if ((int)uVar10 < (this->WarpScale).Indices.ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar2 = (this->WarpScale).Indices.AllocatorInstance.Data[lVar12];
          if (((this->WarpScale).Table.ArrayNum <= (int)(uint)(byte)FVar2) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar16 = *(float *)((this->WarpScale).Table.AllocatorInstance.Data +
                             (ulonglong)(byte)FVar2 * 4);
        }
        lVar9 = (longlong)(int)uVar10;
        fVar15 = fVar14;
        if (bVar6) {
          uVar8 = 0;
          if ((int)uVar10 < (this->WeftScale).Indices.ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar2 = (this->WeftScale).Indices.AllocatorInstance.Data[lVar9];
          if (((this->WeftScale).Table.ArrayNum <= (int)(uint)(byte)FVar2) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar15 = *(float *)((this->WeftScale).Table.AllocatorInstance.Data +
                             (ulonglong)(byte)FVar2 * 4);
        }
        uVar8 = 0;
        if ((int)uVar10 < (this->WarpWeftScaleBaseMultipliers).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar10 < (this->WarpWeftScaleBaseMultipliers).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar15 = fVar15 * *(float *)(pFVar3 + lVar9 * 8);
        fVar16 = fVar16 * *(float *)((this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data +
                                    lVar9 * 8 + 4);
        uVar8 = 0;
        if ((int)uVar10 < (this->BaseDists).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar1 = *(float *)((this->BaseDists).AllocatorInstance.Data + lVar12 * 4);
        uVar8 = 0;
        if ((int)uVar10 < (int)this->_padding_) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = uVar10 + 1;
        *(float *)(this->_padding_ + lVar12 * 4) = SQRT(fVar15 * fVar15 + fVar16 * fVar16) * fVar1;
        lVar12 = lVar12 + 1;
      } while ((int)uVar10 < (this->BaseDists).ArrayNum);
    }
  }
  return;
}

