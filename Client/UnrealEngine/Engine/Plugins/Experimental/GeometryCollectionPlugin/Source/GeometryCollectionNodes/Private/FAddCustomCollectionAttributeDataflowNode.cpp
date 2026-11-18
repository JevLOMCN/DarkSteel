// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8d8320

UScriptStruct * __cdecl FAddCustomCollectionAttributeDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddCustomCollectionAttributeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddCustomCollectionAttributeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddCustomCollectionAttributeDataflowNode,
                         (UObject *)pUVar1,L"AddCustomCollectionAttributeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAddCustomCollectionAttributeDataflowNode.OuterSingleton;
}

// GetType @ 14e8d90b0

FName __thiscall
FAddCustomCollectionAttributeDataflowNode::GetType(FAddCustomCollectionAttributeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FAddCustomCollectionAttributeDataflowNode");
  return in_RDX;
}

// IsA @ 14e8d9110

bool __thiscall
FAddCustomCollectionAttributeDataflowNode::IsA
          (FAddCustomCollectionAttributeDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FAddCustomCollectionAttributeDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8d9178;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8d9178:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8d9196;
      }
    }
  }
  bVar5 = true;
LAB_14e8d9196:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8d9290

FStructOnScope * __thiscall
FAddCustomCollectionAttributeDataflowNode::NewStructOnScope
          (FAddCustomCollectionAttributeDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAddCustomCollectionAttributeDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FAddCustomCollectionAttributeDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAddCustomCollectionAttributeDataflowNode,
                           (UObject *)pUVar2,L"AddCustomCollectionAttributeDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FAddCustomCollectionAttributeDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8d9400

void __thiscall
FAddCustomCollectionAttributeDataflowNode::SerializeInternal
          (FAddCustomCollectionAttributeDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddCustomCollectionAttributeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddCustomCollectionAttributeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddCustomCollectionAttributeDataflowNode,
                         (UObject *)pUVar1,L"AddCustomCollectionAttributeDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FAddCustomCollectionAttributeDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FAddCustomCollectionAttributeDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8d947d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8d9520

FName __thiscall
FAddCustomCollectionAttributeDataflowNode::GetDisplayName
          (FAddCustomCollectionAttributeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"AddCustomCollectionAttribute");
  return in_RDX;
}

// GetCategory @ 14e8d9580

FName __thiscall
FAddCustomCollectionAttributeDataflowNode::GetCategory
          (FAddCustomCollectionAttributeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8d95e0

FString * __thiscall
FAddCustomCollectionAttributeDataflowNode::GetTags
          (FAddCustomCollectionAttributeDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8d9ab0

UScriptStruct * __thiscall
FAddCustomCollectionAttributeDataflowNode::TypedScriptStruct
          (FAddCustomCollectionAttributeDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddCustomCollectionAttributeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddCustomCollectionAttributeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddCustomCollectionAttributeDataflowNode,
                         (UObject *)pUVar1,L"AddCustomCollectionAttributeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAddCustomCollectionAttributeDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8da180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAddCustomCollectionAttributeDataflowNode::Evaluate
          (FAddCustomCollectionAttributeDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  uint *puVar2;
  EStandardGroupNameEnum EVar3;
  code *pcVar4;
  FName FVar5;
  TManagedArray<double> *pTVar6;
  TManagedArray<UE::Math::TVector<float>_> *pTVar7;
  TManagedArray<UE::Math::TVector<double>_> *pTVar8;
  TManagedArray<int> *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  FManagedArrayCollection *pFVar14;
  FDataflowInput *this_00;
  int *piVar15;
  FName *pFVar16;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar17;
  TManagedArray<bool> *pTVar18;
  TManagedArray<bool> *pTVar19;
  wchar_t *pwVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  FManagedArrayBase *pFVar24;
  undefined1 auStackY_628 [32];
  FName local_5f8;
  FName local_5f0;
  uchar local_5e8 [4];
  float local_5e4;
  undefined8 local_5e0;
  undefined4 local_5d8;
  undefined8 local_5d4;
  TVector2<float>_u_0 local_5cc;
  undefined8 local_5c4;
  undefined8 local_5bc;
  FGuid local_5b4;
  FString local_5a0;
  TIntVector2<int>_u_0 local_590;
  TManagedArrayAccessor<float> local_588;
  TIntVector3<int>_u_0 local_550;
  TArray<int,TSizedDefaultAllocator<32>_> local_540;
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> local_530;
  TArray<float,TSizedDefaultAllocator<32>_> local_520;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_510;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_500;
  TManagedArrayAccessor<double> local_4f0;
  TManagedArrayAccessor<bool> local_4b8;
  TManagedArrayAccessor<UE::Math::TVector2<float>_> local_480;
  TManagedArrayAccessor<UE::Math::TVector<float>_> local_448;
  TManagedArrayAccessor<UE::Math::TVector<double>_> local_410;
  TManagedArrayAccessor<FLinearColor> local_3d8;
  TManagedArrayAccessor<int> local_3a0;
  FConnectionReference local_368;
  FName local_350;
  FName local_348;
  FName local_340;
  FName local_338;
  FName local_330;
  FName local_328;
  FName local_320;
  FName local_318;
  FName local_310;
  FName local_308;
  FName local_300;
  FName local_2f8;
  FName local_2f0;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  TManagedArrayAccessor<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> local_298;
  TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> local_260;
  TVector<double>_u_0 local_228;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8;
  undefined4 local_1f7;
  undefined2 local_1f3;
  undefined1 local_1f1;
  FName local_1f0;
  TIntVector4<int>_u_0 local_1e8;
  TVector4<float>_u_0 local_1d8;
  FLinearColor_u_0 local_1c8;
  TQuat<float> local_1b8;
  TTransform<double> local_1a8;
  undefined1 local_148 [24];
  undefined8 uStack_130;
  void *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  ForElementType<FSetElementId> local_110;
  ulonglong local_100;
  undefined1 local_f8 [160];
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_628;
  pFVar1 = &this->Collection;
  puVar13 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar13 == pFVar1) {
    pFVar14 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1)
    ;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)local_f8,pFVar14);
    local_368.Reference = &this->NumElements;
    local_368.Index = -1;
    pTVar18 = (TManagedArray<bool> *)0x0;
    local_368.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_368);
    piVar15 = FDataflowInput::GetValue<int>(this_00,param_1,local_368.Reference);
    EVar3 = this->GroupName;
    iVar21 = *piVar15;
    if (EVar3 == Dataflow_EStandardGroupNameEnum_Custom) {
      if ((this->CustomGroupName).Data.ArrayNum == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = (wchar_t *)(this->CustomGroupName).Data.AllocatorInstance.Data;
      }
      pFVar16 = ::FName::FName(&local_1f0,pwVar20);
      local_5f8 = *pFVar16;
    }
    else {
      local_5d4 = 0;
      if (EVar3 == Dataflow_EStandardGroupNameEnum_Transform) {
        local_5f8 = FTransformCollection::TransformGroup;
      }
      else if (EVar3 == Dataflow_EStandardGroupNameEnum_Geometry) {
        local_5f8 = FGeometryCollection::GeometryGroup;
      }
      else if (EVar3 == Dataflow_EStandardGroupNameEnum_Faces) {
        local_5f8 = FGeometryCollection::FacesGroup;
      }
      else if (EVar3 == Dataflow_EStandardGroupNameEnum_Vertices) {
        local_5f8 = FGeometryCollection::VerticesGroup;
      }
      else if (EVar3 == Dataflow_EStandardGroupNameEnum_Material) {
        local_5f8 = FGeometryCollection::MaterialGroup;
      }
      else {
        local_5f8.ComparisonIndex.Value = 0;
        local_5f8.Number = 0;
        if (EVar3 == Dataflow_EStandardGroupNameEnum_Breaking) {
          local_5f8 = FGeometryCollection::BreakingGroup;
        }
      }
    }
    uVar11 = ::FName::GetStringLength(&local_5f8);
    FVar5 = local_5f8;
    if (uVar11 != 0) {
      iVar12 = (this->AttrName).Data.ArrayNum;
      uVar11 = iVar12 - 1;
      if (iVar12 == 0) {
        uVar11 = 0;
      }
      if (0 < (int)uVar11) {
        uVar11 = ::GetTypeHash(local_5f8.ComparisonIndex.Value);
        if (local_f8._96_4_ != local_f8._140_4_) {
          puVar13 = (undefined1 *)
                    ((longlong)&((FManagedArrayCollection *)local_f8)->GroupInfo + 0x38);
          if ((undefined1 *)local_f8._152_8_ != (undefined1 *)0x0) {
            puVar13 = (undefined1 *)local_f8._152_8_;
          }
          for (iVar12 = *(int *)(puVar13 + (ulonglong)(local_58 - 1U & FVar5.Number + uVar11) * 4);
              iVar12 != -1; iVar12 = *(int *)(local_f8._88_8_ + 0xc + (longlong)iVar12 * 0x14)) {
            if (*(FName *)(local_f8._88_8_ + (longlong)iVar12 * 0x14) == FVar5) goto LAB_14e8da3b9;
          }
        }
        FManagedArrayCollection::AddGroup((FManagedArrayCollection *)local_f8,local_5f8);
        FManagedArrayCollection::AddElements((FManagedArrayCollection *)local_f8,iVar21,local_5f8);
LAB_14e8da3b9:
        if ((this->AttrName).Data.ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)(this->AttrName).Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_5f0,pwVar20);
        uVar11 = 0;
        switch(this->CustomAttributeType) {
        case Dataflow_CustomAttributeType_UInt8:
          local_5e8[0] = '\0';
          AddAndFillAttribute<unsigned_char>
                    ((FManagedArrayCollection *)local_f8,local_5f0,local_5f8,local_5e8);
          break;
        case Dataflow_CustomAttributeType_Int32:
          local_3a0.ConstCollection = (FManagedArrayCollection *)local_f8;
          local_3a0.Name = local_5f0;
          local_350 = local_5f0;
          local_3a0.Group = local_5f8;
          local_348 = local_5f8;
          local_3a0.DefaultGroupDependency.ComparisonIndex.Value = 0;
          local_3a0.DefaultGroupDependency.Number = 0;
          local_3a0.Collection = (FManagedArrayCollection *)local_f8;
          pTVar17 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                            *)&((FManagedArrayCollection *)local_f8)->Map,
                           (TTuple<FName,FName> *)&local_350);
          pTVar19 = (TManagedArray<bool> *)&pTVar17->field_0x10;
          if (pTVar17 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pTVar19 = pTVar18;
          }
          local_3a0.AttributeArray = (TManagedArray<int> *)pTVar18;
          if ((pTVar19 != (TManagedArray<bool> *)0x0) && (*(char *)pTVar19 == '\x05')) {
            FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)pTVar19);
            local_3a0.AttributeArray = *(TManagedArray<int> **)&pTVar19->field_0x20;
            if (((TManagedArray<bool> *)local_3a0.AttributeArray == (TManagedArray<bool> *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypedManagedArray != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                    ,0x319,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            ((TManagedArray<bool> *)local_3a0.AttributeArray)->field_0x8 = 1;
          }
          local_3a0.ConstAttributeArray = local_3a0.AttributeArray;
          if (((FManagedArrayCollection *)local_f8 == (FManagedArrayCollection *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0xa1,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar10 = FManagedArrayCollection::HasAttribute
                             ((FManagedArrayCollection *)local_f8,local_3a0.Name,local_3a0.Group);
          if ((!bVar10) &&
             (TManagedArrayAccessor<int>::Add(&local_3a0,MakePersistent,(FName)0x0),
             pTVar9 = local_3a0.AttributeArray, pTVar19 = pTVar18,
             0 < *(int *)&((FSharedReferencer<1> *)&(local_3a0.AttributeArray)->field_0x18)->
                          ReferenceController)) {
            do {
              uVar22 = (uint)pTVar18;
              uVar11 = 0;
              if ((int)uVar22 <
                  *(int *)&((FSharedReferencer<1> *)&pTVar9->field_0x18)->ReferenceController) {
                uVar11 = ~uVar22 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pTVar18 = (TManagedArray<bool> *)(ulonglong)(uVar22 + 1);
              *(undefined4 *)
               (&pTVar19->field_0x0 +
               (longlong)((TSharedPtr<FManagedArrayBase,1> *)&pTVar9->field_0x10)->Object) = 0;
              pTVar19 = (TManagedArray<bool> *)&pTVar19->field_0x4;
            } while ((int)(uVar22 + 1) <
                     *(int *)&((FSharedReferencer<1> *)&pTVar9->field_0x18)->ReferenceController);
          }
          break;
        case Dataflow_CustomAttributeType_Float:
          local_588.ConstCollection = (FManagedArrayCollection *)local_f8;
          local_588.Name = local_5f0;
          local_340 = local_5f0;
          local_588.Group = local_5f8;
          local_338 = local_5f8;
          local_5e4 = 0.0;
          local_588.DefaultGroupDependency.ComparisonIndex.Value = 0;
          local_588.DefaultGroupDependency.Number = 0;
          local_588.Collection = (FManagedArrayCollection *)local_f8;
          pTVar17 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                            *)&((FManagedArrayCollection *)local_f8)->Map,
                           (TTuple<FName,FName> *)&local_340);
          pTVar19 = (TManagedArray<bool> *)&pTVar17->field_0x10;
          if (pTVar17 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pTVar19 = pTVar18;
          }
          if ((pTVar19 != (TManagedArray<bool> *)0x0) && (*(char *)pTVar19 == '\t')) {
            FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)pTVar19);
            pTVar18 = *(TManagedArray<bool> **)&pTVar19->field_0x20;
            if ((pTVar18 == (TManagedArray<bool> *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypedManagedArray != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                    ,0x319,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar18->field_0x8 = 1;
          }
          local_588.AttributeArray = (TManagedArray<float> *)pTVar18;
          local_588.ConstAttributeArray = (TManagedArray<float> *)pTVar18;
          if (((FManagedArrayCollection *)local_f8 == (FManagedArrayCollection *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0xa1,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar10 = FManagedArrayCollection::HasAttribute
                             ((FManagedArrayCollection *)local_f8,local_588.Name,local_588.Group);
          if (!bVar10) {
            TManagedArrayAccessor<float>::Add(&local_588,MakePersistent,(FName)0x0);
            TManagedArrayBase<float>::Fill
                      ((TManagedArrayBase<float> *)local_588.AttributeArray,&local_5e4);
          }
          break;
        case Dataflow_CustomAttributeType_Double:
          local_4f0.ConstCollection = (FManagedArrayCollection *)local_f8;
          local_4f0.Name = local_5f0;
          local_330 = local_5f0;
          local_4f0.Group = local_5f8;
          local_328 = local_5f8;
          local_4f0.DefaultGroupDependency.ComparisonIndex.Value = 0;
          local_4f0.DefaultGroupDependency.Number = 0;
          local_4f0.Collection = (FManagedArrayCollection *)local_f8;
          pTVar17 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                            *)&((FManagedArrayCollection *)local_f8)->Map,
                           (TTuple<FName,FName> *)&local_330);
          pTVar19 = (TManagedArray<bool> *)&pTVar17->field_0x10;
          if (pTVar17 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pTVar19 = pTVar18;
          }
          local_4f0.AttributeArray = (TManagedArray<double> *)pTVar18;
          if ((pTVar19 != (TManagedArray<bool> *)0x0) && (*(char *)pTVar19 == ' ')) {
            FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)pTVar19);
            local_4f0.AttributeArray = *(TManagedArray<double> **)&pTVar19->field_0x20;
            if (((TManagedArray<bool> *)local_4f0.AttributeArray == (TManagedArray<bool> *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypedManagedArray != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                    ,0x319,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            ((TManagedArray<bool> *)local_4f0.AttributeArray)->field_0x8 = 1;
          }
          local_4f0.ConstAttributeArray = local_4f0.AttributeArray;
          if (((FManagedArrayCollection *)local_f8 == (FManagedArrayCollection *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0xa1,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar10 = FManagedArrayCollection::HasAttribute
                             ((FManagedArrayCollection *)local_f8,local_4f0.Name,local_4f0.Group);
          if ((!bVar10) &&
             (TManagedArrayAccessor<double>::Add(&local_4f0,MakePersistent,(FName)0x0),
             pTVar6 = local_4f0.AttributeArray, pTVar19 = pTVar18,
             0 < *(int *)&((FSharedReferencer<1> *)&(local_4f0.AttributeArray)->field_0x18)->
                          ReferenceController)) {
            do {
              uVar23 = (uint)pTVar18;
              uVar22 = uVar11;
              if ((int)uVar23 <
                  *(int *)&((FSharedReferencer<1> *)&pTVar6->field_0x18)->ReferenceController) {
                uVar22 = ~uVar23 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pTVar18 = (TManagedArray<bool> *)(ulonglong)(uVar23 + 1);
              *(undefined8 *)
               (&pTVar19->field_0x0 +
               (longlong)((TSharedPtr<FManagedArrayBase,1> *)&pTVar6->field_0x10)->Object) = 0;
              pTVar19 = (TManagedArray<bool> *)&pTVar19->field_0x8;
            } while ((int)(uVar23 + 1) <
                     *(int *)&((FSharedReferencer<1> *)&pTVar6->field_0x18)->ReferenceController);
          }
          break;
        case Dataflow_CustomAttributeType_Bool:
          local_4b8.ConstCollection = (FManagedArrayCollection *)local_f8;
          local_4b8.Name = local_5f0;
          local_320 = local_5f0;
          local_4b8.Group = local_5f8;
          local_318 = local_5f8;
          local_4b8.DefaultGroupDependency.ComparisonIndex.Value = 0;
          local_4b8.DefaultGroupDependency.Number = 0;
          local_4b8.Collection = (FManagedArrayCollection *)local_f8;
          pTVar17 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                            *)&((FManagedArrayCollection *)local_f8)->Map,
                           (TTuple<FName,FName> *)&local_320);
          pTVar19 = (TManagedArray<bool> *)&pTVar17->field_0x10;
          if (pTVar17 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pTVar19 = pTVar18;
          }
          local_4b8.AttributeArray = pTVar18;
          if ((pTVar19 != (TManagedArray<bool> *)0x0) && (*(char *)pTVar19 == '\x06')) {
            FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)pTVar19);
            local_4b8.AttributeArray = *(TManagedArray<bool> **)&pTVar19->field_0x20;
            if ((local_4b8.AttributeArray == (TManagedArray<bool> *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypedManagedArray != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                    ,0x319,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (local_4b8.AttributeArray)->field_0x8 = 1;
          }
          local_4b8.ConstAttributeArray = local_4b8.AttributeArray;
          if (((FManagedArrayCollection *)local_f8 == (FManagedArrayCollection *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0xa1,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar10 = FManagedArrayCollection::HasAttribute
                             ((FManagedArrayCollection *)local_f8,local_4b8.Name,local_4b8.Group);
          if ((!bVar10) &&
             (TManagedArrayAccessor<bool>::Add(&local_4b8,MakePersistent,(FName)0x0),
             pTVar19 = local_4b8.AttributeArray, 0 < *(int *)&(local_4b8.AttributeArray)->field_0x28
             )) {
            do {
              iVar21 = (int)pTVar18;
              if (((iVar21 < 0) || (*(int *)&pTVar19->field_0x28 <= iVar21)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar24 = (FManagedArrayBase *)&pTVar19->field_0x10;
              if (*(FManagedArrayBase **)&pTVar19->field_0x20 != (FManagedArrayBase *)0x0) {
                pFVar24 = *(FManagedArrayBase **)&pTVar19->field_0x20;
              }
              iVar12 = iVar21;
              if (iVar21 < 0) {
                iVar12 = iVar21 + 0x1f;
              }
              puVar2 = (uint *)((longlong)&pFVar24->_padding_ + (longlong)(iVar12 >> 5) * 4);
              *puVar2 = *puVar2 & ~(1 << ((byte)pTVar18 & 0x1f));
              pTVar18 = (TManagedArray<bool> *)(ulonglong)(iVar21 + 1U);
            } while ((int)(iVar21 + 1U) < *(int *)&pTVar19->field_0x28);
          }
          break;
        case Dataflow_CustomAttributeType_String:
          local_5a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5a0.Data.ArrayNum = 0;
          local_5a0.Data.ArrayMax = 0;
          AddAndFillAttribute<FString>
                    ((FManagedArrayCollection *)local_f8,local_5f0,local_5f8,&local_5a0);
          if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
          }
          break;
        case Dataflow_CustomAttributeType_Vector2f:
          local_480.ConstCollection = (FManagedArrayCollection *)local_f8;
          local_480.Name = local_5f0;
          local_310 = local_5f0;
          local_480.Group = local_5f8;
          local_308 = local_5f8;
          local_5cc = (TVector2<float>_u_0)0x0;
          local_480.DefaultGroupDependency.ComparisonIndex.Value = 0;
          local_480.DefaultGroupDependency.Number = 0;
          local_480.Collection = (FManagedArrayCollection *)local_f8;
          pTVar17 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                            *)&((FManagedArrayCollection *)local_f8)->Map,
                           (TTuple<FName,FName> *)&local_310);
          pTVar19 = (TManagedArray<bool> *)&pTVar17->field_0x10;
          if (pTVar17 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pTVar19 = pTVar18;
          }
          if ((pTVar19 != (TManagedArray<bool> *)0x0) && (*(char *)pTVar19 == '\x03')) {
            FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)pTVar19);
            pTVar18 = *(TManagedArray<bool> **)&pTVar19->field_0x20;
            if ((pTVar18 == (TManagedArray<bool> *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypedManagedArray != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                    ,0x319,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar18->field_0x8 = 1;
          }
          local_480.AttributeArray = (TManagedArray<UE::Math::TVector2<float>_> *)pTVar18;
          local_480.ConstAttributeArray = (TManagedArray<UE::Math::TVector2<float>_> *)pTVar18;
          if (((FManagedArrayCollection *)local_f8 == (FManagedArrayCollection *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0xa1,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar10 = FManagedArrayCollection::HasAttribute
                             ((FManagedArrayCollection *)local_f8,local_480.Name,local_480.Group);
          if (!bVar10) {
            TManagedArrayAccessor<UE::Math::TVector2<float>_>::Add
                      (&local_480,MakePersistent,(FName)0x0);
            TManagedArrayBase<UE::Math::TVector2<float>_>::Fill
                      ((TManagedArrayBase<UE::Math::TVector2<float>_> *)local_480.AttributeArray,
                       (TVector2<float> *)&local_5cc._s_0);
          }
          break;
        case Dataflow_CustomAttributeType_Vector3f:
          local_448.ConstCollection = (FManagedArrayCollection *)local_f8;
          local_448.Name = local_5f0;
          local_2c0 = local_5f0;
          local_448.Group = local_5f8;
          local_2b8 = local_5f8;
          local_5e0 = 0;
          local_5d8 = 0;
          local_448.DefaultGroupDependency.ComparisonIndex.Value = 0;
          local_448.DefaultGroupDependency.Number = 0;
          local_448.Collection = (FManagedArrayCollection *)local_f8;
          pTVar17 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                            *)&((FManagedArrayCollection *)local_f8)->Map,
                           (TTuple<FName,FName> *)&local_2c0);
          pTVar19 = (TManagedArray<bool> *)&pTVar17->field_0x10;
          if (pTVar17 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pTVar19 = pTVar18;
          }
          local_448.AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)pTVar18;
          if ((pTVar19 != (TManagedArray<bool> *)0x0) && (*(char *)pTVar19 == '\x01')) {
            FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)pTVar19);
            local_448.AttributeArray =
                 *(TManagedArray<UE::Math::TVector<float>_> **)&pTVar19->field_0x20;
            if (((TManagedArray<bool> *)local_448.AttributeArray == (TManagedArray<bool> *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypedManagedArray != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                    ,0x319,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            ((TManagedArray<bool> *)local_448.AttributeArray)->field_0x8 = 1;
          }
          local_448.ConstAttributeArray = local_448.AttributeArray;
          if (((FManagedArrayCollection *)local_f8 == (FManagedArrayCollection *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0xa1,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar10 = FManagedArrayCollection::HasAttribute
                             ((FManagedArrayCollection *)local_f8,local_448.Name,local_448.Group);
          if ((!bVar10) &&
             (TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
                        (&local_448,MakePersistent,(FName)0x0), pTVar7 = local_448.AttributeArray,
             pTVar19 = pTVar18,
             0 < *(int *)&((FSharedReferencer<1> *)&(local_448.AttributeArray)->field_0x18)->
                          ReferenceController)) {
            do {
              uVar23 = (uint)pTVar19;
              uVar22 = uVar11;
              if ((int)uVar23 <
                  *(int *)&((FSharedReferencer<1> *)&pTVar7->field_0x18)->ReferenceController) {
                uVar22 = ~uVar23 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar24 = ((TSharedPtr<FManagedArrayBase,1> *)&pTVar7->field_0x10)->Object;
              *(undefined8 *)(&pTVar18->field_0x0 + (longlong)pFVar24) = local_5e0;
              *(undefined4 *)((longlong)&pTVar18->field_0x8 + (longlong)pFVar24) = local_5d8;
              pTVar18 = (TManagedArray<bool> *)&pTVar18->field_0xc;
              pTVar19 = (TManagedArray<bool> *)(ulonglong)(uVar23 + 1);
            } while ((int)(uVar23 + 1) <
                     *(int *)&((FSharedReferencer<1> *)&pTVar7->field_0x18)->ReferenceController);
          }
          break;
        case Dataflow_CustomAttributeType_Vector3d:
          local_410.ConstCollection = (FManagedArrayCollection *)local_f8;
          local_410.Name = local_5f0;
          local_300 = local_5f0;
          local_410.Group = local_5f8;
          local_2f8 = local_5f8;
          local_2a0 = 0;
          local_2b0 = 0;
          uStack_2a8 = 0;
          local_410.DefaultGroupDependency.ComparisonIndex.Value = 0;
          local_410.DefaultGroupDependency.Number = 0;
          local_410.Collection = (FManagedArrayCollection *)local_f8;
          pTVar17 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                            *)&((FManagedArrayCollection *)local_f8)->Map,
                           (TTuple<FName,FName> *)&local_300);
          pTVar19 = (TManagedArray<bool> *)&pTVar17->field_0x10;
          if (pTVar17 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pTVar19 = pTVar18;
          }
          local_410.AttributeArray = (TManagedArray<UE::Math::TVector<double>_> *)pTVar18;
          if ((pTVar19 != (TManagedArray<bool> *)0x0) && (*(char *)pTVar19 == '\"')) {
            FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)pTVar19);
            local_410.AttributeArray =
                 *(TManagedArray<UE::Math::TVector<double>_> **)&pTVar19->field_0x20;
            if (((TManagedArray<bool> *)local_410.AttributeArray == (TManagedArray<bool> *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypedManagedArray != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                    ,0x319,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            ((TManagedArray<bool> *)local_410.AttributeArray)->field_0x8 = 1;
          }
          local_410.ConstAttributeArray = local_410.AttributeArray;
          if (((FManagedArrayCollection *)local_f8 == (FManagedArrayCollection *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0xa1,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar10 = FManagedArrayCollection::HasAttribute
                             ((FManagedArrayCollection *)local_f8,local_410.Name,local_410.Group);
          if ((!bVar10) &&
             (TManagedArrayAccessor<UE::Math::TVector<double>_>::Add
                        (&local_410,MakePersistent,(FName)0x0), pTVar8 = local_410.AttributeArray,
             pTVar19 = pTVar18,
             0 < *(int *)&((FSharedReferencer<1> *)&(local_410.AttributeArray)->field_0x18)->
                          ReferenceController)) {
            do {
              uVar23 = (uint)pTVar19;
              uVar22 = uVar11;
              if ((int)uVar23 <
                  *(int *)&((FSharedReferencer<1> *)&pTVar8->field_0x18)->ReferenceController) {
                uVar22 = ~uVar23 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar24 = ((TSharedPtr<FManagedArrayBase,1> *)&pTVar8->field_0x10)->Object;
              *(undefined8 *)(&pTVar18->field_0x0 + (longlong)pFVar24) = local_2b0;
              *(undefined8 *)(&pTVar18->field_0x0 + (longlong)pFVar24 + 8) = uStack_2a8;
              *(undefined8 *)
               ((longlong)&pFVar24->_padding_ +
               (longlong)&((TSharedPtr<FManagedArrayBase,1> *)&pTVar18->field_0x10)->Object) =
                   local_2a0;
              pTVar18 = (TManagedArray<bool> *)&pTVar18->field_0x18;
              pTVar19 = (TManagedArray<bool> *)(ulonglong)(uVar23 + 1);
            } while ((int)(uVar23 + 1) <
                     *(int *)&((FSharedReferencer<1> *)&pTVar8->field_0x18)->ReferenceController);
          }
          break;
        case Dataflow_CustomAttributeType_Vector4f:
          local_1d8._0_8_ = 0;
          local_1d8._8_8_ = 0;
          AddAndFillAttribute<UE::Math::TVector4<float>_>
                    ((FManagedArrayCollection *)local_f8,local_5f0,local_5f8,
                     (TVector4<float> *)&local_1d8._s_0);
          break;
        case Dataflow_CustomAttributeType_LinearColor:
          local_3d8.ConstCollection = (FManagedArrayCollection *)local_f8;
          local_3d8.Name = local_5f0;
          local_2f0 = local_5f0;
          local_3d8.Group = local_5f8;
          local_2e8 = local_5f8;
          local_1c8._0_8_ = ___xmm_3f800000000000000000000000000000;
          local_1c8._8_8_ = _UNK_150689648;
          local_3d8.DefaultGroupDependency.ComparisonIndex.Value = 0;
          local_3d8.DefaultGroupDependency.Number = 0;
          local_3d8.Collection = (FManagedArrayCollection *)local_f8;
          pTVar17 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                            *)&((FManagedArrayCollection *)local_f8)->Map,
                           (TTuple<FName,FName> *)&local_2f0);
          pTVar19 = (TManagedArray<bool> *)&pTVar17->field_0x10;
          if (pTVar17 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pTVar19 = pTVar18;
          }
          if ((pTVar19 != (TManagedArray<bool> *)0x0) && (*(char *)pTVar19 == '\x04')) {
            FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)pTVar19);
            pTVar18 = *(TManagedArray<bool> **)&pTVar19->field_0x20;
            if ((pTVar18 == (TManagedArray<bool> *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypedManagedArray != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                    ,0x319,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar18->field_0x8 = 1;
          }
          local_3d8.AttributeArray = (TManagedArray<FLinearColor> *)pTVar18;
          local_3d8.ConstAttributeArray = (TManagedArray<FLinearColor> *)pTVar18;
          if (((FManagedArrayCollection *)local_f8 == (FManagedArrayCollection *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0xa1,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar10 = FManagedArrayCollection::HasAttribute
                             ((FManagedArrayCollection *)local_f8,local_3d8.Name,local_3d8.Group);
          if (!bVar10) {
            TManagedArrayAccessor<FLinearColor>::Add(&local_3d8,MakePersistent,(FName)0x0);
            TManagedArrayBase<FLinearColor>::Fill
                      ((TManagedArrayBase<FLinearColor> *)local_3d8.AttributeArray,
                       (FLinearColor *)&local_1c8._s_0);
          }
          break;
        case Dataflow_CustomAttributeType_Transform:
          local_1a8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_1a8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_1a8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_1a8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_1a8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_1a8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          AddAndFillAttribute<UE::Math::TTransform<double>_>
                    ((FManagedArrayCollection *)local_f8,local_5f0,local_5f8,&local_1a8);
          break;
        case Dataflow_CustomAttributeType_Quat4f:
          local_1b8.X = 0.0;
          local_1b8.Y = 0.0;
          local_1b8.Z = 0.0;
          local_1b8.W = 0.0;
          AddAndFillAttribute<UE::Math::TQuat<float>_>
                    ((FManagedArrayCollection *)local_f8,local_5f0,local_5f8,&local_1b8);
          break;
        case Dataflow_CustomAttributeType_Box:
          local_1f8 = 0;
          local_1f7 = 0;
          local_1f3 = 0;
          local_228._s_0.X = 0.0;
          local_228._s_0.Y = 0.0;
          local_1f1 = 0;
          local_228._s_0.Z = 0.0;
          uStack_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          AddAndFillAttribute<UE::Math::TBox<double>_>
                    ((FManagedArrayCollection *)local_f8,local_5f0,local_5f8,
                     (TBox<double> *)&local_228._s_0);
          break;
        case Dataflow_CustomAttributeType_Guid:
          local_5b4.A = 0;
          local_5b4.B = 0;
          local_5b4.C = 0;
          local_5b4.D = 0;
          AddAndFillAttribute<FGuid>
                    ((FManagedArrayCollection *)local_f8,local_5f0,local_5f8,&local_5b4);
          break;
        case Dataflow_CustomAttributeType_Int32Set:
          local_298.ConstCollection = (FManagedArrayCollection *)local_f8;
          local_298.Collection = (FManagedArrayCollection *)local_f8;
          local_298.Name = local_5f0;
          local_2e0 = local_5f0;
          local_298.Group = local_5f8;
          local_2d8 = local_5f8;
          local_148._16_8_ = 0;
          uStack_130 = 0;
          local_110.InlineData[0] = '\0';
          local_110.InlineData[1] = '\0';
          local_110.InlineData[2] = '\0';
          local_110.InlineData[3] = '\0';
          local_110._padding_ = 0;
          local_100 = 0;
          local_148._0_8_ = (FScriptContainerElement *)0x0;
          local_148._8_8_ = 0;
          local_128 = (void *)0x0;
          local_120 = 0;
          local_11c = 0x80;
          local_118 = 0xffffffff;
          local_114 = 0;
          local_110.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_298.DefaultGroupDependency.ComparisonIndex.Value = 0;
          local_298.DefaultGroupDependency.Number = 0;
          pTVar17 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                            *)&((FManagedArrayCollection *)local_f8)->Map,
                           (TTuple<FName,FName> *)&local_2e0);
          pTVar19 = (TManagedArray<bool> *)&pTVar17->field_0x10;
          if (pTVar17 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pTVar19 = pTVar18;
          }
          if ((pTVar19 != (TManagedArray<bool> *)0x0) && (*(char *)pTVar19 == '\x0e')) {
            pTVar18 = (TManagedArray<bool> *)
                      FManagedArrayCollection::FValueType::
                      ModifyTypedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                                ((FValueType *)pTVar19);
          }
          local_5c4 = 0;
          local_298.AttributeArray =
               (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)pTVar18;
          local_298.ConstAttributeArray =
               (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)pTVar18;
          TManagedArrayAccessor<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::AddAndFill
                    (&local_298,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_148,
                     MakePersistent,(FName)0x0);
          local_100 = local_100 & 0xffffffff00000000;
          if (local_110.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_110.SecondaryData);
          }
          iVar21 = SUB84(local_148._8_8_,4);
          local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
          if (iVar21 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
          }
          local_118 = 0xffffffff;
          local_114 = 0;
          local_120 = 0;
          if (0x80 < local_11c) {
            local_11c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
          }
          if (local_128 != (void *)0x0) {
            FMemory::Free(local_128);
          }
          if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_148._0_8_);
          }
          break;
        case Dataflow_CustomAttributeType_Int32Array:
          local_540.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_540.ArrayNum = 0;
          local_540.ArrayMax = 0;
          AddAndFillAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                    ((FManagedArrayCollection *)local_f8,local_5f0,local_5f8,&local_540);
          break;
        case Dataflow_CustomAttributeType_IntVector:
          local_550._0_8_ = 0;
          local_550._s_0.Z = 0;
          AddAndFillAttribute<UE::Math::TIntVector3<int>_>
                    ((FManagedArrayCollection *)local_f8,local_5f0,local_5f8,
                     (TIntVector3<int> *)&local_550._s_0);
          break;
        case Dataflow_CustomAttributeType_IntVector2:
          local_590 = (TIntVector2<int>_u_0)0x0;
          AddAndFillAttribute<UE::Math::TIntVector2<int>_>
                    ((FManagedArrayCollection *)local_f8,local_5f0,local_5f8,
                     (TIntVector2<int> *)&local_590._s_0);
          break;
        case Dataflow_CustomAttributeType_IntVector4:
          local_1e8._0_8_ = 0;
          local_1e8._8_8_ = 0;
          AddAndFillAttribute<UE::Math::TIntVector4<int>_>
                    ((FManagedArrayCollection *)local_f8,local_5f0,local_5f8,
                     (TIntVector4<int> *)&local_1e8._s_0);
          break;
        case Dataflow_CustomAttributeType_IntVector2Array:
          local_530.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_530.ArrayNum = 0;
          local_530.ArrayMax = 0;
          AddAndFillAttribute<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>
                    ((FManagedArrayCollection *)local_f8,local_5f0,local_5f8,&local_530);
          break;
        case Dataflow_CustomAttributeType_FloatArray:
          local_520.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_520.ArrayNum = 0;
          local_520.ArrayMax = 0;
          AddAndFillAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                    ((FManagedArrayCollection *)local_f8,local_5f0,local_5f8,&local_520);
          break;
        case Dataflow_CustomAttributeType_Vector2fArray:
          local_510.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_510.ArrayNum = 0;
          local_510.ArrayMax = 0;
          AddAndFillAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                    ((FManagedArrayCollection *)local_f8,local_5f0,local_5f8,&local_510);
          break;
        case Dataflow_CustomAttributeType_FVector3fArray:
          local_260.ConstCollection = (FManagedArrayCollection *)local_f8;
          local_260.Collection = (FManagedArrayCollection *)local_f8;
          local_260.Name = local_5f0;
          local_2d0 = local_5f0;
          local_260.Group = local_5f8;
          local_2c8 = local_5f8;
          local_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_500.ArrayNum = 0;
          local_500.ArrayMax = 0;
          local_260.DefaultGroupDependency.ComparisonIndex.Value = 0;
          local_260.DefaultGroupDependency.Number = 0;
          pTVar17 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                            *)&((FManagedArrayCollection *)local_f8)->Map,
                           (TTuple<FName,FName> *)&local_2d0);
          pTVar19 = (TManagedArray<bool> *)&pTVar17->field_0x10;
          if (pTVar17 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pTVar19 = pTVar18;
          }
          if ((pTVar19 != (TManagedArray<bool> *)0x0) && (*(char *)pTVar19 == '(')) {
            pTVar18 = (TManagedArray<bool> *)
                      FManagedArrayCollection::FValueType::
                      ModifyTypedPtr<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                                ((FValueType *)pTVar19);
          }
          local_5bc = 0;
          local_260.AttributeArray =
               (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)
               pTVar18;
          local_260.ConstAttributeArray =
               (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)
               pTVar18;
          TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
          AddAndFill(&local_260,&local_500,MakePersistent,(FName)0x0);
        }
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)local_f8,pFVar1);
    FManagedArrayCollection::~FManagedArrayCollection((FManagedArrayCollection *)local_f8);
  }
  return;
}

// FAddCustomCollectionAttributeDataflowNode @ 14e90fbf0

FAddCustomCollectionAttributeDataflowNode * __thiscall
FAddCustomCollectionAttributeDataflowNode::FAddCustomCollectionAttributeDataflowNode
          (FAddCustomCollectionAttributeDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FAddCustomCollectionAttributeDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  this->GroupName = Dataflow_EStandardGroupNameEnum_Transform;
  ::FString::FString(&this->CustomGroupName,"");
  ::FString::FString(&this->AttrName,"");
  this->CustomAttributeType = Dataflow_CustomAttributeType_Float;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->NumElements = 0;
  local_58.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->NumElements;
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

// FAddCustomCollectionAttributeDataflowNode @ 14e90fd20

FAddCustomCollectionAttributeDataflowNode * __thiscall
FAddCustomCollectionAttributeDataflowNode::FAddCustomCollectionAttributeDataflowNode
          (FAddCustomCollectionAttributeDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FAddCustomCollectionAttributeDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->GroupName = Dataflow_EStandardGroupNameEnum_Transform;
  ::FString::FString(&this->CustomGroupName,"");
  ::FString::FString(&this->AttrName,"");
  this->CustomAttributeType = Dataflow_CustomAttributeType_Float;
  this->NumElements = 0;
  return this;
}

