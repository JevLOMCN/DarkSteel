// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e825300

UScriptStruct * __cdecl FGetCollectionAttributeDataTypedDataflowNode_v2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2
                           ,(UObject *)pUVar1,L"GetCollectionAttributeDataTypedDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2.
         OuterSingleton;
}

// GetType @ 14e8254f0

FName __thiscall
FGetCollectionAttributeDataTypedDataflowNode_v2::GetType
          (FGetCollectionAttributeDataTypedDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetCollectionAttributeDataTypedDataflowNode_v2");
  return in_RDX;
}

// IsA @ 14e8256c0

bool __thiscall
FGetCollectionAttributeDataTypedDataflowNode_v2::IsA
          (FGetCollectionAttributeDataTypedDataflowNode_v2 *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetCollectionAttributeDataTypedDataflowNode_v2");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e825728;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e825728:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e825746;
      }
    }
  }
  bVar5 = true;
LAB_14e825746:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e825780

FStructOnScope * __thiscall
FGetCollectionAttributeDataTypedDataflowNode_v2::NewStructOnScope
          (FGetCollectionAttributeDataTypedDataflowNode_v2 *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2
                           ,(UObject *)pUVar2,L"GetCollectionAttributeDataTypedDataflowNode_v2");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e825920

void __thiscall
FGetCollectionAttributeDataTypedDataflowNode_v2::SerializeInternal
          (FGetCollectionAttributeDataTypedDataflowNode_v2 *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2
                           ,(UObject *)pUVar1,L"GetCollectionAttributeDataTypedDataflowNode_v2");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e82599d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8259e0

FName __thiscall
FGetCollectionAttributeDataTypedDataflowNode_v2::GetDisplayName
          (FGetCollectionAttributeDataTypedDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetCollectionAttributeDataTyped");
  return in_RDX;
}

// GetCategory @ 14e825a40

FName __thiscall
FGetCollectionAttributeDataTypedDataflowNode_v2::GetCategory
          (FGetCollectionAttributeDataTypedDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e825ab0

FString * __thiscall
FGetCollectionAttributeDataTypedDataflowNode_v2::GetTags
          (FGetCollectionAttributeDataTypedDataflowNode_v2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e825ae0

UScriptStruct * __thiscall
FGetCollectionAttributeDataTypedDataflowNode_v2::TypedScriptStruct
          (FGetCollectionAttributeDataTypedDataflowNode_v2 *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2
                           ,(UObject *)pUVar1,L"GetCollectionAttributeDataTypedDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FGetCollectionAttributeDataTypedDataflowNode_v2.
         OuterSingleton;
}

// Evaluate @ 14e825d40

void __thiscall
FGetCollectionAttributeDataTypedDataflowNode_v2::Evaluate
          (FGetCollectionAttributeDataTypedDataflowNode_v2 *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float fVar5;
  EStandardGroupNameEnum EVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  FDataflowInput *pFVar19;
  FManagedArrayCollection *pFVar20;
  FString *pFVar21;
  FString *pFVar22;
  FCollectionAttributeKey *pFVar23;
  FName *pFVar24;
  FName FVar25;
  FManagedBitArrayBase *this_00;
  TManagedArray<float> *pTVar26;
  FDataflowOutput *pFVar27;
  TManagedArray<double> *pTVar28;
  TManagedArray<int> *pTVar29;
  TManagedArray<FString> *pTVar30;
  TManagedArray<UE::Math::TVector<float>_> *pTVar31;
  TManagedArray<UE::Math::TVector<double>_> *pTVar32;
  TManagedArray<FLinearColor> *pTVar33;
  wchar_t *pwVar34;
  uint uVar35;
  float *pfVar36;
  int *piVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  float fVar41;
  undefined1 local_res8 [8];
  FContext *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FName local_348;
  FName local_340;
  ForAnyElementType local_338;
  undefined8 local_330;
  ForAnyElementType local_328;
  undefined8 local_320;
  FString local_318;
  undefined1 local_308 [8];
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_300;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_2f0;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_2e0;
  double local_2d0;
  double local_2c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2c0;
  undefined8 local_2b0;
  FName local_2a8;
  TArray<double,TSizedDefaultAllocator<32>_> local_2a0;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_290;
  TArray<bool,TSizedDefaultAllocator<32>_> local_280;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  FConnectionReference local_258;
  FString local_240;
  FString local_230;
  TArray<bool,TSizedDefaultAllocator<32>_> local_220;
  FConnectionReference local_210;
  FConnectionReference local_1f8;
  FConnectionReference local_1e0;
  FDataflowOutput *local_1c8;
  FContext *local_1c0;
  ForAnyElementType *local_1b8;
  FConnectionReference local_1a8;
  FDataflowOutput *local_188;
  FContext *local_180;
  ForAnyElementType *local_178;
  FCollectionAttributeKey local_168;
  FName local_148;
  FName local_140;
  FName local_138;
  undefined1 local_130 [8];
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98 [5];
  
  pFVar20 = &this->Collection;
  local_res10 = param_1;
  puVar18 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar18 == pFVar20) {
    local_258.ContainerReference = (void *)0x0;
    local_258.Index = -1;
    local_258.Reference = pFVar20;
    pFVar19 = FDataflowNode::FindInput((FDataflowNode *)this,&local_258);
    if (pFVar19->Connection == (FDataflowOutput *)0x0) {
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,local_258.Reference,pFVar20);
      return;
    }
    local_1f8.Index = -1;
    local_1f8.ContainerReference = (void *)0x0;
    local_1f8.Reference = pFVar20;
    FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_258,&local_1f8);
    return;
  }
  pTVar1 = &this->BoolAttributeData;
  puVar18 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((((TArray<bool,TSizedDefaultAllocator<32>_> *)puVar18 == pTVar1) ||
       (puVar18 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (FDataflowNumericArrayTypes *)puVar18 == &this->NumericArray)) ||
      (puVar18 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (FDataflowVectorArrayTypes *)puVar18 == &this->VectorArray)) ||
     (puVar18 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (FDataflowStringArrayTypes *)puVar18 == &this->StringArray)) {
    pFVar20 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,pFVar20);
    uVar38 = 0;
    EVar6 = this->GroupName;
    uVar14 = 0;
    if (EVar6 == Dataflow_EStandardGroupNameEnum_Custom) {
      if ((this->CustomGroupName).Data.ArrayNum == 0) {
        pwVar34 = L"";
      }
      else {
        pwVar34 = (wchar_t *)(this->CustomGroupName).Data.AllocatorInstance.Data;
      }
      pFVar24 = ::FName::FName(&local_148,pwVar34);
      local_2a8 = *pFVar24;
    }
    else {
      local_2b0 = 0;
      local_2a8 = FTransformCollection::TransformGroup;
      if ((((EVar6 != Dataflow_EStandardGroupNameEnum_Transform) &&
           (local_2a8 = FGeometryCollection::GeometryGroup,
           EVar6 != Dataflow_EStandardGroupNameEnum_Geometry)) &&
          ((local_2a8 = FGeometryCollection::FacesGroup,
           EVar6 != Dataflow_EStandardGroupNameEnum_Faces &&
           ((local_2a8 = FGeometryCollection::VerticesGroup,
            EVar6 != Dataflow_EStandardGroupNameEnum_Vertices &&
            (local_2a8 = FGeometryCollection::MaterialGroup,
            EVar6 != Dataflow_EStandardGroupNameEnum_Material)))))) &&
         (local_2a8.ComparisonIndex.Value = 0, local_2a8.Number = 0,
         EVar6 == Dataflow_EStandardGroupNameEnum_Breaking)) {
        local_2a8 = FGeometryCollection::BreakingGroup;
      }
    }
    local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_280.ArrayNum = 0;
    local_280.ArrayMax = 0;
    FDataflowNode::
    SetValue<TArray<bool,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_280,pTVar1);
    if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.AllocatorInstance.Data);
    }
    local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a0.ArrayNum = 0;
    local_2a0.ArrayMax = 0;
    FDataflowNode::SetValue<FDataflowNumericArrayTypes>
              ((FDataflowNode *)this,param_1,&local_2a0,&this->NumericArray);
    if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.AllocatorInstance.Data);
    }
    local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_290.ArrayNum = 0;
    local_290.ArrayMax = 0;
    FDataflowNode::SetValue<FDataflowVectorArrayTypes>
              ((FDataflowNode *)this,param_1,&local_290,&this->VectorArray);
    if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.AllocatorInstance.Data);
    }
    local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c0.ArrayNum = 0;
    local_2c0.ArrayMax = 0;
    FDataflowNode::SetValue<FDataflowStringArrayTypes>
              ((FDataflowNode *)this,param_1,&local_2c0,&this->StringArray);
    DestructItems<FString,int>((FString *)local_2c0.AllocatorInstance.Data,local_2c0.ArrayNum);
    if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.AllocatorInstance.Data);
    }
    pFVar21 = ::FName::ToString(&local_2a8,local_98);
    pFVar22 = ::FString::FString(&local_a8,&this->AttrName);
    ::FString::FString(&local_168.Attribute,pFVar22);
    ::FString::FString(&local_168.Group,pFVar21);
    pFVar7 = (pFVar22->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar7 = (pFVar21->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    local_1e0.Reference = &this->AttributeKey;
    local_1e0.Index = -1;
    local_1e0.ContainerReference = (void *)0x0;
    pFVar19 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1e0);
    pFVar23 = FDataflowInput::GetValue<FCollectionAttributeKey>(pFVar19,param_1,&local_168);
    ::FString::FString(&local_240,&pFVar23->Attribute);
    ::FString::FString(&local_230,&pFVar23->Group);
    uVar13 = local_230.Data.ArrayNum - 1;
    if (local_230.Data.ArrayNum == 0) {
      uVar13 = uVar14;
    }
    pFVar24 = ::FName::FName(&local_140,uVar13,(wchar_t *)local_230.Data.AllocatorInstance.Data,
                             FNAME_Add);
    local_348 = *pFVar24;
    uVar13 = local_240.Data.ArrayNum - 1;
    if (local_240.Data.ArrayNum == 0) {
      uVar13 = uVar14;
    }
    pFVar24 = ::FName::FName(&local_138,uVar13,(wchar_t *)local_240.Data.AllocatorInstance.Data,
                             FNAME_Add);
    local_340 = *pFVar24;
    uVar13 = ::FName::GetStringLength(&local_348);
    if ((uVar13 != 0) &&
       (uVar13 = ::FName::GetStringLength(&local_340), FVar25 = local_348, uVar13 != 0)) {
      uVar13 = ::GetTypeHash(local_348.ComparisonIndex.Value);
      if (*(int *)&(pFVar20->GroupInfo).field_0x8 != *(int *)&(pFVar20->GroupInfo).field_0x34) {
        puVar18 = *(undefined1 **)&(pFVar20->GroupInfo).field_0x40;
        if (puVar18 == (undefined1 *)0x0) {
          puVar18 = &(pFVar20->GroupInfo).field_0x38;
        }
        iVar17 = *(int *)(puVar18 +
                         (ulonglong)
                         (*(int *)&(pFVar20->GroupInfo).field_0x48 - 1U & FVar25.Number + uVar13) *
                         4);
        if (iVar17 != -1) {
LAB_14e826160:
          if (*(FName *)(*(longlong *)&pFVar20->GroupInfo + (longlong)iVar17 * 0x14) != FVar25)
          goto code_r0x00014e82616c;
          bVar12 = FManagedArrayCollection::HasAttribute(pFVar20,local_340,local_348);
          if (bVar12) {
            FManagedArrayCollection::GetAttributeType(pFVar20,local_340,local_348);
            FVar25 = ::`anonymous_namespace'::GetArrayTypeString((EManagedArrayType)local_130);
            ::FName::ToString((FName *)FVar25,&local_318);
            pFVar21 = ::FString::FString(&local_128,"Bool");
            iVar17 = (pFVar21->Data).ArrayNum;
            if (local_318.Data.ArrayNum == iVar17) {
              if (local_318.Data.ArrayNum < 2) {
                bVar12 = true;
              }
              else {
                iVar17 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)local_318.Data.AllocatorInstance.Data,
                                    (wchar_t *)(pFVar21->Data).AllocatorInstance.Data);
                bVar12 = iVar17 == 0;
              }
            }
            else {
              bVar12 = iVar17 + local_318.Data.ArrayNum == 1;
            }
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
            if (bVar12) {
              this_00 = (FManagedBitArrayBase *)
                        FManagedArrayCollection::FindAttribute<bool>(pFVar20,local_340,local_348);
              if (this_00 == (FManagedBitArrayBase *)0x0) goto LAB_14e826de7;
              FManagedBitArrayBase::GetAsBoolArray(this_00,&local_220);
              FDataflowNode::
              SetValue<TArray<bool,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,&local_220,pTVar1);
              goto LAB_14e826ddd;
            }
            pFVar21 = ::FString::FString(&local_118,"Float");
            iVar17 = (pFVar21->Data).ArrayNum;
            if (local_318.Data.ArrayNum == iVar17) {
              if (local_318.Data.ArrayNum < 2) {
                bVar12 = true;
              }
              else {
                iVar17 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)local_318.Data.AllocatorInstance.Data,
                                    (wchar_t *)(pFVar21->Data).AllocatorInstance.Data);
                bVar12 = iVar17 == 0;
              }
            }
            else {
              bVar12 = iVar17 + local_318.Data.ArrayNum == 1;
            }
            if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.Data.AllocatorInstance.Data);
            }
            if (bVar12) {
              pTVar26 = FManagedArrayCollection::FindAttribute<float>(pFVar20,local_340,local_348);
              if (pTVar26 == (TManagedArray<float> *)0x0) goto LAB_14e826de7;
              local_338.Data = (FScriptContainerElement *)0x0;
              local_330 = 0;
              uVar14 = (**(code **)(*(longlong *)pTVar26 + 0x60))(pTVar26);
              if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
              }
              if (local_330._4_4_ < (int)uVar14) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,uVar14,&local_338,(int)local_330,(int *)((longlong)&local_330 + 4));
              }
              pfVar36 = *(float **)&pTVar26->field_0x10;
              iVar17 = *(int *)&pTVar26->field_0x18;
              pfVar4 = pfVar36 + iVar17;
              while( true ) {
                if (*(int *)&pTVar26->field_0x18 != iVar17) {
                  local_res8[0] = 0;
                  `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_res8);
                }
                if (pfVar36 == pfVar4) break;
                local_2d0 = (double)*pfVar36;
                if (((local_338.Data <= (FScriptContainerElement *)&local_2d0) &&
                    ((FScriptContainerElement *)&local_2d0 <
                     local_338.Data + (longlong)local_330._4_4_ * 8)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar15 = (int)local_330;
                if ((int)local_330 == local_330._4_4_) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_338,(int *)((longlong)&local_330 + 4));
                }
                pfVar36 = pfVar36 + 1;
                local_330 = CONCAT44(local_330._4_4_,iVar15 + 1);
                *(double *)(local_338.Data + (longlong)iVar15 * 8) = local_2d0;
              }
              local_210.Reference = &this->NumericArray;
              local_210.Index = -1;
              local_210.ContainerReference = (void *)0x0;
              pFVar27 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_210);
              if (pFVar27 == (FDataflowOutput *)0x0) {
                `FDataflowNode::SetValue<FDataflowNumericArrayTypes>'::__l7::<lambda_1>::operator()
                          (local_res20);
                local_220.AllocatorInstance.Data = local_338.Data;
              }
              else {
                local_1b8 = &local_338;
                local_1c8 = pFVar27;
                local_1c0 = param_1;
                TDataflowMultiTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<__int64,TSizedDefaultAllocator<32>_>,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TArray<short,TSizedDefaultAllocator<32>_>,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TArray<signed_char,TSizedDefaultAllocator<32>_>,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                ::
                VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>_::__l2::<lambda_1>_>
                          (pFVar27->_padding_,&local_1c8);
                local_220.AllocatorInstance.Data = local_338.Data;
              }
            }
            else {
              pFVar21 = ::FString::FString(&local_108,"Double");
              iVar17 = (pFVar21->Data).ArrayNum;
              if (local_318.Data.ArrayNum == iVar17) {
                if (local_318.Data.ArrayNum < 2) {
                  bVar12 = true;
                }
                else {
                  iVar17 = FGenericPlatformStricmp::Stricmp
                                     ((wchar_t *)local_318.Data.AllocatorInstance.Data,
                                      (wchar_t *)(pFVar21->Data).AllocatorInstance.Data);
                  bVar12 = iVar17 == 0;
                }
              }
              else {
                bVar12 = iVar17 + local_318.Data.ArrayNum == 1;
              }
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              if (bVar12) {
                pTVar28 = FManagedArrayCollection::FindAttribute<double>
                                    (pFVar20,local_340,local_348);
                if (pTVar28 != (TManagedArray<double> *)0x0) {
                  FDataflowNode::SetValue<FDataflowNumericArrayTypes>
                            ((FDataflowNode *)this,param_1,
                             (TArray<double,TSizedDefaultAllocator<32>_> *)&pTVar28->field_0x10,
                             &this->NumericArray);
                }
                goto LAB_14e826de7;
              }
              pFVar21 = ::FString::FString(&local_f8,"Int32");
              iVar17 = (pFVar21->Data).ArrayNum;
              if (local_318.Data.ArrayNum == iVar17) {
                if (local_318.Data.ArrayNum < 2) {
                  bVar12 = true;
                }
                else {
                  iVar17 = FGenericPlatformStricmp::Stricmp
                                     ((wchar_t *)local_318.Data.AllocatorInstance.Data,
                                      (wchar_t *)(pFVar21->Data).AllocatorInstance.Data);
                  bVar12 = iVar17 == 0;
                }
              }
              else {
                bVar12 = iVar17 + local_318.Data.ArrayNum == 1;
              }
              if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
              if (bVar12) {
                pTVar29 = FManagedArrayCollection::FindAttribute<int>(pFVar20,local_340,local_348);
                if (pTVar29 == (TManagedArray<int> *)0x0) goto LAB_14e826de7;
                local_328.Data = (FScriptContainerElement *)0x0;
                local_320 = 0;
                uVar14 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
                if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
                }
                if (local_320._4_4_ < (int)uVar14) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,uVar14,&local_328,(int)local_320,(int *)((longlong)&local_320 + 4))
                  ;
                }
                piVar37 = *(int **)&pTVar29->field_0x10;
                iVar17 = *(int *)&pTVar29->field_0x18;
                piVar2 = piVar37 + iVar17;
                while( true ) {
                  if (*(int *)&pTVar29->field_0x18 != iVar17) {
                    local_res18[0] = 0;
                    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_res18);
                  }
                  if (piVar37 == piVar2) break;
                  local_2c8 = (double)*piVar37;
                  if (((local_328.Data <= (FScriptContainerElement *)&local_2c8) &&
                      ((FScriptContainerElement *)&local_2c8 <
                       local_328.Data + (longlong)local_320._4_4_ * 8)) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar15 = (int)local_320;
                  if ((int)local_320 == local_320._4_4_) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_328,(int *)((longlong)&local_320 + 4));
                  }
                  piVar37 = piVar37 + 1;
                  local_320 = CONCAT44(local_320._4_4_,iVar15 + 1);
                  *(double *)(local_328.Data + (longlong)iVar15 * 8) = local_2c8;
                }
                local_1a8.Reference = &this->NumericArray;
                local_1a8.Index = -1;
                local_1a8.ContainerReference = (void *)0x0;
                pFVar27 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_1a8);
                if (pFVar27 == (FDataflowOutput *)0x0) {
                  `FDataflowNode::SetValue<FDataflowNumericArrayTypes>'::__l7::<lambda_1>::
                  operator()(local_308);
                  local_220.AllocatorInstance.Data = local_328.Data;
                }
                else {
                  local_178 = &local_328;
                  local_188 = pFVar27;
                  local_180 = param_1;
                  TDataflowMultiTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<__int64,TSizedDefaultAllocator<32>_>,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TArray<short,TSizedDefaultAllocator<32>_>,TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TArray<signed_char,TSizedDefaultAllocator<32>_>,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                  ::
                  VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>_::__l2::<lambda_1>_>
                            (pFVar27->_padding_,&local_188);
                  local_220.AllocatorInstance.Data = local_328.Data;
                }
              }
              else {
                pFVar21 = ::FString::FString(&local_e8,"String");
                iVar17 = (pFVar21->Data).ArrayNum;
                if (local_318.Data.ArrayNum == iVar17) {
                  if (local_318.Data.ArrayNum < 2) {
                    bVar12 = true;
                  }
                  else {
                    iVar17 = FGenericPlatformStricmp::Stricmp
                                       ((wchar_t *)local_318.Data.AllocatorInstance.Data,
                                        (wchar_t *)(pFVar21->Data).AllocatorInstance.Data);
                    bVar12 = iVar17 == 0;
                  }
                }
                else {
                  bVar12 = iVar17 + local_318.Data.ArrayNum == 1;
                }
                if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                }
                if (bVar12) {
                  pTVar30 = FManagedArrayCollection::FindAttribute<FString>
                                      (pFVar20,local_340,local_348);
                  if (pTVar30 != (TManagedArray<FString> *)0x0) {
                    FDataflowNode::SetValue<FDataflowStringArrayTypes>
                              ((FDataflowNode *)this,param_1,
                               (TArray<FString,TSizedDefaultAllocator<32>_> *)&pTVar30->field_0x10,
                               &this->StringArray);
                  }
                  goto LAB_14e826de7;
                }
                pFVar21 = ::FString::FString(&local_d8,"Vector");
                iVar17 = (pFVar21->Data).ArrayNum;
                if (local_318.Data.ArrayNum == iVar17) {
                  if (local_318.Data.ArrayNum < 2) {
                    bVar12 = true;
                  }
                  else {
                    iVar17 = FGenericPlatformStricmp::Stricmp
                                       ((wchar_t *)local_318.Data.AllocatorInstance.Data,
                                        (wchar_t *)(pFVar21->Data).AllocatorInstance.Data);
                    bVar12 = iVar17 == 0;
                  }
                }
                else {
                  bVar12 = local_318.Data.ArrayNum + iVar17 == 1;
                }
                if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                }
                uVar13 = 0;
                if (bVar12) {
                  pTVar31 = FManagedArrayCollection::FindAttribute<UE::Math::TVector<float>_>
                                      (pFVar20,local_340,local_348);
                  if (pTVar31 == (TManagedArray<UE::Math::TVector<float>_> *)0x0)
                  goto LAB_14e826de7;
                  local_300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_300.ArrayNum = 0;
                  local_300.ArrayMax = 0;
                  uVar16 = (**(code **)(*(longlong *)pTVar31 + 0x60))(pTVar31);
                  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
                  }
                  if (local_300.ArrayMax < (int)uVar16) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x20,0x10,uVar16,&local_300.AllocatorInstance,local_300.ArrayNum,
                               &local_300.ArrayMax);
                  }
                  iVar17 = (**(code **)(*(longlong *)pTVar31 + 0x60))(pTVar31);
                  uVar39 = uVar38;
                  uVar40 = uVar38;
                  if (0 < iVar17) {
                    do {
                      uVar35 = (uint)uVar38;
                      uVar16 = uVar14;
                      if ((int)uVar35 < *(int *)&pTVar31->field_0x18) {
                        uVar16 = ~uVar35 >> 0x1f;
                      }
                      if ((uVar16 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      local_270 = *(undefined8 *)(*(longlong *)&pTVar31->field_0x10 + uVar39);
                      fVar41 = (float)local_270;
                      uVar11 = (ulonglong)local_270 >> 0x20;
                      fVar5 = *(float *)(*(longlong *)&pTVar31->field_0x10 + 8 + uVar39);
                      uVar16 = uVar13;
                      if ((int)uVar35 < local_300.ArrayNum) {
                        uVar16 = ~uVar35 >> 0x1f;
                      }
                      if ((uVar16 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      uVar38 = (ulonglong)(uVar35 + 1);
                      *(double *)(local_300.AllocatorInstance.Data + uVar40) = (double)fVar41;
                      *(double *)(local_300.AllocatorInstance.Data + uVar40 + 8) =
                           (double)(float)uVar11;
                      *(double *)(local_300.AllocatorInstance.Data + uVar40 + 0x10) = (double)fVar5;
                      *(undefined8 *)(local_300.AllocatorInstance.Data + uVar40 + 0x18) = 0;
                      iVar17 = (**(code **)(*(longlong *)pTVar31 + 0x60))(pTVar31);
                      uVar39 = uVar39 + 0xc;
                      uVar40 = uVar40 + 0x20;
                    } while ((int)(uVar35 + 1) < iVar17);
                  }
                  FDataflowNode::SetValue<FDataflowVectorArrayTypes>
                            ((FDataflowNode *)this,local_res10,&local_300,&this->VectorArray);
                  local_220.AllocatorInstance.Data = local_300.AllocatorInstance.Data;
                }
                else {
                  pFVar21 = ::FString::FString(&local_c8,"Vector3d");
                  iVar17 = (pFVar21->Data).ArrayNum;
                  if (local_318.Data.ArrayNum == iVar17) {
                    if (local_318.Data.ArrayNum < 2) {
                      bVar12 = true;
                    }
                    else {
                      iVar17 = FGenericPlatformStricmp::Stricmp
                                         ((wchar_t *)local_318.Data.AllocatorInstance.Data,
                                          (wchar_t *)(pFVar21->Data).AllocatorInstance.Data);
                      bVar12 = iVar17 == 0;
                    }
                  }
                  else {
                    bVar12 = local_318.Data.ArrayNum + iVar17 == 1;
                  }
                  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                  }
                  if (bVar12) {
                    pTVar32 = FManagedArrayCollection::FindAttribute<UE::Math::TVector<double>_>
                                        (pFVar20,local_340,local_348);
                    if (pTVar32 == (TManagedArray<UE::Math::TVector<double>_> *)0x0)
                    goto LAB_14e826de7;
                    local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_2f0.ArrayNum = 0;
                    local_2f0.ArrayMax = 0;
                    uVar14 = (**(code **)(*(longlong *)pTVar32 + 0x60))(pTVar32);
                    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
                    }
                    if (local_2f0.ArrayMax < (int)uVar14) {
                      UE::Core::Private::
                      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x20,0x10,uVar14,&local_2f0.AllocatorInstance,local_2f0.ArrayNum,
                                 &local_2f0.ArrayMax);
                    }
                    iVar17 = (**(code **)(*(longlong *)pTVar32 + 0x60))(pTVar32);
                    uVar39 = uVar38;
                    uVar40 = uVar38;
                    if (0 < iVar17) {
                      do {
                        uVar16 = (uint)uVar38;
                        uVar14 = uVar13;
                        if ((int)uVar16 < *(int *)&pTVar32->field_0x18) {
                          uVar14 = ~uVar16 >> 0x1f;
                        }
                        if ((uVar14 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar12)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        puVar3 = (undefined8 *)(*(longlong *)&pTVar32->field_0x10 + uVar39);
                        local_270 = *puVar3;
                        uStack_268 = puVar3[1];
                        local_260 = *(undefined8 *)
                                     (*(longlong *)&pTVar32->field_0x10 + 0x10 + uVar39);
                        uVar14 = uVar13;
                        if ((int)uVar16 < local_2f0.ArrayNum) {
                          uVar14 = ~uVar16 >> 0x1f;
                        }
                        if ((uVar14 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar12)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        uVar38 = (ulonglong)(uVar16 + 1);
                        *(undefined8 *)(local_2f0.AllocatorInstance.Data + uVar40) = local_270;
                        *(undefined8 *)(local_2f0.AllocatorInstance.Data + uVar40 + 8) = uStack_268;
                        *(undefined8 *)(local_2f0.AllocatorInstance.Data + uVar40 + 0x10) =
                             local_260;
                        *(undefined8 *)(local_2f0.AllocatorInstance.Data + uVar40 + 0x18) = 0;
                        iVar17 = (**(code **)(*(longlong *)pTVar32 + 0x60))(pTVar32);
                        uVar39 = uVar39 + 0x18;
                        param_1 = local_res10;
                        uVar40 = uVar40 + 0x20;
                      } while ((int)(uVar16 + 1) < iVar17);
                    }
                    FDataflowNode::SetValue<FDataflowVectorArrayTypes>
                              ((FDataflowNode *)this,param_1,&local_2f0,&this->VectorArray);
                    local_220.AllocatorInstance.Data = local_2f0.AllocatorInstance.Data;
                  }
                  else {
                    pFVar21 = ::FString::FString(&local_b8,"LinearColor");
                    iVar17 = (pFVar21->Data).ArrayNum;
                    if (local_318.Data.ArrayNum == iVar17) {
                      if (local_318.Data.ArrayNum < 2) {
                        bVar12 = true;
                      }
                      else {
                        iVar17 = FGenericPlatformStricmp::Stricmp
                                           ((wchar_t *)local_318.Data.AllocatorInstance.Data,
                                            (wchar_t *)(pFVar21->Data).AllocatorInstance.Data);
                        bVar12 = iVar17 == 0;
                      }
                    }
                    else {
                      bVar12 = local_318.Data.ArrayNum + iVar17 == 1;
                    }
                    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                    }
                    if ((!bVar12) ||
                       (pTVar33 = FManagedArrayCollection::FindAttribute<FLinearColor>
                                            (pFVar20,local_340,local_348),
                       pTVar33 == (TManagedArray<FLinearColor> *)0x0)) goto LAB_14e826de7;
                    local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_2e0.ArrayNum = 0;
                    local_2e0.ArrayMax = 0;
                    uVar14 = (**(code **)(*(longlong *)pTVar33 + 0x60))(pTVar33);
                    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
                    }
                    if (local_2e0.ArrayMax < (int)uVar14) {
                      UE::Core::Private::
                      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x20,0x10,uVar14,&local_2e0.AllocatorInstance,local_2e0.ArrayNum,
                                 &local_2e0.ArrayMax);
                    }
                    iVar17 = (**(code **)(*(longlong *)pTVar33 + 0x60))(pTVar33);
                    uVar39 = uVar38;
                    uVar40 = uVar38;
                    if (0 < iVar17) {
                      do {
                        uVar16 = (uint)uVar38;
                        uVar14 = uVar13;
                        if ((int)uVar16 < *(int *)&pTVar33->field_0x18) {
                          uVar14 = ~uVar16 >> 0x1f;
                        }
                        if ((uVar14 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar12)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pfVar4 = (float *)(uVar39 + *(longlong *)&pTVar33->field_0x10);
                        fVar5 = *pfVar4;
                        fVar41 = pfVar4[1];
                        fVar9 = pfVar4[2];
                        fVar10 = pfVar4[3];
                        uVar14 = uVar13;
                        if ((int)uVar16 < local_2e0.ArrayNum) {
                          uVar14 = ~uVar16 >> 0x1f;
                        }
                        if ((uVar14 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar12)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        uVar38 = (ulonglong)(uVar16 + 1);
                        *(double *)(local_2e0.AllocatorInstance.Data + uVar40) = (double)fVar5;
                        *(double *)(local_2e0.AllocatorInstance.Data + uVar40 + 8) = (double)fVar41;
                        *(double *)(local_2e0.AllocatorInstance.Data + uVar40 + 0x10) =
                             (double)fVar9;
                        *(double *)(local_2e0.AllocatorInstance.Data + uVar40 + 0x18) =
                             (double)fVar10;
                        iVar17 = (**(code **)(*(longlong *)pTVar33 + 0x60))(pTVar33);
                        uVar39 = uVar39 + 0x10;
                        uVar40 = uVar40 + 0x20;
                      } while ((int)(uVar16 + 1) < iVar17);
                    }
                    FDataflowNode::SetValue<FDataflowVectorArrayTypes>
                              ((FDataflowNode *)this,local_res10,&local_2e0,&this->VectorArray);
                    local_220.AllocatorInstance.Data = local_2e0.AllocatorInstance.Data;
                  }
                }
              }
            }
LAB_14e826ddd:
            if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_220.AllocatorInstance.Data);
            }
LAB_14e826de7:
            if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_318.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
LAB_14e826df5:
    if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data.AllocatorInstance.Data);
    }
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
    if (local_168.Group.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Group.Data.AllocatorInstance.Data);
    }
    if (local_168.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Attribute.Data.AllocatorInstance.Data);
    }
  }
  return;
code_r0x00014e82616c:
  iVar17 = *(int *)(*(longlong *)&pFVar20->GroupInfo + 0xc + (longlong)iVar17 * 0x14);
  if (iVar17 == -1) goto LAB_14e826df5;
  goto LAB_14e826160;
}

// FGetCollectionAttributeDataTypedDataflowNode_v2 @ 14e920300

FGetCollectionAttributeDataTypedDataflowNode_v2 * __thiscall
FGetCollectionAttributeDataTypedDataflowNode_v2::FGetCollectionAttributeDataTypedDataflowNode_v2
          (FGetCollectionAttributeDataTypedDataflowNode_v2 *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGetCollectionAttributeDataTypedDataflowNode_v2__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  ::FString::FString(&(this->AttributeKey).Attribute,"");
  ::FString::FString(&(this->AttributeKey).Group,"");
  this->GroupName = Dataflow_EStandardGroupNameEnum_Transform;
  ::FString::FString(&this->CustomGroupName,"");
  ::FString::FString(&this->AttrName,"");
  (this->BoolAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoolAttributeData).ArrayNum = 0;
  (this->BoolAttributeData).ArrayMax = 0;
  (this->NumericArray).Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NumericArray).Value.ArrayNum = 0;
  (this->NumericArray).Value.ArrayMax = 0;
  (this->VectorArray).Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorArray).Value.ArrayNum = 0;
  (this->VectorArray).Value.ArrayMax = 0;
  (this->StringArray).Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringArray).Value.ArrayNum = 0;
  (this->StringArray).Value.ArrayMax = 0;
  return this;
}

// ~FGetCollectionAttributeDataTypedDataflowNode_v2 @ 14e933840

void __thiscall
FGetCollectionAttributeDataTypedDataflowNode_v2::~FGetCollectionAttributeDataTypedDataflowNode_v2
          (FGetCollectionAttributeDataTypedDataflowNode_v2 *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->StringArray).Value.AllocatorInstance.Data,
             (this->StringArray).Value.ArrayNum);
  pFVar1 = (this->StringArray).Value.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VectorArray).Value.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NumericArray).Value.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoolAttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttrName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomGroupName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttributeKey).Group.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttributeKey).Attribute.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

