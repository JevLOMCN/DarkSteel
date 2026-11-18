// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionDepNodes
// Functions: 23

// StaticStruct @ 14e96a500

UScriptStruct * __cdecl FGeometryCollectionTransferVertexScalarAttributeNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode
                         ,(UObject *)pUVar1,L"GeometryCollectionTransferVertexScalarAttributeNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode.
         OuterSingleton;
}

// GetType @ 14e96a540

FName __thiscall
FGeometryCollectionTransferVertexScalarAttributeNode::GetType
          (FGeometryCollectionTransferVertexScalarAttributeNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGeometryCollectionTransferVertexScalarAttributeNode");
  return in_RDX;
}

// IsA @ 14e96a570

bool __thiscall
FGeometryCollectionTransferVertexScalarAttributeNode::IsA
          (FGeometryCollectionTransferVertexScalarAttributeNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGeometryCollectionTransferVertexScalarAttributeNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e96a5d8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e96a5d8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e96a5f6;
      }
    }
  }
  bVar5 = true;
LAB_14e96a5f6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e96a630

FStructOnScope * __thiscall
FGeometryCollectionTransferVertexScalarAttributeNode::NewStructOnScope
          (FGeometryCollectionTransferVertexScalarAttributeNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
      Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode
                           ,(UObject *)pUVar2,L"GeometryCollectionTransferVertexScalarAttributeNode"
                          );
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e96a6b0

void __thiscall
FGeometryCollectionTransferVertexScalarAttributeNode::SerializeInternal
          (FGeometryCollectionTransferVertexScalarAttributeNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode
                         ,(UObject *)pUVar1,L"GeometryCollectionTransferVertexScalarAttributeNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e96a72d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e96a740

FName __thiscall
FGeometryCollectionTransferVertexScalarAttributeNode::GetDisplayName
          (FGeometryCollectionTransferVertexScalarAttributeNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"TransferVertexScalarAttribute");
  return in_RDX;
}

// GetCategory @ 14e96a770

FName __thiscall
FGeometryCollectionTransferVertexScalarAttributeNode::GetCategory
          (FGeometryCollectionTransferVertexScalarAttributeNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection");
  return in_RDX;
}

// GetTags @ 14e96a7a0

FString * __thiscall
FGeometryCollectionTransferVertexScalarAttributeNode::GetTags
          (FGeometryCollectionTransferVertexScalarAttributeNode *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "Transfer a named scalar attribute from the Source Collection to the Target Collection"
                    );
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e96a7d0

UScriptStruct * __thiscall
FGeometryCollectionTransferVertexScalarAttributeNode::TypedScriptStruct
          (FGeometryCollectionTransferVertexScalarAttributeNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode
                         ,(UObject *)pUVar1,L"GeometryCollectionTransferVertexScalarAttributeNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode.
         OuterSingleton;
}

// GetRenderParametersImpl @ 14e96a810

/* WARNING: Removing unreachable block (ram,0x00014e96aa48) */
/* WARNING: Removing unreachable block (ram,0x00014e96aa56) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FGeometryCollectionTransferVertexScalarAttributeNode::GetRenderParametersImpl
          (FGeometryCollectionTransferVertexScalarAttributeNode *this,
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

// Evaluate @ 14e96aa90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGeometryCollectionTransferVertexScalarAttributeNode::Evaluate
          (FGeometryCollectionTransferVertexScalarAttributeNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FCollectionAttributeKey *pFVar1;
  FManagedArrayCollection *pFVar2;
  FProperty *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FDataflowInput *pFVar9;
  FCollectionAttributeKey *pFVar10;
  undefined1 *puVar11;
  FManagedArrayCollection *pFVar12;
  FString *pFVar13;
  FString *pFVar14;
  TManagedArray<float> *pTVar15;
  FDataflowOutput *this_00;
  FTimestamp FVar16;
  FGuid *pFVar17;
  ulong64 uVar18;
  FContextCacheElementUStruct *pFVar19;
  FContextCacheElementUStruct *pFVar20;
  uint uVar21;
  undefined1 auStackY_678 [32];
  undefined1 local_648 [8];
  FContextCacheElementUStruct *local_640;
  FCollectionAttributeKey local_638;
  FManagedArrayCollection *local_618;
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> local_610;
  FConnectionReference local_600;
  FConnectionReference local_5e8;
  FConnectionReference local_5d0;
  FConnectionReference local_5b8;
  FGuid local_598;
  FCollectionAttributeKey local_588;
  FCollectionAttributeKey local_568;
  FString local_548;
  FString local_538;
  FGuid local_528;
  FTransferFacade local_518;
  FTransferFacade local_308;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_678;
  local_5d0.Index = -1;
  pFVar1 = &this->AttributeKey;
  pFVar20 = (FContextCacheElementUStruct *)0x0;
  local_5d0.ContainerReference = (void *)0x0;
  local_5d0.Reference = pFVar1;
  pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5d0);
  pFVar10 = FDataflowInput::GetValue<FCollectionAttributeKey>(pFVar9,param_1,pFVar1);
  ::FString::FString(&local_638.Attribute,&pFVar10->Attribute);
  ::FString::FString(&local_638.Group,&pFVar10->Group);
  pFVar2 = &this->Collection;
  puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar11 == pFVar2) {
    local_600.Index = -1;
    local_600.ContainerReference = (void *)0x0;
    local_600.Reference = pFVar2;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_600);
    pFVar12 = FDataflowInput::GetValue<FManagedArrayCollection>(pFVar9,param_1,local_600.Reference);
    FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar12);
    local_5e8.Reference = &this->FromCollection;
    local_5e8.Index = -1;
    local_5e8.ContainerReference = (void *)0x0;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5e8);
    pFVar12 = FDataflowInput::GetValue<FManagedArrayCollection>(pFVar9,param_1,local_5e8.Reference);
    local_618 = pFVar12;
    UE::Private::FTransferFacade::FTransferFacade(&local_518,&local_f8);
    UE::Private::FTransferFacade::FTransferFacade(&local_308,pFVar12);
    if (((((((local_518.BoneMap.ConstAttributeArray != (TManagedArray<int> *)0x0) &&
            (local_518.Vertex.ConstAttributeArray != (TManagedArray<UE::Math::TVector<float>_> *)0x0
            )) && (local_518.Indices.ConstAttributeArray !=
                   (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0)) &&
          ((local_518.Transform.ConstAttributeArray !=
            (TManagedArray<UE::Math::TTransform<float>_> *)0x0 &&
           (local_518.Parent.ConstAttributeArray != (TManagedArray<int> *)0x0)))) &&
         (((local_518.VertexStart.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
           ((local_518.VertexCount.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
            (local_518.FaceStart.ConstAttributeArray != (TManagedArray<int> *)0x0)))) &&
          (local_518.FaceCount.ConstAttributeArray != (TManagedArray<int> *)0x0)))) &&
        ((((local_308.BoneMap.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
           (local_308.Vertex.ConstAttributeArray != (TManagedArray<UE::Math::TVector<float>_> *)0x0)
           ) && (local_308.Indices.ConstAttributeArray !=
                 (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0)) &&
         (((local_308.Transform.ConstAttributeArray !=
            (TManagedArray<UE::Math::TTransform<float>_> *)0x0 &&
           (local_308.Parent.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
          ((local_308.VertexStart.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
           ((local_308.VertexCount.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
            (local_308.FaceStart.ConstAttributeArray != (TManagedArray<int> *)0x0)))))))))) &&
       (local_308.FaceCount.ConstAttributeArray != (TManagedArray<int> *)0x0)) {
      pFVar13 = ::FString::FString(&local_548,&local_638.Group);
      pFVar14 = ::FString::FString(&local_538,&local_638.Attribute);
      pTVar15 = UE::Private::FTransferFacade::GetFloatArray(&local_518,pFVar14,pFVar13);
      if (pTVar15 != (TManagedArray<float> *)0x0) {
        pFVar19 = pFVar20;
        if (0 < *(int *)&pTVar15->field_0x18) {
          do {
            uVar21 = (uint)pFVar20;
            uVar8 = 0;
            if ((int)uVar21 < *(int *)&pTVar15->field_0x18) {
              uVar8 = ~uVar21 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar20 = (FContextCacheElementUStruct *)(ulonglong)(uVar21 + 1);
            *(undefined4 *)((longlong)&pFVar19->_padding_ + *(longlong *)&pTVar15->field_0x10) = 0;
            pFVar19 = (FContextCacheElementUStruct *)((longlong)&pFVar19->_padding_ + 4);
          } while ((int)(uVar21 + 1) < *(int *)&pTVar15->field_0x18);
        }
        FindSourceToTargetGeometryMap(this,&local_610,local_618,&local_f8);
        iVar7 = FManagedArrayCollection::NumElements(&local_f8,FGeometryCollection::GeometryGroup);
        if (local_610.ArrayNum == iVar7) {
          ::FString::FString(&local_588.Attribute,&local_638.Attribute);
          ::FString::FString(&local_588.Group,&local_638.Group);
          PairedGeometryTransfer(this,&local_588,&local_610,&local_308,&local_518,pTVar15);
        }
        else {
          ::FString::FString(&local_568.Attribute,&local_638.Attribute);
          ::FString::FString(&local_568.Group,&local_638.Group);
          NearestVertexTransfer(this,&local_568,&local_308,&local_518,pTVar15);
        }
        if (local_610.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_610.AllocatorInstance.Data);
        }
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_f8,pFVar2);
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  }
  else {
    puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FCollectionAttributeKey *)puVar11 == pFVar1) {
      local_5b8.Index = -1;
      local_5b8.ContainerReference = (void *)0x0;
      local_5b8.Reference = pFVar1;
      this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_5b8);
      if (this_00 == (FDataflowOutput *)0x0) {
        `FDataflowNode::SetValue<FCollectionAttributeKey,FCollectionAttributeKey>'::__l7::<lambda_1>
        ::operator()(local_648);
      }
      else if (this_00->_padding_ != 0) {
        FVar16 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
        uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
        pFVar17 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_528);
        pFVar3 = (FProperty *)this_00->_padding_;
        uVar18 = CityHash64((char *)&this_00->_padding_,0x10);
        local_640 = (FContextCacheElementUStruct *)0x0;
        pFVar19 = ::operator_new(0x58);
        if (pFVar19 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
          local_598.A = pFVar17->A;
          local_598.B = pFVar17->B;
          local_598.C = pFVar17->C;
          local_598.D = pFVar17->D;
          pFVar20 = UE::Dataflow::FContextCacheElementUStruct::
                    FContextCacheElementUStruct<FCollectionAttributeKey>
                              (pFVar19,&local_598,pFVar3,&local_638,uVar8,(FTimestamp)*FVar16.Value)
          ;
        }
        pFVar19 = local_640;
        if (local_640 != (FContextCacheElementUStruct *)0x0) {
          plVar5 = &local_640->_padding_;
          local_640 = pFVar20;
          (**(code **)*plVar5)(pFVar19,1);
          pFVar20 = local_640;
        }
        local_640 = pFVar20;
        if (local_640 == (FContextCacheElementUStruct *)0x0) {
          UE::Dataflow::FContext::SetNullData
                    (param_1,(uint)uVar18,pFVar3,pFVar17,uVar8,(FTimestamp *)FVar16.Value);
        }
        else {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar18 & 0xffffffff,&local_640);
        }
        if (local_640 != (FContextCacheElementUStruct *)0x0) {
          (**(code **)local_640->_padding_)(local_640,1);
        }
      }
    }
  }
  if (local_638.Group.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Group.Data.AllocatorInstance.Data);
  }
  if (local_638.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Attribute.Data.AllocatorInstance.Data);
  }
  return;
}

// FGeometryCollectionTransferVertexScalarAttributeNode @ 14e96b4e0

FGeometryCollectionTransferVertexScalarAttributeNode * __thiscall
FGeometryCollectionTransferVertexScalarAttributeNode::
FGeometryCollectionTransferVertexScalarAttributeNode
          (FGeometryCollectionTransferVertexScalarAttributeNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FCollectionAttributeKey *this_01;
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FGeometryCollectionTransferVertexScalarAttributeNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  FManagedArrayCollection::FManagedArrayCollection(&this->FromCollection);
  this_01 = &this->AttributeKey;
  ::FString::FString(&this_01->Attribute,"");
  ::FString::FString(&(this->AttributeKey).Group,"");
  this->BoundingVolumeType = Dataflow_Transfer_Triangle;
  this->SampleScale = Dataflow_Transfer_Asset_Bound;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.ContainerReference = (void *)0x0;
  this->Falloff = Dataflow_Transfer_Squared;
  this->FalloffThreshold = 0.01;
  this->EdgeMultiplier = 0.5;
  this->BoundMultiplier = 0.01;
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
  local_58.Reference = this_01;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_01;
  local_38.Reference = this_01;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FCollectionAttributeKey *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  return this;
}

// FGeometryCollectionTransferVertexScalarAttributeNode @ 14e96b6b0

FGeometryCollectionTransferVertexScalarAttributeNode * __thiscall
FGeometryCollectionTransferVertexScalarAttributeNode::
FGeometryCollectionTransferVertexScalarAttributeNode
          (FGeometryCollectionTransferVertexScalarAttributeNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGeometryCollectionTransferVertexScalarAttributeNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  FManagedArrayCollection::FManagedArrayCollection(&this->FromCollection);
  ::FString::FString(&(this->AttributeKey).Attribute,"");
  ::FString::FString(&(this->AttributeKey).Group,"");
  this->BoundingVolumeType = Dataflow_Transfer_Triangle;
  this->SampleScale = Dataflow_Transfer_Asset_Bound;
  this->Falloff = Dataflow_Transfer_Squared;
  this->FalloffThreshold = 0.01;
  this->EdgeMultiplier = 0.5;
  this->BoundMultiplier = 0.01;
  return this;
}

// operator() @ 14e96bbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FGeometryCollectionTransferVertexScalarAttributeNode::PairedGeometryTransfer'::__l5::<lambda_1>::
operator()(void *this,int param_1)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  TManagedArray<float> *pTVar11;
  code *pcVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  int iVar18;
  int *piVar19;
  TManagedArray<UE::Math::TVector<float>_> *pTVar20;
  TManagedArray<int> *pTVar21;
  TManagedArray<int> *pTVar22;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar23;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar24;
  uint *puVar25;
  longlong lVar26;
  TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *pTVar27;
  TIntVector3<int> *pTVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  uint uVar33;
  ulonglong uVar34;
  uint uVar35;
  ulonglong uVar36;
  FScriptContainerElement *pFVar37;
  longlong lVar38;
  FScriptContainerElement *pFVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  ulonglong uVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStackY_458 [32];
  undefined1 local_400 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_3f8;
  undefined1 local_3e8 [4];
  uint local_3e4;
  ulonglong local_3e0;
  TIntVector3<int>_u_0 local_3d8;
  ForAnyElementType local_3c8;
  undefined8 local_3c0;
  uint local_3b8;
  int local_3b4;
  ForAnyElementType local_3b0;
  int local_3a8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_3a0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_390;
  float local_380;
  float local_37c;
  float local_378;
  uint local_370;
  uint uStack_36c;
  uint local_368;
  TArray<Chaos::TTriangleCollisionPoint<double>,TSizedDefaultAllocator<32>_> local_360;
  longlong local_350;
  TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *local_348;
  undefined8 local_340;
  int local_338;
  float local_330;
  float local_32c;
  float local_328;
  float local_320;
  float local_31c;
  float local_318;
  float local_310;
  float local_30c;
  float local_308;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  TArrayView<Chaos::TVector<double,3>_const_,int> local_2e0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_2d0;
  code *local_2c0;
  undefined1 *local_2b8;
  TVector<double,3> local_2b0;
  undefined1 local_298 [40];
  undefined1 local_270 [64];
  void *local_230;
  undefined4 local_228;
  ForAnyElementType local_220;
  undefined8 local_218;
  FTriangleMesh local_208;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_458;
  plVar9 = *(longlong **)this;
  uVar44 = 0;
  if (param_1 < (int)plVar9[1]) {
    uVar44 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar44 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  plVar10 = *(longlong **)this;
  iVar41 = *(int *)(*plVar9 + (longlong)param_1 * 8);
  uVar44 = 0;
  if (param_1 < (int)plVar10[1]) {
    uVar44 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar44 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar6 = *(int *)(*plVar10 + 4 + (longlong)param_1 * 8);
  if (-1 < iVar41) {
    lVar38 = *(longlong *)((longlong)this + 8);
    plVar9 = *(longlong **)(lVar38 + 0x158);
    if (plVar9 == (longlong *)0x0) {
      iVar18 = FManagedArrayCollection::NumElements
                         (*(FManagedArrayCollection **)(lVar38 + 0x128),*(FName *)(lVar38 + 0x140));
    }
    else {
      iVar18 = (**(code **)(*plVar9 + 0x60))(plVar9);
    }
    if (iVar41 < iVar18) {
      if (-1 < iVar6) {
        lVar38 = *(longlong *)((longlong)this + 0x10);
        plVar9 = *(longlong **)(lVar38 + 0x158);
        if (plVar9 == (longlong *)0x0) {
          iVar18 = FManagedArrayCollection::NumElements
                             (*(FManagedArrayCollection **)(lVar38 + 0x128),
                              *(FName *)(lVar38 + 0x140));
        }
        else {
          iVar18 = (**(code **)(*plVar9 + 0x60))(plVar9);
        }
        if (iVar6 < iVar18) {
          local_390.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_390.ArrayNum = 0;
          local_390.ArrayMax = 0;
          piVar19 = TManagedArrayAccessor<int>::operator[]
                              ((TManagedArrayAccessor<int> *)
                               (*(longlong *)((longlong)this + 0x10) + 0x160),iVar6);
          iVar18 = *piVar19;
          piVar19 = TManagedArrayAccessor<int>::operator[]
                              ((TManagedArrayAccessor<int> *)
                               (*(longlong *)((longlong)this + 0x10) + 0x128),iVar6);
          iVar7 = *piVar19;
          pTVar20 = TManagedArrayAccessor<UE::Math::TVector<float>_>::Get
                              ((TManagedArrayAccessor<UE::Math::TVector<float>_> *)
                               (*(longlong *)((longlong)this + 0x10) + 0x48));
          pTVar21 = TManagedArrayAccessor<int>::Get
                              ((TManagedArrayAccessor<int> *)
                               (*(longlong *)((longlong)this + 0x10) + 0x10));
          pTVar22 = TManagedArrayAccessor<int>::Get
                              ((TManagedArrayAccessor<int> *)
                               (*(longlong *)((longlong)this + 0x10) + 0xf0));
          pTVar23 = TManagedArrayAccessor<UE::Math::TTransform<float>_>::Get
                              ((TManagedArrayAccessor<UE::Math::TTransform<float>_> *)
                               (*(longlong *)((longlong)this + 0x10) + 0xb8));
          FGeometryCollectionTransferVertexScalarAttributeNode::BuildComponentSpaceVertices
                    (pTVar23,pTVar22,pTVar21,pTVar20,iVar7,iVar18,&local_390);
          local_3f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3f8.ArrayNum = 0;
          local_3f8.ArrayMax = 0;
          piVar19 = TManagedArrayAccessor<int>::operator[]
                              ((TManagedArrayAccessor<int> *)
                               (*(longlong *)((longlong)this + 8) + 0x160),iVar41);
          iVar18 = *piVar19;
          piVar19 = TManagedArrayAccessor<int>::operator[]
                              ((TManagedArrayAccessor<int> *)
                               (*(longlong *)((longlong)this + 8) + 0x128),iVar41);
          iVar7 = *piVar19;
          pTVar20 = TManagedArrayAccessor<UE::Math::TVector<float>_>::Get
                              ((TManagedArrayAccessor<UE::Math::TVector<float>_> *)
                               (*(longlong *)((longlong)this + 8) + 0x48));
          pTVar21 = TManagedArrayAccessor<int>::Get
                              ((TManagedArrayAccessor<int> *)
                               (*(longlong *)((longlong)this + 8) + 0x10));
          pTVar22 = TManagedArrayAccessor<int>::Get
                              ((TManagedArrayAccessor<int> *)
                               (*(longlong *)((longlong)this + 8) + 0xf0));
          pTVar23 = TManagedArrayAccessor<UE::Math::TTransform<float>_>::Get
                              ((TManagedArrayAccessor<UE::Math::TTransform<float>_> *)
                               (*(longlong *)((longlong)this + 8) + 0xb8));
          FGeometryCollectionTransferVertexScalarAttributeNode::BuildComponentSpaceVertices
                    (pTVar23,pTVar22,pTVar21,pTVar20,iVar7,iVar18,&local_3f8);
          dVar1 = **(double **)((longlong)this + 0x18);
          if (*(char *)(*(longlong *)((longlong)this + 0x20) + 0x3c9) == '\0') {
            piVar19 = TManagedArrayAccessor<int>::operator[]
                                ((TManagedArrayAccessor<int> *)
                                 (*(longlong *)((longlong)this + 8) + 0x1d0),iVar41);
            iVar18 = *piVar19;
            piVar19 = TManagedArrayAccessor<int>::operator[]
                                ((TManagedArrayAccessor<int> *)
                                 (*(longlong *)((longlong)this + 8) + 0x198),iVar41);
            iVar7 = *piVar19;
            piVar19 = TManagedArrayAccessor<int>::operator[]
                                ((TManagedArrayAccessor<int> *)
                                 (*(longlong *)((longlong)this + 8) + 0x128),iVar41);
            iVar8 = *piVar19;
            pTVar24 = TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::Get
                                ((TManagedArrayAccessor<UE::Math::TIntVector3<int>_> *)
                                 (*(longlong *)((longlong)this + 8) + 0x80));
            fVar45 = FGeometryCollectionTransferVertexScalarAttributeNode::MaxEdgeLength
                               (&local_3f8,pTVar24,iVar8,iVar7,iVar18);
            piVar19 = TManagedArrayAccessor<int>::operator[]
                                ((TManagedArrayAccessor<int> *)
                                 (*(longlong *)((longlong)this + 0x10) + 0x1d0),iVar6);
            iVar18 = *piVar19;
            piVar19 = TManagedArrayAccessor<int>::operator[]
                                ((TManagedArrayAccessor<int> *)
                                 (*(longlong *)((longlong)this + 0x10) + 0x198),iVar6);
            iVar7 = *piVar19;
            piVar19 = TManagedArrayAccessor<int>::operator[]
                                ((TManagedArrayAccessor<int> *)
                                 (*(longlong *)((longlong)this + 0x10) + 0x128),iVar6);
            iVar8 = *piVar19;
            pTVar24 = TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::Get
                                ((TManagedArrayAccessor<UE::Math::TIntVector3<int>_> *)
                                 (*(longlong *)((longlong)this + 0x10) + 0x80));
            fVar46 = FGeometryCollectionTransferVertexScalarAttributeNode::MaxEdgeLength
                               (&local_390,pTVar24,iVar8,iVar7,iVar18);
            if (fVar46 <= fVar45) {
              fVar46 = fVar45;
            }
            dVar1 = (double)(fVar46 * *(float *)(*(longlong *)((longlong)this + 0x20) + 0x3d0));
          }
          piVar19 = TManagedArrayAccessor<int>::operator[]
                              ((TManagedArrayAccessor<int> *)
                               (*(longlong *)((longlong)this + 0x10) + 0x128),iVar6);
          local_3b4 = *piVar19;
          puVar25 = (uint *)TManagedArrayAccessor<int>::operator[]
                                      ((TManagedArrayAccessor<int> *)
                                       (*(longlong *)((longlong)this + 0x10) + 0x160),iVar6);
          local_3e4 = *puVar25;
          piVar19 = TManagedArrayAccessor<int>::operator[]
                              ((TManagedArrayAccessor<int> *)
                               (*(longlong *)((longlong)this + 8) + 0x128),iVar41);
          iVar6 = *piVar19;
          puVar25 = (uint *)TManagedArrayAccessor<int>::operator[]
                                      ((TManagedArrayAccessor<int> *)
                                       (*(longlong *)((longlong)this + 8) + 0x198),iVar41);
          uVar44 = *puVar25;
          puVar25 = (uint *)TManagedArrayAccessor<int>::operator[]
                                      ((TManagedArrayAccessor<int> *)
                                       (*(longlong *)((longlong)this + 8) + 0x1d0),iVar41);
          uVar33 = *puVar25;
          uVar34 = (ulonglong)uVar33;
          cVar5 = *(char *)(*(longlong *)((longlong)this + 0x20) + 0x3c8);
          if (cVar5 == '\x01') {
            uVar31 = local_3f8._8_8_ & 0xffffffff;
            uVar40 = 0;
            uVar43 = 0;
            local_3c8.Data = (FScriptContainerElement *)0x0;
            local_3c0 = 0;
            if (local_3f8.ArrayNum < 1) {
              uVar36 = uVar43;
              if (local_3f8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum(uVar31);
              }
            }
            else {
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,local_3f8.ArrayNum,&local_3c8,(int *)&local_3c0,
                         (int *)((longlong)&local_3c0 + 4));
              uVar31 = local_3f8._8_8_ & 0xffffffff;
              uVar36 = local_3c0 & 0xffffffff;
            }
            iVar41 = (int)uVar36;
            if (0 < (int)uVar36) {
              while( true ) {
                uVar29 = 0;
                if ((int)uVar40 < (int)uVar31) {
                  uVar29 = ~uVar40 >> 0x1f;
                }
                iVar41 = (int)uVar36;
                if (uVar29 == 0) {
                  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar17) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  iVar41 = (int)local_3c0;
                }
                uVar15 = *(undefined8 *)(local_3f8.AllocatorInstance.Data + uVar43);
                uVar16 = *(undefined8 *)(local_3f8.AllocatorInstance.Data + uVar43 + 8);
                uVar2 = *(undefined8 *)(local_3f8.AllocatorInstance.Data + uVar43 + 0x10);
                uVar29 = 0;
                if ((int)uVar40 < iVar41) {
                  uVar29 = ~uVar40 >> 0x1f;
                }
                if ((uVar29 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                uVar40 = uVar40 + 1;
                *(undefined8 *)(local_3c8.Data + uVar43) = uVar15;
                *(undefined8 *)(local_3c8.Data + uVar43 + 8) = uVar16;
                *(undefined8 *)(local_3c8.Data + uVar43 + 0x10) = uVar2;
                uVar43 = uVar43 + 0x18;
                uVar36 = local_3c0 & 0xffffffff;
                iVar41 = (int)local_3c0;
                if ((int)local_3c0 <= (int)uVar40) break;
                uVar31 = local_3f8._8_8_ & 0xffffffff;
              }
            }
            uVar31 = 0;
            local_2e0.DataPtr = (TVector<double,3> *)local_3c8.Data;
            if ((iVar41 < 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_2e0.ArrayNum = iVar41;
            Chaos::FTriangleMesh::FTriangleMesh(&local_208);
            local_3b0.Data = (FScriptContainerElement *)0x0;
            local_3a8[0] = 0;
            local_3a8[1] = 0;
            if ((int)uVar33 < 1) {
              if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum(uVar34);
              }
            }
            else {
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,uVar33,&local_3b0,local_3a8,local_3a8 + 1);
            }
            lVar38 = (longlong)(int)uVar33;
            if (0 < (int)uVar33) {
              uVar43 = (ulonglong)(int)uVar44;
              local_3e0 = uVar43 * 0xc;
              uVar34 = uVar31;
              do {
                uVar36 = local_3e0;
                lVar26 = *(longlong *)((longlong)this + 8);
                if ((*(longlong *)(lVar26 + 0xb0) == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x60,L""), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                lVar26 = *(longlong *)(lVar26 + 0xb0);
                uVar33 = (uint)uVar34;
                uVar29 = uVar33 + (int)uVar43;
                uVar40 = 0;
                if ((int)uVar29 < *(int *)(lVar26 + 0x18)) {
                  uVar40 = ~uVar29 >> 0x1f;
                }
                if ((uVar40 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                lVar26 = *(longlong *)(lVar26 + 0x10) + uVar36;
                local_338 = *(int *)(lVar26 + 8 + uVar31);
                local_340 = *(undefined8 *)(lVar26 + uVar31);
                iVar18 = (int)local_340 - iVar6;
                uVar36 = (ulonglong)local_340 >> 0x20;
                iVar41 = local_338 - iVar6;
                uVar40 = 0;
                if ((int)uVar33 < local_3a8[0]) {
                  uVar40 = ~uVar33 >> 0x1f;
                }
                if ((uVar40 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                uVar34 = (ulonglong)(uVar33 + 1);
                *(int *)(local_3b0.Data + uVar31) = iVar18;
                uVar43 = (ulonglong)uVar44;
                *(int *)(local_3b0.Data + uVar31 + 4) = (int)uVar36 - iVar6;
                *(int *)(local_3b0.Data + uVar31 + 8) = iVar41;
                uVar31 = uVar31 + 0xc;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
            }
            iVar41 = local_3a8[0];
            local_2d0.DataPtr = (TVector<int,3> *)local_3b0.Data;
            if ((local_3a8[0] < 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_2d0.ArrayNum = iVar41;
            Chaos::FTriangleMesh::Init(&local_208,&local_2d0,0,-1,true);
            local_270._40_8_ = ___xmm_00000000ffffffff0000008000000000;
            local_270._48_8_ = _UNK_150631d98;
            local_298._32_4_ = 0;
            local_270._8_8_ = 0;
            local_218._0_4_ = 0;
            local_218._4_4_ = 0;
            local_298._0_8_ = (void *)0x0;
            local_298._8_8_ = 0;
            local_298._16_8_ = (void *)0x0;
            local_298._24_8_ = 0;
            local_270._0_8_ = 0;
            local_270._32_8_ = 0;
            local_230 = (void *)0x0;
            local_228 = 0;
            local_220.Data = (FScriptContainerElement *)0x0;
            Chaos::FTriangleMesh::BuildSpatialHash<double>
                      (&local_208,&local_2e0,(THierarchicalSpatialHash<int,double> *)local_298,dVar1
                      );
            uVar29 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            uVar40 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            uVar33 = __xmm_7fffffff7fffffff7fffffff7fffffff;
            fVar45 = __real_3f800000;
            fVar46 = __real_322bcc77;
            uVar34 = (ulonglong)(int)local_3e4;
            local_3b8 = 0;
            local_3e0 = uVar34;
            if (0 < (longlong)uVar34) {
              dVar1 = dVar1 * __real_3fe0000000000000;
              local_350 = 0;
              do {
                lVar38 = local_350;
                uVar42 = local_3b8;
                local_2b8 = local_3e8;
                local_2c0 = UE::Core::Private::Function::
                            TFunctionRefCaller<``FGeometryCollectionTransferVertexScalarAttributeNode::PairedGeometryTransfer'::__l5::<lambda_1>::operator()'::__l23::<lambda_1>,bool,int,int>
                            ::Call;
                local_360.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_360.ArrayNum = 0;
                local_360.ArrayMax = 0;
                uVar30 = 0;
                if ((int)local_3b8 < local_390.ArrayNum) {
                  uVar30 = ~local_3b8 >> 0x1f;
                }
                local_3e0 = uVar34;
                if ((uVar30 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                local_2b0._0_8_ = *(undefined8 *)(local_390.AllocatorInstance.Data + lVar38);
                local_2b0._8_8_ = *(undefined8 *)(local_390.AllocatorInstance.Data + lVar38 + 8);
                local_2b0._16_8_ = *(undefined8 *)(local_390.AllocatorInstance.Data + lVar38 + 0x10)
                ;
                auVar14._8_4_ = SUB84(dVar1,0);
                auVar14._0_8_ = dVar1;
                auVar14._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
                bVar17 = Chaos::FTriangleMesh::PointClosestTriangleQuery<double>
                                   (&local_208,(THierarchicalSpatialHash<int,double> *)local_298,
                                    &local_2e0,uVar42,&local_2b0,dVar1,auVar14._8_8_,
                                    (TFunctionRef<bool___cdecl(int,int)> *)&local_2c0,&local_360);
                if (bVar17) {
                  uVar31 = (ulonglong)local_360.ArrayNum;
                  local_3e4 = local_360.ArrayNum;
                  pFVar37 = local_360.AllocatorInstance.Data + 8;
                  pFVar39 = local_360.AllocatorInstance.Data + uVar31 * 0x70;
                  uVar34 = uVar31;
                  while( true ) {
                    if ((int)uVar31 != (int)uVar34) {
                      local_400[0] = 0;
                      `TCheckedPointerIterator<Chaos::TTriangleCollisionPoint<double>,int,0>::
                      operator!='::__l2::<lambda_1>::operator()(local_400);
                    }
                    uVar34 = local_3e0;
                    lVar38 = local_350;
                    uVar42 = local_3b8;
                    if (pFVar37 + -8 == pFVar39) break;
                    lVar38 = *(longlong *)((longlong)this + 8);
                    iVar41 = *(int *)pFVar37;
                    fVar49 = (float)(double)CONCAT44((uint)((ulonglong)
                                                            *(undefined8 *)(pFVar37 + 0x58) >> 0x20)
                                                     & uVar29,(uint)*(undefined8 *)(pFVar37 + 0x58)
                                                              & uVar40);
                    if ((*(longlong *)(lVar38 + 0xb0) == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                            ,0x67,L""), bVar17)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    lVar26 = *(longlong *)((longlong)this + 0x20);
                    fVar48 = *(float *)(lVar26 + 0x3cc);
                    fVar47 = FGeometryCollectionTransferVertexScalarAttributeNode::MaxEdgeLength
                                       (&local_3f8,
                                        *(TManagedArray<UE::Math::TIntVector3<int>_> **)
                                         (lVar38 + 0xb0),iVar6,iVar41 + uVar44,1);
                    fVar47 = fVar47 * fVar48;
                    fVar48 = fVar45;
                    if ((fVar47 < fVar49) && (fVar46 < (float)((uint)fVar47 & uVar33))) {
                      fVar48 = fVar49 / fVar47;
                    }
                    cVar5 = *(char *)(lVar26 + 0x3ca);
                    if (cVar5 == '\0') {
                      fVar48 = fVar48 * fVar48;
LAB_14e96c65c:
                      fVar49 = fVar45 / fVar48;
                    }
                    else {
                      fVar49 = fVar45;
                      if (cVar5 == '\x01') goto LAB_14e96c65c;
                    }
                    if (fVar46 < (float)((uint)fVar49 & uVar33)) {
                      uVar42 = *(int *)(pFVar37 + -4) + local_3b4;
                      if (((int)uVar42 < 0) ||
                         (iVar41 = (**(code **)(*(longlong *)
                                                 **(undefined8 **)((longlong)this + 0x28) + 0x60))()
                         , iVar41 <= (int)uVar42)) {
                        bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<1036655210895769866>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionDepNodes\\Private\\Dataflow\\GeometryCollectionTransferVertexScalarAttributeDepNode.cpp"
                                            ,0x10a,
                                            "0 <= TargetCandidateIndex && TargetCandidateIndex < TargetFloatArray->Num()"
                                           );
                        if (bVar17) {
                          pcVar12 = (code *)swi(3);
                          (*pcVar12)();
                          return;
                        }
                        goto LAB_14e96caa6;
                      }
                      lVar38 = *(longlong *)((longlong)this + 8);
                      uVar30 = *(int *)pFVar37 + uVar44;
                      lVar26 = **(longlong **)((longlong)this + 0x30);
                      if ((*(longlong *)(lVar38 + 0xb0) == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                              ,0x60,L""), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      lVar38 = *(longlong *)(lVar38 + 0xb0);
                      uVar35 = 0;
                      if ((int)uVar30 < *(int *)(lVar38 + 0x18)) {
                        uVar35 = ~uVar30 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      uVar30 = *(uint *)(*(longlong *)(lVar38 + 0x10) + (longlong)(int)uVar30 * 0xc)
                      ;
                      uVar35 = 0;
                      if ((int)uVar30 < *(int *)(lVar26 + 0x18)) {
                        uVar35 = ~uVar30 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      lVar38 = *(longlong *)((longlong)this + 8);
                      dVar13 = (double)fVar49;
                      fVar49 = *(float *)(*(longlong *)(lVar26 + 0x10) + (longlong)(int)uVar30 * 4);
                      uVar30 = *(int *)pFVar37 + uVar44;
                      lVar26 = **(longlong **)((longlong)this + 0x30);
                      dVar3 = *(double *)(pFVar37 + 8);
                      if ((*(longlong *)(lVar38 + 0xb0) == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                              ,0x60,L""), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      lVar38 = *(longlong *)(lVar38 + 0xb0);
                      uVar35 = 0;
                      if ((int)uVar30 < *(int *)(lVar38 + 0x18)) {
                        uVar35 = ~uVar30 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      uVar30 = *(uint *)(*(longlong *)(lVar38 + 0x10) + 4 +
                                        (longlong)(int)uVar30 * 0xc);
                      uVar35 = 0;
                      if ((int)uVar30 < *(int *)(lVar26 + 0x18)) {
                        uVar35 = ~uVar30 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      lVar38 = *(longlong *)((longlong)this + 8);
                      fVar48 = *(float *)(*(longlong *)(lVar26 + 0x10) + (longlong)(int)uVar30 * 4);
                      uVar30 = *(int *)pFVar37 + uVar44;
                      lVar26 = **(longlong **)((longlong)this + 0x30);
                      dVar4 = *(double *)(pFVar37 + 0x10);
                      if ((*(longlong *)(lVar38 + 0xb0) == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                              ,0x60,L""), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      lVar38 = *(longlong *)(lVar38 + 0xb0);
                      uVar35 = 0;
                      if ((int)uVar30 < *(int *)(lVar38 + 0x18)) {
                        uVar35 = ~uVar30 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      uVar30 = *(uint *)(*(longlong *)(lVar38 + 0x10) + 8 +
                                        (longlong)(int)uVar30 * 0xc);
                      uVar35 = 0;
                      if ((int)uVar30 < *(int *)(lVar26 + 0x18)) {
                        uVar35 = ~uVar30 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      lVar38 = **(longlong **)((longlong)this + 0x28);
                      uVar35 = 0;
                      if ((int)uVar42 < *(int *)(lVar38 + 0x18)) {
                        uVar35 = ~uVar42 >> 0x1f;
                      }
                      fVar49 = (float)((double)*(float *)(*(longlong *)(lVar26 + 0x10) +
                                                         (longlong)(int)uVar30 * 4) *
                                       *(double *)(pFVar37 + 0x18) * dVar13 +
                                      (double)(float)((double)fVar48 * dVar4 * dVar13 +
                                                     (double)(float)((double)fVar49 * dVar3 * dVar13
                                                                    )));
                      if ((uVar35 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      fVar48 = *(float *)(*(longlong *)(lVar38 + 0x10) + (longlong)(int)uVar42 * 4);
                      if (fVar48 <= fVar49) {
                        fVar48 = fVar49;
                      }
                      lVar38 = **(longlong **)((longlong)this + 0x28);
                      uVar30 = 0;
                      if ((int)uVar42 < *(int *)(lVar38 + 0x18)) {
                        uVar30 = ~uVar42 >> 0x1f;
                      }
                      if ((uVar30 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      pFVar37 = pFVar37 + 0x70;
                      uVar34 = (ulonglong)local_3e4;
                      *(float *)(*(longlong *)(lVar38 + 0x10) + (longlong)(int)uVar42 * 4) = fVar48;
                      uVar31 = local_360._8_8_ & 0xffffffff;
                    }
                    else {
LAB_14e96caa6:
                      uVar31 = local_360._8_8_ & 0xffffffff;
                      pFVar37 = pFVar37 + 0x70;
                      uVar34 = (ulonglong)local_3e4;
                    }
                  }
                }
                if (local_360.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_360.AllocatorInstance.Data);
                }
                local_3b8 = uVar42 + 1;
                local_350 = lVar38 + 0x18;
                uVar34 = uVar34 - 1;
                local_3e0 = uVar34;
              } while (uVar34 != 0);
            }
            if (local_220.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_220.Data);
            }
            local_228 = 0;
            if (local_230 != (void *)0x0) {
              FMemory::Free(local_230);
            }
            TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_270);
            if ((void *)local_298._16_8_ != (void *)0x0) {
              FMemory::Free((void *)local_298._16_8_);
            }
            if ((void *)local_298._0_8_ != (void *)0x0) {
              FMemory::Free((void *)local_298._0_8_);
            }
            if (local_3b0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3b0.Data);
            }
            Chaos::FTriangleMesh::~FTriangleMesh(&local_208);
            if (local_3c8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3c8.Data);
            }
          }
          else if (cVar5 == '\0') {
            pTVar27 = FGeometryCollectionTransferVertexScalarAttributeNode::BuildParticleSphereBVH
                                (&local_390,(float)dVar1);
            uVar40 = __xmm_7fffffff7fffffff7fffffff7fffffff;
            fVar45 = __real_3f800000;
            fVar46 = __real_322bcc77;
            local_348 = pTVar27;
            if (0 < (int)uVar33) {
              do {
                local_3e0 = uVar34;
                pTVar28 = TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::operator[]
                                    ((TManagedArrayAccessor<UE::Math::TIntVector3<int>_> *)
                                     (*(longlong *)((longlong)this + 8) + 0x80),uVar44);
                local_3d8._s_0.Z = (pTVar28->field0_0x0)._s_0.Z - iVar6;
                uStack_36c = (uint)((ulonglong)*(undefined8 *)&pTVar28->field0_0x0 >> 0x20);
                local_370 = (uint)*(undefined8 *)&pTVar28->field0_0x0;
                local_3d8._s_0.Y = uStack_36c - iVar6;
                local_3d8._s_0.X = local_370 - iVar6;
                _local_370 = CONCAT44(local_3d8._s_0.Y,local_3d8._s_0.X);
                pTVar11 = (TManagedArray<float> *)**(undefined8 **)((longlong)this + 0x30);
                local_368 = local_3d8._s_0.Z;
                pTVar28 = TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::operator[]
                                    ((TManagedArrayAccessor<UE::Math::TIntVector3<int>_> *)
                                     (*(longlong *)((longlong)this + 8) + 0x80),uVar44);
                bVar17 = FGeometryCollectionTransferVertexScalarAttributeNode::
                         TriangleHasWeightsToTransfer(pTVar28,pTVar11);
                if (bVar17) {
                  uVar33 = 0;
                  local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_3a0.ArrayNum = 0;
                  local_3a0.ArrayMax = 0;
                  FGeometryCollectionTransferVertexScalarAttributeNode::
                  TriangleToVertexIntersections
                            (pTVar27,&local_3f8,(TIntVector3<int> *)&local_3d8._s_0,&local_3a0);
                  if (0 < local_3a0.ArrayNum) {
                    lVar38 = 0;
                    do {
                      lVar26 = (longlong)local_3d8._s_0.X;
                      uVar29 = 0;
                      if (local_3d8._s_0.X < local_3f8.ArrayNum) {
                        uVar29 = (uint)~local_3d8._s_0.X >> 0x1f;
                      }
                      if (uVar29 == 0) {
                        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar17) {
                          pcVar12 = (code *)swi(3);
                          (*pcVar12)();
                          return;
                        }
                      }
                      lVar32 = (longlong)local_3d8._s_0.Y;
                      local_310 = (float)*(double *)
                                          (local_3f8.AllocatorInstance.Data + lVar26 * 0x18);
                      local_30c = (float)*(double *)
                                          (local_3f8.AllocatorInstance.Data + lVar26 * 0x18 + 8);
                      local_308 = (float)*(double *)
                                          (local_3f8.AllocatorInstance.Data + lVar26 * 0x18 + 0x10);
                      uVar29 = 0;
                      if (local_3d8._s_0.Y < local_3f8.ArrayNum) {
                        uVar29 = (uint)~local_3d8._s_0.Y >> 0x1f;
                      }
                      iVar41 = local_3f8.ArrayNum;
                      if (uVar29 == 0) {
                        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar17) {
                          pcVar12 = (code *)swi(3);
                          (*pcVar12)();
                          return;
                        }
                        iVar41 = local_3f8.ArrayNum;
                      }
                      lVar26 = (longlong)local_3d8._s_0.Z;
                      local_318 = (float)*(double *)
                                          (local_3f8.AllocatorInstance.Data + lVar32 * 0x18 + 0x10);
                      uVar29 = 0;
                      if (local_3d8._s_0.Z < iVar41) {
                        uVar29 = (uint)~local_3d8._s_0.Z >> 0x1f;
                      }
                      local_31c = (float)*(double *)
                                          (local_3f8.AllocatorInstance.Data + lVar32 * 0x18 + 8);
                      local_320 = (float)*(double *)
                                          (local_3f8.AllocatorInstance.Data + lVar32 * 0x18);
                      if ((uVar29 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      local_328 = (float)*(double *)
                                          (local_3f8.AllocatorInstance.Data + lVar26 * 0x18 + 0x10);
                      uVar29 = 0;
                      if ((int)uVar33 < local_3a0.ArrayNum) {
                        uVar29 = ~uVar33 >> 0x1f;
                      }
                      local_32c = (float)*(double *)
                                          (local_3f8.AllocatorInstance.Data + lVar26 * 0x18 + 8);
                      local_330 = (float)*(double *)
                                          (local_3f8.AllocatorInstance.Data + lVar26 * 0x18);
                      if ((uVar29 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      uVar29 = *(uint *)(local_3a0.AllocatorInstance.Data + lVar38);
                      lVar26 = (longlong)(int)uVar29;
                      uVar42 = 0;
                      if ((int)uVar29 < local_390.ArrayNum) {
                        uVar42 = ~uVar29 >> 0x1f;
                      }
                      if ((uVar42 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      local_378 = (float)*(double *)
                                          (local_390.AllocatorInstance.Data + lVar26 * 0x18 + 0x10);
                      local_37c = (float)*(double *)
                                          (local_390.AllocatorInstance.Data + lVar26 * 0x18 + 8);
                      local_380 = (float)*(double *)
                                          (local_390.AllocatorInstance.Data + lVar26 * 0x18);
                      Chaos::FindClosestPointAndBaryOnTriangle<float,3>
                                ((TVector<float,3> *)&local_300,(TVector<float,3> *)&local_310,
                                 (TVector<float,3> *)&local_320,(TVector<float,3> *)&local_330,
                                 (TVector<float,3> *)&local_380,(TVector<float,3> *)&local_2f0);
                      lVar26 = *(longlong *)((longlong)this + 8);
                      fVar49 = SQRT((local_380 - local_300) * (local_380 - local_300) +
                                    (local_37c - local_2fc) * (local_37c - local_2fc) +
                                    (local_378 - local_2f8) * (local_378 - local_2f8));
                      if ((*(longlong *)(lVar26 + 0xb0) == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                              ,0x67,L""), bVar17)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      lVar32 = *(longlong *)((longlong)this + 0x20);
                      fVar48 = *(float *)(lVar32 + 0x3cc);
                      fVar47 = FGeometryCollectionTransferVertexScalarAttributeNode::MaxEdgeLength
                                         (&local_3f8,
                                          *(TManagedArray<UE::Math::TIntVector3<int>_> **)
                                           (lVar26 + 0xb0),iVar6,uVar44,1);
                      fVar47 = fVar47 * fVar48;
                      fVar48 = fVar45;
                      if ((fVar47 < fVar49) && (fVar46 < (float)((uint)fVar47 & uVar40))) {
                        fVar48 = fVar49 / fVar47;
                      }
                      cVar5 = *(char *)(lVar32 + 0x3ca);
                      if (cVar5 == '\0') {
                        fVar48 = fVar48 * fVar48;
LAB_14e96cfc0:
                        fVar49 = fVar45 / fVar48;
                      }
                      else {
                        fVar49 = fVar45;
                        if (cVar5 == '\x01') goto LAB_14e96cfc0;
                      }
                      if (fVar46 < (float)((uint)fVar49 & uVar40)) {
                        uVar29 = 0;
                        if ((int)uVar33 < local_3a0.ArrayNum) {
                          uVar29 = ~uVar33 >> 0x1f;
                        }
                        if ((uVar29 == 0) &&
                           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar17)) {
                          pcVar12 = (code *)swi(3);
                          (*pcVar12)();
                          return;
                        }
                        uVar29 = *(int *)(local_3a0.AllocatorInstance.Data + lVar38) + local_3b4;
                        if (((int)uVar29 < 0) ||
                           (iVar41 = (**(code **)(*(longlong *)
                                                   **(undefined8 **)((longlong)this + 0x28) + 0x60))
                                               (), iVar41 <= (int)uVar29)) {
                          bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                             (&bGEnsureHasExecuted<1036655210895769906>,false,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionDepNodes\\Private\\Dataflow\\GeometryCollectionTransferVertexScalarAttributeDepNode.cpp"
                                              ,0x132,
                                              "0 <= TargetIndex && TargetIndex < TargetFloatArray->Num()"
                                             );
                          if (bVar17) {
                            pcVar12 = (code *)swi(3);
                            (*pcVar12)();
                            return;
                          }
                        }
                        else {
                          uVar30 = local_3d8._s_0.X + iVar6;
                          lVar26 = **(longlong **)((longlong)this + 0x30);
                          uVar42 = 0;
                          if ((int)uVar30 < *(int *)(lVar26 + 0x18)) {
                            uVar42 = ~uVar30 >> 0x1f;
                          }
                          if ((uVar42 == 0) &&
                             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar17)) {
                            pcVar12 = (code *)swi(3);
                            (*pcVar12)();
                            return;
                          }
                          uVar35 = local_3d8._s_0.Y + iVar6;
                          fVar48 = local_2f0 *
                                   *(float *)(*(longlong *)(lVar26 + 0x10) +
                                             (longlong)(int)uVar30 * 4);
                          lVar26 = **(longlong **)((longlong)this + 0x30);
                          uVar42 = 0;
                          if ((int)uVar35 < *(int *)(lVar26 + 0x18)) {
                            uVar42 = ~uVar35 >> 0x1f;
                          }
                          if ((uVar42 == 0) &&
                             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar17)) {
                            pcVar12 = (code *)swi(3);
                            (*pcVar12)();
                            return;
                          }
                          uVar30 = local_3d8._s_0.Z + iVar6;
                          fVar47 = local_2ec *
                                   *(float *)(*(longlong *)(lVar26 + 0x10) +
                                             (longlong)(int)uVar35 * 4);
                          lVar26 = **(longlong **)((longlong)this + 0x30);
                          uVar42 = 0;
                          if ((int)uVar30 < *(int *)(lVar26 + 0x18)) {
                            uVar42 = ~uVar30 >> 0x1f;
                          }
                          if ((uVar42 == 0) &&
                             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar17)) {
                            pcVar12 = (code *)swi(3);
                            (*pcVar12)();
                            return;
                          }
                          lVar32 = **(longlong **)((longlong)this + 0x28);
                          fVar49 = (local_2e8 *
                                    *(float *)(*(longlong *)(lVar26 + 0x10) +
                                              (longlong)(int)uVar30 * 4) + fVar47 + fVar48) * fVar49
                          ;
                          uVar42 = 0;
                          if ((int)uVar29 < *(int *)(lVar32 + 0x18)) {
                            uVar42 = ~uVar29 >> 0x1f;
                          }
                          if ((uVar42 == 0) &&
                             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar17)) {
                            pcVar12 = (code *)swi(3);
                            (*pcVar12)();
                            return;
                          }
                          fVar48 = *(float *)(*(longlong *)(lVar32 + 0x10) +
                                             (longlong)(int)uVar29 * 4);
                          if (fVar48 <= fVar49) {
                            fVar48 = fVar49;
                          }
                          lVar26 = **(longlong **)((longlong)this + 0x28);
                          uVar42 = 0;
                          if ((int)uVar29 < *(int *)(lVar26 + 0x18)) {
                            uVar42 = ~uVar29 >> 0x1f;
                          }
                          if ((uVar42 == 0) &&
                             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar17)) {
                            pcVar12 = (code *)swi(3);
                            (*pcVar12)();
                            return;
                          }
                          *(float *)(*(longlong *)(lVar26 + 0x10) + (longlong)(int)uVar29 * 4) =
                               fVar48;
                        }
                      }
                      uVar33 = uVar33 + 1;
                      lVar38 = lVar38 + 4;
                      pTVar27 = local_348;
                      uVar34 = local_3e0;
                    } while ((int)uVar33 < local_3a0.ArrayNum);
                  }
                  if (local_3a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3a0.AllocatorInstance.Data);
                  }
                }
                uVar44 = uVar44 + 1;
                uVar34 = uVar34 - 1;
                local_3e0 = uVar34;
              } while (uVar34 != 0);
            }
            TDefaultDelete<Chaos::TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>_>
            ::operator()((TDefaultDelete<Chaos::TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>_>
                          *)&local_348,pTVar27);
          }
          if (local_3f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f8.AllocatorInstance.Data);
          }
          if (local_390.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_390.AllocatorInstance.Data);
          return;
        }
      }
      bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1036655210895769804>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionDepNodes\\Private\\Dataflow\\GeometryCollectionTransferVertexScalarAttributeDepNode.cpp"
                          ,0xcc,
                          "0 <= TargetGeometryIndex && TargetGeometryIndex < Target.VertexStart.Num()"
                         );
      if (!bVar17) {
        return;
      }
      goto code_r0x00014e96d3a6;
    }
  }
  bVar17 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<1036655210895769802>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionDepNodes\\Private\\Dataflow\\GeometryCollectionTransferVertexScalarAttributeDepNode.cpp"
                      ,0xca,
                      "0 <= AttributeGeometryIndex && AttributeGeometryIndex < Sample.VertexStart.Num()"
                     );
  if (!bVar17) {
    return;
  }
code_r0x00014e96d3a6:
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

// BuildComponentSpaceVertices @ 14e96d3d0

void __cdecl
FGeometryCollectionTransferVertexScalarAttributeNode::BuildComponentSpaceVertices
          (TManagedArray<UE::Math::TTransform<float>_> *param_1,TManagedArray<int> *param_2,
          TManagedArray<int> *param_3,TManagedArray<UE::Math::TVector<float>_> *param_4,int param_5,
          int param_6,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_7)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_f8;
  longlong local_e8;
  int *local_e0;
  longlong local_d8;
  undefined1 local_d0 [16];
  double local_c0;
  undefined1 local_b8 [16];
  double local_a8;
  undefined1 local_98 [16];
  
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  GeometryCollectionAlgo::GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
            (param_1,param_2,&local_f8);
  iVar12 = param_7->ArrayNum;
  piVar1 = &param_7->ArrayNum;
  local_e0 = piVar1;
  if (iVar12 < param_6) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_6 - iVar12,&param_7->AllocatorInstance,piVar1,&param_7->ArrayMax);
  }
  else {
    if (param_6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_6);
    }
    if (param_6 < iVar12) {
      uVar15 = iVar12 - param_6;
      if (((int)(uVar15 | param_6) < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar15 != 0) {
        pFVar20 = (param_7->AllocatorInstance).Data + (longlong)param_6 * 0x18;
        iVar12 = (*piVar1 - uVar15) - param_6;
        if (iVar12 != 0) {
          memmove(pFVar20,pFVar20 + (longlong)(int)uVar15 * 0x18,(longlong)iVar12 * 0x18);
        }
        *piVar1 = *piVar1 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&param_7->AllocatorInstance,*piVar1,&param_7->ArrayMax);
      }
    }
  }
  uVar15 = 0;
  if (0 < param_6) {
    lVar19 = (longlong)param_5;
    lVar22 = 0;
    lVar21 = 0;
    lVar17 = lVar19 * 0xc;
    local_e8 = lVar19;
    do {
      uVar18 = ~uVar15 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar15 < *(int *)&param_3->field_0x18) {
        uVar13 = uVar18;
      }
      local_d8 = lVar17;
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)(*(longlong *)&param_3->field_0x10 + lVar21) < 1) {
LAB_14e96d8d8:
        uVar13 = 0;
        if ((int)(param_5 + uVar15) < *(int *)&param_4->field_0x18) {
          uVar13 = ~(param_5 + uVar15) >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar2 = *(float *)(*(longlong *)&param_4->field_0x10 + lVar17);
        uVar3 = *(undefined8 *)(*(longlong *)&param_4->field_0x10 + 4 + lVar17);
        dVar8 = (double)(float)((ulonglong)uVar3 >> 0x20);
        uVar13 = 0;
        if ((int)uVar15 < *local_e0) {
          uVar13 = uVar18;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar20 = (param_7->AllocatorInstance).Data;
        *(double *)(pFVar20 + lVar22) = (double)fVar2;
        auVar29._8_4_ = SUB84(dVar8,0);
        auVar29._0_8_ = (double)(float)uVar3;
        auVar29._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        *(undefined1 (*) [16])(pFVar20 + lVar22 + 8) = auVar29;
      }
      else {
        uVar13 = 0;
        if ((int)uVar15 < *(int *)&param_3->field_0x18) {
          uVar13 = uVar18;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_f8.ArrayNum <= *(int *)(*(longlong *)&param_3->field_0x10 + lVar21))
        goto LAB_14e96d8d8;
        uVar16 = ~(param_5 + uVar15) >> 0x1f;
        uVar13 = 0;
        if ((int)(param_5 + uVar15) < *(int *)&param_3->field_0x18) {
          uVar13 = uVar16;
        }
        if (uVar13 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar13 = *(uint *)(*(longlong *)&param_3->field_0x10 + lVar19 * 4 + lVar21);
        uVar14 = 0;
        if ((int)uVar13 < local_f8.ArrayNum) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar20 = local_f8.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x60;
        uVar13 = 0;
        if ((int)(param_5 + uVar15) < *(int *)&param_4->field_0x18) {
          uVar13 = uVar16;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar17 = local_d8;
        auVar29 = *(undefined1 (*) [16])pFVar20;
        dVar8 = *(double *)(pFVar20 + 0x18);
        lVar19 = *(longlong *)&param_4->field_0x10;
        local_98 = *(undefined1 (*) [16])pFVar20;
        uVar13 = 0;
        if ((int)uVar15 < *local_e0) {
          uVar13 = uVar18;
        }
        local_c0 = (double)*(float *)(lVar19 + 8 + local_d8);
        dVar6 = (double)*(float *)(lVar19 + 4 + local_d8);
        auVar4 = *(undefined1 (*) [16])(pFVar20 + 0x10);
        dVar9 = local_c0 * *(double *)(pFVar20 + 0x50);
        dVar32 = *(double *)(pFVar20 + 0x58) * 0.0;
        auVar26 = blendpd(local_98,auVar4,2);
        local_d0._8_4_ = SUB84(dVar6,0);
        local_d0._0_8_ = (double)*(float *)(lVar19 + local_d8);
        local_d0._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        dVar7 = (double)*(float *)(lVar19 + local_d8) * *(double *)(pFVar20 + 0x40);
        dVar6 = dVar6 * *(double *)(pFVar20 + 0x48);
        uVar34 = (undefined4)((ulonglong)dVar6 >> 0x20);
        auVar35._8_4_ = SUB84(dVar6,0);
        auVar35._0_8_ = dVar7;
        auVar35._12_4_ = uVar34;
        dVar10 = auVar4._0_8_;
        auVar36._0_8_ = auVar35._8_8_ * local_98._0_8_ - local_98._8_8_ * dVar7;
        auVar36._8_8_ = dVar9 * local_98._8_8_ - dVar10 * dVar6;
        auVar23._8_4_ = SUB84(dVar6,0);
        auVar23._0_8_ = dVar7;
        auVar23._12_4_ = uVar34;
        auVar24._8_4_ = SUB84(dVar32,0);
        auVar24._0_8_ = dVar9;
        auVar24._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
        auVar24 = blendpd(auVar23,auVar24,2);
        auVar25._0_8_ = auVar24._0_8_ * dVar10 - auVar26._0_8_ * dVar9;
        auVar25._8_8_ = auVar24._8_8_ * auVar4._8_8_ - auVar26._8_8_ * dVar32;
        auVar24 = blendpd(auVar36,auVar25,2);
        auVar37._0_8_ = auVar24._0_8_ + auVar24._0_8_;
        auVar37._8_8_ = auVar24._8_8_ + auVar24._8_8_;
        dVar32 = auVar36._8_8_ + auVar36._8_8_;
        dVar33 = auVar25._0_8_ + auVar25._0_8_;
        auVar30._8_4_ = SUB84(dVar33,0);
        auVar30._0_8_ = dVar32;
        uVar34 = (undefined4)((ulonglong)dVar33 >> 0x20);
        auVar30._12_4_ = uVar34;
        auVar27._8_4_ = SUB84(dVar33,0);
        auVar27._0_8_ = dVar32;
        auVar27._12_4_ = uVar34;
        auVar24 = blendpd(auVar27,auVar37,2);
        auVar31._0_8_ = auVar30._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar32;
        auVar31._8_8_ = auVar37._0_8_ * auVar29._8_8_ - dVar10 * dVar33;
        auVar26._8_4_ = SUB84(auVar31._8_8_,0);
        auVar26._0_8_ = auVar31._0_8_;
        auVar26._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
        auVar29 = blendpd(auVar29,auVar4,2);
        auVar28._0_8_ = auVar24._0_8_ * dVar10 - auVar29._0_8_ * auVar37._0_8_;
        auVar28._8_8_ = auVar24._8_8_ * auVar4._8_8_ - auVar29._8_8_ * auVar37._8_8_;
        auVar29 = blendpd(auVar31,auVar28,2);
        dVar10 = dVar8 * dVar32 + dVar7 + auVar26._8_8_ + *(double *)(pFVar20 + 0x20);
        dVar6 = dVar8 * dVar33 + dVar6 + auVar28._0_8_ + *(double *)(pFVar20 + 0x28);
        uVar34 = SUB84(dVar6,0);
        uVar38 = (undefined4)((ulonglong)dVar6 >> 0x20);
        local_b8._8_4_ = uVar34;
        local_b8._0_8_ = dVar10;
        local_b8._12_4_ = uVar38;
        dVar8 = dVar8 * auVar37._0_8_ + dVar9 + auVar29._0_8_ + *(double *)(pFVar20 + 0x30);
        local_a8 = dVar8;
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar20 = (param_7->AllocatorInstance).Data;
        auVar4._8_4_ = uVar34;
        auVar4._0_8_ = dVar10;
        auVar4._12_4_ = uVar38;
        *(undefined1 (*) [16])(pFVar20 + lVar22) = auVar4;
        *(double *)(pFVar20 + lVar22 + 0x10) = dVar8;
        lVar19 = local_e8;
      }
      lVar17 = lVar17 + 0xc;
      uVar15 = uVar15 + 1;
      lVar21 = lVar21 + 4;
      lVar22 = lVar22 + 0x18;
      local_d8 = lVar17;
    } while ((int)uVar15 < param_6);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// BuildParticleSphereBVH @ 14e96da40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
* __cdecl FGeometryCollectionTransferVertexScalarAttributeNode::BuildParticleSphereBVH
                    (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
                    float param_2)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *pTVar10;
  TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *pTVar11;
  int iVar12;
  FImplicitObject *this;
  TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *pTVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *pTVar18;
  TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *pTVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_188 [32];
  ForAnyElementType local_138;
  undefined8 local_130;
  TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_> local_128;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_118;
  undefined1 local_110 [20];
  bool bStack_fc;
  bool bStack_fb;
  bool bStack_fa;
  FScriptContainerElement local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined1 local_e0 [32];
  longlong local_c0;
  undefined4 local_b8;
  FImplicitObject local_b0;
  float local_90;
  float local_8c;
  float local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar8 = param_1->ArrayNum;
  uVar16 = (ulonglong)uVar8;
  pTVar10 = (TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
             *)0x0;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  local_118 = param_1;
  Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)local_e0,3,'\0');
  local_e0._0_8_ = &___7__TSphere_N_02_Chaos__6B_;
  local_c0 = 0;
  local_b8 = 0;
  local_e0._16_4_ = param_2;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar16);
  }
  DestructItems<Chaos::TSphere<double,3>,int>((TSphere<double,3> *)local_138.Data,(int)local_130);
  if (local_130._4_4_ != uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar8,&local_138,0,(int *)((longlong)&local_130 + 4));
  }
  if (0 < (int)uVar8) {
    do {
      if (((local_138.Data <= (TSphere<double,3> *)local_e0) &&
          ((FScriptContainerElement *)local_e0 <
           local_138.Data + (longlong)(int)local_130._4_4_ * 0x30)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                   *)(*pcVar3)();
        return pTVar10;
      }
      iVar7 = (int)local_130;
      if ((int)local_130 == local_130._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_138,(int *)((longlong)&local_130 + 4));
      }
      local_130 = CONCAT44(local_130._4_4_,iVar7 + 1);
      this = (FImplicitObject *)(local_138.Data + (longlong)iVar7 * 0x30);
      Chaos::FImplicitObject::FImplicitObject(this,3,'\0');
      this->_padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
      this[1]._padding_ = local_c0;
      *(undefined4 *)&this[1]._padding_ = local_b8;
      this->Margin = (float)local_e0._16_4_;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  local_e0._0_8_ = &___7__TSphere_N_02_Chaos__6B_;
  Chaos::FImplicitObject::~FImplicitObject((FImplicitObject *)local_e0);
  uVar8 = param_1->ArrayNum;
  if (local_128.ArrayNum < (int)uVar8) {
    iVar12 = uVar8 - local_128.ArrayNum;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar12,&local_128.AllocatorInstance,&local_128.ArrayNum,
                       &local_128.ArrayMax);
    memset(local_128.AllocatorInstance.Data + (longlong)iVar7 * 8,0,(longlong)iVar12 << 3);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < local_128.ArrayNum) {
      uVar14 = local_128.ArrayNum - uVar8;
      if ((int)(uVar14 | uVar8) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                     *)(*pcVar3)();
          return pTVar10;
        }
      }
      if (uVar14 != 0) {
        iVar12 = (local_128.ArrayNum - uVar8) - uVar14;
        iVar7 = local_128.ArrayNum;
        if (iVar12 != 0) {
          memmove(local_128.AllocatorInstance.Data + (longlong)(int)uVar8 * 8,
                  local_128.AllocatorInstance.Data + (longlong)(int)uVar8 * 8 +
                  (longlong)(int)uVar14 * 8,(longlong)iVar12 << 3);
          iVar7 = local_128.ArrayNum;
        }
        local_128.ArrayNum = iVar7 - uVar14;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&local_128.AllocatorInstance,iVar7 - uVar14,&local_128.ArrayMax);
      }
    }
  }
  iVar7 = param_1->ArrayNum;
  pTVar11 = pTVar10;
  pTVar13 = pTVar10;
  pTVar18 = pTVar10;
  pTVar19 = pTVar10;
  if (0 < iVar7) {
    do {
      uVar14 = (uint)pTVar11;
      uVar15 = ~uVar14 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar14 < iVar7) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                   *)(*pcVar3)();
        return pTVar10;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar17 = (FScriptContainerElement *)((longlong)&pTVar18->_padding_ + (longlong)pFVar2);
      dVar4 = *(double *)pFVar17;
      dVar5 = *(double *)(pFVar17 + 8);
      dVar1 = *(double *)((longlong)&pTVar18->MObjects + (longlong)pFVar2);
      Chaos::FImplicitObject::FImplicitObject(&local_b0,3,'\0');
      fVar22 = (float)dVar4;
      local_b0._padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
      fVar21 = (float)dVar5;
      fVar20 = (float)dVar1;
      unique0x100008e4 = dVar1;
      local_b0.Margin = param_2;
      local_90 = fVar22;
      local_8c = fVar21;
      local_88 = fVar20;
      Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)local_110,3,'\0');
      uVar9 = 0;
      uVar8 = uVar9;
      if ((int)uVar14 < (int)local_130) {
        uVar8 = uVar15;
      }
      local_110._16_4_ = param_2;
      local_110._0_8_ = &___7__TSphere_N_02_Chaos__6B_;
      local_f0 = fVar22;
      fStack_ec = fVar21;
      local_e8 = fVar20;
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                   *)(*pcVar3)();
        return pTVar10;
      }
      local_138.Data[(longlong)&(pTVar13->MGlobalObjects).AllocatorInstance] = local_f8;
      ((undefined1 *)((longlong)&pTVar13->MObjects + 4))[(longlong)local_138.Data] = bStack_fc;
      ((undefined1 *)((longlong)&pTVar13->MObjects + 5))[(longlong)local_138.Data] = bStack_fb;
      ((undefined1 *)((longlong)&pTVar13->MObjects + 6))[(longlong)local_138.Data] = bStack_fa;
      *(ulonglong *)((longlong)&(pTVar13->MGlobalObjects).ArrayNum + local_138.Data) =
           CONCAT44(fStack_ec,local_f0);
      *(float *)(local_138.Data + (longlong)&(pTVar13->MWorldSpaceBoxes).field_0x0) = local_e8;
      *(undefined4 *)((longlong)&pTVar13->MObjects + local_138.Data) = local_110._16_4_;
      local_110._0_8_ = &___7__TSphere_N_02_Chaos__6B_;
      Chaos::FImplicitObject::~FImplicitObject((FImplicitObject *)local_110);
      uVar8 = uVar9;
      if ((int)uVar14 < (int)local_130) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                   *)(*pcVar3)();
        return pTVar10;
      }
      pFVar17 = local_138.Data + (longlong)pTVar13;
      if ((int)uVar14 < local_128.ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                   *)(*pcVar3)();
        return pTVar10;
      }
      *(FScriptContainerElement **)(local_128.AllocatorInstance.Data + (longlong)pTVar19 * 8) =
           pFVar17;
      local_b0._padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
      Chaos::FImplicitObject::~FImplicitObject(&local_b0);
      iVar7 = local_118->ArrayNum;
      pTVar11 = (TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                 *)(ulonglong)(uVar14 + 1);
      pTVar13 = (TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                 *)&(pTVar13->MWorldSpaceBoxes).field_0x8;
      param_1 = local_118;
      pTVar18 = (TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                 *)&pTVar18->MGlobalObjects;
      pTVar19 = (TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                 *)((longlong)&pTVar19->_padding_ + 1);
    } while ((int)(uVar14 + 1) < iVar7);
  }
  pTVar11 = ::operator_new(0xd8);
  if (pTVar11 !=
      (TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
       *)0x0) {
    pTVar10 = Chaos::
              TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
              ::
              TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                        (pTVar11,&local_128,0xc,false,0.0);
  }
  DestructItems<Chaos::TSphere<double,3>,int>((TSphere<double,3> *)local_138.Data,(int)local_130);
  if ((TSphere<double,3> *)local_138.Data != (TSphere<double,3> *)0x0) {
    FMemory::Free(local_138.Data);
  }
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return pTVar10;
}

// CalculateFalloffScale @ 14e96e070

float __cdecl
FGeometryCollectionTransferVertexScalarAttributeNode::CalculateFalloffScale
          (EDataflowTransferNodeFalloff param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = __real_3f800000;
  if ((param_2 < param_3) &&
     (__real_322bcc77 < (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar2 = param_3 / param_2;
  }
  if (param_1 == Dataflow_Transfer_Squared) {
    fVar1 = __real_3f800000 / (fVar2 * fVar2);
  }
  else {
    fVar1 = __real_3f800000;
    if (param_1 == Dataflow_Transfer_Linear) {
      return __real_3f800000 / fVar2;
    }
  }
  return fVar1;
}

// FindSourceToTargetGeometryMap @ 14e96e120

TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> * __thiscall
FGeometryCollectionTransferVertexScalarAttributeNode::FindSourceToTargetGeometryMap
          (FGeometryCollectionTransferVertexScalarAttributeNode *this,
          TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FManagedArrayCollection *param_1,FManagedArrayCollection *param_2)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FName *pFVar10;
  TManagedArray<FString> *pTVar11;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar12;
  FValueType *pFVar13;
  TManagedArray<FString> *pTVar14;
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *pTVar15;
  FValueType *pFVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  FValueType *pFVar21;
  ulonglong uVar22;
  uint local_res10;
  longlong local_res18;
  undefined4 local_a8;
  undefined4 uStack_a4;
  FValueType *local_a0;
  FValueType *local_98;
  FString local_90;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48 [2];
  
  pFVar21 = (FValueType *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  FVar5 = FTransformCollection::TransformGroup;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar10 = ::FName::FName(&local_60,"BoneName");
  pTVar11 = FManagedArrayCollection::FindAttribute<FString>(param_1,*pFVar10,FVar5);
  FVar5 = FTransformCollection::TransformGroup;
  pFVar10 = ::FName::FName(&local_58,"TransformToGeometryIndex");
  local_78 = FVar5;
  local_80 = *pFVar10;
  pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&param_1->Map,(TTuple<FName,FName> *)&local_80);
  pFVar16 = (FValueType *)&pTVar12->field_0x10;
  if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar16 = pFVar21;
  }
  pFVar13 = pFVar21;
  if (pFVar16 != (FValueType *)0x0) {
    pFVar13 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar16);
  }
  FVar5 = FTransformCollection::TransformGroup;
  local_98 = pFVar13;
  pFVar10 = ::FName::FName(&local_50,"BoneName");
  pTVar14 = FManagedArrayCollection::FindAttribute<FString>(param_2,*pFVar10,FVar5);
  FVar5 = FTransformCollection::TransformGroup;
  pFVar10 = ::FName::FName(local_48,"TransformToGeometryIndex");
  local_68 = FVar5;
  local_70 = *pFVar10;
  pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&param_2->Map,(TTuple<FName,FName> *)&local_70);
  pFVar16 = (FValueType *)&pTVar12->field_0x10;
  if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar16 = pFVar21;
  }
  local_a0 = pFVar21;
  if (pFVar16 != (FValueType *)0x0) {
    local_a0 = (FValueType *)FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar16);
  }
  if ((((pTVar11 != (TManagedArray<FString> *)0x0) && (pFVar13 != (FValueType *)0x0)) &&
      (pTVar14 != (TManagedArray<FString> *)0x0)) && (local_a0 != (FValueType *)0x0)) {
    local_res10 = 0;
    iVar7 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
    if (0 < iVar7) {
      local_res18 = 0;
      do {
        uVar19 = 0;
        iVar7 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14);
        uVar8 = (uint)pFVar21;
        if (0 < iVar7) {
          uVar20 = ~(uint)pFVar21 >> 0x1f;
          uVar22 = uVar19;
          do {
            uVar8 = 0;
            if ((int)pFVar21 < *(int *)&pTVar11->field_0x18) {
              uVar8 = uVar20;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              pTVar15 = (TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar15;
            }
            ::FString::PrintfImpl(&local_90,L"%s_Tet");
            uVar18 = (uint)uVar19;
            uVar8 = 0;
            if ((int)uVar18 < *(int *)&pTVar14->field_0x18) {
              uVar8 = ~uVar18 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              pTVar15 = (TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar15;
            }
            iVar7 = local_90.Data.ArrayNum;
            iVar4 = iVar7 + -1;
            if (iVar7 == 0) {
              iVar4 = 0;
            }
            FVar17.Data = (FScriptContainerElement *)L"";
            if (iVar7 != 0) {
              FVar17.Data = local_90.Data.AllocatorInstance.Data;
            }
            bVar6 = ::FString::StartsWith
                              ((FString *)
                               ((longlong)(int)uVar18 * 0x10 + *(longlong *)&pTVar14->field_0x10),
                               (wchar_t *)FVar17.Data,iVar4,IgnoreCase);
            uVar8 = local_res10;
            if (bVar6) {
              uVar9 = 0;
              if ((int)uVar18 <
                  *(int *)&(local_a0->SharedManagedArray).SharedReferenceCount.ReferenceController)
              {
                uVar9 = ~uVar18 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                pTVar15 = (TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *)
                          (*pcVar3)();
                return pTVar15;
              }
              pFVar16 = local_98;
              uVar1 = *(undefined4 *)
                       ((longlong)&((local_a0->SharedManagedArray).Object)->_padding_ + uVar22 * 4);
              uVar18 = 0;
              if ((int)local_res10 <
                  *(int *)&(local_98->SharedManagedArray).SharedReferenceCount.ReferenceController)
              {
                uVar18 = uVar20;
              }
              if ((uVar18 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                pTVar15 = (TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *)
                          (*pcVar3)();
                return pTVar15;
              }
              local_a8 = *(undefined4 *)
                          ((longlong)&((pFVar16->SharedManagedArray).Object)->_padding_ +
                          local_res18 * 4);
              pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
              uStack_a4 = uVar1;
              if (((pFVar2 <= (FScriptContainerElement *)&local_a8) &&
                  ((FScriptContainerElement *)&local_a8 <
                   pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar3 = (code *)swi(3);
                pTVar15 = (TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *)
                          (*pcVar3)();
                return pTVar15;
              }
              iVar7 = __return_storage_ptr__->ArrayNum;
              if (iVar7 == __return_storage_ptr__->ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              __return_storage_ptr__->ArrayNum = iVar7 + 1;
              *(ulonglong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8)
                   = CONCAT44(uStack_a4,local_a8);
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
              break;
            }
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
            uVar19 = (ulonglong)(uVar18 + 1);
            uVar22 = uVar22 + 1;
            iVar7 = (**(code **)(*(longlong *)pTVar14 + 0x60))(pTVar14);
            pFVar21 = (FValueType *)(ulonglong)local_res10;
          } while ((int)(uVar18 + 1) < iVar7);
        }
        local_res10 = uVar8 + 1;
        pFVar21 = (FValueType *)(ulonglong)local_res10;
        local_res18 = local_res18 + 1;
        iVar7 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
      } while ((int)local_res10 < iVar7);
    }
  }
  return __return_storage_ptr__;
}

// MaxEdgeLength @ 14e96e9c0

float __cdecl
FGeometryCollectionTransferVertexScalarAttributeNode::MaxEdgeLength
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TManagedArray<UE::Math::TIntVector3<int>_> *param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong local_78;
  int local_70;
  int iStack_6c;
  int local_64;
  int local_60 [14];
  
  uVar13 = (ulonglong)param_4;
  fVar19 = 0.0;
  if ((longlong)uVar13 < (longlong)(param_5 + param_4)) {
    lVar15 = uVar13 * 0xc;
    local_78 = (longlong)(param_5 + param_4) - uVar13;
    do {
      iVar2 = param_1->ArrayNum;
      uVar12 = (uint)uVar13;
      uVar16 = ~uVar12 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar12 < *(int *)&param_2->field_0x18) {
        uVar7 = uVar16;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
      uVar1 = *(undefined8 *)(*(longlong *)&param_2->field_0x10 + lVar15);
      local_60[1] = *(int *)(*(longlong *)&param_2->field_0x10 + 8 + lVar15) - param_3;
      local_70 = (int)uVar1;
      iStack_6c = (int)((ulonglong)uVar1 >> 0x20);
      local_60[0] = iStack_6c - param_3;
      piVar11 = &local_64;
      iVar14 = 0;
      local_70 = local_70 - param_3;
      local_64 = local_70;
      while ((local_70 < 0 || (iVar2 <= local_70))) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1036655210895769989>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionDepNodes\\Private\\Dataflow\\GeometryCollectionTransferVertexScalarAttributeDepNode.cpp"
                           ,0x185,"0 <= T[k] && T[k] < Max");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          fVar19 = (float)(*pcVar5)();
          return fVar19;
        }
        iVar14 = iVar14 + 1;
        piVar11 = piVar11 + 1;
        if (2 < iVar14) goto LAB_14e96effa;
        local_70 = *piVar11;
      }
      uVar7 = 0;
      if ((int)uVar12 < *(int *)&param_2->field_0x18) {
        uVar7 = uVar16;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
      uVar10 = *(int *)(*(longlong *)&param_2->field_0x10 + lVar15) - param_3;
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      lVar8 = (longlong)(int)uVar10;
      uVar7 = 0;
      if ((int)uVar12 < *(int *)&param_2->field_0x18) {
        uVar7 = uVar16;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
      uVar10 = *(int *)(*(longlong *)&param_2->field_0x10 + 4 + lVar15) - param_3;
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
      lVar9 = (longlong)(int)uVar10;
      pFVar4 = (param_1->AllocatorInstance).Data;
      uVar7 = 0;
      if ((int)uVar12 < *(int *)&param_2->field_0x18) {
        uVar7 = uVar16;
      }
      fVar18 = (float)(*(double *)(pFVar3 + lVar8 * 0x18 + 8) -
                      *(double *)(pFVar4 + lVar9 * 0x18 + 8)) *
               (float)(*(double *)(pFVar3 + lVar8 * 0x18 + 8) -
                      *(double *)(pFVar4 + lVar9 * 0x18 + 8)) +
               (float)(*(double *)(pFVar3 + lVar8 * 0x18) - *(double *)(pFVar4 + lVar9 * 0x18)) *
               (float)(*(double *)(pFVar3 + lVar8 * 0x18) - *(double *)(pFVar4 + lVar9 * 0x18)) +
               (float)(*(double *)(pFVar3 + lVar8 * 0x18 + 0x10) -
                      *(double *)(pFVar4 + lVar9 * 0x18 + 0x10)) *
               (float)(*(double *)(pFVar3 + lVar8 * 0x18 + 0x10) -
                      *(double *)(pFVar4 + lVar9 * 0x18 + 0x10));
      if (fVar18 <= fVar19) {
        fVar18 = fVar19;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
      uVar10 = *(int *)(*(longlong *)&param_2->field_0x10 + lVar15) - param_3;
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      lVar8 = (longlong)(int)uVar10;
      uVar7 = 0;
      if ((int)uVar12 < *(int *)&param_2->field_0x18) {
        uVar7 = uVar16;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
      uVar10 = *(int *)(*(longlong *)&param_2->field_0x10 + 8 + lVar15) - param_3;
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
      lVar9 = (longlong)(int)uVar10;
      pFVar4 = (param_1->AllocatorInstance).Data;
      uVar7 = 0;
      if ((int)uVar12 < *(int *)&param_2->field_0x18) {
        uVar7 = uVar16;
      }
      fVar17 = (float)(*(double *)(pFVar3 + lVar8 * 0x18 + 8) -
                      *(double *)(pFVar4 + lVar9 * 0x18 + 8)) *
               (float)(*(double *)(pFVar3 + lVar8 * 0x18 + 8) -
                      *(double *)(pFVar4 + lVar9 * 0x18 + 8)) +
               (float)(*(double *)(pFVar3 + lVar8 * 0x18) - *(double *)(pFVar4 + lVar9 * 0x18)) *
               (float)(*(double *)(pFVar3 + lVar8 * 0x18) - *(double *)(pFVar4 + lVar9 * 0x18)) +
               (float)(*(double *)(pFVar3 + lVar8 * 0x18 + 0x10) -
                      *(double *)(pFVar4 + lVar9 * 0x18 + 0x10)) *
               (float)(*(double *)(pFVar3 + lVar8 * 0x18 + 0x10) -
                      *(double *)(pFVar4 + lVar9 * 0x18 + 0x10));
      if (fVar17 <= fVar18) {
        fVar17 = fVar18;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
      uVar10 = *(int *)(*(longlong *)&param_2->field_0x10 + 4 + lVar15) - param_3;
      uVar7 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      lVar8 = (longlong)(int)uVar10;
      uVar7 = 0;
      if ((int)uVar12 < *(int *)&param_2->field_0x18) {
        uVar7 = uVar16;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
      uVar16 = *(int *)(*(longlong *)&param_2->field_0x10 + 8 + lVar15) - param_3;
      uVar7 = 0;
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar7 = ~uVar16 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
      lVar9 = (longlong)(int)uVar16;
      pFVar4 = (param_1->AllocatorInstance).Data;
      fVar19 = (float)(*(double *)(pFVar3 + lVar8 * 0x18 + 8) -
                      *(double *)(pFVar4 + lVar9 * 0x18 + 8)) *
               (float)(*(double *)(pFVar3 + lVar8 * 0x18 + 8) -
                      *(double *)(pFVar4 + lVar9 * 0x18 + 8)) +
               (float)(*(double *)(pFVar3 + lVar8 * 0x18) - *(double *)(pFVar4 + lVar9 * 0x18)) *
               (float)(*(double *)(pFVar3 + lVar8 * 0x18) - *(double *)(pFVar4 + lVar9 * 0x18)) +
               (float)(*(double *)(pFVar3 + lVar8 * 0x18 + 0x10) -
                      *(double *)(pFVar4 + lVar9 * 0x18 + 0x10)) *
               (float)(*(double *)(pFVar3 + lVar8 * 0x18 + 0x10) -
                      *(double *)(pFVar4 + lVar9 * 0x18 + 0x10));
      if (fVar19 <= fVar17) {
        fVar19 = fVar17;
      }
LAB_14e96effa:
      uVar13 = (ulonglong)(uVar12 + 1);
      lVar15 = lVar15 + 0xc;
      local_78 = local_78 + -1;
    } while (local_78 != 0);
  }
  return SQRT(fVar19);
}

// NearestVertexTransfer @ 14e96f070

void __thiscall
FGeometryCollectionTransferVertexScalarAttributeNode::NearestVertexTransfer
          (FGeometryCollectionTransferVertexScalarAttributeNode *this,
          FCollectionAttributeKey *param_1,FTransferFacade *param_2,FTransferFacade *param_3,
          TManagedArray<float> *param_4)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  TManagedArray<int> *pTVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FString *pFVar13;
  FString *pFVar14;
  TManagedArray<float> *pTVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_180;
  TArray<int,TSizedDefaultAllocator<32>_> local_170;
  float local_160;
  float local_15c;
  float local_158;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_150;
  longlong local_140;
  longlong local_138;
  TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  *local_130;
  longlong local_128;
  longlong local_120;
  TIntVector3<int>_u_0 local_118;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  FString local_b8;
  FString local_a8 [7];
  
  pFVar13 = ::FString::FString(&local_b8,&param_1->Group);
  pFVar14 = ::FString::FString(local_a8,&param_1->Attribute);
  pTVar15 = UE::Private::FTransferFacade::GetFloatArray(param_2,pFVar14,pFVar13);
  if (pTVar15 != (TManagedArray<float> *)0x0) {
    pTVar1 = (param_3->Vertex).ConstAttributeArray;
    local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.ArrayNum = 0;
    local_150.ArrayMax = 0;
    if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      iVar9 = FManagedArrayCollection::NumElements
                        ((param_3->Vertex).ConstCollection,(param_3->Vertex).Group);
    }
    else {
      iVar9 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    if (((param_3->Vertex).ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x67,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar1 = (param_3->Vertex).ConstAttributeArray;
    if (((param_3->BoneMap).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar2 = (param_3->BoneMap).ConstAttributeArray;
    if (((param_3->Parent).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar3 = (param_3->Parent).ConstAttributeArray;
    if (((param_3->Transform).ConstAttributeArray ==
         (TManagedArray<UE::Math::TTransform<float>_> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    BuildComponentSpaceVertices
              ((param_3->Transform).ConstAttributeArray,pTVar3,pTVar2,pTVar1,0,iVar9,&local_150);
    pTVar1 = (param_2->Vertex).ConstAttributeArray;
    local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.ArrayNum = 0;
    local_180.ArrayMax = 0;
    if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      iVar9 = FManagedArrayCollection::NumElements
                        ((param_2->Vertex).ConstCollection,(param_2->Vertex).Group);
    }
    else {
      iVar9 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    if (((param_2->Vertex).ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x67,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar1 = (param_2->Vertex).ConstAttributeArray;
    if (((param_2->BoneMap).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar2 = (param_2->BoneMap).ConstAttributeArray;
    if (((param_2->Parent).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar3 = (param_2->Parent).ConstAttributeArray;
    if (((param_2->Transform).ConstAttributeArray ==
         (TManagedArray<UE::Math::TTransform<float>_> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    BuildComponentSpaceVertices
              ((param_2->Transform).ConstAttributeArray,pTVar3,pTVar2,pTVar1,0,iVar9,&local_180);
    pTVar4 = (param_2->Indices).ConstAttributeArray;
    if (pTVar4 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
      iVar9 = FManagedArrayCollection::NumElements
                        ((param_2->Indices).ConstCollection,(param_2->Indices).Group);
    }
    else {
      iVar9 = (**(code **)(*(longlong *)pTVar4 + 0x60))();
    }
    if (((param_2->Indices).ConstAttributeArray == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0
        ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                 ,0x67,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar22 = MaxEdgeLength(&local_180,(param_2->Indices).ConstAttributeArray,0,0,iVar9);
    pTVar4 = (param_3->Indices).ConstAttributeArray;
    if (pTVar4 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
      iVar9 = FManagedArrayCollection::NumElements
                        ((param_3->Indices).ConstCollection,(param_3->Indices).Group);
    }
    else {
      iVar9 = (**(code **)(*(longlong *)pTVar4 + 0x60))();
    }
    if (((param_3->Indices).ConstAttributeArray == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0
        ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                 ,0x67,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar23 = MaxEdgeLength(&local_150,(param_3->Indices).ConstAttributeArray,0,0,iVar9);
    if (fVar23 <= fVar22) {
      fVar23 = fVar22;
    }
    local_130 = BuildParticleSphereBVH(&local_150,fVar23 * this->EdgeMultiplier);
    uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar23 = __real_3f800000;
    fVar22 = __real_322bcc77;
    uVar20 = 0;
    local_120 = 0;
    local_138 = 0;
    while( true ) {
      lVar18 = local_120;
      uVar21 = 0;
      pTVar4 = (param_2->Indices).ConstAttributeArray;
      if (pTVar4 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
        iVar9 = FManagedArrayCollection::NumElements
                          ((param_2->Indices).ConstCollection,(param_2->Indices).Group);
      }
      else {
        iVar9 = (**(code **)(*(longlong *)pTVar4 + 0x60))();
      }
      if (iVar9 <= (int)uVar20) break;
      if (((param_2->Indices).ConstAttributeArray ==
           (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x60,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar4 = (param_2->Indices).ConstAttributeArray;
      uVar19 = ~uVar20 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar20 < *(int *)&pTVar4->field_0x18) {
        uVar10 = uVar19;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar16 = local_138;
      lVar17 = *(longlong *)&pTVar4->field_0x10;
      local_118._0_8_ = *(undefined8 *)(lVar17 + local_138);
      local_118._s_0.Z = *(int *)(lVar17 + 8 + local_138);
      bVar8 = TriangleHasWeightsToTransfer((TIntVector3<int> *)&local_118._s_0,pTVar15);
      if (bVar8) {
        local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_170.ArrayNum = 0;
        local_170.ArrayMax = 0;
        TriangleToVertexIntersections
                  (local_130,&local_180,(TIntVector3<int> *)&local_118._s_0,&local_170);
        if (0 < local_170.ArrayNum) {
          local_128 = lVar18 * 3;
          local_140 = 0;
          do {
            lVar17 = local_128;
            lVar18 = local_140;
            if (((param_2->Indices).ConstAttributeArray ==
                 (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                   ,0x60,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar4 = (param_2->Indices).ConstAttributeArray;
            uVar10 = 0;
            if ((int)uVar20 < *(int *)&pTVar4->field_0x18) {
              uVar10 = uVar19;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar10 = *(uint *)(*(longlong *)&pTVar4->field_0x10 + lVar17 * 4);
            lVar16 = (longlong)(int)uVar10;
            uVar11 = 0;
            if ((int)uVar10 < local_180.ArrayNum) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_e8 = (float)*(double *)(local_180.AllocatorInstance.Data + lVar16 * 0x18);
            local_e4 = (float)*(double *)(local_180.AllocatorInstance.Data + lVar16 * 0x18 + 8);
            local_e0 = (float)*(double *)(local_180.AllocatorInstance.Data + lVar16 * 0x18 + 0x10);
            if (((param_2->Indices).ConstAttributeArray ==
                 (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                   ,0x60,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar4 = (param_2->Indices).ConstAttributeArray;
            uVar10 = 0;
            if ((int)uVar20 < *(int *)&pTVar4->field_0x18) {
              uVar10 = uVar19;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar10 = *(uint *)(*(longlong *)&pTVar4->field_0x10 + 4 + lVar17 * 4);
            lVar16 = (longlong)(int)uVar10;
            uVar11 = 0;
            if ((int)uVar10 < local_180.ArrayNum) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_f0 = (float)*(double *)(local_180.AllocatorInstance.Data + lVar16 * 0x18 + 0x10);
            local_f4 = (float)*(double *)(local_180.AllocatorInstance.Data + lVar16 * 0x18 + 8);
            local_f8 = (float)*(double *)(local_180.AllocatorInstance.Data + lVar16 * 0x18);
            if (((param_2->Indices).ConstAttributeArray ==
                 (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                   ,0x60,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar4 = (param_2->Indices).ConstAttributeArray;
            uVar10 = 0;
            if ((int)uVar20 < *(int *)&pTVar4->field_0x18) {
              uVar10 = uVar19;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar10 = *(uint *)(*(longlong *)&pTVar4->field_0x10 + 8 + lVar17 * 4);
            lVar17 = (longlong)(int)uVar10;
            uVar11 = 0;
            if ((int)uVar10 < local_180.ArrayNum) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_100 = (float)*(double *)(local_180.AllocatorInstance.Data + lVar17 * 0x18 + 0x10);
            uVar10 = 0;
            if ((int)uVar21 < local_170.ArrayNum) {
              uVar10 = ~uVar21 >> 0x1f;
            }
            local_104 = (float)*(double *)(local_180.AllocatorInstance.Data + lVar17 * 0x18 + 8);
            local_108 = (float)*(double *)(local_180.AllocatorInstance.Data + lVar17 * 0x18);
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar10 = *(uint *)(local_170.AllocatorInstance.Data + lVar18);
            lVar17 = (longlong)(int)uVar10;
            uVar11 = 0;
            if ((int)uVar10 < local_150.ArrayNum) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_158 = (float)*(double *)(local_150.AllocatorInstance.Data + lVar17 * 0x18 + 0x10);
            local_15c = (float)*(double *)(local_150.AllocatorInstance.Data + lVar17 * 0x18 + 8);
            local_160 = (float)*(double *)(local_150.AllocatorInstance.Data + lVar17 * 0x18);
            Chaos::FindClosestPointAndBaryOnTriangle<float,3>
                      ((TVector<float,3> *)&local_d8,(TVector<float,3> *)&local_e8,
                       (TVector<float,3> *)&local_f8,(TVector<float,3> *)&local_108,
                       (TVector<float,3> *)&local_160,(TVector<float,3> *)&local_c8);
            fVar26 = SQRT((local_15c - local_d4) * (local_15c - local_d4) +
                          (local_160 - local_d8) * (local_160 - local_d8) +
                          (local_158 - local_d0) * (local_158 - local_d0));
            if (((param_2->Indices).ConstAttributeArray ==
                 (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                   ,0x67,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar25 = this->FalloffThreshold;
            fVar24 = MaxEdgeLength(&local_180,(param_2->Indices).ConstAttributeArray,0,uVar20,1);
            fVar24 = fVar24 * fVar25;
            fVar25 = fVar23;
            if ((fVar24 < fVar26) && (fVar22 < (float)((uint)fVar24 & uVar7))) {
              fVar25 = fVar26 / fVar24;
            }
            if (this->Falloff == Dataflow_Transfer_Squared) {
              fVar25 = fVar25 * fVar25;
LAB_14e96fa9f:
              fVar26 = fVar23 / fVar25;
            }
            else {
              fVar26 = fVar23;
              if (this->Falloff == Dataflow_Transfer_Linear) goto LAB_14e96fa9f;
            }
            if (fVar22 < (float)((uint)fVar26 & uVar7)) {
              uVar10 = 0;
              if ((int)uVar21 < local_170.ArrayNum) {
                uVar10 = ~uVar21 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar10 = *(uint *)(local_170.AllocatorInstance.Data + lVar18);
              if (((int)uVar10 < 0) ||
                 (iVar9 = (**(code **)(*(longlong *)param_4 + 0x60))(), iVar9 <= (int)uVar10)) {
                bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<1036655210895769967>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionDepNodes\\Private\\Dataflow\\GeometryCollectionTransferVertexScalarAttributeDepNode.cpp"
                                   ,0x16f,
                                   "0 <= TargetIndex && TargetIndex < TargetFloatArray->Num()");
                if (bVar8) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              else {
                if (((param_2->Indices).ConstAttributeArray ==
                     (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                       ,0x60,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pTVar4 = (param_2->Indices).ConstAttributeArray;
                uVar11 = 0;
                if ((int)uVar20 < *(int *)&pTVar4->field_0x18) {
                  uVar11 = uVar19;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar18 = local_128;
                uVar11 = *(uint *)(*(longlong *)&pTVar4->field_0x10 + local_128 * 4);
                uVar12 = 0;
                if ((int)uVar11 < *(int *)&pTVar15->field_0x18) {
                  uVar12 = ~uVar11 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                fVar25 = local_c8 *
                         *(float *)(*(longlong *)&pTVar15->field_0x10 + (longlong)(int)uVar11 * 4);
                if (((param_2->Indices).ConstAttributeArray ==
                     (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                       ,0x60,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pTVar4 = (param_2->Indices).ConstAttributeArray;
                uVar11 = 0;
                if ((int)uVar20 < *(int *)&pTVar4->field_0x18) {
                  uVar11 = uVar19;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar11 = *(uint *)(*(longlong *)&pTVar4->field_0x10 + 4 + lVar18 * 4);
                uVar12 = 0;
                if ((int)uVar11 < *(int *)&pTVar15->field_0x18) {
                  uVar12 = ~uVar11 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                fVar24 = local_c4 *
                         *(float *)(*(longlong *)&pTVar15->field_0x10 + (longlong)(int)uVar11 * 4);
                if (((param_2->Indices).ConstAttributeArray ==
                     (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                       ,0x60,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pTVar4 = (param_2->Indices).ConstAttributeArray;
                uVar11 = 0;
                if ((int)uVar20 < *(int *)&pTVar4->field_0x18) {
                  uVar11 = uVar19;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar11 = *(uint *)(*(longlong *)&pTVar4->field_0x10 + 8 + lVar18 * 4);
                uVar12 = 0;
                if ((int)uVar11 < *(int *)&pTVar15->field_0x18) {
                  uVar12 = ~uVar11 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar12 = 0;
                if ((int)uVar10 < *(int *)&param_4->field_0x18) {
                  uVar12 = ~uVar10 >> 0x1f;
                }
                fVar26 = (local_c0 *
                          *(float *)(*(longlong *)&pTVar15->field_0x10 + (longlong)(int)uVar11 * 4)
                         + fVar24 + fVar25) * fVar26;
                if ((uVar12 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                fVar25 = *(float *)(*(longlong *)&param_4->field_0x10 + (longlong)(int)uVar10 * 4);
                if (fVar25 <= fVar26) {
                  fVar25 = fVar26;
                }
                uVar11 = 0;
                if ((int)uVar10 < *(int *)&param_4->field_0x18) {
                  uVar11 = ~uVar10 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                *(float *)(*(longlong *)&param_4->field_0x10 + (longlong)(int)uVar10 * 4) = fVar25;
              }
            }
            local_140 = local_140 + 4;
            uVar21 = uVar21 + 1;
            lVar16 = local_138;
            lVar18 = local_120;
          } while ((int)uVar21 < local_170.ArrayNum);
        }
        if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.AllocatorInstance.Data);
        }
      }
      local_120 = lVar18 + 1;
      uVar20 = uVar20 + 1;
      local_138 = lVar16 + 0xc;
    }
    TDefaultDelete<Chaos::TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>_>
    ::operator()((TDefaultDelete<Chaos::TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>_>
                  *)&local_130,local_130);
    if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.AllocatorInstance.Data);
    }
    if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.AllocatorInstance.Data);
    }
  }
  pFVar5 = (param_1->Group).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (param_1->Attribute).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// PairedGeometryTransfer @ 14e96ffe0

void __thiscall
FGeometryCollectionTransferVertexScalarAttributeNode::PairedGeometryTransfer
          (FGeometryCollectionTransferVertexScalarAttributeNode *this,
          FCollectionAttributeKey *param_1,
          TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *param_2,
          FTransferFacade *param_3,FTransferFacade *param_4,TManagedArray<float> *param_5)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  TManagedArray<int> *pTVar2;
  TManagedArray<int> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FString *pFVar9;
  FString *pFVar10;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar11;
  longlong lVar12;
  uint uVar13;
  FString *pFVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  <lambda_1> local_res10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_128;
  float local_118 [4];
  float local_108 [4];
  FString *local_f8;
  double local_f0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_e8;
  TManagedArray<float> *local_d8;
  TArrayView<std::nullptr_t,int> local_d0;
  code *local_c0;
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> **local_b8;
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *local_b0;
  FTransferFacade *local_a8;
  FTransferFacade *local_a0;
  double *local_98;
  FGeometryCollectionTransferVertexScalarAttributeNode *local_90;
  TManagedArray<float> **local_88;
  TManagedArray<float> **local_80;
  FString local_78;
  FString local_68 [2];
  
  pFVar14 = &param_1->Group;
  local_f8 = pFVar14;
  pFVar9 = ::FString::FString(&local_78,pFVar14);
  pFVar10 = ::FString::FString(local_68,&param_1->Attribute);
  local_d8 = UE::Private::FTransferFacade::GetFloatArray(param_3,pFVar10,pFVar9);
  if (local_d8 == (TManagedArray<float> *)0x0) goto LAB_14e9706ae;
  if ((this->SampleScale == Dataflow_Transfer_Asset_Edge) ||
     (this->SampleScale == Dataflow_Transfer_Asset_Bound)) {
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    pTVar1 = (param_4->Vertex).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      iVar7 = FManagedArrayCollection::NumElements
                        ((param_4->Vertex).ConstCollection,(param_4->Vertex).Group);
    }
    else {
      iVar7 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    if (((param_4->Vertex).ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0)
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar1 = (param_4->Vertex).ConstAttributeArray;
    if (((param_4->BoneMap).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar2 = (param_4->BoneMap).ConstAttributeArray;
    if (((param_4->Parent).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar3 = (param_4->Parent).ConstAttributeArray;
    if (((param_4->Transform).ConstAttributeArray ==
         (TManagedArray<UE::Math::TTransform<float>_> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    BuildComponentSpaceVertices
              ((param_4->Transform).ConstAttributeArray,pTVar3,pTVar2,pTVar1,0,iVar7,&local_e8);
    pTVar1 = (param_3->Vertex).ConstAttributeArray;
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 0;
    if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      iVar7 = FManagedArrayCollection::NumElements
                        ((param_3->Vertex).ConstCollection,(param_3->Vertex).Group);
    }
    else {
      iVar7 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    if (((param_3->Vertex).ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0)
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar1 = (param_3->Vertex).ConstAttributeArray;
    if (((param_3->BoneMap).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar2 = (param_3->BoneMap).ConstAttributeArray;
    if (((param_3->Parent).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar3 = (param_3->Parent).ConstAttributeArray;
    if (((param_3->Transform).ConstAttributeArray ==
         (TManagedArray<UE::Math::TTransform<float>_> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    BuildComponentSpaceVertices
              ((param_3->Transform).ConstAttributeArray,pTVar3,pTVar2,pTVar1,0,iVar7,&local_128);
    if (this->SampleScale == Dataflow_Transfer_Asset_Edge) {
      pTVar11 = (param_3->Indices).ConstAttributeArray;
      if (pTVar11 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
        iVar7 = FManagedArrayCollection::NumElements
                          ((param_3->Indices).ConstCollection,(param_3->Indices).Group);
      }
      else {
        iVar7 = (**(code **)(*(longlong *)pTVar11 + 0x60))();
      }
      pTVar11 = TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::Get(&param_3->Indices);
      fVar18 = MaxEdgeLength(&local_128,pTVar11,0,0,iVar7);
      pTVar11 = (param_4->Indices).ConstAttributeArray;
      if (pTVar11 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
        iVar7 = FManagedArrayCollection::NumElements
                          ((param_4->Indices).ConstCollection,(param_4->Indices).Group);
      }
      else {
        iVar7 = (**(code **)(*(longlong *)pTVar11 + 0x60))();
      }
      pTVar11 = TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::Get(&param_4->Indices);
      fVar19 = MaxEdgeLength(&local_e8,pTVar11,0,0,iVar7);
      if (fVar19 <= fVar18) {
        fVar19 = fVar18;
      }
      fVar19 = fVar19 * this->EdgeMultiplier;
LAB_14e9705ed:
      local_f0 = (double)fVar19;
    }
    else if (this->SampleScale == Dataflow_Transfer_Asset_Bound) {
      uVar13 = 0;
      local_118[0] = __real_ff7fffff;
      local_118[1] = __real_ff7fffff;
      local_118[2] = __real_ff7fffff;
      local_108[0] = __real_7f7fffff;
      local_108[1] = __real_7f7fffff;
      local_108[2] = __real_7f7fffff;
      if (0 < local_128.ArrayNum) {
        lVar17 = 0;
        iVar7 = local_128.ArrayNum;
        do {
          lVar12 = 0;
          uVar16 = ~uVar13 >> 0x1f;
          lVar15 = 0;
          do {
            uVar8 = 0;
            if ((int)uVar13 < iVar7) {
              uVar8 = uVar16;
            }
            if (uVar8 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar7 = local_128.ArrayNum;
            }
            if ((double)*(float *)((longlong)local_118 + lVar15) <
                *(double *)(local_128.AllocatorInstance.Data + lVar17 + lVar12)) {
              uVar8 = 0;
              if ((int)uVar13 < iVar7) {
                uVar8 = uVar16;
              }
              if (uVar8 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar7 = local_128.ArrayNum;
              }
              *(float *)((longlong)local_118 + lVar15) =
                   (float)*(double *)(local_128.AllocatorInstance.Data + lVar17 + lVar12);
            }
            uVar8 = 0;
            if ((int)uVar13 < iVar7) {
              uVar8 = uVar16;
            }
            if (uVar8 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar7 = local_128.ArrayNum;
            }
            if (*(double *)(local_128.AllocatorInstance.Data + lVar17 + lVar12) <=
                (double)*(float *)((longlong)local_108 + lVar15) &&
                (double)*(float *)((longlong)local_108 + lVar15) !=
                *(double *)(local_128.AllocatorInstance.Data + lVar17 + lVar12)) {
              uVar8 = 0;
              if ((int)uVar13 < iVar7) {
                uVar8 = uVar16;
              }
              if (uVar8 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar7 = local_128.ArrayNum;
              }
              *(float *)((longlong)local_108 + lVar15) =
                   (float)*(double *)(local_128.AllocatorInstance.Data + lVar17 + lVar12);
            }
            lVar12 = lVar12 + 8;
            lVar15 = lVar15 + 4;
          } while (lVar12 < 0x18);
          uVar13 = uVar13 + 1;
          lVar17 = lVar17 + 0x18;
        } while ((int)uVar13 < iVar7);
      }
      fVar18 = this->BoundMultiplier;
      fVar19 = (local_118[2] - local_108[2]) * fVar18;
      fVar20 = (local_118[1] - local_108[1]) * fVar18;
      fVar18 = (local_118[0] - local_108[0]) * fVar18;
      if (fVar20 <= fVar19) {
        fVar19 = fVar20;
      }
      if (fVar18 <= fVar19) {
        fVar19 = fVar18;
      }
      goto LAB_14e9705ed;
    }
    if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
    pFVar14 = local_f8;
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
      pFVar14 = local_f8;
    }
  }
  local_98 = &local_f0;
  local_88 = &param_5;
  local_80 = &local_d8;
  local_c0 = UE::Core::Private::Function::
             TFunctionRefCaller<`FGeometryCollectionTransferVertexScalarAttributeNode::PairedGeometryTransfer'::__l5::<lambda_1>,void,int>
             ::Call;
  local_b8 = &local_b0;
  local_res10 = SUB81(param_1,0);
  local_d0.DataPtr = (void **)0x0;
  local_d0.ArrayNum = 0;
  local_a0 = param_4;
  local_b0 = param_2;
  local_a8 = param_3;
  local_90 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_2->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_c0,
             local_res10,None,&local_d0);
LAB_14e9706ae:
  pFVar4 = (pFVar14->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (param_1->Attribute).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// TriangleHasWeightsToTransfer @ 14e970700

bool __cdecl
FGeometryCollectionTransferVertexScalarAttributeNode::TriangleHasWeightsToTransfer
          (TIntVector3<int> *param_1,TManagedArray<float> *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = (param_1->field0_0x0)._s_0.X;
  uVar8 = 0;
  if ((int)uVar1 < *(int *)&param_2->field_0x18) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar8 = (param_1->field0_0x0)._s_0.Y;
  lVar2 = *(longlong *)&param_2->field_0x10;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)&param_2->field_0x18) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar7 = (param_1->field0_0x0)._s_0.Z;
  lVar3 = *(longlong *)&param_2->field_0x10;
  uVar9 = 0;
  if ((int)uVar7 < *(int *)&param_2->field_0x18) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  return __real_322bcc77 <
         (float)((uint)(*(float *)(lVar3 + (longlong)(int)uVar8 * 4) +
                        *(float *)(lVar2 + (longlong)(int)uVar1 * 4) +
                       *(float *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar7 * 4)) &
                __xmm_7fffffff7fffffff7fffffff7fffffff);
}

// TriangleToVertexIntersections @ 14e970860

void __cdecl
FGeometryCollectionTransferVertexScalarAttributeNode::TriangleToVertexIntersections
          (TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
           *param_1,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TIntVector3<int> *param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FIdentityFunctor local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_98;
  TVector<double,3> local_88;
  TVector<double,3> local_70;
  TVector<double,3> local_58;
  
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,piVar1);
  }
  uVar11 = (param_3->field0_0x0)._s_0.X;
  uVar8 = 0;
  if ((int)uVar11 < param_2->ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)(int)uVar11 * 0x18;
  local_88._0_8_ = *(undefined8 *)pFVar2;
  local_88._8_8_ = *(undefined8 *)(pFVar2 + 8);
  local_88._16_8_ = *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 * 0x18 + 0x10);
  Chaos::
  TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::FindAllIntersections(param_1,&local_b8,&local_88);
  uVar11 = (param_3->field0_0x0)._s_0.Y;
  uVar8 = 0;
  if ((int)uVar11 < param_2->ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)(int)uVar11 * 0x18;
  local_70._0_8_ = *(undefined8 *)pFVar2;
  local_70._8_8_ = *(undefined8 *)(pFVar2 + 8);
  local_70._16_8_ = *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 * 0x18 + 0x10);
  Chaos::
  TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::FindAllIntersections(param_1,&local_98,&local_70);
  uVar11 = (param_3->field0_0x0)._s_0.Z;
  uVar8 = 0;
  if ((int)uVar11 < param_2->ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)(int)uVar11 * 0x18;
  local_58._0_8_ = *(undefined8 *)pFVar2;
  local_58._8_8_ = *(undefined8 *)(pFVar2 + 8);
  local_58._16_8_ = *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 * 0x18 + 0x10);
  Chaos::
  TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::FindAllIntersections(param_1,&local_a8,&local_58);
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum,local_res10[0],
             (TLess<void> *)local_res10);
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)local_98.AllocatorInstance.Data,local_98.ArrayNum,local_res10[0],
             (TLess<void> *)local_res18);
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum,local_res10[0],
             (TLess<void> *)local_res20);
  uVar11 = 0;
  if (local_b8.ArrayNum < 1) {
LAB_14e970bd5:
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    return;
  }
  lVar10 = 0;
  iVar6 = local_b8.ArrayNum;
LAB_14e970a60:
  uVar9 = ~uVar11 >> 0x1f;
  uVar8 = 0;
  if ((int)uVar11 < iVar6) {
    uVar8 = uVar9;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     iVar6 = local_b8.ArrayNum, bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_98.AllocatorInstance.Data !=
      local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 4) {
    FVar7.Data = local_98.AllocatorInstance.Data;
    do {
      if (*(int *)FVar7.Data == *(int *)(local_b8.AllocatorInstance.Data + lVar10 * 4)) {
        uVar8 = 0;
        if ((int)uVar11 < iVar6) {
          uVar8 = uVar9;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar6 = local_b8.ArrayNum, bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_a8.AllocatorInstance.Data !=
            local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 4) {
          FVar7.Data = local_a8.AllocatorInstance.Data;
          goto LAB_14e970b42;
        }
        break;
      }
      FVar7.Data = FVar7.Data + 4;
    } while (FVar7.Data != local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 4);
  }
  goto LAB_14e970bc8;
  while (FVar7.Data = FVar7.Data + 4,
        FVar7.Data != local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 4) {
LAB_14e970b42:
    if (*(int *)FVar7.Data == *(int *)(local_b8.AllocatorInstance.Data + lVar10 * 4)) {
      uVar8 = 0;
      if ((int)uVar11 < iVar6) {
        uVar8 = uVar9;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = local_b8.AllocatorInstance.Data + lVar10 * 4;
      iVar6 = param_4->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_4->AllocatorInstance,piVar1);
      }
      param_4->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) =
           *(undefined4 *)pFVar2;
      iVar6 = local_b8.ArrayNum;
      break;
    }
  }
LAB_14e970bc8:
  uVar11 = uVar11 + 1;
  lVar10 = lVar10 + 1;
  if (iVar6 <= (int)uVar11) goto LAB_14e970bd5;
  goto LAB_14e970a60;
}

