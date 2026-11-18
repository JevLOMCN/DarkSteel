// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 6

// FBudVectorsFacade @ 14da61ef0

FBudVectorsFacade * __thiscall
PV::Facades::FBudVectorsFacade::FBudVectorsFacade
          (FBudVectorsFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FBudVectorsFacade *pFVar4;
  FValueType *pFVar5;
  FValueType *this_00;
  FName local_18;
  FName local_10;
  
  (this->BudDirection).ConstCollection = param_1;
  pFVar5 = (FValueType *)0x0;
  (this->BudDirection).Collection = param_1;
  (this->BudDirection).Name = AttributeNames::BudDirection;
  (this->BudDirection).Group = GroupNames::PointGroup;
  (this->BudDirection).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BudDirection).DefaultGroupDependency.Number = 0;
  local_18 = AttributeNames::BudDirection;
  local_10 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  this_00 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar5;
  }
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FFVectorArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar5 = (FValueType *)this_00->ManagedArray;
    if (pFVar5 == (FValueType *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBudVectorsFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->BudDirection).AttributeArray =
       (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  (this->BudDirection).ConstAttributeArray =
       (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  return this;
}

// FBudVectorsFacade @ 14da61fd0

FBudVectorsFacade * __thiscall
PV::Facades::FBudVectorsFacade::FBudVectorsFacade
          (FBudVectorsFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FBudVectorsFacade *pFVar5;
  char *pcVar6;
  FName local_18;
  FName local_10;
  
  (this->BudDirection).ConstCollection = param_1;
  (this->BudDirection).Collection = (FManagedArrayCollection *)0x0;
  (this->BudDirection).Name = AttributeNames::BudDirection;
  (this->BudDirection).Group = GroupNames::PointGroup;
  (this->BudDirection).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BudDirection).DefaultGroupDependency.Number = 0;
  (this->BudDirection).AttributeArray =
       (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_18 = AttributeNames::BudDirection;
  local_10 = GroupNames::PointGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '(')) {
    pTVar1 = *(TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> **)
              (pcVar6 + 0x20);
    if (pTVar1 == (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)
                  0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FBudVectorsFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
    (this->BudDirection).ConstAttributeArray = pTVar1;
    return this;
  }
  (this->BudDirection).ConstAttributeArray =
       (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0;
  return this;
}

// GetBudDirection @ 14da94080

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FBudVectorsFacade::GetBudDirection(FBudVectorsFacade *this,int param_1)

{
  TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int iVar2;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  pTVar1 = (this->BudDirection).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0
      ) && (-1 < param_1)) {
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar2) {
      pTVar3 = TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
               ::operator[](&this->BudDirection,param_1);
      return pTVar3;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`PV::Facades::FBudVectorsFacade::GetBudDirection'::__l2::
             _dynamic_atexit_destructor_for__EmptyBudDirections__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyBudDirections;
}

// GetBudDirections @ 14da941e0

TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> * __thiscall
PV::Facades::FBudVectorsFacade::GetBudDirections(FBudVectorsFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  if ((this->BudDirection).ConstAttributeArray !=
      (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    return (this->BudDirection).ConstAttributeArray;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)
             (*pcVar1)();
    return pTVar3;
  }
  return (this->BudDirection).ConstAttributeArray;
}

// IsValid @ 14da9b030

bool __thiscall PV::Facades::FBudVectorsFacade::IsValid(FBudVectorsFacade *this)

{
  return (this->BudDirection).ConstAttributeArray !=
         (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0;
}

// ModifyBudDirections @ 14da9dbb0

TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> * __thiscall
PV::Facades::FBudVectorsFacade::ModifyBudDirections(FBudVectorsFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  if (((this->BudDirection).AttributeArray ==
       (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0) ||
     ((this->BudDirection).Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  ((this->BudDirection).AttributeArray)->field_0x8 = 1;
  return (this->BudDirection).AttributeArray;
}

