// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 14

// StaticStruct @ 14e843790

UScriptStruct * __cdecl FGeometryCollectionTransferVertexAttributeNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode,
                           (UObject *)pUVar1,L"GeometryCollectionTransferVertexAttributeNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode.
         OuterSingleton;
}

// GetType @ 14e843d90

FName __thiscall
FGeometryCollectionTransferVertexAttributeNode::GetType
          (FGeometryCollectionTransferVertexAttributeNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGeometryCollectionTransferVertexAttributeNode");
  return in_RDX;
}

// IsA @ 14e843e90

bool __thiscall
FGeometryCollectionTransferVertexAttributeNode::IsA
          (FGeometryCollectionTransferVertexAttributeNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGeometryCollectionTransferVertexAttributeNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e843ef8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e843ef8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e843f16;
      }
    }
  }
  bVar5 = true;
LAB_14e843f16:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e844880

FStructOnScope * __thiscall
FGeometryCollectionTransferVertexAttributeNode::NewStructOnScope
          (FGeometryCollectionTransferVertexAttributeNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode,
                           (UObject *)pUVar2,L"GeometryCollectionTransferVertexAttributeNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e844a00

void __thiscall
FGeometryCollectionTransferVertexAttributeNode::SerializeInternal
          (FGeometryCollectionTransferVertexAttributeNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode,
                           (UObject *)pUVar1,L"GeometryCollectionTransferVertexAttributeNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e844a7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e844b20

FName __thiscall
FGeometryCollectionTransferVertexAttributeNode::GetDisplayName
          (FGeometryCollectionTransferVertexAttributeNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"TransferVertexAttribute");
  return in_RDX;
}

// GetCategory @ 14e844ce0

FName __thiscall
FGeometryCollectionTransferVertexAttributeNode::GetCategory
          (FGeometryCollectionTransferVertexAttributeNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection");
  return in_RDX;
}

// GetTags @ 14e844d70

FString * __thiscall
FGeometryCollectionTransferVertexAttributeNode::GetTags
          (FGeometryCollectionTransferVertexAttributeNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "Transfer a named vertex attribute from the Source Collection to the Target Collection"
                    );
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e844ed0

UScriptStruct * __thiscall
FGeometryCollectionTransferVertexAttributeNode::TypedScriptStruct
          (FGeometryCollectionTransferVertexAttributeNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode,
                           (UObject *)pUVar1,L"GeometryCollectionTransferVertexAttributeNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode.
         OuterSingleton;
}

// GetRenderParametersImpl @ 14e8450d0

/* WARNING: Removing unreachable block (ram,0x00014e845308) */
/* WARNING: Removing unreachable block (ram,0x00014e845316) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FGeometryCollectionTransferVertexAttributeNode::GetRenderParametersImpl
          (FGeometryCollectionTransferVertexAttributeNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  FString *pFVar5;
  TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FName local_88;
  FName FStack_80;
  FString local_78;
  FString local_68;
  FName local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FName local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar4 = ::FName::FName(local_res18,"3DView");
  ::FName::FName(&local_88,"Collection");
  ::FName::FName(&FStack_80,"AttributeKey");
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&local_98,2,&local_8c);
  *(FName *)local_98.Data = local_88;
  *(FName *)(local_98.Data + 8) = FStack_80;
  ::FName::FName(&local_res10,"FGeometryCollection");
  pFVar5 = ::FString::FString(&local_78,"SurfaceWeightsRender");
  ::FString::FString(&local_68,pFVar5);
  _Src.Data = local_98.Data;
  local_58 = local_res10;
  lVar8 = (longlong)local_90;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = CONCAT44(local_48._4_4_,local_90);
  if (local_90 == 0) {
    local_48 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_90,0,&local_50,local_90,(int *)((longlong)&local_48 + 4));
    memcpy(local_50.Data,_Src.Data,lVar8 << 3);
  }
  local_40 = *pFVar4;
  pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar7 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar6;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x30;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_68.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_68.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_68.Data.ArrayMax;
  *(FName *)(pFVar7 + 0x10) = local_58;
  *(undefined8 *)(pFVar7 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar7 + 0x18) = local_50.Data;
  *(undefined4 *)(pFVar7 + 0x20) = (undefined4)local_48;
  *(undefined4 *)(pFVar7 + 0x24) = local_48._4_4_;
  *(FName *)(pFVar7 + 0x28) = local_40;
  local_48 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((FName *)local_98.Data != (FName *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate @ 14e845a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGeometryCollectionTransferVertexAttributeNode::Evaluate
          (FGeometryCollectionTransferVertexAttributeNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FCollectionAttributeKey *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  FScriptContainerElement *pFVar8;
  FName FVar9;
  FProperty *pFVar10;
  code *pcVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  FDataflowInput *this_00;
  FCollectionAttributeKey *pFVar19;
  undefined1 *puVar20;
  FManagedArrayCollection *pFVar21;
  FString *pFVar22;
  FString *pFVar23;
  FName *pFVar24;
  TManagedArray<float> *pTVar25;
  TManagedArrayBase<float> *pTVar26;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar27;
  TManagedArrayBase<FLinearColor> *pTVar28;
  FDataflowOutput *this_01;
  FTimestamp FVar29;
  FGuid *pFVar30;
  ulong64 uVar31;
  FContextCacheElementUStruct *pFVar32;
  FContextCacheElementUStruct *pFVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  FContextCacheElementUStruct *pFVar38;
  FContextCacheElementUStruct *pFVar39;
  undefined1 auStackY_768 [32];
  uint local_728;
  longlong local_720;
  undefined1 local_718 [4];
  uint local_714;
  TManagedArray<float> *local_710;
  FContext *local_708;
  FContextCacheElementUStruct *local_700;
  TManagedArrayBase<float> *local_6f8;
  TManagedArrayBase<FLinearColor> *local_6f0;
  FCollectionAttributeKey local_6e8;
  float local_6c8 [2];
  FTransferProperties local_6c0;
  TArray<UE::Private::FTransferData,TSizedDefaultAllocator<32>_> local_6a0;
  FGeometryCollectionTransferVertexAttributeNode *local_690;
  longlong local_688;
  FString local_680;
  FName local_670;
  FName local_668;
  FConnectionReference local_660;
  FConnectionReference local_648;
  FName local_630;
  FName local_628;
  FName local_620;
  FLinearColor_u_0 local_618;
  FGuid local_608;
  FName local_5f0;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FGuid local_568;
  FTransferFacade local_558;
  FTransferFacade local_348;
  FManagedArrayCollection local_138;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_768;
  pFVar33 = (FContextCacheElementUStruct *)0x0;
  pFVar1 = &this->AttributeKey;
  local_660.Index = -1;
  local_660.ContainerReference = (void *)0x0;
  local_708 = param_1;
  local_690 = this;
  local_660.Reference = pFVar1;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_660);
  pFVar19 = FDataflowInput::GetValue<FCollectionAttributeKey>(this_00,param_1,pFVar1);
  ::FString::FString(&local_6e8.Attribute,&pFVar19->Attribute);
  ::FString::FString(&local_6e8.Group,&pFVar19->Group);
  puVar20 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar20 == &this->Collection) {
    pFVar21 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->Collection);
    FManagedArrayCollection::FManagedArrayCollection(&local_138,pFVar21);
    pFVar21 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->FromCollection);
    UE::Private::FTransferFacade::FTransferFacade(&local_558,&local_138);
    UE::Private::FTransferFacade::FTransferFacade(&local_348,pFVar21);
    local_6c0.BoundingVolumeType = this->BoundingVolumeType;
    local_6c0.FalloffThreshold = this->FalloffThreshold;
    local_6c0.TransformNameSuffix.Data.ArrayNum = (this->TransformNameSuffix).Data.ArrayNum;
    lVar37 = (longlong)local_6c0.TransformNameSuffix.Data.ArrayNum;
    local_6c0.EdgeMultiplier = this->EdgeMultiplier;
    pFVar8 = (this->TransformNameSuffix).Data.AllocatorInstance.Data;
    local_6c0.SourceScale = this->SourceScale;
    local_6c0.Falloff = this->Falloff;
    local_6c0.BoundMultiplier = this->BoundMultiplier;
    local_6c0.TransformNameSuffix.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_6c0.TransformNameSuffix.Data.ArrayNum == 0) {
      local_6c0.TransformNameSuffix.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_6c0.TransformNameSuffix.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_6c0.TransformNameSuffix,
                 local_6c0.TransformNameSuffix.Data.ArrayNum,
                 &local_6c0.TransformNameSuffix.Data.ArrayMax);
      memcpy(local_6c0.TransformNameSuffix.Data.AllocatorInstance.Data,pFVar8,lVar37 * 2);
    }
    if (((((((this->TransferMethod != None) &&
            (local_558.BoneMap.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
           (local_558.Vertex.ConstAttributeArray != (TManagedArray<UE::Math::TVector<float>_> *)0x0)
           ) && ((local_558.Indices.ConstAttributeArray !=
                  (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0 &&
                 (local_558.Transform.ConstAttributeArray !=
                  (TManagedArray<UE::Math::TTransform<float>_> *)0x0)))) &&
         (((local_558.Parent.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
           ((local_558.VertexStart.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
            (local_558.VertexCount.ConstAttributeArray != (TManagedArray<int> *)0x0)))) &&
          (local_558.FaceStart.ConstAttributeArray != (TManagedArray<int> *)0x0)))) &&
        ((((local_558.FaceCount.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
           (local_348.BoneMap.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
          (local_348.Vertex.ConstAttributeArray != (TManagedArray<UE::Math::TVector<float>_> *)0x0))
         && (((local_348.Indices.ConstAttributeArray !=
               (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0 &&
              (local_348.Transform.ConstAttributeArray !=
               (TManagedArray<UE::Math::TTransform<float>_> *)0x0)) &&
             ((local_348.Parent.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
              ((local_348.VertexStart.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
               (local_348.VertexCount.ConstAttributeArray != (TManagedArray<int> *)0x0)))))))))) &&
       ((local_348.FaceStart.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
        (local_348.FaceCount.ConstAttributeArray != (TManagedArray<int> *)0x0)))) {
      UE::Private::ComputeTransferData
                (&local_6a0,pFVar21,&local_138,&local_6c0,&this->TransferMethod);
      pFVar22 = ::FString::FString(&local_5e8,&local_6e8.Group);
      pFVar23 = ::FString::FString(&local_5d8,&local_6e8.Attribute);
      iVar16 = (pFVar22->Data).ArrayNum;
      iVar34 = iVar16 + -1;
      if (iVar16 == 0) {
        iVar34 = 0;
      }
      pFVar24 = ::FName::FName(&local_630,iVar34,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data,
                               FNAME_Add);
      FVar9 = *pFVar24;
      iVar16 = (pFVar23->Data).ArrayNum;
      iVar34 = iVar16 + -1;
      if (iVar16 == 0) {
        iVar34 = 0;
      }
      pFVar24 = ::FName::FName(&local_628,iVar34,(wchar_t *)(pFVar23->Data).AllocatorInstance.Data,
                               FNAME_Add);
      pTVar25 = FManagedArrayCollection::FindAttributeTyped<float>
                          (local_348.ConstCollection,*pFVar24,FVar9);
      pFVar8 = (pFVar23->Data).AllocatorInstance.Data;
      local_710 = pTVar25;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      pFVar8 = (pFVar22->Data).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      uVar18 = 0;
      uVar15 = 0;
      if (pTVar25 == (TManagedArray<float> *)0x0) {
        pFVar22 = ::FString::FString(&local_5a8,&local_6e8.Group);
        pFVar23 = ::FString::FString(&local_598,&local_6e8.Attribute);
        iVar16 = (pFVar22->Data).ArrayNum;
        uVar17 = iVar16 - 1;
        if (iVar16 == 0) {
          uVar17 = uVar18;
        }
        pFVar24 = ::FName::FName(&local_620,uVar17,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data
                                 ,FNAME_Add);
        local_668 = *pFVar24;
        iVar16 = (pFVar23->Data).ArrayNum;
        uVar17 = iVar16 - 1;
        if (iVar16 == 0) {
          uVar17 = uVar18;
        }
        pFVar24 = ::FName::FName(&local_5f0,uVar17,(wchar_t *)(pFVar23->Data).AllocatorInstance.Data
                                 ,FNAME_Add);
        local_670 = *pFVar24;
        pTVar27 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                          *)&(local_348.ConstCollection)->Map,(TTuple<FName,FName> *)&local_670);
        pFVar32 = (FContextCacheElementUStruct *)&pTVar27->field_0x10;
        if (pTVar27 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
          pFVar32 = pFVar33;
        }
        if ((pFVar32 == (FContextCacheElementUStruct *)0x0) || ((char)pFVar32->_padding_ != '\x04'))
        {
          local_720 = 0;
        }
        else {
          local_720 = pFVar32->_padding_;
          if ((local_720 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypedManagedArray != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                  ,0x306,L""), bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        pFVar8 = (pFVar23->Data).AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        pFVar8 = (pFVar22->Data).AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        if (local_720 == 0) {
          ::FString::FString(&local_680,L"Source attribute is not found");
          param_1 = local_708;
          UE::Dataflow::FContext::Error(local_708,&local_680,(FDataflowNode *)this,param_2);
          if (local_680.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_680.Data.AllocatorInstance.Data);
          }
          if (2 < (byte)LogChaosDataflow._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
          }
        }
        else {
          pFVar22 = ::FString::FString(&local_588,&local_6e8.Group);
          pFVar23 = ::FString::FString(&local_578,&local_6e8.Attribute);
          pTVar28 = (TManagedArrayBase<FLinearColor> *)
                    UE::Private::FTransferFacade::GetAttributeArray<FLinearColor>
                              (&local_558,pFVar23,pFVar22);
          local_618._0_8_ = 0;
          local_618._8_8_ = 0;
          local_6f0 = pTVar28;
          TManagedArrayBase<FLinearColor>::Fill(pTVar28,(FLinearColor *)&local_618._s_0);
          local_728 = 0;
          iVar16 = (**(code **)(pTVar28->_padding_ + 0x60))(pTVar28);
          param_1 = local_708;
          if (0 < iVar16) {
            local_710 = (TManagedArray<float> *)0x0;
            pFVar32 = pFVar33;
            pFVar38 = pFVar33;
            pFVar39 = pFVar33;
            do {
              uVar35 = (uint)pFVar32;
              local_714 = ~uVar35 >> 0x1f;
              uVar17 = uVar18;
              if ((int)uVar35 < local_6a0.ArrayNum) {
                uVar17 = local_714;
              }
              if ((uVar17 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              FVar13.Data = local_6a0.AllocatorInstance.Data;
              iVar16 = *(int *)((longlong)&pFVar38->_padding_ + local_6a0.AllocatorInstance.Data);
              if ((iVar16 != 0) && (0 < iVar16)) {
                local_6f8 = (TManagedArrayBase<float> *)0x0;
                pFVar32 = pFVar33;
                do {
                  pTVar26 = local_6f8;
                  uVar36 = (uint)pFVar32;
                  uVar17 = uVar15;
                  if ((int)uVar36 < iVar16) {
                    uVar17 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar17 = *(uint *)((longlong)&pTVar26->_padding_ +
                                    *(longlong *)(FVar13.Data + (longlong)&pFVar38->_padding_));
                  lVar37 = (longlong)(int)uVar17;
                  uVar35 = uVar15;
                  if ((int)uVar17 < *(int *)(local_720 + 0x18)) {
                    uVar35 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar35 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  local_688 = *(longlong *)(local_720 + 0x10);
                  uVar17 = uVar15;
                  if ((int)uVar36 < *(int *)((longlong)&pFVar38->_padding_ + FVar13.Data)) {
                    uVar17 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pTVar28 = local_6f0;
                  fVar2 = *(float *)((longlong)&pFVar38->_padding_ + FVar13.Data);
                  fVar3 = *(float *)((longlong)&local_6f8->_padding_ +
                                    *(longlong *)((longlong)&pFVar38->_padding_ + FVar13.Data));
                  fVar4 = *(float *)(local_688 + lVar37 * 0x10);
                  fVar5 = *(float *)(local_688 + 4 + lVar37 * 0x10);
                  fVar6 = *(float *)(local_688 + 8 + lVar37 * 0x10);
                  fVar7 = *(float *)(local_688 + 0xc + lVar37 * 0x10);
                  uVar17 = uVar15;
                  if ((int)local_728 < (local_6f0->Array).ArrayNum) {
                    uVar17 = local_714;
                  }
                  if ((uVar17 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar8 = (pTVar28->Array).AllocatorInstance.Data;
                  pFVar32 = (FContextCacheElementUStruct *)(ulonglong)(uVar36 + 1);
                  local_6f8 = (TManagedArrayBase<float> *)((longlong)&local_6f8->_padding_ + 4);
                  *(float *)((longlong)&pFVar39->_padding_ + (longlong)pFVar8) =
                       fVar3 * fVar4 * fVar2 +
                       *(float *)((longlong)&pFVar39->_padding_ + (longlong)pFVar8);
                  *(float *)((longlong)&pFVar39->_padding_ + (longlong)(pFVar8 + 4)) =
                       fVar3 * fVar5 * fVar2 +
                       *(float *)((longlong)&pFVar39->_padding_ + (longlong)(pFVar8 + 4));
                  *(float *)((longlong)&pFVar39->_padding_ + (longlong)pFVar8) =
                       fVar3 * fVar6 * fVar2 +
                       *(float *)((longlong)&pFVar39->_padding_ + (longlong)pFVar8);
                  *(float *)((longlong)&pFVar39->_padding_ + (longlong)(pFVar8 + 4)) =
                       fVar3 * fVar7 * fVar2 +
                       *(float *)((longlong)&pFVar39->_padding_ + (longlong)(pFVar8 + 4));
                  iVar16 = *(int *)((longlong)&pFVar38->_padding_ + FVar13.Data);
                  pTVar28 = local_6f0;
                  uVar35 = local_728;
                } while ((int)(uVar36 + 1) < iVar16);
              }
              local_728 = uVar35 + 1;
              pFVar32 = (FContextCacheElementUStruct *)(ulonglong)local_728;
              local_710 = (TManagedArray<float> *)&local_710->field_0x1;
              pFVar38 = (FContextCacheElementUStruct *)&pFVar38->_padding_;
              pFVar39 = (FContextCacheElementUStruct *)&pFVar39->_padding_;
              iVar16 = (**(code **)(pTVar28->_padding_ + 0x60))(pTVar28);
              this = local_690;
              param_1 = local_708;
            } while ((int)local_728 < iVar16);
          }
        }
      }
      else {
        pFVar22 = ::FString::FString(&local_5c8,&local_6e8.Group);
        pFVar23 = ::FString::FString(&local_5b8,&local_6e8.Attribute);
        pTVar26 = (TManagedArrayBase<float> *)
                  UE::Private::FTransferFacade::GetAttributeArray<float>(&local_558,pFVar23,pFVar22)
        ;
        local_6c8[0] = 0.0;
        local_6f8 = pTVar26;
        TManagedArrayBase<float>::Fill(pTVar26,local_6c8);
        local_728 = 0;
        iVar16 = (**(code **)(pTVar26->_padding_ + 0x60))(pTVar26);
        param_1 = local_708;
        if (0 < iVar16) {
          local_720 = 0;
          pFVar32 = pFVar33;
          pFVar38 = pFVar33;
          do {
            uVar35 = (uint)pFVar32;
            local_714 = ~uVar35 >> 0x1f;
            uVar17 = uVar15;
            if ((int)uVar35 < local_6a0.ArrayNum) {
              uVar17 = local_714;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            FVar13.Data = local_6a0.AllocatorInstance.Data;
            iVar16 = *(int *)(local_6a0.AllocatorInstance.Data + 8 + (longlong)pFVar38);
            if ((iVar16 != 0) && (pFVar32 = pFVar33, pFVar39 = pFVar33, 0 < iVar16)) {
              do {
                uVar36 = (uint)pFVar32;
                uVar17 = uVar15;
                if ((int)uVar36 < iVar16) {
                  uVar17 = ~uVar36 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar17 = *(uint *)((longlong)&pFVar39->_padding_ +
                                  *(longlong *)(FVar13.Data + (longlong)pFVar38));
                uVar35 = uVar15;
                if ((int)uVar17 < *(int *)&local_710->field_0x18) {
                  uVar35 = ~uVar17 >> 0x1f;
                }
                if ((uVar35 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                local_6f0 = *(TManagedArrayBase<FLinearColor> **)&local_710->field_0x10;
                uVar35 = uVar15;
                if ((int)uVar36 < *(int *)(FVar13.Data + 0x18 + (longlong)pFVar38)) {
                  uVar35 = ~uVar36 >> 0x1f;
                }
                if ((uVar35 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pTVar26 = local_6f8;
                fVar2 = *(float *)((longlong)&pFVar39->_padding_ +
                                  *(longlong *)(FVar13.Data + 0x10 + (longlong)pFVar38));
                fVar3 = *(float *)((longlong)&local_6f0->_padding_ + (longlong)(int)uVar17 * 4);
                fVar4 = *(float *)(FVar13.Data + 0x20 + (longlong)pFVar38);
                uVar17 = uVar18;
                if ((int)local_728 < (local_6f8->Array).ArrayNum) {
                  uVar17 = local_714;
                }
                if ((uVar17 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pFVar8 = (pTVar26->Array).AllocatorInstance.Data;
                *(float *)(pFVar8 + local_720 * 4) =
                     fVar2 * fVar3 * fVar4 + *(float *)(pFVar8 + local_720 * 4);
                iVar16 = *(int *)(FVar13.Data + 8 + (longlong)pFVar38);
                pFVar32 = (FContextCacheElementUStruct *)(ulonglong)(uVar36 + 1);
                pFVar39 = (FContextCacheElementUStruct *)((longlong)&pFVar39->_padding_ + 4);
                uVar35 = local_728;
              } while ((int)(uVar36 + 1) < iVar16);
            }
            local_720 = local_720 + 1;
            local_728 = uVar35 + 1;
            pFVar32 = (FContextCacheElementUStruct *)(ulonglong)local_728;
            pFVar38 = (FContextCacheElementUStruct *)&pFVar38->_padding_;
            iVar16 = (**(code **)(pTVar26->_padding_ + 0x60))(pTVar26);
            this = local_690;
            param_1 = local_708;
          } while ((int)local_728 < iVar16);
        }
      }
      DestructItems<UE::Private::FTransferData,int>
                ((FTransferData *)local_6a0.AllocatorInstance.Data,local_6a0.ArrayNum);
      if ((FTransferData *)local_6a0.AllocatorInstance.Data != (FTransferData *)0x0) {
        FMemory::Free(local_6a0.AllocatorInstance.Data);
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_138,&this->Collection);
    if (local_6c0.TransformNameSuffix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_6c0.TransformNameSuffix.Data.AllocatorInstance.Data);
    }
    FManagedArrayCollection::~FManagedArrayCollection(&local_138);
  }
  else {
    puVar20 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FCollectionAttributeKey *)puVar20 == pFVar1) {
      local_648.Index = -1;
      local_648.ContainerReference = (void *)0x0;
      local_648.Reference = pFVar1;
      this_01 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_648);
      if (this_01 == (FDataflowOutput *)0x0) {
        `FDataflowNode::SetValue<FCollectionAttributeKey,FCollectionAttributeKey>'::__l7::<lambda_1>
        ::operator()(local_718);
      }
      else if (this_01->_padding_ != 0) {
        FVar29 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
        uVar18 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
        pFVar30 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_568);
        pFVar10 = (FProperty *)this_01->_padding_;
        uVar31 = CityHash64((char *)&this_01->_padding_,0x10);
        local_700 = (FContextCacheElementUStruct *)0x0;
        pFVar32 = ::operator_new(0x58);
        if (pFVar32 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
          local_608.A = pFVar30->A;
          local_608.B = pFVar30->B;
          local_608.C = pFVar30->C;
          local_608.D = pFVar30->D;
          pFVar33 = UE::Dataflow::FContextCacheElementUStruct::
                    FContextCacheElementUStruct<FCollectionAttributeKey>
                              (pFVar32,&local_608,pFVar10,&local_6e8,uVar18,
                               (FTimestamp)*FVar29.Value);
        }
        pFVar32 = local_700;
        if (local_700 != (FContextCacheElementUStruct *)0x0) {
          plVar12 = &local_700->_padding_;
          local_700 = pFVar33;
          (**(code **)*plVar12)(pFVar32,1);
          pFVar33 = local_700;
        }
        local_700 = pFVar33;
        if (local_700 == (FContextCacheElementUStruct *)0x0) {
          UE::Dataflow::FContext::SetNullData
                    (param_1,(uint)uVar31,pFVar10,pFVar30,uVar18,(FTimestamp *)FVar29.Value);
        }
        else {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar31 & 0xffffffff,&local_700);
        }
        if (local_700 != (FContextCacheElementUStruct *)0x0) {
          (**(code **)local_700->_padding_)(local_700,1);
        }
      }
    }
  }
  if (local_6e8.Group.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.Group.Data.AllocatorInstance.Data);
  }
  if (local_6e8.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.Attribute.Data.AllocatorInstance.Data);
  }
  return;
}

// FGeometryCollectionTransferVertexAttributeNode @ 14e91ee30

FGeometryCollectionTransferVertexAttributeNode * __thiscall
FGeometryCollectionTransferVertexAttributeNode::FGeometryCollectionTransferVertexAttributeNode
          (FGeometryCollectionTransferVertexAttributeNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FCollectionAttributeKey *this_01;
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString *pFVar3;
  FDataflowOutput *pFVar4;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FGeometryCollectionTransferVertexAttributeNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  FManagedArrayCollection::FManagedArrayCollection(&this->FromCollection);
  this_01 = &this->AttributeKey;
  pFVar2 = ::FString::FString((FString *)&local_68,"Vertices");
  pFVar3 = ::FString::FString((FString *)&local_48,"");
  ::FString::FString(&this_01->Attribute,pFVar3);
  ::FString::FString(&(this->AttributeKey).Group,pFVar2);
  pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->TransferMethod = Global;
  this->BoundingVolumeType = Triangle;
  this->SourceScale = Asset_Bound;
  this->Falloff = None;
  this->FalloffThreshold = 0.01;
  this->EdgeMultiplier = 0.5;
  this->BoundMultiplier = 0.01;
  ::FString::FString(&this->TransformNameSuffix,"_Tet");
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->FromCollection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = this_01;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  if (local_48.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_48);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_01;
  local_48.Reference = this_01;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  if (local_48.Reference != (FCollectionAttributeKey *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_48);
  }
  return this;
}

// FGeometryCollectionTransferVertexAttributeNode @ 14e91f040

FGeometryCollectionTransferVertexAttributeNode * __thiscall
FGeometryCollectionTransferVertexAttributeNode::FGeometryCollectionTransferVertexAttributeNode
          (FGeometryCollectionTransferVertexAttributeNode *this)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGeometryCollectionTransferVertexAttributeNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  FManagedArrayCollection::FManagedArrayCollection(&this->FromCollection);
  pFVar2 = ::FString::FString(&local_28,"Vertices");
  pFVar3 = ::FString::FString(&local_18,"");
  ::FString::FString(&(this->AttributeKey).Attribute,pFVar3);
  ::FString::FString(&(this->AttributeKey).Group,pFVar2);
  pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->TransferMethod = Global;
  this->BoundingVolumeType = Triangle;
  this->SourceScale = Asset_Bound;
  this->Falloff = None;
  this->FalloffThreshold = 0.01;
  this->EdgeMultiplier = 0.5;
  this->BoundMultiplier = 0.01;
  ::FString::FString(&this->TransformNameSuffix,"_Tet");
  return this;
}

// ~FGeometryCollectionTransferVertexAttributeNode @ 14e933600

void __thiscall
FGeometryCollectionTransferVertexAttributeNode::~FGeometryCollectionTransferVertexAttributeNode
          (FGeometryCollectionTransferVertexAttributeNode *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TransformNameSuffix).Data.AllocatorInstance.Data;
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
  FManagedArrayCollection::~FManagedArrayCollection(&this->FromCollection);
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

