// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FCollectionExplodedVectorFacade @ 143f87160

FCollectionExplodedVectorFacade * __thiscall
GeometryCollection::Facades::FCollectionExplodedVectorFacade::FCollectionExplodedVectorFacade
          (FCollectionExplodedVectorFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  FName local_res10;
  
  ::FName::FName(&local_res10,"ExplodedVector");
  (this->ExplodedVectorAttribute).Name = local_res10;
  (this->ExplodedVectorAttribute).ConstCollection = param_1;
  (this->ExplodedVectorAttribute).Collection = param_1;
  (this->ExplodedVectorAttribute).Group = FTransformCollection::TransformGroup;
  (this->ExplodedVectorAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ExplodedVectorAttribute).DefaultGroupDependency.Number = 0;
  pTVar1 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                     (param_1,local_res10,FTransformCollection::TransformGroup);
  (this->ExplodedVectorAttribute).AttributeArray = pTVar1;
  (this->ExplodedVectorAttribute).ConstAttributeArray = pTVar1;
  return this;
}

// FCollectionExplodedVectorFacade @ 143f871e0

FCollectionExplodedVectorFacade * __thiscall
GeometryCollection::Facades::FCollectionExplodedVectorFacade::FCollectionExplodedVectorFacade
          (FCollectionExplodedVectorFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FCollectionExplodedVectorFacade *pFVar5;
  char *pcVar6;
  FName local_res10;
  FName local_18;
  FName local_10;
  
  ::FName::FName(&local_res10,"ExplodedVector");
  (this->ExplodedVectorAttribute).Name = local_res10;
  (this->ExplodedVectorAttribute).ConstCollection = param_1;
  (this->ExplodedVectorAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ExplodedVectorAttribute).Group = FTransformCollection::TransformGroup;
  (this->ExplodedVectorAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ExplodedVectorAttribute).DefaultGroupDependency.Number = 0;
  (this->ExplodedVectorAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_10 = FTransformCollection::TransformGroup;
  local_18 = local_res10;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\x01')) {
    pTVar1 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar6 + 0x20);
    if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FCollectionExplodedVectorFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
    (this->ExplodedVectorAttribute).ConstAttributeArray = pTVar1;
    return this;
  }
  (this->ExplodedVectorAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  return this;
}

// DefineSchema @ 143fa9250

void __thiscall
GeometryCollection::Facades::FCollectionExplodedVectorFacade::DefineSchema
          (FCollectionExplodedVectorFacade *this)

{
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->ExplodedVectorAttribute,MakePersistent,(FName)0x0);
  return;
}

// IsValid @ 143fb7b70

bool __thiscall
GeometryCollection::Facades::FCollectionExplodedVectorFacade::IsValid
          (FCollectionExplodedVectorFacade *this)

{
  return (this->ExplodedVectorAttribute).ConstAttributeArray !=
         (TManagedArray<UE::Math::TVector<float>_> *)0x0;
}

// UpdateGlobalMatricesWithExplodedVectors @ 143fcd460

void __thiscall
GeometryCollection::Facades::FCollectionExplodedVectorFacade::
UpdateGlobalMatricesWithExplodedVectors
          (FCollectionExplodedVectorFacade *this,
          TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  TManagedArray<UE::Math::TVector<float>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  bool bVar25;
  int iVar26;
  uint uVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  longlong local_c8;
  
  pTVar9 = (this->ExplodedVectorAttribute).ConstAttributeArray;
  if (pTVar9 != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    iVar8 = param_1->ArrayNum;
    if (((0 < iVar8) &&
        (iVar26 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9), iVar8 == iVar26)) &&
       (uVar29 = 0, 0 < iVar8)) {
      lVar28 = 0;
      lVar31 = 0;
      local_c8 = 0;
      do {
        uVar30 = ~uVar29 >> 0x1f;
        uVar27 = 0;
        if ((int)uVar29 < param_1->ArrayNum) {
          uVar27 = uVar30;
        }
        if ((uVar27 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar10 = (param_1->AllocatorInstance).Data;
        uVar27 = 0;
        if ((int)uVar29 < *(int *)&pTVar9->field_0x18) {
          uVar27 = uVar30;
        }
        if ((uVar27 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar11 = *(longlong *)&pTVar9->field_0x10;
        uVar13 = *(undefined8 *)(pFVar10 + lVar28);
        uVar14 = *(undefined8 *)(pFVar10 + lVar28 + 8);
        fVar1 = *(float *)(local_c8 + 4 + lVar11);
        uVar15 = *(undefined8 *)(pFVar10 + lVar28 + 0x10);
        uVar16 = *(undefined8 *)(pFVar10 + lVar28 + 0x10 + 8);
        uVar17 = *(undefined8 *)(pFVar10 + lVar28 + 0x20);
        uVar18 = *(undefined8 *)(pFVar10 + lVar28 + 0x20 + 8);
        dVar4 = *(double *)(pFVar10 + lVar28 + 0x68);
        uVar19 = *(undefined8 *)(pFVar10 + lVar28 + 0x30);
        uVar20 = *(undefined8 *)(pFVar10 + lVar28 + 0x30 + 8);
        uVar21 = *(undefined8 *)(pFVar10 + lVar28 + 0x40);
        uVar22 = *(undefined8 *)(pFVar10 + lVar28 + 0x40 + 8);
        uVar23 = *(undefined8 *)(pFVar10 + lVar28 + 0x50);
        uVar24 = *(undefined8 *)(pFVar10 + lVar28 + 0x50 + 8);
        fVar2 = *(float *)(local_c8 + lVar11);
        dVar5 = *(double *)(pFVar10 + lVar28 + 0x60);
        fVar3 = *(float *)(local_c8 + 8 + lVar11);
        uVar27 = 0;
        if ((int)uVar29 < param_1->ArrayNum) {
          uVar27 = uVar30;
        }
        dVar6 = *(double *)(pFVar10 + lVar28 + 0x70);
        dVar7 = *(double *)(pFVar10 + lVar28 + 0x78);
        if ((uVar27 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar10 = (param_1->AllocatorInstance).Data;
        local_c8 = local_c8 + 0xc;
        uVar29 = uVar29 + 1;
        lVar31 = lVar31 + 1;
        *(undefined8 *)(pFVar10 + lVar28) = uVar13;
        *(undefined8 *)(pFVar10 + lVar28 + 8) = uVar14;
        *(undefined8 *)(pFVar10 + lVar28 + 0x10) = uVar15;
        *(undefined8 *)(pFVar10 + lVar28 + 0x10 + 8) = uVar16;
        *(undefined8 *)(pFVar10 + lVar28 + 0x20) = uVar17;
        *(undefined8 *)(pFVar10 + lVar28 + 0x20 + 8) = uVar18;
        *(undefined8 *)(pFVar10 + lVar28 + 0x30) = uVar19;
        *(undefined8 *)(pFVar10 + lVar28 + 0x30 + 8) = uVar20;
        *(undefined8 *)(pFVar10 + lVar28 + 0x40) = uVar21;
        *(undefined8 *)(pFVar10 + lVar28 + 0x40 + 8) = uVar22;
        *(undefined8 *)(pFVar10 + lVar28 + 0x50) = uVar23;
        *(undefined8 *)(pFVar10 + lVar28 + 0x50 + 8) = uVar24;
        *(double *)(pFVar10 + lVar28 + 0x60) = (double)fVar2 + dVar5;
        *(double *)(pFVar10 + lVar28 + 0x60 + 8) = (double)fVar1 + dVar4;
        *(double *)(pFVar10 + lVar28 + 0x70) = (double)fVar3 + dVar6;
        *(double *)(pFVar10 + lVar28 + 0x70 + 8) = dVar7;
        lVar28 = lVar28 + 0x80;
      } while (lVar31 < iVar8);
    }
  }
  return;
}

// UpdateGlobalMatricesWithExplodedVectors @ 143fcd6f0

void __thiscall
GeometryCollection::Facades::FCollectionExplodedVectorFacade::
UpdateGlobalMatricesWithExplodedVectors
          (FCollectionExplodedVectorFacade *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  TManagedArray<UE::Math::TVector<float>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  
  pTVar6 = (this->ExplodedVectorAttribute).ConstAttributeArray;
  if (pTVar6 != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    iVar5 = param_1->ArrayNum;
    if (((0 < iVar5) &&
        (iVar13 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6), iVar5 == iVar13)) &&
       (uVar15 = 0, 0 < iVar5)) {
      lVar17 = 0;
      lVar18 = 0;
      lVar16 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar7 = (param_1->AllocatorInstance).Data;
        uVar14 = 0;
        if ((int)uVar15 < *(int *)&pTVar6->field_0x18) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar8 = *(longlong *)&pTVar6->field_0x10;
        uVar15 = uVar15 + 1;
        lVar18 = lVar18 + 1;
        fVar3 = *(float *)(lVar8 + 8 + lVar17);
        pfVar1 = (float *)(lVar8 + lVar17);
        pfVar2 = (float *)(lVar8 + 4 + lVar17);
        lVar17 = lVar17 + 0xc;
        dVar4 = *(double *)(pFVar7 + lVar16 + 0x30 + 8);
        dVar11 = (double)*pfVar2 + *(double *)(pFVar7 + lVar16 + 0x20 + 8);
        auVar10._8_4_ = SUB84(dVar11,0);
        auVar10._0_8_ = (double)*pfVar1 + *(double *)(pFVar7 + lVar16 + 0x20);
        auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        *(undefined1 (*) [16])(pFVar7 + lVar16 + 0x20) = auVar10;
        *(double *)(pFVar7 + lVar16 + 0x30) = (double)fVar3 + *(double *)(pFVar7 + lVar16 + 0x30);
        *(double *)(pFVar7 + lVar16 + 0x30 + 8) = dVar4 + 0.0;
        lVar16 = lVar16 + 0x60;
      } while (lVar18 < iVar5);
    }
  }
  return;
}

