// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 6

// SetHighValue<float> @ 14dc311d0

int __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetHighValue<float>
          (FCollectionPropertyFacade *this,FName *param_1,float *param_2)

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
      local_18._s_0.X = *param_2;
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

// SetLowValue<float> @ 14dc31250

int __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetLowValue<float>
          (FCollectionPropertyFacade *this,FName *param_1,float *param_2)

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
      local_18._s_0.X = *param_2;
      local_18._s_0.Y = local_18._s_0.X;
      local_18._s_0.Z = local_18._s_0.X;
      SetValue<UE::Math::TVector<float>_>
                (this,iVar1,(TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x18,
                 (TVector<float> *)&local_18._s_0);
    }
    return iVar1;
  }
  return -1;
}

// SetValue<int> @ 14dc312d0

int __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetValue<int>
          (FCollectionPropertyFacade *this,FName *param_1,int *param_2)

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
      local_18._s_0.X = (float)*param_2;
      local_18._s_0.Y = local_18._s_0.X;
      local_18._s_0.Z = local_18._s_0.X;
      SetValue<UE::Math::TVector<float>_>
                (this,iVar1,(TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x18,
                 (TVector<float> *)&local_18._s_0);
      local_18._s_0.X = (float)*param_2;
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

// SetValue<float> @ 14dc31380

int __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetValue<float>
          (FCollectionPropertyFacade *this,FName *param_1,float *param_2)

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
      local_18._s_0.X = *param_2;
      local_18._s_0.Y = local_18._s_0.X;
      local_18._s_0.Z = local_18._s_0.X;
      SetValue<UE::Math::TVector<float>_>
                (this,iVar1,(TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x18,
                 (TVector<float> *)&local_18._s_0);
      local_18._s_0.X = *param_2;
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

// SetValue<UE::Math::TVector<float>_> @ 14dc31430

int __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
          (FCollectionPropertyFacade *this,FName *param_1,TVector<float> *param_2)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  TVector<float> *pTVar5;
  float fStack_24;
  
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->field_0x58,*param_1);
  if (piVar4 == (int *)0x0) {
    return -1;
  }
  iVar2 = *piVar4;
  if (iVar2 != -1) {
    fVar3 = (param_2->field0_0x0)._s_0.Z;
    uVar1 = *(undefined8 *)&param_2->field0_0x0;
    pTVar5 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                       ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x18,iVar2);
    if ((((float)uVar1 != (pTVar5->field0_0x0)._s_0.X) ||
        (fStack_24 = (float)((ulonglong)uVar1 >> 0x20), fStack_24 != (pTVar5->field0_0x0)._s_0.Y))
       || (fVar3 != (pTVar5->field0_0x0)._s_0.Z)) {
      pTVar5 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                         ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x18,iVar2);
      *(undefined8 *)&pTVar5->field0_0x0 = uVar1;
      (pTVar5->field0_0x0)._s_0.Z = fVar3;
      EnableFlags(this,iVar2,Dirty,true);
    }
    uVar1 = *(undefined8 *)&param_2->field0_0x0;
    fVar3 = (param_2->field0_0x0)._s_0.Z;
    pTVar5 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                       ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x28,iVar2);
    if ((((float)uVar1 != (pTVar5->field0_0x0)._s_0.X) ||
        (fStack_24 = (float)((ulonglong)uVar1 >> 0x20), fStack_24 != (pTVar5->field0_0x0)._s_0.Y))
       || (fVar3 != (pTVar5->field0_0x0)._s_0.Z)) {
      pTVar5 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                         ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x28,iVar2);
      *(undefined8 *)&pTVar5->field0_0x0 = uVar1;
      (pTVar5->field0_0x0)._s_0.Z = fVar3;
      EnableFlags(this,iVar2,Dirty,true);
    }
    return iVar2;
  }
  return -1;
}

// SetStringValue @ 14dc59990

int __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetStringValue
          (FCollectionPropertyFacade *this,FName *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  FString *pFVar5;
  bool bVar6;
  
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->field_0x58,*param_1);
  if (piVar4 == (int *)0x0) {
    return -1;
  }
  iVar1 = *piVar4;
  if (iVar1 != -1) {
    pFVar5 = TArrayView<FString,int>::operator[]((TArrayView<FString,int> *)&this->field_0x38,iVar1)
    ;
    iVar3 = (param_2->Data).ArrayNum;
    iVar2 = (pFVar5->Data).ArrayNum;
    if (iVar2 == iVar3) {
      if (iVar2 < 2) {
        return iVar1;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
    }
    else {
      bVar6 = iVar3 + iVar2 == 1;
    }
    if (!bVar6) {
      pFVar5 = TArrayView<FString,int>::operator[]
                         ((TArrayView<FString,int> *)&this->field_0x38,iVar1);
      ::FString::operator=(pFVar5,param_2);
      EnableFlags(this,iVar1,StringDirty,true);
    }
    return iVar1;
  }
  return -1;
}

