// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FPBDAreaSpringConstraints @ 143c430b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPBDAreaSpringConstraints * __thiscall
Chaos::Softs::FPBDAreaSpringConstraints::FPBDAreaSpringConstraints
          (FPBDAreaSpringConstraints *this,FSolverParticlesRange *param_1,FTriangleMesh *param_2,
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
  FPBDAreaSpringConstraints *pFVar13;
  uint uVar14;
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> *pTVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> local_1f8;
  TArray<float,TSizedDefaultAllocator<32>_> local_1e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1d8;
  float local_1c8;
  float fStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  float local_1b8;
  float fStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  FCollectionPropertyConstFacade *local_1a8;
  TVector<float,2> local_1a0;
  FCollectionPropertyConstFacade *local_198;
  TVector<float,2> local_190;
  FCollectionPropertyConstFacade *local_188;
  TVector<float,2> local_180;
  TArrayView<float_const_,int> local_178;
  TArrayView<float_const_,int> local_168;
  TArrayView<float_const_,int> local_158;
  FSolverParticlesRange *local_148;
  bool bStack_140;
  undefined7 uStack_13f;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_138;
  FString local_128;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_118;
  FString local_108;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_f8;
  FString local_e8;
  <lambda_5_> local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [3];
  
  fVar23 = __real_3f800000;
  this_00 = &param_5->KeyNameIndices;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,AreaSpringStiffnessName);
  if ((piVar10 == (int *)0x0) || (iVar16 = *piVar10, iVar16 == -1)) {
    local_1a0 = (TVector<float,2>)0x3f8000003f800000;
  }
  else {
    fVar21 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar16,&param_5->HighValueArray);
    fVar22 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar16,&param_5->LowValueArray);
    local_1a0._4_4_ = fVar21;
    local_1a0._0_4_ = fVar22;
  }
  pFVar11 = ::FName::ToString(&AreaSpringStiffnessName,&local_c8);
  pFVar11 = ::FString::FString(&local_98,pFVar11);
  local_1a8 = param_5;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_5,&local_128,&AreaSpringStiffnessName,(<lambda_1> *)&local_1a8,pFVar11,(int *)0x0
            );
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_4,&local_128);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_178.DataPtr = (float *)0x0;
    local_178._8_8_ = (ulonglong)(uint)local_178._12_4_ << 0x20;
  }
  else {
    local_178.DataPtr = *(float **)&pTVar12->field_0x10;
    local_178._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  bStack_140 = param_6;
  local_d8._9_7_ = uStack_13f;
  local_d8.bTrimKinematicConstraints = param_6;
  this->_padding_ = (longlong)&___7FPBDAxialSpringConstraintsBase_Softs_Chaos__6B_;
  local_148 = param_1;
  local_d8.Particles = param_1;
  FPBDAxialSpringConstraintsBase::
  TrimConstraints<_Chaos::Softs::FPBDAxialSpringConstraintsBase::FPBDAxialSpringConstraintsBase_::__l1::<lambda_5_>_>
            ((FPBDAxialSpringConstraintsBase *)this,
             (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             &param_2->MElements,&local_d8);
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)&param_1->field_0x14;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  lVar5 = this->_padding_;
  local_138.ArrayNum = (int)this->_padding_;
  iVar16 = *(int *)((longlong)&this->_padding_ + 4);
  local_138.DataPtr = (TVector<int,3> *)this->_padding_;
  if ((local_138.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FPBDAreaSpringConstraints *)(*pcVar4)();
    return pFVar13;
  }
  FPBDStiffness::FPBDStiffness<3>
            ((FPBDStiffness *)&this->_padding_,&local_1a0,&local_178,&local_138,(int)lVar5,iVar16,
             0x10,__real_447a0000,fVar23);
  FPBDAxialSpringConstraintsBase::Init<Chaos::Softs::FSolverParticlesRange>
            ((FPBDAxialSpringConstraintsBase *)this,param_1,param_6);
  this->_padding_ = (longlong)&___7FPBDAxialSpringConstraints_Softs_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  iVar16 = *(int *)((longlong)&this->_padding_ + 4);
  lVar5 = this->_padding_;
  this->_padding_ = (longlong)&___7FPBDAreaSpringConstraints_Softs_Chaos__6B_;
  this->bWarpWeftScaleEnabled = false;
  local_118.DataPtr = (TVector<int,3> *)this->_padding_;
  iVar7 = (int)this->_padding_;
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FPBDAreaSpringConstraints *)(*pcVar4)();
    return pFVar13;
  }
  local_118.ArrayNum = iVar7;
  pFVar11 = ::FName::ToString(&AreaSpringWarpScaleName,&local_b8);
  pFVar11 = ::FString::FString(&local_88,pFVar11);
  local_198 = param_5;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_5,&local_108,&AreaSpringWarpScaleName,(<lambda_1> *)&local_198,pFVar11,(int *)0x0
            );
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_4,&local_108);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_168.DataPtr = (float *)0x0;
    local_168._8_8_ = (ulonglong)(uint)local_168._12_4_ << 0x20;
  }
  else {
    local_168.DataPtr = *(float **)&pTVar12->field_0x10;
    local_168._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  local_1c0 = 0x3f800000;
  uStack_1bc = 0x3f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,AreaSpringWarpScaleName);
  if ((piVar10 == (int *)0x0) || (iVar7 = *piVar10, iVar7 == -1)) {
    local_190._4_4_ = uStack_1bc;
    local_190._0_4_ = local_1c0;
  }
  else {
    fVar23 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar7,&param_5->HighValueArray);
    local_1c8 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (param_5,iVar7,&param_5->LowValueArray);
    local_190._4_4_ = fVar23;
    local_190._0_4_ = local_1c8;
    fStack_1c4 = fVar23;
  }
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WarpScale,&local_190,&local_168,&local_118,(int)lVar5,iVar16,0x10,(void *)0x0);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  local_f8.DataPtr = (TVector<int,3> *)this->_padding_;
  iVar16 = (int)this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  lVar5 = this->_padding_;
  if ((iVar16 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FPBDAreaSpringConstraints *)(*pcVar4)();
    return pFVar13;
  }
  local_f8.ArrayNum = iVar16;
  pFVar11 = ::FName::ToString(&AreaSpringWeftScaleName,&local_a8);
  pFVar11 = ::FString::FString(local_78,pFVar11);
  local_188 = param_5;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_5,&local_e8,&AreaSpringWeftScaleName,(<lambda_1> *)&local_188,pFVar11,(int *)0x0)
  ;
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_4,&local_e8);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_158.DataPtr = (float *)0x0;
    local_158._8_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
  }
  else {
    local_158.DataPtr = *(float **)&pTVar12->field_0x10;
    local_158._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  local_1b0 = 0x3f800000;
  uStack_1ac = 0x3f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,AreaSpringWeftScaleName);
  if ((piVar10 == (int *)0x0) || (iVar16 = *piVar10, iVar16 == -1)) {
    local_180._4_4_ = uStack_1ac;
    local_180._0_4_ = local_1b0;
  }
  else {
    fVar23 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar16,&param_5->HighValueArray);
    local_1b8 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (param_5,iVar16,&param_5->LowValueArray);
    local_180._4_4_ = fVar23;
    local_180._0_4_ = local_1b8;
    fStack_1b4 = fVar23;
  }
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WeftScale,&local_180,&local_158,&local_f8,(int)lVar5,iVar7,0x10,(void *)0x0);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  uVar18 = 0;
  (this->BaseDists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseDists).ArrayNum = 0;
  (this->BaseDists).ArrayMax = 0;
  (this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpWeftScaleBaseMultipliers).ArrayNum = 0;
  (this->WarpWeftScaleBaseMultipliers).ArrayMax = 0;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,AreaSpringStiffnessName);
  iVar16 = -1;
  if (piVar10 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar10;
  }
  (this->AreaSpringStiffnessIndex).Index = iVar7;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,AreaSpringWarpScaleName);
  if (piVar10 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar10;
  }
  (this->AreaSpringWarpScaleIndex).Index = iVar7;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,AreaSpringWeftScaleName);
  if (piVar10 != (int *)0x0) {
    iVar16 = *piVar10;
  }
  (this->AreaSpringWeftScaleIndex).Index = iVar16;
  if (((this->AreaSpringWarpScaleIndex).Index != -1) || (iVar16 != -1)) {
    InitFromPatternData(this,param_3,param_2);
  }
  FPBDAxialSpringConstraints::InitColor<Chaos::Softs::FSolverParticlesRange>
            ((FPBDAxialSpringConstraints *)this,&local_1d8,param_1);
  if ((this->bWarpWeftScaleEnabled != false) &&
     (iVar16 = (int)this->_padding_, local_1d8.ArrayNum == iVar16)) {
    local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.ArrayNum = 0;
    local_1e8.ArrayMax = 0;
    local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.ArrayNum = 0;
    local_1f8.ArrayMax = 0;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_1e8,iVar16,Default);
    TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_1f8,(int)this->_padding_,Default);
    if (0 < (int)this->_padding_) {
      param_4 = (TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
                 *)0x0;
      uVar19 = uVar18;
      do {
        uVar17 = (uint)uVar18;
        uVar14 = ~uVar17 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar17 < local_1d8.ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar13 = (FPBDAreaSpringConstraints *)(*pcVar4)();
          return pFVar13;
        }
        uVar8 = *(uint *)(local_1d8.AllocatorInstance.Data + uVar19);
        uVar9 = 0;
        if ((int)uVar17 < (this->BaseDists).ArrayNum) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar13 = (FPBDAreaSpringConstraints *)(*pcVar4)();
          return pFVar13;
        }
        uVar1 = *(undefined4 *)((this->BaseDists).AllocatorInstance.Data + uVar19);
        uVar9 = 0;
        if ((int)uVar8 < local_1e8.ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar13 = (FPBDAreaSpringConstraints *)(*pcVar4)();
          return pFVar13;
        }
        *(undefined4 *)(local_1e8.AllocatorInstance.Data + (longlong)(int)uVar8 * 4) = uVar1;
        uVar9 = 0;
        if ((int)uVar17 < (this->WarpWeftScaleBaseMultipliers).ArrayNum) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar13 = (FPBDAreaSpringConstraints *)(*pcVar4)();
          return pFVar13;
        }
        uVar2 = *(undefined8 *)
                 (&param_4->field_0x0 +
                 (longlong)(this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data);
        uVar14 = 0;
        if ((int)uVar8 < local_1f8.ArrayNum) {
          uVar14 = ~uVar8 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar13 = (FPBDAreaSpringConstraints *)(*pcVar4)();
          return pFVar13;
        }
        param_4 = (TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
                   *)&param_4->field_0x8;
        uVar18 = (ulonglong)(uVar17 + 1);
        uVar19 = uVar19 + 4;
        *(undefined8 *)(local_1f8.AllocatorInstance.Data + (longlong)(int)uVar8 * 8) = uVar2;
      } while ((int)(uVar17 + 1) < (int)this->_padding_);
    }
    pTVar20 = &this->BaseDists;
    pTVar15 = &this->WarpWeftScaleBaseMultipliers;
    if (pTVar20 != &local_1e8) {
      pFVar3 = (pTVar20->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar20->AllocatorInstance).Data = local_1e8.AllocatorInstance.Data;
      (this->BaseDists).ArrayNum = local_1e8.ArrayNum;
      (this->BaseDists).ArrayMax = local_1e8.ArrayMax;
      local_1e8.ArrayNum = 0;
      local_1e8.ArrayMax = 0;
      local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (pTVar15 != &local_1f8) {
      pFVar3 = (pTVar15->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar15->AllocatorInstance).Data = local_1f8.AllocatorInstance.Data;
      (this->WarpWeftScaleBaseMultipliers).ArrayNum = local_1f8.ArrayNum;
      (this->WarpWeftScaleBaseMultipliers).ArrayMax = local_1f8.ArrayMax;
      local_1f8.ArrayNum = 0;
      local_1f8.ArrayMax = 0;
      local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    FPBDWeightMap::ReorderIndices(&this->WarpScale,&local_1d8);
    FPBDWeightMap::ReorderIndices(&this->WeftScale,&local_1d8);
    if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.AllocatorInstance.Data);
    }
    if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.AllocatorInstance.Data);
    }
  }
  if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.AllocatorInstance.Data);
  }
  return this;
}

// ~FPBDAreaSpringConstraints @ 143c45350

void __thiscall
Chaos::Softs::FPBDAreaSpringConstraints::~FPBDAreaSpringConstraints(FPBDAreaSpringConstraints *this)

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
  this->_padding_ = (longlong)&___7FPBDAxialSpringConstraints_Softs_Chaos__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FPBDAxialSpringConstraintsBase::~FPBDAxialSpringConstraintsBase
            ((FPBDAxialSpringConstraintsBase *)this);
  return;
}

// ApplyProperties @ 143c5b6f0

void __thiscall
Chaos::Softs::FPBDAreaSpringConstraints::ApplyProperties
          (FPBDAreaSpringConstraints *this,float param_1,int param_2)

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

// InitFromPatternData @ 143c69e60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDAreaSpringConstraints::InitFromPatternData
          (FPBDAreaSpringConstraints *this,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_1,
          FTriangleMesh *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  undefined8 uVar19;
  int iVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar27;
  longlong lVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 local_res20 [8];
  uint local_118;
  longlong local_110;
  longlong local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_c8 [8];
  
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->BaseDists,(TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->WarpWeftScaleBaseMultipliers,(int)this->_padding_,Default);
  FTriangleMesh::GetPointToTriangleMap(param_2,local_c8);
  uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar11 = __real_3f800000;
  fVar10 = __real_322bcc77;
  local_118 = 0;
  if (0 < (int)this->_padding_) {
    local_100 = 0;
    local_110 = 0;
    do {
      uVar16 = ~local_118 >> 0x1f;
      uVar26 = 0;
      if ((int)local_118 < (int)this->_padding_) {
        uVar26 = uVar16;
      }
      if ((uVar26 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar28 = this->_padding_;
      uVar26 = *(uint *)(lVar28 + local_110);
      uVar14 = 0;
      if ((int)uVar26 < local_c8[0].ArrayNum) {
        uVar14 = ~uVar26 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar17 = *(int *)(lVar28 + 4 + local_110);
      iVar2 = *(int *)(lVar28 + local_110);
      iVar3 = *(int *)(lVar28 + 8 + local_110);
      pTVar27 = local_c8[0].DataPtr + (int)uVar26;
      iVar20 = iVar17;
      if (iVar17 < iVar2) {
        iVar20 = iVar2;
      }
      iVar15 = iVar3;
      if (iVar3 < iVar20) {
        iVar15 = iVar20;
      }
      iVar20 = iVar2;
      if (((iVar2 != iVar17) && (iVar2 < iVar3 != iVar17 < iVar2)) &&
         (iVar20 = iVar3, iVar17 < iVar3 == iVar2 < iVar17)) {
        iVar20 = iVar17;
      }
      pFVar22 = (pTVar27->AllocatorInstance).Data;
      iVar4 = pTVar27->ArrayNum;
      if (iVar2 < iVar17) {
        iVar17 = iVar2;
      }
      if (iVar17 < iVar3) {
        iVar3 = iVar17;
      }
      pFVar1 = pFVar22 + (longlong)iVar4 * 4;
      while( true ) {
        if (pTVar27->ArrayNum != iVar4) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        uVar26 = 0xffffffff;
        if (pFVar22 == pFVar1) break;
        uVar26 = *(uint *)pFVar22;
        lVar18 = (longlong)(int)uVar26;
        uVar14 = 0;
        if ((int)uVar26 < (param_2->MElements).ArrayNum) {
          uVar14 = ~uVar26 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = (param_2->MElements).AllocatorInstance.Data;
        iVar17 = *(int *)(pFVar5 + lVar18 * 0xc + 4);
        iVar2 = *(int *)(pFVar5 + lVar18 * 0xc);
        iVar23 = *(int *)(pFVar5 + lVar18 * 0xc + 8);
        iVar24 = iVar17;
        if (iVar17 < iVar2) {
          iVar24 = iVar2;
        }
        iVar9 = iVar23;
        if (iVar23 < iVar24) {
          iVar9 = iVar24;
        }
        iVar24 = iVar2;
        if (((iVar2 != iVar17) && (iVar2 < iVar23 != iVar17 < iVar2)) &&
           (iVar24 = iVar23, iVar17 < iVar23 == iVar2 < iVar17)) {
          iVar24 = iVar17;
        }
        if (iVar2 < iVar17) {
          iVar17 = iVar2;
        }
        if (iVar17 < iVar23) {
          iVar23 = iVar17;
        }
        if (((iVar3 == iVar23) && (iVar20 == iVar24)) && (iVar15 == iVar9)) break;
        pFVar22 = pFVar22 + 4;
      }
      if ((uVar26 == 0xffffffff) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("TriangleIndex != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDAxialSpringConstraints.cpp"
                              ,0x120,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar21 = ~uVar26 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar26 < (param_2->MElements).ArrayNum) {
        uVar14 = uVar21;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar22 = (param_2->MElements).AllocatorInstance.Data;
      lVar18 = (longlong)(int)uVar26;
      iVar17 = *(int *)(lVar28 + local_110);
      if ((((*(int *)(pFVar22 + lVar18 * 0xc) != iVar17) &&
           (*(int *)(pFVar22 + lVar18 * 0xc + 4) != iVar17)) &&
          (*(int *)(pFVar22 + lVar18 * 0xc + 8) != iVar17)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Element[0] == Constraint[ConstraintAxis] || Element[1] == Constraint[ConstraintAxis] || Element[2] == Constraint[ConstraintAxis]"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDAxialSpringConstraints.cpp"
                              ,0x125,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar25 = 0;
      if (*(int *)(pFVar22 + lVar18 * 0xc) != *(int *)(lVar28 + local_110)) {
        lVar25 = (ulonglong)(*(int *)(pFVar22 + lVar18 * 0xc + 4) != *(int *)(lVar28 + local_110)) +
                 1;
      }
      iVar17 = *(int *)(lVar28 + 4 + local_110);
      if (((*(int *)(pFVar22 + lVar18 * 0xc) != iVar17) &&
          (*(int *)(pFVar22 + lVar18 * 0xc + 4) != iVar17)) &&
         ((*(int *)(pFVar22 + lVar18 * 0xc + 8) != iVar17 &&
          (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("Element[0] == Constraint[ConstraintAxis] || Element[1] == Constraint[ConstraintAxis] || Element[2] == Constraint[ConstraintAxis]"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDAxialSpringConstraints.cpp"
                               ,0x125,L""), bVar13)))) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar17 = *(int *)(lVar28 + 4 + local_110);
      lVar29 = 0;
      if (*(int *)(pFVar22 + lVar18 * 0xc) != iVar17) {
        lVar29 = (ulonglong)(*(int *)(pFVar22 + lVar18 * 0xc + 4) != iVar17) + 1;
      }
      iVar17 = *(int *)(lVar28 + 8 + local_110);
      if (((*(int *)(pFVar22 + lVar18 * 0xc) != iVar17) &&
          (*(int *)(pFVar22 + lVar18 * 0xc + 4) != iVar17)) &&
         ((*(int *)(pFVar22 + lVar18 * 0xc + 8) != iVar17 &&
          (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("Element[0] == Constraint[ConstraintAxis] || Element[1] == Constraint[ConstraintAxis] || Element[2] == Constraint[ConstraintAxis]"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDAxialSpringConstraints.cpp"
                               ,0x125,L""), bVar13)))) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar17 = *(int *)(lVar28 + 8 + local_110);
      lVar28 = 0;
      if (*(int *)(pFVar22 + lVar18 * 0xc) != iVar17) {
        lVar28 = (ulonglong)(*(int *)(pFVar22 + lVar18 * 0xc + 4) != iVar17) + 1;
      }
      uVar14 = 0;
      if ((int)uVar26 < param_1->ArrayNum) {
        uVar14 = uVar21;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar18 = (longlong)(int)uVar26 * 3;
      uVar19 = *(undefined8 *)((param_1->AllocatorInstance).Data + (lVar25 + lVar18) * 8);
      uVar14 = 0;
      if ((int)uVar26 < param_1->ArrayNum) {
        uVar14 = uVar21;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar6 = *(undefined8 *)((param_1->AllocatorInstance).Data + (lVar29 + lVar18) * 8);
      uVar14 = 0;
      if ((int)uVar26 < param_1->ArrayNum) {
        uVar14 = uVar21;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar7 = *(undefined8 *)((param_1->AllocatorInstance).Data + (lVar28 + lVar18) * 8);
      local_f8 = (float)uVar6;
      fStack_f4 = (float)((ulonglong)uVar6 >> 0x20);
      local_f0 = (float)uVar7;
      fStack_ec = (float)((ulonglong)uVar7 >> 0x20);
      uVar26 = 0;
      if ((int)local_118 < (int)this->_padding_) {
        uVar26 = uVar16;
      }
      if ((uVar26 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_e8 = (float)uVar19;
      fStack_e4 = (float)((ulonglong)uVar19 >> 0x20);
      fVar31 = (float)((uint)(((local_f8 - local_f0) * *(float *)(this->_padding_ + local_100 * 4) +
                              local_f0) - local_e8) & uVar12);
      fVar32 = (float)((uint)(((fStack_f4 - fStack_ec) * *(float *)(this->_padding_ + local_100 * 4)
                              + fStack_ec) - fStack_e4) & uVar12);
      fVar30 = SQRT(fVar32 * fVar32 + fVar31 * fVar31);
      if (fVar30 <= fVar10) {
        uVar19 = 0x3f3504f33f3504f3;
      }
      else {
        fVar30 = fVar11 / fVar30;
        uVar19 = CONCAT44(fVar32 * fVar30,fVar31 * fVar30);
      }
      uVar26 = 0;
      if ((int)local_118 < (this->WarpWeftScaleBaseMultipliers).ArrayNum) {
        uVar26 = uVar16;
      }
      if ((uVar26 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_118 = local_118 + 1;
      local_110 = local_110 + 0xc;
      *(undefined8 *)((this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data + local_100 * 8) =
           uVar19;
      local_100 = local_100 + 1;
    } while ((int)local_118 < (int)this->_padding_);
  }
  this->bWarpWeftScaleEnabled = true;
  return;
}

// SetProperties @ 143c74cf0

void __thiscall
Chaos::Softs::FPBDAreaSpringConstraints::SetProperties
          (FPBDAreaSpringConstraints *this,FCollectionPropertyConstFacade *param_1,
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
  TArrayView<Chaos::TVector<int,3>_const_,int> local_100;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_f0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_e0;
  FPBDWeightMap local_d0;
  FPBDWeightMap local_98;
  
  iVar2 = (this->AreaSpringStiffnessIndex).Index;
  if (iVar2 != -1) {
    pTVar12 = &param_1->FlagsArray;
    EVar6 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar2,pTVar12);
    if (((EVar6 & Animatable) != None) &&
       (EVar6 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->AreaSpringStiffnessIndex).Index,pTVar12),
       (char)EVar6 < '\0')) {
      if (((this->AreaSpringStiffnessIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AreaSpringStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAxialSpringConstraints.h"
                             ,0xb0,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = (this->AreaSpringStiffnessIndex).Index;
      local_188._4_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar2,&param_1->HighValueArray);
      local_188._0_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar2,&param_1->LowValueArray);
      if (((this->AreaSpringStiffnessIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AreaSpringStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAxialSpringConstraints.h"
                             ,0xb0,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->AreaSpringStiffnessIndex).Index,pTVar12);
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
        if (((this->AreaSpringStiffnessIndex).Index == -1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("AreaSpringStiffnessIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAxialSpringConstraints.h"
                               ,0xb0,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                           (param_1,(this->AreaSpringStiffnessIndex).Index,
                            &param_1->StringValueArray);
        local_100.DataPtr = (TVector<int,3> *)this->_padding_;
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
        FPBDWeightMap::FPBDWeightMap<3>
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
    iVar2 = (this->AreaSpringWarpScaleIndex).Index;
    if (((iVar2 != -1) &&
        (EVar6 = FCollectionPropertyConstFacade::
                 GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                           (param_1,iVar2,pTVar12), (EVar6 & Animatable) != None)) &&
       (EVar6 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->AreaSpringWarpScaleIndex).Index,pTVar12),
       (char)EVar6 < '\0')) {
      if (((this->AreaSpringWarpScaleIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AreaSpringWarpScaleIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAxialSpringConstraints.h"
                             ,0xb1,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = (this->AreaSpringWarpScaleIndex).Index;
      fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                         (param_1,iVar2,&param_1->HighValueArray);
      local_res8._0_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar2,&param_1->LowValueArray);
      local_res8._4_4_ = fVar13;
      TVar5 = local_res8;
      if (((this->AreaSpringWarpScaleIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AreaSpringWarpScaleIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAxialSpringConstraints.h"
                             ,0xb1,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->AreaSpringWarpScaleIndex).Index,pTVar12);
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
        if (((this->AreaSpringWarpScaleIndex).Index == -1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("AreaSpringWarpScaleIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAxialSpringConstraints.h"
                               ,0xb1,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                           (param_1,(this->AreaSpringWarpScaleIndex).Index,
                            &param_1->StringValueArray);
        local_f0.DataPtr = (TVector<int,3> *)this->_padding_;
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
        pFVar11 = FPBDWeightMap::FPBDWeightMap<3>
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
    iVar2 = (this->AreaSpringWeftScaleIndex).Index;
    if (((iVar2 != -1) &&
        (EVar6 = FCollectionPropertyConstFacade::
                 GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                           (param_1,iVar2,pTVar12), (EVar6 & Animatable) != None)) &&
       (EVar6 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->AreaSpringWeftScaleIndex).Index,pTVar12),
       (char)EVar6 < '\0')) {
      if (((this->AreaSpringWeftScaleIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AreaSpringWeftScaleIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAxialSpringConstraints.h"
                             ,0xb2,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = (this->AreaSpringWeftScaleIndex).Index;
      fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                         (param_1,iVar2,&param_1->HighValueArray);
      local_res20._0_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar2,&param_1->LowValueArray);
      local_res20._4_4_ = fVar13;
      TVar5 = local_res20;
      if (((this->AreaSpringWeftScaleIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AreaSpringWeftScaleIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAxialSpringConstraints.h"
                             ,0xb2,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->AreaSpringWeftScaleIndex).Index,pTVar12);
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
        if (((this->AreaSpringWeftScaleIndex).Index == -1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("AreaSpringWeftScaleIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAxialSpringConstraints.h"
                               ,0xb2,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                           (param_1,(this->AreaSpringWeftScaleIndex).Index,
                            &param_1->StringValueArray);
        local_e0.DataPtr = (TVector<int,3> *)this->_padding_;
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
        pFVar11 = FPBDWeightMap::FPBDWeightMap<3>
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

// UpdateDists @ 143c7a1b0

void __thiscall
Chaos::Softs::FPBDAreaSpringConstraints::UpdateDists(FPBDAreaSpringConstraints *this)

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
    fVar13 = FPBDWeightMap::GetLow(&this->WarpScale);
    fVar14 = FPBDWeightMap::GetLow(&this->WeftScale);
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

