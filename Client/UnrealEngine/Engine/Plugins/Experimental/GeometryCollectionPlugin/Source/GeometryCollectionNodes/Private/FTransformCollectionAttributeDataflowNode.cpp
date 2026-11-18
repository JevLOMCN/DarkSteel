// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e862cd0

UScriptStruct * __cdecl FTransformCollectionAttributeDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode,
                         (UObject *)pUVar1,L"TransformCollectionAttributeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode.OuterSingleton;
}

// GetType @ 14e862de0

FName __thiscall
FTransformCollectionAttributeDataflowNode::GetType(FTransformCollectionAttributeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FTransformCollectionAttributeDataflowNode");
  return in_RDX;
}

// IsA @ 14e862f50

bool __thiscall
FTransformCollectionAttributeDataflowNode::IsA
          (FTransformCollectionAttributeDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FTransformCollectionAttributeDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e862fb8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e862fb8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e862fd6;
      }
    }
  }
  bVar5 = true;
LAB_14e862fd6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e863010

FStructOnScope * __thiscall
FTransformCollectionAttributeDataflowNode::NewStructOnScope
          (FTransformCollectionAttributeDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode,
                           (UObject *)pUVar2,L"TransformCollectionAttributeDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e863120

void __thiscall
FTransformCollectionAttributeDataflowNode::SerializeInternal
          (FTransformCollectionAttributeDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode,
                         (UObject *)pUVar1,L"TransformCollectionAttributeDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86319d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8631b0

FName __thiscall
FTransformCollectionAttributeDataflowNode::GetDisplayName
          (FTransformCollectionAttributeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"TransformCollectionAttribute");
  return in_RDX;
}

// GetCategory @ 14e863310

FName __thiscall
FTransformCollectionAttributeDataflowNode::GetCategory
          (FTransformCollectionAttributeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection");
  return in_RDX;
}

// GetTags @ 14e863540

FString * __thiscall
FTransformCollectionAttributeDataflowNode::GetTags
          (FTransformCollectionAttributeDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e863570

UScriptStruct * __thiscall
FTransformCollectionAttributeDataflowNode::TypedScriptStruct
          (FTransformCollectionAttributeDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode,
                         (UObject *)pUVar1,L"TransformCollectionAttributeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8636a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTransformCollectionAttributeDataflowNode::Evaluate
          (FTransformCollectionAttributeDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  FManagedArrayBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  FDataflowInput *this_00;
  TTransform<double> *this_01;
  FManagedArrayCollection *pFVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  TMatrix<double> *pTVar10;
  TMatrix<double> *pTVar11;
  FName *pFVar12;
  wchar_t *pwVar13;
  FValueType *pFVar14;
  FValueType *pFVar15;
  uint uVar16;
  FValueType *pFVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_4b8 [32];
  FValueType *local_498;
  longlong local_490;
  FName local_488;
  FName local_480;
  float local_478;
  float fStack_474;
  float fStack_470;
  undefined4 uStack_46c;
  FContext *local_468;
  FConnectionReference local_460;
  FName local_448;
  FName local_440;
  FName local_438 [2];
  FBoundsFacade local_428;
  TMatrix<double> local_2c8;
  FManagedArrayCollection local_248;
  TMatrix<double> local_198;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  pFVar1 = &this->Collection;
  local_468 = param_1;
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar7 == pFVar1) {
    local_460.Reference = &this->TransformIn;
    pFVar17 = (FValueType *)0x0;
    local_460.ContainerReference = (void *)0x0;
    local_460.Index = -1;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_460);
    this_01 = FDataflowInput::GetValue<UE::Math::TTransform<double>_>
                        (this_00,param_1,local_460.Reference);
    pFVar8 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
    FManagedArrayCollection::FManagedArrayCollection(&local_248,pFVar8);
    if ((this->AttributeName).Data.ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(this->AttributeName).Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_488,pwVar13);
    if ((this->GroupName).Data.ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(this->GroupName).Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_480,pwVar13);
    local_448 = local_488;
    local_440 = local_480;
    pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                     *)&local_248.Map,(TTuple<FName,FName> *)&local_448);
    pFVar14 = (FValueType *)&pTVar9->field_0x10;
    if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pFVar14 = pFVar17;
    }
    pFVar15 = pFVar17;
    if ((pFVar14 != (FValueType *)0x0) && (pFVar14->ArrayType == FVectorType)) {
      FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar14);
      pFVar15 = (FValueType *)pFVar14->ManagedArray;
      if ((pFVar15 == (FValueType *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x319,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(bool *)&(pFVar15->GroupIndexDependency).Number = true;
    }
    if (pFVar15 == (FValueType *)0x0) {
      if (2 < (byte)LogChaosDataflow._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
      }
    }
    else {
      pTVar10 = UE::Math::TTransform<double>::ToMatrixWithScale(&this->LocalTransform,&local_198);
      pTVar11 = UE::Math::TTransform<double>::ToMatrixWithScale(this_01,&local_118);
      VectorMatrixMultiply(&local_2c8,pTVar10,pTVar11);
      iVar5 = (**(code **)(*(longlong *)pFVar15 + 0x60))(pFVar15);
      if (0 < iVar5) {
        lVar18 = 0;
        pFVar14 = pFVar17;
        do {
          iVar5 = *(int *)&(pFVar15->SharedManagedArray).SharedReferenceCount.ReferenceController;
          uVar16 = (uint)pFVar17;
          uVar6 = 0;
          if ((int)uVar16 < iVar5) {
            uVar6 = ~uVar16 >> 0x1f;
          }
          if (uVar6 == 0) {
            local_498 = (FValueType *)(longlong)(int)uVar16;
            local_490 = (longlong)iVar5;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pFVar2 = (pFVar15->SharedManagedArray).Object;
          iVar5 = *(int *)&(pFVar15->SharedManagedArray).SharedReferenceCount.ReferenceController;
          local_478 = *(float *)((longlong)&pFVar2->_padding_ + lVar18);
          fStack_474 = *(float *)((longlong)&pFVar2->_padding_ + lVar18 + 4);
          fStack_470 = *(float *)(&pFVar2->bIsDirty + lVar18);
          uVar6 = 0;
          if ((int)uVar16 < iVar5) {
            uVar6 = ~uVar16 >> 0x1f;
          }
          uStack_46c = 0x3f800000;
          fVar25 = fStack_474 * (float)local_2c8.M[1][0];
          fVar26 = fStack_474 * (float)local_2c8.M[1][1];
          fVar27 = fStack_474 * (float)local_2c8.M[1][2];
          fVar19 = local_478 * (float)local_2c8.M[0][0];
          fVar20 = local_478 * (float)local_2c8.M[0][1];
          fVar21 = local_478 * (float)local_2c8.M[0][2];
          fVar22 = fStack_470 * (float)local_2c8.M[2][0];
          fVar23 = fStack_470 * (float)local_2c8.M[2][1];
          fVar24 = fStack_470 * (float)local_2c8.M[2][2];
          if ((uVar6 == 0) &&
             (local_498 = pFVar14, local_490 = (longlong)iVar5,
             bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (pFVar15->SharedManagedArray).Object;
          pFVar17 = (FValueType *)(ulonglong)(uVar16 + 1);
          pFVar14 = (FValueType *)&pFVar14->field_0x1;
          *(float *)((longlong)&pFVar2->_padding_ + lVar18) =
               fVar25 + fVar19 + fVar22 + (float)local_2c8.M[3][0] * 1.0;
          *(float *)((longlong)&pFVar2->_padding_ + lVar18 + 4) =
               fVar26 + fVar20 + fVar23 + (float)local_2c8.M[3][1] * 1.0;
          *(float *)(&pFVar2->bIsDirty + lVar18) =
               fVar27 + fVar21 + fVar24 + (float)local_2c8.M[3][2] * 1.0;
          lVar18 = lVar18 + 0xc;
          iVar5 = (**(code **)(*(longlong *)pFVar15 + 0x60))(pFVar15);
          param_1 = local_468;
        } while ((int)(uVar16 + 1) < iVar5);
      }
      pFVar12 = ::FName::FName(local_438,"Vertex");
      if ((local_488 == *pFVar12) && (local_480 == FGeometryCollection::VerticesGroup)) {
        GeometryCollection::Facades::FBoundsFacade::FBoundsFacade(&local_428,&local_248);
        bVar4 = GeometryCollection::Facades::FBoundsFacade::IsValid(&local_428);
        if (bVar4) {
          GeometryCollection::Facades::FBoundsFacade::UpdateBoundingBox(&local_428);
        }
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_248,pFVar1);
    FManagedArrayCollection::~FManagedArrayCollection(&local_248);
  }
  return;
}

// FTransformCollectionAttributeDataflowNode @ 14e92ee00

FTransformCollectionAttributeDataflowNode * __thiscall
FTransformCollectionAttributeDataflowNode::FTransformCollectionAttributeDataflowNode
          (FTransformCollectionAttributeDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FTransformCollectionAttributeDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  *&(this->TransformIn).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->TransformIn).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->TransformIn).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->TransformIn).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->TransformIn).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->TransformIn).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->LocalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LocalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LocalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LocalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LocalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LocalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  ::FString::FString(&this->GroupName,"Vertices");
  ::FString::FString(&this->AttributeName,"Vertex");
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.Reference = &this->TransformIn;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_58);
  }
  return this;
}

// FTransformCollectionAttributeDataflowNode @ 14e92efb0

FTransformCollectionAttributeDataflowNode * __thiscall
FTransformCollectionAttributeDataflowNode::FTransformCollectionAttributeDataflowNode
          (FTransformCollectionAttributeDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FTransformCollectionAttributeDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  *&(this->TransformIn).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->TransformIn).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->TransformIn).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->TransformIn).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->TransformIn).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->TransformIn).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->LocalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LocalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LocalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LocalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LocalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LocalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  ::FString::FString(&this->GroupName,"Vertices");
  ::FString::FString(&this->AttributeName,"Vertex");
  return this;
}

