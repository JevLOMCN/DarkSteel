// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e83e8a0

UScriptStruct * __cdecl FPointsToCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPointsToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPointsToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPointsToCollectionDataflowNode,(UObject *)pUVar1
                         ,L"PointsToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FPointsToCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e83ebb0

FName __thiscall FPointsToCollectionDataflowNode::GetType(FPointsToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FPointsToCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e83ec40

bool __thiscall
FPointsToCollectionDataflowNode::IsA(FPointsToCollectionDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FPointsToCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e83eca8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e83eca8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e83ecc6;
      }
    }
  }
  bVar5 = true;
LAB_14e83ecc6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e83ede0

FStructOnScope * __thiscall
FPointsToCollectionDataflowNode::NewStructOnScope(FPointsToCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FPointsToCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FPointsToCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPointsToCollectionDataflowNode,
                           (UObject *)pUVar2,L"PointsToCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FPointsToCollectionDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e83eea0

void __thiscall
FPointsToCollectionDataflowNode::SerializeInternal
          (FPointsToCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPointsToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPointsToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPointsToCollectionDataflowNode,(UObject *)pUVar1
                         ,L"PointsToCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FPointsToCollectionDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FPointsToCollectionDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e83ef1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e83ef30

FName __thiscall
FPointsToCollectionDataflowNode::GetDisplayName(FPointsToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"PointsToCollection");
  return in_RDX;
}

// GetCategory @ 14e83ef60

FName __thiscall FPointsToCollectionDataflowNode::GetCategory(FPointsToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e83ef90

FString * __thiscall
FPointsToCollectionDataflowNode::GetTags
          (FPointsToCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e83efc0

UScriptStruct * __thiscall
FPointsToCollectionDataflowNode::TypedScriptStruct(FPointsToCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPointsToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPointsToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPointsToCollectionDataflowNode,(UObject *)pUVar1
                         ,L"PointsToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FPointsToCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e83f350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPointsToCollectionDataflowNode::Evaluate
          (FPointsToCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *_Src;
  FName FVar6;
  code *pcVar7;
  int iVar8;
  __m128d _Var9;
  __m128d _Var10;
  __m128d _Var11;
  __m128d _Var12;
  __m128d _Var13;
  __m128d _Var14;
  FName FVar15;
  ForAnyElementType _Src_00;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar16;
  TManagedArray<FLinearColor> *pTVar17;
  TManagedArray<int> *pTVar18;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar19;
  TManagedArray<int> *pTVar20;
  TManagedArray<UE::Math::TBox<double>_> *pTVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  undefined1 *puVar25;
  FDataflowInput *pFVar26;
  FManagedArrayCollection *pFVar27;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar28;
  FName *pFVar29;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar30;
  TManagedArray<UE::Math::TVector<float>_> *pTVar31;
  FString *pFVar32;
  FManagedArrayCollection *pFVar33;
  longlong lVar34;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar35;
  uint uVar36;
  uint uVar37;
  longlong lVar38;
  ulonglong uVar39;
  longlong lVar40;
  uint uVar41;
  ulonglong uVar42;
  undefined1 auStackY_7a8 [32];
  ForAnyElementType local_760;
  int local_758;
  int local_754;
  uint local_750;
  int local_74c;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_748;
  FName local_738;
  undefined2 local_730;
  undefined2 uStack_72e;
  FName local_72c;
  undefined2 local_724;
  undefined2 uStack_722;
  FName local_720;
  undefined2 local_718;
  undefined2 uStack_716;
  FName local_714;
  undefined2 local_70c;
  undefined2 uStack_70a;
  FName local_708;
  undefined2 local_700;
  undefined2 uStack_6fe;
  FName local_6fc;
  undefined2 local_6f4;
  undefined2 uStack_6f2;
  FName local_6f0;
  undefined2 local_6e8;
  undefined2 uStack_6e6;
  FName local_6e4;
  undefined2 local_6dc;
  undefined2 uStack_6da;
  FName local_6d8;
  undefined2 local_6d0;
  undefined2 uStack_6ce;
  FName local_6cc;
  undefined2 local_6c4;
  undefined2 uStack_6c2;
  FName local_6c0;
  undefined2 local_6b8;
  undefined2 uStack_6b6;
  FName local_6b4;
  undefined2 local_6ac;
  undefined2 uStack_6aa;
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 local_650;
  TManagedArray<FString> *local_648;
  TManagedArray<UE::Math::TTransform<double>_> *local_640;
  TManagedArray<FLinearColor> *local_638;
  TManagedArray<int> *local_630;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_628;
  TManagedArray<int> *local_620;
  TManagedArray<int> *local_618;
  TManagedArray<int> *local_610;
  TManagedArray<int> *local_608;
  TManagedArray<UE::Math::TBox<double>_> *local_600;
  FContext *local_5f8;
  FConstructionParameters local_5e8;
  FConstructionParameters local_5d8;
  FConstructionParameters local_5c8;
  FConstructionParameters local_5b8;
  FConstructionParameters local_5a8;
  FConstructionParameters local_598;
  FConstructionParameters local_588;
  FConstructionParameters local_578;
  FConstructionParameters local_568;
  FConstructionParameters local_558;
  FConstructionParameters local_548;
  FConstructionParameters local_538;
  FName local_528;
  FName local_520;
  FName local_518;
  FName local_510;
  FName local_508;
  FName local_500;
  FName local_4f8;
  FName local_4f0;
  FName local_4e8;
  FName local_4e0;
  FName local_4d8;
  FName local_4d0;
  FName local_4c8;
  FName local_4c0;
  FName local_4b8;
  FName local_4b0;
  FName local_4a8;
  FName local_4a0;
  FConnectionReference local_498;
  FConnectionReference local_480;
  FName local_468;
  FName local_460;
  FName local_458;
  FName local_450;
  FName local_448;
  FName local_440;
  FName local_438;
  FName local_430;
  FName local_428;
  FName local_420;
  FName local_418;
  FName local_410;
  FString local_408;
  FBoundsFacade local_3f8;
  undefined1 local_298 [24];
  undefined8 uStack_280;
  void *local_278;
  undefined4 local_270;
  uint local_26c;
  undefined4 local_268;
  undefined4 local_264;
  ForElementType<FSetElementId> local_260;
  ulonglong local_250;
  FManagedArrayCollection local_248;
  TVector<double>_u_0 local_198;
  double dStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  FManagedArrayCollection local_158;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_7a8;
  pFVar27 = &this->Collection;
  local_5f8 = param_1;
  puVar25 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar25 != pFVar27) {
    return;
  }
  uVar39 = 0;
  local_498.ContainerReference = (void *)0x0;
  local_498.Index = -1;
  local_498.Reference = pFVar27;
  pFVar26 = FDataflowNode::FindInput((FDataflowNode *)this,&local_498);
  if (pFVar26->Connection != (FDataflowOutput *)0x0) {
    local_480.Index = -1;
    local_480.ContainerReference = (void *)0x0;
    local_480.Reference = &this->Points;
    pFVar26 = FDataflowNode::FindInput((FDataflowNode *)this,&local_480);
    if (pFVar26->Connection != (FDataflowOutput *)0x0) {
      pFVar27 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar27);
      FManagedArrayCollection::FManagedArrayCollection(&local_248,pFVar27);
      pTVar28 = FDataflowNode::
                GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                          ((FDataflowNode *)this,param_1,&this->Points);
      local_760.Data = (FScriptContainerElement *)0x0;
      local_758 = pTVar28->ArrayNum;
      lVar38 = (longlong)local_758;
      _Src = (pTVar28->AllocatorInstance).Data;
      if (local_758 == 0) {
        local_754 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_758,0,&local_760,local_758,&local_754);
        memcpy(local_760.Data,_Src,lVar38 * 0x18);
      }
      uVar23 = FManagedArrayCollection::NumElements(&local_248,FTransformCollection::TransformGroup)
      ;
      lVar38 = (longlong)(int)uVar23;
      local_750 = FManagedArrayCollection::NumElements
                            (&local_248,FGeometryCollection::GeometryGroup);
      local_74c = FManagedArrayCollection::NumElements
                            (&local_248,FGeometryCollection::VerticesGroup);
      FManagedArrayCollection::AddElements(&local_248,1,FTransformCollection::TransformGroup);
      FManagedArrayCollection::AddElements(&local_248,1,FGeometryCollection::GeometryGroup);
      FManagedArrayCollection::AddElements(&local_248,local_758,FGeometryCollection::VerticesGroup);
      FVar6 = FTransformCollection::TransformGroup;
      local_6a8 = 0;
      local_6d8.ComparisonIndex.Value = 0;
      local_6d8.Number = 0;
      local_6d0._0_1_ = true;
      local_6d0._1_1_ = false;
      pFVar29 = ::FName::FName(&local_410,"Transform");
      local_5e8.Saved = local_6d0._0_1_;
      local_5e8.bAllowCircularDependency = local_6d0._1_1_;
      local_5e8._10_2_ = uStack_6ce;
      local_5e8.GroupIndexDependency = local_6d8;
      local_640 = FManagedArrayCollection::AddAttribute<UE::Math::TTransform<double>_>
                            (&local_248,*pFVar29,FVar6,&local_5e8);
      FVar15 = FTransformCollection::TransformGroup;
      local_6cc.ComparisonIndex.Value = 0;
      local_6cc.Number = 0;
      local_6a0 = 0;
      local_6c4._0_1_ = true;
      local_6c4._1_1_ = false;
      pFVar29 = ::FName::FName(&local_418,"BoneName");
      local_5d8.GroupIndexDependency = local_6cc;
      FVar6 = *pFVar29;
      local_5d8.Saved = local_6c4._0_1_;
      local_5d8.bAllowCircularDependency = local_6c4._1_1_;
      local_5d8._10_2_ = uStack_6c2;
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if (!bVar22) {
        FManagedArrayCollection::AddNewAttributeImpl<FString>(&local_248,FVar6,FVar15,&local_5d8);
      }
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if ((!bVar22) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("HasAttribute(Name, Group)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x164,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_520 = FVar15;
      local_528 = FVar6;
      pTVar30 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&local_248.Map,(TTuple<FName,FName> *)&local_528);
      if ((pTVar30 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_648 = FManagedArrayCollection::FValueType::ModifyTypedPtr<FString>
                            ((FValueType *)&pTVar30->field_0x10);
      FVar15 = FTransformCollection::TransformGroup;
      local_738.ComparisonIndex.Value = 0;
      local_738.Number = 0;
      local_698 = 0;
      local_730._0_1_ = true;
      local_730._1_1_ = false;
      pFVar29 = ::FName::FName(&local_430,"BoneColor");
      local_5c8.GroupIndexDependency = local_738;
      FVar6 = *pFVar29;
      local_5c8.Saved = local_730._0_1_;
      local_5c8.bAllowCircularDependency = local_730._1_1_;
      local_5c8._10_2_ = uStack_72e;
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if (!bVar22) {
        FManagedArrayCollection::AddNewAttributeImpl<FLinearColor>
                  (&local_248,FVar6,FVar15,&local_5c8);
      }
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if ((!bVar22) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("HasAttribute(Name, Group)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x164,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_510 = FVar15;
      local_518 = FVar6;
      pTVar30 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&local_248.Map,(TTuple<FName,FName> *)&local_518);
      if ((pTVar30 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_638 = FManagedArrayCollection::FValueType::ModifyTypedPtr<FLinearColor>
                            ((FValueType *)&pTVar30->field_0x10);
      FVar15 = FTransformCollection::TransformGroup;
      local_6e4.ComparisonIndex.Value = 0;
      local_6e4.Number = 0;
      local_690 = 0;
      local_6dc._0_1_ = true;
      local_6dc._1_1_ = false;
      pFVar29 = ::FName::FName(&local_438,"Parent");
      local_5b8.GroupIndexDependency = local_6e4;
      FVar6 = *pFVar29;
      local_5b8.Saved = local_6dc._0_1_;
      local_5b8.bAllowCircularDependency = local_6dc._1_1_;
      local_5b8._10_2_ = uStack_6da;
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if (!bVar22) {
        FManagedArrayCollection::AddNewAttributeImpl<int>(&local_248,FVar6,FVar15,&local_5b8);
      }
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if ((!bVar22) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("HasAttribute(Name, Group)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x164,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_500 = FVar15;
      local_508 = FVar6;
      pTVar30 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&local_248.Map,(TTuple<FName,FName> *)&local_508);
      if ((pTVar30 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_630 = FManagedArrayCollection::FValueType::ModifyTypedPtr<int>
                            ((FValueType *)&pTVar30->field_0x10);
      FVar6 = FTransformCollection::TransformGroup;
      local_6f0.ComparisonIndex.Value = 0;
      local_6f0.Number = 0;
      local_688 = 0;
      local_6e8._0_1_ = true;
      local_6e8._1_1_ = false;
      pFVar29 = ::FName::FName(&local_428,"Children");
      local_5a8.Saved = local_6e8._0_1_;
      local_5a8.bAllowCircularDependency = local_6e8._1_1_;
      local_5a8._10_2_ = uStack_6e6;
      local_5a8.GroupIndexDependency = local_6f0;
      local_628 = FManagedArrayCollection::
                  AddAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                            (&local_248,*pFVar29,FVar6,&local_5a8);
      FVar15 = FTransformCollection::TransformGroup;
      local_6fc.ComparisonIndex.Value = 0;
      local_6fc.Number = 0;
      local_680 = 0;
      local_6f4._0_1_ = true;
      local_6f4._1_1_ = false;
      pFVar29 = ::FName::FName(&local_440,"TransformToGeometryIndex");
      local_598.GroupIndexDependency = local_6fc;
      FVar6 = *pFVar29;
      local_598.Saved = local_6f4._0_1_;
      local_598.bAllowCircularDependency = local_6f4._1_1_;
      local_598._10_2_ = uStack_6f2;
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if (!bVar22) {
        FManagedArrayCollection::AddNewAttributeImpl<int>(&local_248,FVar6,FVar15,&local_598);
      }
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if ((!bVar22) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("HasAttribute(Name, Group)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x164,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_4f0 = FVar15;
      local_4f8 = FVar6;
      pTVar30 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&local_248.Map,(TTuple<FName,FName> *)&local_4f8);
      if ((pTVar30 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_620 = FManagedArrayCollection::FValueType::ModifyTypedPtr<int>
                            ((FValueType *)&pTVar30->field_0x10);
      FVar15 = FGeometryCollection::VerticesGroup;
      local_708.ComparisonIndex.Value = 0;
      local_708.Number = 0;
      local_678 = 0;
      local_700._0_1_ = true;
      local_700._1_1_ = false;
      pFVar29 = ::FName::FName(&local_448,"Vertex");
      local_588.GroupIndexDependency = local_708;
      FVar6 = *pFVar29;
      local_588.Saved = local_700._0_1_;
      local_588.bAllowCircularDependency = local_700._1_1_;
      local_588._10_2_ = uStack_6fe;
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if (!bVar22) {
        FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<float>_>
                  (&local_248,FVar6,FVar15,&local_588);
      }
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if ((!bVar22) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("HasAttribute(Name, Group)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x164,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_4e0 = FVar15;
      local_4e8 = FVar6;
      pTVar30 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&local_248.Map,(TTuple<FName,FName> *)&local_4e8);
      if ((pTVar30 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar31 = FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TVector<float>_>
                          ((FValueType *)&pTVar30->field_0x10);
      FVar15 = FGeometryCollection::VerticesGroup;
      local_670 = 0;
      local_714.ComparisonIndex.Value = 0;
      local_714.Number = 0;
      local_70c._0_1_ = true;
      local_70c._1_1_ = false;
      pFVar29 = ::FName::FName(&local_450,"BoneMap");
      local_578.GroupIndexDependency = local_714;
      FVar6 = *pFVar29;
      local_578.Saved = local_70c._0_1_;
      local_578.bAllowCircularDependency = local_70c._1_1_;
      local_578._10_2_ = uStack_70a;
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if (!bVar22) {
        FManagedArrayCollection::AddNewAttributeImpl<int>(&local_248,FVar6,FVar15,&local_578);
      }
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if ((!bVar22) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("HasAttribute(Name, Group)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x164,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_4d0 = FVar15;
      local_4d8 = FVar6;
      pTVar30 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&local_248.Map,(TTuple<FName,FName> *)&local_4d8);
      if ((pTVar30 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FManagedArrayCollection::FValueType::ModifyTypedPtr<int>((FValueType *)&pTVar30->field_0x10);
      FVar15 = FGeometryCollection::GeometryGroup;
      local_668 = 0;
      local_720.ComparisonIndex.Value = 0;
      local_720.Number = 0;
      local_718._0_1_ = true;
      local_718._1_1_ = false;
      pFVar29 = ::FName::FName(&local_458,"TransformIndex");
      local_568.GroupIndexDependency = local_720;
      FVar6 = *pFVar29;
      local_568.Saved = local_718._0_1_;
      local_568.bAllowCircularDependency = local_718._1_1_;
      local_568._10_2_ = uStack_716;
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if (!bVar22) {
        FManagedArrayCollection::AddNewAttributeImpl<int>(&local_248,FVar6,FVar15,&local_568);
      }
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if ((!bVar22) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("HasAttribute(Name, Group)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x164,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_4c0 = FVar15;
      local_4c8 = FVar6;
      pTVar30 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&local_248.Map,(TTuple<FName,FName> *)&local_4c8);
      if ((pTVar30 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_618 = FManagedArrayCollection::FValueType::ModifyTypedPtr<int>
                            ((FValueType *)&pTVar30->field_0x10);
      FVar6 = FGeometryCollection::GeometryGroup;
      local_72c.ComparisonIndex.Value = 0;
      local_72c.Number = 0;
      local_660 = 0;
      local_724._0_1_ = true;
      local_724._1_1_ = false;
      pFVar29 = ::FName::FName(&local_460,"BoundingBox");
      local_558.Saved = local_724._0_1_;
      local_558.bAllowCircularDependency = local_724._1_1_;
      local_558._10_2_ = uStack_722;
      local_558.GroupIndexDependency = local_72c;
      local_600 = FManagedArrayCollection::AddAttribute<UE::Math::TBox<double>_>
                            (&local_248,*pFVar29,FVar6,&local_558);
      FVar15 = FGeometryCollection::GeometryGroup;
      local_6b4.ComparisonIndex.Value = 0;
      local_6b4.Number = 0;
      local_658 = 0;
      local_6ac._0_1_ = true;
      local_6ac._1_1_ = false;
      pFVar29 = ::FName::FName(&local_468,"VertexStart");
      local_548.GroupIndexDependency = local_6b4;
      FVar6 = *pFVar29;
      local_548.Saved = local_6ac._0_1_;
      local_548.bAllowCircularDependency = local_6ac._1_1_;
      local_548._10_2_ = uStack_6aa;
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if (!bVar22) {
        FManagedArrayCollection::AddNewAttributeImpl<int>(&local_248,FVar6,FVar15,&local_548);
      }
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if ((!bVar22) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("HasAttribute(Name, Group)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x164,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_4b0 = FVar15;
      local_4b8 = FVar6;
      pTVar30 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&local_248.Map,(TTuple<FName,FName> *)&local_4b8);
      if ((pTVar30 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_610 = FManagedArrayCollection::FValueType::ModifyTypedPtr<int>
                            ((FValueType *)&pTVar30->field_0x10);
      FVar15 = FGeometryCollection::GeometryGroup;
      local_6c0.ComparisonIndex.Value = 0;
      local_6c0.Number = 0;
      local_650 = 0;
      local_6b8._0_1_ = true;
      local_6b8._1_1_ = false;
      pFVar29 = ::FName::FName(&local_420,"VertexCount");
      local_538.GroupIndexDependency = local_6c0;
      FVar6 = *pFVar29;
      local_538.Saved = local_6b8._0_1_;
      local_538.bAllowCircularDependency = local_6b8._1_1_;
      local_538._10_2_ = uStack_6b6;
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if (!bVar22) {
        FManagedArrayCollection::AddNewAttributeImpl<int>(&local_248,FVar6,FVar15,&local_538);
      }
      bVar22 = FManagedArrayCollection::HasAttribute(&local_248,FVar6,FVar15);
      if ((!bVar22) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("HasAttribute(Name, Group)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x164,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_4a0 = FVar15;
      local_4a8 = FVar6;
      pTVar30 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&local_248.Map,(TTuple<FName,FName> *)&local_4a8);
      if ((pTVar30 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_608 = FManagedArrayCollection::FValueType::ModifyTypedPtr<int>
                            ((FValueType *)&pTVar30->field_0x10);
      pTVar16 = local_640;
      _Var14 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      _Var13 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
      _Var12 = UE::Math::TTransform<double>::Identity.Translation.ZW;
      _Var11 = UE::Math::TTransform<double>::Identity.Translation.XY;
      _Var10 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
      _Var9 = UE::Math::TTransform<double>::Identity.Rotation.XY;
      uVar41 = ~uVar23 >> 0x1f;
      uVar24 = 0;
      if ((int)uVar23 < *(int *)&local_640->field_0x18) {
        uVar24 = uVar41;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar40 = *(longlong *)&pTVar16->field_0x10;
      lVar34 = lVar38 * 0x60;
      *(double (*) [2])(lVar34 + lVar40) = _Var9.m128d_f64;
      *(double (*) [2])(lVar34 + 0x10 + lVar40) = _Var10.m128d_f64;
      *(double (*) [2])(lVar34 + 0x20 + lVar40) = _Var11.m128d_f64;
      *(double (*) [2])(lVar34 + 0x30 + lVar40) = _Var12.m128d_f64;
      *(double (*) [2])(lVar34 + 0x40 + lVar40) = _Var13.m128d_f64;
      *(double (*) [2])(lVar34 + 0x50 + lVar40) = _Var14.m128d_f64;
      pFVar32 = ::FString::FString(&local_408,L"Points");
      uVar24 = 0;
      if ((int)uVar23 < *(int *)&local_648->field_0x18) {
        uVar24 = uVar41;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar40 = lVar38 * 0x10;
      ::FString::operator=((FString *)(*(longlong *)&local_648->field_0x10 + lVar40),pFVar32);
      if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.Data.AllocatorInstance.Data);
      }
      pTVar17 = local_638;
      uVar36 = 0;
      uVar24 = uVar36;
      if ((int)uVar23 < *(int *)&local_638->field_0x18) {
        uVar24 = uVar41;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar18 = local_630;
      lVar34 = *(longlong *)&pTVar17->field_0x10;
      *(undefined4 *)(lVar34 + lVar40) = 0x3ca3d70a;
      *(undefined4 *)(lVar34 + 4 + lVar40) = 0x3c23d70a;
      *(undefined4 *)(lVar34 + 8 + lVar40) = 0x3dcccccd;
      *(undefined4 *)(lVar34 + 0xc + lVar40) = 0x3f800000;
      uVar24 = uVar36;
      if ((int)uVar23 < *(int *)&local_630->field_0x18) {
        uVar24 = uVar41;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar19 = local_628;
      local_298._16_8_ = 0;
      uStack_280 = 0;
      local_260.InlineData[0] = '\0';
      local_260.InlineData[1] = '\0';
      local_260.InlineData[2] = '\0';
      local_260.InlineData[3] = '\0';
      local_260._padding_ = 0;
      *(undefined4 *)(*(longlong *)&pTVar18->field_0x10 + lVar38 * 4) = 0xffffffff;
      local_250 = 0;
      local_298._0_8_ = (FScriptContainerElement *)0x0;
      uVar24 = uVar36;
      if ((int)uVar23 < *(int *)&local_628->field_0x18) {
        uVar24 = uVar41;
      }
      local_298._8_8_ = 0;
      local_278 = (void *)0x0;
      local_270 = 0;
      local_26c = 0x80;
      local_268 = 0xffffffff;
      local_264 = 0;
      local_260.SecondaryData = (ForElementType<FSetElementId>)0x0;
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar35 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                (lVar38 * 0x50 + *(longlong *)&pTVar19->field_0x10);
      if (pTVar35 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_298) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                  (pTVar35,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_298);
      }
      local_250 = local_250 & 0xffffffff00000000;
      if (local_260.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_260.SecondaryData);
      }
      iVar8 = SUB84(local_298._8_8_,4);
      local_298._8_8_ = local_298._8_8_ & 0xffffffff00000000;
      if (iVar8 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_298,0,(int *)(local_298 + 0xc));
      }
      local_268 = 0xffffffff;
      local_264 = 0;
      local_270 = 0;
      if (0x80 < local_26c) {
        local_26c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x10),0);
      }
      if (local_278 != (void *)0x0) {
        FMemory::Free(local_278);
      }
      if ((FScriptContainerElement *)local_298._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_298._0_8_);
      }
      pTVar18 = local_620;
      if ((int)uVar23 < *(int *)&local_620->field_0x18) {
        uVar36 = uVar41;
      }
      if ((uVar36 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar8 = local_74c;
      *(uint *)(*(longlong *)&pTVar18->field_0x10 + lVar38 * 4) = local_750;
      uVar24 = 0;
      if (0 < local_758) {
        lVar38 = (longlong)local_74c * 0xc;
        uVar42 = uVar39;
        do {
          uVar36 = (uint)uVar39;
          uVar41 = uVar24;
          if ((int)uVar36 < local_758) {
            uVar41 = ~uVar36 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          dVar3 = *(double *)(local_760.Data + uVar42);
          dVar4 = *(double *)(local_760.Data + uVar42 + 8);
          dVar5 = *(double *)(local_760.Data + uVar42 + 0x10);
          uVar41 = uVar24;
          if ((int)(uVar36 + iVar8) < *(int *)&pTVar31->field_0x18) {
            uVar41 = ~(uVar36 + iVar8) >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar40 = *(longlong *)&pTVar31->field_0x10;
          uVar39 = (ulonglong)(uVar36 + 1);
          uVar42 = uVar42 + 0x18;
          *(float *)(lVar40 + lVar38) = (float)dVar3;
          *(float *)(lVar40 + 4 + lVar38) = (float)dVar4;
          *(float *)(lVar40 + 8 + lVar38) = (float)dVar5;
          lVar38 = lVar38 + 0xc;
        } while ((int)(uVar36 + 1) < local_758);
      }
      pTVar18 = local_618;
      uVar41 = local_750;
      lVar38 = (longlong)(int)local_750;
      uVar37 = ~local_750 >> 0x1f;
      uVar36 = uVar24;
      if ((int)local_750 < *(int *)&local_618->field_0x18) {
        uVar36 = uVar37;
      }
      if ((uVar36 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar20 = local_610;
      *(uint *)(*(longlong *)&pTVar18->field_0x10 + lVar38 * 4) = uVar23;
      uVar23 = uVar24;
      if ((int)uVar41 < *(int *)&local_610->field_0x18) {
        uVar23 = uVar37;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar18 = local_608;
      iVar8 = local_758;
      *(int *)(*(longlong *)&pTVar20->field_0x10 + lVar38 * 4) = local_74c;
      uVar23 = uVar24;
      if ((int)uVar41 < *(int *)&local_608->field_0x18) {
        uVar23 = uVar37;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(int *)(*(longlong *)&pTVar18->field_0x10 + lVar38 * 4) = iVar8;
      GeometryCollection::Facades::FBoundsFacade::FBoundsFacade(&local_3f8,&local_248);
      _Src_00.Data = local_760.Data;
      lVar40 = (longlong)local_758;
      local_748.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_748.ArrayNum = local_758;
      if (local_758 == 0) {
        local_748.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_758,0,&local_748.AllocatorInstance,local_758,&local_748.ArrayMax);
        memcpy(local_748.AllocatorInstance.Data,_Src_00.Data,lVar40 * 0x18);
      }
      GeometryCollection::Facades::FBoundsFacade::ComputeBoundingBox
                (&local_3f8,(TBox<double> *)&local_198._s_0,&local_748);
      pTVar21 = local_600;
      if ((int)uVar41 < *(int *)&local_600->field_0x18) {
        uVar24 = uVar37;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar40 = *(longlong *)&pTVar21->field_0x10;
      lVar38 = lVar38 * 0x38;
      *(double *)(lVar38 + lVar40) = local_198._s_0.X;
      ((double *)(lVar38 + lVar40))[1] = local_198._s_0.Y;
      pdVar1 = (double *)(lVar38 + 0x10 + lVar40);
      *pdVar1 = local_198._s_0.Z;
      pdVar1[1] = dStack_180;
      puVar2 = (undefined8 *)(lVar38 + 0x20 + lVar40);
      *puVar2 = local_178;
      puVar2[1] = uStack_170;
      *(undefined8 *)(lVar38 + 0x30 + lVar40) = local_168;
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,local_5f8,&local_248,&this->Collection);
      if (local_760.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_760.Data);
      }
      pFVar27 = &local_248;
      goto LAB_14e840770;
    }
  }
  pFVar33 = FManagedArrayCollection::FManagedArrayCollection(&local_158);
  FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,pFVar33,pFVar27);
  pFVar27 = &local_158;
LAB_14e840770:
  FManagedArrayCollection::~FManagedArrayCollection(pFVar27);
  return;
}

// FPointsToCollectionDataflowNode @ 14e928070

FPointsToCollectionDataflowNode * __thiscall
FPointsToCollectionDataflowNode::FPointsToCollectionDataflowNode
          (FPointsToCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FPointsToCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  local_58.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Points;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_58);
  }
  return this;
}

