// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FPointsCollectionFacade @ 143fd4cd0

FPointsCollectionFacade * __thiscall
GeometryCollection::Facades::FPointsCollectionFacade::FPointsCollectionFacade
          (FPointsCollectionFacade *this,FManagedArrayCollection *param_1)

{
  this->ConstCollection = param_1;
  this->Collection = param_1;
  return this;
}

// FPointsCollectionFacade @ 143fd4cf0

FPointsCollectionFacade * __thiscall
GeometryCollection::Facades::FPointsCollectionFacade::FPointsCollectionFacade
          (FPointsCollectionFacade *this,FManagedArrayCollection *param_1)

{
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  return this;
}

// AddPoints @ 143fd96f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
GeometryCollection::Facades::FPointsCollectionFacade::AddPoints
          (FPointsCollectionFacade *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  __m128d _Var7;
  __m128d _Var8;
  __m128d _Var9;
  __m128d _Var10;
  __m128d _Var11;
  __m128d _Var12;
  FName FVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  FName *pFVar19;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar20;
  TManagedArray<FString> *pTVar21;
  TManagedArray<FLinearColor> *pTVar22;
  TManagedArray<int> *pTVar23;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar24;
  TManagedArray<int> *pTVar25;
  TManagedArray<int> *pTVar26;
  TManagedArray<int> *pTVar27;
  TManagedArray<int> *pTVar28;
  FString *pFVar29;
  longlong lVar30;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar31;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  FString *pFVar37;
  undefined1 auStackY_388 [32];
  undefined2 local_344;
  undefined2 uStack_342;
  undefined2 local_338;
  undefined2 uStack_336;
  undefined2 local_32c;
  undefined2 uStack_32a;
  undefined2 local_320;
  undefined2 uStack_31e;
  undefined2 local_314;
  undefined2 uStack_312;
  undefined2 local_308;
  undefined2 uStack_306;
  undefined2 local_2fc;
  undefined2 uStack_2fa;
  undefined2 local_2f0;
  undefined2 uStack_2ee;
  undefined2 local_2e4;
  undefined2 uStack_2e2;
  undefined2 local_2d8;
  undefined2 uStack_2d6;
  undefined2 local_2cc;
  undefined2 uStack_2ca;
  FConstructionParameters local_228;
  FConstructionParameters local_218;
  FConstructionParameters local_208;
  FConstructionParameters local_1f8;
  FConstructionParameters local_1e8;
  FConstructionParameters local_1d8;
  FConstructionParameters local_1c8;
  FConstructionParameters local_1b8;
  FConstructionParameters local_1a8;
  FConstructionParameters local_198;
  FConstructionParameters local_188;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FString local_110;
  undefined1 local_f8 [24];
  undefined8 uStack_e0;
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ForElementType<FSetElementId> local_c0;
  ulonglong local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  iVar1 = param_1->ArrayNum;
  uVar15 = FManagedArrayCollection::NumElements
                     (this->Collection,FTransformCollection::TransformGroup);
  lVar35 = (longlong)(int)uVar15;
  uVar16 = FManagedArrayCollection::NumElements(this->Collection,FGeometryCollection::GeometryGroup)
  ;
  lVar36 = (longlong)(int)uVar16;
  iVar17 = FManagedArrayCollection::NumElements(this->Collection,FGeometryCollection::VerticesGroup)
  ;
  FManagedArrayCollection::AddElements(this->Collection,1,FTransformCollection::TransformGroup);
  FManagedArrayCollection::AddElements(this->Collection,1,FGeometryCollection::GeometryGroup);
  FManagedArrayCollection::AddElements(this->Collection,iVar1,FGeometryCollection::VerticesGroup);
  FVar13 = FTransformCollection::TransformGroup;
  pFVar2 = this->Collection;
  pFVar19 = ::FName::FName(&local_138,"Transform");
  local_228.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_228.GroupIndexDependency.Number = 0;
  FVar3 = *pFVar19;
  local_228.Saved = true;
  local_228.bAllowCircularDependency = false;
  local_228._10_2_ = uStack_342;
  bVar14 = FManagedArrayCollection::HasAttribute(pFVar2,FVar3,FVar13);
  if (!bVar14) {
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<double>_>
              (pFVar2,FVar3,FVar13,&local_228);
  }
  bVar14 = FManagedArrayCollection::HasAttribute(pFVar2,FVar3,FVar13);
  if (!bVar14) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("HasAttribute(Name, Group)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                        ,0x164,L"");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_170 = FVar13;
  local_178 = FVar3;
  pTVar20 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&pFVar2->Map,(TTuple<FName,FName> *)&local_178);
  if (pTVar20 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Pair != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                        ,0x288,L"");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pTVar20->field_0x10 != '\a') {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsSameType<T>()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                        ,0x315,L"");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)&pTVar20->field_0x10);
  lVar34 = *(longlong *)&pTVar20->field_0x30;
  if (lVar34 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("TypedManagedArray != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                        ,0x319,L"");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(undefined1 *)(lVar34 + 8) = 1;
  FVar3 = FTransformCollection::TransformGroup;
  pFVar2 = this->Collection;
  pFVar19 = ::FName::FName(&local_140,"BoneName");
  local_218.Saved = true;
  local_218.bAllowCircularDependency = false;
  local_218._10_2_ = uStack_2fa;
  local_218.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_218.GroupIndexDependency.Number = 0;
  pTVar21 = FManagedArrayCollection::AddAttribute<FString>(pFVar2,*pFVar19,FVar3,&local_218);
  FVar3 = FTransformCollection::TransformGroup;
  pFVar2 = this->Collection;
  pFVar19 = ::FName::FName(&local_148,"BoneColor");
  local_208.Saved = true;
  local_208.bAllowCircularDependency = false;
  local_208._10_2_ = uStack_336;
  local_208.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_208.GroupIndexDependency.Number = 0;
  pTVar22 = FManagedArrayCollection::AddAttribute<FLinearColor>(pFVar2,*pFVar19,FVar3,&local_208);
  FVar13 = FTransformCollection::TransformGroup;
  pFVar2 = this->Collection;
  pFVar19 = ::FName::FName(&local_150,"Parent");
  local_1f8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_1f8.GroupIndexDependency.Number = 0;
  FVar3 = *pFVar19;
  local_1f8.Saved = true;
  local_1f8.bAllowCircularDependency = false;
  local_1f8._10_2_ = uStack_306;
  bVar14 = FManagedArrayCollection::HasAttribute(pFVar2,FVar3,FVar13);
  if (!bVar14) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar2,FVar3,FVar13,&local_1f8);
  }
  pTVar23 = FManagedArrayCollection::ModifyAttribute<int>(pFVar2,FVar3,FVar13);
  FVar3 = FTransformCollection::TransformGroup;
  pFVar2 = this->Collection;
  pFVar19 = ::FName::FName(&local_160,"Children");
  local_1e8.Saved = true;
  local_1e8.bAllowCircularDependency = false;
  local_1e8._10_2_ = uStack_312;
  local_1e8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_1e8.GroupIndexDependency.Number = 0;
  pTVar24 = FManagedArrayCollection::
            AddAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                      (pFVar2,*pFVar19,FVar3,&local_1e8);
  FVar13 = FTransformCollection::TransformGroup;
  pFVar2 = this->Collection;
  pFVar19 = ::FName::FName(&local_168,"TransformToGoemetryIndex");
  local_1d8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_1d8.GroupIndexDependency.Number = 0;
  FVar3 = *pFVar19;
  local_1d8.Saved = true;
  local_1d8.bAllowCircularDependency = false;
  local_1d8._10_2_ = uStack_31e;
  bVar14 = FManagedArrayCollection::HasAttribute(pFVar2,FVar3,FVar13);
  if (!bVar14) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar2,FVar3,FVar13,&local_1d8);
  }
  pTVar25 = FManagedArrayCollection::ModifyAttribute<int>(pFVar2,FVar3,FVar13);
  FVar13 = FGeometryCollection::VerticesGroup;
  pFVar2 = this->Collection;
  pFVar19 = ::FName::FName(&local_158,"BoneMap");
  local_1c8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_1c8.GroupIndexDependency.Number = 0;
  FVar3 = *pFVar19;
  local_1c8.Saved = true;
  local_1c8.bAllowCircularDependency = false;
  local_1c8._10_2_ = uStack_32a;
  bVar14 = FManagedArrayCollection::HasAttribute(pFVar2,FVar3,FVar13);
  if (!bVar14) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar2,FVar3,FVar13,&local_1c8);
  }
  FManagedArrayCollection::ModifyAttribute<int>(pFVar2,FVar3,FVar13);
  FVar13 = FGeometryCollection::GeometryGroup;
  pFVar2 = this->Collection;
  pFVar19 = ::FName::FName(&local_130,"TransformIndex");
  local_1b8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_1b8.GroupIndexDependency.Number = 0;
  FVar3 = *pFVar19;
  local_1b8.Saved = true;
  local_1b8.bAllowCircularDependency = false;
  local_1b8._10_2_ = uStack_2ee;
  bVar14 = FManagedArrayCollection::HasAttribute(pFVar2,FVar3,FVar13);
  if (!bVar14) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar2,FVar3,FVar13,&local_1b8);
  }
  pTVar26 = FManagedArrayCollection::ModifyAttribute<int>(pFVar2,FVar3,FVar13);
  FVar13 = FGeometryCollection::GeometryGroup;
  pFVar2 = this->Collection;
  pFVar19 = ::FName::FName(&local_128,"VertexStart");
  local_1a8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_1a8.GroupIndexDependency.Number = 0;
  FVar3 = *pFVar19;
  local_1a8.Saved = true;
  local_1a8.bAllowCircularDependency = false;
  local_1a8._10_2_ = uStack_2e2;
  bVar14 = FManagedArrayCollection::HasAttribute(pFVar2,FVar3,FVar13);
  if (!bVar14) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar2,FVar3,FVar13,&local_1a8);
  }
  pTVar27 = FManagedArrayCollection::ModifyAttribute<int>(pFVar2,FVar3,FVar13);
  FVar13 = FGeometryCollection::GeometryGroup;
  pFVar2 = this->Collection;
  pFVar19 = ::FName::FName(&local_120,"VertexCount");
  local_198.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_198.GroupIndexDependency.Number = 0;
  FVar3 = *pFVar19;
  local_198.Saved = true;
  local_198.bAllowCircularDependency = false;
  local_198._10_2_ = uStack_2d6;
  bVar14 = FManagedArrayCollection::HasAttribute(pFVar2,FVar3,FVar13);
  if (!bVar14) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar2,FVar3,FVar13,&local_198);
  }
  pTVar28 = FManagedArrayCollection::ModifyAttribute<int>(pFVar2,FVar3,FVar13);
  FVar3 = FGeometryCollection::VerticesGroup;
  pFVar2 = this->Collection;
  pFVar19 = ::FName::FName(&local_118,"Vertex");
  local_188.Saved = true;
  local_188.bAllowCircularDependency = false;
  local_188._10_2_ = uStack_2ca;
  local_188.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_188.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>(pFVar2,*pFVar19,FVar3,&local_188)
  ;
  _Var12 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var11 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var10 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var9 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var8 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  _Var7 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  uVar32 = ~uVar15 >> 0x1f;
  uVar33 = 0;
  if ((int)uVar15 < *(int *)(lVar34 + 0x18)) {
    uVar33 = uVar32;
  }
  if (uVar33 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar34 = *(longlong *)(lVar34 + 0x10);
  lVar30 = lVar35 * 0x60;
  *(double (*) [2])(lVar30 + lVar34) = _Var7.m128d_f64;
  *(double (*) [2])(lVar30 + 0x10 + lVar34) = _Var8.m128d_f64;
  *(double (*) [2])(lVar30 + 0x20 + lVar34) = _Var9.m128d_f64;
  *(double (*) [2])(lVar30 + 0x30 + lVar34) = _Var10.m128d_f64;
  *(double (*) [2])(lVar30 + 0x40 + lVar34) = _Var11.m128d_f64;
  *(double (*) [2])(lVar30 + 0x50 + lVar34) = _Var12.m128d_f64;
  pFVar29 = ::FString::FString(&local_110,L"Points");
  uVar33 = 0;
  if ((int)uVar15 < *(int *)&pTVar21->field_0x18) {
    uVar33 = uVar32;
  }
  if (uVar33 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar34 = lVar35 * 0x10;
  pFVar37 = (FString *)(*(longlong *)&pTVar21->field_0x10 + lVar34);
  if (pFVar37 != pFVar29) {
    pFVar4 = (pFVar37->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar37->Data).AllocatorInstance.Data = (pFVar29->Data).AllocatorInstance.Data;
    (pFVar29->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar37->Data).ArrayNum = (pFVar29->Data).ArrayNum;
    (pFVar37->Data).ArrayMax = (pFVar29->Data).ArrayMax;
    (pFVar29->Data).ArrayNum = 0;
    (pFVar29->Data).ArrayMax = 0;
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  uVar18 = 0;
  uVar33 = uVar18;
  if ((int)uVar15 < *(int *)&pTVar22->field_0x18) {
    uVar33 = uVar32;
  }
  if (uVar33 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar30 = *(longlong *)&pTVar22->field_0x10;
  *(undefined4 *)(lVar34 + lVar30) = 0x3ca3d70a;
  *(undefined4 *)(lVar34 + 4 + lVar30) = 0x3c23d70a;
  *(undefined4 *)(lVar34 + 8 + lVar30) = 0x3dcccccd;
  *(undefined4 *)(lVar34 + 0xc + lVar30) = 0x3f800000;
  uVar33 = uVar18;
  if ((int)uVar15 < *(int *)&pTVar23->field_0x18) {
    uVar33 = uVar32;
  }
  if (uVar33 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_f8._16_8_ = 0;
  uStack_e0 = 0;
  local_c0.InlineData[0] = '\0';
  local_c0.InlineData[1] = '\0';
  local_c0.InlineData[2] = '\0';
  local_c0.InlineData[3] = '\0';
  local_c0._padding_ = 0;
  *(undefined4 *)(*(longlong *)&pTVar23->field_0x10 + lVar35 * 4) = 0xffffffff;
  local_b0 = 0;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  uVar33 = uVar18;
  if ((int)uVar15 < *(int *)&pTVar24->field_0x18) {
    uVar33 = uVar32;
  }
  local_f8._8_8_ = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_c0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  if (uVar33 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar31 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
            (lVar35 * 0x50 + *(longlong *)&pTVar24->field_0x10);
  if (pTVar31 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_f8) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (pTVar31,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_f8);
  }
  local_b0 = local_b0 & 0xffffffff00000000;
  if (local_c0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c0.SecondaryData);
  }
  iVar6 = SUB84(local_f8._8_8_,4);
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
  }
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_d0 = 0;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  uVar33 = uVar18;
  if ((int)uVar15 < *(int *)&pTVar25->field_0x18) {
    uVar33 = uVar32;
  }
  if (uVar33 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar33 = ~uVar16 >> 0x1f;
  *(uint *)(*(longlong *)&pTVar25->field_0x10 + lVar35 * 4) = uVar16;
  if ((int)uVar16 < *(int *)&pTVar26->field_0x18) {
    uVar18 = uVar33;
  }
  if (uVar18 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(uint *)(*(longlong *)&pTVar26->field_0x10 + lVar36 * 4) = uVar15;
  uVar15 = 0;
  if ((int)uVar16 < *(int *)&pTVar27->field_0x18) {
    uVar15 = uVar33;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(int *)(*(longlong *)&pTVar27->field_0x10 + lVar36 * 4) = iVar17;
  uVar15 = 0;
  if ((int)uVar16 < *(int *)&pTVar28->field_0x18) {
    uVar15 = uVar33;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(int *)(*(longlong *)&pTVar28->field_0x10 + lVar36 * 4) = iVar1;
  return;
}

// AddPointsWithFloatAttribute @ 143fda2b0

void __thiscall
GeometryCollection::Facades::FPointsCollectionFacade::AddPointsWithFloatAttribute
          (FPointsCollectionFacade *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FManagedArrayCollection *pFVar6;
  FName FVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  code *pcVar10;
  FName FVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FName *pFVar15;
  TManagedArray<int> *pTVar16;
  TManagedArray<UE::Math::TVector<float>_> *pTVar17;
  TManagedArray<float> *pTVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong local_118;
  undefined2 local_108;
  undefined2 uStack_106;
  undefined2 local_fc;
  undefined2 uStack_fa;
  undefined2 local_f0;
  undefined2 uStack_ee;
  FConstructionParameters local_a8;
  FConstructionParameters local_98;
  FConstructionParameters local_88;
  FName local_78;
  FName local_70 [7];
  
  iVar5 = param_1->ArrayNum;
  uVar13 = FManagedArrayCollection::NumElements(this->Collection,FGeometryCollection::VerticesGroup)
  ;
  AddPoints(this,param_1);
  FVar11 = FGeometryCollection::VerticesGroup;
  pFVar6 = this->Collection;
  lVar24 = 0;
  pFVar15 = ::FName::FName(&local_78,"BoneMap");
  local_a8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_a8.GroupIndexDependency.Number = 0;
  FVar7 = *pFVar15;
  local_a8.Saved = true;
  local_a8.bAllowCircularDependency = false;
  local_a8._10_2_ = uStack_106;
  bVar12 = FManagedArrayCollection::HasAttribute(pFVar6,FVar7,FVar11);
  if (!bVar12) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar6,FVar7,FVar11,&local_a8);
  }
  pTVar16 = FManagedArrayCollection::ModifyAttribute<int>(pFVar6,FVar7,FVar11);
  FVar7 = FGeometryCollection::VerticesGroup;
  pFVar6 = this->Collection;
  pFVar15 = ::FName::FName(local_70,"Vertex");
  local_98.Saved = true;
  local_98.bAllowCircularDependency = false;
  local_98._10_2_ = uStack_fa;
  local_98.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_98.GroupIndexDependency.Number = 0;
  pTVar17 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                      (pFVar6,*pFVar15,FVar7,&local_98);
  local_88.Saved = true;
  local_88.bAllowCircularDependency = false;
  local_88._10_2_ = uStack_ee;
  local_88.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_88.GroupIndexDependency.Number = 0;
  pTVar18 = FManagedArrayCollection::AddAttribute<float>
                      (this->Collection,param_2,FGeometryCollection::VerticesGroup,&local_88);
  if (0 < iVar5) {
    lVar19 = (longlong)(int)uVar13;
    local_118 = 0;
    lVar23 = lVar19 * 0xc;
    lVar25 = lVar19 * 4;
    uVar20 = uVar13;
    do {
      uVar22 = ~uVar20 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar20 < *(int *)&pTVar16->field_0x18) {
        uVar14 = uVar22;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar21 = uVar20 - uVar13;
      *(undefined4 *)(lVar25 + *(longlong *)&pTVar16->field_0x10) = 0;
      uVar14 = 0;
      if ((int)uVar21 < param_1->ArrayNum) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      dVar2 = *(double *)(pFVar8 + lVar24);
      dVar3 = *(double *)(pFVar8 + lVar24 + 8);
      dVar4 = *(double *)(pFVar8 + lVar24 + 0x10);
      uVar14 = 0;
      if ((int)uVar20 < *(int *)&pTVar17->field_0x18) {
        uVar14 = uVar22;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar9 = *(longlong *)&pTVar17->field_0x10;
      *(float *)(lVar9 + lVar23) = (float)dVar2;
      *(float *)(lVar9 + 4 + lVar23) = (float)dVar3;
      *(float *)(lVar9 + 8 + lVar23) = (float)dVar4;
      uVar14 = 0;
      if ((int)uVar21 < param_3->ArrayNum) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar1 = *(undefined4 *)((param_3->AllocatorInstance).Data + lVar25 + lVar19 * -4);
      uVar14 = 0;
      if ((int)uVar20 < *(int *)&pTVar18->field_0x18) {
        uVar14 = uVar22;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_118 = local_118 + 1;
      uVar20 = uVar20 + 1;
      lVar23 = lVar23 + 0xc;
      lVar24 = lVar24 + 0x18;
      *(undefined4 *)(lVar25 + *(longlong *)&pTVar18->field_0x10) = uVar1;
      lVar25 = lVar25 + 4;
    } while (local_118 < iVar5);
  }
  return;
}

// AddPointsWithIntAttribute @ 143fda6c0

void __thiscall
GeometryCollection::Facades::FPointsCollectionFacade::AddPointsWithIntAttribute
          (FPointsCollectionFacade *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  FManagedArrayCollection *pFVar6;
  FName FVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  code *pcVar10;
  FName FVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FName *pFVar15;
  TManagedArray<int> *pTVar16;
  TManagedArray<UE::Math::TVector<float>_> *pTVar17;
  TManagedArray<int> *pTVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong local_118;
  undefined2 local_108;
  undefined2 uStack_106;
  undefined2 local_fc;
  undefined2 uStack_fa;
  undefined2 local_f0;
  undefined2 uStack_ee;
  FConstructionParameters local_a8;
  FConstructionParameters local_98;
  FConstructionParameters local_88;
  FName local_78;
  FName local_70 [7];
  
  iVar4 = param_1->ArrayNum;
  uVar13 = FManagedArrayCollection::NumElements(this->Collection,FGeometryCollection::VerticesGroup)
  ;
  AddPoints(this,param_1);
  FVar11 = FGeometryCollection::VerticesGroup;
  pFVar6 = this->Collection;
  lVar24 = 0;
  pFVar15 = ::FName::FName(&local_78,"BoneMap");
  local_a8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_a8.GroupIndexDependency.Number = 0;
  FVar7 = *pFVar15;
  local_a8.Saved = true;
  local_a8.bAllowCircularDependency = false;
  local_a8._10_2_ = uStack_106;
  bVar12 = FManagedArrayCollection::HasAttribute(pFVar6,FVar7,FVar11);
  if (!bVar12) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar6,FVar7,FVar11,&local_a8);
  }
  pTVar16 = FManagedArrayCollection::ModifyAttribute<int>(pFVar6,FVar7,FVar11);
  FVar7 = FGeometryCollection::VerticesGroup;
  pFVar6 = this->Collection;
  pFVar15 = ::FName::FName(local_70,"Vertex");
  local_98.Saved = true;
  local_98.bAllowCircularDependency = false;
  local_98._10_2_ = uStack_fa;
  local_98.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_98.GroupIndexDependency.Number = 0;
  pTVar17 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                      (pFVar6,*pFVar15,FVar7,&local_98);
  FVar7 = FGeometryCollection::VerticesGroup;
  pFVar6 = this->Collection;
  local_88.Saved = true;
  local_88.bAllowCircularDependency = false;
  local_88._10_2_ = uStack_ee;
  local_88.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_88.GroupIndexDependency.Number = 0;
  bVar12 = FManagedArrayCollection::HasAttribute(pFVar6,param_2,FGeometryCollection::VerticesGroup);
  if (!bVar12) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar6,param_2,FVar7,&local_88);
  }
  pTVar18 = FManagedArrayCollection::ModifyAttribute<int>(pFVar6,param_2,FVar7);
  if (0 < iVar4) {
    lVar19 = (longlong)(int)uVar13;
    local_118 = 0;
    lVar23 = lVar19 * 0xc;
    lVar25 = lVar19 * 4;
    uVar20 = uVar13;
    do {
      uVar22 = ~uVar20 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar20 < *(int *)&pTVar16->field_0x18) {
        uVar14 = uVar22;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar21 = uVar20 - uVar13;
      *(undefined4 *)(lVar25 + *(longlong *)&pTVar16->field_0x10) = 0;
      uVar14 = 0;
      if ((int)uVar21 < param_1->ArrayNum) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      dVar1 = *(double *)(pFVar8 + lVar24);
      dVar2 = *(double *)(pFVar8 + lVar24 + 8);
      dVar3 = *(double *)(pFVar8 + lVar24 + 0x10);
      uVar14 = 0;
      if ((int)uVar20 < *(int *)&pTVar17->field_0x18) {
        uVar14 = uVar22;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar9 = *(longlong *)&pTVar17->field_0x10;
      *(float *)(lVar9 + lVar23) = (float)dVar1;
      *(float *)(lVar9 + 4 + lVar23) = (float)dVar2;
      *(float *)(lVar9 + 8 + lVar23) = (float)dVar3;
      uVar14 = 0;
      if ((int)uVar21 < param_3->ArrayNum) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar5 = *(undefined4 *)((param_3->AllocatorInstance).Data + lVar25 + lVar19 * -4);
      uVar14 = 0;
      if ((int)uVar20 < *(int *)&pTVar18->field_0x18) {
        uVar14 = uVar22;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_118 = local_118 + 1;
      uVar20 = uVar20 + 1;
      lVar23 = lVar23 + 0xc;
      lVar24 = lVar24 + 0x18;
      *(undefined4 *)(lVar25 + *(longlong *)&pTVar18->field_0x10) = uVar5;
      lVar25 = lVar25 + 4;
    } while (local_118 < iVar4);
  }
  return;
}

// AddPointsWithVectorAttribute @ 143fdaaf0

void __thiscall
GeometryCollection::Facades::FPointsCollectionFacade::AddPointsWithVectorAttribute
          (FPointsCollectionFacade *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  int iVar6;
  FManagedArrayCollection *pFVar7;
  FName FVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  FName FVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  FName *pFVar19;
  TManagedArray<int> *pTVar20;
  TManagedArray<UE::Math::TVector<float>_> *pTVar21;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  undefined2 local_130;
  undefined2 uStack_12e;
  undefined2 local_124;
  undefined2 uStack_122;
  undefined2 local_118;
  undefined2 uStack_116;
  FConstructionParameters local_c8;
  FConstructionParameters local_b8;
  FConstructionParameters local_a8;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80 [8];
  
  iVar6 = param_1->ArrayNum;
  uVar17 = FManagedArrayCollection::NumElements(this->Collection,FGeometryCollection::VerticesGroup)
  ;
  AddPoints(this,param_1);
  FVar15 = FGeometryCollection::VerticesGroup;
  pFVar7 = this->Collection;
  lVar29 = 0;
  pFVar19 = ::FName::FName(&local_88,"BoneMap");
  local_c8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_c8.GroupIndexDependency.Number = 0;
  FVar8 = *pFVar19;
  local_c8.Saved = true;
  local_c8.bAllowCircularDependency = false;
  local_c8._10_2_ = uStack_12e;
  bVar16 = FManagedArrayCollection::HasAttribute(pFVar7,FVar8,FVar15);
  if (!bVar16) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar7,FVar8,FVar15,&local_c8);
  }
  pTVar20 = FManagedArrayCollection::ModifyAttribute<int>(pFVar7,FVar8,FVar15);
  FVar8 = FGeometryCollection::VerticesGroup;
  pFVar7 = this->Collection;
  pFVar19 = ::FName::FName(local_80,"Vertex");
  local_b8.Saved = true;
  local_b8.bAllowCircularDependency = false;
  local_b8._10_2_ = uStack_122;
  local_b8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_b8.GroupIndexDependency.Number = 0;
  pTVar21 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                      (pFVar7,*pFVar19,FVar8,&local_b8);
  FVar8 = FGeometryCollection::VerticesGroup;
  pFVar7 = this->Collection;
  local_a8.Saved = true;
  local_a8.bAllowCircularDependency = false;
  local_a8._10_2_ = uStack_116;
  local_a8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_a8.GroupIndexDependency.Number = 0;
  bVar16 = FManagedArrayCollection::HasAttribute(pFVar7,param_2,FGeometryCollection::VerticesGroup);
  if (!bVar16) {
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<double>_>
              (pFVar7,param_2,FVar8,&local_a8);
  }
  bVar16 = FManagedArrayCollection::HasAttribute(pFVar7,param_2,FVar8);
  if ((!bVar16) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("HasAttribute(Name, Group)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x164,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_90 = FVar8;
  local_98 = param_2;
  pTVar22 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&pFVar7->Map,(TTuple<FName,FName> *)&local_98);
  if ((pTVar22 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((pTVar22->field_0x10 != '\"') &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSameType<T>()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x315,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)&pTVar22->field_0x10);
  lVar9 = *(longlong *)&pTVar22->field_0x30;
  if ((lVar9 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypedManagedArray != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x319,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  *(undefined1 *)(lVar9 + 8) = 1;
  if (0 < iVar6) {
    lVar23 = (longlong)(int)uVar17;
    lVar27 = 0;
    lVar31 = lVar23 * 4;
    lVar28 = lVar23 * 0xc;
    uVar25 = uVar17;
    do {
      uVar26 = ~uVar25 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar25 < *(int *)&pTVar20->field_0x18) {
        uVar18 = uVar26;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(undefined4 *)(lVar31 + *(longlong *)&pTVar20->field_0x10) = 0;
      uVar30 = uVar25 - uVar17;
      uVar18 = 0;
      if ((int)uVar30 < param_1->ArrayNum) {
        uVar18 = ~uVar30 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar10 = (param_1->AllocatorInstance).Data;
      dVar2 = *(double *)(pFVar10 + lVar27);
      dVar3 = *(double *)(pFVar10 + lVar27 + 8);
      dVar4 = *(double *)(pFVar10 + lVar27 + 0x10);
      uVar18 = 0;
      if ((int)uVar25 < *(int *)&pTVar21->field_0x18) {
        uVar18 = uVar26;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar24 = *(longlong *)&pTVar21->field_0x10;
      *(float *)(lVar28 + lVar24) = (float)dVar2;
      *(float *)(lVar28 + 4 + lVar24) = (float)dVar3;
      *(float *)(lVar28 + 8 + lVar24) = (float)dVar4;
      uVar18 = 0;
      if ((int)uVar30 < param_3->ArrayNum) {
        uVar18 = ~uVar30 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar11 = (param_3->AllocatorInstance).Data;
      pFVar10 = pFVar11 + lVar27;
      uVar13 = *(undefined8 *)pFVar10;
      uVar14 = *(undefined8 *)(pFVar10 + 8);
      uVar5 = *(undefined8 *)(pFVar11 + lVar27 + 0x10);
      uVar18 = 0;
      if ((int)uVar25 < *(int *)(lVar9 + 0x18)) {
        uVar18 = uVar26;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar25 = uVar25 + 1;
      lVar24 = *(longlong *)(lVar9 + 0x10) + lVar23 * 0x18;
      lVar29 = lVar29 + 1;
      lVar28 = lVar28 + 0xc;
      lVar31 = lVar31 + 4;
      puVar1 = (undefined8 *)(lVar24 + lVar27);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      *(undefined8 *)(lVar24 + 0x10 + lVar27) = uVar5;
      lVar27 = lVar27 + 0x18;
    } while (lVar29 < iVar6);
  }
  return;
}

// GetPointsWithFloatAttribute @ 143fea050

void __thiscall
GeometryCollection::Facades::FPointsCollectionFacade::GetPointsWithFloatAttribute
          (FPointsCollectionFacade *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  FManagedArrayCollection *pFVar9;
  FName FVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  double dVar14;
  FName FVar15;
  bool bVar16;
  uint uVar17;
  FName *pFVar18;
  TManagedArray<int> *pTVar19;
  TManagedArray<int> *pTVar20;
  TManagedArray<int> *pTVar21;
  TManagedArray<UE::Math::TVector<float>_> *pTVar22;
  TManagedArray<float> *pTVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined2 local_148;
  undefined2 uStack_146;
  undefined2 local_13c;
  undefined2 uStack_13a;
  undefined2 local_130;
  undefined2 uStack_12e;
  undefined2 local_124;
  undefined2 uStack_122;
  undefined2 local_118;
  undefined2 uStack_116;
  FConstructionParameters local_c8;
  FConstructionParameters local_b8;
  FConstructionParameters local_a8;
  FConstructionParameters local_98;
  FConstructionParameters local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60 [5];
  
  FVar15 = FTransformCollection::TransformGroup;
  pFVar9 = this->Collection;
  pFVar18 = ::FName::FName(&local_78,"TransformToGoemetryIndex");
  local_c8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_c8.GroupIndexDependency.Number = 0;
  FVar10 = *pFVar18;
  local_c8.Saved = true;
  local_c8.bAllowCircularDependency = false;
  local_c8._10_2_ = uStack_146;
  bVar16 = FManagedArrayCollection::HasAttribute(pFVar9,FVar10,FVar15);
  if (!bVar16) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar9,FVar10,FVar15,&local_c8);
  }
  pTVar19 = FManagedArrayCollection::ModifyAttribute<int>(pFVar9,FVar10,FVar15);
  FVar15 = FGeometryCollection::GeometryGroup;
  pFVar9 = this->Collection;
  pFVar18 = ::FName::FName(&local_70,"VertexStart");
  local_b8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_b8.GroupIndexDependency.Number = 0;
  FVar10 = *pFVar18;
  local_b8.Saved = true;
  local_b8.bAllowCircularDependency = false;
  local_b8._10_2_ = uStack_13a;
  bVar16 = FManagedArrayCollection::HasAttribute(pFVar9,FVar10,FVar15);
  if (!bVar16) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar9,FVar10,FVar15,&local_b8);
  }
  pTVar20 = FManagedArrayCollection::ModifyAttribute<int>(pFVar9,FVar10,FVar15);
  FVar15 = FGeometryCollection::GeometryGroup;
  pFVar9 = this->Collection;
  pFVar18 = ::FName::FName(&local_68,"VertexCount");
  local_a8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_a8.GroupIndexDependency.Number = 0;
  FVar10 = *pFVar18;
  local_a8.Saved = true;
  local_a8.bAllowCircularDependency = false;
  local_a8._10_2_ = uStack_12e;
  bVar16 = FManagedArrayCollection::HasAttribute(pFVar9,FVar10,FVar15);
  if (!bVar16) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar9,FVar10,FVar15,&local_a8);
  }
  pTVar21 = FManagedArrayCollection::ModifyAttribute<int>(pFVar9,FVar10,FVar15);
  FVar10 = FGeometryCollection::VerticesGroup;
  pFVar9 = this->Collection;
  pFVar18 = ::FName::FName(local_60,"Vertex");
  local_98.Saved = true;
  local_98.bAllowCircularDependency = false;
  local_98._10_2_ = uStack_122;
  local_98.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_98.GroupIndexDependency.Number = 0;
  pTVar22 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                      (pFVar9,*pFVar18,FVar10,&local_98);
  local_88.Saved = true;
  local_88.bAllowCircularDependency = false;
  local_88._10_2_ = uStack_116;
  local_88.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_88.GroupIndexDependency.Number = 0;
  pTVar23 = FManagedArrayCollection::AddAttribute<float>
                      (this->Collection,param_2,FGeometryCollection::VerticesGroup,&local_88);
  uVar24 = 0;
  if (param_4 < *(int *)&pTVar19->field_0x18) {
    uVar24 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar24 = *(uint *)(*(longlong *)&pTVar19->field_0x10 + (longlong)param_4 * 4);
  uVar17 = 0;
  if ((int)uVar24 < *(int *)&pTVar20->field_0x18) {
    uVar17 = ~uVar24 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar26 = 0;
  uVar17 = *(uint *)(*(longlong *)&pTVar20->field_0x10 + (longlong)(int)uVar24 * 4);
  uVar31 = (ulonglong)(int)uVar17;
  uVar25 = 0;
  if ((int)uVar24 < *(int *)&pTVar21->field_0x18) {
    uVar25 = ~uVar24 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  piVar1 = &param_1->ArrayNum;
  piVar2 = &param_1->ArrayMax;
  iVar8 = *(int *)(*(longlong *)&pTVar21->field_0x10 + (longlong)(int)uVar24 * 4);
  *piVar1 = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_1->AllocatorInstance,0,piVar2);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar8,&param_1->AllocatorInstance,piVar1,piVar2);
  piVar2 = &param_3->ArrayNum;
  piVar4 = &param_3->ArrayMax;
  *piVar2 = 0;
  if (*piVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,piVar4);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar8,&param_3->AllocatorInstance,piVar2,piVar4);
  if (0 < iVar8) {
    lVar28 = uVar31 * 0xc;
    uVar27 = uVar26;
    uVar29 = uVar26;
    do {
      uVar25 = (uint)uVar26;
      uVar30 = (int)uVar31 + uVar25;
      uVar24 = 0;
      if ((int)uVar30 < *(int *)&pTVar22->field_0x18) {
        uVar24 = ~uVar30 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      fVar5 = *(float *)(lVar28 + *(longlong *)&pTVar22->field_0x10);
      uVar7 = *(undefined8 *)(lVar28 + 4 + *(longlong *)&pTVar22->field_0x10);
      dVar14 = (double)(float)((ulonglong)uVar7 >> 0x20);
      uVar24 = 0;
      if ((int)uVar25 < *piVar1) {
        uVar24 = ~uVar25 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar11 = (param_1->AllocatorInstance).Data;
      *(double *)(pFVar11 + uVar29) = (double)fVar5;
      auVar13._8_4_ = SUB84(dVar14,0);
      auVar13._0_8_ = (double)(float)uVar7;
      auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      *(undefined1 (*) [16])(pFVar11 + uVar29 + 8) = auVar13;
      uVar24 = 0;
      if ((int)uVar30 < *(int *)&pTVar23->field_0x18) {
        uVar24 = ~uVar30 >> 0x1f;
      }
      if (uVar24 == 0) {
        uVar31 = (ulonglong)(int)uVar17;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      else {
        uVar31 = (ulonglong)uVar17;
      }
      lVar3 = uVar27 * 4;
      uVar6 = *(undefined4 *)(lVar3 + (longlong)(int)uVar31 * 4 + *(longlong *)&pTVar23->field_0x10)
      ;
      uVar24 = 0;
      if ((int)uVar25 < *piVar2) {
        uVar24 = ~uVar25 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar26 = (ulonglong)(uVar25 + 1);
      uVar27 = uVar27 + 1;
      lVar28 = lVar28 + 0xc;
      uVar29 = uVar29 + 0x18;
      *(undefined4 *)((param_3->AllocatorInstance).Data + lVar3) = uVar6;
    } while ((longlong)uVar27 < (longlong)iVar8);
  }
  return;
}

