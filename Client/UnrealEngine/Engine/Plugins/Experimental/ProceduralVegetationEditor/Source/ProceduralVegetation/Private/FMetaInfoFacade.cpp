// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 6

// FMetaInfoFacade @ 14da63100

FMetaInfoFacade * __thiscall
PV::Facades::FMetaInfoFacade::FMetaInfoFacade
          (FMetaInfoFacade *this,FManagedArrayCollection *param_1,int param_2)

{
  FManagedArrayCollection *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar7;
  FMetaInfoFacade *pFVar8;
  undefined1 *puVar9;
  FValueType *this_00;
  FValueType *pFVar10;
  FName local_28;
  FName local_20;
  
  this->ConstCollection = param_1;
  pFVar10 = (FValueType *)0x0;
  this->Collection = param_1;
  (this->GuidAttribute).ConstCollection = param_1;
  (this->GuidAttribute).Collection = param_1;
  (this->GuidAttribute).Name = AttributeNames::Guid;
  (this->GuidAttribute).Group = GroupNames::DetailsGroup;
  (this->GuidAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GuidAttribute).DefaultGroupDependency.Number = 0;
  local_28 = AttributeNames::Guid;
  local_20 = GroupNames::DetailsGroup;
  pTVar7 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_28);
  this_00 = (FValueType *)&pTVar7->field_0x10;
  if (pTVar7 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar10;
  }
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FGuidType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar10 = (FValueType *)this_00->ManagedArray;
    if ((pFVar10 == (FValueType *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FMetaInfoFacade *)(*pcVar2)();
      return pFVar8;
    }
    *(undefined1 *)&(pFVar10->GroupIndexDependency).Number = 1;
  }
  (this->GuidAttribute).AttributeArray = (TManagedArray<FGuid> *)pFVar10;
  (this->GuidAttribute).ConstAttributeArray = (TManagedArray<FGuid> *)pFVar10;
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVMetaInfoFacade.cpp"
                         ,0x18,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FMetaInfoFacade *)(*pcVar2)();
    return pFVar8;
  }
  FVar3 = GroupNames::DetailsGroup;
  pFVar1 = this->Collection;
  uVar5 = ::GetTypeHash(GroupNames::DetailsGroup.ComparisonIndex.Value);
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
        goto LAB_14da63275;
        iVar6 = *(int *)(*(longlong *)&pFVar1->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,GroupNames::DetailsGroup);
LAB_14da63275:
  TManagedArrayAccessor<FGuid>::Add(&this->GuidAttribute,MakePersistent,(FName)0x0);
  return this;
}

// FMetaInfoFacade @ 14da632b0

FMetaInfoFacade * __thiscall
PV::Facades::FMetaInfoFacade::FMetaInfoFacade
          (FMetaInfoFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<FGuid> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FMetaInfoFacade *pFVar5;
  char *pcVar6;
  FName local_18;
  FName local_10;
  
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  (this->GuidAttribute).ConstCollection = param_1;
  (this->GuidAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->GuidAttribute).Name = AttributeNames::Guid;
  (this->GuidAttribute).Group = GroupNames::DetailsGroup;
  (this->GuidAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GuidAttribute).DefaultGroupDependency.Number = 0;
  (this->GuidAttribute).AttributeArray = (TManagedArray<FGuid> *)0x0;
  local_18 = AttributeNames::Guid;
  local_10 = GroupNames::DetailsGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\x0f')) {
    pTVar1 = *(TManagedArray<FGuid> **)(pcVar6 + 0x20);
    if (pTVar1 == (TManagedArray<FGuid> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMetaInfoFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
    (this->GuidAttribute).ConstAttributeArray = pTVar1;
    return this;
  }
  (this->GuidAttribute).ConstAttributeArray = (TManagedArray<FGuid> *)0x0;
  return this;
}

// CreateGuid @ 14da79f80

void __thiscall PV::Facades::FMetaInfoFacade::CreateGuid(FMetaInfoFacade *this,FString *param_1)

{
  int iVar1;
  TManagedArray<FGuid> *pTVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FGuid *pFVar9;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  FGuid local_28 [2];
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVMetaInfoFacade.cpp"
                       ,0x29,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = FManagedArrayCollection::NumElements(this->Collection,GroupNames::DetailsGroup);
  if (iVar8 == 0) {
    FManagedArrayCollection::AddElements(this->Collection,1,GroupNames::DetailsGroup);
  }
  local_38.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  local_38._12_4_ = uStack_3c;
  local_38.Size = iVar8;
  pFVar9 = FGuid::NewDeterministicGuid(local_28,&local_38,0);
  uVar5 = *(undefined8 *)pFVar9;
  uVar6 = *(undefined8 *)&pFVar9->C;
  if (((this->GuidAttribute).AttributeArray == (TManagedArray<FGuid> *)0x0) ||
     ((this->GuidAttribute).Collection == (FManagedArrayCollection *)0x0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  ((this->GuidAttribute).AttributeArray)->field_0x8 = 1;
  pTVar2 = (this->GuidAttribute).AttributeArray;
  if (*(int *)&pTVar2->field_0x18 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar3 = *(undefined8 **)&pTVar2->field_0x10;
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  return;
}

// DefineSchema @ 14da7aec0

void __thiscall PV::Facades::FMetaInfoFacade::DefineSchema(FMetaInfoFacade *this,int param_1)

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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVMetaInfoFacade.cpp"
                       ,0x18,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar3 = GroupNames::DetailsGroup;
  pFVar1 = this->Collection;
  uVar5 = ::GetTypeHash(GroupNames::DetailsGroup.ComparisonIndex.Value);
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
        goto LAB_14da7af85;
        iVar6 = *(int *)(*(longlong *)&pFVar1->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,GroupNames::DetailsGroup);
LAB_14da7af85:
  TManagedArrayAccessor<FGuid>::Add(&this->GuidAttribute,MakePersistent,(FName)0x0);
  return;
}

// GetGuid @ 14da95a30

FGuid * __thiscall
PV::Facades::FMetaInfoFacade::GetGuid(FMetaInfoFacade *this,FGuid *__return_storage_ptr__)

{
  TManagedArray<FGuid> *pTVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FGuid *pFVar8;
  
  pTVar1 = (this->GuidAttribute).ConstAttributeArray;
  if (pTVar1 != (TManagedArray<FGuid> *)0x0) {
    iVar7 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (0 < iVar7) {
      if ((this->GuidAttribute).ConstAttributeArray == (TManagedArray<FGuid> *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x60,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FGuid *)(*pcVar3)();
          return pFVar8;
        }
      }
      pTVar1 = (this->GuidAttribute).ConstAttributeArray;
      if (*(int *)&pTVar1->field_0x18 < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FGuid *)(*pcVar3)();
          return pFVar8;
        }
      }
      puVar2 = *(undefined8 **)&pTVar1->field_0x10;
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      __return_storage_ptr__->A = (int)uVar4;
      __return_storage_ptr__->B = (int)((ulonglong)uVar4 >> 0x20);
      __return_storage_ptr__->C = (int)uVar5;
      __return_storage_ptr__->D = (int)((ulonglong)uVar5 >> 0x20);
      return __return_storage_ptr__;
    }
  }
  FGuid::NewGuid(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsValid @ 14da9b0b0

bool __thiscall PV::Facades::FMetaInfoFacade::IsValid(FMetaInfoFacade *this)

{
  return (this->GuidAttribute).ConstAttributeArray != (TManagedArray<FGuid> *)0x0;
}

