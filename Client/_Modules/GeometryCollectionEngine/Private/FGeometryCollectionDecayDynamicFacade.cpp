// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 6

// FGeometryCollectionDecayDynamicFacade @ 1463a14d0

FGeometryCollectionDecayDynamicFacade * __thiscall
FGeometryCollectionDecayDynamicFacade::FGeometryCollectionDecayDynamicFacade
          (FGeometryCollectionDecayDynamicFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FGeometryCollectionDecayDynamicFacade *pFVar4;
  FValueType *pFVar5;
  FValueType *this_00;
  FName local_18;
  FName local_10;
  
  (this->DecayAttribute).ConstCollection = param_1;
  pFVar5 = (FValueType *)0x0;
  (this->DecayAttribute).Collection = param_1;
  (this->DecayAttribute).Name = DecayAttributeName;
  (this->DecayAttribute).Group = FTransformCollection::TransformGroup;
  (this->DecayAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->DecayAttribute).DefaultGroupDependency.Number = 0;
  local_18 = DecayAttributeName;
  local_10 = FTransformCollection::TransformGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  this_00 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar5;
  }
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar5 = (FValueType *)this_00->ManagedArray;
    if (pFVar5 == (FValueType *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FGeometryCollectionDecayDynamicFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->DecayAttribute).AttributeArray = (TManagedArray<float> *)pFVar5;
  (this->DecayAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar5;
  return this;
}

// AddAttributes @ 1463a91e0

void __thiscall
FGeometryCollectionDecayDynamicFacade::AddAttributes(FGeometryCollectionDecayDynamicFacade *this)

{
  code *pcVar1;
  bool bVar2;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  if ((this->DecayAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0xa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FManagedArrayCollection::HasAttribute
                    ((this->DecayAttribute).Collection,(this->DecayAttribute).Name,
                     (this->DecayAttribute).Group);
  if (!bVar2) {
    TManagedArrayAccessor<float>::Add(&this->DecayAttribute,MakePersistent,(FName)0x0);
    TManagedArrayBase<float>::Fill
              ((TManagedArrayBase<float> *)(this->DecayAttribute).AttributeArray,local_res8);
  }
  return;
}

// GetDecay @ 1463b3260

float __thiscall
FGeometryCollectionDecayDynamicFacade::GetDecay
          (FGeometryCollectionDecayDynamicFacade *this,int param_1)

{
  float *pfVar1;
  
  pfVar1 = TManagedArrayAccessor<float>::operator[](&this->DecayAttribute,param_1);
  return *pfVar1;
}

// GetDecayAttributeSize @ 1463b3280

int __thiscall
FGeometryCollectionDecayDynamicFacade::GetDecayAttributeSize
          (FGeometryCollectionDecayDynamicFacade *this)

{
  TManagedArray<float> *pTVar1;
  int iVar2;
  
  pTVar1 = (this->DecayAttribute).ConstAttributeArray;
  if (pTVar1 != (TManagedArray<float> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001463b328f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    return iVar2;
  }
  iVar2 = FManagedArrayCollection::NumElements
                    ((this->DecayAttribute).ConstCollection,(this->DecayAttribute).Group);
  return iVar2;
}

// IsValid @ 1463bcc80

bool __thiscall
FGeometryCollectionDecayDynamicFacade::IsValid(FGeometryCollectionDecayDynamicFacade *this)

{
  return (this->DecayAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0;
}

// SetDecay @ 1463c8840

void __thiscall
FGeometryCollectionDecayDynamicFacade::SetDecay
          (FGeometryCollectionDecayDynamicFacade *this,int param_1,float param_2)

{
  float local_res18 [4];
  
  local_res18[0] = param_2;
  TManagedArrayAccessor<float>::ModifyAt(&this->DecayAttribute,param_1,local_res18);
  return;
}

