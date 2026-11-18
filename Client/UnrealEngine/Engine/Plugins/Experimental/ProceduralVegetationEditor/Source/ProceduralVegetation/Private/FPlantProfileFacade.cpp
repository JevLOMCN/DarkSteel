// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 6

// FPlantProfileFacade @ 14da63db0

FPlantProfileFacade * __thiscall
PV::Facades::FPlantProfileFacade::FPlantProfileFacade
          (FPlantProfileFacade *this,FManagedArrayCollection *param_1)

{
  FManagedArrayCollection *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar7;
  FPlantProfileFacade *pFVar8;
  undefined1 *puVar9;
  FValueType *this_00;
  FValueType *pFVar10;
  FName local_28;
  FName local_20;
  
  this->ConstCollection = param_1;
  pFVar10 = (FValueType *)0x0;
  this->Collection = param_1;
  (this->ProfilePointsAttribute).ConstCollection = param_1;
  (this->ProfilePointsAttribute).Collection = param_1;
  (this->ProfilePointsAttribute).Name = AttributeNames::ProfilePoints;
  (this->ProfilePointsAttribute).Group = GroupNames::PlantProfilesGroup;
  (this->ProfilePointsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ProfilePointsAttribute).DefaultGroupDependency.Number = 0;
  local_28 = AttributeNames::ProfilePoints;
  local_20 = GroupNames::PlantProfilesGroup;
  pTVar7 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_28);
  this_00 = (FValueType *)&pTVar7->field_0x10;
  if (pTVar7 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar10;
  }
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FFloatArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar10 = (FValueType *)this_00->ManagedArray;
    if ((pFVar10 == (FValueType *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FPlantProfileFacade *)(*pcVar2)();
      return pFVar8;
    }
    *(undefined1 *)&(pFVar10->GroupIndexDependency).Number = 1;
  }
  (this->ProfilePointsAttribute).AttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)pFVar10;
  (this->ProfilePointsAttribute).ConstAttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)pFVar10;
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVProfileFacade.cpp"
                         ,0x2c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FPlantProfileFacade *)(*pcVar2)();
    return pFVar8;
  }
  FVar3 = GroupNames::PlantProfilesGroup;
  pFVar1 = this->Collection;
  uVar5 = ::GetTypeHash(GroupNames::PlantProfilesGroup.ComparisonIndex.Value);
  if (*(int *)&(pFVar1->GroupInfo).field_0x8 != *(int *)&(pFVar1->GroupInfo).field_0x34) {
    puVar9 = *(undefined1 **)&(pFVar1->GroupInfo).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(pFVar1->GroupInfo).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(pFVar1->GroupInfo).field_0x48 - 1U & FVar3.Number + uVar5)
                              * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar1->GroupInfo + (longlong)iVar6 * 0x14) == FVar3)
        goto LAB_14da63f25;
        iVar6 = *(int *)(*(longlong *)&pFVar1->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,GroupNames::PlantProfilesGroup);
LAB_14da63f25:
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Add
            (&this->ProfilePointsAttribute,MakePersistent,(FName)0x0);
  return this;
}

// FPlantProfileFacade @ 14da63f60

FPlantProfileFacade * __thiscall
PV::Facades::FPlantProfileFacade::FPlantProfileFacade
          (FPlantProfileFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FPlantProfileFacade *pFVar5;
  char *pcVar6;
  FName local_18;
  FName local_10;
  
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  (this->ProfilePointsAttribute).ConstCollection = param_1;
  (this->ProfilePointsAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ProfilePointsAttribute).Name = AttributeNames::ProfilePoints;
  (this->ProfilePointsAttribute).Group = GroupNames::PlantProfilesGroup;
  (this->ProfilePointsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ProfilePointsAttribute).DefaultGroupDependency.Number = 0;
  (this->ProfilePointsAttribute).AttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_18 = AttributeNames::ProfilePoints;
  local_10 = GroupNames::PlantProfilesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '&')) {
    pTVar1 = *(TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> **)(pcVar6 + 0x20);
    if (pTVar1 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FPlantProfileFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
    (this->ProfilePointsAttribute).ConstAttributeArray = pTVar1;
    return this;
  }
  (this->ProfilePointsAttribute).ConstAttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  return this;
}

// AddProfileEntry @ 14da6bca0

int __thiscall
PV::Facades::FPlantProfileFacade::AddProfileEntry
          (FPlantProfileFacade *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->ProfilePointsAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FManagedArrayCollection::AddElements
                    ((this->ProfilePointsAttribute).Collection,1,
                     (this->ProfilePointsAttribute).Group);
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::ModifyAt
            (&this->ProfilePointsAttribute,iVar3,param_1);
  return iVar3;
}

// DefineSchema @ 14da7afc0

void __thiscall PV::Facades::FPlantProfileFacade::DefineSchema(FPlantProfileFacade *this)

{
  FManagedArrayCollection *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVProfileFacade.cpp"
                       ,0x2c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar3 = GroupNames::PlantProfilesGroup;
  pFVar1 = this->Collection;
  uVar5 = ::GetTypeHash(GroupNames::PlantProfilesGroup.ComparisonIndex.Value);
  if (*(int *)&(pFVar1->GroupInfo).field_0x8 != *(int *)&(pFVar1->GroupInfo).field_0x34) {
    puVar7 = *(undefined1 **)&(pFVar1->GroupInfo).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pFVar1->GroupInfo).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(pFVar1->GroupInfo).field_0x48 - 1U & FVar3.Number + uVar5)
                              * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar1->GroupInfo + (longlong)iVar6 * 0x14) == FVar3)
        goto LAB_14da7b085;
        iVar6 = *(int *)(*(longlong *)&pFVar1->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,GroupNames::PlantProfilesGroup);
LAB_14da7b085:
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Add
            (&this->ProfilePointsAttribute,MakePersistent,(FName)0x0);
  return;
}

// GetProfilePoints @ 14da9a080

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FPlantProfileFacade::GetProfilePoints(FPlantProfileFacade *this,int param_1)

{
  int iVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (((this->ProfilePointsAttribute).ConstAttributeArray !=
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->ProfilePointsAttribute).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pTVar2 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                         (&this->ProfilePointsAttribute,param_1);
      return pTVar2;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`PV::Facades::FPlantProfileFacade::GetProfilePoints'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::EmptyArray;
}

// IsValid @ 14da9b0f0

bool __thiscall PV::Facades::FPlantProfileFacade::IsValid(FPlantProfileFacade *this)

{
  return (this->ProfilePointsAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
}

