// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 29

// StaticStruct @ 14dac1a90

UScriptStruct * __cdecl FDataflowCollectionEditSkinWeightsNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionEditSkinWeightsNode,
                         (UObject *)pUVar1,L"DataflowCollectionEditSkinWeightsNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode.OuterSingleton;
}

// GetType @ 14dac1ad0

FName __thiscall
FDataflowCollectionEditSkinWeightsNode::GetType(FDataflowCollectionEditSkinWeightsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowCollectionEditSkinWeightsNode");
  return in_RDX;
}

// IsA @ 14dac1b00

bool __thiscall
FDataflowCollectionEditSkinWeightsNode::IsA
          (FDataflowCollectionEditSkinWeightsNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowCollectionEditSkinWeightsNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14dac1b68;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14dac1b68:
    if (!bVar5) {
      bVar5 = FDataflowPrimitiveNode::IsA((FDataflowPrimitiveNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14dac1b86;
      }
    }
  }
  bVar5 = true;
LAB_14dac1b86:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14dac1bc0

FStructOnScope * __thiscall
FDataflowCollectionEditSkinWeightsNode::NewStructOnScope
          (FDataflowCollectionEditSkinWeightsNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
      Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionEditSkinWeightsNode,
                           (UObject *)pUVar2,L"DataflowCollectionEditSkinWeightsNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14dac1c40

void __thiscall
FDataflowCollectionEditSkinWeightsNode::SerializeInternal
          (FDataflowCollectionEditSkinWeightsNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionEditSkinWeightsNode,
                         (UObject *)pUVar1,L"DataflowCollectionEditSkinWeightsNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dac1cbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14dac1cd0

FName __thiscall
FDataflowCollectionEditSkinWeightsNode::GetDisplayName(FDataflowCollectionEditSkinWeightsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"EditSkinWeights");
  return in_RDX;
}

// GetCategory @ 14dac1d00

FName __thiscall
FDataflowCollectionEditSkinWeightsNode::GetCategory(FDataflowCollectionEditSkinWeightsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Collection");
  return in_RDX;
}

// GetTags @ 14dac1d30

FString * __thiscall
FDataflowCollectionEditSkinWeightsNode::GetTags
          (FDataflowCollectionEditSkinWeightsNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Edit skin weights and save it to collection");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14dac1d60

UScriptStruct * __thiscall
FDataflowCollectionEditSkinWeightsNode::TypedScriptStruct
          (FDataflowCollectionEditSkinWeightsNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionEditSkinWeightsNode,
                         (UObject *)pUVar1,L"DataflowCollectionEditSkinWeightsNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14dac1f20

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowCollectionEditSkinWeightsNode::GetRenderParametersImpl
          (FDataflowCollectionEditSkinWeightsNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FDataflowAddScalarVertexPropertyCallbackRegistry *this_00;
  
  this_00 = FDataflowAddScalarVertexPropertyCallbackRegistry::Get();
  FDataflowAddScalarVertexPropertyCallbackRegistry::GetRenderingParameters
            (this_00,__return_storage_ptr__,&(this->VertexGroup).Name);
  return __return_storage_ptr__;
}

// Evaluate @ 14dac1f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDataflowCollectionEditSkinWeightsNode::Evaluate
          (FDataflowCollectionEditSkinWeightsNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FCollectionAttributeKey *pFVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  FName FVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  FDataflowInput *pFVar13;
  FCollectionAttributeKey *pFVar14;
  FString *pFVar15;
  FCollectionAttributeKey *pFVar16;
  undefined1 *puVar17;
  FManagedArrayCollection *pFVar18;
  FName *pFVar19;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar20;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar21;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar22;
  TManagedArray<UE::Math::TVector4<float>_> *pTVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  int *piVar28;
  float *pfVar29;
  longlong lVar30;
  FManagedArrayCollection *pFVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  float *pfVar34;
  longlong lVar35;
  float fVar36;
  float fVar37;
  undefined1 auStackY_308 [32];
  uint local_2c8;
  longlong local_2c0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_2b8;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_2a8;
  int local_298;
  FContext *local_290;
  FCollectionAttributeKey local_288;
  FCollectionAttributeKey local_268;
  longlong local_248;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_240;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_230;
  TManagedArray<UE::Math::TVector4<float>_> *local_220;
  TManagedArray<UE::Math::TIntVector4<int>_> *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  FDataflowCollectionEditSkinWeightsNode *local_208;
  FManagedArrayCollection *local_200;
  FConnectionReference local_1f8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FConnectionReference local_1c8;
  FConnectionReference local_1b0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FString local_178;
  FString local_168;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_158;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_148;
  undefined4 local_12c;
  FManagedArrayCollection local_128;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_308;
  uVar24 = 0;
  pFVar1 = &this->BoneIndicesKey;
  local_1c8.Index = -1;
  local_1c8.ContainerReference = (void *)0x0;
  local_290 = param_1;
  local_208 = this;
  local_1c8.Reference = pFVar1;
  pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1c8);
  pFVar14 = FDataflowInput::GetValue<FCollectionAttributeKey>(pFVar13,param_1,pFVar1);
  ::FString::FString(&local_268.Attribute,&pFVar14->Attribute);
  ::FString::FString(&local_268.Group,&pFVar14->Group);
  if ((local_268.Attribute.Data.ArrayNum < 2) && (local_268.Group.Data.ArrayNum < 2)) {
    pFVar15 = ::FName::ToString(&(this->VertexGroup).Name,&local_178);
    if (&local_268.Group != pFVar15) {
      if (local_268.Group.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Group.Data.AllocatorInstance.Data);
      }
      local_268.Group.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_268.Group.Data.ArrayNum = (pFVar15->Data).ArrayNum;
      local_268.Group.Data.ArrayMax = (pFVar15->Data).ArrayMax;
      (pFVar15->Data).ArrayNum = 0;
      (pFVar15->Data).ArrayMax = 0;
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    if (&local_268 != (FCollectionAttributeKey *)&this->BoneIndicesName) {
      iVar11 = (this->BoneIndicesName).Data.ArrayNum;
      pFVar2 = (this->BoneIndicesName).Data.AllocatorInstance.Data;
      local_268.Attribute.Data.ArrayNum = iVar11;
      if ((iVar11 == 0) && (local_268.Attribute.Data.ArrayMax == 0)) {
        local_268.Attribute.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar11,local_268.Attribute.Data.ArrayMax,(ForAnyElementType *)&local_268,
                   iVar11,&local_268.Attribute.Data.ArrayMax);
        if (iVar11 != 0) {
          memcpy(local_268.Attribute.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar11 * 2);
        }
      }
    }
  }
  pFVar14 = &this->BoneWeightsKey;
  local_1b0.Index = -1;
  local_1b0.ContainerReference = (void *)0x0;
  local_1b0.Reference = pFVar14;
  pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1b0);
  pFVar16 = FDataflowInput::GetValue<FCollectionAttributeKey>(pFVar13,param_1,pFVar14);
  ::FString::FString(&local_288.Attribute,&pFVar16->Attribute);
  ::FString::FString(&local_288.Group,&pFVar16->Group);
  if ((local_288.Attribute.Data.ArrayNum < 2) && (local_288.Group.Data.ArrayNum < 2)) {
    pFVar15 = ::FName::ToString(&(this->VertexGroup).Name,&local_168);
    if (&local_288.Group != pFVar15) {
      if (local_288.Group.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Group.Data.AllocatorInstance.Data);
      }
      local_288.Group.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.Group.Data.ArrayNum = (pFVar15->Data).ArrayNum;
      local_288.Group.Data.ArrayMax = (pFVar15->Data).ArrayMax;
      (pFVar15->Data).ArrayNum = 0;
      (pFVar15->Data).ArrayMax = 0;
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if (&local_288 != (FCollectionAttributeKey *)&this->BoneWeightsName) {
      iVar11 = (this->BoneWeightsName).Data.ArrayNum;
      pFVar2 = (this->BoneWeightsName).Data.AllocatorInstance.Data;
      local_288.Attribute.Data.ArrayNum = iVar11;
      if ((iVar11 == 0) && (local_288.Attribute.Data.ArrayMax == 0)) {
        local_288.Attribute.Data.ArrayMax = 0;
        param_1 = local_290;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar11,local_288.Attribute.Data.ArrayMax,(ForAnyElementType *)&local_288,
                   iVar11,&local_288.Attribute.Data.ArrayMax);
        param_1 = local_290;
        if (iVar11 != 0) {
          memcpy(local_288.Attribute.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar11 * 2);
          param_1 = local_290;
        }
      }
    }
  }
  pFVar31 = &this->Collection;
  local_200 = pFVar31;
  puVar17 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar17 != pFVar31) {
    puVar17 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FCollectionAttributeKey *)puVar17 == pFVar1) {
      pFVar16 = &local_268;
      pFVar14 = pFVar1;
    }
    else {
      puVar17 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
      if ((FCollectionAttributeKey *)puVar17 != pFVar14) goto LAB_14dac2cbb;
      pFVar16 = &local_288;
    }
    FDataflowNode::SetValue<FCollectionAttributeKey,FCollectionAttributeKey>
              ((FDataflowNode *)this,param_1,pFVar16,pFVar14);
    goto LAB_14dac2cbb;
  }
  local_1f8.Index = -1;
  local_1f8.ContainerReference = (void *)0x0;
  local_1f8.Reference = pFVar31;
  pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1f8);
  pFVar18 = FDataflowInput::GetValue<FManagedArrayCollection>(pFVar13,param_1,local_1f8.Reference);
  FManagedArrayCollection::FManagedArrayCollection(&local_128,pFVar18);
  if ((1 < local_268.Attribute.Data.ArrayNum) && (1 < local_288.Attribute.Data.ArrayNum)) {
    bVar9 = this->bCompressSkinWeights;
    local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_230.ArrayNum = 0;
    local_230.ArrayMax = 0;
    local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.ArrayNum = 0;
    local_2a8.ArrayMax = 0;
    local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_240.ArrayNum = 0;
    local_240.ArrayMax = 0;
    local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.ArrayNum = 0;
    local_2b8.ArrayMax = 0;
    bVar8 = UE::Dataflow::Private::GetAttributeValues<int,UE::Math::TIntVector4<int>,4>
                      (&local_128,&local_268,&local_240,bVar9);
    if ((bVar8) &&
       (bVar9 = UE::Dataflow::Private::GetAttributeValues<float,UE::Math::TVector4<float>,4>
                          (&local_128,&local_288,&local_230,bVar9), bVar9)) {
      UE::Dataflow::Private::CorrectSkinWeights(&local_240,&local_230);
      TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_2b8,local_240.ArrayNum,Default);
      TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_2a8,local_230.ArrayNum,Default);
      local_218 = (TManagedArray<UE::Math::TIntVector4<int>_> *)local_2a8.AllocatorInstance.Data;
      iStack_210 = local_2a8.ArrayNum;
      if ((local_2a8.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uStack_20c = local_12c;
      local_1d8 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_2b8.AllocatorInstance.Data;
      iStack_1d0 = local_2b8.ArrayNum;
      if ((local_2b8.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_158._12_4_ = uStack_20c;
      local_158.ArrayNum = iStack_210;
      local_148._12_4_ = uStack_1cc;
      local_148.ArrayNum = iStack_1d0;
      local_158.DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)local_218;
      local_148.DataPtr = local_1d8;
      ExtractVertexWeights(this,param_1,&local_240,&local_230,&local_148,&local_158);
      if (((local_2b8.ArrayNum != 0) && (1 < local_268.Attribute.Data.ArrayNum)) &&
         (1 < local_268.Group.Data.ArrayNum)) {
        iVar11 = local_268.Attribute.Data.ArrayNum + -1;
        if (local_268.Attribute.Data.ArrayNum == 0) {
          iVar11 = 0;
        }
        pFVar19 = ::FName::FName(&local_198,iVar11,
                                 (wchar_t *)local_268.Attribute.Data.AllocatorInstance.Data,
                                 FNAME_Add);
        FVar3 = *pFVar19;
        uVar12 = local_268.Group.Data.ArrayNum - 1;
        if (local_268.Group.Data.ArrayNum == 0) {
          uVar12 = 0;
        }
        pFVar19 = ::FName::FName(&local_190,uVar12,
                                 (wchar_t *)local_268.Group.Data.AllocatorInstance.Data,FNAME_Add);
        FVar4 = *pFVar19;
        pTVar20 = FManagedArrayCollection::
                  FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                            (&local_128,FVar3,FVar4);
        if (pTVar20 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
          pTVar21 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TIntVector4<int>_>
                              (&local_128,FVar3,FVar4);
          param_1 = local_290;
          local_218 = pTVar21;
          if (pTVar21 == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) goto LAB_14dac2be3;
          iVar11 = local_2b8.ArrayNum;
          iVar10 = (**(code **)(*(longlong *)pTVar21 + 0x60))(pTVar21);
          if (iVar10 == iVar11) {
            local_2c8 = 0;
            iVar11 = (**(code **)(*(longlong *)pTVar21 + 0x60))(pTVar21);
            fVar37 = __real_bf800000;
            local_220 = (TManagedArray<UE::Math::TVector4<float>_> *)(longlong)iVar11;
            if (0 < (longlong)local_220) {
              local_2c0 = 0;
              uVar25 = uVar24;
              do {
                uVar26 = (uint)uVar24;
                uVar24 = (ulonglong)local_2b8.ArrayNum;
                uVar32 = 0;
                piVar28 = (int *)(*(longlong *)&pTVar21->field_0x10 + uVar25);
                uVar12 = 0;
                if ((int)uVar26 < local_2b8.ArrayNum) {
                  uVar12 = ~uVar26 >> 0x1f;
                }
                if (uVar12 == 0) {
                  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar9) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  uVar24 = local_2b8._8_8_ & 0xffffffff;
                }
                local_298 = *(int *)(local_2b8.AllocatorInstance.Data + uVar25 + 8);
                if (4 < *(int *)(local_2b8.AllocatorInstance.Data + uVar25 + 8)) {
                  local_298 = 4;
                }
                local_248 = (longlong)local_298;
                uVar33 = uVar32;
                fVar36 = fVar37;
                if (local_298 < 1) {
LAB_14dac26b1:
                  local_2c8 = uVar26;
                  *piVar28 = -1;
                  piVar28[1] = -1;
                  piVar28[2] = -1;
                }
                else {
                  while( true ) {
                    uVar12 = 0;
                    if ((int)local_2c8 < (int)uVar24) {
                      uVar12 = ~uVar26 >> 0x1f;
                    }
                    if ((uVar12 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    FVar6.Data = local_2b8.AllocatorInstance.Data;
                    uVar27 = (uint)uVar32;
                    uVar12 = 0;
                    if ((int)uVar27 < *(int *)(local_2b8.AllocatorInstance.Data + uVar25 + 8)) {
                      uVar12 = ~uVar27 >> 0x1f;
                    }
                    if ((uVar12 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    uVar32 = (ulonglong)(uVar27 + 1);
                    piVar28[uVar33] = *(int *)(*(longlong *)(FVar6.Data + uVar25) + uVar33 * 4);
                    if (local_248 <= (longlong)(uVar33 + 1)) break;
                    uVar24 = local_2b8._8_8_ & 0xffffffff;
                    uVar33 = uVar33 + 1;
                  }
                  uVar26 = local_2c8;
                  if (local_298 < 1) goto LAB_14dac26b1;
                  *piVar28 = (int)(float)*piVar28;
                  if (local_298 < 2) {
                    piVar28[1] = -1;
                    piVar28[2] = -1;
                  }
                  else {
                    piVar28[1] = (int)(float)piVar28[1];
                    if (local_298 < 3) {
                      piVar28[2] = -1;
                    }
                    else {
                      piVar28[2] = (int)(float)piVar28[2];
                      if (3 < local_298) {
                        fVar36 = (float)piVar28[3];
                      }
                    }
                  }
                }
                local_2c8 = local_2c8 + 1;
                uVar24 = (ulonglong)local_2c8;
                local_2c0 = local_2c0 + 1;
                uVar25 = uVar25 + 0x10;
                piVar28[3] = (int)fVar36;
                pTVar21 = local_218;
              } while (local_2c0 < (longlong)local_220);
            }
          }
        }
        else {
          iVar11 = local_2b8.ArrayNum;
          iVar10 = (**(code **)(*(longlong *)pTVar20 + 0x60))(pTVar20);
          if ((iVar10 == iVar11) &&
             (iVar11 = (**(code **)(*(longlong *)pTVar20 + 0x60))(pTVar20), uVar25 = uVar24,
             0 < iVar11)) {
            do {
              uVar26 = (uint)uVar24;
              uVar12 = 0;
              if ((int)uVar26 < local_2b8.ArrayNum) {
                uVar12 = ~uVar26 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              TArray<int,TSizedDefaultAllocator<32>_>::operator=
                        ((TArray<int,TSizedDefaultAllocator<32>_> *)
                         (*(longlong *)&pTVar20->field_0x10 + uVar25),
                         (TArray<int,TSizedDefaultAllocator<32>_> *)
                         (local_2b8.AllocatorInstance.Data + uVar25));
              uVar24 = (ulonglong)(uVar26 + 1);
              uVar25 = uVar25 + 0x10;
            } while ((int)(uVar26 + 1) < iVar11);
          }
        }
        uVar24 = 0;
        param_1 = local_290;
        if (((local_2a8.ArrayNum != 0) && (1 < local_288.Attribute.Data.ArrayNum)) &&
           (1 < local_288.Group.Data.ArrayNum)) {
          uVar26 = 0;
          uVar12 = local_288.Attribute.Data.ArrayNum - 1;
          if (local_288.Attribute.Data.ArrayNum == 0) {
            uVar12 = uVar26;
          }
          pFVar19 = ::FName::FName(&local_188,uVar12,
                                   (wchar_t *)local_288.Attribute.Data.AllocatorInstance.Data,
                                   FNAME_Add);
          FVar3 = *pFVar19;
          uVar12 = local_288.Group.Data.ArrayNum - 1;
          if (local_288.Group.Data.ArrayNum == 0) {
            uVar12 = uVar26;
          }
          pFVar19 = ::FName::FName(&local_180,uVar12,
                                   (wchar_t *)local_288.Group.Data.AllocatorInstance.Data,FNAME_Add)
          ;
          FVar4 = *pFVar19;
          pTVar22 = FManagedArrayCollection::
                    FindAttributeTyped<TArray<float,TSizedDefaultAllocator<32>_>_>
                              (&local_128,FVar3,FVar4);
          if (pTVar22 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
            pTVar23 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector4<float>_>
                                (&local_128,FVar3,FVar4);
            param_1 = local_290;
            local_220 = pTVar23;
            if (pTVar23 != (TManagedArray<UE::Math::TVector4<float>_> *)0x0) {
              iVar11 = local_2a8.ArrayNum;
              iVar10 = (**(code **)(*(longlong *)pTVar23 + 0x60))(pTVar23);
              param_1 = local_290;
              if (iVar10 == iVar11) {
                local_2c8 = 0;
                iVar11 = (**(code **)(*(longlong *)pTVar23 + 0x60))(pTVar23);
                local_218 = (TManagedArray<UE::Math::TIntVector4<int>_> *)(longlong)iVar11;
                param_1 = local_290;
                if (0 < (longlong)local_218) {
                  local_2c0 = 0;
                  local_248 = 0;
                  do {
                    lVar30 = local_248;
                    uVar25 = (ulonglong)local_2a8.ArrayNum;
                    pfVar34 = (float *)(*(longlong *)&pTVar23->field_0x10 + local_248);
                    uVar26 = (uint)uVar24;
                    uVar12 = 0;
                    if ((int)uVar26 < local_2a8.ArrayNum) {
                      uVar12 = ~uVar26 >> 0x1f;
                    }
                    if (uVar12 == 0) {
                      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar9) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      uVar25 = local_2a8._8_8_ & 0xffffffff;
                    }
                    lVar7 = local_248;
                    fVar37 = 0.0;
                    local_298 = *(int *)(local_2a8.AllocatorInstance.Data + lVar30 + 8);
                    if (4 < *(int *)(local_2a8.AllocatorInstance.Data + lVar30 + 8)) {
                      local_298 = 4;
                    }
                    uVar12 = 0;
                    lVar35 = (longlong)local_298;
                    pfVar29 = pfVar34;
                    if (local_298 < 1) {
LAB_14dac2adf:
                      local_2c8 = uVar26;
                      *pfVar34 = 0.0;
                      pfVar34[1] = 0.0;
                      fVar36 = 0.0;
                      pfVar34[2] = 0.0;
                      local_248 = lVar30;
                    }
                    else {
                      while( true ) {
                        uVar27 = 0;
                        if ((int)uVar24 < (int)uVar25) {
                          uVar27 = ~uVar26 >> 0x1f;
                        }
                        if ((uVar27 == 0) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar9)) {
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                        FVar6.Data = local_2a8.AllocatorInstance.Data;
                        uVar27 = 0;
                        if ((int)uVar12 < *(int *)(local_2a8.AllocatorInstance.Data + lVar7 + 8)) {
                          uVar27 = ~uVar12 >> 0x1f;
                        }
                        if ((uVar27 == 0) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar9)) {
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                        fVar36 = *(float *)((longlong)pfVar29 +
                                           (*(longlong *)(FVar6.Data + lVar7) - (longlong)pfVar34));
                        if ((3 < uVar12) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("IsValidIndex(Index)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                               ,0x310,L""), bVar9)) {
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                        *pfVar29 = fVar36;
                        if ((3 < uVar12) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("IsValidIndex(Index)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                               ,0x310,L""), bVar9)) {
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                        fVar37 = fVar37 + *pfVar29;
                        uVar24 = (ulonglong)local_2c8;
                        uVar12 = uVar12 + 1;
                        lVar35 = lVar35 + -1;
                        if (lVar35 == 0) break;
                        uVar25 = local_2a8._8_8_ & 0xffffffff;
                        pfVar29 = pfVar29 + 1;
                      }
                      lVar30 = local_248;
                      uVar26 = local_2c8;
                      if (local_298 < 1) goto LAB_14dac2adf;
                      fVar36 = *pfVar34;
                      if (fVar37 != 0.0) {
                        fVar36 = fVar36 / fVar37;
                      }
                      *pfVar34 = fVar36;
                      if (local_298 < 2) {
                        pfVar34[1] = 0.0;
                        pfVar34[2] = 0.0;
                        fVar36 = 0.0;
                      }
                      else {
                        fVar36 = pfVar34[1];
                        if (fVar37 != 0.0) {
                          fVar36 = fVar36 / fVar37;
                        }
                        pfVar34[1] = fVar36;
                        if (local_298 < 3) {
                          pfVar34[2] = 0.0;
                          fVar36 = 0.0;
                        }
                        else {
                          fVar36 = pfVar34[2];
                          if (fVar37 != 0.0) {
                            fVar36 = fVar36 / fVar37;
                          }
                          pfVar34[2] = fVar36;
                          if (local_298 < 4) {
                            fVar36 = 0.0;
                          }
                          else {
                            fVar36 = pfVar34[3];
                            if (fVar37 != 0.0) {
                              fVar36 = fVar36 / fVar37;
                            }
                          }
                        }
                      }
                    }
                    local_2c8 = local_2c8 + 1;
                    uVar24 = (ulonglong)local_2c8;
                    local_2c0 = local_2c0 + 1;
                    local_248 = local_248 + 0x10;
                    pfVar34[3] = fVar36;
                    pTVar23 = local_220;
                    param_1 = local_290;
                  } while (local_2c0 < (longlong)local_218);
                }
              }
            }
          }
          else {
            iVar11 = local_2a8.ArrayNum;
            iVar10 = (**(code **)(*(longlong *)pTVar22 + 0x60))(pTVar22);
            param_1 = local_290;
            if ((iVar10 == iVar11) &&
               (iVar11 = (**(code **)(*(longlong *)pTVar22 + 0x60))(pTVar22), uVar25 = uVar24,
               param_1 = local_290, 0 < iVar11)) {
              do {
                uVar27 = (uint)uVar24;
                uVar12 = uVar26;
                if ((int)uVar27 < local_2a8.ArrayNum) {
                  uVar12 = ~uVar27 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                TArray<float,TSizedDefaultAllocator<32>_>::operator=
                          ((TArray<float,TSizedDefaultAllocator<32>_> *)
                           (*(longlong *)&pTVar22->field_0x10 + uVar25),
                           (TArray<float,TSizedDefaultAllocator<32>_> *)
                           (local_2a8.AllocatorInstance.Data + uVar25));
                uVar24 = (ulonglong)(uVar27 + 1);
                uVar25 = uVar25 + 0x10;
                param_1 = local_290;
              } while ((int)(uVar27 + 1) < iVar11);
            }
          }
        }
      }
    }
    else {
      UE::Dataflow::Private::CorrectSkinWeights(&local_240,&local_230);
    }
LAB_14dac2be3:
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_2b8.AllocatorInstance.Data,
               local_2b8.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_2b8.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_2b8.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_240.AllocatorInstance.Data,
               local_240.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_240.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_240.AllocatorInstance.Data);
    }
    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
              ((TArray<float,TSizedDefaultAllocator<32>_> *)local_2a8.AllocatorInstance.Data,
               local_2a8.ArrayNum);
    if ((TManagedArray<UE::Math::TIntVector4<int>_> *)local_2a8.AllocatorInstance.Data !=
        (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) {
      FMemory::Free(local_2a8.AllocatorInstance.Data);
    }
    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
              ((TArray<float,TSizedDefaultAllocator<32>_> *)local_230.AllocatorInstance.Data,
               local_230.ArrayNum);
    pFVar31 = local_200;
    this = local_208;
    if ((TArray<float,TSizedDefaultAllocator<32>_> *)local_230.AllocatorInstance.Data !=
        (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_230.AllocatorInstance.Data);
      pFVar31 = local_200;
      this = local_208;
    }
  }
  FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,&local_128,pFVar31);
  FManagedArrayCollection::~FManagedArrayCollection(&local_128);
LAB_14dac2cbb:
  if (local_288.Group.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Group.Data.AllocatorInstance.Data);
  }
  if (local_288.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Attribute.Data.AllocatorInstance.Data);
  }
  if (local_268.Group.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Group.Data.AllocatorInstance.Data);
  }
  if (local_268.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Attribute.Data.AllocatorInstance.Data);
  }
  return;
}

// OnPropertyChanged @ 14dac2d50

void __thiscall
FDataflowCollectionEditSkinWeightsNode::OnPropertyChanged
          (FDataflowCollectionEditSkinWeightsNode *this,FContext *param_1,
          FPropertyChangedEvent *param_2)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  FName FVar4;
  bool bVar5;
  FName *pFVar6;
  FName FVar7;
  FName local_res18;
  
  pFVar6 = ::FName::FName(&local_res18,0xc,L"SkeletalMesh",FNAME_Add);
  pFVar3 = param_2->Property;
  FVar4 = *pFVar6;
  if ((pFVar3 == (FProperty *)0x0) || (bVar5 = IsThisNotNull(pFVar3,"FField::GetFName"), !bVar5)) {
    FVar7.ComparisonIndex.Value = 0;
    FVar7.Number = 0;
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
  }
  else {
    FVar7 = (FName)pFVar3->_padding_;
  }
  if (FVar7 == FVar4) {
    piVar1 = &(this->VertexSkinWeights).Bones.ArrayMax;
    iVar2 = *piVar1;
    (this->VertexSkinWeights).Bones.ArrayNum = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,(ForAnyElementType *)&this->VertexSkinWeights,0,piVar1);
    }
    iVar2 = (this->VertexSkinWeights).Weights.ArrayMax;
    (this->VertexSkinWeights).Weights.ArrayNum = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->VertexSkinWeights).Weights.AllocatorInstance,0,
                 &(this->VertexSkinWeights).Weights.ArrayMax);
    }
    (this->VertexSkinWeights).ArrayNum = 0;
  }
  return;
}

// AddPrimitiveComponents @ 14dac2e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FDataflowCollectionEditSkinWeightsNode::AddPrimitiveComponents
          (FDataflowCollectionEditSkinWeightsNode *this,FContext *param_1,
          TSharedPtr<FManagedArrayCollection_const_,1> *param_2,TObjectPtr<UObject> param_3,
          TObjectPtr<AActor> param_4,
          TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *param_5)

{
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  void *_Src;
  TObjectPtr<USkeletalMesh> TVar4;
  code *pcVar5;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar6;
  TObjectPtr<UObject>_u_0 TVar7;
  TManagedArray<FString> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  TObjectPtr<USkeletalMesh> *pTVar13;
  UClass *pUVar14;
  UObject *pUVar15;
  FGuid *this_00;
  FName *pFVar16;
  UDynamicMeshComponent *this_01;
  FName FVar17;
  FName FVar18;
  FDataflowInput *this_02;
  TObjectPtr<USkeletalMesh>_u_0 *pTVar19;
  FReferenceSkeleton *pFVar20;
  FString *pFVar21;
  USkeletalMeshComponent *pUVar22;
  longlong *plVar23;
  int iVar24;
  ForAnyElementType FVar25;
  int iVar26;
  int *piVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  TSharedPtr<FManagedArrayCollection_const_,1> *pTVar32;
  ulong64 uVar33;
  TArray<TObjectPtr<USkeletalMesh>,TSizedDefaultAllocator<32>_> *pTVar34;
  FDataflowCollectionEditSkinWeightsNode *pFVar35;
  undefined1 auStackY_908 [32];
  <lambda_1> local_8b8;
  longlong local_8b0;
  FString local_8a8;
  FDataflowCollectionEditSkinWeightsNode *local_898;
  UDynamicMeshComponent *local_890;
  USkeletalMesh *local_888;
  USkeletalMeshComponent *local_880;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *local_878;
  longlong local_870;
  TSharedPtr<FManagedArrayCollection_const_,1> *local_868;
  ForAnyElementType local_860;
  int local_858 [2];
  ForAnyElementType local_850;
  int local_848;
  int local_844;
  TObjectPtr<AActor>_u_0 local_840;
  FString local_838;
  undefined8 local_828;
  FString local_820;
  FString local_810;
  TObjectPtr<USkeletalMesh>_u_0 local_800;
  TObjectPtr<UObject>_u_0 local_7f8;
  FContext *local_7f0;
  FString local_7e8;
  FString local_7d8;
  wchar_t *local_7c8;
  undefined8 uStack_7c0;
  FString local_7b8;
  wchar_t *local_7a8;
  undefined8 uStack_7a0;
  TArrayView<std::nullptr_t,int> local_798;
  code *local_788;
  FDataflowCollectionEditSkinWeightsNode **local_780;
  wchar_t *local_778;
  int iStack_770;
  undefined4 uStack_76c;
  wchar_t *local_768;
  int iStack_760;
  undefined4 uStack_75c;
  FDataflowCollectionEditSkinWeightsNode *local_758;
  FRenderingFacade *local_750;
  TObjectPtr<USkeletalMesh>_u_0 *local_748;
  FConnectionReference local_740;
  FName local_728;
  FName local_720;
  undefined1 local_718 [16];
  FName local_708 [2];
  TStringView<wchar_t> local_6f8;
  TStringView<wchar_t> local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  TStringView<wchar_t> local_6a8;
  TStringView<wchar_t> local_698;
  FGuid local_688;
  FRenderingFacade local_678;
  undefined1 local_158 [128];
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_908;
  uVar30 = 0;
  local_840 = param_4.field0_0x0;
  local_878 = param_5;
  local_898 = this;
  local_868 = param_2;
  local_7f8 = param_3.field0_0x0;
  local_7f0 = param_1;
  if ((*(longlong *)param_4.field0_0x0 == 0) || (param_2->Object == (FManagedArrayCollection *)0x0))
  goto LAB_14dac3db4;
  GeometryCollection::Facades::FRenderingFacade::FRenderingFacade(&local_678,param_2->Object);
  bVar9 = GeometryCollection::Facades::FRenderingFacade::IsValid(&local_678);
  if (bVar9) {
    if (local_678.GeometryNameAttribute.ConstAttributeArray == (TManagedArray<FString> *)0x0) {
      uVar31 = FManagedArrayCollection::NumElements
                         (local_678.GeometryNameAttribute.ConstCollection,
                          local_678.GeometryNameAttribute.Group);
      uVar33 = (ulong64)uVar31;
    }
    else {
      uVar12 = (**(code **)(*(longlong *)local_678.GeometryNameAttribute.ConstAttributeArray + 0x60)
               )();
      uVar33 = uVar12 & 0xffffffff;
    }
  }
  else {
    uVar33 = 0;
  }
  iVar24 = (int)uVar33;
  if ((local_678.BoneIndicesAttribute.ConstAttributeArray ==
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
     (local_678.BoneWeightsAttribute.ConstAttributeArray ==
      (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  lVar28 = (longlong)iVar24;
  local_870 = lVar28;
  if ((UE::Dataflow::Private::bEditSkinWeightsNodeGeneratesDynamicMesh == false) || (!bVar9)) {
    iVar26 = (this->SkeletalMeshes).ArrayNum;
    if ((iVar26 == iVar24) && (this->bValidSkeletalMeshes != false)) {
      bVar9 = false;
      pTVar32 = param_2;
      pFVar35 = this;
    }
    else {
      bVar9 = true;
      pTVar32 = param_2;
      pFVar35 = this;
      if (iVar26 != iVar24) {
        pTVar34 = &this->SkeletalMeshes;
        (this->SkeletalMeshes).ArrayNum = 0;
        if ((this->SkeletalMeshes).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&pTVar34->AllocatorInstance,0,&(this->SkeletalMeshes).ArrayMax);
        }
        local_8b0 = (longlong)iVar24;
        uVar31 = 0;
        bVar9 = true;
        pTVar32 = local_868;
        pFVar35 = local_898;
        if (0 < iVar24) {
          lVar28 = 0;
          do {
            if ((local_678.GeometryNameAttribute.ConstAttributeArray ==
                 (TManagedArray<FString> *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                   ,0x67,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar8 = local_678.GeometryNameAttribute.ConstAttributeArray;
            uVar11 = 0;
            if ((int)uVar31 <
                *(int *)&(local_678.GeometryNameAttribute.ConstAttributeArray)->field_0x18) {
              uVar11 = ~uVar31 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_850.Data = (FScriptContainerElement *)0x0;
            iVar24 = *(int *)(lVar28 + 8 + *(longlong *)&pTVar8->field_0x10);
            _Src = *(void **)(lVar28 + *(longlong *)&pTVar8->field_0x10);
            local_848 = iVar24;
            if (iVar24 == 0) {
              local_844 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar24,0,&local_850,iVar24,&local_844);
              memcpy(local_850.Data,_Src,(longlong)iVar24 * 2);
            }
            iVar24 = local_848;
            FVar25.Data = local_850.Data;
            if (local_848 < 2) {
              local_810.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_810.Data.ArrayNum = 0;
              local_810.Data.ArrayMax = 0;
              ::FString::AppendInt(&local_810,uVar31);
              pFVar21 = ::FString::FString(&local_6d8,"SK_DataflowSkeletalMesh_");
              uVar30 = uVar30 | 7;
              ::FString::ConcatFF(&local_7d8,pFVar21,&local_810);
              piVar27 = &local_7d8.Data.ArrayNum;
              FVar25.Data = local_7d8.Data.AllocatorInstance.Data;
            }
            else {
              uVar30 = uVar30 | 8;
              local_858[0] = local_848;
              local_860.Data = (FScriptContainerElement *)0x0;
              if (local_848 == 0) {
                local_858[1] = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_848,0,&local_860,local_848,local_858 + 1);
                memcpy(local_860.Data,FVar25.Data,(longlong)iVar24 * 2);
              }
              piVar27 = local_858;
              FVar25.Data = local_860.Data;
            }
            local_8a8.Data.ArrayNum = *piVar27;
            lVar29 = (longlong)local_8a8.Data.ArrayNum;
            local_8a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_8a8.Data.ArrayNum == 0) {
              local_8a8.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_8a8.Data.ArrayNum,0,(ForAnyElementType *)&local_8a8,
                         local_8a8.Data.ArrayNum,&local_8a8.Data.ArrayMax);
              memcpy(local_8a8.Data.AllocatorInstance.Data,FVar25.Data,lVar29 * 2);
            }
            if (((uVar30 & 8) != 0) &&
               (uVar30 = uVar30 & 0xfffffff7, local_860.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_860.Data);
            }
            if (((uVar30 & 4) != 0) &&
               (uVar30 = uVar30 & 0xfffffffb,
               local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
            }
            if (((uVar30 & 2) != 0) &&
               (uVar30 = uVar30 & 0xfffffffd,
               local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
            }
            if (((uVar30 & 1) != 0) &&
               (uVar30 = uVar30 & 0xfffffffe,
               local_810.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_810.Data.AllocatorInstance.Data);
            }
            FVar25.Data = (FScriptContainerElement *)L"";
            if (local_8a8.Data.ArrayNum != 0) {
              FVar25.Data = local_8a8.Data.AllocatorInstance.Data;
            }
            pFVar16 = ::FName::FName(&local_720,(wchar_t *)FVar25.Data);
            FVar18 = *pFVar16;
            FVar17 = (FName)Z_Construct_UClass_USkeletalMesh_NoRegister();
            TVar7 = local_7f8;
            FVar18 = MakeUniqueObjectName
                               ((UObject *)local_718,*(UClass **)local_7f8.DebugPtr,FVar17,
                                FVar18.ComparisonIndex.Value.Value);
            pFVar21 = ::FName::ToString((FName *)FVar18,&local_6c8);
            if (&local_8a8 != pFVar21) {
              if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
              }
              local_8a8.Data.AllocatorInstance.Data = (pFVar21->Data).AllocatorInstance.Data;
              (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_8a8.Data.ArrayNum = (pFVar21->Data).ArrayNum;
              local_8a8.Data.ArrayMax = (pFVar21->Data).ArrayMax;
              (pFVar21->Data).ArrayNum = 0;
              (pFVar21->Data).ArrayMax = 0;
            }
            if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
            }
            FVar25.Data = (FScriptContainerElement *)L"";
            if (local_8a8.Data.ArrayNum != 0) {
              FVar25.Data = local_8a8.Data.AllocatorInstance.Data;
            }
            pFVar16 = ::FName::FName(local_708,(wchar_t *)FVar25.Data);
                    /* WARNING: Load size is inaccurate */
            local_888 = NewObject<USkeletalMesh>
                                  (*TVar7.DebugPtr,*pFVar16,RF_Transient,(UObject *)0x0,false,
                                   (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_888 != (USkeletalMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_888);
            }
            pFVar2 = (pTVar34->AllocatorInstance).Data;
            piVar27 = &(this->SkeletalMeshes).ArrayMax;
            if (((pFVar2 <= (FScriptContainerElement *)&local_888) &&
                ((FScriptContainerElement *)&local_888 < pFVar2 + (longlong)*piVar27 * 8)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar24 = (this->SkeletalMeshes).ArrayNum;
            if (iVar24 == *piVar27) {
              iVar24 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar34->AllocatorInstance,piVar27);
            }
            (this->SkeletalMeshes).ArrayNum = iVar24 + 1;
            *(USkeletalMesh **)((pTVar34->AllocatorInstance).Data + (longlong)iVar24 * 8) =
                 local_888;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_888 != (USkeletalMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_888);
            }
            if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
            }
            bVar9 = true;
            if (local_850.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_850.Data);
            }
            uVar31 = uVar31 + 1;
            lVar28 = lVar28 + 0x10;
            local_8b0 = local_8b0 + -1;
            param_5 = local_878;
            pTVar32 = local_868;
            pFVar35 = local_898;
          } while (local_8b0 != 0);
        }
      }
    }
    lVar28 = 0;
    local_740.Index = -1;
    local_740.ContainerReference = (void *)0x0;
    local_740.Reference = &pFVar35->SkeletalMesh;
    this_02 = FDataflowNode::FindInput((FDataflowNode *)pFVar35,&local_740);
    pTVar19 = &FDataflowInput::GetValue<TObjectPtr<USkeletalMesh>_>
                         (this_02,local_7f0,&pFVar35->SkeletalMesh)->field0_0x0;
    TVar4.field0_0x0 = (TObjectPtr<USkeletalMesh>_u_0)pTVar19->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar4.field0_0x0 != (USkeletalMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar4.field0_0x0);
    }
    if ((bVar9) && (TVar4.field0_0x0 != (USkeletalMesh *)0x0)) {
      pFVar20 = (FReferenceSkeleton *)
                (**(code **)(*(longlong *)TVar4.field0_0x0 + 800))(TVar4.field0_0x0);
      bVar9 = UE::Dataflow::Private::BuildSkeletalMeshes(&pFVar35->SkeletalMeshes,pTVar32,pFVar20);
      pFVar35->bValidSkeletalMeshes = bVar9;
      if (!bVar9) {
        piVar27 = &(pFVar35->SkeletalMeshes).ArrayMax;
        (pFVar35->SkeletalMeshes).ArrayNum = 0;
        if (*piVar27 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(pFVar35->SkeletalMeshes).AllocatorInstance,0,piVar27);
        }
      }
    }
    if (((pFVar35->SkeletalMeshes).ArrayNum != 0) && (uVar30 = 0, 0 < local_870)) {
      do {
        local_820.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_820.Data.ArrayNum = 0;
        local_820.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_820,uVar30);
        pFVar21 = ::FString::FString(&local_6b8,"Dataflow_SkeletalMesh");
        ::FString::ConcatFF(&local_7b8,pFVar21,&local_820);
        if (local_7b8.Data.ArrayNum == 0) {
          iVar24 = 0;
        }
        else {
          iVar24 = local_7b8.Data.ArrayNum + -1;
        }
        pFVar16 = ::FName::FName((FName *)(local_718 + 8),iVar24,
                                 (wchar_t *)local_7b8.Data.AllocatorInstance.Data,FNAME_Add);
        FVar18 = *pFVar16;
        if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
        }
        if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
        }
        if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_820.Data.AllocatorInstance.Data);
        }
        pUVar22 = NewObject<USkeletalMeshComponent>
                            ((UObject *)(local_840.DebugPtr)->_padding_,FVar18,RF_NoFlags,
                             (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        pcVar5 = *(code **)(pUVar22->_padding_ + 0xb48);
        uVar31 = 0;
        if ((int)uVar30 < (local_898->SkeletalMeshes).ArrayNum) {
          uVar31 = ~uVar30 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (*pcVar5)(pUVar22,*(undefined8 *)
                           ((local_898->SkeletalMeshes).AllocatorInstance.Data + lVar28 * 8),1);
        local_768 = L"/Engine/EditorMaterials/Dataflow/DataflowTwoSidedVertexMaterial";
        uStack_7c0._0_4_ = 0;
        uStack_7c0._4_4_ = 0;
        local_7c8 = (wchar_t *)0x0;
        iStack_760 = 0x3f;
        pUVar14 = Z_Construct_UClass_UMaterial_NoRegister();
        local_698._12_4_ = uStack_75c;
        local_698.Size = iStack_760;
        local_6a8.DataPtr = local_7c8;
        local_6a8.Size = (int)uStack_7c0;
        local_6a8._12_4_ = uStack_7c0._4_4_;
        local_698.DataPtr = local_768;
        pUVar15 = StaticLoadObject(pUVar14,(UObject *)0x0,&local_698,&local_6a8,0,(UPackageMap *)0x0
                                   ,true,(FLinkerInstancingContext *)0x0);
        if (pUVar15 == (UObject *)0x0) {
LAB_14dac3cc6:
          pUVar15 = (UObject *)0x0;
        }
        else {
          pUVar14 = Z_Construct_UClass_UMaterial_NoRegister();
          iVar24 = (int)pUVar14->_padding_;
          if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar24) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar24 * 8) !=
              &pUVar14->_padding_)) goto LAB_14dac3cc6;
        }
        (**(code **)(pUVar22->_padding_ + 0x6b8))(pUVar22,0,pUVar15);
        local_880 = pUVar22;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar22);
        }
        pFVar2 = (param_5->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_880) &&
            ((FScriptContainerElement *)&local_880 < pFVar2 + (longlong)param_5->ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar24 = param_5->ArrayNum;
        if (iVar24 == param_5->ArrayMax) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar24 + 1;
        *(USkeletalMeshComponent **)((param_5->AllocatorInstance).Data + (longlong)iVar24 * 8) =
             local_880;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_880 != (USkeletalMeshComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_880);
        }
        uVar30 = uVar30 + 1;
        lVar28 = lVar28 + 1;
      } while (lVar28 < local_870);
    }
    goto LAB_14dac3db4;
  }
  if ((this->DynamicMeshes).ArrayNum != iVar24) {
    pTVar13 = FDataflowNode::GetValue<TObjectPtr<USkeletalMesh>_>
                        ((FDataflowNode *)this,param_1,&this->SkeletalMesh,&this->SkeletalMesh);
    local_800.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar13->field0_0x0).DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_800.DebugPtr != (USkeletalMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_800.DebugPtr);
    }
    pTVar1 = &this->DynamicMeshes;
    iVar26 = (this->DynamicMeshes).ArrayNum;
    piVar27 = &(this->DynamicMeshes).ArrayNum;
    if (iVar26 < iVar24) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar24 - iVar26,&pTVar1->AllocatorInstance,piVar27,
                          &(this->DynamicMeshes).ArrayMax);
      memset((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8,0,
             (longlong)(iVar24 - iVar26) << 3);
    }
    else {
      if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar33);
      }
      if (iVar24 < iVar26) {
        iVar26 = iVar26 - iVar24;
        if (iVar26 < 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else if (iVar26 == 0) goto LAB_14dac3073;
        pFVar2 = (pTVar1->AllocatorInstance).Data + lVar28 * 8;
        iVar10 = (*piVar27 - iVar26) - iVar24;
        if (iVar10 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)iVar26 * 8,(longlong)iVar10 << 3);
        }
        *piVar27 = *piVar27 - iVar26;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar1->AllocatorInstance,*piVar27,&(this->DynamicMeshes).ArrayMax);
      }
    }
LAB_14dac3073:
    lVar28 = local_870;
    lVar29 = 0;
    if (0 < iVar24) {
      do {
        pUVar15 = (UObject *)(local_840.DebugPtr)->_padding_;
        FObjectInitializer::AssertIfInConstructor
                  (pUVar15,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar14 = Z_Construct_UClass_UDynamicMesh_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_d8,pUVar14);
        local_d8._8_8_ = pUVar15;
        pUVar15 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
        if (local_d8._64_8_ != 0) {
          plVar23 = (longlong *)(local_d8 + 0x50);
          if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
            plVar23 = (longlong *)local_d8._104_8_;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
        uVar31 = 0;
        if ((int)uVar30 < *piVar27) {
          uVar31 = ~uVar30 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar15);
        }
        uVar30 = uVar30 + 1;
        *(UObject **)(pFVar2 + lVar29 * 8) = pUVar15;
        lVar29 = lVar29 + 1;
        this = local_898;
      } while (lVar29 < lVar28);
    }
    local_750 = &local_678;
    local_748 = &local_800;
    local_798.DataPtr = (void **)0x0;
    local_788 = UE::Core::Private::Function::
                TFunctionRefCaller<`FDataflowCollectionEditSkinWeightsNode::AddPrimitiveComponents'::__l11::<lambda_1>,void,int>
                ::Call;
    local_780 = &local_758;
    local_798.ArrayNum = 0;
    local_758 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(this->DynamicMeshes).ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)&local_788,local_8b8,None,&local_798);
    param_5 = local_878;
  }
  lVar28 = 0;
  if ((this->DynamicMeshes).ArrayNum == 0) goto LAB_14dac3db4;
  uVar30 = param_5->ArrayNum + iVar24;
  if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
  }
  piVar27 = &param_5->ArrayMax;
  if (*piVar27 < (int)uVar30) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar30,&local_878->AllocatorInstance,param_5->ArrayNum,piVar27);
  }
  uStack_7a0._0_4_ = 0;
  uStack_7a0._4_4_ = 0;
  local_778 = L"/Engine/EditorMaterials/Dataflow/DataflowTwoSidedVertexMaterial";
  local_7a8 = (wchar_t *)0x0;
  iStack_770 = 0x3f;
  pUVar14 = Z_Construct_UClass_UMaterial_NoRegister();
  local_6e8._12_4_ = uStack_76c;
  local_6e8.Size = iStack_770;
  local_6f8.DataPtr = local_7a8;
  local_6f8.Size = (int)uStack_7a0;
  local_6f8._12_4_ = uStack_7a0._4_4_;
  local_6e8.DataPtr = local_778;
  pUVar15 = StaticLoadObject(pUVar14,(UObject *)0x0,&local_6e8,&local_6f8,0,(UPackageMap *)0x0,true,
                             (FLinkerInstancingContext *)0x0);
  if (pUVar15 == (UObject *)0x0) {
LAB_14dac32d4:
    pUVar15 = (UObject *)0x0;
  }
  else {
    pUVar14 = Z_Construct_UClass_UMaterial_NoRegister();
    iVar26 = (int)pUVar14->_padding_;
    if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar26) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar26 * 8) !=
        &pUVar14->_padding_)) goto LAB_14dac32d4;
  }
  uVar30 = 0;
  if (0 < iVar24) {
    local_828 = 0;
    do {
      this_00 = FGuid::NewGuid(&local_688);
      local_838.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_838.Data.ArrayNum = 0;
      local_838.Data.ArrayMax = 0;
      FGuid::AppendString(this_00,&local_838,Digits);
      ::FString::PrintfImpl(&local_7e8,L"[%d]_DynamicMesh_(%s)");
      if (local_7e8.Data.ArrayNum == 0) {
        iVar24 = 0;
      }
      else {
        iVar24 = local_7e8.Data.ArrayNum + -1;
      }
      pFVar16 = ::FName::FName(&local_728,iVar24,(wchar_t *)local_7e8.Data.AllocatorInstance.Data,
                               FNAME_Add);
      FVar18 = *pFVar16;
      if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
      }
      if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_838.Data.AllocatorInstance.Data);
      }
      pUVar3 = (UObject *)(local_840.DebugPtr)->_padding_;
      if (FVar18 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  (pUVar3,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar14 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_158,pUVar14);
      local_158._24_4_ = RF_NoFlags;
      local_158._40_8_ = (UObject *)0x0;
      local_158[0x20] = false;
      local_158._48_8_ = (FObjectInstancingGraph *)0x0;
      local_158._56_8_ = (UPackage *)0x0;
      local_158._8_8_ = pUVar3;
      local_158._16_8_ = FVar18;
      this_01 = (UDynamicMeshComponent *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_158);
      if (local_158._64_8_ != 0) {
        plVar23 = (longlong *)(local_158 + 0x50);
        if ((longlong *)local_158._104_8_ != (longlong *)0x0) {
          plVar23 = (longlong *)local_158._104_8_;
        }
        (**(code **)(*plVar23 + 0x10))();
      }
      pFVar35 = local_898;
      uVar31 = 0;
      if ((int)uVar30 < (local_898->DynamicMeshes).ArrayNum) {
        uVar31 = ~uVar30 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UDynamicMeshComponent::SetDynamicMesh
                (this_01,*(UDynamicMesh **)
                          ((pFVar35->DynamicMeshes).AllocatorInstance.Data + lVar28 * 8));
      (**(code **)(this_01->_padding_ + 0xbf0))(this_01,pUVar15);
      local_890 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      pTVar6 = local_878;
      pFVar2 = (local_878->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_890) &&
          ((FScriptContainerElement *)&local_890 < pFVar2 + (longlong)*piVar27 * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar24 = pTVar6->ArrayNum;
      if (iVar24 == *piVar27) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar6->AllocatorInstance,piVar27);
      }
      pTVar6->ArrayNum = iVar24 + 1;
      *(UDynamicMeshComponent **)((pTVar6->AllocatorInstance).Data + (longlong)iVar24 * 8) =
           local_890;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_890 != (UDynamicMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_890);
      }
      uVar30 = uVar30 + 1;
      lVar28 = lVar28 + 1;
    } while (lVar28 < local_870);
  }
LAB_14dac3db4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_868->SharedReferenceCount).ReferenceController);
  return;
}

// OnInvalidate @ 14dac3e00

void __thiscall
FDataflowCollectionEditSkinWeightsNode::OnInvalidate(FDataflowCollectionEditSkinWeightsNode *this)

{
  longlong *plVar1;
  FDataflowDebugDrawSkeletonObject *pFVar2;
  
  this->bValidSkeletalMeshes = false;
  (this->DynamicMeshes).ArrayNum = 0;
  if ((this->DynamicMeshes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DynamicMeshes).AllocatorInstance,0,&(this->DynamicMeshes).ArrayMax);
  }
  pFVar2 = (this->SkeletonObject).Reference;
  if (pFVar2 != (FDataflowDebugDrawSkeletonObject *)0x0) {
    (this->SkeletonObject).Reference = (FDataflowDebugDrawSkeletonObject *)0x0;
    plVar1 = &pFVar2->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014dac3e71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// PostSerialize @ 14dac3e80

void __thiscall
FDataflowCollectionEditSkinWeightsNode::PostSerialize
          (FDataflowCollectionEditSkinWeightsNode *this,FArchive *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = (this->SkinWeights_DEPRECATED).ArrayNum;
    if (0 < iVar2) {
      FDataflowVertexSkinWeightData::SetNum(&this->VertexSkinWeights,iVar2);
      uVar6 = 0;
      if (0 < (this->SkinWeights_DEPRECATED).ArrayNum) {
        do {
          uVar5 = 0;
          if ((int)uVar6 < (this->SkinWeights_DEPRECATED).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                   ((this->SkinWeights_DEPRECATED).AllocatorInstance.Data +
                   (longlong)(int)uVar6 * 0x20);
          FDataflowVertexSkinWeightData::FromArrays
                    (&this->VertexSkinWeights,uVar6,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar7 + 1),pTVar7);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (this->SkinWeights_DEPRECATED).ArrayNum);
      }
    }
    DestructItems<FDataflowSkinWeightData,int>
              ((FDataflowSkinWeightData *)(this->SkinWeights_DEPRECATED).AllocatorInstance.Data,
               (this->SkinWeights_DEPRECATED).ArrayNum);
    piVar1 = &(this->SkinWeights_DEPRECATED).ArrayMax;
    (this->SkinWeights_DEPRECATED).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->SkinWeights_DEPRECATED).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// FDataflowCollectionEditSkinWeightsNode @ 14dacce90

FDataflowCollectionEditSkinWeightsNode * __thiscall
FDataflowCollectionEditSkinWeightsNode::FDataflowCollectionEditSkinWeightsNode
          (FDataflowCollectionEditSkinWeightsNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FCollectionAttributeKey *this_01;
  FCollectionAttributeKey *this_02;
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FDataflowCollectionEditSkinWeightsNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  this_01 = &this->BoneIndicesKey;
  (this->BoneIndicesName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndicesName).Data.ArrayNum = 0;
  (this->BoneIndicesName).Data.ArrayMax = 0;
  (this->BoneWeightsName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneWeightsName).Data.ArrayNum = 0;
  (this->BoneWeightsName).Data.ArrayMax = 0;
  (this->VertexGroup).Name = FGeometryCollection::VerticesGroup;
  ::FString::FString(&this_01->Attribute,"");
  ::FString::FString(&(this->BoneIndicesKey).Group,"");
  this_02 = &this->BoneWeightsKey;
  ::FString::FString(&this_02->Attribute,"");
  ::FString::FString(&(this->BoneWeightsKey).Group,"");
  this->bCompressSkinWeights = false;
  (this->SkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->SkinWeights_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinWeights_DEPRECATED).ArrayNum = 0;
  (this->SkinWeights_DEPRECATED).ArrayMax = 0;
  (this->VertexSkinWeights).Bones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexSkinWeights).Bones.ArrayNum = 0;
  (this->VertexSkinWeights).Bones.ArrayMax = 0;
  (this->VertexSkinWeights).Weights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexSkinWeights).Weights.ArrayNum = 0;
  (this->VertexSkinWeights).Weights.ArrayMax = 0;
  (this->VertexSkinWeights).ArrayNum = 0;
  this->SkinWeightsRefSkeletonHash = 0;
  *(undefined8 *)&this->OnBoneSelectionChanged = 0;
  *(undefined8 *)&(this->OnBoneSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnBoneSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnBoneSelectionChanged).field_0x18 = 2;
  (this->SkeletalMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshes).ArrayNum = 0;
  (this->SkeletalMeshes).ArrayMax = 0;
  this->bValidSkeletalMeshes = false;
  (this->DynamicMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicMeshes).ArrayNum = 0;
  (this->DynamicMeshes).ArrayMax = 0;
  (this->SkeletonObject).Reference = (FDataflowDebugDrawSkeletonObject *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_01;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_02;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->SkeletalMesh;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_01;
  local_48.Reference = this_01;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FCollectionAttributeKey *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_02;
  local_48.Reference = this_02;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FCollectionAttributeKey *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  return this;
}

// FDataflowCollectionEditSkinWeightsNode @ 14dacd160

FDataflowCollectionEditSkinWeightsNode * __thiscall
FDataflowCollectionEditSkinWeightsNode::FDataflowCollectionEditSkinWeightsNode
          (FDataflowCollectionEditSkinWeightsNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FDataflowCollectionEditSkinWeightsNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->BoneIndicesName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndicesName).Data.ArrayNum = 0;
  (this->BoneIndicesName).Data.ArrayMax = 0;
  (this->BoneWeightsName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneWeightsName).Data.ArrayNum = 0;
  (this->BoneWeightsName).Data.ArrayMax = 0;
  (this->VertexGroup).Name = FGeometryCollection::VerticesGroup;
  ::FString::FString(&(this->BoneIndicesKey).Attribute,"");
  ::FString::FString(&(this->BoneIndicesKey).Group,"");
  ::FString::FString(&(this->BoneWeightsKey).Attribute,"");
  ::FString::FString(&(this->BoneWeightsKey).Group,"");
  (this->SkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  this->bCompressSkinWeights = false;
  (this->SkinWeights_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinWeights_DEPRECATED).ArrayNum = 0;
  (this->SkinWeights_DEPRECATED).ArrayMax = 0;
  (this->VertexSkinWeights).Bones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexSkinWeights).Bones.ArrayNum = 0;
  (this->VertexSkinWeights).Bones.ArrayMax = 0;
  (this->VertexSkinWeights).Weights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexSkinWeights).Weights.ArrayNum = 0;
  (this->VertexSkinWeights).Weights.ArrayMax = 0;
  (this->VertexSkinWeights).ArrayNum = 0;
  this->SkinWeightsRefSkeletonHash = 0;
  *(undefined8 *)&this->OnBoneSelectionChanged = 0;
  *(undefined8 *)&(this->OnBoneSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnBoneSelectionChanged).field_0x10 = 0;
  (this->SkeletalMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshes).ArrayNum = 0;
  (this->SkeletalMeshes).ArrayMax = 0;
  this->bValidSkeletalMeshes = false;
  (this->DynamicMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicMeshes).ArrayNum = 0;
  (this->DynamicMeshes).ArrayMax = 0;
  (this->SkeletonObject).Reference = (FDataflowDebugDrawSkeletonObject *)0x0;
  *(undefined8 *)&(this->OnBoneSelectionChanged).field_0x18 = 2;
  return this;
}

// ~FDataflowCollectionEditSkinWeightsNode @ 14dace260

void __thiscall
FDataflowCollectionEditSkinWeightsNode::~FDataflowCollectionEditSkinWeightsNode
          (FDataflowCollectionEditSkinWeightsNode *this)

{
  longlong *plVar1;
  FDataflowDebugDrawSkeletonObject *pFVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  
  pFVar2 = (this->SkeletonObject).Reference;
  if (pFVar2 != (FDataflowDebugDrawSkeletonObject *)0x0) {
    plVar1 = &pFVar2->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->DynamicMeshes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SkeletalMeshes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBoneSelectionChanged).field_0x8,
             *(int *)&(this->OnBoneSelectionChanged).field_0x10);
  pvVar4 = *(void **)&(this->OnBoneSelectionChanged).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBoneSelectionChanged);
  pFVar3 = (this->VertexSkinWeights).Weights.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->VertexSkinWeights).Bones.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FDataflowSkinWeightData,int>
            ((FDataflowSkinWeightData *)(this->SkinWeights_DEPRECATED).AllocatorInstance.Data,
             (this->SkinWeights_DEPRECATED).ArrayNum);
  pFVar3 = (this->SkinWeights_DEPRECATED).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BoneWeightsKey).Group.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BoneWeightsKey).Attribute.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BoneIndicesKey).Group.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BoneIndicesKey).Attribute.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BoneWeightsName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BoneIndicesName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  this->_padding_ = (longlong)&___7FDataflowPrimitiveNode__6B_;
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

// operator() @ 14dace5b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FDataflowCollectionEditSkinWeightsNode::AddPrimitiveComponents'::__l11::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  UObject *pUVar4;
  FDynamicMesh3 *pFVar5;
  FDynamicMeshAttributeSet *this_00;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar6;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar7;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar8;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar9;
  undefined8 uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
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
  undefined8 uVar25;
  undefined8 uVar26;
  bool bVar27;
  uint uVar28;
  longlong *plVar29;
  longlong lVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  
  lVar30 = *(longlong *)this;
  uVar32 = 0;
  if (param_1 < *(int *)(lVar30 + 0x3f0)) {
    uVar32 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar27)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pUVar4 = *(UObject **)(*(longlong *)(lVar30 + 1000) + (longlong)param_1 * 8);
  if (pUVar4 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    if (*(longlong *)&pUVar4[4].field_0x18 != 0) goto LAB_14dace65e;
  }
  bVar27 = ::FDebug::CheckVerifyFailedImpl2
                     ("DynamicMeshObject && DynamicMeshObject->GetMeshPtr()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionEditSkinWeightsNode.cpp"
                      ,0x134,L"");
  if (bVar27) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
LAB_14dace65e:
  pFVar5 = *(FDynamicMesh3 **)&pUVar4[4].field_0x18;
  UE::Dataflow::Conversion::RenderingFacadeToDynamicMesh
            (*(FRenderingFacade **)((longlong)this + 8),param_1,pFVar5,true);
  if ((longlong *)**(longlong **)((longlong)this + 0x10) != (longlong *)0x0) {
    plVar29 = (longlong *)(**(code **)(*(longlong *)**(longlong **)((longlong)this + 0x10) + 800))()
    ;
    iVar2 = (int)plVar29[1];
    if ((iVar2 != 0) &&
       (this_00 = (pFVar5->AttributeSet).Ptr, this_00 != (FDynamicMeshAttributeSet *)0x0)) {
      UE::Geometry::FDynamicMeshAttributeSet::EnableBones(this_00,iVar2);
      uVar26 = _UNK_15076b1f8;
      uVar25 = ___xmm_3f8000003f8000003f8000003f800000;
      pTVar6 = (this_00->BoneNameAttrib).Ptr;
      uVar32 = 0;
      pTVar7 = (this_00->BonePoseAttrib).Ptr;
      pTVar8 = (this_00->BoneParentIndexAttrib).Ptr;
      pTVar9 = (this_00->BoneColorAttrib).Ptr;
      if (0 < iVar2) {
        lVar30 = 0;
        lVar34 = 0;
        lVar35 = 0;
        lVar33 = 0;
        do {
          uVar31 = ~uVar32 >> 0x1f;
          uVar28 = 0;
          if ((int)uVar32 < (int)plVar29[1]) {
            uVar28 = uVar31;
          }
          if ((uVar28 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar10 = *(undefined8 *)(lVar33 + *plVar29);
          uVar28 = 0;
          if ((int)uVar32 < (pTVar6->AttribValues).ArrayNum) {
            uVar28 = uVar31;
          }
          if ((uVar28 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          *(undefined8 *)((pTVar6->AttribValues).AllocatorInstance.Data + lVar35 * 8) = uVar10;
          uVar28 = 0;
          if ((int)uVar32 < (int)plVar29[1]) {
            uVar28 = uVar31;
          }
          if ((uVar28 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar3 = *(undefined4 *)(*plVar29 + 8 + lVar33);
          uVar28 = 0;
          if ((int)uVar32 < (pTVar8->AttribValues).ArrayNum) {
            uVar28 = uVar31;
          }
          if ((uVar28 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          *(undefined4 *)((pTVar8->AttribValues).AllocatorInstance.Data + lVar35 * 4) = uVar3;
          uVar28 = 0;
          if ((int)uVar32 < (int)plVar29[3]) {
            uVar28 = uVar31;
          }
          if ((uVar28 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          lVar11 = plVar29[2];
          uVar10 = *(undefined8 *)(lVar11 + lVar30);
          uVar14 = ((undefined8 *)(lVar11 + lVar30))[1];
          puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar30);
          uVar15 = *puVar1;
          uVar16 = puVar1[1];
          puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar30);
          uVar17 = *puVar1;
          uVar18 = puVar1[1];
          puVar1 = (undefined8 *)(lVar11 + 0x30 + lVar30);
          uVar19 = *puVar1;
          uVar20 = puVar1[1];
          puVar1 = (undefined8 *)(lVar11 + 0x40 + lVar30);
          uVar21 = *puVar1;
          uVar22 = puVar1[1];
          puVar1 = (undefined8 *)(lVar11 + 0x50 + lVar30);
          uVar23 = *puVar1;
          uVar24 = puVar1[1];
          uVar28 = 0;
          if ((int)uVar32 < (pTVar7->AttribValues).ArrayNum) {
            uVar28 = uVar31;
          }
          if ((uVar28 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar12 = (pTVar7->AttribValues).AllocatorInstance.Data;
          *(undefined8 *)(pFVar12 + lVar30) = uVar10;
          *(undefined8 *)(pFVar12 + lVar30 + 8) = uVar14;
          *(undefined8 *)(pFVar12 + lVar30 + 0x10) = uVar15;
          *(undefined8 *)(pFVar12 + lVar30 + 0x10 + 8) = uVar16;
          *(undefined8 *)(pFVar12 + lVar30 + 0x20) = uVar17;
          *(undefined8 *)(pFVar12 + lVar30 + 0x20 + 8) = uVar18;
          *(undefined8 *)(pFVar12 + lVar30 + 0x30) = uVar19;
          *(undefined8 *)(pFVar12 + lVar30 + 0x30 + 8) = uVar20;
          *(undefined8 *)(pFVar12 + lVar30 + 0x40) = uVar21;
          *(undefined8 *)(pFVar12 + lVar30 + 0x40 + 8) = uVar22;
          *(undefined8 *)(pFVar12 + lVar30 + 0x50) = uVar23;
          *(undefined8 *)(pFVar12 + lVar30 + 0x50 + 8) = uVar24;
          uVar28 = 0;
          if ((int)uVar32 < (pTVar9->AttribValues).ArrayNum) {
            uVar28 = uVar31;
          }
          if ((uVar28 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar32 = uVar32 + 1;
          lVar35 = lVar35 + 1;
          lVar33 = lVar33 + 0xc;
          lVar30 = lVar30 + 0x60;
          pFVar12 = (pTVar9->AttribValues).AllocatorInstance.Data + lVar34;
          *(undefined8 *)pFVar12 = uVar25;
          *(undefined8 *)(pFVar12 + 8) = uVar26;
          lVar34 = lVar34 + 0x10;
        } while (lVar35 < iVar2);
      }
    }
  }
  return;
}

// ComputeInputRefSkeletonHashFromInput @ 14dad08f0

int __thiscall
FDataflowCollectionEditSkinWeightsNode::ComputeInputRefSkeletonHashFromInput
          (FDataflowCollectionEditSkinWeightsNode *this,FContext *param_1)

{
  TObjectPtr<USkeletalMesh> TVar1;
  int iVar2;
  FDataflowInput *this_00;
  TObjectPtr<USkeletalMesh>_u_0 *pTVar3;
  FReferenceSkeleton *pFVar4;
  FConnectionReference local_28;
  
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->SkeletalMesh;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
  pTVar3 = &FDataflowInput::GetValue<TObjectPtr<USkeletalMesh>_>
                      (this_00,param_1,&this->SkeletalMesh)->field0_0x0;
  TVar1.field0_0x0 = (TObjectPtr<USkeletalMesh>_u_0)pTVar3->DebugPtr;
  if (TVar1.field0_0x0 != (USkeletalMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
    }
    pFVar4 = (FReferenceSkeleton *)
             (**(code **)(*(longlong *)TVar1.field0_0x0 + 800))(TVar1.field0_0x0);
    iVar2 = UE::Dataflow::Private::ComputeHasFromRefSkeleton(pFVar4);
    return iVar2;
  }
  return 0;
}

// ExtractVertexWeights @ 14dad46d0

void __thiscall
FDataflowCollectionEditSkinWeightsNode::ExtractVertexWeights
          (FDataflowCollectionEditSkinWeightsNode *this,FContext *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *param_4,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *param_5)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  
  if ((param_3->ArrayNum != param_5->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SetupWeights.Num() == FinalWeights.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionEditSkinWeightsNode.cpp"
                         ,0x1dc,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_3->ArrayNum != param_2->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SetupWeights.Num() == SetupIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionEditSkinWeightsNode.cpp"
                         ,0x1dd,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_5->ArrayNum != param_4->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FinalWeights.Num() == FinalIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionEditSkinWeightsNode.cpp"
                         ,0x1de,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = ComputeInputRefSkeletonHashFromInput(this,param_1);
  iVar1 = param_5->ArrayNum;
  lVar8 = (longlong)iVar1;
  if (((this->VertexSkinWeights).ArrayNum == iVar1) && (iVar5 == this->SkinWeightsRefSkeletonHash))
  {
    uVar10 = 0;
    if (0 < iVar1) {
      lVar12 = 0;
      do {
        uVar9 = ~uVar10 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar10 < param_5->ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar7 = param_5->DataPtr;
        lVar13 = (longlong)(int)uVar10;
        uVar6 = 0;
        if ((int)uVar10 < param_4->ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FDataflowVertexSkinWeightData::ToArrays
                  (&this->VertexSkinWeights,uVar10,param_4->DataPtr + lVar13,pTVar7 + lVar13);
        uVar6 = 0;
        if ((int)uVar10 < param_4->ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)((longlong)&param_4->DataPtr->ArrayNum + lVar12) == 0) {
          uVar6 = 0;
          if ((int)uVar10 < param_3->ArrayNum) {
            uVar6 = uVar9;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar14 = (param_3->AllocatorInstance).Data;
          pTVar7 = TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int>::operator[]
                             (param_5,uVar10);
          TArray<float,TSizedDefaultAllocator<32>_>::operator=
                    (pTVar7,(TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar14 + lVar13 * 0x10));
          uVar6 = 0;
          if ((int)uVar10 < param_2->ArrayNum) {
            uVar6 = uVar9;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar14 = (param_2->AllocatorInstance).Data;
          this_00 = TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>::operator[]
                              (param_4,uVar10);
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    (this_00,(TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar14 + lVar13 * 0x10));
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x10;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  else {
    uVar10 = 0;
    if (0 < iVar1) {
      lVar13 = 0;
      lVar12 = 0;
      do {
        uVar9 = ~uVar10 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar10 < param_3->ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar14 = (param_3->AllocatorInstance).Data + lVar12;
        uVar6 = 0;
        if ((int)uVar10 < param_5->ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar11 = (FScriptContainerElement *)
                  ((longlong)&(param_5->DataPtr->AllocatorInstance).Data + lVar12);
        if (pFVar11 != pFVar14) {
          iVar1 = *(int *)&pFVar14[8].field_0x0;
          pFVar3 = pFVar11 + 0xc;
          pFVar14 = *(FScriptContainerElement **)&pFVar14->field_0x0;
          iVar5 = *(int *)pFVar3;
          *(int *)&pFVar11[8].field_0x0 = iVar1;
          if ((iVar1 == 0) && (iVar5 == 0)) {
            *(int *)pFVar3 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar1,iVar5,(ForAnyElementType *)pFVar11,iVar1,(int *)pFVar3);
            if (iVar1 != 0) {
              memcpy(*(FScriptContainerElement **)&pFVar11->field_0x0,pFVar14,(longlong)iVar1 << 2);
            }
          }
        }
        uVar6 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar14 = (param_2->AllocatorInstance).Data + lVar12;
        uVar6 = 0;
        if ((int)uVar10 < param_4->ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar11 = (FScriptContainerElement *)
                  ((longlong)&(param_4->DataPtr->AllocatorInstance).Data + lVar12);
        if (pFVar11 != pFVar14) {
          iVar1 = *(int *)&pFVar14[8].field_0x0;
          pFVar3 = pFVar11 + 0xc;
          pFVar14 = *(FScriptContainerElement **)&pFVar14->field_0x0;
          iVar5 = *(int *)pFVar3;
          *(int *)&pFVar11[8].field_0x0 = iVar1;
          if ((iVar1 == 0) && (iVar5 == 0)) {
            *(int *)pFVar3 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar1,iVar5,(ForAnyElementType *)pFVar11,iVar1,(int *)pFVar3);
            if (iVar1 != 0) {
              memcpy(*(FScriptContainerElement **)&pFVar11->field_0x0,pFVar14,(longlong)iVar1 << 2);
            }
          }
        }
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 1;
        lVar12 = lVar12 + 0x10;
      } while (lVar13 < lVar8);
    }
  }
  return;
}

// FillAttributeWeights @ 14dad4d50

bool __cdecl
FDataflowCollectionEditSkinWeightsNode::FillAttributeWeights
          (FManagedArrayCollection *param_1,FCollectionAttributeKey *param_2,
          FCollectionAttributeKey *param_3,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  
  bVar1 = UE::Dataflow::Private::FillAttributeValues<int,UE::Math::TIntVector4<int>,4>
                    (param_1,param_2,param_4);
  if (bVar1) {
    bVar1 = UE::Dataflow::Private::FillAttributeValues<float,UE::Math::TVector4<float>,4>
                      (param_1,param_3,param_5);
    if (bVar1) {
      bVar1 = true;
      goto LAB_14dad4d8e;
    }
  }
  bVar1 = false;
LAB_14dad4d8e:
  UE::Dataflow::Private::CorrectSkinWeights(param_4,param_5);
  return bVar1;
}

// GetAttributeWeights @ 14dad5290

bool __cdecl
FDataflowCollectionEditSkinWeightsNode::GetAttributeWeights
          (FManagedArrayCollection *param_1,FCollectionAttributeKey *param_2,
          FCollectionAttributeKey *param_3,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_5,
          bool param_6)

{
  bool bVar1;
  
  bVar1 = UE::Dataflow::Private::GetAttributeValues<int,UE::Math::TIntVector4<int>,4>
                    (param_1,param_2,param_4,param_6);
  if (bVar1) {
    bVar1 = UE::Dataflow::Private::GetAttributeValues<float,UE::Math::TVector4<float>,4>
                      (param_1,param_3,param_5,param_6);
    if (bVar1) {
      bVar1 = true;
      goto LAB_14dad52db;
    }
  }
  bVar1 = false;
LAB_14dad52db:
  UE::Dataflow::Private::CorrectSkinWeights(param_4,param_5);
  return bVar1;
}

// GetBoneIndicesKey @ 14dad5310

FCollectionAttributeKey * __thiscall
FDataflowCollectionEditSkinWeightsNode::GetBoneIndicesKey
          (FDataflowCollectionEditSkinWeightsNode *this,
          FCollectionAttributeKey *__return_storage_ptr__,FContext *param_1)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  FDataflowInput *this_01;
  FCollectionAttributeKey *pFVar2;
  FString *pFVar3;
  FConnectionReference local_28;
  
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->BoneIndicesKey;
  this_01 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
  pFVar2 = FDataflowInput::GetValue<FCollectionAttributeKey>(this_01,param_1,&this->BoneIndicesKey);
  ::FString::FString(&__return_storage_ptr__->Attribute,&pFVar2->Attribute);
  this_00 = &__return_storage_ptr__->Group;
  ::FString::FString(this_00,&pFVar2->Group);
  if (((__return_storage_ptr__->Attribute).Data.ArrayNum < 2) &&
     ((__return_storage_ptr__->Group).Data.ArrayNum < 2)) {
    pFVar3 = ::FName::ToString(&(this->VertexGroup).Name,(FString *)&local_28);
    if (this_00 != pFVar3) {
      pFVar1 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this_00->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Group).Data.ArrayNum = (pFVar3->Data).ArrayNum;
      (__return_storage_ptr__->Group).Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_28.Reference != (FCollectionAttributeKey *)0x0) {
      FMemory::Free(local_28.Reference);
    }
    ::FString::operator=(&__return_storage_ptr__->Attribute,&this->BoneIndicesName);
  }
  return __return_storage_ptr__;
}

// GetBoneWeightsKey @ 14dad5410

FCollectionAttributeKey * __thiscall
FDataflowCollectionEditSkinWeightsNode::GetBoneWeightsKey
          (FDataflowCollectionEditSkinWeightsNode *this,
          FCollectionAttributeKey *__return_storage_ptr__,FContext *param_1)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  FDataflowInput *this_01;
  FCollectionAttributeKey *pFVar2;
  FString *pFVar3;
  FConnectionReference local_28;
  
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->BoneWeightsKey;
  this_01 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
  pFVar2 = FDataflowInput::GetValue<FCollectionAttributeKey>(this_01,param_1,&this->BoneWeightsKey);
  ::FString::FString(&__return_storage_ptr__->Attribute,&pFVar2->Attribute);
  this_00 = &__return_storage_ptr__->Group;
  ::FString::FString(this_00,&pFVar2->Group);
  if (((__return_storage_ptr__->Attribute).Data.ArrayNum < 2) &&
     ((__return_storage_ptr__->Group).Data.ArrayNum < 2)) {
    pFVar3 = ::FName::ToString(&(this->VertexGroup).Name,(FString *)&local_28);
    if (this_00 != pFVar3) {
      pFVar1 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this_00->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Group).Data.ArrayNum = (pFVar3->Data).ArrayNum;
      (__return_storage_ptr__->Group).Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_28.Reference != (FCollectionAttributeKey *)0x0) {
      FMemory::Free(local_28.Reference);
    }
    ::FString::operator=(&__return_storage_ptr__->Attribute,&this->BoneWeightsName);
  }
  return __return_storage_ptr__;
}

// GetSkeletalMeshOffset @ 14dad64a0

int __thiscall
FDataflowCollectionEditSkinWeightsNode::GetSkeletalMeshOffset
          (FDataflowCollectionEditSkinWeightsNode *this,TObjectPtr<USkeletalMesh> *param_1)

{
  return -1;
}

// MakeEditNodeToolChange @ 14dad70a0

TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_> __thiscall
FDataflowCollectionEditSkinWeightsNode::MakeEditNodeToolChange
          (FDataflowCollectionEditSkinWeightsNode *this)

{
  FEditNodeToolChange *this_00;
  FToolCommandChange FVar1;
  FToolCommandChange *in_RDX;
  
  this_00 = ::operator_new(0x40);
  if (this_00 != (FEditNodeToolChange *)0x0) {
    FVar1 = (FToolCommandChange)FEditNodeToolChange::FEditNodeToolChange(this_00,this);
    *in_RDX = FVar1;
    return (TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_>)in_RDX;
  }
  *in_RDX = (FToolCommandChange)0x0;
  return (TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_>)in_RDX;
}

// ReportVertexWeights @ 14dad8740

void __thiscall
FDataflowCollectionEditSkinWeightsNode::ReportVertexWeights
          (FDataflowCollectionEditSkinWeightsNode *this,FContext *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((param_3->ArrayNum != param_5->ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SetupWeights.Num() == FinalWeights.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionEditSkinWeightsNode.cpp"
                         ,0x1c9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_3->ArrayNum != param_2->ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SetupWeights.Num() == SetupIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionEditSkinWeightsNode.cpp"
                         ,0x1ca,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_5->ArrayNum != param_4->ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FinalWeights.Num() == FinalIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionEditSkinWeightsNode.cpp"
                         ,0x1cb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = ComputeInputRefSkeletonHashFromInput(this,param_1);
  this->SkinWeightsRefSkeletonHash = iVar4;
  FDataflowVertexSkinWeightData::SetNum(&this->VertexSkinWeights,param_5->ArrayNum);
  iVar4 = param_5->ArrayNum;
  uVar6 = 0;
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < param_5->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_5->AllocatorInstance).Data;
      uVar5 = 0;
      if ((int)uVar6 < param_4->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FDataflowVertexSkinWeightData::FromArrays
                (&this->VertexSkinWeights,uVar6,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)
                 ((param_4->AllocatorInstance).Data + lVar7),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar1 + lVar7));
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < iVar4);
  }
  return;
}

// SetAttributeWeights @ 14dad8a60

bool __cdecl
FDataflowCollectionEditSkinWeightsNode::SetAttributeWeights
          (FManagedArrayCollection *param_1,FCollectionAttributeKey *param_2,
          FCollectionAttributeKey *param_3,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  float local_18 [4];
  
  local_18[0] = -NAN;
  bVar1 = UE::Dataflow::Private::SetAttributeValues<int,UE::Math::TIntVector4<int>,4>
                    (param_1,param_2,param_4,(int *)local_18,false);
  if (bVar1) {
    local_18[0] = 0.0;
    bVar1 = UE::Dataflow::Private::SetAttributeValues<float,UE::Math::TVector4<float>,4>
                      (param_1,param_3,param_5,local_18,true);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

