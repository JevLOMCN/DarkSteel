// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 4

// FXPBDAnisotropicSpringConstraints @ 14db97db0

FXPBDAnisotropicSpringConstraints * __thiscall
Chaos::Softs::FXPBDAnisotropicSpringConstraints::FXPBDAnisotropicSpringConstraints
          (FXPBDAnisotropicSpringConstraints *this,FSolverParticles *param_1,int param_2,int param_3
          ,FTriangleMesh *param_4,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_5,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_6,FCollectionPropertyConstFacade *param_7,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_8,float param_9)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
  *this_01;
  FCollectionPropertyConstFacade *this_02;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  FString *pFVar11;
  int iVar12;
  ForAnyElementType FVar13;
  wchar_t *pwVar14;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar15;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  TArrayView<float_const_,int> local_1c8;
  TArrayView<float_const_,int> local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  TVector<float,2> local_178;
  TVector<float,2> local_170;
  TVector<float,2> local_168;
  TVector<float,2> local_160;
  TVector<float,2> local_158;
  TArrayView<float_const_,int> local_150;
  TArrayView<float_const_,int> local_140;
  TArrayView<float_const_,int> local_130;
  TArrayView<float_const_,int> local_120;
  TArrayView<float_const_,int> local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  TVector<float,2> local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [3];
  
  this_02 = param_7;
  this_00 = &param_7->KeyNameIndices;
  local_188.Data.AllocatorInstance.Data._0_4_ = 0x3f800000;
  local_188.Data.AllocatorInstance.Data._4_4_ = 0x3f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringWeftScaleName);
  if ((piVar10 == (int *)0x0) || (iVar9 = *piVar10, iVar9 == -1)) {
    local_d0._4_4_ = local_188.Data.AllocatorInstance.Data._4_4_;
    local_d0._0_4_ = local_188.Data.AllocatorInstance.Data._0_4_;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,&this_02->HighValueArray);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,&this_02->LowValueArray);
    param_7 = (FCollectionPropertyConstFacade *)CONCAT44(fVar17,fVar18);
    local_d0 = (TVector<float,2>)param_7;
  }
  pTVar16 = &this_02->HighValueArray;
  pTVar15 = &this_02->LowValueArray;
  param_7 = (FCollectionPropertyConstFacade *)0x3f8000003f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringWarpScaleName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_7 = (FCollectionPropertyConstFacade *)CONCAT44(fVar17,fVar18);
  }
  local_178 = (TVector<float,2>)param_7;
  param_7 = (FCollectionPropertyConstFacade *)0x3f8000003f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringDampingName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_7 = (FCollectionPropertyConstFacade *)CONCAT44(fVar17,fVar18);
  }
  local_170 = (TVector<float,2>)param_7;
  param_7 = (FCollectionPropertyConstFacade *)0x42c8000042c80000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessBiasName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_7 = (FCollectionPropertyConstFacade *)CONCAT44(fVar17,fVar18);
  }
  local_168 = (TVector<float,2>)param_7;
  param_7 = (FCollectionPropertyConstFacade *)0x42c8000042c80000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessWeftName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_7 = (FCollectionPropertyConstFacade *)CONCAT44(fVar17,fVar18);
  }
  local_160 = (TVector<float,2>)param_7;
  param_7 = (FCollectionPropertyConstFacade *)0x42c8000042c80000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessWarpName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_7 = (FCollectionPropertyConstFacade *)CONCAT44(fVar17,fVar18);
  }
  local_158 = (TVector<float,2>)param_7;
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringWeftScaleName,local_78);
  pFVar11 = ::FString::FString((FString *)&local_1b8,pFVar11);
  param_7 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,&local_198,&XPBDAnisoSpringWeftScaleName,(<lambda_1> *)&param_7,pFVar11,
             (int *)0x0);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_198.Data.ArrayNum != 0) {
    FVar13.Data = local_198.Data.AllocatorInstance.Data;
  }
  iVar12 = 0;
  iVar9 = local_198.Data.ArrayNum + -1;
  if (local_198.Data.ArrayNum == 0) {
    iVar9 = iVar12;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar13.Data);
  this_01 = param_6;
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_6,uVar8,&local_198);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_150.DataPtr = (float *)0x0;
    local_150._8_8_ = (ulonglong)(uint)local_150._12_4_ << 0x20;
  }
  else {
    local_150.DataPtr = *(float **)(lVar1 + 0x10);
    local_150._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringWarpScaleName,&local_88);
  pFVar11 = ::FString::FString((FString *)&local_1b8,pFVar11);
  param_7 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,&local_1a8,&XPBDAnisoSpringWarpScaleName,(<lambda_1> *)&param_7,pFVar11,
             (int *)0x0);
  if (local_1a8.Data.ArrayNum == 0) {
    pwVar14 = L"";
    iVar9 = iVar12;
  }
  else {
    pwVar14 = (wchar_t *)local_1a8.Data.AllocatorInstance.Data;
    iVar9 = local_1a8.Data.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,&local_1a8);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_140.DataPtr = (float *)0x0;
    local_140._8_8_ = (ulonglong)(uint)local_140._12_4_ << 0x20;
  }
  else {
    local_140.DataPtr = *(float **)(lVar1 + 0x10);
    local_140._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringDampingName,&local_98);
  pFVar11 = ::FString::FString((FString *)&local_1b8,pFVar11);
  param_7 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,&local_e0,&XPBDAnisoSpringDampingName,(<lambda_1> *)&param_7,pFVar11,(int *)0x0
            );
  if (local_e0.Data.ArrayNum == 0) {
    pwVar14 = L"";
    iVar9 = iVar12;
  }
  else {
    pwVar14 = (wchar_t *)local_e0.Data.AllocatorInstance.Data;
    iVar9 = local_e0.Data.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,&local_e0);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_130.DataPtr = (float *)0x0;
    local_130._8_8_ = (ulonglong)(uint)local_130._12_4_ << 0x20;
  }
  else {
    local_130.DataPtr = *(float **)(lVar1 + 0x10);
    local_130._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringStiffnessBiasName,&local_a8);
  pFVar11 = ::FString::FString((FString *)&local_1b8,pFVar11);
  param_7 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,&local_f0,&XPBDAnisoSpringStiffnessBiasName,(<lambda_1> *)&param_7,pFVar11,
             (int *)0x0);
  if (local_f0.Data.ArrayNum == 0) {
    pwVar14 = L"";
    iVar9 = iVar12;
  }
  else {
    pwVar14 = (wchar_t *)local_f0.Data.AllocatorInstance.Data;
    iVar9 = local_f0.Data.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,&local_f0);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_120.DataPtr = (float *)0x0;
    local_120._8_8_ = (ulonglong)(uint)local_120._12_4_ << 0x20;
  }
  else {
    local_120.DataPtr = *(float **)(lVar1 + 0x10);
    local_120._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringStiffnessWeftName,&local_b8);
  pFVar11 = ::FString::FString((FString *)&local_1b8,pFVar11);
  param_7 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,&local_188,&XPBDAnisoSpringStiffnessWeftName,(<lambda_1> *)&param_7,pFVar11,
             (int *)0x0);
  if (local_188.Data.ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)
              CONCAT44(local_188.Data.AllocatorInstance.Data._4_4_,
                       local_188.Data.AllocatorInstance.Data._0_4_);
    iVar12 = local_188.Data.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,&local_188);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_110.DataPtr = (float *)0x0;
    local_110._8_8_ = (ulonglong)(uint)local_110._12_4_ << 0x20;
  }
  else {
    local_110.DataPtr = *(float **)(lVar1 + 0x10);
    local_110._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringStiffnessWarpName,&local_c8);
  pFVar11 = ::FString::FString(&local_100,pFVar11);
  param_7 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,(FString *)&local_1b8,&XPBDAnisoSpringStiffnessWarpName,(<lambda_1> *)&param_7,
             pFVar11,(int *)0x0);
  if (local_1b8.ArrayNum == 0) {
    pwVar14 = L"";
    iVar9 = 0;
  }
  else {
    iVar9 = local_1b8.ArrayNum + -1;
    pwVar14 = (wchar_t *)local_1b8.DataPtr;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,(FString *)&local_1b8);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_1c8.DataPtr = (float *)0x0;
    local_1c8._8_8_ = (ulonglong)(uint)local_1c8._12_4_ << 0x20;
  }
  else {
    local_1c8.DataPtr = *(float **)(lVar1 + 0x10);
    local_1c8._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,SavePreResizedSimPosition3DName);
  if ((piVar10 == (int *)0x0) || (*piVar10 == -1)) {
    bVar6 = false;
  }
  else {
    bVar6 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (this_02,*piVar10,pTVar15);
  }
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringUse3dRestLengthsName);
  if ((piVar10 == (int *)0x0) || (*piVar10 == -1)) {
    bVar7 = true;
  }
  else {
    bVar7 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (this_02,*piVar10,pTVar15);
  }
  fVar17 = param_9;
  FXPBDAnisotropicEdgeSpringConstraints::FXPBDAnisotropicEdgeSpringConstraints
            (&this->EdgeConstraints,param_1,param_2,param_3,param_4,param_5,bVar7,bVar6,param_8,
             param_9,&local_1c8,&local_110,&local_120,&local_130,&local_140,&local_150,&local_158,
             &local_160,&local_168,&local_170,&local_178,&local_d0);
  if (local_1b8.DataPtr != (float *)0x0) {
    FMemory::Free(local_1b8.DataPtr);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((void *)CONCAT44(local_188.Data.AllocatorInstance.Data._4_4_,
                       local_188.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_188.Data.AllocatorInstance.Data._4_4_,
                                   local_188.Data.AllocatorInstance.Data._0_4_));
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
  }
  param_7 = (FCollectionPropertyConstFacade *)0x3f8000003f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringWeftScaleName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_7 = (FCollectionPropertyConstFacade *)CONCAT44(fVar18,fVar19);
  }
  param_6 = (TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
             *)param_7;
  param_7 = (FCollectionPropertyConstFacade *)0x3f8000003f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringWarpScaleName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_7 = (FCollectionPropertyConstFacade *)CONCAT44(fVar18,fVar19);
  }
  local_158 = (TVector<float,2>)param_7;
  param_7 = (FCollectionPropertyConstFacade *)0x3f8000003f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringDampingName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_7 = (FCollectionPropertyConstFacade *)CONCAT44(fVar18,fVar19);
  }
  local_160 = (TVector<float,2>)param_7;
  param_7 = (FCollectionPropertyConstFacade *)0x42c8000042c80000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessBiasName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_7 = (FCollectionPropertyConstFacade *)CONCAT44(fVar18,fVar19);
  }
  local_168 = (TVector<float,2>)param_7;
  param_7 = (FCollectionPropertyConstFacade *)0x42c8000042c80000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessWeftName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_7 = (FCollectionPropertyConstFacade *)CONCAT44(fVar18,fVar19);
  }
  local_170 = (TVector<float,2>)param_7;
  param_7 = (FCollectionPropertyConstFacade *)0x42c8000042c80000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessWarpName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_7 = (FCollectionPropertyConstFacade *)CONCAT44(fVar18,fVar19);
  }
  local_178 = (TVector<float,2>)param_7;
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringWeftScaleName,&local_c8);
  pFVar11 = ::FString::FString(&local_100,pFVar11);
  param_7 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,&local_1a8,&XPBDAnisoSpringWeftScaleName,(<lambda_1> *)&param_7,pFVar11,
             (int *)0x0);
  iVar9 = 0;
  if (local_1a8.Data.ArrayNum == 0) {
    pwVar14 = L"";
    iVar12 = iVar9;
  }
  else {
    pwVar14 = (wchar_t *)local_1a8.Data.AllocatorInstance.Data;
    iVar12 = local_1a8.Data.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar14);
  iVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)this_01,uVar8,&local_1a8);
  if ((iVar12 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar12 * 0x28, lVar1 == 0)) {
    local_110.DataPtr = (float *)0x0;
    local_110._8_8_ = local_110._8_8_ & 0xffffffff00000000;
  }
  else {
    local_110.DataPtr = *(float **)(lVar1 + 0x10);
    local_110._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringWarpScaleName,&local_b8);
  pFVar11 = ::FString::FString(&local_100,pFVar11);
  param_7 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,&local_198,&XPBDAnisoSpringWarpScaleName,(<lambda_1> *)&param_7,pFVar11,
             (int *)0x0);
  if (local_198.Data.ArrayNum == 0) {
    pwVar14 = L"";
    iVar12 = iVar9;
  }
  else {
    pwVar14 = (wchar_t *)local_198.Data.AllocatorInstance.Data;
    iVar12 = local_198.Data.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar14);
  iVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)this_01,uVar8,&local_198);
  if ((iVar12 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar12 * 0x28, lVar1 == 0)) {
    local_120.DataPtr = (float *)0x0;
    local_120._8_8_ = local_120._8_8_ & 0xffffffff00000000;
  }
  else {
    local_120.DataPtr = *(float **)(lVar1 + 0x10);
    local_120._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringDampingName,&local_a8);
  pFVar11 = ::FString::FString(&local_100,pFVar11);
  param_7 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,(FString *)&local_1c8,&XPBDAnisoSpringDampingName,(<lambda_1> *)&param_7,
             pFVar11,(int *)0x0);
  pfVar2 = local_1c8.DataPtr;
  if (local_1c8.ArrayNum == 0) {
    pwVar14 = L"";
    iVar12 = iVar9;
  }
  else {
    pwVar14 = (wchar_t *)local_1c8.DataPtr;
    iVar12 = local_1c8.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar14);
  iVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)this_01,uVar8,(FString *)&local_1c8);
  if ((iVar12 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar12 * 0x28, lVar1 == 0)) {
    local_130.DataPtr = (float *)0x0;
    local_130._8_8_ = local_130._8_8_ & 0xffffffff00000000;
  }
  else {
    local_130.DataPtr = *(float **)(lVar1 + 0x10);
    local_130._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringStiffnessBiasName,&local_98);
  pFVar11 = ::FString::FString(&local_100,pFVar11);
  param_7 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,(FString *)&local_1c8,&XPBDAnisoSpringStiffnessBiasName,(<lambda_1> *)&param_7,
             pFVar11,(int *)0x0);
  pfVar3 = local_1c8.DataPtr;
  if (local_1c8.ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    iVar9 = local_1c8.ArrayNum + -1;
    pwVar14 = (wchar_t *)local_1c8.DataPtr;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,(FString *)&local_1c8);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_140.DataPtr = (float *)0x0;
    local_140._8_8_ = local_140._8_8_ & 0xffffffff00000000;
  }
  else {
    local_140.DataPtr = *(float **)(lVar1 + 0x10);
    local_140._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringStiffnessWeftName,&local_88);
  pFVar11 = ::FString::FString(&local_100,pFVar11);
  param_7 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,(FString *)&local_1c8,&XPBDAnisoSpringStiffnessWeftName,(<lambda_1> *)&param_7,
             pFVar11,(int *)0x0);
  pfVar4 = local_1c8.DataPtr;
  if (local_1c8.ArrayNum == 0) {
    pwVar14 = L"";
    iVar9 = 0;
  }
  else {
    iVar9 = local_1c8.ArrayNum + -1;
    pwVar14 = (wchar_t *)local_1c8.DataPtr;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,(FString *)&local_1c8);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_150.DataPtr = (float *)0x0;
    local_150._8_8_ = local_150._8_8_ & 0xffffffff00000000;
  }
  else {
    local_150.DataPtr = *(float **)(lVar1 + 0x10);
    local_150._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringStiffnessWarpName,local_78);
  pFVar11 = ::FString::FString(&local_100,pFVar11);
  param_7 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,(FString *)&local_1c8,&XPBDAnisoSpringStiffnessWarpName,(<lambda_1> *)&param_7,
             pFVar11,(int *)0x0);
  pfVar5 = local_1c8.DataPtr;
  if (local_1c8.ArrayNum == 0) {
    iVar9 = 0;
    pwVar14 = L"";
  }
  else {
    iVar9 = local_1c8.ArrayNum + -1;
    pwVar14 = (wchar_t *)local_1c8.DataPtr;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,(FString *)&local_1c8);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_1b8.DataPtr = (float *)0x0;
    local_1b8._8_8_ = (ulonglong)(uint)local_1b8._12_4_ << 0x20;
  }
  else {
    local_1b8.DataPtr = *(float **)(lVar1 + 0x10);
    local_1b8._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,SavePreResizedSimPosition3DName);
  if ((piVar10 == (int *)0x0) || (*piVar10 == -1)) {
    bVar6 = false;
  }
  else {
    bVar6 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (this_02,*piVar10,&this_02->LowValueArray);
  }
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringUse3dRestLengthsName);
  if ((piVar10 == (int *)0x0) || (*piVar10 == -1)) {
    bVar7 = true;
  }
  else {
    bVar7 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (this_02,*piVar10,&this_02->LowValueArray);
  }
  FXPBDAnisotropicAxialSpringConstraints::FXPBDAnisotropicAxialSpringConstraints
            (&this->AxialConstraints,param_1,param_2,param_3,param_4,param_5,bVar7,bVar6,param_8,
             fVar17,&local_1b8,&local_150,&local_140,&local_130,&local_120,&local_110,&local_178,
             &local_170,&local_168,&local_160,&local_158,(TVector<float,2> *)&param_6);
  if (pfVar5 != (float *)0x0) {
    FMemory::Free(pfVar5);
  }
  if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
  }
  if (pfVar4 != (float *)0x0) {
    FMemory::Free(pfVar4);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (pfVar3 != (float *)0x0) {
    FMemory::Free(pfVar3);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (pfVar2 != (float *)0x0) {
    FMemory::Free(pfVar2);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringUse3dRestLengthsName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->XPBDAnisoSpringUse3dRestLengthsIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessWarpName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->XPBDAnisoSpringStiffnessWarpIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessWeftName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->XPBDAnisoSpringStiffnessWeftIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessBiasName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->XPBDAnisoSpringStiffnessBiasIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringDampingName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->XPBDAnisoSpringDampingIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringWarpScaleName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->XPBDAnisoSpringWarpScaleIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringWeftScaleName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->XPBDAnisoSpringWeftScaleIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,SavePreResizedSimPosition3DName);
  if (piVar10 != (int *)0x0) {
    (this->SavePreResizedSimPosition3DIndex).Index = *piVar10;
    return this;
  }
  (this->SavePreResizedSimPosition3DIndex).Index = -1;
  return this;
}

// FXPBDAnisotropicSpringConstraints @ 14db98fe0

FXPBDAnisotropicSpringConstraints * __thiscall
Chaos::Softs::FXPBDAnisotropicSpringConstraints::FXPBDAnisotropicSpringConstraints
          (FXPBDAnisotropicSpringConstraints *this,FSolverParticlesRange *param_1,
          FTriangleMesh *param_2,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_3,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_4,FCollectionPropertyConstFacade *param_5,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_6,float param_7)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
  *this_01;
  FCollectionPropertyConstFacade *this_02;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  FString *pFVar11;
  int iVar12;
  ForAnyElementType FVar13;
  wchar_t *pwVar14;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar15;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  TArrayView<float_const_,int> local_1c8;
  TArrayView<float_const_,int> local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  TVector<float,2> local_178;
  TVector<float,2> local_170;
  TVector<float,2> local_168;
  TVector<float,2> local_160;
  TVector<float,2> local_158;
  TArrayView<float_const_,int> local_150;
  TArrayView<float_const_,int> local_140;
  TArrayView<float_const_,int> local_130;
  TArrayView<float_const_,int> local_120;
  TArrayView<float_const_,int> local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  TVector<float,2> local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [3];
  
  this_02 = param_5;
  this_00 = &param_5->KeyNameIndices;
  local_188.Data.AllocatorInstance.Data._0_4_ = 0x3f800000;
  local_188.Data.AllocatorInstance.Data._4_4_ = 0x3f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringWeftScaleName);
  if ((piVar10 == (int *)0x0) || (iVar9 = *piVar10, iVar9 == -1)) {
    local_d0._4_4_ = local_188.Data.AllocatorInstance.Data._4_4_;
    local_d0._0_4_ = local_188.Data.AllocatorInstance.Data._0_4_;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,&this_02->HighValueArray);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,&this_02->LowValueArray);
    param_5 = (FCollectionPropertyConstFacade *)CONCAT44(fVar17,fVar18);
    local_d0 = (TVector<float,2>)param_5;
  }
  pTVar16 = &this_02->HighValueArray;
  pTVar15 = &this_02->LowValueArray;
  param_5 = (FCollectionPropertyConstFacade *)0x3f8000003f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringWarpScaleName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_5 = (FCollectionPropertyConstFacade *)CONCAT44(fVar17,fVar18);
  }
  local_178 = (TVector<float,2>)param_5;
  param_5 = (FCollectionPropertyConstFacade *)0x3f8000003f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringDampingName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_5 = (FCollectionPropertyConstFacade *)CONCAT44(fVar17,fVar18);
  }
  local_170 = (TVector<float,2>)param_5;
  param_5 = (FCollectionPropertyConstFacade *)0x42c8000042c80000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessBiasName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_5 = (FCollectionPropertyConstFacade *)CONCAT44(fVar17,fVar18);
  }
  local_168 = (TVector<float,2>)param_5;
  param_5 = (FCollectionPropertyConstFacade *)0x42c8000042c80000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessWeftName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_5 = (FCollectionPropertyConstFacade *)CONCAT44(fVar17,fVar18);
  }
  local_160 = (TVector<float,2>)param_5;
  param_5 = (FCollectionPropertyConstFacade *)0x42c8000042c80000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessWarpName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_5 = (FCollectionPropertyConstFacade *)CONCAT44(fVar17,fVar18);
  }
  local_158 = (TVector<float,2>)param_5;
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringWeftScaleName,local_78);
  pFVar11 = ::FString::FString((FString *)&local_1b8,pFVar11);
  param_5 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,&local_198,&XPBDAnisoSpringWeftScaleName,(<lambda_1> *)&param_5,pFVar11,
             (int *)0x0);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_198.Data.ArrayNum != 0) {
    FVar13.Data = local_198.Data.AllocatorInstance.Data;
  }
  iVar12 = 0;
  iVar9 = local_198.Data.ArrayNum + -1;
  if (local_198.Data.ArrayNum == 0) {
    iVar9 = iVar12;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar13.Data);
  this_01 = param_4;
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_4,uVar8,&local_198);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_150.DataPtr = (float *)0x0;
    local_150._8_8_ = (ulonglong)(uint)local_150._12_4_ << 0x20;
  }
  else {
    local_150.DataPtr = *(float **)(lVar1 + 0x10);
    local_150._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringWarpScaleName,&local_88);
  pFVar11 = ::FString::FString((FString *)&local_1b8,pFVar11);
  param_5 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,&local_1a8,&XPBDAnisoSpringWarpScaleName,(<lambda_1> *)&param_5,pFVar11,
             (int *)0x0);
  if (local_1a8.Data.ArrayNum == 0) {
    pwVar14 = L"";
    iVar9 = iVar12;
  }
  else {
    pwVar14 = (wchar_t *)local_1a8.Data.AllocatorInstance.Data;
    iVar9 = local_1a8.Data.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,&local_1a8);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_140.DataPtr = (float *)0x0;
    local_140._8_8_ = (ulonglong)(uint)local_140._12_4_ << 0x20;
  }
  else {
    local_140.DataPtr = *(float **)(lVar1 + 0x10);
    local_140._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringDampingName,&local_98);
  pFVar11 = ::FString::FString((FString *)&local_1b8,pFVar11);
  param_5 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,&local_e0,&XPBDAnisoSpringDampingName,(<lambda_1> *)&param_5,pFVar11,(int *)0x0
            );
  if (local_e0.Data.ArrayNum == 0) {
    pwVar14 = L"";
    iVar9 = iVar12;
  }
  else {
    pwVar14 = (wchar_t *)local_e0.Data.AllocatorInstance.Data;
    iVar9 = local_e0.Data.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,&local_e0);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_130.DataPtr = (float *)0x0;
    local_130._8_8_ = (ulonglong)(uint)local_130._12_4_ << 0x20;
  }
  else {
    local_130.DataPtr = *(float **)(lVar1 + 0x10);
    local_130._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringStiffnessBiasName,&local_a8);
  pFVar11 = ::FString::FString((FString *)&local_1b8,pFVar11);
  param_5 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,&local_f0,&XPBDAnisoSpringStiffnessBiasName,(<lambda_1> *)&param_5,pFVar11,
             (int *)0x0);
  if (local_f0.Data.ArrayNum == 0) {
    pwVar14 = L"";
    iVar9 = iVar12;
  }
  else {
    pwVar14 = (wchar_t *)local_f0.Data.AllocatorInstance.Data;
    iVar9 = local_f0.Data.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,&local_f0);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_120.DataPtr = (float *)0x0;
    local_120._8_8_ = (ulonglong)(uint)local_120._12_4_ << 0x20;
  }
  else {
    local_120.DataPtr = *(float **)(lVar1 + 0x10);
    local_120._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringStiffnessWeftName,&local_b8);
  pFVar11 = ::FString::FString((FString *)&local_1b8,pFVar11);
  param_5 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,&local_188,&XPBDAnisoSpringStiffnessWeftName,(<lambda_1> *)&param_5,pFVar11,
             (int *)0x0);
  if (local_188.Data.ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)
              CONCAT44(local_188.Data.AllocatorInstance.Data._4_4_,
                       local_188.Data.AllocatorInstance.Data._0_4_);
    iVar12 = local_188.Data.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,&local_188);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_110.DataPtr = (float *)0x0;
    local_110._8_8_ = (ulonglong)(uint)local_110._12_4_ << 0x20;
  }
  else {
    local_110.DataPtr = *(float **)(lVar1 + 0x10);
    local_110._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringStiffnessWarpName,&local_c8);
  pFVar11 = ::FString::FString(&local_100,pFVar11);
  param_5 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,(FString *)&local_1b8,&XPBDAnisoSpringStiffnessWarpName,(<lambda_1> *)&param_5,
             pFVar11,(int *)0x0);
  if (local_1b8.ArrayNum == 0) {
    pwVar14 = L"";
    iVar9 = 0;
  }
  else {
    iVar9 = local_1b8.ArrayNum + -1;
    pwVar14 = (wchar_t *)local_1b8.DataPtr;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,(FString *)&local_1b8);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_1c8.DataPtr = (float *)0x0;
    local_1c8._8_8_ = (ulonglong)(uint)local_1c8._12_4_ << 0x20;
  }
  else {
    local_1c8.DataPtr = *(float **)(lVar1 + 0x10);
    local_1c8._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,SavePreResizedSimPosition3DName);
  if ((piVar10 == (int *)0x0) || (*piVar10 == -1)) {
    bVar6 = false;
  }
  else {
    bVar6 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (this_02,*piVar10,pTVar15);
  }
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringUse3dRestLengthsName);
  if ((piVar10 == (int *)0x0) || (*piVar10 == -1)) {
    bVar7 = true;
  }
  else {
    bVar7 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (this_02,*piVar10,pTVar15);
  }
  fVar17 = param_7;
  FXPBDAnisotropicEdgeSpringConstraints::FXPBDAnisotropicEdgeSpringConstraints
            (&this->EdgeConstraints,param_1,param_2,param_3,bVar7,bVar6,param_6,param_7,&local_1c8,
             &local_110,&local_120,&local_130,&local_140,&local_150,&local_158,&local_160,&local_168
             ,&local_170,&local_178,&local_d0);
  if (local_1b8.DataPtr != (float *)0x0) {
    FMemory::Free(local_1b8.DataPtr);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((void *)CONCAT44(local_188.Data.AllocatorInstance.Data._4_4_,
                       local_188.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_188.Data.AllocatorInstance.Data._4_4_,
                                   local_188.Data.AllocatorInstance.Data._0_4_));
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
  }
  param_5 = (FCollectionPropertyConstFacade *)0x3f8000003f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringWeftScaleName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_5 = (FCollectionPropertyConstFacade *)CONCAT44(fVar18,fVar19);
  }
  param_4 = (TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
             *)param_5;
  param_5 = (FCollectionPropertyConstFacade *)0x3f8000003f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringWarpScaleName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_5 = (FCollectionPropertyConstFacade *)CONCAT44(fVar18,fVar19);
  }
  local_158 = (TVector<float,2>)param_5;
  param_5 = (FCollectionPropertyConstFacade *)0x3f8000003f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringDampingName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_5 = (FCollectionPropertyConstFacade *)CONCAT44(fVar18,fVar19);
  }
  local_160 = (TVector<float,2>)param_5;
  param_5 = (FCollectionPropertyConstFacade *)0x42c8000042c80000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessBiasName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_5 = (FCollectionPropertyConstFacade *)CONCAT44(fVar18,fVar19);
  }
  local_168 = (TVector<float,2>)param_5;
  param_5 = (FCollectionPropertyConstFacade *)0x42c8000042c80000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessWeftName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_5 = (FCollectionPropertyConstFacade *)CONCAT44(fVar18,fVar19);
  }
  local_170 = (TVector<float,2>)param_5;
  param_5 = (FCollectionPropertyConstFacade *)0x42c8000042c80000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessWarpName);
  if ((piVar10 != (int *)0x0) && (iVar9 = *piVar10, iVar9 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar16);
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar9,pTVar15);
    param_5 = (FCollectionPropertyConstFacade *)CONCAT44(fVar18,fVar19);
  }
  local_178 = (TVector<float,2>)param_5;
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringWeftScaleName,&local_c8);
  pFVar11 = ::FString::FString(&local_100,pFVar11);
  param_5 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,&local_1a8,&XPBDAnisoSpringWeftScaleName,(<lambda_1> *)&param_5,pFVar11,
             (int *)0x0);
  iVar9 = 0;
  if (local_1a8.Data.ArrayNum == 0) {
    pwVar14 = L"";
    iVar12 = iVar9;
  }
  else {
    pwVar14 = (wchar_t *)local_1a8.Data.AllocatorInstance.Data;
    iVar12 = local_1a8.Data.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar14);
  iVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)this_01,uVar8,&local_1a8);
  if ((iVar12 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar12 * 0x28, lVar1 == 0)) {
    local_110.DataPtr = (float *)0x0;
    local_110._8_8_ = local_110._8_8_ & 0xffffffff00000000;
  }
  else {
    local_110.DataPtr = *(float **)(lVar1 + 0x10);
    local_110._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringWarpScaleName,&local_b8);
  pFVar11 = ::FString::FString(&local_100,pFVar11);
  param_5 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,&local_198,&XPBDAnisoSpringWarpScaleName,(<lambda_1> *)&param_5,pFVar11,
             (int *)0x0);
  if (local_198.Data.ArrayNum == 0) {
    pwVar14 = L"";
    iVar12 = iVar9;
  }
  else {
    pwVar14 = (wchar_t *)local_198.Data.AllocatorInstance.Data;
    iVar12 = local_198.Data.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar14);
  iVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)this_01,uVar8,&local_198);
  if ((iVar12 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar12 * 0x28, lVar1 == 0)) {
    local_120.DataPtr = (float *)0x0;
    local_120._8_8_ = local_120._8_8_ & 0xffffffff00000000;
  }
  else {
    local_120.DataPtr = *(float **)(lVar1 + 0x10);
    local_120._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringDampingName,&local_a8);
  pFVar11 = ::FString::FString(&local_100,pFVar11);
  param_5 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,(FString *)&local_1c8,&XPBDAnisoSpringDampingName,(<lambda_1> *)&param_5,
             pFVar11,(int *)0x0);
  pfVar2 = local_1c8.DataPtr;
  if (local_1c8.ArrayNum == 0) {
    pwVar14 = L"";
    iVar12 = iVar9;
  }
  else {
    pwVar14 = (wchar_t *)local_1c8.DataPtr;
    iVar12 = local_1c8.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar14);
  iVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)this_01,uVar8,(FString *)&local_1c8);
  if ((iVar12 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar12 * 0x28, lVar1 == 0)) {
    local_130.DataPtr = (float *)0x0;
    local_130._8_8_ = local_130._8_8_ & 0xffffffff00000000;
  }
  else {
    local_130.DataPtr = *(float **)(lVar1 + 0x10);
    local_130._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringStiffnessBiasName,&local_98);
  pFVar11 = ::FString::FString(&local_100,pFVar11);
  param_5 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,(FString *)&local_1c8,&XPBDAnisoSpringStiffnessBiasName,(<lambda_1> *)&param_5,
             pFVar11,(int *)0x0);
  pfVar3 = local_1c8.DataPtr;
  if (local_1c8.ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    iVar9 = local_1c8.ArrayNum + -1;
    pwVar14 = (wchar_t *)local_1c8.DataPtr;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,(FString *)&local_1c8);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_140.DataPtr = (float *)0x0;
    local_140._8_8_ = local_140._8_8_ & 0xffffffff00000000;
  }
  else {
    local_140.DataPtr = *(float **)(lVar1 + 0x10);
    local_140._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringStiffnessWeftName,&local_88);
  pFVar11 = ::FString::FString(&local_100,pFVar11);
  param_5 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,(FString *)&local_1c8,&XPBDAnisoSpringStiffnessWeftName,(<lambda_1> *)&param_5,
             pFVar11,(int *)0x0);
  pfVar4 = local_1c8.DataPtr;
  if (local_1c8.ArrayNum == 0) {
    pwVar14 = L"";
    iVar9 = 0;
  }
  else {
    iVar9 = local_1c8.ArrayNum + -1;
    pwVar14 = (wchar_t *)local_1c8.DataPtr;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,(FString *)&local_1c8);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_150.DataPtr = (float *)0x0;
    local_150._8_8_ = local_150._8_8_ & 0xffffffff00000000;
  }
  else {
    local_150.DataPtr = *(float **)(lVar1 + 0x10);
    local_150._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&XPBDAnisoSpringStiffnessWarpName,local_78);
  pFVar11 = ::FString::FString(&local_100,pFVar11);
  param_5 = this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,(FString *)&local_1c8,&XPBDAnisoSpringStiffnessWarpName,(<lambda_1> *)&param_5,
             pFVar11,(int *)0x0);
  pfVar5 = local_1c8.DataPtr;
  if (local_1c8.ArrayNum == 0) {
    iVar9 = 0;
    pwVar14 = L"";
  }
  else {
    iVar9 = local_1c8.ArrayNum + -1;
    pwVar14 = (wchar_t *)local_1c8.DataPtr;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
  iVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,(FString *)&local_1c8);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar9 * 0x28, lVar1 == 0)) {
    local_1b8.DataPtr = (float *)0x0;
    local_1b8._8_8_ = (ulonglong)(uint)local_1b8._12_4_ << 0x20;
  }
  else {
    local_1b8.DataPtr = *(float **)(lVar1 + 0x10);
    local_1b8._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,SavePreResizedSimPosition3DName);
  if ((piVar10 == (int *)0x0) || (*piVar10 == -1)) {
    bVar6 = false;
  }
  else {
    bVar6 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (this_02,*piVar10,&this_02->LowValueArray);
  }
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringUse3dRestLengthsName);
  if ((piVar10 == (int *)0x0) || (*piVar10 == -1)) {
    bVar7 = true;
  }
  else {
    bVar7 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (this_02,*piVar10,&this_02->LowValueArray);
  }
  FXPBDAnisotropicAxialSpringConstraints::FXPBDAnisotropicAxialSpringConstraints
            (&this->AxialConstraints,param_1,param_2,param_3,bVar7,bVar6,param_6,fVar17,&local_1b8,
             &local_150,&local_140,&local_130,&local_120,&local_110,&local_178,&local_170,&local_168
             ,&local_160,&local_158,(TVector<float,2> *)&param_4);
  if (pfVar5 != (float *)0x0) {
    FMemory::Free(pfVar5);
  }
  if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
  }
  if (pfVar4 != (float *)0x0) {
    FMemory::Free(pfVar4);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (pfVar3 != (float *)0x0) {
    FMemory::Free(pfVar3);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (pfVar2 != (float *)0x0) {
    FMemory::Free(pfVar2);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringUse3dRestLengthsName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->XPBDAnisoSpringUse3dRestLengthsIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessWarpName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->XPBDAnisoSpringStiffnessWarpIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessWeftName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->XPBDAnisoSpringStiffnessWeftIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringStiffnessBiasName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->XPBDAnisoSpringStiffnessBiasIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringDampingName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->XPBDAnisoSpringDampingIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringWarpScaleName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->XPBDAnisoSpringWarpScaleIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDAnisoSpringWeftScaleName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->XPBDAnisoSpringWeftScaleIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,SavePreResizedSimPosition3DName);
  if (piVar10 != (int *)0x0) {
    (this->SavePreResizedSimPosition3DIndex).Index = *piVar10;
    return this;
  }
  (this->SavePreResizedSimPosition3DIndex).Index = -1;
  return this;
}

// ApplyProperties @ 14dbbed00

void __thiscall
Chaos::Softs::FXPBDAnisotropicSpringConstraints::ApplyProperties
          (FXPBDAnisotropicSpringConstraints *this,float param_1,int param_2)

{
  bool local_res8 [24];
  <lambda_1> local_res20 [8];
  <lambda_1> local_18 [16];
  
  local_res8[0] = false;
  FPBDWeightMap::ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            (&(this->EdgeConstraints).WarpScale,local_res20,local_res8);
  local_res20[0] = (<lambda_1>)0x0;
  FPBDWeightMap::ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            (&(this->EdgeConstraints).WeftScale,local_18,(bool *)local_res20);
  if ((local_res8[0] != false) || (local_res20[0] != (<lambda_1>)0x0)) {
    FXPBDAnisotropicEdgeSpringConstraints::UpdateDists(&this->EdgeConstraints);
  }
  local_res8[0] = false;
  FPBDWeightMap::ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            (&(this->AxialConstraints).WarpScale,local_res20,local_res8);
  local_res20[0] = (<lambda_1>)0x0;
  FPBDWeightMap::ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            (&(this->AxialConstraints).WeftScale,local_18,(bool *)local_res20);
  if ((local_res8[0] == false) && (local_res20[0] == (<lambda_1>)0x0)) {
    return;
  }
  FXPBDAnisotropicAxialSpringConstraints::UpdateDists(&this->AxialConstraints);
  return;
}

// Init @ 14dc02300

void __thiscall
Chaos::Softs::FXPBDAnisotropicSpringConstraints::Init(FXPBDAnisotropicSpringConstraints *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = &(this->EdgeConstraints).Lambdas.ArrayMax;
  iVar3 = *piVar1;
  piVar2 = &(this->EdgeConstraints).Lambdas.ArrayNum;
  *piVar2 = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->EdgeConstraints).Lambdas.AllocatorInstance,0,piVar1);
  }
  iVar3 = (int)(this->EdgeConstraints)._padding_;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,&(this->EdgeConstraints).Lambdas.AllocatorInstance,piVar2,piVar1);
  memset((this->EdgeConstraints).Lambdas.AllocatorInstance.Data + (longlong)iVar4 * 4,0,
         (longlong)iVar3 << 2);
  piVar1 = &(this->EdgeConstraints).LambdasDamping.ArrayMax;
  iVar3 = *piVar1;
  piVar2 = &(this->EdgeConstraints).LambdasDamping.ArrayNum;
  *piVar2 = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->EdgeConstraints).LambdasDamping.AllocatorInstance,0,piVar1);
  }
  iVar3 = (int)(this->EdgeConstraints)._padding_;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,&(this->EdgeConstraints).LambdasDamping.AllocatorInstance,piVar2,
                     piVar1);
  memset((this->EdgeConstraints).LambdasDamping.AllocatorInstance.Data + (longlong)iVar4 * 4,0,
         (longlong)iVar3 << 2);
  piVar1 = &(this->AxialConstraints).Lambdas.ArrayMax;
  iVar3 = *piVar1;
  piVar2 = &(this->AxialConstraints).Lambdas.ArrayNum;
  *piVar2 = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AxialConstraints).Lambdas.AllocatorInstance,0,piVar1);
  }
  iVar3 = (int)(this->AxialConstraints)._padding_;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,&(this->AxialConstraints).Lambdas.AllocatorInstance,piVar2,piVar1);
  memset((this->AxialConstraints).Lambdas.AllocatorInstance.Data + (longlong)iVar4 * 4,0,
         (longlong)iVar3 << 2);
  piVar1 = &(this->AxialConstraints).LambdasDamping.ArrayMax;
  iVar3 = *piVar1;
  piVar2 = &(this->AxialConstraints).LambdasDamping.ArrayNum;
  *piVar2 = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AxialConstraints).LambdasDamping.AllocatorInstance,0,piVar1);
  }
  iVar3 = (int)(this->AxialConstraints)._padding_;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,&(this->AxialConstraints).LambdasDamping.AllocatorInstance,piVar2,
                     piVar1);
  memset((this->AxialConstraints).LambdasDamping.AllocatorInstance.Data + (longlong)iVar4 * 4,0,
         (longlong)iVar3 << 2);
  return;
}

