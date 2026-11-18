// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 8

// FGeometryCollectionRemoveOnBreakDynamicFacade @ 1463a1a40

FGeometryCollectionRemoveOnBreakDynamicFacade * __thiscall
FGeometryCollectionRemoveOnBreakDynamicFacade::FGeometryCollectionRemoveOnBreakDynamicFacade
          (FGeometryCollectionRemoveOnBreakDynamicFacade *this,FGeometryDynamicCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FGeometryCollectionRemoveOnBreakDynamicFacade *pFVar4;
  FValueType *pFVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
  (this->BreakTimerAttribute).ConstCollection = (FManagedArrayCollection *)param_1;
  pFVar5 = (FValueType *)0x0;
  (this->BreakTimerAttribute).Collection = (FManagedArrayCollection *)param_1;
  (this->BreakTimerAttribute).Name = BreakTimerAttributeName;
  (this->BreakTimerAttribute).Group = FTransformCollection::TransformGroup;
  (this->BreakTimerAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BreakTimerAttribute).DefaultGroupDependency.Number = 0;
  local_58 = BreakTimerAttributeName;
  local_50 = FTransformCollection::TransformGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,(TTuple<FName,FName> *)&local_58);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  pFVar6 = pFVar5;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGeometryCollectionRemoveOnBreakDynamicFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BreakTimerAttribute).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->BreakTimerAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->PostBreakDurationAttribute).ConstCollection = (FManagedArrayCollection *)param_1;
  (this->PostBreakDurationAttribute).Collection = (FManagedArrayCollection *)param_1;
  (this->PostBreakDurationAttribute).Name = PostBreakDurationAttributeName;
  (this->PostBreakDurationAttribute).Group = FTransformCollection::TransformGroup;
  (this->PostBreakDurationAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PostBreakDurationAttribute).DefaultGroupDependency.Number = 0;
  local_48 = PostBreakDurationAttributeName;
  local_40 = FTransformCollection::TransformGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,(TTuple<FName,FName> *)&local_48);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  pFVar6 = pFVar5;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGeometryCollectionRemoveOnBreakDynamicFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->PostBreakDurationAttribute).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->PostBreakDurationAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->BreakRemovalDurationAttribute).ConstCollection = (FManagedArrayCollection *)param_1;
  (this->BreakRemovalDurationAttribute).Collection = (FManagedArrayCollection *)param_1;
  (this->BreakRemovalDurationAttribute).Name = BreakRemovalDurationAttributeName;
  (this->BreakRemovalDurationAttribute).Group = FTransformCollection::TransformGroup;
  (this->BreakRemovalDurationAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BreakRemovalDurationAttribute).DefaultGroupDependency.Number = 0;
  local_38 = BreakRemovalDurationAttributeName;
  local_30 = FTransformCollection::TransformGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,(TTuple<FName,FName> *)&local_38);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar5 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGeometryCollectionRemoveOnBreakDynamicFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->BreakRemovalDurationAttribute).AttributeArray = (TManagedArray<float> *)pFVar5;
  (this->BreakRemovalDurationAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar5;
  this->DynamicCollection = param_1;
  return this;
}

// DefineSchema @ 1463afd90

void __thiscall
FGeometryCollectionRemoveOnBreakDynamicFacade::DefineSchema
          (FGeometryCollectionRemoveOnBreakDynamicFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->BreakTimerAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineRemoval.cpp"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->BreakTimerAttribute).Collection == (FManagedArrayCollection *)0x0) {
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
                    ((this->BreakTimerAttribute).Collection,(this->BreakTimerAttribute).Name,
                     (this->BreakTimerAttribute).Group);
  if (!bVar2) {
    TManagedArrayAccessor<float>::Add(&this->BreakTimerAttribute,MakePersistent,(FName)0x0);
    TManagedArrayBase<float>::Fill
              ((TManagedArrayBase<float> *)(this->BreakTimerAttribute).AttributeArray,
               &BreakTimerStartValue);
  }
  TManagedArrayAccessor<float>::Add(&this->PostBreakDurationAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->BreakRemovalDurationAttribute,MakePersistent,(FName)0x0);
  return;
}

// IsConst @ 1463bcac0

bool __thiscall
FGeometryCollectionRemoveOnBreakDynamicFacade::IsConst
          (FGeometryCollectionRemoveOnBreakDynamicFacade *this)

{
  return (this->BreakTimerAttribute).Collection == (FManagedArrayCollection *)0x0;
}

// IsRemovalActive @ 1463bcb80

bool __thiscall
FGeometryCollectionRemoveOnBreakDynamicFacade::IsRemovalActive
          (FGeometryCollectionRemoveOnBreakDynamicFacade *this,int param_1)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((this->PostBreakDurationAttribute).ConstAttributeArray == (TManagedArray<float> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pTVar1 = (this->PostBreakDurationAttribute).ConstAttributeArray;
  uVar5 = 0;
  if (param_1 < *(int *)&pTVar1->field_0x18) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return __real_bf800000 < *(float *)(*(longlong *)&pTVar1->field_0x10 + (longlong)param_1 * 4);
}

// IsValid @ 1463bcc90

bool __thiscall
FGeometryCollectionRemoveOnBreakDynamicFacade::IsValid
          (FGeometryCollectionRemoveOnBreakDynamicFacade *this)

{
  if ((((this->BreakTimerAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0) &&
      ((this->PostBreakDurationAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
     ((this->BreakRemovalDurationAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) {
    return true;
  }
  return false;
}

// SetAttributeValues @ 1463c74c0

void __thiscall
FGeometryCollectionRemoveOnBreakDynamicFacade::SetAttributeValues
          (FGeometryCollectionRemoveOnBreakDynamicFacade *this,
          FCollectionRemoveOnBreakFacade *param_1)

{
  TManagedArrayBase<float> *this_00;
  TManagedArray<float> *pTVar1;
  TManagedArray<float> *pTVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float local_res8;
  float local_resc;
  float local_res18;
  float local_res1c;
  FRemoveOnBreakData local_98;
  FRemoveOnBreakData local_88 [6];
  
  if (((this->BreakTimerAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineRemoval.cpp"
                         ,0x36,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((this->BreakTimerAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0) &&
      ((this->PostBreakDurationAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
     ((this->BreakRemovalDurationAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) {
    if (((this->BreakTimerAttribute).Collection == (FManagedArrayCollection *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0xac,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (TManagedArrayBase<float> *)(this->BreakTimerAttribute).AttributeArray;
    if (this_00 != (TManagedArrayBase<float> *)0x0) {
      TManagedArrayBase<float>::Fill(this_00,&BreakTimerStartValue);
    }
    uVar8 = FTransformDynamicCollection::GetNumTransforms
                      ((FTransformDynamicCollection *)this->DynamicCollection);
    if ((((this->PostBreakDurationAttribute).AttributeArray == (TManagedArray<float> *)0x0) ||
        ((this->PostBreakDurationAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar11 = 0;
    ((this->PostBreakDurationAttribute).AttributeArray)->field_0x8 = 1;
    pTVar1 = (this->PostBreakDurationAttribute).AttributeArray;
    iVar9 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    dVar6 = __real_bff0000000000000;
    fVar5 = __real_3f800000;
    if (0 < iVar9) {
      lVar12 = 0;
      do {
        GeometryCollection::Facades::FCollectionRemoveOnBreakFacade::GetData
                  (param_1,&local_98,uVar11);
        GeometryCollection::Facades::FRemoveOnBreakData::GetBreakTimer(&local_98);
        fVar13 = local_res8;
        if (local_res8 <= 0.0) {
          fVar13 = 0.0;
        }
        fVar14 = fVar13;
        if (fVar13 <= local_resc) {
          fVar14 = local_resc;
        }
        bVar7 = GeometryCollection::Facades::FRemoveOnBreakData::IsEnabled(&local_98);
        dVar4 = dVar6;
        if (bVar7) {
          uVar8 = uVar8 * 0xbb38435 + 0x3619636b;
          dVar4 = ((double)fVar14 - (double)fVar13) *
                  (double)((float)(uVar8 >> 9 | 0x3f800000) - fVar5) + (double)fVar13;
        }
        uVar10 = 0;
        if ((int)uVar11 < *(int *)&pTVar1->field_0x18) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar11 = uVar11 + 1;
        *(float *)(*(longlong *)&pTVar1->field_0x10 + lVar12) = (float)dVar4;
        lVar12 = lVar12 + 4;
        iVar9 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
      } while ((int)uVar11 < iVar9);
    }
    if ((((this->BreakRemovalDurationAttribute).AttributeArray == (TManagedArray<float> *)0x0) ||
        ((this->BreakRemovalDurationAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar11 = 0;
    ((this->BreakRemovalDurationAttribute).AttributeArray)->field_0x8 = 1;
    pTVar2 = (this->BreakRemovalDurationAttribute).AttributeArray;
    iVar9 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    if (0 < iVar9) {
      lVar12 = 0;
      do {
        GeometryCollection::Facades::FCollectionRemoveOnBreakFacade::GetData
                  (param_1,local_88,uVar11);
        GeometryCollection::Facades::FRemoveOnBreakData::GetRemovalTimer(local_88);
        fVar13 = local_res18;
        if (local_res18 <= 0.0) {
          fVar13 = 0.0;
        }
        fVar14 = fVar13;
        if (fVar13 <= local_res1c) {
          fVar14 = local_res1c;
        }
        bVar7 = FTransformDynamicCollection::IsCluster
                          ((FTransformDynamicCollection *)this->DynamicCollection,uVar11);
        if ((!bVar7) ||
           (bVar7 = GeometryCollection::Facades::FRemoveOnBreakData::GetClusterCrumbling(local_88),
           dVar4 = dVar6, !bVar7)) {
          uVar8 = uVar8 * 0xbb38435 + 0x3619636b;
          dVar4 = ((double)fVar14 - (double)fVar13) *
                  (double)((float)(uVar8 >> 9 | 0x3f800000) - fVar5) + (double)fVar13;
        }
        uVar10 = 0;
        if ((int)uVar11 < *(int *)&pTVar2->field_0x18) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar11 = uVar11 + 1;
        *(float *)(*(longlong *)&pTVar2->field_0x10 + lVar12) = (float)dVar4;
        lVar12 = lVar12 + 4;
        iVar9 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
      } while ((int)uVar11 < iVar9);
    }
  }
  return;
}

// UpdateBreakTimerAndComputeDecay @ 1463ce100

float __thiscall
FGeometryCollectionRemoveOnBreakDynamicFacade::UpdateBreakTimerAndComputeDecay
          (FGeometryCollectionRemoveOnBreakDynamicFacade *this,int param_1,float param_2)

{
  float fVar1;
  TManagedArray<float> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar8 = (longlong)param_1;
  if ((((this->BreakTimerAttribute).AttributeArray == (TManagedArray<float> *)0x0) ||
      ((this->BreakTimerAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar9 = (float)(*pcVar4)();
    return fVar9;
  }
  uVar7 = (uint)~param_1 >> 0x1f;
  ((this->BreakTimerAttribute).AttributeArray)->field_0x8 = 1;
  pTVar2 = (this->BreakTimerAttribute).AttributeArray;
  uVar6 = 0;
  if (param_1 < *(int *)&pTVar2->field_0x18) {
    uVar6 = uVar7;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar9 = (float)(*pcVar4)();
    return fVar9;
  }
  lVar3 = *(longlong *)&pTVar2->field_0x10;
  if (((this->PostBreakDurationAttribute).ConstAttributeArray == (TManagedArray<float> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar9 = (float)(*pcVar4)();
    return fVar9;
  }
  pTVar2 = (this->PostBreakDurationAttribute).ConstAttributeArray;
  uVar6 = 0;
  if (param_1 < *(int *)&pTVar2->field_0x18) {
    uVar6 = uVar7;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar9 = (float)(*pcVar4)();
    return fVar9;
  }
  fVar9 = *(float *)(*(longlong *)&pTVar2->field_0x10 + lVar8 * 4);
  if (((this->BreakRemovalDurationAttribute).ConstAttributeArray == (TManagedArray<float> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar9 = (float)(*pcVar4)();
    return fVar9;
  }
  pTVar2 = (this->BreakRemovalDurationAttribute).ConstAttributeArray;
  uVar6 = 0;
  if (param_1 < *(int *)&pTVar2->field_0x18) {
    uVar6 = uVar7;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar9 = (float)(*pcVar4)();
    return fVar9;
  }
  fVar1 = *(float *)(*(longlong *)&pTVar2->field_0x10 + lVar8 * 4);
  fVar11 = 0.0;
  if (0.0 <= fVar9) {
    fVar10 = param_2 + *(float *)(lVar3 + lVar8 * 4);
    *(float *)(lVar3 + lVar8 * 4) = fVar10;
    if ((fVar9 <= fVar10) && (fVar11 = __real_3f800000, __real_322bcc77 <= fVar1)) {
      fVar11 = (fVar10 - fVar9) / fVar1;
      if (__real_3f800000 <= fVar11) {
        fVar11 = __real_3f800000;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
    }
  }
  return fVar11;
}

// UseClusterCrumbling @ 1463d0900

bool __thiscall
FGeometryCollectionRemoveOnBreakDynamicFacade::UseClusterCrumbling
          (FGeometryCollectionRemoveOnBreakDynamicFacade *this,int param_1)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((this->BreakRemovalDurationAttribute).ConstAttributeArray == (TManagedArray<float> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pTVar1 = (this->BreakRemovalDurationAttribute).ConstAttributeArray;
  uVar5 = 0;
  if (param_1 < *(int *)&pTVar1->field_0x18) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(float *)(*(longlong *)&pTVar1->field_0x10 + (longlong)param_1 * 4) <= __real_bf800000;
}

