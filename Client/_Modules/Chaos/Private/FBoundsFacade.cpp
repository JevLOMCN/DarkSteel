// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 16

// FBoundsFacade @ 143f85900

FBoundsFacade * __thiscall
GeometryCollection::Facades::FBoundsFacade::FBoundsFacade
          (FBoundsFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FBoundsFacade *pFVar4;
  TManagedArray<UE::Math::TVector<float>_> *pTVar5;
  TManagedArray<int> *pTVar6;
  FValueType *pFVar7;
  FValueType *this_00;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  
  this->ConstCollection = param_1;
  this->Collection = param_1;
  pFVar7 = (FValueType *)0x0;
  ::FName::FName(&local_70,"BoundingBox");
  (this->BoundingBoxAttribute).Name = local_70;
  (this->BoundingBoxAttribute).ConstCollection = param_1;
  (this->BoundingBoxAttribute).Collection = param_1;
  (this->BoundingBoxAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->BoundingBoxAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoundingBoxAttribute).DefaultGroupDependency.Number = 0;
  local_40 = local_70;
  local_38 = FGeometryCollection::GeometryGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_40);
  this_00 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar7;
  }
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FBoxType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar7 = (FValueType *)this_00->ManagedArray;
    if ((pFVar7 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoundsFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar7->GroupIndexDependency).Number = 1;
  }
  (this->BoundingBoxAttribute).AttributeArray = (TManagedArray<UE::Math::TBox<double>_> *)pFVar7;
  (this->BoundingBoxAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TBox<double>_> *)pFVar7;
  ::FName::FName(&local_68,"Vertex");
  (this->VertexAttribute).Name = local_68;
  (this->VertexAttribute).ConstCollection = param_1;
  (this->VertexAttribute).Collection = param_1;
  (this->VertexAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexAttribute).DefaultGroupDependency = FGeometryCollection::VerticesGroup;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                     (param_1,local_68,FGeometryCollection::VerticesGroup);
  (this->VertexAttribute).AttributeArray = pTVar5;
  (this->VertexAttribute).ConstAttributeArray = pTVar5;
  ::FName::FName(&local_60,"BoneMap");
  (this->BoneMapAttribute).Name = local_60;
  (this->BoneMapAttribute).ConstCollection = param_1;
  (this->BoneMapAttribute).Collection = param_1;
  (this->BoneMapAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->BoneMapAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneMapAttribute).DefaultGroupDependency.Number = 0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_60,FGeometryCollection::VerticesGroup);
  (this->BoneMapAttribute).AttributeArray = pTVar6;
  (this->BoneMapAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_58,"TransformToGeometryIndex");
  (this->TransformToGeometryIndexAttribute).Name = local_58;
  (this->TransformToGeometryIndexAttribute).ConstCollection = param_1;
  (this->TransformToGeometryIndexAttribute).Collection = param_1;
  (this->TransformToGeometryIndexAttribute).Group = FTransformCollection::TransformGroup;
  (this->TransformToGeometryIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TransformToGeometryIndexAttribute).DefaultGroupDependency.Number = 0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_58,FTransformCollection::TransformGroup);
  (this->TransformToGeometryIndexAttribute).AttributeArray = pTVar6;
  (this->TransformToGeometryIndexAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_50,"VertexStart");
  (this->VertexStartAttribute).Name = local_50;
  (this->VertexStartAttribute).ConstCollection = param_1;
  (this->VertexStartAttribute).Collection = param_1;
  (this->VertexStartAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->VertexStartAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexStartAttribute).DefaultGroupDependency.Number = 0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_50,FGeometryCollection::GeometryGroup);
  (this->VertexStartAttribute).AttributeArray = pTVar6;
  (this->VertexStartAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_48,"VertexCount");
  (this->VertexCountAttribute).Name = local_48;
  (this->VertexCountAttribute).ConstCollection = param_1;
  (this->VertexCountAttribute).Collection = param_1;
  (this->VertexCountAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->VertexCountAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexCountAttribute).DefaultGroupDependency.Number = 0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_48,FGeometryCollection::GeometryGroup);
  (this->VertexCountAttribute).AttributeArray = pTVar6;
  (this->VertexCountAttribute).ConstAttributeArray = pTVar6;
  return this;
}

// FBoundsFacade @ 143f85bd0

FBoundsFacade * __thiscall
GeometryCollection::Facades::FBoundsFacade::FBoundsFacade
          (FBoundsFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FBoundsFacade *pFVar4;
  TManagedArray<int> *pTVar5;
  char *pcVar6;
  TManagedArray<UE::Math::TBox<double>_> *pTVar7;
  TManagedArray<UE::Math::TVector<float>_> *pTVar8;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  ::FName::FName(&local_80,"BoundingBox");
  (this->BoundingBoxAttribute).Name = local_80;
  (this->BoundingBoxAttribute).ConstCollection = param_1;
  (this->BoundingBoxAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->BoundingBoxAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->BoundingBoxAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoundingBoxAttribute).DefaultGroupDependency.Number = 0;
  (this->BoundingBoxAttribute).AttributeArray = (TManagedArray<UE::Math::TBox<double>_> *)0x0;
  local_50 = local_80;
  local_48 = FGeometryCollection::GeometryGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\r')) {
    pTVar7 = (TManagedArray<UE::Math::TBox<double>_> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<UE::Math::TBox<double>_> **)(pcVar6 + 0x20);
    if (pTVar7 == (TManagedArray<UE::Math::TBox<double>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBoundsFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BoundingBoxAttribute).ConstAttributeArray = pTVar7;
  ::FName::FName(&local_78,"Vertex");
  (this->VertexAttribute).Name = local_78;
  (this->VertexAttribute).ConstCollection = param_1;
  (this->VertexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexAttribute).DefaultGroupDependency = FGeometryCollection::VerticesGroup;
  (this->VertexAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_40 = local_78;
  local_38 = FGeometryCollection::VerticesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_40);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x01')) {
    pTVar8 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar6 + 0x20);
    if (pTVar8 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBoundsFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->VertexAttribute).ConstAttributeArray = pTVar8;
  ::FName::FName(&local_70,"BoneMap");
  (this->BoneMapAttribute).Name = local_70;
  (this->BoneMapAttribute).ConstCollection = param_1;
  (this->BoneMapAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->BoneMapAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->BoneMapAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneMapAttribute).DefaultGroupDependency.Number = 0;
  (this->BoneMapAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_70,FGeometryCollection::VerticesGroup);
  (this->BoneMapAttribute).ConstAttributeArray = pTVar5;
  ::FName::FName(&local_68,"TransformToGeometryIndex");
  (this->TransformToGeometryIndexAttribute).Name = local_68;
  (this->TransformToGeometryIndexAttribute).ConstCollection = param_1;
  (this->TransformToGeometryIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TransformToGeometryIndexAttribute).Group = FTransformCollection::TransformGroup;
  (this->TransformToGeometryIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TransformToGeometryIndexAttribute).DefaultGroupDependency.Number = 0;
  (this->TransformToGeometryIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_68,FTransformCollection::TransformGroup);
  (this->TransformToGeometryIndexAttribute).ConstAttributeArray = pTVar5;
  ::FName::FName(&local_60,"VertexStart");
  (this->VertexStartAttribute).Name = local_60;
  (this->VertexStartAttribute).ConstCollection = param_1;
  (this->VertexStartAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexStartAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->VertexStartAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexStartAttribute).DefaultGroupDependency.Number = 0;
  (this->VertexStartAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_60,FGeometryCollection::GeometryGroup);
  (this->VertexStartAttribute).ConstAttributeArray = pTVar5;
  ::FName::FName(&local_58,"VertexCount");
  (this->VertexCountAttribute).Name = local_58;
  (this->VertexCountAttribute).ConstCollection = param_1;
  (this->VertexCountAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexCountAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->VertexCountAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexCountAttribute).DefaultGroupDependency.Number = 0;
  (this->VertexCountAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_58,FGeometryCollection::GeometryGroup);
  (this->VertexCountAttribute).ConstAttributeArray = pTVar5;
  return this;
}

// ComputeBoundingBox @ 143fa4bb0

TBox<double> * __thiscall
GeometryCollection::Facades::FBoundsFacade::ComputeBoundingBox
          (FBoundsFacade *this,TBox<double> *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TBox<double> *pTVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->IsValid = '\0';
  uVar11 = 0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)uVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)uVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar16 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
  dVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar16;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1;
  iVar10 = param_1->ArrayNum;
  if (0 < iVar10) {
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar11 < iVar10) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TBox<double> *)(*pcVar4)();
        return pTVar9;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (__return_storage_ptr__->IsValid == '\0') {
        dVar16 = *(double *)(pFVar3 + lVar12);
        dVar15 = *(double *)(pFVar3 + lVar12 + 8);
        __return_storage_ptr__->IsValid = '\x01';
        dVar1 = *(double *)(pFVar3 + lVar12 + 0x10);
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar16;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar15;
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar16;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar15;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1;
      }
      else {
        dVar1 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
        uVar13 = SUB84(dVar1,0);
        uVar14 = (undefined4)((ulonglong)dVar1 >> 0x20);
        dVar16 = *(double *)(pFVar3 + lVar12);
        dVar15 = *(double *)(pFVar3 + lVar12 + 0x10);
        if (dVar16 <= dVar1) {
          uVar13 = SUB84(dVar16,0);
          uVar14 = (undefined4)((ulonglong)dVar16 >> 0x20);
        }
        dVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        if (dVar16 <= dVar1) {
          dVar16 = dVar1;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar14,uVar13);
        dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
        uVar13 = SUB84(dVar1,0);
        uVar14 = (undefined4)((ulonglong)dVar1 >> 0x20);
        dVar2 = *(double *)(pFVar3 + lVar12 + 8);
        if (dVar2 <= dVar1) {
          uVar13 = SUB84(dVar2,0);
          uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar16;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar14,uVar13);
        uVar13 = SUB84(dVar15,0);
        uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
        dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
        if (dVar1 <= dVar15) {
          uVar13 = SUB84(dVar1,0);
          uVar14 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        dVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        if (dVar15 <= dVar1) {
          dVar15 = dVar1;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar14,uVar13);
        dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
        uVar13 = SUB84(dVar1,0);
        uVar14 = (undefined4)((ulonglong)dVar1 >> 0x20);
        dVar16 = *(double *)(pFVar3 + lVar12 + 8);
        if (dVar1 <= dVar16) {
          uVar13 = SUB84(dVar16,0);
          uVar14 = (undefined4)((ulonglong)dVar16 >> 0x20);
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar15;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar14,uVar13);
      }
      iVar10 = param_1->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x18;
    } while ((int)uVar11 < iVar10);
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// ComputeBoundingSphere @ 143fa4d20

TSphere<double> * __thiscall
GeometryCollection::Facades::FBoundsFacade::ComputeBoundingSphere
          (FBoundsFacade *this,TSphere<double> *__return_storage_ptr__,TBox<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  dVar9 = __real_3fe0000000000000;
  dVar1 = (param_1->Min).field0_0x0._s_0.X;
  dVar2 = (param_1->Min).field0_0x0._s_0.Y;
  dVar3 = (param_1->Min).field0_0x0._s_0.Z;
  dVar4 = (param_1->Max).field0_0x0._s_0.X;
  dVar5 = (param_1->Max).field0_0x0._s_0.Z;
  dVar7 = dVar4 - dVar1;
  dVar6 = (param_1->Max).field0_0x0._s_0.Y;
  dVar8 = dVar5 - dVar3;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = (dVar4 + dVar1) * __real_3fe0000000000000;
  dVar1 = dVar6 - dVar2;
  auVar10._0_8_ = (dVar6 + dVar2) * dVar9;
  auVar10._8_8_ = 0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = auVar10._0_8_;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = (dVar5 + dVar3) * dVar9;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar1 * dVar1 + dVar7 * dVar7 + dVar8 * dVar8;
  auVar11 = sqrtpd(auVar10,auVar11);
  __return_storage_ptr__->W = auVar11._0_8_ * dVar9;
  return __return_storage_ptr__;
}

// ComputeBoundingSphere @ 143fa4de0

void __thiscall
GeometryCollection::Facades::FBoundsFacade::ComputeBoundingSphere
          (FBoundsFacade *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TSphere<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  double dVar17;
  TVector<double>_u_0 local_c8;
  double dStack_b0;
  TVector<double>_u_0 local_a8;
  double local_90;
  double local_88;
  double local_80;
  
  ComputeBoundingSphereImpl(this,param_1,(TSphere<double> *)&local_c8._s_0);
  GetBoundingBoxInCollectionSpace(this,(TBox<double> *)&local_a8._s_0);
  uVar15 = 0;
  dVar17 = 0.0;
  iVar14 = param_1->ArrayNum;
  uVar6 = (local_a8._s_0.X + local_90) * __real_3fe0000000000000;
  uVar7 = (local_a8._s_0.Y + local_88) * __real_3fe0000000000000;
  uVar8 = (local_a8._s_0.Z + local_80) * __real_3fe0000000000000;
  if (0 < iVar14) {
    lVar16 = 0;
    dVar9 = 0.0;
    do {
      uVar13 = 0;
      if ((int)uVar15 < iVar14) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      iVar14 = param_1->ArrayNum;
      uVar15 = uVar15 + 1;
      lVar10 = lVar16 + 8;
      lVar11 = lVar16 + 0x10;
      pFVar1 = pFVar2 + lVar16;
      lVar16 = lVar16 + 0x18;
      dVar17 = ((double)uVar7 - *(double *)(pFVar2 + lVar10)) *
               ((double)uVar7 - *(double *)(pFVar2 + lVar10)) +
               ((double)uVar6 - *(double *)pFVar1) * ((double)uVar6 - *(double *)pFVar1) +
               ((double)uVar8 - *(double *)(pFVar2 + lVar11)) *
               ((double)uVar8 - *(double *)(pFVar2 + lVar11));
      if (dVar17 <= dVar9) {
        dVar17 = dVar9;
      }
      dVar9 = dVar17;
    } while ((int)uVar15 < iVar14);
  }
  dVar17 = SQRT(dVar17);
  if (dStack_b0 < dVar17) {
    uVar6 = local_c8._s_0.X;
    uVar7 = local_c8._s_0.Y;
    uVar8 = local_c8._s_0.Z;
    dVar17 = dStack_b0;
  }
  auVar4._8_4_ = (int)uVar7;
  auVar4._0_8_ = uVar6;
  auVar4._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
  *(undefined1 (*) [16])&(param_2->Center).field0_0x0 = auVar4;
  auVar5._8_4_ = SUB84(dVar17,0);
  auVar5._0_8_ = uVar8;
  auVar5._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_2->Center).field0_0x0 + 0x10) = auVar5;
  return;
}

// ComputeBoundingSphereImpl2 @ 143fa5000

void __thiscall
GeometryCollection::Facades::FBoundsFacade::ComputeBoundingSphereImpl2
          (FBoundsFacade *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TSphere<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  TVector<double>_u_0 local_58;
  double local_40;
  double local_38;
  double local_30;
  
  GetBoundingBoxInCollectionSpace(this,(TBox<double> *)&local_58._s_0);
  dVar9 = __real_3fe0000000000000;
  uVar7 = 0;
  dVar12 = (local_58._s_0.Y + local_38) * __real_3fe0000000000000;
  (param_2->Center).field0_0x0._s_0.X = (local_58._s_0.X + local_40) * __real_3fe0000000000000;
  dVar3 = 0.0;
  (param_2->Center).field0_0x0._s_0.Y = dVar12;
  (param_2->Center).field0_0x0._s_0.Z = (local_58._s_0.Z + local_30) * dVar9;
  param_2->W = 0.0;
  iVar6 = param_1->ArrayNum;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      dVar12 = (param_2->Center).field0_0x0._s_0.Y - *(double *)(pFVar1 + lVar8 + 8);
      dVar3 = (param_2->Center).field0_0x0._s_0.Z - *(double *)(pFVar1 + lVar8 + 0x10);
      dVar9 = (param_2->Center).field0_0x0._s_0.X - *(double *)(pFVar1 + lVar8);
      dVar9 = dVar9 * dVar9;
      dVar12 = dVar12 * dVar12 + dVar9 + dVar3 * dVar3;
      dVar3 = param_2->W;
      if (param_2->W < dVar12) {
        param_2->W = dVar12;
        dVar3 = dVar12;
      }
      iVar6 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x18;
    } while ((int)uVar7 < iVar6);
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar9;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar3;
  auVar11 = sqrtpd(auVar10,auVar11);
  param_2->W = auVar11._0_8_;
  return;
}

// ComputeBoundingSphereImpl @ 143fa5150

void __thiscall
GeometryCollection::Facades::FBoundsFacade::ComputeBoundingSphereImpl
          (FBoundsFacade *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TSphere<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar23;
  undefined1 auVar22 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 local_1a8 [16];
  double local_198;
  undefined1 auStack_190 [16];
  double dStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined1 local_158 [16];
  double local_148;
  undefined1 auStack_140 [16];
  double dStack_130;
  undefined1 local_128 [16];
  double local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  
  iVar18 = param_1->ArrayNum;
  uVar20 = 0;
  uVar30 = 0;
  uVar32 = 0;
  bVar16 = true;
  local_168 = 0.0;
  local_118 = 0.0;
  local_1a8 = ZEXT816(0);
  local_198 = 0.0;
  auStack_190 = ZEXT816(0);
  dStack_180 = 0.0;
  local_178 = ZEXT816(0);
  local_158 = ZEXT816(0);
  local_148 = 0.0;
  auStack_140 = ZEXT816(0);
  dStack_130 = 0.0;
  local_128 = ZEXT816(0);
  dVar26 = 0.0;
  if (0 < iVar18) {
    uVar38 = (undefined4)local_e0;
    uVar39 = (undefined4)((ulonglong)local_e0 >> 0x20);
    lVar19 = 0;
    uVar30 = (undefined4)local_e8;
    uVar32 = (undefined4)((ulonglong)local_e8 >> 0x20);
    uVar28 = (undefined4)local_f0;
    uVar29 = (undefined4)((ulonglong)local_f0 >> 0x20);
    uVar40 = (undefined4)local_f8;
    uVar41 = (undefined4)((ulonglong)local_f8 >> 0x20);
    uVar31 = (undefined4)local_100;
    uVar33 = (undefined4)((ulonglong)local_100 >> 0x20);
    uVar34 = (int)local_108;
    uVar36 = (int)((ulonglong)local_108 >> 0x20);
    do {
      uVar17 = 0;
      if ((int)uVar20 < iVar18) {
        uVar17 = ~uVar20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      dVar26 = *(double *)(pFVar1 + lVar19 + 0x10);
      auVar22 = *(undefined1 (*) [16])(pFVar1 + lVar19);
      uVar3 = auVar22._0_4_;
      uVar4 = auVar22._4_4_;
      uVar5 = auVar22._8_4_;
      uVar6 = auVar22._12_4_;
      uVar21 = SUB84(dVar26,0);
      uVar23 = (undefined4)((ulonglong)dVar26 >> 0x20);
      uVar35 = uVar3;
      uVar37 = uVar4;
      if (bVar16) {
        bVar16 = false;
        uVar30 = uVar5;
        uVar32 = uVar6;
        uVar28 = uVar3;
        uVar29 = uVar4;
        uVar31 = uVar5;
        uVar33 = uVar6;
        uVar38 = uVar21;
        uVar39 = uVar23;
        uVar40 = uVar21;
        uVar41 = uVar23;
        local_1a8 = auVar22;
        local_198 = dVar26;
        auStack_190 = auVar22;
        dStack_180 = dVar26;
        local_178 = auVar22;
        local_168 = dVar26;
        local_158 = auVar22;
        local_148 = dVar26;
        auStack_140 = auVar22;
        dStack_130 = dVar26;
        local_128 = auVar22;
        local_118 = dVar26;
      }
      else {
        dVar8 = auVar22._0_8_;
        auVar7 = auVar22;
        dVar10 = dVar26;
        if (((double)CONCAT44(uVar36,uVar34) <= dVar8) &&
           (uVar35 = uVar34, uVar37 = uVar36, auVar7 = local_1a8, dVar10 = local_198,
           (double)CONCAT44(uVar29,uVar28) <= dVar8 && dVar8 != (double)CONCAT44(uVar29,uVar28))) {
          uVar28 = uVar3;
          uVar29 = uVar4;
          local_158 = auVar22;
          local_148 = dVar26;
        }
        local_198 = dVar10;
        local_1a8 = auVar7;
        dVar8 = auVar22._8_8_;
        if ((double)CONCAT44(uVar33,uVar31) <= dVar8) {
          if ((double)CONCAT44(uVar32,uVar30) <= dVar8 && dVar8 != (double)CONCAT44(uVar32,uVar30))
          {
            auStack_140 = *(undefined1 (*) [16])(pFVar1 + lVar19);
            dStack_130 = *(double *)(pFVar1 + lVar19 + 0x10);
            uVar30 = uVar5;
            uVar32 = uVar6;
          }
        }
        else {
          auStack_190 = *(undefined1 (*) [16])(pFVar1 + lVar19);
          dStack_180 = *(double *)(pFVar1 + lVar19 + 0x10);
          uVar31 = uVar5;
          uVar33 = uVar6;
        }
        if ((double)CONCAT44(uVar41,uVar40) <= dVar26) {
          if ((double)CONCAT44(uVar39,uVar38) <= dVar26 && dVar26 != (double)CONCAT44(uVar39,uVar38)
             ) {
            local_118 = *(double *)(pFVar1 + lVar19 + 0x10);
            local_128 = *(undefined1 (*) [16])(pFVar1 + lVar19);
            uVar38 = uVar21;
            uVar39 = uVar23;
          }
        }
        else {
          local_168 = *(double *)(pFVar1 + lVar19 + 0x10);
          local_178 = *(undefined1 (*) [16])(pFVar1 + lVar19);
          uVar40 = uVar21;
          uVar41 = uVar23;
        }
      }
      iVar18 = param_1->ArrayNum;
      uVar20 = uVar20 + 1;
      lVar19 = lVar19 + 0x18;
      uVar34 = uVar35;
      uVar36 = uVar37;
    } while ((int)uVar20 < iVar18);
    uVar30 = SUB84(local_168,0);
    uVar32 = (undefined4)((ulonglong)local_168 >> 0x20);
    dVar26 = local_118;
  }
  dVar14 = __real_3fe0000000000000;
  dVar26 = dVar26 - (double)CONCAT44(uVar32,uVar30);
  dVar13 = (double)local_158._0_8_ - (double)local_1a8._0_8_;
  dVar8 = (double)local_158._8_8_ - (double)local_1a8._8_8_;
  local_148 = local_148 - local_198;
  dVar11 = (double)auStack_140._0_8_ - (double)auStack_190._0_8_;
  dVar10 = (double)auStack_140._8_8_ - (double)auStack_190._8_8_;
  dStack_130 = dStack_130 - dStack_180;
  dVar24 = (double)local_128._0_8_ - (double)local_178._0_8_;
  dVar25 = (double)local_128._8_8_ - (double)local_178._8_8_;
  dVar12 = dVar8 * dVar8 + dVar13 * dVar13 + local_148 * local_148;
  dVar9 = 0.0;
  if (0.0 < dVar12) {
    dVar8 = dVar8 * __real_3fe0000000000000;
    local_148 = local_148 * __real_3fe0000000000000;
    (param_2->Center).field0_0x0._s_0.X = dVar13 * __real_3fe0000000000000 + (double)local_1a8._0_8_
    ;
    (param_2->Center).field0_0x0._s_0.Y = dVar8 + (double)local_1a8._8_8_;
    (param_2->Center).field0_0x0._s_0.Z = local_148 + local_198;
    param_2->W = 0.0;
    dVar9 = dVar12;
  }
  dVar8 = dVar10 * dVar10 + dVar11 * dVar11 + dStack_130 * dStack_130;
  if (dVar9 < dVar8) {
    (param_2->Center).field0_0x0._s_0.X = dVar11 * dVar14 + (double)auStack_190._0_8_;
    (param_2->Center).field0_0x0._s_0.Y = dVar10 * dVar14 + (double)auStack_190._8_8_;
    (param_2->Center).field0_0x0._s_0.Z = dStack_130 * dVar14 + dStack_180;
    param_2->W = 0.0;
    dVar9 = dVar8;
  }
  if (dVar9 < dVar25 * dVar25 + dVar24 * dVar24 + dVar26 * dVar26) {
    (param_2->Center).field0_0x0._s_0.X = dVar24 * dVar14 + (double)local_178._0_8_;
    (param_2->Center).field0_0x0._s_0.Y = dVar25 * dVar14 + (double)local_178._8_8_;
    (param_2->Center).field0_0x0._s_0.Z = dVar26 * dVar14 + local_168;
    param_2->W = 0.0;
  }
  dVar8 = __real_3fd0000000000000;
  iVar18 = param_1->ArrayNum;
  if (dVar10 <= dVar13) {
    dVar10 = dVar13;
  }
  uVar20 = 0;
  if (dVar10 <= dVar26) {
    dVar10 = dVar26;
  }
  dVar11 = dVar10 * dVar14;
  dVar26 = dVar10 * dVar10 * __real_3fd0000000000000;
  if (0 < iVar18) {
    lVar19 = 0;
    do {
      uVar17 = 0;
      if ((int)uVar20 < iVar18) {
        uVar17 = ~uVar20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      dVar10 = (param_2->Center).field0_0x0._s_0.X;
      dVar12 = (param_2->Center).field0_0x0._s_0.Y;
      dVar13 = (param_2->Center).field0_0x0._s_0.Z;
      dVar24 = *(double *)(pFVar1 + lVar19) - dVar10;
      dVar25 = *(double *)(pFVar1 + lVar19 + 8) - dVar12;
      dVar27 = *(double *)(pFVar1 + lVar19 + 0x10) - dVar13;
      auVar22._0_8_ = dVar24 * dVar24;
      auVar22._8_8_ = 0;
      dVar9 = dVar25 * dVar25 + auVar22._0_8_ + dVar27 * dVar27;
      if (dVar26 < dVar9) {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = dVar9;
        auVar22 = sqrtpd(auVar22,auVar7);
        dVar9 = auVar22._0_8_;
        dVar26 = dVar9 + dVar11;
        dVar11 = dVar26 * dVar14;
        dVar26 = dVar26 * dVar26 * dVar8;
        dVar9 = (dVar9 - dVar11) / dVar9;
        (param_2->Center).field0_0x0._s_0.X = dVar9 * dVar24 + dVar10;
        (param_2->Center).field0_0x0._s_0.Y = dVar9 * dVar25 + dVar12;
        (param_2->Center).field0_0x0._s_0.Z = dVar9 * dVar27 + dVar13;
      }
      iVar18 = param_1->ArrayNum;
      uVar20 = uVar20 + 1;
      lVar19 = lVar19 + 0x18;
    } while ((int)uVar20 < iVar18);
  }
  param_2->W = dVar11;
  return;
}

// DefineSchema @ 143fa8fe0

void __thiscall GeometryCollection::Facades::FBoundsFacade::DefineSchema(FBoundsFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->BoundingBoxAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionBoundsFacade.cpp"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TManagedArrayAccessor<UE::Math::TBox<double>_>::Add
            (&this->BoundingBoxAttribute,MakePersistent,(FName)0x0);
  return;
}

// GetBoundingBoxInCollectionSpace @ 143fae890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __thiscall
GeometryCollection::Facades::FBoundsFacade::GetBoundingBoxInCollectionSpace
          (FBoundsFacade *this,TBox<double> *__return_storage_ptr__)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  TManagedArray<int> *pTVar5;
  TManagedArray<UE::Math::TBox<double>_> *pTVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  TBox<double> *pTVar13;
  TMatrix<double> *pTVar14;
  uint uVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  longlong local_280;
  longlong local_278;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_270;
  TTransform<double> local_258;
  FCollectionTransformFacade local_1f8;
  TVector<double>_u_0 local_108;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  char local_d8;
  undefined7 uStack_d7;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  __return_storage_ptr__->IsValid = '\0';
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
  dVar2 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  if ((this->BoundingBoxAttribute).ConstAttributeArray !=
      (TManagedArray<UE::Math::TBox<double>_> *)0x0) {
    FCollectionTransformFacade::FCollectionTransformFacade(&local_1f8,this->ConstCollection);
    bVar9 = FCollectionTransformFacade::IsValid(&local_1f8);
    if (bVar9) {
      FCollectionTransformFacade::ComputeCollectionSpaceTransforms(&local_1f8,&local_270);
      uVar15 = 0;
      if (0 < local_270.ArrayNum) {
        lVar16 = 0;
        local_278 = 0;
        do {
          lVar7 = local_278;
          if (((this->TransformToGeometryIndexAttribute).ConstAttributeArray ==
               (TManagedArray<int> *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                 ,0x60,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            pTVar13 = (TBox<double> *)(*pcVar8)();
            return pTVar13;
          }
          pTVar5 = (this->TransformToGeometryIndexAttribute).ConstAttributeArray;
          iVar11 = *(int *)&pTVar5->field_0x18;
          uVar10 = 0;
          if ((int)uVar15 < iVar11) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if (uVar10 == 0) {
            local_288 = (longlong)(int)uVar15;
            local_280 = (longlong)iVar11;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              pTVar13 = (TBox<double> *)(*pcVar8)();
              return pTVar13;
            }
          }
          uVar10 = *(uint *)(*(longlong *)&pTVar5->field_0x10 + lVar7);
          if (((this->BoundingBoxAttribute).ConstAttributeArray ==
               (TManagedArray<UE::Math::TBox<double>_> *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                 ,0x3b,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            pTVar13 = (TBox<double> *)(*pcVar8)();
            return pTVar13;
          }
          if ((-1 < (int)uVar10) &&
             (iVar11 = (**(code **)(*(longlong *)(this->BoundingBoxAttribute).ConstAttributeArray +
                                   0x60))(), (int)uVar10 < iVar11)) {
            if (((this->BoundingBoxAttribute).ConstAttributeArray ==
                 (TManagedArray<UE::Math::TBox<double>_> *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                   ,0x60,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              pTVar13 = (TBox<double> *)(*pcVar8)();
              return pTVar13;
            }
            pTVar6 = (this->BoundingBoxAttribute).ConstAttributeArray;
            iVar11 = *(int *)&pTVar6->field_0x18;
            uVar12 = 0;
            if ((int)uVar10 < iVar11) {
              uVar12 = ~uVar10 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (local_288 = (longlong)(int)uVar10, local_280 = (longlong)iVar11,
               bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              pTVar13 = (TBox<double> *)(*pcVar8)();
              return pTVar13;
            }
            lVar7 = *(longlong *)&pTVar6->field_0x10;
            uVar12 = 0;
            if ((int)uVar15 < local_270.ArrayNum) {
              uVar12 = ~uVar15 >> 0x1f;
            }
            if (uVar12 == 0) {
              local_288 = (longlong)(int)uVar15;
              local_280 = (longlong)local_270.ArrayNum;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar8 = (code *)swi(3);
                pTVar13 = (TBox<double> *)(*pcVar8)();
                return pTVar13;
              }
            }
            local_258.Rotation.XY.m128d_f64[0] =
                 *(double *)(local_270.AllocatorInstance.Data + lVar16);
            local_258.Rotation.XY.m128d_f64[1] =
                 *(double *)(local_270.AllocatorInstance.Data + lVar16 + 8);
            local_258.Rotation.ZW.m128d_f64[0] =
                 *(double *)(local_270.AllocatorInstance.Data + lVar16 + 0x10);
            local_258.Rotation.ZW.m128d_f64[1] =
                 *(double *)(local_270.AllocatorInstance.Data + lVar16 + 0x10 + 8);
            local_258.Translation.XY.m128d_f64[0] =
                 *(double *)(local_270.AllocatorInstance.Data + lVar16 + 0x20);
            local_258.Translation.XY.m128d_f64[1] =
                 *(double *)(local_270.AllocatorInstance.Data + lVar16 + 0x20 + 8);
            local_258.Translation.ZW.m128d_f64[0] =
                 *(double *)(local_270.AllocatorInstance.Data + lVar16 + 0x30);
            local_258.Translation.ZW.m128d_f64[1] =
                 *(double *)(local_270.AllocatorInstance.Data + lVar16 + 0x30 + 8);
            local_258.Scale3D.XY.m128d_f64[0] =
                 *(double *)(local_270.AllocatorInstance.Data + lVar16 + 0x40);
            local_258.Scale3D.XY.m128d_f64[1] =
                 *(double *)(local_270.AllocatorInstance.Data + lVar16 + 0x40 + 8);
            local_258.Scale3D.ZW.m128d_f64[0] =
                 *(double *)(local_270.AllocatorInstance.Data + lVar16 + 0x50);
            local_258.Scale3D.ZW.m128d_f64[1] =
                 *(double *)(local_270.AllocatorInstance.Data + lVar16 + 0x50 + 8);
            pTVar14 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_258,&local_c8);
            UE::Math::TBox<double>::TransformBy
                      ((TBox<double> *)((longlong)(int)uVar10 * 0x38 + lVar7),
                       (TBox<double> *)&local_108._s_0,pTVar14);
            if (__return_storage_ptr__->IsValid == '\0') {
              if (local_d8 != '\0') {
                *(double *)&(__return_storage_ptr__->Min).field0_0x0 = local_108._s_0.X;
                *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) =
                     local_108._s_0.Y;
                *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) =
                     local_108._s_0.Z;
                *(double *)&(__return_storage_ptr__->Max).field0_0x0 = dStack_f0;
                *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = local_e8;
                *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10) = dStack_e0;
                __return_storage_ptr__->IsValid = local_d8;
                __return_storage_ptr__->Pad[0] = (char)uStack_d7;
                __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_d7 >> 8);
                __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_d7 >> 0x10);
                __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_d7 >> 0x18);
                __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_d7 >> 0x20);
                __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_d7 >> 0x28);
                __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_d7 >> 0x30);
              }
            }
            else if (local_d8 != '\0') {
              uVar17 = SUB84(local_108._s_0.X,0);
              uVar18 = (undefined4)((ulonglong)local_108._0_8_ >> 0x20);
              dVar2 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
              if (dVar2 <= local_108._s_0.X) {
                uVar17 = SUB84(dVar2,0);
                uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
              }
              uVar19 = SUB84(local_108._s_0.Y,0);
              uVar20 = (undefined4)((ulonglong)local_108._8_8_ >> 0x20);
              dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
              if (dVar2 <= local_108._s_0.Y) {
                uVar19 = SUB84(dVar2,0);
                uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
              }
              (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar18,uVar17);
              dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
              uVar17 = SUB84(dVar2,0);
              uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
              if (local_108._s_0.Z <= dVar2) {
                uVar17 = SUB84(local_108._s_0.Z,0);
                uVar18 = (undefined4)((ulonglong)local_108._16_8_ >> 0x20);
              }
              (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar20,uVar19);
              dVar2 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
              uVar19 = SUB84(dVar2,0);
              uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
              if (dVar2 <= dStack_f0) {
                uVar19 = SUB84(dStack_f0,0);
                uVar20 = (undefined4)((ulonglong)dStack_f0 >> 0x20);
              }
              (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar18,uVar17);
              uVar17 = SUB84(local_e8,0);
              uVar18 = (undefined4)((ulonglong)local_e8 >> 0x20);
              dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
              if (local_e8 <= dVar2) {
                uVar17 = SUB84(dVar2,0);
                uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
              }
              (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar20,uVar19);
              dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
              uVar19 = SUB84(dVar2,0);
              uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
              if (dVar2 <= dStack_e0) {
                uVar19 = SUB84(dStack_e0,0);
                uVar20 = (undefined4)((ulonglong)dStack_e0 >> 0x20);
              }
              (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar18,uVar17);
              (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar20,uVar19);
            }
          }
          local_278 = local_278 + 4;
          uVar15 = uVar15 + 1;
          lVar16 = lVar16 + 0x60;
        } while ((int)uVar15 < local_270.ArrayNum);
      }
      if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.AllocatorInstance.Data);
      }
    }
    else {
      if (((this->BoundingBoxAttribute).ConstAttributeArray ==
           (TManagedArray<UE::Math::TBox<double>_> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x67,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar13 = (TBox<double> *)(*pcVar8)();
        return pTVar13;
      }
      pTVar6 = (this->BoundingBoxAttribute).ConstAttributeArray;
      uVar15 = 0;
      iVar11 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
      if (0 < iVar11) {
        lVar16 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar15 < *(int *)&pTVar6->field_0x18) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if (uVar10 == 0) {
            local_288 = (longlong)(int)uVar15;
            local_280 = (longlong)*(int *)&pTVar6->field_0x18;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              pTVar13 = (TBox<double> *)(*pcVar8)();
              return pTVar13;
            }
          }
          lVar7 = *(longlong *)&pTVar6->field_0x10;
          if (__return_storage_ptr__->IsValid == '\0') {
            if (*(char *)(lVar7 + lVar16 + 0x30) != '\0') {
              dVar2 = ((double *)(lVar7 + lVar16))[1];
              (__return_storage_ptr__->Min).field0_0x0._s_0.X = *(double *)(lVar7 + lVar16);
              (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
              pdVar1 = (double *)(lVar7 + 0x10 + lVar16);
              dVar2 = pdVar1[1];
              (__return_storage_ptr__->Min).field0_0x0._s_0.Z = *pdVar1;
              (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
              pdVar1 = (double *)(lVar7 + 0x20 + lVar16);
              dVar2 = pdVar1[1];
              (__return_storage_ptr__->Max).field0_0x0._s_0.Y = *pdVar1;
              (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2;
              uVar4 = *(undefined8 *)(lVar7 + 0x30 + lVar16);
              __return_storage_ptr__->IsValid = (char)uVar4;
              __return_storage_ptr__->Pad[0] = (char)((ulonglong)uVar4 >> 8);
              __return_storage_ptr__->Pad[1] = (char)((ulonglong)uVar4 >> 0x10);
              __return_storage_ptr__->Pad[2] = (char)((ulonglong)uVar4 >> 0x18);
              __return_storage_ptr__->Pad[3] = (char)((ulonglong)uVar4 >> 0x20);
              __return_storage_ptr__->Pad[4] = (char)((ulonglong)uVar4 >> 0x28);
              __return_storage_ptr__->Pad[5] = (char)((ulonglong)uVar4 >> 0x30);
              __return_storage_ptr__->Pad[6] = (char)((ulonglong)uVar4 >> 0x38);
            }
          }
          else if (*(char *)(lVar7 + lVar16 + 0x30) != '\0') {
            dVar2 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
            uVar17 = SUB84(dVar2,0);
            uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
            dVar3 = *(double *)(lVar7 + lVar16);
            if (dVar3 <= dVar2) {
              uVar17 = SUB84(dVar3,0);
              uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar18,uVar17);
            dVar2 = *(double *)(lVar7 + 8 + lVar16);
            uVar17 = SUB84(dVar2,0);
            uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
            dVar3 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
            if (dVar3 <= dVar2) {
              uVar17 = SUB84(dVar3,0);
              uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar18,uVar17);
            dVar2 = *(double *)(lVar7 + 0x10 + lVar16);
            uVar17 = SUB84(dVar2,0);
            uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
            dVar3 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
            if (dVar3 <= dVar2) {
              uVar17 = SUB84(dVar3,0);
              uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar18,uVar17);
            dVar2 = *(double *)(lVar7 + 0x18 + lVar16);
            uVar17 = SUB84(dVar2,0);
            uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
            dVar3 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
            if (dVar2 <= dVar3) {
              uVar17 = SUB84(dVar3,0);
              uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar18,uVar17);
            dVar2 = *(double *)(lVar7 + 0x20 + lVar16);
            uVar17 = SUB84(dVar2,0);
            uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
            dVar3 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
            if (dVar2 <= dVar3) {
              uVar17 = SUB84(dVar3,0);
              uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar18,uVar17);
            dVar2 = *(double *)(lVar7 + 0x28 + lVar16);
            uVar17 = SUB84(dVar2,0);
            uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
            dVar3 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
            if (dVar2 <= dVar3) {
              uVar17 = SUB84(dVar3,0);
              uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar18,uVar17);
          }
          uVar15 = uVar15 + 1;
          lVar16 = lVar16 + 0x38;
          iVar11 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
        } while ((int)uVar15 < iVar11);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetBoundingBoxVertexPositions @ 143faede0

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __cdecl
GeometryCollection::Facades::FBoundsFacade::GetBoundingBoxVertexPositions
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TBox<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  
  dVar8 = (param_1->Min).field0_0x0._s_0.X;
  dVar9 = (param_1->Min).field0_0x0._s_0.Y;
  dVar2 = (param_1->Min).field0_0x0._s_0.Z;
  local_60 = (param_1->Max).field0_0x0._s_0.X;
  dStack_58 = (param_1->Max).field0_0x0._s_0.Y;
  local_50 = (param_1->Max).field0_0x0._s_0.Z;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  dVar7 = local_60 - dVar8;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  dVar6 = local_50 - dVar2;
  dVar5 = dStack_58 - dVar9;
  iVar11 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&__return_storage_ptr__->AllocatorInstance,
                      &__return_storage_ptr__->ArrayMax);
  dVar7 = dVar7 + dVar8;
  __return_storage_ptr__->ArrayNum = iVar11 + 1;
  pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar11 * 0x18;
  *(double *)pFVar1 = dVar8;
  *(double *)(pFVar1 + 8) = dVar9;
  *(double *)(pFVar3 + (longlong)iVar11 * 0x18 + 0x10) = dVar2;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_f0 = dVar7;
  dStack_e8 = dVar9;
  local_e0 = dVar2;
  if ((pFVar1 <= (FScriptContainerElement *)&local_f0) &&
     ((FScriptContainerElement *)&local_f0 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar12;
    }
  }
  iVar11 = __return_storage_ptr__->ArrayNum;
  if (iVar11 == __return_storage_ptr__->ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  dVar5 = dVar5 + dVar9;
  __return_storage_ptr__->ArrayNum = iVar11 + 1;
  pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar11 * 0x18;
  *(double *)pFVar1 = local_f0;
  *(double *)(pFVar1 + 8) = dStack_e8;
  *(double *)(pFVar3 + (longlong)iVar11 * 0x18 + 0x10) = local_e0;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_d8 = dVar7;
  dStack_d0 = dVar5;
  local_c8 = dVar2;
  if ((pFVar1 <= (FScriptContainerElement *)&local_d8) &&
     ((FScriptContainerElement *)&local_d8 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar12;
    }
  }
  iVar11 = __return_storage_ptr__->ArrayNum;
  if (iVar11 == __return_storage_ptr__->ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar11 + 1;
  pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar11 * 0x18;
  *(double *)pFVar1 = local_d8;
  *(double *)(pFVar1 + 8) = dStack_d0;
  *(double *)(pFVar3 + (longlong)iVar11 * 0x18 + 0x10) = local_c8;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_c0 = dVar8;
  dStack_b8 = dVar5;
  local_b0 = dVar2;
  if ((pFVar1 <= (FScriptContainerElement *)&local_c0) &&
     ((FScriptContainerElement *)&local_c0 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar12;
    }
  }
  iVar11 = __return_storage_ptr__->ArrayNum;
  if (iVar11 == __return_storage_ptr__->ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  dVar6 = dVar6 + dVar2;
  __return_storage_ptr__->ArrayNum = iVar11 + 1;
  pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar11 * 0x18;
  *(double *)pFVar1 = local_c0;
  *(double *)(pFVar1 + 8) = dStack_b8;
  *(double *)(pFVar3 + (longlong)iVar11 * 0x18 + 0x10) = local_b0;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_a8 = dVar8;
  dStack_a0 = dVar9;
  local_98 = dVar6;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar12;
    }
  }
  iVar11 = __return_storage_ptr__->ArrayNum;
  if (iVar11 == __return_storage_ptr__->ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar11 + 1;
  pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar11 * 0x18;
  *(double *)pFVar1 = local_a8;
  *(double *)(pFVar1 + 8) = dStack_a0;
  *(double *)(pFVar3 + (longlong)iVar11 * 0x18 + 0x10) = local_98;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_90 = dVar7;
  dStack_88 = dVar9;
  local_80 = dVar6;
  if ((pFVar1 <= (FScriptContainerElement *)&local_90) &&
     ((FScriptContainerElement *)&local_90 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar12;
    }
  }
  iVar11 = __return_storage_ptr__->ArrayNum;
  if (iVar11 == __return_storage_ptr__->ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar11 + 1;
  pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar11 * 0x18;
  *(double *)pFVar1 = local_90;
  *(double *)(pFVar1 + 8) = dStack_88;
  *(double *)(pFVar3 + (longlong)iVar11 * 0x18 + 0x10) = local_80;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_60) &&
     ((FScriptContainerElement *)&local_60 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar12;
    }
  }
  iVar11 = __return_storage_ptr__->ArrayNum;
  if (iVar11 == __return_storage_ptr__->ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar11 + 1;
  pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar11 * 0x18;
  *(double *)pFVar1 = local_60;
  *(double *)(pFVar1 + 8) = dStack_58;
  *(double *)(pFVar3 + (longlong)iVar11 * 0x18 + 0x10) = local_50;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_78 = dVar8;
  dStack_70 = dVar5;
  local_68 = dVar6;
  if ((pFVar1 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar12;
    }
  }
  iVar11 = __return_storage_ptr__->ArrayNum;
  if (iVar11 == __return_storage_ptr__->ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar11 + 1;
  pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar11 * 0x18;
  *(double *)pFVar1 = local_78;
  *(double *)(pFVar1 + 8) = dStack_70;
  *(double *)(pFVar3 + (longlong)iVar11 * 0x18 + 0x10) = local_68;
  return __return_storage_ptr__;
}

// GetBoundingSphereInCollectionSpace @ 143faf3f0

TSphere<double> * __thiscall
GeometryCollection::Facades::FBoundsFacade::GetBoundingSphereInCollectionSpace
          (FBoundsFacade *this,TSphere<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  TManagedArray<UE::Math::TVector<float>_> *pTVar2;
  TManagedArray<int> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  TManagedArray<int> *pTVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  TSphere<double> *pTVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  int iVar28;
  ulonglong uVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_2b8;
  longlong local_2a8;
  TManagedArray<int> *local_2a0;
  FBoundsFacade *local_298;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_290;
  undefined1 local_280 [16];
  double local_270;
  TManagedArray<int> *local_268;
  TSphere<double> *local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  TVector<double>_u_0 local_238;
  double dStack_220;
  TVector<double>_u_0 local_218;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined1 local_1e0 [16];
  double local_1d0;
  FCollectionTransformFacade local_1c8;
  
  uVar26 = 0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->W = 0.0;
  if ((this->VertexAttribute).ConstAttributeArray != (TManagedArray<UE::Math::TVector<float>_> *)0x0
     ) {
    local_298 = this;
    local_260 = __return_storage_ptr__;
    FCollectionTransformFacade::FCollectionTransformFacade(&local_1c8,this->ConstCollection);
    bVar20 = FCollectionTransformFacade::IsValid(&local_1c8);
    if (bVar20) {
      FCollectionTransformFacade::ComputeCollectionSpaceTransforms(&local_1c8,&local_290);
      if (((this->VertexAttribute).ConstAttributeArray ==
           (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x67,L""), bVar20)) {
        pcVar5 = (code *)swi(3);
        pTVar23 = (TSphere<double> *)(*pcVar5)();
        return pTVar23;
      }
      pTVar2 = (this->VertexAttribute).ConstAttributeArray;
      if (((this->VertexStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x67,L""), bVar20)) {
        pcVar5 = (code *)swi(3);
        pTVar23 = (TSphere<double> *)(*pcVar5)();
        return pTVar23;
      }
      local_268 = (this->VertexStartAttribute).ConstAttributeArray;
      if (((this->VertexCountAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x67,L""), bVar20)) {
        pcVar5 = (code *)swi(3);
        pTVar23 = (TSphere<double> *)(*pcVar5)();
        return pTVar23;
      }
      local_2a0 = (this->VertexCountAttribute).ConstAttributeArray;
      local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.ArrayNum = 0;
      local_2b8.ArrayMax = 0;
      uVar21 = (**(code **)(*(longlong *)pTVar2 + 0x60))(pTVar2);
      if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
      }
      if (local_2b8.ArrayMax < (int)uVar21) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar21,&local_2b8.AllocatorInstance,local_2b8.ArrayNum,&local_2b8.ArrayMax
                  );
      }
      if (0 < local_290.ArrayNum) {
        local_2a8 = 0;
        uVar29 = uVar26;
        do {
          lVar27 = local_2a8;
          uVar25 = (uint)uVar26;
          uVar21 = 0;
          if ((int)uVar25 < local_290.ArrayNum) {
            uVar21 = ~uVar25 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar5 = (code *)swi(3);
            pTVar23 = (TSphere<double> *)(*pcVar5)();
            return pTVar23;
          }
          auVar1 = *(undefined1 (*) [16])(local_290.AllocatorInstance.Data + uVar29);
          auVar46 = *(undefined1 (*) [16])(local_290.AllocatorInstance.Data + uVar29 + 0x10);
          dVar36 = *(double *)(local_290.AllocatorInstance.Data + uVar29 + 0x20);
          dVar13 = *(double *)(local_290.AllocatorInstance.Data + uVar29 + 0x20 + 8);
          dVar14 = *(double *)(local_290.AllocatorInstance.Data + uVar29 + 0x30);
          dVar15 = *(double *)(local_290.AllocatorInstance.Data + uVar29 + 0x40);
          dVar16 = *(double *)(local_290.AllocatorInstance.Data + uVar29 + 0x40 + 8);
          dVar17 = *(double *)(local_290.AllocatorInstance.Data + uVar29 + 0x50);
          dVar18 = *(double *)(local_290.AllocatorInstance.Data + uVar29 + 0x50 + 8);
          if (((this->TransformToGeometryIndexAttribute).ConstAttributeArray ==
               (TManagedArray<int> *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x60,L""), bVar20)) {
            pcVar5 = (code *)swi(3);
            pTVar23 = (TSphere<double> *)(*pcVar5)();
            return pTVar23;
          }
          pTVar3 = (this->TransformToGeometryIndexAttribute).ConstAttributeArray;
          uVar21 = 0;
          if ((int)uVar25 < *(int *)&pTVar3->field_0x18) {
            uVar21 = ~uVar25 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar5 = (code *)swi(3);
            pTVar23 = (TSphere<double> *)(*pcVar5)();
            return pTVar23;
          }
          pTVar19 = local_268;
          uVar21 = *(uint *)(lVar27 + *(longlong *)&pTVar3->field_0x10);
          if (uVar21 != 0xffffffff) {
            uVar24 = 0;
            if ((int)uVar21 < *(int *)&local_268->field_0x18) {
              uVar24 = ~uVar21 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              pTVar23 = (TSphere<double> *)(*pcVar5)();
              return pTVar23;
            }
            iVar22 = *(int *)(*(longlong *)&pTVar19->field_0x10 + (longlong)(int)uVar21 * 4);
            uVar26 = (ulonglong)iVar22;
            uVar24 = 0;
            if ((int)uVar21 < *(int *)&local_2a0->field_0x18) {
              uVar24 = ~uVar21 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              pTVar23 = (TSphere<double> *)(*pcVar5)();
              return pTVar23;
            }
            iVar28 = *(int *)(*(longlong *)&local_2a0->field_0x10 + (longlong)(int)uVar21 * 4) +
                     iVar22;
            this = local_298;
            if (iVar22 < iVar28) {
              dVar9 = auVar46._8_8_;
              dVar8 = auVar46._0_8_;
              dVar11 = auVar1._8_8_;
              auVar46 = blendpd(auVar1,auVar46,2);
              lVar27 = uVar26 * 0xc;
              do {
                uVar24 = (uint)uVar26;
                uVar21 = 0;
                if ((int)uVar24 < *(int *)&pTVar2->field_0x18) {
                  uVar21 = ~uVar24 >> 0x1f;
                }
                if ((uVar21 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar5 = (code *)swi(3);
                  pTVar23 = (TSphere<double> *)(*pcVar5)();
                  return pTVar23;
                }
                lVar4 = *(longlong *)&pTVar2->field_0x10;
                dVar30 = (double)*(float *)(lVar4 + 4 + lVar27);
                local_1d0 = (double)*(float *)(lVar4 + 8 + lVar27);
                dVar43 = dVar15 * (double)*(float *)(lVar4 + lVar27);
                dVar44 = dVar16 * dVar30;
                local_1e0._8_4_ = SUB84(dVar30,0);
                local_1e0._0_8_ = (double)*(float *)(lVar4 + lVar27);
                local_1e0._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
                auVar40._8_4_ = SUB84(dVar44,0);
                auVar40._0_8_ = dVar43;
                uVar39 = (undefined4)((ulonglong)dVar44 >> 0x20);
                auVar40._12_4_ = uVar39;
                auVar31._8_4_ = SUB84(dVar44,0);
                auVar31._0_8_ = dVar43;
                auVar31._12_4_ = uVar39;
                dVar7 = local_1d0 * dVar17;
                dVar30 = dVar18 * 0.0;
                auVar32._8_4_ = SUB84(dVar30,0);
                auVar32._0_8_ = dVar7;
                auVar32._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
                auVar32 = blendpd(auVar31,auVar32,2);
                auVar41._0_8_ = auVar40._8_8_ * auVar1._0_8_ - dVar11 * dVar43;
                auVar41._8_8_ = dVar7 * dVar11 - dVar8 * dVar44;
                auVar33._0_8_ = auVar32._0_8_ * dVar8 - auVar46._0_8_ * dVar7;
                auVar33._8_8_ = auVar32._8_8_ * dVar9 - auVar46._8_8_ * dVar30;
                auVar32 = blendpd(auVar41,auVar33,2);
                dVar30 = auVar41._8_8_ + auVar41._8_8_;
                dVar6 = auVar33._0_8_ + auVar33._0_8_;
                uVar39 = (undefined4)((ulonglong)dVar6 >> 0x20);
                auVar42._0_8_ = auVar32._0_8_ + auVar32._0_8_;
                auVar42._8_8_ = auVar32._8_8_ + auVar32._8_8_;
                auVar37._8_4_ = SUB84(dVar6,0);
                auVar37._0_8_ = dVar30;
                auVar37._12_4_ = uVar39;
                auVar34._8_4_ = SUB84(dVar6,0);
                auVar34._0_8_ = dVar30;
                auVar34._12_4_ = uVar39;
                auVar32 = blendpd(auVar34,auVar42,2);
                auVar38._0_8_ = auVar37._8_8_ * auVar1._0_8_ - dVar30 * dVar11;
                auVar38._8_8_ = auVar42._0_8_ * dVar11 - dVar6 * dVar8;
                auVar35._0_8_ = auVar32._0_8_ * dVar8 - auVar42._0_8_ * auVar46._0_8_;
                auVar35._8_8_ = auVar32._8_8_ * dVar9 - auVar42._8_8_ * auVar46._8_8_;
                auVar32 = blendpd(auVar38,auVar35,2);
                dVar6 = dVar6 * dVar9 + dVar44 + auVar35._0_8_ + dVar13;
                local_270 = auVar42._0_8_ * dVar9 + dVar7 + auVar32._0_8_ + dVar14;
                local_280._8_4_ = SUB84(dVar6,0);
                local_280._0_8_ = dVar30 * dVar9 + dVar43 + auVar38._8_8_ + dVar36;
                local_280._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
                if (((local_2b8.AllocatorInstance.Data <= (FScriptContainerElement *)local_280) &&
                    ((FScriptContainerElement *)local_280 <
                     local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayMax * 0x18)) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar20)) {
                  pcVar5 = (code *)swi(3);
                  pTVar23 = (TSphere<double> *)(*pcVar5)();
                  return pTVar23;
                }
                iVar22 = local_2b8.ArrayNum;
                if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
                  iVar22 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
                }
                uVar26 = (ulonglong)(uVar24 + 1);
                local_2b8.ArrayNum = iVar22 + 1;
                lVar27 = lVar27 + 0xc;
                *(undefined8 *)(local_2b8.AllocatorInstance.Data + (longlong)iVar22 * 0x18) =
                     local_280._0_8_;
                *(undefined8 *)(local_2b8.AllocatorInstance.Data + (longlong)iVar22 * 0x18 + 8) =
                     local_280._8_8_;
                *(double *)(local_2b8.AllocatorInstance.Data + (longlong)iVar22 * 0x18 + 0x10) =
                     local_270;
                this = local_298;
              } while ((int)(uVar24 + 1) < iVar28);
            }
          }
          local_2a8 = local_2a8 + 4;
          uVar26 = (ulonglong)(uVar25 + 1);
          uVar29 = uVar29 + 0x60;
          __return_storage_ptr__ = local_260;
        } while ((int)(uVar25 + 1) < local_290.ArrayNum);
      }
      uVar29 = 0;
      ComputeBoundingSphereImpl(this,&local_2b8,(TSphere<double> *)&local_238._s_0);
      GetBoundingBoxInCollectionSpace(this,(TBox<double> *)&local_218._s_0);
      uVar10 = (local_218._s_0.X + local_200) * __real_3fe0000000000000;
      uVar12 = (local_218._s_0.Y + local_1f8) * __real_3fe0000000000000;
      uVar45 = (local_218._s_0.Z + local_1f0) * __real_3fe0000000000000;
      local_240 = 0.0;
      uVar26 = uVar29;
      iVar22 = local_2b8.ArrayNum;
      local_258 = (double)uVar10;
      local_250 = (double)uVar12;
      local_248 = (double)uVar45;
      if (0 < local_2b8.ArrayNum) {
        do {
          dVar36 = local_240;
          uVar25 = (uint)uVar29;
          uVar21 = 0;
          if ((int)uVar25 < iVar22) {
            uVar21 = ~uVar25 >> 0x1f;
          }
          if (uVar21 == 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar5 = (code *)swi(3);
              pTVar23 = (TSphere<double> *)(*pcVar5)();
              return pTVar23;
            }
            iVar22 = local_2b8.ArrayNum;
          }
          uVar29 = (ulonglong)(uVar25 + 1);
          local_240 = ((double)uVar12 - *(double *)(local_2b8.AllocatorInstance.Data + uVar26 + 8))
                      * ((double)uVar12 - *(double *)(local_2b8.AllocatorInstance.Data + uVar26 + 8)
                        ) + ((double)uVar10 - *(double *)(local_2b8.AllocatorInstance.Data + uVar26)
                            ) * ((double)uVar10 -
                                *(double *)(local_2b8.AllocatorInstance.Data + uVar26)) +
                      ((double)uVar45 -
                      *(double *)(local_2b8.AllocatorInstance.Data + uVar26 + 0x10)) *
                      ((double)uVar45 -
                      *(double *)(local_2b8.AllocatorInstance.Data + uVar26 + 0x10));
          if (local_240 <= dVar36) {
            local_240 = dVar36;
          }
          uVar26 = uVar26 + 0x18;
        } while ((int)(uVar25 + 1) < iVar22);
      }
      dVar36 = SQRT(local_240);
      if (dStack_220 < dVar36) {
        uVar10 = local_238._s_0.X;
        uVar12 = local_238._s_0.Y;
        uVar45 = local_238._s_0.Z;
        dVar36 = dStack_220;
      }
      auVar1._8_4_ = (int)uVar12;
      auVar1._0_8_ = uVar10;
      auVar1._12_4_ = (int)((ulonglong)uVar12 >> 0x20);
      *(undefined1 (*) [16])&(__return_storage_ptr__->Center).field0_0x0 = auVar1;
      (__return_storage_ptr__->Center).field0_0x0._s_0.Z = (double)uVar45;
      __return_storage_ptr__->W = dVar36;
      if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.AllocatorInstance.Data);
      }
      if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetCentroids @ 143fafc80

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FBoundsFacade::GetCentroids
          (FBoundsFacade *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TBox<double>_> *pTVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 local_38;
  undefined8 uStack_30;
  double local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar1 = (this->BoundingBoxAttribute).ConstAttributeArray;
  if (pTVar1 != (TManagedArray<UE::Math::TBox<double>_> *)0x0) {
    uVar11 = 0;
    iVar8 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    dVar6 = __real_3fe0000000000000;
    if (0 < iVar8) {
      lVar12 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < *(int *)&pTVar1->field_0x18) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
        lVar2 = *(longlong *)&pTVar1->field_0x10;
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        uStack_30 = (*(double *)(lVar12 + 0x20 + lVar2) + *(double *)(lVar12 + 8 + lVar2)) * dVar6;
        local_28 = (*(double *)(lVar12 + 0x28 + lVar2) + *(double *)(lVar12 + 0x10 + lVar2)) * dVar6
        ;
        local_38 = (*(double *)(lVar12 + 0x18 + lVar2) + *(double *)(lVar12 + lVar2)) * dVar6;
        if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 <
             pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar11 = uVar11 + 1;
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        lVar12 = lVar12 + 0x38;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
        *(undefined4 *)pFVar3 = (undefined4)local_38;
        *(undefined4 *)(pFVar3 + 4) = local_38._4_4_;
        *(undefined4 *)(pFVar3 + 8) = (undefined4)uStack_30;
        *(undefined4 *)(pFVar3 + 0xc) = uStack_30._4_4_;
        *(double *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_28;
        iVar8 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
      } while ((int)uVar11 < iVar8);
    }
  }
  return __return_storage_ptr__;
}

// IsValid @ 143fb7aa0

bool __thiscall GeometryCollection::Facades::FBoundsFacade::IsValid(FBoundsFacade *this)

{
  return (this->BoundingBoxAttribute).ConstAttributeArray !=
         (TManagedArray<UE::Math::TBox<double>_> *)0x0;
}

// UpdateBoundingBox @ 143fcce60

void __thiscall GeometryCollection::Facades::FBoundsFacade::UpdateBoundingBox(FBoundsFacade *this)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  TManagedArray<int> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  TManagedArray<UE::Math::TBox<double>_> *pTVar15;
  uint uVar16;
  longlong lVar17;
  
  if ((this->BoundingBoxAttribute).ConstAttributeArray ==
      (TManagedArray<UE::Math::TBox<double>_> *)0x0) {
    return;
  }
  if ((this->VertexAttribute).ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0
     ) {
LAB_143fcceba:
    bVar12 = false;
  }
  else {
    pTVar5 = (this->TransformToGeometryIndexAttribute).ConstAttributeArray;
    if (pTVar5 == (TManagedArray<int> *)0x0) {
      iVar13 = FManagedArrayCollection::NumElements
                         ((this->TransformToGeometryIndexAttribute).ConstCollection,
                          (this->TransformToGeometryIndexAttribute).Group);
    }
    else {
      iVar13 = (**(code **)(*(longlong *)pTVar5 + 0x60))();
    }
    if ((iVar13 == 0) || ((this->BoneMapAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)
       ) goto LAB_143fcceba;
    bVar12 = true;
  }
  if ((this->VertexAttribute).ConstAttributeArray != (TManagedArray<UE::Math::TVector<float>_> *)0x0
     ) {
    pTVar5 = (this->VertexStartAttribute).ConstAttributeArray;
    if (pTVar5 == (TManagedArray<int> *)0x0) {
      iVar13 = FManagedArrayCollection::NumElements
                         ((this->VertexStartAttribute).ConstCollection,
                          (this->VertexStartAttribute).Group);
    }
    else {
      iVar13 = (**(code **)(*(longlong *)pTVar5 + 0x60))();
    }
    if ((iVar13 != 0) &&
       ((this->VertexCountAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) {
      bVar11 = true;
      goto LAB_143fcceff;
    }
  }
  bVar11 = false;
LAB_143fcceff:
  if (bVar12) {
    UpdateTransformBasedBoundingBox(this);
    return;
  }
  if (!bVar11) {
    pTVar15 = TManagedArrayAccessor<UE::Math::TBox<double>_>::Modify(&this->BoundingBoxAttribute);
    uVar16 = 0;
    iVar13 = (**(code **)(*(longlong *)pTVar15 + 0x60))(pTVar15);
    if (0 < iVar13) {
      lVar17 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar16 < *(int *)&pTVar15->field_0x18) {
          uVar14 = ~uVar16 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        lVar6 = *(longlong *)&pTVar15->field_0x10;
        uVar16 = uVar16 + 1;
        pdVar2 = (double *)(lVar6 + 0x18 + lVar17);
        *pdVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        pdVar2[1] = (double)uVar4;
        *(double *)(lVar6 + 0x28 + lVar17) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
        ;
        puVar3 = (undefined4 *)(lVar6 + 0x18 + lVar17);
        uVar8 = puVar3[1];
        uVar9 = puVar3[2];
        uVar10 = puVar3[3];
        *(undefined1 *)(lVar6 + 0x30 + lVar17) = 0;
        uVar4 = *(undefined8 *)(lVar6 + 0x28 + lVar17);
        puVar1 = (undefined4 *)(lVar6 + lVar17);
        *puVar1 = *puVar3;
        puVar1[1] = uVar8;
        puVar1[2] = uVar9;
        puVar1[3] = uVar10;
        *(undefined8 *)(lVar6 + 0x10 + lVar17) = uVar4;
        lVar17 = lVar17 + 0x38;
        iVar13 = (**(code **)(*(longlong *)pTVar15 + 0x60))(pTVar15);
      } while ((int)uVar16 < iVar13);
    }
    return;
  }
  UpdateVertexBasedBoundingBox(this);
  return;
}

// UpdateTransformBasedBoundingBox @ 143fcecd0

void __thiscall
GeometryCollection::Facades::FBoundsFacade::UpdateTransformBasedBoundingBox(FBoundsFacade *this)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  double dVar5;
  TManagedArray<UE::Math::TBox<double>_> *pTVar6;
  TManagedArray<UE::Math::TVector<float>_> *pTVar7;
  TManagedArray<int> *pTVar8;
  TManagedArray<int> *pTVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  double dVar26;
  
  if ((((this->BoundingBoxAttribute).AttributeArray == (TManagedArray<UE::Math::TBox<double>_> *)0x0
       ) || ((this->BoundingBoxAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  ((this->BoundingBoxAttribute).AttributeArray)->field_0x8 = 1;
  pTVar6 = (this->BoundingBoxAttribute).AttributeArray;
  if (((this->VertexAttribute).ConstAttributeArray ==
       (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x67,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar7 = (this->VertexAttribute).ConstAttributeArray;
  if (((this->BoneMapAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x67,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar8 = (this->BoneMapAttribute).ConstAttributeArray;
  if (((this->TransformToGeometryIndexAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)
     && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x67,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar9 = (this->TransformToGeometryIndexAttribute).ConstAttributeArray;
  uVar24 = 0;
  iVar19 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
  if (0 < iVar19) {
    lVar23 = 0;
    do {
      uVar20 = 0;
      if ((int)uVar24 < *(int *)&pTVar6->field_0x18) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      lVar25 = *(longlong *)&pTVar6->field_0x10;
      uVar24 = uVar24 + 1;
      pdVar2 = (double *)(lVar25 + 0x18 + lVar23);
      *pdVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar2[1] = (double)uVar4;
      *(double *)(lVar25 + 0x28 + lVar23) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      puVar3 = (undefined4 *)(lVar25 + 0x18 + lVar23);
      uVar15 = puVar3[1];
      uVar16 = puVar3[2];
      uVar17 = puVar3[3];
      *(undefined1 *)(lVar25 + 0x30 + lVar23) = 0;
      uVar4 = *(undefined8 *)(lVar25 + 0x28 + lVar23);
      puVar1 = (undefined4 *)(lVar25 + lVar23);
      *puVar1 = *puVar3;
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      *(undefined8 *)(lVar25 + 0x10 + lVar23) = uVar4;
      lVar23 = lVar23 + 0x38;
      iVar19 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
    } while ((int)uVar24 < iVar19);
  }
  iVar19 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
  if (iVar19 != 0) {
    uVar24 = 0;
    iVar19 = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
    if (0 < iVar19) {
      lVar23 = 0;
      lVar25 = 0;
      do {
        uVar20 = 0;
        if ((int)uVar24 < *(int *)&pTVar8->field_0x18) {
          uVar20 = ~uVar24 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar20 = *(uint *)(lVar25 + *(longlong *)&pTVar8->field_0x10);
        uVar21 = 0;
        if ((int)uVar24 < *(int *)&pTVar7->field_0x18) {
          uVar21 = ~uVar24 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar10 = *(longlong *)&pTVar7->field_0x10;
        dVar13 = (double)*(float *)(lVar10 + lVar23);
        uVar21 = 0;
        if ((int)uVar20 < *(int *)&pTVar9->field_0x18) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        dVar14 = (double)*(float *)(lVar10 + 4 + lVar23);
        dVar12 = (double)*(float *)(lVar10 + 8 + lVar23);
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar20 = *(uint *)(*(longlong *)&pTVar9->field_0x10 + (longlong)(int)uVar20 * 4);
        uVar21 = 0;
        if ((int)uVar20 < *(int *)&pTVar6->field_0x18) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar10 = *(longlong *)&pTVar6->field_0x10;
        lVar22 = (longlong)(int)uVar20 * 0x38;
        if (*(char *)(lVar22 + 0x30 + lVar10) == '\0') {
          *(double *)(lVar22 + 0x18 + lVar10) = dVar13;
          *(double *)(lVar22 + 0x20 + lVar10) = dVar14;
          *(double *)(lVar22 + 0x28 + lVar10) = dVar12;
          puVar3 = (undefined4 *)(lVar22 + 0x18 + lVar10);
          uVar15 = puVar3[1];
          uVar16 = puVar3[2];
          uVar17 = puVar3[3];
          *(undefined1 *)(lVar22 + 0x30 + lVar10) = 1;
          uVar4 = *(undefined8 *)(lVar22 + 0x28 + lVar10);
          puVar1 = (undefined4 *)(lVar22 + lVar10);
          *puVar1 = *puVar3;
          puVar1[1] = uVar15;
          puVar1[2] = uVar16;
          puVar1[3] = uVar17;
          *(undefined8 *)(lVar22 + 0x10 + lVar10) = uVar4;
        }
        else {
          dVar5 = *(double *)(lVar22 + 8 + lVar10);
          dVar26 = dVar14;
          if (dVar5 <= dVar14) {
            dVar26 = dVar5;
          }
          dVar5 = *(double *)(lVar22 + lVar10);
          if (dVar13 <= *(double *)(lVar22 + lVar10)) {
            dVar5 = dVar13;
          }
          *(double *)(lVar22 + 8 + lVar10) = dVar26;
          dVar26 = *(double *)(lVar22 + 0x18 + lVar10);
          *(double *)(lVar22 + lVar10) = dVar5;
          if (dVar26 <= dVar13) {
            dVar26 = dVar13;
          }
          dVar13 = *(double *)(lVar22 + 0x10 + lVar10);
          if (dVar12 <= dVar13) {
            dVar13 = dVar12;
          }
          dVar5 = *(double *)(lVar22 + 0x28 + lVar10);
          if (dVar12 <= dVar5) {
            dVar12 = dVar5;
          }
          *(double *)(lVar22 + 0x18 + lVar10) = dVar26;
          *(double *)(lVar22 + 0x10 + lVar10) = dVar13;
          dVar13 = *(double *)(lVar22 + 0x20 + lVar10);
          if (dVar13 <= dVar14) {
            dVar13 = dVar14;
          }
          *(double *)(lVar22 + 0x28 + lVar10) = dVar12;
          *(double *)(lVar22 + 0x20 + lVar10) = dVar13;
        }
        uVar24 = uVar24 + 1;
        lVar25 = lVar25 + 4;
        lVar23 = lVar23 + 0xc;
        iVar19 = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
      } while ((int)uVar24 < iVar19);
    }
  }
  return;
}

// UpdateVertexBasedBoundingBox @ 143fcf120

void __thiscall
GeometryCollection::Facades::FBoundsFacade::UpdateVertexBasedBoundingBox(FBoundsFacade *this)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  TManagedArray<UE::Math::TBox<double>_> *pTVar9;
  TManagedArray<UE::Math::TVector<float>_> *pTVar10;
  TManagedArray<int> *pTVar11;
  TManagedArray<int> *pTVar12;
  longlong lVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  double dVar32;
  longlong local_res10;
  
  if ((((this->BoundingBoxAttribute).AttributeArray == (TManagedArray<UE::Math::TBox<double>_> *)0x0
       ) || ((this->BoundingBoxAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L""), bVar22)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  ((this->BoundingBoxAttribute).AttributeArray)->field_0x8 = 1;
  pTVar9 = (this->BoundingBoxAttribute).AttributeArray;
  if (((this->VertexAttribute).ConstAttributeArray ==
       (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x67,L""), bVar22)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pTVar10 = (this->VertexAttribute).ConstAttributeArray;
  if (((this->VertexStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x67,L""), bVar22)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pTVar11 = (this->VertexStartAttribute).ConstAttributeArray;
  if (((this->VertexCountAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x67,L""), bVar22)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pTVar12 = (this->VertexCountAttribute).ConstAttributeArray;
  uVar28 = 0;
  iVar23 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
  if (0 < iVar23) {
    lVar26 = 0;
    do {
      uVar24 = 0;
      if ((int)uVar28 < *(int *)&pTVar9->field_0x18) {
        uVar24 = ~uVar28 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      lVar27 = *(longlong *)&pTVar9->field_0x10;
      uVar28 = uVar28 + 1;
      pdVar2 = (double *)(lVar27 + 0x18 + lVar26);
      *pdVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar2[1] = (double)uVar5;
      *(double *)(lVar27 + 0x28 + lVar26) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      puVar3 = (undefined4 *)(lVar27 + 0x18 + lVar26);
      uVar18 = puVar3[1];
      uVar19 = puVar3[2];
      uVar20 = puVar3[3];
      *(undefined1 *)(lVar27 + 0x30 + lVar26) = 0;
      uVar5 = *(undefined8 *)(lVar27 + 0x28 + lVar26);
      puVar1 = (undefined4 *)(lVar27 + lVar26);
      *puVar1 = *puVar3;
      puVar1[1] = uVar18;
      puVar1[2] = uVar19;
      puVar1[3] = uVar20;
      *(undefined8 *)(lVar27 + 0x10 + lVar26) = uVar5;
      lVar26 = lVar26 + 0x38;
      iVar23 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
    } while ((int)uVar28 < iVar23);
  }
  uVar28 = 0;
  iVar23 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
  if (0 < iVar23) {
    local_res10 = 0;
    do {
      uVar31 = ~uVar28 >> 0x1f;
      uVar24 = 0;
      if ((int)uVar28 < *(int *)&pTVar11->field_0x18) {
        uVar24 = uVar31;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      lVar26 = *(longlong *)&pTVar11->field_0x10;
      uVar24 = 0;
      if ((int)uVar28 < *(int *)&pTVar12->field_0x18) {
        uVar24 = uVar31;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar23 = *(int *)(*(longlong *)&pTVar12->field_0x10 + local_res10 * 4);
      iVar8 = *(int *)(lVar26 + local_res10 * 4);
      uVar24 = 0;
      if ((int)uVar28 < *(int *)&pTVar11->field_0x18) {
        uVar24 = uVar31;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      lVar26 = (longlong)(iVar23 + iVar8);
      uVar30 = (ulonglong)*(int *)(*(longlong *)&pTVar11->field_0x10 + local_res10 * 4);
      if ((longlong)uVar30 < lVar26) {
        lVar27 = uVar30 * 0xc;
        lVar26 = lVar26 - uVar30;
        do {
          uVar29 = (uint)uVar30;
          uVar24 = 0;
          if ((int)uVar29 < *(int *)&pTVar10->field_0x18) {
            uVar24 = ~uVar29 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          lVar13 = *(longlong *)&pTVar10->field_0x10;
          dVar15 = (double)*(float *)(lVar13 + lVar27);
          uVar24 = 0;
          if ((int)uVar28 < *(int *)&pTVar9->field_0x18) {
            uVar24 = uVar31;
          }
          dVar16 = (double)*(float *)(lVar13 + 4 + lVar27);
          dVar17 = (double)*(float *)(lVar13 + 8 + lVar27);
          if ((uVar24 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          lVar13 = *(longlong *)&pTVar9->field_0x10;
          lVar25 = (longlong)(int)uVar28 * 0x38;
          if (*(char *)(lVar25 + 0x30 + lVar13) == '\0') {
            *(double *)(lVar25 + 0x18 + lVar13) = dVar15;
            *(double *)(lVar25 + 0x20 + lVar13) = dVar16;
            *(double *)(lVar25 + 0x28 + lVar13) = dVar17;
            puVar4 = (undefined8 *)(lVar25 + 0x18 + lVar13);
            uVar21 = puVar4[1];
            *(undefined1 *)(lVar25 + 0x30 + lVar13) = 1;
            uVar5 = *(undefined8 *)(lVar25 + 0x28 + lVar13);
            *(undefined8 *)(lVar25 + lVar13) = *puVar4;
            ((undefined8 *)(lVar25 + lVar13))[1] = uVar21;
            *(undefined8 *)(lVar25 + 0x10 + lVar13) = uVar5;
          }
          else {
            dVar32 = *(double *)(lVar25 + 8 + lVar13);
            dVar7 = dVar15;
            if (*(double *)(lVar25 + lVar13) <= dVar15) {
              dVar7 = *(double *)(lVar25 + lVar13);
            }
            dVar6 = *(double *)(lVar25 + 0x18 + lVar13);
            if (dVar15 <= dVar6) {
              dVar15 = dVar6;
            }
            if (dVar16 <= dVar32) {
              dVar32 = dVar16;
            }
            *(double *)(lVar25 + lVar13) = dVar7;
            dVar7 = *(double *)(lVar25 + 0x10 + lVar13);
            dVar6 = dVar17;
            if (dVar7 <= dVar17) {
              dVar6 = dVar7;
            }
            *(double *)(lVar25 + 8 + lVar13) = dVar32;
            dVar32 = *(double *)(lVar25 + 0x28 + lVar13);
            if (dVar32 <= dVar17) {
              dVar32 = dVar17;
            }
            *(double *)(lVar25 + 0x18 + lVar13) = dVar15;
            *(double *)(lVar25 + 0x10 + lVar13) = dVar6;
            dVar15 = *(double *)(lVar25 + 0x20 + lVar13);
            if (dVar15 <= dVar16) {
              dVar15 = dVar16;
            }
            *(double *)(lVar25 + 0x28 + lVar13) = dVar32;
            *(double *)(lVar25 + 0x20 + lVar13) = dVar15;
          }
          uVar30 = (ulonglong)(uVar29 + 1);
          lVar27 = lVar27 + 0xc;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      local_res10 = local_res10 + 1;
      uVar28 = uVar28 + 1;
      iVar23 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
    } while ((int)uVar28 < iVar23);
  }
  return;
}

