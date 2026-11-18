// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// FCollectionPropertyMutableFacade @ 14388ac40

FCollectionPropertyMutableFacade * __thiscall
Chaos::Softs::FCollectionPropertyMutableFacade::FCollectionPropertyMutableFacade
          (FCollectionPropertyMutableFacade *this,TSharedPtr<FManagedArrayCollection,1> *param_1)

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
  *(undefined ***)this = &___7FCollectionPropertyMutableFacade_Softs_Chaos__6B_;
  FCollectionPropertyConstFacade::UpdateArrays((FCollectionPropertyConstFacade *)this);
  FCollectionPropertyConstFacade::RebuildKeyIndices((FCollectionPropertyConstFacade *)this);
  return this;
}

// ~FCollectionPropertyMutableFacade @ 14388ca70

void __thiscall
Chaos::Softs::FCollectionPropertyMutableFacade::~FCollectionPropertyMutableFacade
          (FCollectionPropertyMutableFacade *this)

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

// AddProperties @ 14389b310

int __thiscall
Chaos::Softs::FCollectionPropertyMutableFacade::AddProperties
          (FCollectionPropertyMutableFacade *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1
          ,ECollectionPropertyFlags param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FManagedArrayCollection *this_00;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint local_res10 [6];
  longlong local_50;
  uint *local_48;
  
  iVar7 = param_1->ArrayNum;
  if (iVar7 == 0) {
    return -1;
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
  this_00 = *(FManagedArrayCollection **)&this->field_0xa8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (FManagedArrayCollection *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  uVar8 = FManagedArrayCollection::AddElements(this_00,iVar7,PropertyFacadeNames::PropertyGroup);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FCollectionPropertyConstFacade::UpdateArrays((FCollectionPropertyConstFacade *)this);
  local_res10[0] = uVar8;
  while( true ) {
    if ((int)(iVar7 + uVar8) <= (int)local_res10[0]) {
      return uVar8;
    }
    uVar10 = local_res10[0] - uVar8;
    uVar9 = 0;
    if ((int)uVar10 < param_1->ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    uVar9 = local_res10[0];
    uVar2 = *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 8);
    uVar10 = 0;
    if ((int)local_res10[0] < *(int *)&this->field_0x10) {
      uVar10 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    *(undefined8 *)(*(longlong *)&this->field_0x8 + (longlong)(int)uVar9 * 8) = uVar2;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    lVar11 = (longlong)(int)local_res10[0];
    uVar9 = 0;
    if ((int)local_res10[0] < *(int *)&this->field_0x30) {
      uVar9 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    lVar3 = *(longlong *)&this->field_0x28;
    *(undefined8 *)(lVar3 + lVar11 * 0xc) = uVar2;
    *(undefined4 *)(lVar3 + 8 + lVar11 * 0xc) = uVar5;
    lVar11 = (longlong)(int)local_res10[0];
    uVar9 = 0;
    if ((int)local_res10[0] < *(int *)&this->field_0x20) {
      uVar9 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) break;
    lVar3 = *(longlong *)&this->field_0x18;
    *(undefined8 *)(lVar3 + lVar11 * 0xc) = uVar2;
    *(undefined4 *)(lVar3 + 8 + lVar11 * 0xc) = uVar5;
    lVar11 = (longlong)(int)local_res10[0];
    uVar9 = 0;
    if ((int)local_res10[0] < *(int *)&this->field_0x50) {
      uVar9 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    *(ECollectionPropertyFlags *)(lVar11 + *(longlong *)&this->field_0x48) = param_2;
    lVar11 = (longlong)(int)local_res10[0];
    uVar9 = 0;
    if ((int)local_res10[0] < *(int *)&this->field_0x10) {
      uVar9 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    local_50 = *(longlong *)&this->field_0x8 + lVar11 * 8;
    local_48 = local_res10;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,int_&>_>
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->field_0x58,(TPairInitializer<FName_const_&,int_&> *)(local_res10 + 4),
               (bool *)&local_50);
    local_res10[0] = local_res10[0] + 1;
  }
  pcVar4 = (code *)swi(3);
  iVar7 = (*pcVar4)();
  return iVar7;
}

// AddProperties @ 14389b690

int __thiscall
Chaos::Softs::FCollectionPropertyMutableFacade::AddProperties
          (FCollectionPropertyMutableFacade *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1
          ,bool param_2,bool param_3,bool param_4)

{
  int iVar1;
  
  iVar1 = AddProperties(this,param_1,param_2 | param_3 * '\x02' | param_4 << 4);
  return iVar1;
}

// AddProperty @ 14389b6b0

int __thiscall
Chaos::Softs::FCollectionPropertyMutableFacade::AddProperty
          (FCollectionPropertyMutableFacade *this,FName *param_1,ECollectionPropertyFlags param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FManagedArrayCollection *this_00;
  FName FVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  TVector<float> *pTVar8;
  ECollectionPropertyFlags *pEVar9;
  TPairInitializer<FName_const_&,int_const_&> local_res8;
  int local_res18 [4];
  FName *local_38;
  int *local_30;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
  this_00 = *(FManagedArrayCollection **)&this->field_0xa8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FManagedArrayCollection *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  local_res18[0] =
       FManagedArrayCollection::AddElements(this_00,1,PropertyFacadeNames::PropertyGroup);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FCollectionPropertyConstFacade::UpdateArrays((FCollectionPropertyConstFacade *)this);
  FVar2 = *param_1;
  pFVar7 = TArrayView<FName,int>::operator[]
                     ((TArrayView<FName,int> *)&this->field_0x8,local_res18[0]);
  *pFVar7 = FVar2;
  uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_res8.Value = (int *)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  pTVar8 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                     ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x28,local_res18[0]);
  *(int **)&pTVar8->field0_0x0 = local_res8.Value;
  (pTVar8->field0_0x0)._s_0.Z = (float)uVar4;
  pTVar8 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                     ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x18,local_res18[0]);
  *(int **)&pTVar8->field0_0x0 = local_res8.Value;
  (pTVar8->field0_0x0)._s_0.Z = (float)uVar4;
  pEVar9 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                     (&this->field_0x48,local_res18[0]);
  *pEVar9 = param_2;
  local_38 = TArrayView<FName_const_,int>::operator[]
                       ((TArrayView<FName_const_,int> *)&this->field_0x8,local_res18[0]);
  local_30 = local_res18;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->field_0x58,&local_res8,(bool *)&local_38);
  return local_res18[0];
}

// AddProperty @ 14389b7f0

int __thiscall
Chaos::Softs::FCollectionPropertyMutableFacade::AddProperty
          (FCollectionPropertyMutableFacade *this,FName *param_1,bool param_2,bool param_3,
          bool param_4)

{
  int iVar1;
  
  iVar1 = AddProperty(this,param_1,param_2 | param_3 * '\x02' | param_4 << 4);
  return iVar1;
}

// AddStringValue @ 14389baa0

int __thiscall
Chaos::Softs::FCollectionPropertyMutableFacade::AddStringValue
          (FCollectionPropertyMutableFacade *this,FName *param_1,FString *param_2,
          ECollectionPropertyFlags param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = AddProperty(this,param_1,param_3);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->field_0x58,*param_1);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    FCollectionPropertyFacade::SetStringValue((FCollectionPropertyFacade *)this,*piVar2,param_2);
  }
  return iVar1;
}

// AddStringValue @ 14389bb10

int __thiscall
Chaos::Softs::FCollectionPropertyMutableFacade::AddStringValue
          (FCollectionPropertyMutableFacade *this,FName *param_1,FString *param_2,bool param_3,
          bool param_4,bool param_5)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = AddProperty(this,param_1,param_4 * '\x02' | param_5 << 4 | param_3);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->field_0x58,*param_1);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    FCollectionPropertyFacade::SetStringValue((FCollectionPropertyFacade *)this,*piVar2,param_2);
  }
  return iVar1;
}

// AddWeightedFloatValue @ 14389bff0

int __thiscall
Chaos::Softs::FCollectionPropertyMutableFacade::AddWeightedFloatValue
          (FCollectionPropertyMutableFacade *this,FName *param_1,TVector2<float> *param_2,
          ECollectionPropertyFlags param_3)

{
  int iVar1;
  
  iVar1 = AddProperty(this,param_1,param_3);
  FCollectionPropertyFacade::SetWeightedFloatValue((FCollectionPropertyFacade *)this,iVar1,param_2);
  return iVar1;
}

// AddWeightedFloatValue @ 14389c040

int __thiscall
Chaos::Softs::FCollectionPropertyMutableFacade::AddWeightedFloatValue
          (FCollectionPropertyMutableFacade *this,FName *param_1,TVector2<float> *param_2,
          bool param_3,bool param_4,bool param_5)

{
  int iVar1;
  
  iVar1 = AddProperty(this,param_1,param_4 * '\x02' | param_5 << 4 | param_3);
  FCollectionPropertyFacade::SetWeightedFloatValue((FCollectionPropertyFacade *)this,iVar1,param_2);
  return iVar1;
}

// Append @ 14389c7b0

void __thiscall
Chaos::Softs::FCollectionPropertyMutableFacade::Append
          (FCollectionPropertyMutableFacade *this,
          TSharedPtr<FManagedArrayCollection_const_,1> *param_1,bool param_2)

{
  Update(this,param_1,param_2 * '\x02' | AppendNewProperties);
  return;
}

// Copy @ 1438a9f10

void __thiscall
Chaos::Softs::FCollectionPropertyMutableFacade::Copy
          (FCollectionPropertyMutableFacade *this,FManagedArrayCollection *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  FManagedArrayBase *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  TManagedArray<FName> *pTVar11;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar12;
  FManagedArrayCollection *pFVar13;
  FValueType *pFVar14;
  FValueType *pFVar15;
  FValueType *pFVar16;
  uint uVar17;
  bool bVar18;
  FName local_70;
  FName local_68;
  TSharedPtr<FManagedArrayCollection,1> local_60;
  TSharedPtr<FManagedArrayCollection,1> local_50;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId271,"FCollectionPropertyMutableFacade_Copy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionPropertyFacade.cpp"
               ,0x10f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId271);
  }
  bVar6 = FManagedArrayCollection::HasAttribute
                    (param_1,PropertyFacadeNames::KeyNameName,PropertyFacadeNames::PropertyGroup);
  if ((((!bVar6) ||
       (bVar6 = FManagedArrayCollection::HasAttribute
                          (param_1,PropertyFacadeNames::LowValueName,
                           PropertyFacadeNames::PropertyGroup), !bVar6)) ||
      (bVar6 = FManagedArrayCollection::HasAttribute
                         (param_1,PropertyFacadeNames::HighValueName,
                          PropertyFacadeNames::PropertyGroup), !bVar6)) ||
     ((bVar6 = FManagedArrayCollection::HasAttribute
                         (param_1,PropertyFacadeNames::StringValueName,
                          PropertyFacadeNames::PropertyGroup), !bVar6 ||
      (bVar6 = FManagedArrayCollection::HasAttribute
                         (param_1,PropertyFacadeNames::FlagsName,PropertyFacadeNames::PropertyGroup)
      , !bVar6)))) {
    pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
    plVar4 = *(longlong **)&this->field_0xa8;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar4 == (longlong *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    goto LAB_1438aa4e0;
  }
  bVar6 = false;
  pTVar11 = FManagedArrayCollection::FindAttributeTyped<FName>
                      (param_1,PropertyFacadeNames::KeyNameName,PropertyFacadeNames::PropertyGroup);
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
  lVar2 = *(longlong *)&this->field_0xa8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar2 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_70 = PropertyFacadeNames::KeyNameName;
  local_68 = PropertyFacadeNames::PropertyGroup;
  pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)(lVar2 + 8),(TTuple<FName,FName> *)&local_70);
  pFVar16 = (FValueType *)0x0;
  pFVar14 = (FValueType *)&pTVar12->field_0x10;
  if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar14 = pFVar16;
  }
  pFVar15 = pFVar16;
  if ((pFVar14 != (FValueType *)0x0) && (pFVar14->ArrayType == FNameType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar14);
    pFVar15 = (FValueType *)pFVar14->ManagedArray;
    if ((pFVar15 == (FValueType *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(bool *)&(pFVar15->GroupIndexDependency).Number = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((pTVar11 == (TManagedArray<FName> *)0x0) || (pFVar15 == (FValueType *)0x0)) {
LAB_1438aa2a0:
    pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
    local_60.Object = *(FManagedArrayCollection **)&this->field_0xa8;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_60.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar13 = TSharedPtr<FManagedArrayCollection,1>::operator->(&local_60);
    FManagedArrayCollection::CopyAttribute
              (pFVar13,param_1,PropertyFacadeNames::KeyNameName,PropertyFacadeNames::PropertyGroup);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    iVar8 = (**(code **)(*(longlong *)pFVar15 + 0x60))(pFVar15);
    iVar9 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
    if (iVar9 != iVar8) goto LAB_1438aa2a0;
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId285,"FCollectionPropertyMutableFacade_Copy_CompareKeys",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionPropertyFacade.cpp"
                 ,0x11d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId285);
    }
    iVar8 = (**(code **)(*(longlong *)pFVar15 + 0x60))(pFVar15);
    pFVar14 = pFVar16;
    bVar6 = true;
    if (0 < iVar8) {
      do {
        uVar17 = (uint)pFVar14;
        uVar10 = 0;
        if ((int)uVar17 <
            *(int *)&(pFVar15->SharedManagedArray).SharedReferenceCount.ReferenceController) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (pFVar15->SharedManagedArray).Object;
        uVar10 = 0;
        if ((int)uVar17 < *(int *)&pTVar11->field_0x18) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(longlong *)(*(longlong *)&pTVar11->field_0x10 + (longlong)pFVar16 * 8) !=
            (&pFVar3->_padding_)[(longlong)pFVar16]) {
          bVar6 = false;
          break;
        }
        pFVar14 = (FValueType *)(ulonglong)(uVar17 + 1);
        pFVar16 = (FValueType *)&pFVar16->field_0x1;
        iVar8 = (**(code **)(*(longlong *)pFVar15 + 0x60))(pFVar15);
        bVar6 = true;
      } while ((int)(uVar17 + 1) < iVar8);
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar6) goto LAB_1438aa2a0;
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
  local_50.Object = *(FManagedArrayCollection **)&this->field_0xa8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar13 = TSharedPtr<FManagedArrayCollection,1>::operator->(&local_50);
  FManagedArrayCollection::CopyAttribute
            (pFVar13,param_1,PropertyFacadeNames::LowValueName,PropertyFacadeNames::PropertyGroup);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
  pFVar13 = *(FManagedArrayCollection **)&this->field_0xa8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar13 == (FManagedArrayCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FManagedArrayCollection::CopyAttribute
            (pFVar13,param_1,PropertyFacadeNames::HighValueName,PropertyFacadeNames::PropertyGroup);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
  pFVar13 = *(FManagedArrayCollection **)&this->field_0xa8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar13 == (FManagedArrayCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FManagedArrayCollection::CopyAttribute
            (pFVar13,param_1,PropertyFacadeNames::StringValueName,PropertyFacadeNames::PropertyGroup
            );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
  pFVar13 = *(FManagedArrayCollection **)&this->field_0xa8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar13 == (FManagedArrayCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FManagedArrayCollection::CopyAttribute
            (pFVar13,param_1,PropertyFacadeNames::FlagsName,PropertyFacadeNames::PropertyGroup);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FCollectionPropertyConstFacade::UpdateArrays((FCollectionPropertyConstFacade *)this);
  if (!bVar6) {
    FCollectionPropertyConstFacade::RebuildKeyIndices((FCollectionPropertyConstFacade *)this);
  }
LAB_1438aa4e0:
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DefineSchema @ 1438ace60

void __thiscall
Chaos::Softs::FCollectionPropertyMutableFacade::DefineSchema(FCollectionPropertyMutableFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FManagedArrayCollection *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar8;
  bool bVar9;
  undefined2 local_f0;
  undefined2 uStack_ee;
  undefined2 local_e4;
  undefined2 uStack_e2;
  undefined2 local_d8;
  undefined2 uStack_d6;
  undefined2 local_cc;
  undefined2 uStack_ca;
  undefined2 local_c0;
  undefined2 uStack_be;
  FConstructionParameters local_a8;
  FConstructionParameters local_98;
  FConstructionParameters local_88;
  FConstructionParameters local_78;
  FConstructionParameters local_68;
  FName local_58;
  FName local_50;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId191,"FCollectionPropertyMutableFacade_DefineSchema",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionPropertyFacade.cpp"
               ,0xbf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId191);
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
  pFVar2 = *(FManagedArrayCollection **)&this->field_0xa8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FManagedArrayCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_a8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_a8.GroupIndexDependency.Number = 0;
  local_a8.Saved = true;
  local_a8.bAllowCircularDependency = false;
  local_a8._10_2_ = uStack_ee;
  FManagedArrayCollection::AddAttribute<FName>
            (pFVar2,PropertyFacadeNames::KeyNameName,PropertyFacadeNames::PropertyGroup,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
  pFVar2 = *(FManagedArrayCollection **)&this->field_0xa8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FManagedArrayCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_98.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_98.GroupIndexDependency.Number = 0;
  local_98.Saved = true;
  local_98.bAllowCircularDependency = false;
  local_98._10_2_ = uStack_e2;
  FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
            (pFVar2,PropertyFacadeNames::LowValueName,PropertyFacadeNames::PropertyGroup,&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
  pFVar2 = *(FManagedArrayCollection **)&this->field_0xa8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FManagedArrayCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_88.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_88.GroupIndexDependency.Number = 0;
  local_88.Saved = true;
  local_88.bAllowCircularDependency = false;
  local_88._10_2_ = uStack_d6;
  FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
            (pFVar2,PropertyFacadeNames::HighValueName,PropertyFacadeNames::PropertyGroup,&local_88)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
  pFVar2 = *(FManagedArrayCollection **)&this->field_0xa8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FManagedArrayCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_78.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_78.GroupIndexDependency.Number = 0;
  local_78.Saved = true;
  local_78.bAllowCircularDependency = false;
  local_78._10_2_ = uStack_ca;
  FManagedArrayCollection::AddAttribute<FString>
            (pFVar2,PropertyFacadeNames::StringValueName,PropertyFacadeNames::PropertyGroup,
             &local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
  pFVar2 = *(FManagedArrayCollection **)&this->field_0xa8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FManagedArrayCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar6 = PropertyFacadeNames::FlagsName;
  FVar5 = PropertyFacadeNames::PropertyGroup;
  local_68.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_68.GroupIndexDependency.Number = 0;
  local_68.Saved = true;
  local_68.bAllowCircularDependency = false;
  local_68._10_2_ = uStack_be;
  bVar7 = FManagedArrayCollection::HasAttribute
                    (pFVar2,PropertyFacadeNames::FlagsName,PropertyFacadeNames::PropertyGroup);
  if (!bVar7) {
    FManagedArrayCollection::AddNewAttributeImpl<unsigned_char>(pFVar2,FVar6,FVar5,&local_68);
  }
  bVar7 = FManagedArrayCollection::HasAttribute(pFVar2,FVar6,FVar5);
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("HasAttribute(Name, Group)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x164,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_58 = FVar6;
  local_50 = FVar5;
  pTVar8 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_58);
  if ((pTVar8 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pTVar8->field_0x10 != '\x10') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSameType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x315,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)&pTVar8->field_0x10);
  lVar3 = *(longlong *)&pTVar8->field_0x30;
  if ((lVar3 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined1 *)(lVar3 + 8) = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FCollectionPropertyConstFacade::UpdateArrays((FCollectionPropertyConstFacade *)this);
  FCollectionPropertyConstFacade::RebuildKeyIndices((FCollectionPropertyConstFacade *)this);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PostSerialize @ 1438c53a0

void __thiscall
Chaos::Softs::FCollectionPropertyMutableFacade::PostSerialize
          (FCollectionPropertyMutableFacade *this,FArchive *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TManagedArray<FString> *pTVar8;
  FName *pFVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FName local_res18;
  undefined2 local_40;
  undefined2 uStack_3e;
  FConstructionParameters local_38;
  
  if ((param_1->field_0x28 & 1) != 0) {
    if ((*(longlong *)&this->field_0xa8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = FManagedArrayCollection::FindAttributeTyped<FString>
                       (*(FManagedArrayCollection **)&this->field_0xa8,PropertyFacadeNames::KeyName,
                        PropertyFacadeNames::PropertyGroup);
    if (pTVar8 != (TManagedArray<FString> *)0x0) {
      if (*(int *)&this->field_0x10 == 0) {
        pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
        pFVar2 = *(FManagedArrayCollection **)&this->field_0xa8;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pFVar2 == (FManagedArrayCollection *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar12 = 0;
        local_38.GroupIndexDependency.ComparisonIndex.Value = 0;
        local_38.GroupIndexDependency.Number = 0;
        local_38.Saved = true;
        local_38.bAllowCircularDependency = false;
        local_38._10_2_ = uStack_3e;
        FManagedArrayCollection::AddAttribute<FName>
                  (pFVar2,PropertyFacadeNames::KeyNameName,PropertyFacadeNames::PropertyGroup,
                   &local_38);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        FCollectionPropertyConstFacade::UpdateArrays((FCollectionPropertyConstFacade *)this);
        iVar10 = *(int *)&this->field_0x10;
        iVar6 = (**(code **)(*(longlong *)pTVar8 + 0x60))(pTVar8);
        if ((iVar6 != iVar10) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InKeyArray->Num() == KeyNameArray.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionPropertyFacade.cpp"
                               ,0x1b9,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = uVar12;
        if (0 < *(int *)&this->field_0x10) {
          do {
            uVar11 = (uint)uVar12;
            uVar7 = 0;
            if ((int)uVar11 < *(int *)&pTVar8->field_0x18) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar6 = *(int *)(uVar13 + 8 + *(longlong *)&pTVar8->field_0x10);
            iVar10 = iVar6 + -1;
            if (iVar6 == 0) {
              iVar10 = 0;
            }
            pFVar9 = ::FName::FName(&local_res18,iVar10,
                                    *(wchar_t **)(uVar13 + *(longlong *)&pTVar8->field_0x10),
                                    FNAME_Add);
            FVar3 = *pFVar9;
            pFVar9 = TArrayView<FName,int>::operator[]
                               ((TArrayView<FName,int> *)&this->field_0x8,uVar11);
            uVar12 = (ulonglong)(uVar11 + 1);
            *pFVar9 = FVar3;
            uVar13 = uVar13 + 0x10;
          } while ((int)(uVar11 + 1) < *(int *)&this->field_0x10);
        }
        FCollectionPropertyConstFacade::RebuildKeyIndices((FCollectionPropertyConstFacade *)this);
      }
      pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
      pFVar2 = *(FManagedArrayCollection **)&this->field_0xa8;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar2 == (FManagedArrayCollection *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FManagedArrayCollection::RemoveAttribute
                (pFVar2,PropertyFacadeNames::KeyName,PropertyFacadeNames::PropertyGroup);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    }
  }
  return;
}

// Update @ 1438da570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FCollectionPropertyMutableFacade::Update
          (FCollectionPropertyMutableFacade *this,
          TSharedPtr<FManagedArrayCollection_const_,1> *param_1,
          ECollectionPropertyUpdateFlags param_2)

{
  FScriptContainerElement *pFVar1;
  ECollectionPropertyFlags EVar2;
  float fVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  ECollectionPropertyFlags *pEVar10;
  int *piVar11;
  TVector<float> *pTVar12;
  FString *pFVar13;
  ECollectionPropertyUpdateFlags EVar14;
  int iVar15;
  undefined1 auStack_1f8 [32];
  int *local_1d8;
  FScriptContainerElement *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  ECollectionPropertyUpdateFlags local_1a8;
  int local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  int local_190;
  TVector<float>_u_0 local_18c;
  undefined1 local_178 [88];
  TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> local_120;
  FSharedReferencer<1> local_c8;
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_b0;
  void *local_70;
  undefined4 local_68;
  ulonglong local_58;
  
  if (param_2 != None) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_1f8;
    if (param_2 == UpdateExistingProperties) {
      FCollectionPropertyFacade::UpdateProperties((FCollectionPropertyFacade *)this,param_1);
    }
    else {
      EVar14 = param_2 & AppendNewProperties;
      local_1a8 = EVar14;
      FCollectionPropertyConstFacade::FCollectionPropertyConstFacade
                ((FCollectionPropertyConstFacade *)local_178,param_1);
      bVar7 = FCollectionPropertyConstFacade::IsValid((FCollectionPropertyConstFacade *)local_178);
      if (bVar7) {
        DefineSchema(this);
        local_190 = *(int *)&this->field_0x60 - *(int *)&this->field_0x8c;
        if ((EVar14 != None) || ((param_2 & UpdateExistingProperties) != None)) {
          iVar15 = 0;
          if (0 < (int)(local_120.Pairs.Elements._8_4_ - local_120.Pairs.Elements._52_4_)) {
            do {
              pFVar9 = TArrayView<FName_const_,int>::operator[]
                                 ((TArrayView<FName_const_,int> *)(local_178 + 8),iVar15);
              pEVar10 = TArrayView<unsigned_char_const_,int>::operator[]
                                  ((TArrayView<unsigned_char_const_,int> *)(local_178 + 0x48),iVar15
                                  );
              EVar2 = *pEVar10;
              piVar11 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                *)&this->field_0x58,*pFVar9);
              if ((piVar11 == (int *)0x0) || (iVar8 = *piVar11, EVar14 = local_1a8, iVar8 == -1)) {
                if (EVar14 != None) {
                  iVar8 = AddProperty(this,pFVar9,EVar2);
                  goto LAB_1438da6b0;
                }
              }
              else if ((param_2 & UpdateExistingProperties) != None) {
                FCollectionPropertyFacade::SetFlags((FCollectionPropertyFacade *)this,iVar8,EVar2);
LAB_1438da6b0:
                pTVar12 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                                    ((TArrayView<UE::Math::TVector<float>_const_,int> *)
                                     (local_178 + 0x18),iVar15);
                local_18c._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
                local_18c._0_8_ = *(undefined8 *)&pTVar12->field0_0x0;
                FCollectionPropertyFacade::SetLowValue<UE::Math::TVector<float>_>
                          ((FCollectionPropertyFacade *)this,iVar8,(TVector<float> *)&local_18c._s_0
                          );
                pTVar12 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                                    ((TArrayView<UE::Math::TVector<float>_const_,int> *)
                                     (local_178 + 0x28),iVar15);
                pFVar1 = *(FScriptContainerElement **)&pTVar12->field0_0x0;
                fVar3 = (pTVar12->field0_0x0)._s_0.Z;
                pTVar12 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                                    ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x28,
                                     iVar8);
                local_1a0 = pFVar1;
                if (((SUB84(pFVar1,0) != (pTVar12->field0_0x0)._s_0.X) ||
                    (local_1a0._4_4_ = (float)((ulonglong)pFVar1 >> 0x20),
                    local_1a0._4_4_ != (pTVar12->field0_0x0)._s_0.Y)) ||
                   (fVar3 != (pTVar12->field0_0x0)._s_0.Z)) {
                  pTVar12 = TArrayView<UE::Math::TVector<float>,int>::operator[]
                                      ((TArrayView<UE::Math::TVector<float>,int> *)&this->field_0x28
                                       ,iVar8);
                  *(FScriptContainerElement **)&pTVar12->field0_0x0 = pFVar1;
                  (pTVar12->field0_0x0)._s_0.Z = fVar3;
                  pEVar10 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::operator[]
                                      (&this->field_0x48,iVar8);
                  if ((*pEVar10 & Dirty) == None) {
                    pEVar10 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::
                              operator[](&this->field_0x48,iVar8);
                    *pEVar10 = *pEVar10 | Dirty;
                  }
                }
                pFVar13 = TArrayView<FString_const_,int>::operator[]
                                    ((TArrayView<FString_const_,int> *)(local_178 + 0x38),iVar15);
                FCollectionPropertyFacade::SetStringValue
                          ((FCollectionPropertyFacade *)this,iVar8,pFVar13);
                EVar14 = local_1a8;
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < (int)(local_120.Pairs.Elements._8_4_ - local_120.Pairs.Elements._52_4_
                                   ));
          }
        }
        iVar15 = local_190;
        if ((param_2 & (DisableMissingProperties|RemoveMissingProperties)) != None) {
          local_1a0 = (FScriptContainerElement *)0x0;
          local_198 = 0;
          local_1a4 = 0;
          if (0 < local_190) {
            do {
              pFVar9 = TArrayView<FName_const_,int>::operator[]
                                 ((TArrayView<FName_const_,int> *)&this->field_0x8,local_1a4);
              piVar11 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        ::Find(&local_120,*pFVar9);
              iVar8 = local_1a4;
              if ((piVar11 == (int *)0x0) || (*piVar11 == -1)) {
                if ((param_2 & RemoveMissingProperties) == None) {
                  if (((param_2 & DisableMissingProperties) != None) &&
                     (pEVar10 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::
                                operator[](&this->field_0x48,local_1a4),
                     (*pEVar10 & Enabled) != None)) {
                    pEVar10 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::
                              operator[](&this->field_0x48,iVar8);
                    *pEVar10 = *pEVar10 & ~Enabled;
                    pEVar10 = TArrayView<enum_Chaos::Softs::ECollectionPropertyFlags,int>::
                              operator[](&this->field_0x48,iVar8);
                    *pEVar10 = *pEVar10 | Dirty;
                  }
                }
                else {
                  if (local_1a0 <= (FScriptContainerElement *)&local_1a4) {
                    if ((FScriptContainerElement *)&local_1a4 <
                        local_1a0 + (longlong)local_198._4_4_ * 4) {
                      local_1c0 = (longlong)(int)local_198;
                      local_1b8 = 4;
                      local_1d8 = &local_1a4;
                      local_1d0 = local_1a0;
                      local_1c8 = (longlong)local_198._4_4_;
                      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        );
                      if (bVar7) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                    }
                  }
                  iVar8 = (int)local_198;
                  if ((int)local_198 == local_198._4_4_) {
                    iVar8 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,(ForAnyElementType *)&local_1a0,
                                       (int *)((longlong)&local_198 + 4));
                  }
                  local_198 = CONCAT44(local_198._4_4_,iVar8 + 1);
                  *(int *)(local_1a0 + (longlong)iVar8 * 4) = local_1a4;
                }
              }
              local_1a4 = local_1a4 + 1;
            } while (local_1a4 < iVar15);
            if ((int)local_198 != 0) {
              pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0xb0;
              plVar5 = *(longlong **)&this->field_0xa8;
              if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((plVar5 == (longlong *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              (**(code **)(*plVar5 + 0x28))
                        (plVar5,&PropertyFacadeNames::PropertyGroup,&local_1a0,0x101);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar4);
              FCollectionPropertyConstFacade::UpdateArrays((FCollectionPropertyConstFacade *)this);
              FCollectionPropertyConstFacade::RebuildKeyIndices
                        ((FCollectionPropertyConstFacade *)this);
            }
          }
          if (local_1a0 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0);
          }
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
      local_120.Pairs.HashSize = 0;
      if (local_120.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_120.Pairs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_120);
    }
  }
  return;
}

