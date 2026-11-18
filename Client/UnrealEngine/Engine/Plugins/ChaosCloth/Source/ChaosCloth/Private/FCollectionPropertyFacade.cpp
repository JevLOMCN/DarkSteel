// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 5

// SetWeightedValue<int> @ 14db8bc00

void __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<int>
          (FCollectionPropertyFacade *this,int param_1,int *param_2,int *param_3)

{
  TVector<float>_u_0 local_18;
  
  local_18._s_0.X = (float)*param_2;
  local_18._s_0.Y = local_18._s_0.X;
  local_18._s_0.Z = local_18._s_0.X;
  SetValue<UE::Math::TVector<float>_>
            (this,param_1,(TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x18,
             (TVector<float> *)&local_18._s_0);
  local_18._s_0.X = (float)*param_3;
  local_18._s_0.Y = local_18._s_0.X;
  local_18._s_0.Z = local_18._s_0.X;
  SetValue<UE::Math::TVector<float>_>
            (this,param_1,(TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x28,
             (TVector<float> *)&local_18._s_0);
  return;
}

// SetWeightedValue<float> @ 14db8bc90

void __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<float>
          (FCollectionPropertyFacade *this,int param_1,float *param_2,float *param_3)

{
  TVector<float>_u_0 local_18;
  
  local_18._s_0.X = *param_2;
  local_18._s_0.Y = local_18._s_0.X;
  local_18._s_0.Z = local_18._s_0.X;
  SetValue<UE::Math::TVector<float>_>
            (this,param_1,(TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x18,
             (TVector<float> *)&local_18._s_0);
  local_18._s_0.X = *param_3;
  local_18._s_0.Y = local_18._s_0.X;
  local_18._s_0.Z = local_18._s_0.X;
  SetValue<UE::Math::TVector<float>_>
            (this,param_1,(TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x28,
             (TVector<float> *)&local_18._s_0);
  return;
}

// SetWeightedValue<UE::Math::TVector<float>_> @ 14db8bd10

void __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<UE::Math::TVector<float>_>
          (FCollectionPropertyFacade *this,int param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  undefined8 uVar1;
  float fVar2;
  TVector<float> *pTVar3;
  float fStack_24;
  
  fVar2 = (param_2->field0_0x0)._s_0.Z;
  uVar1 = *(undefined8 *)&param_2->field0_0x0;
  pTVar3 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                     ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x18,param_1);
  if ((((float)uVar1 != (pTVar3->field0_0x0)._s_0.X) ||
      (fStack_24 = (float)((ulonglong)uVar1 >> 0x20), fStack_24 != (pTVar3->field0_0x0)._s_0.Y)) ||
     (fVar2 != (pTVar3->field0_0x0)._s_0.Z)) {
    pTVar3 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                       ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x18,param_1);
    *(undefined8 *)&pTVar3->field0_0x0 = uVar1;
    (pTVar3->field0_0x0)._s_0.Z = fVar2;
    EnableFlags(this,param_1,Dirty,true);
  }
  uVar1 = *(undefined8 *)&param_3->field0_0x0;
  fVar2 = (param_3->field0_0x0)._s_0.Z;
  pTVar3 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                     ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x28,param_1);
  if ((((float)uVar1 != (pTVar3->field0_0x0)._s_0.X) ||
      (fStack_24 = (float)((ulonglong)uVar1 >> 0x20), fStack_24 != (pTVar3->field0_0x0)._s_0.Y)) ||
     (fVar2 != (pTVar3->field0_0x0)._s_0.Z)) {
    pTVar3 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                       ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x28,param_1);
    *(undefined8 *)&pTVar3->field0_0x0 = uVar1;
    (pTVar3->field0_0x0)._s_0.Z = fVar2;
    EnableFlags(this,param_1,Dirty,true);
  }
  return;
}

// SetWeightedValue<bool> @ 14db8be10

void __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<bool>
          (FCollectionPropertyFacade *this,int param_1,bool *param_2,bool *param_3)

{
  TVector<float>_u_0 local_18;
  
  local_18._s_0.X = (float)*param_2;
  local_18._s_0.Y = local_18._s_0.X;
  local_18._s_0.Z = local_18._s_0.X;
  SetValue<UE::Math::TVector<float>_>
            (this,param_1,(TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x18,
             (TVector<float> *)&local_18._s_0);
  local_18._s_0.X = (float)*param_3;
  local_18._s_0.Y = local_18._s_0.X;
  local_18._s_0.Z = local_18._s_0.X;
  SetValue<UE::Math::TVector<float>_>
            (this,param_1,(TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x28,
             (TVector<float> *)&local_18._s_0);
  return;
}

// SetWeightedFloatValue @ 14dc19940

int __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
          (FCollectionPropertyFacade *this,FName *param_1,TVector2<float> *param_2)

{
  int iVar1;
  int *piVar2;
  TVector<float>_u_0 local_18;
  
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->field_0x58,*param_1);
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    if (iVar1 != -1) {
      local_18._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_18._s_0.Y = local_18._s_0.X;
      local_18._s_0.Z = local_18._s_0.X;
      SetValue<UE::Math::TVector<float>_>
                (this,iVar1,(TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x18,
                 (TVector<float> *)&local_18._s_0);
      local_18._s_0.X = (param_2->field0_0x0)._s_0.Y;
      local_18._s_0.Y = local_18._s_0.X;
      local_18._s_0.Z = local_18._s_0.X;
      SetValue<UE::Math::TVector<float>_>
                (this,iVar1,(TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x28,
                 (TVector<float> *)&local_18._s_0);
    }
    return iVar1;
  }
  return -1;
}

