// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// Decompose @ 1460b9ae0

void __thiscall
UE::MovieScene::FDecomposedValue::Decompose
          (FDecomposedValue *this,FMovieSceneEntityID param_1,FWeightedValue *param_2,
          EDecomposedValueBlendType *param_3,FAccumulatedWeightedValue *param_4,
          FAccumulatedWeightedValue *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  EDecomposedValueBlendType EVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  ushort local_68;
  FWeightedValue FStack_60;
  
  iVar2 = (this->DecomposedAbsolutes).ArrayNum;
  pFVar4 = (this->DecomposedAbsolutes).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->DecomposedAbsolutes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FWeightedValue>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    FStack_60.Value = *(double *)(pFVar4 + 8);
    FStack_60._8_8_ = *(undefined8 *)(pFVar4 + 0x10);
    FStack_60.BaseValue = *(double *)(pFVar4 + 0x18);
    FStack_60._24_8_ = *(undefined8 *)(pFVar4 + 0x20);
    local_68 = (ushort)*(undefined8 *)pFVar4;
    if (local_68 == param_1.Value) {
      pFVar4 = pFVar4 + 0x28;
      param_2->Value = FStack_60.Value;
      param_2->Weight = FStack_60.Weight;
      *(int *)&param_2->field_0xc = FStack_60._12_4_;
      param_2->BaseValue = FStack_60.BaseValue;
      param_2->BlendingOrder = FStack_60.BlendingOrder;
      param_2->bIsAdditive = FStack_60.bIsAdditive;
      *(int3 *)&param_2->field_0x1d = FStack_60._29_3_;
      *param_3 = Absolute;
    }
    else {
      FAccumulatedWeightedValue::AccumulateThis(param_4,&FStack_60);
      pFVar4 = pFVar4 + 0x28;
    }
  }
  iVar2 = (this->DecomposedAdditives).ArrayNum;
  pFVar4 = (this->DecomposedAdditives).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->DecomposedAdditives).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FWeightedValue>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    FStack_60.Value = *(double *)(pFVar4 + 8);
    FStack_60._8_8_ = *(undefined8 *)(pFVar4 + 0x10);
    FStack_60.BaseValue = *(double *)(pFVar4 + 0x18);
    FStack_60._24_8_ = *(undefined8 *)(pFVar4 + 0x20);
    local_68 = (ushort)*(undefined8 *)pFVar4;
    if (local_68 == param_1.Value) {
      param_2->Value = FStack_60.Value;
      param_2->Weight = FStack_60.Weight;
      *(int *)&param_2->field_0xc = FStack_60._12_4_;
      EVar3 = Additive;
      if (FStack_60.BaseValue != 0.0) {
        EVar3 = AdditiveFromBase;
      }
      pFVar4 = pFVar4 + 0x28;
      param_2->BaseValue = FStack_60.BaseValue;
      param_2->BlendingOrder = FStack_60.BlendingOrder;
      param_2->bIsAdditive = FStack_60.bIsAdditive;
      *(int3 *)&param_2->field_0x1d = FStack_60._29_3_;
      *param_3 = EVar3;
    }
    else {
      FAccumulatedWeightedValue::AccumulateThis(param_5,&FStack_60);
      pFVar4 = pFVar4 + 0x28;
    }
  }
  iVar2 = (this->DecomposedOverrides).ArrayNum;
  pFVar4 = (this->DecomposedOverrides).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->DecomposedOverrides).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FWeightedValue>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    FStack_60.Value = *(double *)(pFVar4 + 8);
    FStack_60._8_8_ = *(undefined8 *)(pFVar4 + 0x10);
    FStack_60.BaseValue = *(double *)(pFVar4 + 0x18);
    FStack_60._24_8_ = *(undefined8 *)(pFVar4 + 0x20);
    local_68 = (ushort)*(undefined8 *)pFVar4;
    if (local_68 == param_1.Value) {
      param_2->Value = FStack_60.Value;
      param_2->Weight = FStack_60.Weight;
      *(int *)&param_2->field_0xc = FStack_60._12_4_;
      param_2->BaseValue = FStack_60.BaseValue;
      param_2->BlendingOrder = FStack_60.BlendingOrder;
      param_2->bIsAdditive = FStack_60.bIsAdditive;
      *(int3 *)&param_2->field_0x1d = FStack_60._29_3_;
      *param_3 = Override;
    }
    pFVar4 = pFVar4 + 0x28;
  }
  return;
}

// Recompose @ 1460e0f40

double __thiscall
UE::MovieScene::FDecomposedValue::Recompose
          (FDecomposedValue *this,FMovieSceneEntityID param_1,double param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  FAccumulatedWeightedValue *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  float fVar14;
  FIdentityFunctor local_res8 [8];
  FWeightedValue local_138;
  FAccumulatedWeightedValue local_118;
  FAccumulatedWeightedValue local_108;
  undefined8 local_f8;
  FWeightedValue FStack_f0;
  FAccumulatedWeightedValue local_d0;
  FAccumulatedWeightedValue local_c0 [9];
  
  pFVar12 = (this->DecomposedAbsolutes).AllocatorInstance.Data;
  iVar3 = (this->DecomposedAbsolutes).ArrayNum;
  pFVar11 = pFVar12 + (longlong)iVar3 * 0x28;
  local_138.Value = 0.0;
  local_138.BaseValue = 0.0;
  local_d0.Total = 0.0;
  local_118.Total = 0.0;
  local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
  local_138.BlendingOrder = -1;
  local_138.bIsAdditive = true;
  local_d0.TotalWeight = 0.0;
  local_118.TotalWeight = 0.0;
  while( true ) {
    if ((this->DecomposedAbsolutes).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FWeightedValue>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar11) break;
    local_f8 = *(undefined8 *)pFVar12;
    FStack_f0.Value = *(double *)(pFVar12 + 8);
    FStack_f0._8_8_ = *(undefined8 *)(pFVar12 + 0x10);
    FStack_f0.BaseValue = *(double *)(pFVar12 + 0x18);
    FStack_f0._24_8_ = *(undefined8 *)(pFVar12 + 0x20);
    if ((ushort)local_f8 == param_1.Value) {
      pFVar12 = pFVar12 + 0x28;
      local_138.Value = FStack_f0.Value;
      local_138._8_8_ = FStack_f0._8_8_;
      local_138.BaseValue = FStack_f0.BaseValue;
      local_138._24_8_ = FStack_f0._24_8_;
    }
    else {
      FAccumulatedWeightedValue::AccumulateThis(&local_d0,&FStack_f0);
      pFVar12 = pFVar12 + 0x28;
    }
  }
  iVar3 = (this->DecomposedAdditives).ArrayNum;
  iVar13 = 0;
  pFVar12 = (this->DecomposedAdditives).AllocatorInstance.Data;
  pFVar11 = pFVar12 + (longlong)iVar3 * 0x28;
  while( true ) {
    if ((this->DecomposedAdditives).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FWeightedValue>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar11) break;
    local_f8 = *(undefined8 *)pFVar12;
    FStack_f0.Value = *(double *)(pFVar12 + 8);
    FStack_f0._8_8_ = *(undefined8 *)(pFVar12 + 0x10);
    FStack_f0.BaseValue = *(double *)(pFVar12 + 0x18);
    FStack_f0._24_8_ = *(undefined8 *)(pFVar12 + 0x20);
    if ((ushort)local_f8 == param_1.Value) {
      local_138.Value = FStack_f0.Value;
      local_138._8_8_ = FStack_f0._8_8_;
      local_138.BaseValue = FStack_f0.BaseValue;
      local_138._24_8_ = FStack_f0._24_8_;
      if (FStack_f0.BaseValue == 0.0) {
        iVar13 = 1;
        pFVar12 = pFVar12 + 0x28;
      }
      else {
        iVar13 = 2;
        pFVar12 = pFVar12 + 0x28;
      }
    }
    else {
      FAccumulatedWeightedValue::AccumulateThis(&local_118,&FStack_f0);
      pFVar12 = pFVar12 + 0x28;
    }
  }
  iVar3 = (this->DecomposedOverrides).ArrayNum;
  pFVar12 = (this->DecomposedOverrides).AllocatorInstance.Data;
  pFVar11 = pFVar12 + (longlong)iVar3 * 0x28;
  while( true ) {
    if ((this->DecomposedOverrides).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FWeightedValue>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    dVar1 = local_138.BaseValue;
    fVar8 = __real_3f800000;
    if (pFVar12 == pFVar11) break;
    local_f8 = *(undefined8 *)pFVar12;
    FStack_f0.Value = *(double *)(pFVar12 + 8);
    FStack_f0._8_8_ = *(undefined8 *)(pFVar12 + 0x10);
    FStack_f0.BaseValue = *(double *)(pFVar12 + 0x18);
    FStack_f0._24_8_ = *(undefined8 *)(pFVar12 + 0x20);
    if ((ushort)local_f8 == param_1.Value) {
      iVar13 = 3;
      local_138.Value = FStack_f0.Value;
      local_138._8_8_ = FStack_f0._8_8_;
      local_138.BaseValue = FStack_f0.BaseValue;
      local_138._24_8_ = FStack_f0._24_8_;
    }
    pFVar12 = pFVar12 + 0x28;
  }
  local_108.Total = (this->Result).Absolute.Total;
  local_108.TotalWeight = (this->Result).Absolute.TotalWeight;
  local_108._12_4_ = *(undefined4 *)&(this->Result).Absolute.field_0xc;
  fVar9 = local_138.Weight;
  if (iVar13 - 1U < 2) {
    bVar7 = true;
    fVar14 = local_d0.TotalWeight + local_108.TotalWeight;
  }
  else {
    bVar7 = false;
    fVar14 = local_d0.TotalWeight + local_108.TotalWeight;
    if (iVar13 != 3) {
      fVar14 = fVar14 + local_138.Weight;
    }
  }
  if ((fVar14 < __real_3f800000) && (param_3 != (double *)0x0)) {
    local_108.TotalWeight = local_108.TotalWeight + (__real_3f800000 - fVar14);
    local_108.Total = local_108.Total + (double)(__real_3f800000 - fVar14) * *param_3;
    fVar14 = __real_3f800000;
  }
  dVar4 = local_108.Total;
  if ((local_d0.TotalWeight == 0.0) && (local_118.TotalWeight == 0.0)) {
    if ((iVar13 == 3) && (iVar3 = (this->AllDecomposedOverrides).ArrayNum, 0 < iVar3)) {
      AlgoImpl::
      IntroSortInternal<UE::MovieScene::FWeightedValue,int,FIdentityFunctor,TDereferenceWrapper<UE::MovieScene::FWeightedValue,TLess<void>_>_>
                ((FWeightedValue *)(this->AllDecomposedOverrides).AllocatorInstance.Data,iVar3,
                 local_res8[0],(TLess<void> *)local_res8);
      dVar6 = __real_3ff0000000000000;
      iVar3 = (this->AllDecomposedOverrides).ArrayNum;
      pFVar11 = (this->AllDecomposedOverrides).AllocatorInstance.Data;
      iVar13 = local_138.BlendingOrder;
      pFVar12 = pFVar11 + (longlong)iVar3 * 0x20;
      dVar1 = dVar4;
      dVar5 = 0.0;
      while( true ) {
        if ((this->AllDecomposedOverrides).ArrayNum != iVar3) {
          `TCheckedPointerIterator<UE::MovieScene::FWeightedValue,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar11 == pFVar12) break;
        if (*(int *)(pFVar11 + 0x18) < iVar13) {
          fVar14 = *(float *)(pFVar11 + 8);
          if (pFVar11[0x1c] == (FScriptContainerElement)0x0) {
            dVar1 = *(double *)pFVar11;
            if (fVar14 < fVar8) {
              pFVar11 = pFVar11 + 0x20;
              dVar4 = dVar4 * (dVar6 - (double)fVar14) + (double)fVar14 * dVar1;
              dVar1 = dVar4;
            }
            else {
              pFVar11 = pFVar11 + 0x20;
              dVar4 = dVar1;
            }
          }
          else {
            dVar1 = *(double *)pFVar11;
            pFVar11 = pFVar11 + 0x20;
            dVar4 = dVar4 + (double)fVar14 * dVar1;
            dVar1 = dVar4;
          }
        }
        else if (iVar13 < *(int *)(pFVar11 + 0x18)) {
          fVar14 = *(float *)(pFVar11 + 8);
          if (pFVar11[0x1c] == (FScriptContainerElement)0x0) {
            dVar2 = *(double *)pFVar11;
            if (fVar14 < fVar8) {
              dVar5 = dVar5 * (dVar6 - (double)fVar14) + (double)fVar14 * dVar2;
              goto LAB_1460e1327;
            }
            pFVar11 = pFVar11 + 0x20;
            dVar5 = dVar2;
          }
          else {
            dVar2 = *(double *)pFVar11;
            pFVar11 = pFVar11 + 0x20;
            dVar5 = dVar5 + (double)fVar14 * dVar2;
          }
        }
        else {
LAB_1460e1327:
          pFVar11 = pFVar11 + 0x20;
        }
      }
      if (local_138.bIsAdditive == false) {
        dVar1 = (dVar6 - (double)fVar9) * dVar1;
      }
      local_138.Value = (param_2 - dVar5) - dVar1;
      if (fVar9 != 0.0) {
        local_138.Value = local_138.Value / (double)fVar9;
      }
    }
    else {
      dVar1 = (this->Result).Additive;
      if (bVar7) {
        dVar4 = FAccumulatedWeightedValue::Normalize(&local_108);
        dVar1 = (param_2 - dVar4) - dVar1;
        if (fVar9 != 0.0) {
          dVar1 = dVar1 / (double)fVar9;
        }
        local_138.Value = dVar1 + local_138.BaseValue;
      }
      else {
        dVar1 = param_2 - dVar1;
        if (local_138.Weight == 0.0) {
          local_138.Value =
               (double)((this->Result).Absolute.TotalWeight + __real_3f800000) * dVar1 -
               (this->Result).Absolute.Total;
        }
        else {
          local_138.Value = ((double)fVar14 * dVar1 - local_108.Total) / (double)local_138.Weight;
        }
      }
    }
  }
  else if (local_138.Weight != 0.0) {
    if (bVar7) {
      dVar6 = (double)local_138.Weight;
      dVar5 = (local_138.Value - local_138.BaseValue) * dVar6;
      dVar2 = local_118.Total + dVar5;
      pFVar10 = FAccumulatedWeightedValue::Accumulate(&local_108,&local_118,&local_d0);
      dVar4 = FAccumulatedWeightedValue::Normalize(pFVar10);
      dVar4 = (param_2 - dVar4) - (this->Result).Additive;
      if (dVar2 == 0.0) {
        local_138.Value = dVar4 / dVar6 + dVar1;
      }
      else {
        local_138.Value = ((dVar5 / dVar2) * dVar4) / dVar6 + dVar1;
      }
    }
    else if ((this->DecomposedAdditives).ArrayNum == 0) {
      pFVar10 = FAccumulatedWeightedValue::Accumulate(&local_108,local_c0,&local_d0);
      FAccumulatedWeightedValue::Accumulate(pFVar10,&local_118,&local_138);
      dVar1 = (this->Result).Additive;
      if (local_118.TotalWeight == 0.0) {
        local_138.Value = (param_2 - dVar1) + local_138.Value;
      }
      else {
        dVar4 = FAccumulatedWeightedValue::Normalize(&local_118);
        local_138.Value = (param_2 - (dVar4 + dVar1)) + local_138.Value;
      }
    }
  }
  return local_138.Value;
}

