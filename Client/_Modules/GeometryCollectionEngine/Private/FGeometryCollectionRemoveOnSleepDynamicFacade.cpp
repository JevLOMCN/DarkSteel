// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 13

// FGeometryCollectionRemoveOnSleepDynamicFacade @ 1463a1c90

FGeometryCollectionRemoveOnSleepDynamicFacade * __thiscall
FGeometryCollectionRemoveOnSleepDynamicFacade::FGeometryCollectionRemoveOnSleepDynamicFacade
          (FGeometryCollectionRemoveOnSleepDynamicFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FGeometryCollectionRemoveOnSleepDynamicFacade *pFVar4;
  FValueType *pFVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
  (this->SleepTimerAttribute).ConstCollection = param_1;
  pFVar5 = (FValueType *)0x0;
  (this->SleepTimerAttribute).Collection = param_1;
  (this->SleepTimerAttribute).Name = SleepTimerAttributeName;
  (this->SleepTimerAttribute).Group = FTransformCollection::TransformGroup;
  (this->SleepTimerAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SleepTimerAttribute).DefaultGroupDependency.Number = 0;
  local_68 = SleepTimerAttributeName;
  local_60 = FTransformCollection::TransformGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
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
      pFVar4 = (FGeometryCollectionRemoveOnSleepDynamicFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->SleepTimerAttribute).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->SleepTimerAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->MaxSleepTimeAttribute).ConstCollection = param_1;
  (this->MaxSleepTimeAttribute).Collection = param_1;
  (this->MaxSleepTimeAttribute).Name = MaxSleepTimeAttributeName;
  (this->MaxSleepTimeAttribute).Group = FTransformCollection::TransformGroup;
  (this->MaxSleepTimeAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MaxSleepTimeAttribute).DefaultGroupDependency.Number = 0;
  local_58 = MaxSleepTimeAttributeName;
  local_50 = FTransformCollection::TransformGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
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
      pFVar4 = (FGeometryCollectionRemoveOnSleepDynamicFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->MaxSleepTimeAttribute).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->MaxSleepTimeAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->SleepRemovalDurationAttribute).ConstCollection = param_1;
  (this->SleepRemovalDurationAttribute).Collection = param_1;
  (this->SleepRemovalDurationAttribute).Name = SleepRemovalDurationAttributeName;
  (this->SleepRemovalDurationAttribute).Group = FTransformCollection::TransformGroup;
  (this->SleepRemovalDurationAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SleepRemovalDurationAttribute).DefaultGroupDependency.Number = 0;
  local_48 = SleepRemovalDurationAttributeName;
  local_40 = FTransformCollection::TransformGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
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
      pFVar4 = (FGeometryCollectionRemoveOnSleepDynamicFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->SleepRemovalDurationAttribute).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->SleepRemovalDurationAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->LastPositionAttribute).ConstCollection = param_1;
  (this->LastPositionAttribute).Collection = param_1;
  (this->LastPositionAttribute).Name = LastPositionAttributeName;
  (this->LastPositionAttribute).Group = FTransformCollection::TransformGroup;
  (this->LastPositionAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->LastPositionAttribute).DefaultGroupDependency.Number = 0;
  local_38 = LastPositionAttributeName;
  local_30 = FTransformCollection::TransformGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_38);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FVector3dType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar5 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGeometryCollectionRemoveOnSleepDynamicFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->LastPositionAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<double>_> *)pFVar5
  ;
  (this->LastPositionAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TVector<double>_> *)pFVar5;
  return this;
}

// ComputeDecay @ 1463ae640

float __thiscall
FGeometryCollectionRemoveOnSleepDynamicFacade::ComputeDecay
          (FGeometryCollectionRemoveOnSleepDynamicFacade *this,int param_1)

{
  float fVar1;
  TManagedArray<float> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  lVar7 = (longlong)param_1;
  if (((this->SleepRemovalDurationAttribute).ConstAttributeArray == (TManagedArray<float> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar8 = (float)(*pcVar3)();
    return fVar8;
  }
  pTVar2 = (this->SleepRemovalDurationAttribute).ConstAttributeArray;
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < *(int *)&pTVar2->field_0x18) {
    uVar5 = uVar6;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar8 = (float)(*pcVar3)();
    return fVar8;
  }
  fVar8 = *(float *)(*(longlong *)&pTVar2->field_0x10 + lVar7 * 4);
  if (((this->MaxSleepTimeAttribute).ConstAttributeArray == (TManagedArray<float> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar8 = (float)(*pcVar3)();
    return fVar8;
  }
  pTVar2 = (this->MaxSleepTimeAttribute).ConstAttributeArray;
  uVar5 = 0;
  if (param_1 < *(int *)&pTVar2->field_0x18) {
    uVar5 = uVar6;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar8 = (float)(*pcVar3)();
    return fVar8;
  }
  fVar1 = *(float *)(*(longlong *)&pTVar2->field_0x10 + lVar7 * 4);
  if (((this->SleepTimerAttribute).ConstAttributeArray == (TManagedArray<float> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar8 = (float)(*pcVar3)();
    return fVar8;
  }
  pTVar2 = (this->SleepTimerAttribute).ConstAttributeArray;
  uVar5 = 0;
  if (param_1 < *(int *)&pTVar2->field_0x18) {
    uVar5 = uVar6;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar8 = (float)(*pcVar3)();
    return fVar8;
  }
  fVar9 = __real_3f800000;
  if (__real_322bcc77 <= fVar8) {
    fVar9 = (*(float *)(*(longlong *)&pTVar2->field_0x10 + lVar7 * 4) - fVar1) / fVar8;
    if (__real_3f800000 <= fVar9) {
      fVar9 = __real_3f800000;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
  }
  return fVar9;
}

// ComputeSlowMovingState @ 1463ae860

bool __thiscall
FGeometryCollectionRemoveOnSleepDynamicFacade::ComputeSlowMovingState
          (FGeometryCollectionRemoveOnSleepDynamicFacade *this,int param_1,TVector<double> *param_2,
          float param_3,double param_4)

{
  double *pdVar1;
  TManagedArray<UE::Math::TVector<double>_> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  bool bVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  
  bVar9 = false;
  lVar10 = (longlong)param_1;
  if (((this->LastPositionAttribute).AttributeArray ==
       (TManagedArray<UE::Math::TVector<double>_> *)0x0) ||
     ((this->LastPositionAttribute).Collection == (FManagedArrayCollection *)0x0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  ((this->LastPositionAttribute).AttributeArray)->field_0x8 = 1;
  pTVar2 = (this->LastPositionAttribute).AttributeArray;
  uVar8 = 0;
  if (param_1 < *(int *)&pTVar2->field_0x18) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  lVar3 = *(longlong *)&pTVar2->field_0x10;
  if (0.0 < param_3) {
    dVar11 = (param_2->field0_0x0)._s_0.X - *(double *)(lVar3 + lVar10 * 0x18);
    dVar12 = (param_2->field0_0x0)._s_0.Y - *(double *)(lVar3 + 8 + lVar10 * 0x18);
    dVar5 = (param_2->field0_0x0)._s_0.Z - *(double *)(lVar3 + 0x10 + lVar10 * 0x18);
    auVar13._0_8_ = dVar12 * dVar12 + dVar11 * dVar11 + dVar5 * dVar5;
    auVar13._8_8_ = 0;
    auVar13 = sqrtpd(auVar13,auVar13);
    bVar9 = auVar13._0_8_ * (__real_3ff0000000000000 / (double)param_3) < param_4;
  }
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  pdVar1 = (double *)(lVar3 + lVar10 * 0x18);
  *pdVar1 = (param_2->field0_0x0)._s_0.X;
  pdVar1[1] = dVar5;
  *(double *)(lVar3 + 0x10 + lVar10 * 0x18) = (param_2->field0_0x0)._s_0.Z;
  return bVar9;
}

// DefineSchema @ 1463afe60

void __thiscall
FGeometryCollectionRemoveOnSleepDynamicFacade::DefineSchema
          (FGeometryCollectionRemoveOnSleepDynamicFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SleepTimerAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineRemoval.cpp"
                       ,0x91,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TManagedArrayAccessor<float>::Add(&this->SleepTimerAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->MaxSleepTimeAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->SleepRemovalDurationAttribute,MakePersistent,(FName)0x0);
  if ((this->LastPositionAttribute).Collection == (FManagedArrayCollection *)0x0) {
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
                    ((this->LastPositionAttribute).Collection,(this->LastPositionAttribute).Name,
                     (this->LastPositionAttribute).Group);
  if (!bVar2) {
    TManagedArrayAccessor<UE::Math::TVector<double>_>::Add
              (&this->LastPositionAttribute,MakePersistent,(FName)0x0);
    TManagedArrayBase<UE::Math::TVector<double>_>::Fill
              ((TManagedArrayBase<UE::Math::TVector<double>_> *)
               (this->LastPositionAttribute).AttributeArray,&UE::Math::TVector<double>::ZeroVector);
  }
  return;
}

// GetMaxSleepTime @ 1463b61b0

float __thiscall
FGeometryCollectionRemoveOnSleepDynamicFacade::GetMaxSleepTime
          (FGeometryCollectionRemoveOnSleepDynamicFacade *this,int param_1)

{
  float *pfVar1;
  
  pfVar1 = TManagedArrayAccessor<float>::operator[](&this->MaxSleepTimeAttribute,param_1);
  return *pfVar1;
}

// GetSleepRemovalDuration @ 1463b8990

float __thiscall
FGeometryCollectionRemoveOnSleepDynamicFacade::GetSleepRemovalDuration
          (FGeometryCollectionRemoveOnSleepDynamicFacade *this,int param_1)

{
  float *pfVar1;
  
  pfVar1 = TManagedArrayAccessor<float>::operator[](&this->SleepRemovalDurationAttribute,param_1);
  return *pfVar1;
}

// IsConst @ 1463bcad0

bool __thiscall
FGeometryCollectionRemoveOnSleepDynamicFacade::IsConst
          (FGeometryCollectionRemoveOnSleepDynamicFacade *this)

{
  return (this->SleepTimerAttribute).Collection == (FManagedArrayCollection *)0x0;
}

// IsRemovalActive @ 1463bcc30

bool __thiscall
FGeometryCollectionRemoveOnSleepDynamicFacade::IsRemovalActive
          (FGeometryCollectionRemoveOnSleepDynamicFacade *this,int param_1)

{
  float *pfVar1;
  
  pfVar1 = TManagedArrayAccessor<float>::operator[](&this->MaxSleepTimeAttribute,param_1);
  return 0.0 < *pfVar1 || *pfVar1 == 0.0;
}

// IsValid @ 1463bccc0

bool __thiscall
FGeometryCollectionRemoveOnSleepDynamicFacade::IsValid
          (FGeometryCollectionRemoveOnSleepDynamicFacade *this)

{
  if (((((this->SleepTimerAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0) &&
       ((this->MaxSleepTimeAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
      ((this->SleepRemovalDurationAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
     ((this->LastPositionAttribute).ConstAttributeArray !=
      (TManagedArray<UE::Math::TVector<double>_> *)0x0)) {
    return true;
  }
  return false;
}

// SetAttributeValues @ 1463c7900

void __thiscall
FGeometryCollectionRemoveOnSleepDynamicFacade::SetAttributeValues
          (FGeometryCollectionRemoveOnSleepDynamicFacade *this,TVector2<double> *param_1,
          TVector2<double> *param_2)

{
  TManagedArrayBase<float> *this_00;
  TManagedArrayBase<UE::Math::TVector<double>_> *this_01;
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  uint uVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float local_res8 [2];
  
  if (((this->SleepTimerAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineRemoval.cpp"
                         ,0xae,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((((this->SleepTimerAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0) &&
       ((this->MaxSleepTimeAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
      ((this->SleepRemovalDurationAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
     ((this->LastPositionAttribute).ConstAttributeArray !=
      (TManagedArray<UE::Math::TVector<double>_> *)0x0)) {
    local_res8[0] = 0.0;
    if (((this->SleepTimerAttribute).Collection == (FManagedArrayCollection *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0xac,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = (TManagedArrayBase<float> *)(this->SleepTimerAttribute).AttributeArray;
    if (this_00 != (TManagedArrayBase<float> *)0x0) {
      TManagedArrayBase<float>::Fill(this_00,local_res8);
    }
    if (((this->LastPositionAttribute).Collection == (FManagedArrayCollection *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0xac,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_01 = (TManagedArrayBase<UE::Math::TVector<double>_> *)
              (this->LastPositionAttribute).AttributeArray;
    if (this_01 != (TManagedArrayBase<UE::Math::TVector<double>_> *)0x0) {
      TManagedArrayBase<UE::Math::TVector<double>_>::Fill
                (this_01,&UE::Math::TVector<double>::ZeroVector);
    }
    if ((((this->MaxSleepTimeAttribute).AttributeArray == (TManagedArray<float> *)0x0) ||
        ((this->MaxSleepTimeAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ((this->MaxSleepTimeAttribute).AttributeArray)->field_0x8 = 1;
    dVar10 = (param_1->field0_0x0)._s_0.X;
    dVar11 = (param_1->field0_0x0)._s_0.Y;
    if (dVar10 <= 0.0) {
      dVar10 = 0.0;
    }
    pTVar1 = (this->MaxSleepTimeAttribute).AttributeArray;
    uVar9 = 0;
    fVar12 = (float)dVar10;
    if (dVar11 <= (double)fVar12) {
      dVar11 = (double)fVar12;
    }
    iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    fVar4 = __real_38000100;
    if (0 < iVar6) {
      lVar8 = 0;
      do {
        uVar7 = rand();
        uVar3 = 0;
        if ((int)uVar9 < *(int *)&pTVar1->field_0x18) {
          uVar3 = ~uVar9 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar9 = uVar9 + 1;
        *(float *)(*(longlong *)&pTVar1->field_0x10 + lVar8) =
             (float)(uVar7 & 0x7fff) * ((float)dVar11 - fVar12) * fVar4 + fVar12;
        lVar8 = lVar8 + 4;
        iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
      } while ((int)uVar9 < iVar6);
    }
    if ((((this->SleepRemovalDurationAttribute).AttributeArray == (TManagedArray<float> *)0x0) ||
        ((this->SleepRemovalDurationAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ((this->SleepRemovalDurationAttribute).AttributeArray)->field_0x8 = 1;
    dVar10 = (param_2->field0_0x0)._s_0.X;
    pTVar1 = (this->SleepRemovalDurationAttribute).AttributeArray;
    if (dVar10 <= 0.0) {
      dVar10 = 0.0;
    }
    dVar11 = (param_2->field0_0x0)._s_0.Y;
    uVar9 = 0;
    fVar12 = (float)dVar10;
    if (dVar11 <= (double)fVar12) {
      dVar11 = (double)fVar12;
    }
    iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    if (0 < iVar6) {
      lVar8 = 0;
      do {
        uVar7 = rand();
        uVar3 = 0;
        if ((int)uVar9 < *(int *)&pTVar1->field_0x18) {
          uVar3 = ~uVar9 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar9 = uVar9 + 1;
        *(float *)(lVar8 + *(longlong *)&pTVar1->field_0x10) =
             (float)(uVar7 & 0x7fff) * ((float)dVar11 - fVar12) * fVar4 + fVar12;
        lVar8 = lVar8 + 4;
        iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
      } while ((int)uVar9 < iVar6);
    }
  }
  return;
}

// SetMaxSleepTime @ 1463c9310

void __thiscall
FGeometryCollectionRemoveOnSleepDynamicFacade::SetMaxSleepTime
          (FGeometryCollectionRemoveOnSleepDynamicFacade *this,int param_1,float param_2)

{
  float local_res18 [4];
  
  local_res18[0] = param_2;
  TManagedArrayAccessor<float>::ModifyAt(&this->MaxSleepTimeAttribute,param_1,local_res18);
  return;
}

// SetSleepRemovalDuration @ 1463c96c0

void __thiscall
FGeometryCollectionRemoveOnSleepDynamicFacade::SetSleepRemovalDuration
          (FGeometryCollectionRemoveOnSleepDynamicFacade *this,int param_1,float param_2)

{
  float local_res18 [4];
  
  local_res18[0] = param_2;
  TManagedArrayAccessor<float>::ModifyAt(&this->SleepRemovalDurationAttribute,param_1,local_res18);
  return;
}

// UpdateSleepTimer @ 1463cf9b0

void __thiscall
FGeometryCollectionRemoveOnSleepDynamicFacade::UpdateSleepTimer
          (FGeometryCollectionRemoveOnSleepDynamicFacade *this,int param_1,float param_2)

{
  TManagedArray<float> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if ((this->SleepTimerAttribute).ConstAttributeArray == (TManagedArray<float> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SleepTimerAttribute.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineRemoval.cpp"
                       ,0xda,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->SleepTimerAttribute).AttributeArray == (TManagedArray<float> *)0x0) ||
     ((this->SleepTimerAttribute).Collection == (FManagedArrayCollection *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ((this->SleepTimerAttribute).AttributeArray)->field_0x8 = 1;
  pTVar1 = (this->SleepTimerAttribute).AttributeArray;
  uVar5 = 0;
  if (param_1 < *(int *)&pTVar1->field_0x18) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)&pTVar1->field_0x10;
  *(float *)(lVar2 + (longlong)param_1 * 4) = param_2 + *(float *)(lVar2 + (longlong)param_1 * 4);
  return;
}

