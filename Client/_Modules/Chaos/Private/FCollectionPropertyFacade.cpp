// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// SetLowValue<UE::Math::TVector<float>_> @ 1438848e0

void __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetLowValue<UE::Math::TVector<float>_>
          (FCollectionPropertyFacade *this,int param_1,TVector<float> *param_2)

{
  undefined8 uVar1;
  float fVar2;
  TVector<float> *pTVar3;
  ECollectionPropertyFlags *pEVar4;
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
    pEVar4 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                       (&this->field_0x48,param_1);
    if ((*pEVar4 & Dirty) == None) {
      pEVar4 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                         (&this->field_0x48,param_1);
      *pEVar4 = *pEVar4 | Dirty;
    }
  }
  return;
}

// SetValue<UE::Math::TVector<float>_> @ 143884990

void __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
          (FCollectionPropertyFacade *this,int param_1,
          TArrayView<UE::Math::TVector<float>,int> *param_2,TVector<float> *param_3)

{
  undefined8 uVar1;
  float fVar2;
  TVector<float> *pTVar3;
  ECollectionPropertyFlags *pEVar4;
  
  pTVar3 = TArrayView<UE::Math::TVector<float>,int>::operator[](param_2,param_1);
  if ((((param_3->field0_0x0)._s_0.X != (pTVar3->field0_0x0)._s_0.X) ||
      ((param_3->field0_0x0)._s_0.Y != (pTVar3->field0_0x0)._s_0.Y)) ||
     ((param_3->field0_0x0)._s_0.Z != (pTVar3->field0_0x0)._s_0.Z)) {
    uVar1 = *(undefined8 *)&param_3->field0_0x0;
    fVar2 = (param_3->field0_0x0)._s_0.Z;
    pTVar3 = TArrayView<UE::Math::TVector<float>,int>::operator[](param_2,param_1);
    *(undefined8 *)&pTVar3->field0_0x0 = uVar1;
    (pTVar3->field0_0x0)._s_0.Z = fVar2;
    pEVar4 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                       (&this->field_0x48,param_1);
    if ((*pEVar4 & Dirty) == None) {
      pEVar4 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                         (&this->field_0x48,param_1);
      *pEVar4 = *pEVar4 | Dirty;
    }
  }
  return;
}

// FCollectionPropertyFacade @ 14388ab70

FCollectionPropertyFacade * __thiscall
Chaos::Softs::FCollectionPropertyFacade::FCollectionPropertyFacade
          (FCollectionPropertyFacade *this,TSharedPtr<FManagedArrayCollection,1> *param_1,
          ENoInit param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FManagedArrayCollection_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FCollectionPropertyConstFacade::FCollectionPropertyConstFacade
            ((FCollectionPropertyConstFacade *)this,&local_18,NoInit);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)this = &___7FCollectionPropertyFacade_Softs_Chaos__6B_;
  return this;
}

// FCollectionPropertyFacade @ 14388abd0

FCollectionPropertyFacade * __thiscall
Chaos::Softs::FCollectionPropertyFacade::FCollectionPropertyFacade
          (FCollectionPropertyFacade *this,TSharedPtr<FManagedArrayCollection,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FManagedArrayCollection_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FCollectionPropertyConstFacade::FCollectionPropertyConstFacade
            ((FCollectionPropertyConstFacade *)this,&local_18,NoInit);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)this = &___7FCollectionPropertyFacade_Softs_Chaos__6B_;
  FCollectionPropertyConstFacade::UpdateArrays((FCollectionPropertyConstFacade *)this);
  FCollectionPropertyConstFacade::RebuildKeyIndices((FCollectionPropertyConstFacade *)this);
  return this;
}

// ~FCollectionPropertyFacade @ 14388ca60

void __thiscall
Chaos::Softs::FCollectionPropertyFacade::~FCollectionPropertyFacade(FCollectionPropertyFacade *this)

{
  *(undefined4 *)&this->field_0x110 = 0;
  *(undefined ***)this = &___7FCollectionPropertyConstFacade_Softs_Chaos__6B_;
  if (*(void **)&this->field_0x108 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x108);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0xc8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0xb0);
  *(undefined4 *)&this->field_0xa0 = 0;
  if (*(void **)&this->field_0x98 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x98);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x58);
  return;
}

// ClearDirtyFlags @ 1438a8750

void __thiscall
Chaos::Softs::FCollectionPropertyFacade::ClearDirtyFlags(FCollectionPropertyFacade *this)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = *(byte **)&this->field_0x48;
  pbVar2 = pbVar1 + *(int *)&this->field_0x50;
  for (; pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
    *pbVar1 = *pbVar1 & 0x3f;
  }
  return;
}

// EnableFlags @ 1438aed90

void __thiscall
Chaos::Softs::FCollectionPropertyFacade::EnableFlags
          (FCollectionPropertyFacade *this,int param_1,ECollectionPropertyFlags param_2,bool param_3
          )

{
  undefined1 *this_00;
  ECollectionPropertyFlags *pEVar1;
  
  this_00 = &this->field_0x48;
  pEVar1 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[](this_00,param_1);
  if (param_3) {
    if ((*pEVar1 & param_2) != param_2) {
      pEVar1 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                         (this_00,param_1);
      *pEVar1 = *pEVar1 | param_2 | Dirty;
    }
  }
  else if ((*pEVar1 & param_2) != None) {
    pEVar1 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                       (this_00,param_1);
    *pEVar1 = *pEVar1 & ~param_2;
    pEVar1 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                       (this_00,param_1);
    *pEVar1 = *pEVar1 | Dirty;
  }
  return;
}

// SetFlags @ 1438d21c0

void __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetFlags
          (FCollectionPropertyFacade *this,int param_1,ECollectionPropertyFlags param_2)

{
  undefined1 *this_00;
  ECollectionPropertyFlags *pEVar1;
  ECollectionPropertyFlags EVar2;
  
  this_00 = &this->field_0x48;
  pEVar1 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[](this_00,param_1);
  EVar2 = param_2 | ((param_2 & (Dirty|StringDirty|Intrinsic|Animatable|Enabled)) * '\x02' | *pEVar1
                    ) & (Dirty|StringDirty|Intrinsic|Interpolable);
  pEVar1 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[](this_00,param_1);
  if (*pEVar1 != EVar2) {
    pEVar1 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                       (this_00,param_1);
    *pEVar1 = EVar2;
    pEVar1 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                       (this_00,param_1);
    if ((*pEVar1 & Dirty) == None) {
      pEVar1 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                         (this_00,param_1);
      *pEVar1 = *pEVar1 | Dirty;
    }
  }
  return;
}

// SetStringValue @ 1438d4930

void __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetStringValue
          (FCollectionPropertyFacade *this,int param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  ECollectionPropertyFlags *pEVar4;
  bool bVar5;
  
  pFVar3 = TArrayView<FString,int>::operator[]((TArrayView<FString,int> *)&this->field_0x38,param_1)
  ;
  iVar2 = (param_2->Data).ArrayNum;
  iVar1 = (pFVar3->Data).ArrayNum;
  if (iVar1 == iVar2) {
    if (iVar1 < 2) {
      return;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar5 = iVar2 == 0;
  }
  else {
    bVar5 = iVar2 + iVar1 == 1;
  }
  if (!bVar5) {
    pFVar3 = TArrayView<FString,int>::operator[]
                       ((TArrayView<FString,int> *)&this->field_0x38,param_1);
    ::FString::operator=(pFVar3,param_2);
    pEVar4 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                       (&this->field_0x48,param_1);
    if ((*pEVar4 & StringDirty) == None) {
      pEVar4 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                         (&this->field_0x48,param_1);
      *pEVar4 = *pEVar4 | (Dirty|StringDirty);
    }
  }
  return;
}

// SetWeightedFloatValue @ 1438d49f0

void __thiscall
Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
          (FCollectionPropertyFacade *this,int param_1,TVector2<float> *param_2)

{
  TVector<float>_u_0 local_18;
  
  local_18._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_18._s_0.Y = local_18._s_0.X;
  local_18._s_0.Z = local_18._s_0.X;
  SetValue<UE::Math::TVector<float>_>
            (this,param_1,(TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x18,
             (TVector<float> *)&local_18._s_0);
  local_18._s_0.X = (param_2->field0_0x0)._s_0.Y;
  local_18._s_0.Y = local_18._s_0.X;
  local_18._s_0.Z = local_18._s_0.X;
  SetValue<UE::Math::TVector<float>_>
            (this,param_1,(TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x28,
             (TVector<float> *)&local_18._s_0);
  return;
}

// UpdateProperties @ 1438dbb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FCollectionPropertyFacade::UpdateProperties
          (FCollectionPropertyFacade *this,TSharedPtr<FManagedArrayCollection_const_,1> *param_1)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  int *piVar8;
  ECollectionPropertyFlags *pEVar9;
  TVector<float> *pTVar10;
  FString *pFVar11;
  FString *pFVar12;
  int iVar13;
  undefined1 *this_00;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_18c;
  undefined1 local_178 [96];
  int local_118;
  int local_ec;
  void *local_e0;
  undefined4 local_d8;
  FSharedReferencer<1> local_c8;
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_b0;
  void *local_70;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  FCollectionPropertyConstFacade::FCollectionPropertyConstFacade
            ((FCollectionPropertyConstFacade *)local_178,param_1);
  bVar5 = FCollectionPropertyConstFacade::IsValid((FCollectionPropertyConstFacade *)local_178);
  if (bVar5) {
    iVar13 = 0;
    if (0 < local_118 - local_ec) {
      do {
        pFVar7 = TArrayView<FName_const_,int>::operator[]
                           ((TArrayView<FName_const_,int> *)(local_178 + 8),iVar13);
        piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                 ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         *)&this->field_0x58,*pFVar7);
        if ((piVar8 != (int *)0x0) && (iVar2 = *piVar8, iVar2 != -1)) {
          pEVar9 = TArrayView<unsigned_char_const_,int>::operator[]
                             ((TArrayView<unsigned_char_const_,int> *)(local_178 + 0x48),iVar13);
          SetFlags(this,iVar2,*pEVar9);
          pTVar10 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                              ((TArrayView<UE::Math::TVector<float>_const_,int> *)(local_178 + 0x18)
                               ,iVar13);
          uVar1 = *(undefined8 *)&pTVar10->field0_0x0;
          fVar3 = (pTVar10->field0_0x0)._s_0.Z;
          pTVar10 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                              ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x18,iVar2);
          local_198 = uVar1;
          if (((float)uVar1 != (pTVar10->field0_0x0)._s_0.X) ||
             ((local_198._4_4_ = (float)((ulonglong)uVar1 >> 0x20),
              local_198._4_4_ != (pTVar10->field0_0x0)._s_0.Y ||
              (fVar3 != (pTVar10->field0_0x0)._s_0.Z)))) {
            pTVar10 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                                ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x18,iVar2
                                );
            *(undefined8 *)&pTVar10->field0_0x0 = uVar1;
            (pTVar10->field0_0x0)._s_0.Z = fVar3;
            pEVar9 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                               (&this->field_0x48,iVar2);
            if ((*pEVar9 & Dirty) == None) {
              pEVar9 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                                 (&this->field_0x48,iVar2);
              *pEVar9 = *pEVar9 | Dirty;
            }
          }
          this_00 = &this->field_0x48;
          pTVar10 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                              ((TArrayView<UE::Math::TVector<float>_const_,int> *)(local_178 + 0x28)
                               ,iVar13);
          uVar1 = *(undefined8 *)&pTVar10->field0_0x0;
          fVar3 = (pTVar10->field0_0x0)._s_0.Z;
          pTVar10 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                              ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x28,iVar2);
          local_18c = uVar1;
          if ((((float)uVar1 != (pTVar10->field0_0x0)._s_0.X) ||
              (local_18c._4_4_ = (float)((ulonglong)uVar1 >> 0x20),
              local_18c._4_4_ != (pTVar10->field0_0x0)._s_0.Y)) ||
             (fVar3 != (pTVar10->field0_0x0)._s_0.Z)) {
            pTVar10 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                                ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x28,iVar2
                                );
            *(undefined8 *)&pTVar10->field0_0x0 = uVar1;
            (pTVar10->field0_0x0)._s_0.Z = fVar3;
            pEVar9 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                               (this_00,iVar2);
            if ((*pEVar9 & Dirty) == None) {
              pEVar9 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                                 (this_00,iVar2);
              *pEVar9 = *pEVar9 | Dirty;
            }
          }
          pFVar11 = TArrayView<FString_const_,int>::operator[]
                              ((TArrayView<FString_const_,int> *)(local_178 + 0x38),iVar13);
          pFVar12 = TArrayView<FString,int>::operator[]
                              ((TArrayView<FString,int> *)&this->field_0x38,iVar2);
          iVar6 = (pFVar11->Data).ArrayNum;
          iVar4 = (pFVar12->Data).ArrayNum;
          if (iVar4 == iVar6) {
            if (iVar4 < 2) goto LAB_1438dbdc7;
            iVar6 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                               (wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
            bVar5 = iVar6 == 0;
          }
          else {
            bVar5 = iVar4 + iVar6 == 1;
          }
          if (!bVar5) {
            pFVar12 = TArrayView<FString,int>::operator[]
                                ((TArrayView<FString,int> *)&this->field_0x38,iVar2);
            ::FString::operator=(pFVar12,pFVar11);
            pEVar9 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                               (this_00,iVar2);
            if ((*pEVar9 & StringDirty) == None) {
              pEVar9 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                                 (this_00,iVar2);
              *pEVar9 = *pEVar9 | (Dirty|StringDirty);
            }
          }
        }
LAB_1438dbdc7:
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_118 - local_ec);
    }
  }
  local_178._0_8_ = &___7FCollectionPropertyConstFacade_Softs_Chaos__6B_;
  local_68 = 0;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ReferenceController);
  local_d8 = 0;
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_178 + 0x58));
  return;
}

