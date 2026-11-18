// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// FCollectionRemoveOnBreakFacade @ 143f887a0

FCollectionRemoveOnBreakFacade * __thiscall
GeometryCollection::Facades::FCollectionRemoveOnBreakFacade::FCollectionRemoveOnBreakFacade
          (FCollectionRemoveOnBreakFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FCollectionRemoveOnBreakFacade *pFVar4;
  FValueType *this_00;
  FValueType *pFVar5;
  FName local_res10;
  FName local_18;
  FName local_10;
  
  pFVar5 = (FValueType *)0x0;
  ::FName::FName(&local_res10,"RemoveOnBreak");
  (this->RemoveOnBreakAttribute).Name = local_res10;
  (this->RemoveOnBreakAttribute).ConstCollection = param_1;
  (this->RemoveOnBreakAttribute).Collection = param_1;
  (this->RemoveOnBreakAttribute).Group = FTransformCollection::TransformGroup;
  (this->RemoveOnBreakAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->RemoveOnBreakAttribute).DefaultGroupDependency.Number = 0;
  local_10 = FTransformCollection::TransformGroup;
  local_18 = local_res10;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  this_00 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar5;
  }
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FVector4fType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar5 = (FValueType *)this_00->ManagedArray;
    if (pFVar5 == (FValueType *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCollectionRemoveOnBreakFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->RemoveOnBreakAttribute).AttributeArray =
       (TManagedArray<UE::Math::TVector4<float>_> *)pFVar5;
  (this->RemoveOnBreakAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TVector4<float>_> *)pFVar5;
  return this;
}

// FCollectionRemoveOnBreakFacade @ 143f88880

FCollectionRemoveOnBreakFacade * __thiscall
GeometryCollection::Facades::FCollectionRemoveOnBreakFacade::FCollectionRemoveOnBreakFacade
          (FCollectionRemoveOnBreakFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<UE::Math::TVector4<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FCollectionRemoveOnBreakFacade *pFVar5;
  char *pcVar6;
  FName local_res10;
  FName local_18;
  FName local_10;
  
  ::FName::FName(&local_res10,"RemoveOnBreak");
  (this->RemoveOnBreakAttribute).Name = local_res10;
  (this->RemoveOnBreakAttribute).ConstCollection = param_1;
  (this->RemoveOnBreakAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->RemoveOnBreakAttribute).Group = FTransformCollection::TransformGroup;
  (this->RemoveOnBreakAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->RemoveOnBreakAttribute).DefaultGroupDependency.Number = 0;
  (this->RemoveOnBreakAttribute).AttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
  local_10 = FTransformCollection::TransformGroup;
  local_18 = local_res10;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\'')) {
    pTVar1 = *(TManagedArray<UE::Math::TVector4<float>_> **)(pcVar6 + 0x20);
    if (pTVar1 == (TManagedArray<UE::Math::TVector4<float>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FCollectionRemoveOnBreakFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
    (this->RemoveOnBreakAttribute).ConstAttributeArray = pTVar1;
    return this;
  }
  (this->RemoveOnBreakAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
  return this;
}

// DefineSchema @ 143fa9490

void __thiscall
GeometryCollection::Facades::FCollectionRemoveOnBreakFacade::DefineSchema
          (FCollectionRemoveOnBreakFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->RemoveOnBreakAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRemoveOnBreakFacade.cpp"
                       ,0x7f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->RemoveOnBreakAttribute).Collection == (FManagedArrayCollection *)0x0) {
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
                    ((this->RemoveOnBreakAttribute).Collection,(this->RemoveOnBreakAttribute).Name,
                     (this->RemoveOnBreakAttribute).Group);
  if (!bVar2) {
    TManagedArrayAccessor<UE::Math::TVector4<float>_>::Add
              (&this->RemoveOnBreakAttribute,MakePersistent,(FName)0x0);
    TManagedArrayBase<UE::Math::TVector4<float>_>::Fill
              ((TManagedArrayBase<UE::Math::TVector4<float>_> *)
               (this->RemoveOnBreakAttribute).AttributeArray,&FRemoveOnBreakData::DisabledPackedData
              );
    return;
  }
  return;
}

// GetData @ 143faffe0

FRemoveOnBreakData * __thiscall
GeometryCollection::Facades::FCollectionRemoveOnBreakFacade::GetData
          (FCollectionRemoveOnBreakFacade *this,FRemoveOnBreakData *__return_storage_ptr__,
          int param_1)

{
  undefined8 *puVar1;
  TManagedArray<UE::Math::TVector4<float>_> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  FRemoveOnBreakData *pFVar7;
  
  pTVar2 = (this->RemoveOnBreakAttribute).ConstAttributeArray;
  if (pTVar2 == (TManagedArray<UE::Math::TVector4<float>_> *)0x0) {
    (__return_storage_ptr__->PackedData).field0_0x0._s_0 =
         (TVector4<float>_u_0_s_0)FRemoveOnBreakData::DisabledPackedData.field0_0x0;
    return __return_storage_ptr__;
  }
  uVar6 = 0;
  if (param_1 < *(int *)&pTVar2->field_0x18) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRemoveOnBreakData *)(*pcVar3)();
      return pFVar7;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)&pTVar2->field_0x10 + (longlong)param_1 * 0x10);
  uVar4 = puVar1[1];
  *(undefined8 *)&(__return_storage_ptr__->PackedData).field0_0x0 = *puVar1;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->PackedData).field0_0x0 + 8) = uVar4;
  return __return_storage_ptr__;
}

// IsConst @ 143fb77f0

bool __thiscall
GeometryCollection::Facades::FCollectionRemoveOnBreakFacade::IsConst
          (FCollectionRemoveOnBreakFacade *this)

{
  return (this->RemoveOnBreakAttribute).Collection == (FManagedArrayCollection *)0x0;
}

// IsValid @ 143fb7ca0

bool __thiscall
GeometryCollection::Facades::FCollectionRemoveOnBreakFacade::IsValid
          (FCollectionRemoveOnBreakFacade *this)

{
  return (this->RemoveOnBreakAttribute).ConstAttributeArray !=
         (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
}

// RemoveSchema @ 143fc29f0

void __thiscall
GeometryCollection::Facades::FCollectionRemoveOnBreakFacade::RemoveSchema
          (FCollectionRemoveOnBreakFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->RemoveOnBreakAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRemoveOnBreakFacade.cpp"
                       ,0x85,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->RemoveOnBreakAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0xbf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FManagedArrayCollection::RemoveAttribute
            ((this->RemoveOnBreakAttribute).Collection,(this->RemoveOnBreakAttribute).Name,
             (this->RemoveOnBreakAttribute).Group);
  (this->RemoveOnBreakAttribute).AttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
  (this->RemoveOnBreakAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
  return;
}

// SetFromIndexArray @ 143fc8330

void __thiscall
GeometryCollection::Facades::FCollectionRemoveOnBreakFacade::SetFromIndexArray
          (FCollectionRemoveOnBreakFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          FRemoveOnBreakData *param_2)

{
  FScriptContainerElement *pFVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  TManagedArray<UE::Math::TVector4<float>_> *pTVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  if (((this->RemoveOnBreakAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRemoveOnBreakFacade.cpp"
                          ,0x95,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->RemoveOnBreakAttribute).ConstAttributeArray !=
      (TManagedArray<UE::Math::TVector4<float>_> *)0x0) {
    if ((((this->RemoveOnBreakAttribute).AttributeArray ==
          (TManagedArray<UE::Math::TVector4<float>_> *)0x0) ||
        ((this->RemoveOnBreakAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("AttributeArray!=nullptr && !IsConst()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x74,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    ((this->RemoveOnBreakAttribute).AttributeArray)->field_0x8 = 1;
    pTVar5 = (this->RemoveOnBreakAttribute).AttributeArray;
    pFVar13 = (param_1->AllocatorInstance).Data;
    iVar3 = param_1->ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar3 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar13 == pFVar1) break;
      uVar4 = *(uint *)pFVar13;
      fVar7 = (param_2->PackedData).field0_0x0._s_0.X;
      fVar8 = (param_2->PackedData).field0_0x0._s_0.Y;
      fVar9 = (param_2->PackedData).field0_0x0._s_0.Z;
      fVar10 = (param_2->PackedData).field0_0x0._s_0.W;
      uVar12 = 0;
      if ((int)uVar4 < *(int *)&pTVar5->field_0x18) {
        uVar12 = ~uVar4 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar13 = pFVar13 + 4;
      pfVar2 = (float *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar4 * 0x10);
      *pfVar2 = fVar7;
      pfVar2[1] = fVar8;
      pfVar2[2] = fVar9;
      pfVar2[3] = fVar10;
    }
  }
  return;
}

// SetToAll @ 143fc97b0

void __thiscall
GeometryCollection::Facades::FCollectionRemoveOnBreakFacade::SetToAll
          (FCollectionRemoveOnBreakFacade *this,FRemoveOnBreakData *param_1)

{
  TManagedArrayBase<UE::Math::TVector4<float>_> *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((this->RemoveOnBreakAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRemoveOnBreakFacade.cpp"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->RemoveOnBreakAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0xac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (TManagedArrayBase<UE::Math::TVector4<float>_> *)
            (this->RemoveOnBreakAttribute).AttributeArray;
  if (this_00 != (TManagedArrayBase<UE::Math::TVector4<float>_> *)0x0) {
    TManagedArrayBase<UE::Math::TVector4<float>_>::Fill(this_00,&param_1->PackedData);
  }
  return;
}

