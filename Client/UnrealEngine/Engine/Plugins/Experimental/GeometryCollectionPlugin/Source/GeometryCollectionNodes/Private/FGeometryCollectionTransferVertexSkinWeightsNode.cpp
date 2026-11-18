// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8494f0

UScriptStruct * __cdecl FGeometryCollectionTransferVertexSkinWeightsNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode,
                         (UObject *)pUVar1,L"GeometryCollectionTransferVertexSkinWeightsNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode.
         OuterSingleton;
}

// GetType @ 14e8498d0

FName __thiscall
FGeometryCollectionTransferVertexSkinWeightsNode::GetType
          (FGeometryCollectionTransferVertexSkinWeightsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGeometryCollectionTransferVertexSkinWeightsNode");
  return in_RDX;
}

// IsA @ 14e8499e0

bool __thiscall
FGeometryCollectionTransferVertexSkinWeightsNode::IsA
          (FGeometryCollectionTransferVertexSkinWeightsNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGeometryCollectionTransferVertexSkinWeightsNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e849a48;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e849a48:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e849a66;
      }
    }
  }
  bVar5 = true;
LAB_14e849a66:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e849b40

FStructOnScope * __thiscall
FGeometryCollectionTransferVertexSkinWeightsNode::NewStructOnScope
          (FGeometryCollectionTransferVertexSkinWeightsNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode
                           ,(UObject *)pUVar2,L"GeometryCollectionTransferVertexSkinWeightsNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e849bc0

void __thiscall
FGeometryCollectionTransferVertexSkinWeightsNode::SerializeInternal
          (FGeometryCollectionTransferVertexSkinWeightsNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode,
                         (UObject *)pUVar1,L"GeometryCollectionTransferVertexSkinWeightsNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e849c3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e849d30

FName __thiscall
FGeometryCollectionTransferVertexSkinWeightsNode::GetDisplayName
          (FGeometryCollectionTransferVertexSkinWeightsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"TransferVertexSkinWeights");
  return in_RDX;
}

// GetCategory @ 14e849d60

FName __thiscall
FGeometryCollectionTransferVertexSkinWeightsNode::GetCategory
          (FGeometryCollectionTransferVertexSkinWeightsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection");
  return in_RDX;
}

// GetTags @ 14e849d90

FString * __thiscall
FGeometryCollectionTransferVertexSkinWeightsNode::GetTags
          (FGeometryCollectionTransferVertexSkinWeightsNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "Transfer vertex skin weights from the Source Collection to the Target Collection"
                    );
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e849dc0

UScriptStruct * __thiscall
FGeometryCollectionTransferVertexSkinWeightsNode::TypedScriptStruct
          (FGeometryCollectionTransferVertexSkinWeightsNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode,
                         (UObject *)pUVar1,L"GeometryCollectionTransferVertexSkinWeightsNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode.
         OuterSingleton;
}

// Evaluate @ 14e84a030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGeometryCollectionTransferVertexSkinWeightsNode::Evaluate
          (FGeometryCollectionTransferVertexSkinWeightsNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  FManagedArrayCollection *pFVar12;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar13;
  byte bVar14;
  int iVar15;
  ForElementType<FSetElementId> FVar16;
  longlong lVar17;
  uint *puVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  TManagedArray<UE::Math::TVector<float>_> *pTVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  FManagedArrayCollection *pFVar27;
  undefined1 auStackY_a38 [32];
  undefined1 local_9e8 [4];
  uint local_9e4;
  uint local_9e0 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_9d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_9c8;
  longlong local_9b8;
  uint local_9b0;
  float local_9ac;
  uint local_9a8 [2];
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *local_9a0;
  longlong local_998;
  longlong local_990;
  FTransferProperties local_988;
  ulonglong local_968;
  TArray<UE::Private::FTransferData,TSizedDefaultAllocator<32>_> local_960;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *local_950;
  FGeometryCollectionTransferVertexSkinWeightsNode *local_948;
  FContext *local_940;
  FManagedArrayCollection *local_938;
  TPairInitializer<int_const_&,float_&&> local_930;
  longlong *local_920;
  int iStack_918;
  uint uStack_914;
  TBitArray<FDefaultBitArrayAllocator> *local_910;
  undefined4 uStack_908;
  uint uStack_904;
  uint local_900;
  undefined4 uStack_8fc;
  int iStack_8f8;
  undefined4 uStack_8f4;
  longlong *local_8f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8e8;
  undefined8 uStack_8c8;
  uint *local_8c0;
  float *local_8b8;
  FString local_8b0 [2];
  undefined4 local_884;
  FTransferFacade local_878;
  FTransferFacade local_668;
  FVertexBoneWeightsFacade local_458;
  FVertexBoneWeightsFacade local_328;
  undefined1 local_1f8 [32];
  uint *local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  int local_1c4;
  undefined1 local_1c0 [8];
  ForElementType<FSetElementId> local_1b8;
  int local_1b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_1a8;
  undefined1 local_158 [72];
  int local_110;
  FManagedArrayCollection local_108;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_a38;
  pFVar27 = &this->Collection;
  local_948 = this;
  local_940 = param_1;
  local_938 = pFVar27;
  puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar11 == pFVar27) {
    pFVar12 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,pFVar27);
    FManagedArrayCollection::FManagedArrayCollection(&local_108,pFVar12);
    pFVar12 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->FromCollection);
    UE::Private::FTransferFacade::FTransferFacade(&local_878,&local_108);
    UE::Private::FTransferFacade::FTransferFacade(&local_668,pFVar12);
    local_988.BoundingVolumeType = this->BoundingVolumeType;
    local_988.FalloffThreshold = this->FalloffThreshold;
    local_988.TransformNameSuffix.Data.ArrayNum = (this->TransformNameSuffix).Data.ArrayNum;
    lVar17 = (longlong)local_988.TransformNameSuffix.Data.ArrayNum;
    local_988.EdgeMultiplier = this->EdgeMultiplier;
    pFVar19 = (this->TransformNameSuffix).Data.AllocatorInstance.Data;
    local_988.SourceScale = this->SourceScale;
    local_988.Falloff = this->Falloff;
    local_988.BoundMultiplier = this->BoundMultiplier;
    local_988.TransformNameSuffix.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_988.TransformNameSuffix.Data.ArrayNum == 0) {
      local_988.TransformNameSuffix.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_988.TransformNameSuffix.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_988.TransformNameSuffix,
                 local_988.TransformNameSuffix.Data.ArrayNum,
                 &local_988.TransformNameSuffix.Data.ArrayMax);
      memcpy(local_988.TransformNameSuffix.Data.AllocatorInstance.Data,pFVar19,lVar17 * 2);
    }
    pTVar21 = local_878.Vertex.ConstAttributeArray;
    if ((((((((this->TransferMethod != None) &&
             (local_878.BoneMap.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
            (local_878.Vertex.ConstAttributeArray != (TManagedArray<UE::Math::TVector<float>_> *)0x0
            )) && ((local_878.Indices.ConstAttributeArray !=
                    (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0 &&
                   (local_878.Transform.ConstAttributeArray !=
                    (TManagedArray<UE::Math::TTransform<float>_> *)0x0)))) &&
          (local_878.Parent.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
         (((local_878.VertexStart.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
           (local_878.VertexCount.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
          ((local_878.FaceStart.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
           (((local_878.FaceCount.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
             (local_668.BoneMap.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
            (local_668.Vertex.ConstAttributeArray != (TManagedArray<UE::Math::TVector<float>_> *)0x0
            )))))))) &&
        ((local_668.Indices.ConstAttributeArray != (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0
         && (local_668.Transform.ConstAttributeArray !=
             (TManagedArray<UE::Math::TTransform<float>_> *)0x0)))) &&
       ((local_668.Parent.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
        (((local_668.VertexStart.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
          (local_668.VertexCount.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
         ((local_668.FaceStart.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
          (local_668.FaceCount.ConstAttributeArray != (TManagedArray<int> *)0x0)))))))) {
      UE::Private::ComputeTransferData
                (&local_960,pFVar12,&local_108,&local_988,&this->TransferMethod);
      GeometryCollection::Facades::FVertexBoneWeightsFacade::FVertexBoneWeightsFacade
                (&local_458,pFVar12,true);
      GeometryCollection::Facades::FVertexBoneWeightsFacade::FVertexBoneWeightsFacade
                (&local_328,&local_108,true);
      pTVar13 = GeometryCollection::Facades::FVertexBoneWeightsFacade::FindBoneIndices(&local_458);
      local_9a0 = pTVar13;
      local_950 = GeometryCollection::Facades::FVertexBoneWeightsFacade::FindBoneWeights(&local_458)
      ;
      if ((pTVar13 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
         (local_950 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)) {
        ::FString::FString(local_8b0,L"Source skin weight is not found");
        UE::Dataflow::FContext::Error(param_1,local_8b0,(FDataflowNode *)this,param_2);
        if (local_8b0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8b0[0].Data.AllocatorInstance.Data);
        }
      }
      else {
        UE::Private::FindSourceToTargetTransformMap
                  ((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                   local_158,pFVar12,&local_108);
        uVar23 = 0;
        local_1a8.Elements._44_4_ = 0x80;
        local_1a8.Elements._0_8_ = 0;
        local_1a8.Elements._8_8_ = 0;
        local_1a8.Elements._32_8_ = 0;
        local_1a8.Elements._40_4_ = 0;
        local_1a8.Elements._52_4_ = 0;
        local_1a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_1a8.HashSize = 0;
        local_9b0 = 0;
        local_1a8.Elements._48_4_ = 0xffffffff;
        uVar26 = uVar23;
        while( true ) {
          uVar22 = (uint)uVar26;
          local_968 = uVar23;
          if (pTVar21 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
            iVar8 = FManagedArrayCollection::NumElements
                              (local_878.Vertex.ConstCollection,local_878.Vertex.Group);
          }
          else {
            iVar8 = (**(code **)(*(longlong *)pTVar21 + 0x60))(pTVar21);
          }
          if (iVar8 <= (int)uVar22) break;
          uVar24 = 0;
          if ((int)uVar22 < local_960.ArrayNum) {
            uVar24 = ~uVar22 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar4.Data = local_960.AllocatorInstance.Data;
          if (*(int *)(local_960.AllocatorInstance.Data + uVar23 * 0x28 + 8) != 0) {
            local_1f8._0_8_ = 0;
            uVar24 = 0;
            local_1f8._8_8_ = 0;
            local_1d8 = (uint *)0x0;
            local_1d0 = 0;
            local_1cc = 0x80;
            local_1c8 = 0xffffffff;
            local_1c4 = 0;
            local_1b8 = (ForElementType<FSetElementId>)0x0;
            local_1b0 = 0;
            if (0 < *(int *)(local_960.AllocatorInstance.Data + uVar23 * 0x28 + 8)) {
              local_9b8 = 0;
              do {
                uVar25 = 0;
                local_998 = 0;
                local_9e4 = ~uVar24 >> 0x1f;
                local_990 = 0;
                lVar17 = local_9b8;
                uVar22 = local_9e4;
LAB_14e84a4b0:
                while( true ) {
                  uVar9 = 0;
                  if ((int)uVar24 < *(int *)(FVar4.Data + uVar23 * 0x28 + 8)) {
                    uVar9 = uVar22;
                  }
                  if ((uVar9 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar9 = *(uint *)(lVar17 + *(longlong *)&FVar4.Data[uVar23 * 0x28].field_0x0);
                  uVar10 = 0;
                  if ((int)uVar9 < *(int *)&local_9a0->field_0x18) {
                    uVar10 = ~uVar9 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if (*(int *)(*(longlong *)&local_9a0->field_0x10 + 8 + (longlong)(int)uVar9 * 0x10
                              ) <= (int)uVar25) break;
                  uVar9 = 0;
                  if ((int)uVar24 < *(int *)(FVar4.Data + uVar23 * 0x28 + 8)) {
                    uVar9 = uVar22;
                  }
                  if ((uVar9 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pTVar13 = local_9a0;
                  uVar22 = *(uint *)(lVar17 + *(longlong *)&FVar4.Data[uVar23 * 0x28].field_0x0);
                  uVar9 = 0;
                  if ((int)uVar22 < *(int *)&local_9a0->field_0x18) {
                    uVar9 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  lVar17 = *(longlong *)&pTVar13->field_0x10;
                  uVar9 = 0;
                  if ((int)uVar25 < *(int *)(lVar17 + 8 + (longlong)(int)uVar22 * 0x10)) {
                    uVar9 = ~uVar25 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  local_9a8[0] = *(uint *)(local_990 +
                                          *(longlong *)(lVar17 + (longlong)(int)uVar22 * 0x10));
                  if (local_158._8_4_ != local_158._52_4_) {
                    puVar11 = local_158 + 0x38;
                    if ((undefined1 *)local_158._64_8_ != (undefined1 *)0x0) {
                      puVar11 = (undefined1 *)local_158._64_8_;
                    }
                    for (iVar8 = *(int *)(puVar11 + (ulonglong)(local_110 - 1U & local_9a8[0]) * 4);
                        iVar8 != -1; iVar8 = *(int *)(local_158._0_8_ + 8 + (longlong)iVar8 * 0x10))
                    {
                      if (*(uint *)(local_158._0_8_ + (longlong)iVar8 * 0x10) == local_9a8[0]) {
                        puVar11 = local_158 + 0x38;
                        if ((undefined1 *)local_158._64_8_ != (undefined1 *)0x0) {
                          puVar11 = (undefined1 *)local_158._64_8_;
                        }
                        uVar22 = *(uint *)(puVar11 + (ulonglong)(local_110 - 1U & local_9a8[0]) * 4)
                        ;
                        goto joined_r0x00014e84a78b;
                      }
                    }
                  }
                  if (local_1a8.Elements._8_4_ != local_1a8.Elements._52_4_) {
                    FVar16 = (ForElementType<FSetElementId>)&local_1a8.Hash;
                    if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FVar16 = local_1a8.Hash.SecondaryData;
                    }
                    for (iVar8 = *(int *)((longlong)FVar16 +
                                         (ulonglong)(local_1a8.HashSize - 1U & local_9a8[0]) * 4);
                        iVar8 != -1;
                        iVar8 = *(int *)(local_1a8.Elements._0_8_ + 4 + (longlong)iVar8 * 0xc)) {
                      if (*(uint *)(local_1a8.Elements._0_8_ + (longlong)iVar8 * 0xc) ==
                          local_9a8[0]) goto LAB_14e84a751;
                    }
                  }
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            (&local_1a8,(int *)((longlong)&local_930.Key + 4),(bool *)local_9a8);
                  if (2 < (byte)LogChaosDataflow._0_1_) {
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
                  }
LAB_14e84a751:
                  local_998 = local_998 + 1;
                  uVar25 = uVar25 + 1;
                  local_990 = local_990 + 4;
                  lVar17 = local_9b8;
                  uVar22 = local_9e4;
                }
                local_9b8 = lVar17 + 4;
                uVar24 = uVar24 + 1;
                uVar22 = local_9b0;
                if (*(int *)(FVar4.Data + uVar23 * 0x28 + 8) <= (int)uVar24) break;
              } while( true );
            }
            local_9c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            uVar24 = local_1f8._8_4_ - local_1c4;
            local_9c8.ArrayNum = 0;
            local_9c8.ArrayMax = 0;
            local_9d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_9d8.ArrayNum = 0;
            local_9d8.ArrayMax = 0;
            if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
            }
            iVar8 = 0;
            iVar15 = 0;
            if (0 < (int)uVar24) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar24,&local_9c8.AllocatorInstance,0,&local_9c8.ArrayMax);
              iVar8 = local_9d8.ArrayMax;
              iVar15 = local_9d8.ArrayNum;
            }
            uVar24 = local_1f8._8_4_ - local_1c4;
            if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
            }
            if (iVar8 < (int)uVar24) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar24,&local_9d8.AllocatorInstance,iVar15,&local_9d8.ArrayMax);
            }
            uVar24 = local_1d0;
            local_900 = 0;
            iStack_918 = 0;
            uStack_914 = 1;
            uStack_904 = local_900;
            if (local_1d0 != 0) {
              puVar18 = (uint *)(local_1f8 + 0x10);
              if (local_1d8 != (uint *)0x0) {
                puVar18 = local_1d8;
              }
              uVar25 = *puVar18;
              while (uVar25 == 0) {
                lVar17 = (longlong)iStack_918;
                local_900 = local_900 + 0x20;
                iStack_918 = iStack_918 + 1;
                uStack_904 = local_1d0;
                if ((int)((local_1d0 - 1) + ((int)(local_1d0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                    iStack_918) goto LAB_14e84ac40;
                uVar25 = puVar18[lVar17 + 1];
              }
              uStack_914 = -uVar25 & uVar25;
              uVar23 = (ulonglong)uStack_914 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              local_930.Value._0_4_ = (int)lVar17;
              uStack_904 = (int)local_930.Value + -1 + local_900;
              if ((int)local_1d0 < (int)uStack_904) {
                uStack_904 = local_1d0;
              }
            }
LAB_14e84ac40:
            local_920 = (longlong *)local_1f8;
            uStack_8fc = local_884;
            local_910 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10);
            iStack_8f8 = local_1f8._8_4_ - local_1c4;
            uVar25 = local_1d0 & 0xffffffe0;
            TStack_8e8._padding_ = CONCAT44(uStack_914,iStack_918);
            uStack_908 = 0xffffffff;
            TStack_8e8.CurrentBitIndex = uStack_904;
            TStack_8e8.UnvisitedBitMask = 0xffffffff;
            iVar8 = (int)local_1d0 >> 5;
            TStack_8e8._28_4_ = local_884;
            TStack_8e8.BaseBitIndex = local_900;
            uStack_8c8 = CONCAT44(uStack_8f4,iStack_8f8);
            bVar14 = (byte)local_1d0;
            local_8f0 = local_920;
            TStack_8e8.Array = local_910;
            if (((int)local_1d0 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (uVar24 != local_1d0) {
              puVar18 = (uint *)(local_1f8 + 0x10);
              if (local_1d8 != (uint *)0x0) {
                puVar18 = local_1d8;
              }
              uVar24 = -1 << (bVar14 & 0x1f) & puVar18[iVar8];
              while (uVar24 == 0) {
                lVar17 = (longlong)iVar8;
                uVar25 = uVar25 + 0x20;
                iVar8 = iVar8 + 1;
                uVar24 = local_1d0;
                if ((int)((local_1d0 - 1) + ((int)(local_1d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
                goto LAB_14e84ad60;
                uVar24 = puVar18[lVar17 + 1];
              }
              uVar23 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
              lVar17 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              local_930.Value._4_4_ = (int)lVar17;
              uVar24 = local_930.Value._4_4_ + -1 + uVar25;
              if ((int)local_1d0 < (int)uVar24) {
                uVar24 = local_1d0;
              }
            }
LAB_14e84ad60:
            while( true ) {
              plVar6 = local_8f0;
              if ((int)local_8f0[1] - *(int *)((longlong)local_8f0 + 0x34) != (int)uStack_8c8) {
                local_9e8[0] = 0;
                `TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_9e8);
              }
              if (((TStack_8e8.CurrentBitIndex == uVar24) &&
                  (TStack_8e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10)))
                 && (plVar6 == (longlong *)local_1f8)) break;
              pFVar19 = (FScriptContainerElement *)
                        (*plVar6 + (longlong)TStack_8e8.CurrentBitIndex * 0x10);
              if (((local_9c8.AllocatorInstance.Data <= pFVar19) &&
                  (pFVar19 < local_9c8.AllocatorInstance.Data + (longlong)local_9c8.ArrayMax * 4))
                 && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (local_9c8.ArrayNum == local_9c8.ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_9c8.AllocatorInstance,&local_9c8.ArrayMax);
                local_9c8.ArrayNum = iVar8;
              }
              lVar17 = (longlong)local_9c8.ArrayNum;
              local_9c8.ArrayNum = local_9c8.ArrayNum + 1;
              pFVar20 = pFVar19 + 4;
              *(undefined4 *)(local_9c8.AllocatorInstance.Data + lVar17 * 4) =
                   *(undefined4 *)pFVar19;
              if (((local_9d8.AllocatorInstance.Data <= pFVar20) &&
                  (pFVar20 < local_9d8.AllocatorInstance.Data + (longlong)local_9d8.ArrayMax * 4))
                 && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar8 = local_9d8.ArrayNum;
              if (local_9d8.ArrayNum == local_9d8.ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_9d8.AllocatorInstance,&local_9d8.ArrayMax);
              }
              local_9d8.ArrayNum = iVar8 + 1;
              *(undefined4 *)(local_9d8.AllocatorInstance.Data + (longlong)iVar8 * 4) =
                   *(undefined4 *)pFVar20;
              TStack_8e8.UnvisitedBitMask =
                   TStack_8e8.UnvisitedBitMask & ~TStack_8e8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8e8);
            }
            GeometryCollection::Facades::FVertexBoneWeightsFacade::ModifyBoneWeight
                      (&local_328,uVar22,&local_9c8,&local_9d8);
            if (local_9d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_9d8.AllocatorInstance.Data);
            }
            if (local_9c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_9c8.AllocatorInstance.Data);
            }
            local_1b0 = 0;
            if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_1b8);
            }
            TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_1f8);
            pTVar21 = local_878.Vertex.ConstAttributeArray;
            uVar23 = local_968;
          }
          local_9b0 = uVar22 + 1;
          uVar26 = (ulonglong)local_9b0;
          uVar23 = uVar23 + 1;
        }
        local_1a8.HashSize = 0;
        if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1a8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_1a8.Elements);
        local_110 = 0;
        if ((undefined1 *)local_158._64_8_ != (undefined1 *)0x0) {
          FMemory::Free((void *)local_158._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_158);
        param_1 = local_940;
        pFVar27 = local_938;
        this = local_948;
      }
      DestructItems<UE::Private::FTransferData,int>
                ((FTransferData *)local_960.AllocatorInstance.Data,local_960.ArrayNum);
      if ((FTransferData *)local_960.AllocatorInstance.Data != (FTransferData *)0x0) {
        FMemory::Free(local_960.AllocatorInstance.Data);
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_108,pFVar27);
    if (local_988.TransformNameSuffix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_988.TransformNameSuffix.Data.AllocatorInstance.Data);
    }
    FManagedArrayCollection::~FManagedArrayCollection(&local_108);
  }
  return;
joined_r0x00014e84a78b:
  if (uVar22 == 0xffffffff) goto LAB_14e84a7ae;
  puVar18 = (uint *)((longlong)(int)uVar22 * 0x10 + local_158._0_8_);
  if (*puVar18 == local_9a8[0]) {
    if (puVar18 != (uint *)0x0) goto LAB_14e84a7d6;
    goto LAB_14e84a7b0;
  }
  uVar22 = puVar18[2];
  goto joined_r0x00014e84a78b;
LAB_14e84a7ae:
  puVar18 = (uint *)0x0;
LAB_14e84a7b0:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14e84a7d6:
  local_9e0[0] = puVar18[1];
  uVar22 = 0;
  if ((int)uVar24 < *(int *)(FVar4.Data + uVar23 * 0x28 + 8)) {
    uVar22 = local_9e4;
  }
  if ((uVar22 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar5 = local_950;
  uVar9 = *(uint *)(local_9b8 + *(longlong *)&FVar4.Data[uVar23 * 0x28].field_0x0);
  uVar22 = 0;
  if ((int)uVar9 < *(int *)&local_950->field_0x18) {
    uVar22 = ~uVar9 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar17 = *(longlong *)&pTVar5->field_0x10;
  uVar22 = 0;
  if ((int)uVar25 < *(int *)(lVar17 + 8 + (longlong)(int)uVar9 * 0x10)) {
    uVar22 = ~uVar25 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar22 = local_9e4;
  fVar1 = *(float *)(*(longlong *)(lVar17 + (longlong)(int)uVar9 * 0x10) + local_998 * 4);
  if (local_1f8._8_4_ != local_1c4) {
    FVar16 = (ForElementType<FSetElementId>)local_1c0;
    if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
      FVar16 = local_1b8;
    }
    for (iVar8 = *(int *)((longlong)FVar16 + (ulonglong)(local_1b0 - 1U & local_9e0[0]) * 4);
        iVar8 != -1; iVar8 = *(int *)(local_1f8._0_8_ + 8 + (longlong)iVar8 * 0x10)) {
      if (*(uint *)(local_1f8._0_8_ + (longlong)iVar8 * 0x10) == local_9e0[0]) {
        iVar15 = *(int *)(FVar4.Data + uVar23 * 0x28 + 0x18);
        if (iVar8 == -1) goto LAB_14e84a94a;
        uVar9 = 0;
        if ((int)uVar24 < iVar15) {
          uVar9 = local_9e4;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar17 = local_9b8;
        fVar2 = *(float *)(local_9b8 + *(longlong *)(FVar4.Data + uVar23 * 0x28 + 0x10));
        if (local_1f8._8_4_ == local_1c4) goto LAB_14e84aaae;
        FVar16 = (ForElementType<FSetElementId>)local_1c0;
        if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = local_1b8;
        }
        uVar9 = *(uint *)((longlong)FVar16 + (ulonglong)(local_1b0 - 1U & local_9e0[0]) * 4);
        if (uVar9 == 0xffffffff) goto LAB_14e84aaae;
        goto LAB_14e84aa90;
      }
    }
  }
  iVar15 = *(int *)(FVar4.Data + uVar23 * 0x28 + 0x18);
LAB_14e84a94a:
  uVar9 = 0;
  if ((int)uVar24 < iVar15) {
    uVar9 = local_9e4;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar17 = local_9b8;
  local_9ac = fVar1 * *(float *)(local_9b8 + *(longlong *)(FVar4.Data + uVar23 * 0x28 + 0x10));
  local_8c0 = local_9e0;
  local_8b8 = &local_9ac;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,float_&&>_>
            ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
              *)local_1f8,&local_930,(bool *)&local_8c0);
  local_998 = local_998 + 1;
  uVar25 = uVar25 + 1;
  local_990 = local_990 + 4;
  goto LAB_14e84a4b0;
  while (uVar9 = puVar18[2], uVar9 != 0xffffffff) {
LAB_14e84aa90:
    puVar18 = (uint *)((longlong)(int)uVar9 * 0x10 + local_1f8._0_8_);
    if (*puVar18 == local_9e0[0]) {
      if (puVar18 != (uint *)0x0) goto LAB_14e84aad6;
      goto LAB_14e84aab0;
    }
  }
LAB_14e84aaae:
  puVar18 = (uint *)0x0;
LAB_14e84aab0:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14e84aad6:
  local_998 = local_998 + 1;
  uVar25 = uVar25 + 1;
  local_990 = local_990 + 4;
  puVar18[1] = (uint)(fVar1 * fVar2 + (float)puVar18[1]);
  goto LAB_14e84a4b0;
}

// FGeometryCollectionTransferVertexSkinWeightsNode @ 14e91f140

FGeometryCollectionTransferVertexSkinWeightsNode * __thiscall
FGeometryCollectionTransferVertexSkinWeightsNode::FGeometryCollectionTransferVertexSkinWeightsNode
          (FGeometryCollectionTransferVertexSkinWeightsNode *this,FNodeParameters *param_1,
          FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FGeometryCollectionTransferVertexSkinWeightsNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  FManagedArrayCollection::FManagedArrayCollection(&this->FromCollection);
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
  local_58.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->FromCollection;
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

// FGeometryCollectionTransferVertexSkinWeightsNode @ 14e91f280

FGeometryCollectionTransferVertexSkinWeightsNode * __thiscall
FGeometryCollectionTransferVertexSkinWeightsNode::FGeometryCollectionTransferVertexSkinWeightsNode
          (FGeometryCollectionTransferVertexSkinWeightsNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGeometryCollectionTransferVertexSkinWeightsNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  FManagedArrayCollection::FManagedArrayCollection(&this->FromCollection);
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

