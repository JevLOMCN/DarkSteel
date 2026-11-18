// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 6

// FXPBDBendingConstraints @ 14db9a700

FXPBDBendingConstraints * __thiscall
Chaos::Softs::FXPBDBendingConstraints::FXPBDBendingConstraints
          (FXPBDBendingConstraints *this,FSolverParticles *param_1,int param_2,int param_3,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_4,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_5,FCollectionPropertyConstFacade *param_6)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  FCollectionPropertyConstFacade *pFVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  TVector<float,2> TVar10;
  TArrayView<float_const_,int> *pTVar11;
  FString *pFVar12;
  FXPBDBendingConstraints *pFVar13;
  wchar_t *pwVar14;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar15;
  wchar_t *pwVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float fStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  float local_290;
  float fStack_28c;
  TVector<float,2> local_288;
  float local_280;
  float fStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  float local_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float local_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float local_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float local_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  FString local_230;
  FString local_220;
  TVector<float,2> local_210;
  TVector<float,2> local_208;
  FCollectionPropertyConstFacade *local_200;
  TVector<float,2> local_1f8;
  FCollectionPropertyConstFacade *local_1f0;
  TVector<float,2> local_1e8;
  FCollectionPropertyConstFacade *local_1e0;
  TVector<float,2> local_1d8;
  FCollectionPropertyConstFacade *local_1d0;
  TVector<float,2> local_1c8;
  FString local_1c0;
  TArrayView<float_const_,int> local_1b0;
  TArrayView<float_const_,int> local_1a0;
  TArrayView<float_const_,int> local_190;
  FString local_180;
  TArrayView<float_const_,int> local_170;
  TArrayView<float_const_,int> local_160;
  TArrayView<float_const_,int> local_150;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_140;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_130;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_120;
  undefined1 local_110 [104];
  FString local_a8;
  FString local_98;
  FString local_88 [4];
  
  pFVar4 = param_6;
  this_00 = &param_6->KeyNameIndices;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDRestAngleTypeName);
  if ((piVar9 == (int *)0x0) || (*piVar9 == -1)) {
    param_6._0_1_ = Use3DRestAngles;
  }
  else {
    iVar7 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_6,*piVar9,&param_6->LowValueArray);
    param_6._0_1_ = (ERestAngleConstructionType)iVar7;
  }
  pTVar15 = &pFVar4->LowValueArray;
  TVar10 = GetRestAngleValueFromCollection(this,(FCollectionPropertyConstFacade *)local_110);
  fVar19 = __real_4b189680;
  local_298 = 0x4b189680;
  uStack_294 = 0x4b189680;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBucklingStiffnessName);
  if ((piVar9 == (int *)0x0) || (iVar7 = *piVar9, iVar7 == -1)) {
    local_1c8._4_4_ = uStack_294;
    local_1c8._0_4_ = local_298;
  }
  else {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar4,iVar7,&pFVar4->HighValueArray);
    local_2a0 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (pFVar4,iVar7,pTVar15);
    local_1c8._4_4_ = fVar18;
    local_1c8._0_4_ = local_2a0;
    fStack_29c = fVar18;
  }
  local_288 = (TVector<float,2>)0x0;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBucklingRatioName);
  local_210 = local_288;
  if ((piVar9 != (int *)0x0) && (iVar7 = *piVar9, iVar7 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar4,iVar7,&pFVar4->HighValueArray);
    local_290 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (pFVar4,iVar7,pTVar15);
    local_210._4_4_ = fVar18;
    local_210._0_4_ = local_290;
    fStack_28c = fVar18;
  }
  local_278 = 0x4b189680;
  uStack_274 = 0x4b189680;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBendingElementStiffnessName);
  if ((piVar9 == (int *)0x0) || (iVar7 = *piVar9, iVar7 == -1)) {
    local_208._4_4_ = uStack_274;
    local_208._0_4_ = local_278;
  }
  else {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar4,iVar7,&pFVar4->HighValueArray);
    local_280 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (pFVar4,iVar7,pTVar15);
    local_208._4_4_ = fVar18;
    local_208._0_4_ = local_280;
    fStack_27c = fVar18;
  }
  pTVar11 = GetRestAngleMapFromCollection
                      (this,(TArrayView<float_const_,int> *)(local_110 + 0x48),param_5,pFVar4);
  local_160.DataPtr = (float *)0x0;
  local_160.ArrayNum = 0;
  pFVar12 = ::FName::ToString(&XPBDBucklingRatioName,(FString *)(local_110 + 8));
  pFVar12 = ::FString::FString((FString *)(local_110 + 0x58),pFVar12);
  local_1d0 = pFVar4;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar4,&local_1c0,&XPBDBucklingRatioName,(<lambda_1> *)&local_1d0,pFVar12,(int *)0x0);
  pwVar16 = L"";
  iVar7 = local_1c0.Data.ArrayNum + -1;
  FVar5.Data = local_1c0.Data.AllocatorInstance.Data;
  if (local_1c0.Data.ArrayNum == 0) {
    iVar7 = 0;
    FVar5.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar5.Data);
  iVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_5,uVar8,&local_1c0);
  if ((iVar7 == -1) || (lVar1 = *(longlong *)param_5 + (longlong)iVar7 * 0x28, lVar1 == 0)) {
    local_1b0.DataPtr = (float *)0x0;
    local_1b0._8_8_ = (ulonglong)(uint)local_1b0._12_4_ << 0x20;
  }
  else {
    local_1b0.DataPtr = *(float **)(lVar1 + 0x10);
    local_1b0._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  local_150.DataPtr = (float *)0x0;
  local_150.ArrayNum = 0;
  FPBDBendingConstraintsBase::FPBDBendingConstraintsBase
            ((FPBDBendingConstraintsBase *)this,param_1,param_2,param_3,param_4,&local_150,
             &local_1b0,&local_160,pTVar11,&local_208,&local_210,&local_1c8,
             (TVector<float,2> *)TVar10,(ERestAngleConstructionType)param_6,true,fVar19);
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if ((FName *)local_110._8_8_ != (FName *)0x0) {
    FMemory::Free((void *)local_110._8_8_);
  }
  this->_padding_ = (longlong)&___7FXPBDBendingConstraints_Softs_Chaos__6B_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  iVar17 = (int)this->_padding_;
  lVar1 = this->_padding_;
  local_140.DataPtr = (TVector<int,2> *)this->_padding_;
  if ((iVar17 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FXPBDBendingConstraints *)(*pcVar3)();
    return pFVar13;
  }
  local_140.ArrayNum = iVar17;
  pFVar12 = ::FName::ToString(&XPBDBendingElementStiffnessName,(FString *)(local_110 + 0x18));
  pFVar12 = ::FString::FString(&local_a8,pFVar12);
  iVar17 = 0;
  local_200 = pFVar4;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar4,&local_230,&XPBDBendingElementStiffnessName,(<lambda_1> *)&local_200,pFVar12,
             (int *)0x0);
  if (local_230.Data.ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    iVar17 = local_230.Data.ArrayNum + -1;
    pwVar14 = (wchar_t *)local_230.Data.AllocatorInstance.Data;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar14);
  iVar17 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_5,uVar8,&local_230);
  if ((iVar17 == -1) || (lVar2 = *(longlong *)param_5 + (longlong)iVar17 * 0x28, lVar2 == 0)) {
    local_1a0.DataPtr = (float *)0x0;
    local_1a0._8_8_ = (ulonglong)(uint)local_1a0._12_4_ << 0x20;
  }
  else {
    local_1a0.DataPtr = *(float **)(lVar2 + 0x10);
    local_1a0._8_8_ = *(longlong *)(lVar2 + 0x18);
  }
  local_268 = 1e+07;
  fStack_264 = 1e+07;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBendingElementStiffnessName);
  local_260 = local_268;
  fStack_25c = fStack_264;
  if ((piVar9 != (int *)0x0) && (iVar17 = *piVar9, iVar17 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar4,iVar17,&pFVar4->HighValueArray);
    local_270 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (pFVar4,iVar17,pTVar15);
    fStack_26c = fVar18;
    local_260 = local_270;
    fStack_25c = fVar18;
  }
  fVar18 = local_260;
  if (fVar19 <= local_260) {
    fVar18 = fVar19;
  }
  fVar20 = fStack_25c;
  if (fVar19 <= fStack_25c) {
    fVar20 = fVar19;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  local_1f8._4_4_ = fVar20;
  local_1f8._0_4_ = fVar18;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->XPBDStiffness,&local_1f8,&local_1a0,&local_140,(int)lVar1,iVar7,(void *)0x0);
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  if ((TVector<float> *)local_110._24_8_ != (TVector<float> *)0x0) {
    FMemory::Free((void *)local_110._24_8_);
  }
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  iVar17 = (int)this->_padding_;
  lVar1 = this->_padding_;
  local_130.DataPtr = (TVector<int,2> *)this->_padding_;
  if ((iVar17 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FXPBDBendingConstraints *)(*pcVar3)();
    return pFVar13;
  }
  local_130.ArrayNum = iVar17;
  pFVar12 = ::FName::ToString(&XPBDBucklingStiffnessName,(FString *)(local_110 + 0x28));
  pFVar12 = ::FString::FString(&local_98,pFVar12);
  iVar17 = 0;
  local_1f0 = pFVar4;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar4,&local_220,&XPBDBucklingStiffnessName,(<lambda_1> *)&local_1f0,pFVar12,
             (int *)0x0);
  if (local_220.Data.ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    iVar17 = local_220.Data.ArrayNum + -1;
    pwVar14 = (wchar_t *)local_220.Data.AllocatorInstance.Data;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar14);
  iVar17 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_5,uVar8,&local_220);
  if ((iVar17 == -1) || (lVar2 = *(longlong *)param_5 + (longlong)iVar17 * 0x28, lVar2 == 0)) {
    local_190.DataPtr = (float *)0x0;
    local_190._8_8_ = (ulonglong)(uint)local_190._12_4_ << 0x20;
  }
  else {
    local_190.DataPtr = *(float **)(lVar2 + 0x10);
    local_190._8_8_ = *(longlong *)(lVar2 + 0x18);
  }
  local_250 = 1e+07;
  fStack_24c = 1e+07;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBucklingStiffnessName);
  local_248 = local_250;
  fStack_244 = fStack_24c;
  if ((piVar9 != (int *)0x0) && (iVar17 = *piVar9, iVar17 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar4,iVar17,&pFVar4->HighValueArray);
    local_258 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (pFVar4,iVar17,pTVar15);
    fStack_254 = fVar18;
    local_248 = local_258;
    fStack_244 = fVar18;
  }
  fVar18 = local_248;
  if (fVar19 <= local_248) {
    fVar18 = fVar19;
  }
  fVar20 = fStack_244;
  if (fVar19 <= fStack_244) {
    fVar20 = fVar19;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  local_1e8._4_4_ = fVar20;
  local_1e8._0_4_ = fVar18;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->XPBDBucklingStiffness,&local_1e8,&local_190,&local_130,(int)lVar1,iVar7,
             (void *)0x0);
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  if ((TVector<float> *)local_110._40_8_ != (TVector<float> *)0x0) {
    FMemory::Free((void *)local_110._40_8_);
  }
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  iVar17 = (int)this->_padding_;
  lVar1 = this->_padding_;
  local_120.DataPtr = (TVector<int,2> *)this->_padding_;
  if ((iVar17 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar13 = (FXPBDBendingConstraints *)(*pcVar3)();
    return pFVar13;
  }
  local_120.ArrayNum = iVar17;
  pFVar12 = ::FName::ToString(&XPBDBendingElementDampingName,(FString *)(local_110 + 0x38));
  pFVar12 = ::FString::FString(local_88,pFVar12);
  iVar17 = 0;
  local_1e0 = pFVar4;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar4,&local_180,&XPBDBendingElementDampingName,(<lambda_1> *)&local_1e0,pFVar12,
             (int *)0x0);
  if (local_180.Data.ArrayNum != 0) {
    iVar17 = local_180.Data.ArrayNum + -1;
    pwVar16 = (wchar_t *)local_180.Data.AllocatorInstance.Data;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar16);
  iVar17 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_5,uVar8,&local_180);
  if ((iVar17 == -1) || (lVar2 = *(longlong *)param_5 + (longlong)iVar17 * 0x28, lVar2 == 0)) {
    local_170.DataPtr = (float *)0x0;
    local_170._8_8_ = (ulonglong)(uint)local_170._12_4_ << 0x20;
  }
  else {
    local_170.DataPtr = *(float **)(lVar2 + 0x10);
    local_170._8_8_ = *(longlong *)(lVar2 + 0x18);
  }
  local_238 = 0.0;
  fStack_234 = 0.0;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBendingElementDampingName);
  fVar18 = local_238;
  fVar19 = fStack_234;
  if ((piVar9 != (int *)0x0) && (iVar17 = *piVar9, iVar17 != -1)) {
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar4,iVar17,&pFVar4->HighValueArray);
    local_240 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (pFVar4,iVar17,pTVar15);
    fStack_23c = fVar19;
    fVar18 = local_240;
  }
  if (__real_447a0000 <= fVar18) {
    fVar18 = __real_447a0000;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  if (__real_447a0000 <= fVar19) {
    fVar19 = __real_447a0000;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  local_1d8._4_4_ = fVar19;
  local_1d8._0_4_ = fVar18;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->DampingRatio,&local_1d8,&local_170,&local_120,(int)lVar1,iVar7,(void *)0x0);
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if ((FString *)local_110._56_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_110._56_8_);
  }
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  (this->LambdasDamping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdasDamping).ArrayNum = 0;
  (this->LambdasDamping).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  (this->ConstraintsIndex1).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex1).ArrayNum = 0;
  (this->ConstraintsIndex1).ArrayMax = 0;
  (this->ConstraintsIndex2).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex2).ArrayNum = 0;
  (this->ConstraintsIndex2).ArrayMax = 0;
  (this->ConstraintsIndex3).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex3).ArrayNum = 0;
  (this->ConstraintsIndex3).ArrayMax = 0;
  (this->ConstraintsIndex4).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex4).ArrayNum = 0;
  (this->ConstraintsIndex4).ArrayMax = 0;
  (this->X1Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X1Array).ArrayNum = 0;
  (this->X1Array).ArrayMax = 0;
  (this->X2Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X2Array).ArrayNum = 0;
  (this->X2Array).ArrayMax = 0;
  (this->X3Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X3Array).ArrayNum = 0;
  (this->X3Array).ArrayMax = 0;
  (this->X4Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X4Array).ArrayNum = 0;
  (this->X4Array).ArrayMax = 0;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBendingElementStiffnessName);
  iVar7 = -1;
  if (piVar9 == (int *)0x0) {
    iVar17 = -1;
  }
  else {
    iVar17 = *piVar9;
  }
  (this->XPBDBendingElementStiffnessIndex).Index = iVar17;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBendingElementDampingName);
  if (piVar9 == (int *)0x0) {
    iVar17 = -1;
  }
  else {
    iVar17 = *piVar9;
  }
  (this->XPBDBendingElementDampingIndex).Index = iVar17;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBucklingRatioName);
  if (piVar9 == (int *)0x0) {
    iVar17 = -1;
  }
  else {
    iVar17 = *piVar9;
  }
  (this->XPBDBucklingRatioIndex).Index = iVar17;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBucklingStiffnessName);
  if (piVar9 == (int *)0x0) {
    iVar17 = -1;
  }
  else {
    iVar17 = *piVar9;
  }
  (this->XPBDBucklingStiffnessIndex).Index = iVar17;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDFlatnessRatioName);
  if (piVar9 == (int *)0x0) {
    iVar17 = -1;
  }
  else {
    iVar17 = *piVar9;
  }
  (this->XPBDFlatnessRatioIndex).Index = iVar17;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDRestAngleName);
  if (piVar9 == (int *)0x0) {
    iVar17 = -1;
  }
  else {
    iVar17 = *piVar9;
  }
  (this->XPBDRestAngleIndex).Index = iVar17;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDRestAngleTypeName);
  if (piVar9 != (int *)0x0) {
    iVar7 = *piVar9;
  }
  (this->XPBDRestAngleTypeIndex).Index = iVar7;
  local_2a8 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(&this->Lambdas,&local_2a8,(int)this->_padding_);
  local_2a4 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->LambdasDamping,&local_2a4,(int)this->_padding_);
  InitColor<Chaos::Softs::FSolverParticles>(this,param_1);
  return this;
}

// FXPBDBendingConstraints @ 14db9b280

FXPBDBendingConstraints * __thiscall
Chaos::Softs::FXPBDBendingConstraints::FXPBDBendingConstraints
          (FXPBDBendingConstraints *this,FSolverParticlesRange *param_1,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_3,FCollectionPropertyConstFacade *param_4)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  FCollectionPropertyConstFacade *pFVar4;
  ForAnyElementType FVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  TVector<float,2> TVar11;
  TArrayView<float_const_,int> *pTVar12;
  FString *pFVar13;
  FXPBDBendingConstraints *pFVar14;
  wchar_t *pwVar15;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar16;
  wchar_t *pwVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  undefined8 local_res20;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float fStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  float local_290;
  float fStack_28c;
  TVector<float,2> local_288;
  float local_280;
  float fStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  float local_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float local_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float local_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float local_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  FString local_230;
  FString local_220;
  TVector<float,2> local_210;
  TVector<float,2> local_208;
  FCollectionPropertyConstFacade *local_200;
  TVector<float,2> local_1f8;
  FCollectionPropertyConstFacade *local_1f0;
  TVector<float,2> local_1e8;
  FCollectionPropertyConstFacade *local_1e0;
  TVector<float,2> local_1d8;
  FCollectionPropertyConstFacade *local_1d0;
  TVector<float,2> local_1c8;
  FString local_1c0;
  TArrayView<float_const_,int> local_1b0;
  TArrayView<float_const_,int> local_1a0;
  TArrayView<float_const_,int> local_190;
  FString local_180;
  TArrayView<float_const_,int> local_170;
  TArrayView<float_const_,int> local_160;
  TArrayView<float_const_,int> local_150;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_140;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_130;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_120;
  undefined1 local_110 [104];
  FString local_a8;
  FString local_98;
  FString local_88 [4];
  
  pFVar4 = param_4;
  this_00 = &param_4->KeyNameIndices;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDRestAngleTypeName);
  if ((piVar10 == (int *)0x0) || (*piVar10 == -1)) {
    param_4._0_1_ = Use3DRestAngles;
  }
  else {
    iVar8 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_4,*piVar10,&param_4->LowValueArray);
    param_4._0_1_ = (ERestAngleConstructionType)iVar8;
  }
  pTVar16 = &pFVar4->LowValueArray;
  TVar11 = GetRestAngleValueFromCollection(this,(FCollectionPropertyConstFacade *)local_110);
  fVar6 = __real_4b189680;
  local_298 = 0x4b189680;
  uStack_294 = 0x4b189680;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDBucklingStiffnessName);
  if ((piVar10 == (int *)0x0) || (iVar8 = *piVar10, iVar8 == -1)) {
    local_1c8._4_4_ = uStack_294;
    local_1c8._0_4_ = local_298;
  }
  else {
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar4,iVar8,&pFVar4->HighValueArray);
    local_2a0 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (pFVar4,iVar8,pTVar16);
    local_1c8._4_4_ = fVar19;
    local_1c8._0_4_ = local_2a0;
    fStack_29c = fVar19;
  }
  local_288 = (TVector<float,2>)0x0;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDBucklingRatioName);
  local_210 = local_288;
  if ((piVar10 != (int *)0x0) && (iVar8 = *piVar10, iVar8 != -1)) {
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar4,iVar8,&pFVar4->HighValueArray);
    local_290 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (pFVar4,iVar8,pTVar16);
    local_210._4_4_ = fVar19;
    local_210._0_4_ = local_290;
    fStack_28c = fVar19;
  }
  local_278 = 0x4b189680;
  uStack_274 = 0x4b189680;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDBendingElementStiffnessName);
  if ((piVar10 == (int *)0x0) || (iVar8 = *piVar10, iVar8 == -1)) {
    local_208._4_4_ = uStack_274;
    local_208._0_4_ = local_278;
  }
  else {
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar4,iVar8,&pFVar4->HighValueArray);
    local_280 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (pFVar4,iVar8,pTVar16);
    local_208._4_4_ = fVar19;
    local_208._0_4_ = local_280;
    fStack_27c = fVar19;
  }
  pTVar12 = GetRestAngleMapFromCollection
                      (this,(TArrayView<float_const_,int> *)(local_110 + 0x48),param_3,pFVar4);
  local_160.DataPtr = (float *)0x0;
  local_160.ArrayNum = 0;
  pFVar13 = ::FName::ToString(&XPBDBucklingRatioName,(FString *)(local_110 + 8));
  pFVar13 = ::FString::FString((FString *)(local_110 + 0x58),pFVar13);
  local_1d0 = pFVar4;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar4,&local_1c0,&XPBDBucklingRatioName,(<lambda_1> *)&local_1d0,pFVar13,(int *)0x0);
  pwVar17 = L"";
  iVar8 = local_1c0.Data.ArrayNum + -1;
  FVar5.Data = local_1c0.Data.AllocatorInstance.Data;
  if (local_1c0.Data.ArrayNum == 0) {
    iVar8 = 0;
    FVar5.Data = (FScriptContainerElement *)L"";
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar5.Data);
  iVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_3,uVar9,&local_1c0);
  if ((iVar8 == -1) || (lVar1 = *(longlong *)param_3 + (longlong)iVar8 * 0x28, lVar1 == 0)) {
    local_1b0.DataPtr = (float *)0x0;
    local_1b0._8_8_ = (ulonglong)(uint)local_1b0._12_4_ << 0x20;
  }
  else {
    local_1b0.DataPtr = *(float **)(lVar1 + 0x10);
    local_1b0._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  local_150.DataPtr = (float *)0x0;
  local_150.ArrayNum = 0;
  FPBDBendingConstraintsBase::FPBDBendingConstraintsBase
            ((FPBDBendingConstraintsBase *)this,param_1,param_2,&local_150,&local_1b0,&local_160,
             pTVar12,&local_208,&local_210,&local_1c8,(TVector<float,2> *)TVar11,
             (ERestAngleConstructionType)param_4,true,fVar6);
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if ((FName *)local_110._8_8_ != (FName *)0x0) {
    FMemory::Free((void *)local_110._8_8_);
  }
  this->_padding_ = (longlong)&___7FXPBDBendingConstraints_Softs_Chaos__6B_;
  iVar8 = *(int *)((longlong)&this->_padding_ + 4);
  iVar18 = (int)this->_padding_;
  lVar1 = this->_padding_;
  local_140.DataPtr = (TVector<int,2> *)this->_padding_;
  if ((iVar18 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pFVar14 = (FXPBDBendingConstraints *)(*pcVar3)();
    return pFVar14;
  }
  local_140.ArrayNum = iVar18;
  pFVar13 = ::FName::ToString(&XPBDBendingElementStiffnessName,(FString *)(local_110 + 0x18));
  pFVar13 = ::FString::FString(&local_a8,pFVar13);
  iVar18 = 0;
  local_200 = pFVar4;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar4,&local_230,&XPBDBendingElementStiffnessName,(<lambda_1> *)&local_200,pFVar13,
             (int *)0x0);
  if (local_230.Data.ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    iVar18 = local_230.Data.ArrayNum + -1;
    pwVar15 = (wchar_t *)local_230.Data.AllocatorInstance.Data;
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar15);
  iVar18 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_3,uVar9,&local_230);
  if ((iVar18 == -1) || (lVar2 = *(longlong *)param_3 + (longlong)iVar18 * 0x28, lVar2 == 0)) {
    local_1a0.DataPtr = (float *)0x0;
    local_1a0._8_8_ = (ulonglong)(uint)local_1a0._12_4_ << 0x20;
  }
  else {
    local_1a0.DataPtr = *(float **)(lVar2 + 0x10);
    local_1a0._8_8_ = *(longlong *)(lVar2 + 0x18);
  }
  local_268 = 1e+07;
  fStack_264 = 1e+07;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDBendingElementStiffnessName);
  local_260 = local_268;
  fStack_25c = fStack_264;
  if ((piVar10 != (int *)0x0) && (iVar18 = *piVar10, iVar18 != -1)) {
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar4,iVar18,&pFVar4->HighValueArray);
    local_270 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (pFVar4,iVar18,pTVar16);
    fStack_26c = fVar19;
    local_260 = local_270;
    fStack_25c = fVar19;
  }
  fVar19 = local_260;
  if (fVar6 <= local_260) {
    fVar19 = fVar6;
  }
  fVar20 = fStack_25c;
  if (fVar6 <= fStack_25c) {
    fVar20 = fVar6;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  local_1f8._4_4_ = fVar20;
  local_1f8._0_4_ = fVar19;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->XPBDStiffness,&local_1f8,&local_1a0,&local_140,(int)lVar1,iVar8,(void *)0x0);
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  if ((TVector<float> *)local_110._24_8_ != (TVector<float> *)0x0) {
    FMemory::Free((void *)local_110._24_8_);
  }
  iVar8 = *(int *)((longlong)&this->_padding_ + 4);
  iVar18 = (int)this->_padding_;
  lVar1 = this->_padding_;
  local_130.DataPtr = (TVector<int,2> *)this->_padding_;
  if ((iVar18 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pFVar14 = (FXPBDBendingConstraints *)(*pcVar3)();
    return pFVar14;
  }
  local_130.ArrayNum = iVar18;
  pFVar13 = ::FName::ToString(&XPBDBucklingStiffnessName,(FString *)(local_110 + 0x28));
  pFVar13 = ::FString::FString(&local_98,pFVar13);
  iVar18 = 0;
  local_1f0 = pFVar4;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar4,&local_220,&XPBDBucklingStiffnessName,(<lambda_1> *)&local_1f0,pFVar13,
             (int *)0x0);
  if (local_220.Data.ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    iVar18 = local_220.Data.ArrayNum + -1;
    pwVar15 = (wchar_t *)local_220.Data.AllocatorInstance.Data;
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar15);
  iVar18 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_3,uVar9,&local_220);
  if ((iVar18 == -1) || (lVar2 = *(longlong *)param_3 + (longlong)iVar18 * 0x28, lVar2 == 0)) {
    local_190.DataPtr = (float *)0x0;
    local_190._8_8_ = (ulonglong)(uint)local_190._12_4_ << 0x20;
  }
  else {
    local_190.DataPtr = *(float **)(lVar2 + 0x10);
    local_190._8_8_ = *(longlong *)(lVar2 + 0x18);
  }
  local_250 = 1e+07;
  fStack_24c = 1e+07;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDBucklingStiffnessName);
  local_248 = local_250;
  fStack_244 = fStack_24c;
  if ((piVar10 != (int *)0x0) && (iVar18 = *piVar10, iVar18 != -1)) {
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar4,iVar18,&pFVar4->HighValueArray);
    local_258 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (pFVar4,iVar18,pTVar16);
    fStack_254 = fVar19;
    local_248 = local_258;
    fStack_244 = fVar19;
  }
  fVar19 = local_248;
  if (fVar6 <= local_248) {
    fVar19 = fVar6;
  }
  fVar20 = fStack_244;
  if (fVar6 <= fStack_244) {
    fVar20 = fVar6;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  local_1e8._4_4_ = fVar20;
  local_1e8._0_4_ = fVar19;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->XPBDBucklingStiffness,&local_1e8,&local_190,&local_130,(int)lVar1,iVar8,
             (void *)0x0);
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  if ((TVector<float> *)local_110._40_8_ != (TVector<float> *)0x0) {
    FMemory::Free((void *)local_110._40_8_);
  }
  iVar8 = *(int *)((longlong)&this->_padding_ + 4);
  iVar18 = (int)this->_padding_;
  lVar1 = this->_padding_;
  local_120.DataPtr = (TVector<int,2> *)this->_padding_;
  if ((iVar18 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pFVar14 = (FXPBDBendingConstraints *)(*pcVar3)();
    return pFVar14;
  }
  local_120.ArrayNum = iVar18;
  pFVar13 = ::FName::ToString(&XPBDBendingElementDampingName,(FString *)(local_110 + 0x38));
  pFVar13 = ::FString::FString(local_88,pFVar13);
  iVar18 = 0;
  local_1e0 = pFVar4;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar4,&local_180,&XPBDBendingElementDampingName,(<lambda_1> *)&local_1e0,pFVar13,
             (int *)0x0);
  if (local_180.Data.ArrayNum != 0) {
    iVar18 = local_180.Data.ArrayNum + -1;
    pwVar17 = (wchar_t *)local_180.Data.AllocatorInstance.Data;
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar17);
  iVar18 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_3,uVar9,&local_180);
  if ((iVar18 == -1) || (lVar2 = *(longlong *)param_3 + (longlong)iVar18 * 0x28, lVar2 == 0)) {
    local_170.DataPtr = (float *)0x0;
    local_170._8_8_ = (ulonglong)(uint)local_170._12_4_ << 0x20;
  }
  else {
    local_170.DataPtr = *(float **)(lVar2 + 0x10);
    local_170._8_8_ = *(longlong *)(lVar2 + 0x18);
  }
  local_238 = 0.0;
  fStack_234 = 0.0;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDBendingElementDampingName);
  local_res20._0_4_ = local_238;
  local_res20._4_4_ = fStack_234;
  if ((piVar10 != (int *)0x0) && (iVar18 = *piVar10, iVar18 != -1)) {
    local_res20._4_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (pFVar4,iVar18,&pFVar4->HighValueArray);
    local_240 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (pFVar4,iVar18,pTVar16);
    fStack_23c = local_res20._4_4_;
    local_res20._0_4_ = local_240;
  }
  if (__real_447a0000 <= (float)local_res20) {
    local_res20._0_4_ = __real_447a0000;
  }
  if ((float)local_res20 <= 0.0) {
    local_res20._0_4_ = 0.0;
  }
  if (__real_447a0000 <= local_res20._4_4_) {
    local_res20._4_4_ = __real_447a0000;
  }
  if (local_res20._4_4_ <= 0.0) {
    local_res20._4_4_ = 0.0;
  }
  local_1d8 = local_res20;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->DampingRatio,&local_1d8,&local_170,&local_120,(int)lVar1,iVar8,(void *)0x0);
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if ((FString *)local_110._56_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_110._56_8_);
  }
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  (this->LambdasDamping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdasDamping).ArrayNum = 0;
  (this->LambdasDamping).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  (this->ConstraintsIndex1).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex1).ArrayNum = 0;
  (this->ConstraintsIndex1).ArrayMax = 0;
  (this->ConstraintsIndex2).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex2).ArrayNum = 0;
  (this->ConstraintsIndex2).ArrayMax = 0;
  (this->ConstraintsIndex3).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex3).ArrayNum = 0;
  (this->ConstraintsIndex3).ArrayMax = 0;
  (this->ConstraintsIndex4).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex4).ArrayNum = 0;
  (this->ConstraintsIndex4).ArrayMax = 0;
  (this->X1Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X1Array).ArrayNum = 0;
  (this->X1Array).ArrayMax = 0;
  (this->X2Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X2Array).ArrayNum = 0;
  (this->X2Array).ArrayMax = 0;
  (this->X3Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X3Array).ArrayNum = 0;
  (this->X3Array).ArrayMax = 0;
  (this->X4Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X4Array).ArrayNum = 0;
  (this->X4Array).ArrayMax = 0;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDBendingElementStiffnessName);
  iVar8 = -1;
  if (piVar10 == (int *)0x0) {
    iVar18 = -1;
  }
  else {
    iVar18 = *piVar10;
  }
  (this->XPBDBendingElementStiffnessIndex).Index = iVar18;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDBendingElementDampingName);
  if (piVar10 == (int *)0x0) {
    iVar18 = -1;
  }
  else {
    iVar18 = *piVar10;
  }
  (this->XPBDBendingElementDampingIndex).Index = iVar18;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDBucklingRatioName);
  if (piVar10 == (int *)0x0) {
    iVar18 = -1;
  }
  else {
    iVar18 = *piVar10;
  }
  (this->XPBDBucklingRatioIndex).Index = iVar18;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDBucklingStiffnessName);
  if (piVar10 == (int *)0x0) {
    iVar18 = -1;
  }
  else {
    iVar18 = *piVar10;
  }
  (this->XPBDBucklingStiffnessIndex).Index = iVar18;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDFlatnessRatioName);
  if (piVar10 == (int *)0x0) {
    iVar18 = -1;
  }
  else {
    iVar18 = *piVar10;
  }
  (this->XPBDFlatnessRatioIndex).Index = iVar18;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDRestAngleName);
  if (piVar10 == (int *)0x0) {
    iVar18 = -1;
  }
  else {
    iVar18 = *piVar10;
  }
  (this->XPBDRestAngleIndex).Index = iVar18;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,XPBDRestAngleTypeName);
  if (piVar10 != (int *)0x0) {
    iVar8 = *piVar10;
  }
  (this->XPBDRestAngleTypeIndex).Index = iVar8;
  local_2a8 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(&this->Lambdas,&local_2a8,(int)this->_padding_);
  local_2a4 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->LambdasDamping,&local_2a4,(int)this->_padding_);
  InitColor<Chaos::Softs::FSolverParticlesRange>(this,param_1);
  return this;
}

// ~FXPBDBendingConstraints @ 14dba0370

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::~FXPBDBendingConstraints(FXPBDBendingConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FXPBDBendingConstraints_Softs_Chaos__6B_;
  pFVar1 = (this->X4Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->X3Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->X2Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->X1Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsIndex4).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsIndex3).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsIndex2).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsIndex1).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LambdasDamping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Lambdas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DampingRatio).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->XPBDBucklingStiffness).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->XPBDStiffness).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPBDBendingConstraintsBase::~FPBDBendingConstraintsBase((FPBDBendingConstraintsBase *)this);
  return;
}

// GetConstraintsArray @ 14dbfae60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FXPBDBendingConstraints::GetConstraintsArray
          (FXPBDBendingConstraints *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  void *_Dst;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (__return_storage_ptr__,(int)this->_padding_,Default);
  uVar11 = 0;
  if (0 < (int)this->_padding_) {
    lVar12 = 0;
    do {
      uVar10 = ~uVar11 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + lVar12;
      iVar8 = *(int *)&pFVar9[8].field_0x0;
      pFVar2 = pFVar9 + 8;
      if (iVar8 < 4) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,4 - iVar8,(ForAnyElementType *)pFVar9,(int *)pFVar2,
                           (int *)(pFVar9 + 0xc));
        memset((void *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar6 * 4),0,
               (longlong)(4 - iVar8) << 2);
      }
      else if (4 < iVar8) {
        iVar8 = iVar8 + -4;
        if (iVar8 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar7;
          }
        }
        else if (iVar8 == 0) goto LAB_14dbfaff4;
        _Dst = (void *)(*(longlong *)&pFVar9->field_0x0 + 0x10);
        iVar6 = (*(int *)&pFVar2->field_0x0 - iVar8) + -4;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar8 * 4),(longlong)iVar6 << 2);
        }
        *(int *)&pFVar2->field_0x0 = *(int *)&pFVar2->field_0x0 - iVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)pFVar9,*(int *)&pFVar2->field_0x0,(int *)(pFVar9 + 0xc))
        ;
      }
LAB_14dbfaff4:
      uVar5 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      uVar1 = *(undefined4 *)(lVar12 + this->_padding_);
      uVar5 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + lVar12 + 8) < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      **(undefined4 **)(pFVar2 + lVar12) = uVar1;
      uVar5 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      uVar1 = *(undefined4 *)(lVar12 + 4 + this->_padding_);
      uVar5 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + lVar12 + 8) < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      *(undefined4 *)(*(longlong *)(pFVar2 + lVar12) + 4) = uVar1;
      uVar5 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      uVar1 = *(undefined4 *)(lVar12 + 8 + this->_padding_);
      uVar5 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + lVar12 + 8) < 3) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      *(undefined4 *)(*(longlong *)(pFVar2 + lVar12) + 8) = uVar1;
      uVar5 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      uVar1 = *(undefined4 *)(lVar12 + 0xc + this->_padding_);
      uVar5 = 0;
      if ((int)uVar11 < __return_storage_ptr__->ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((*(int *)(pFVar2 + lVar12 + 8) < 4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
      pFVar2 = pFVar2 + lVar12;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x10;
      *(undefined4 *)(*(longlong *)pFVar2 + 0xc) = uVar1;
    } while ((int)uVar11 < (int)this->_padding_);
  }
  return __return_storage_ptr__;
}

// GetRestAngleMapFromCollection @ 14dbffb20

TArrayView<float_const_,int> * __thiscall
Chaos::Softs::FXPBDBendingConstraints::GetRestAngleMapFromCollection
          (FXPBDBendingConstraints *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_1,FCollectionPropertyConstFacade *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ForAnyElementType FVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  FString *pFVar7;
  uint uVar8;
  FName *pFVar9;
  FCollectionPropertyConstFacade *local_res20;
  FString local_38;
  FString local_28;
  FString local_18;
  
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,XPBDRestAngleTypeName);
  uVar8 = 0;
  uVar4 = uVar8;
  if ((piVar6 != (int *)0x0) && (*piVar6 != -1)) {
    uVar4 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_2,*piVar6,&param_2->LowValueArray);
  }
  if ((char)uVar4 == '\0') {
LAB_14dbffc73:
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    if ((uVar4 & 0xff) == 1) {
      pFVar7 = ::FName::ToString(&XPBDFlatnessRatioName,&local_28);
      pFVar7 = ::FString::FString(&local_18,pFVar7);
      pFVar9 = &XPBDFlatnessRatioName;
    }
    else {
      if ((uVar4 & 0xff) != 2) goto LAB_14dbffc73;
      pFVar7 = ::FName::ToString(&XPBDRestAngleName,&local_28);
      pFVar7 = ::FString::FString(&local_18,pFVar7);
      pFVar9 = &XPBDRestAngleName;
    }
    local_res20 = param_2;
    FCollectionPropertyConstFacade::
    SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
              (param_2,&local_38,pFVar9,(<lambda_1> *)&local_res20,pFVar7,(int *)0x0);
    uVar4 = local_38.Data.ArrayNum - 1;
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
    if (local_38.Data.ArrayNum == 0) {
      uVar4 = uVar8;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar4,(wchar_t *)FVar3.Data);
    iVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_1,uVar4,&local_38);
    if ((iVar5 == -1) || (lVar1 = *(longlong *)param_1 + (longlong)iVar5 * 0x28, lVar1 == 0)) {
      __return_storage_ptr__->DataPtr = (float *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      __return_storage_ptr__->DataPtr = *(float **)(lVar1 + 0x10);
      *(undefined8 *)&__return_storage_ptr__->ArrayNum = uVar2;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetRestAngleValueFromCollection @ 14dbffdf0

TVector<float,2> __thiscall
Chaos::Softs::FXPBDBendingConstraints::GetRestAngleValueFromCollection
          (FXPBDBendingConstraints *this,FCollectionPropertyConstFacade *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  FCollectionPropertyConstFacade *in_R8;
  float fVar4;
  float fVar5;
  undefined8 local_res18;
  
  piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&in_R8->KeyNameIndices,XPBDRestAngleTypeName);
  if ((piVar3 == (int *)0x0) || (*piVar3 == -1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (in_R8,*piVar3,&in_R8->LowValueArray);
  }
  if ((char)uVar2 == '\0') {
LAB_14dbfff0d:
    param_1->_padding_ = 0;
  }
  else {
    if ((uVar2 & 0xff) == 1) {
      local_res18 = 0;
      piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)&in_R8->KeyNameIndices,XPBDFlatnessRatioName);
      if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 != -1)) {
        fVar4 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (in_R8,iVar1,&in_R8->HighValueArray);
        fVar5 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (in_R8,iVar1,&in_R8->LowValueArray);
        local_res18 = CONCAT44(fVar4,fVar5);
        param_1->_padding_ = local_res18;
        return (TVector<float,2>)param_1;
      }
    }
    else {
      if ((uVar2 & 0xff) != 2) goto LAB_14dbfff0d;
      local_res18 = 0;
      piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)&in_R8->KeyNameIndices,XPBDRestAngleName);
      if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 != -1)) {
        fVar4 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (in_R8,iVar1,&in_R8->HighValueArray);
        fVar5 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (in_R8,iVar1,&in_R8->LowValueArray);
        local_res18 = CONCAT44(fVar4,fVar5);
      }
    }
    param_1->_padding_ = local_res18;
  }
  return (TVector<float,2>)param_1;
}

