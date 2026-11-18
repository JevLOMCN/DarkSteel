// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e8b4610

UScriptStruct * __cdecl FBakeTransformsInCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBakeTransformsInCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBakeTransformsInCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBakeTransformsInCollectionDataflowNode,
                         (UObject *)pUVar1,L"BakeTransformsInCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBakeTransformsInCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e8b4bd0

FName __thiscall
FBakeTransformsInCollectionDataflowNode::GetType(FBakeTransformsInCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBakeTransformsInCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e8b4c40

bool __thiscall
FBakeTransformsInCollectionDataflowNode::IsA
          (FBakeTransformsInCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBakeTransformsInCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8b4ca8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8b4ca8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8b4cc6;
      }
    }
  }
  bVar5 = true;
LAB_14e8b4cc6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8b4e30

FStructOnScope * __thiscall
FBakeTransformsInCollectionDataflowNode::NewStructOnScope
          (FBakeTransformsInCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBakeTransformsInCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBakeTransformsInCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBakeTransformsInCollectionDataflowNode,
                           (UObject *)pUVar2,L"BakeTransformsInCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBakeTransformsInCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8b4eb0

void __thiscall
FBakeTransformsInCollectionDataflowNode::SerializeInternal
          (FBakeTransformsInCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBakeTransformsInCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBakeTransformsInCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBakeTransformsInCollectionDataflowNode,
                         (UObject *)pUVar1,L"BakeTransformsInCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FBakeTransformsInCollectionDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FBakeTransformsInCollectionDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8b4f2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8b4f40

FName __thiscall
FBakeTransformsInCollectionDataflowNode::GetDisplayName
          (FBakeTransformsInCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BakeTransformsInCollection");
  return in_RDX;
}

// GetCategory @ 14e8b4f70

FName __thiscall
FBakeTransformsInCollectionDataflowNode::GetCategory(FBakeTransformsInCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Transform");
  return in_RDX;
}

// GetTags @ 14e8b5040

FString * __thiscall
FBakeTransformsInCollectionDataflowNode::GetTags
          (FBakeTransformsInCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8b50a0

UScriptStruct * __thiscall
FBakeTransformsInCollectionDataflowNode::TypedScriptStruct
          (FBakeTransformsInCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBakeTransformsInCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBakeTransformsInCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBakeTransformsInCollectionDataflowNode,
                         (UObject *)pUVar1,L"BakeTransformsInCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBakeTransformsInCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8b5380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBakeTransformsInCollectionDataflowNode::Evaluate
          (FBakeTransformsInCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  FManagedArrayCollection *pFVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_5f8 [32];
  longlong local_5d8;
  longlong local_5d0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_5c8;
  FCollectionTransformFacade local_5b8;
  FCollectionMeshFacade local_4c8;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_5f8;
  pFVar1 = &this->Collection;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar6 == pFVar1) {
    pFVar7 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
    FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar7);
    GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
              (&local_5b8,&local_f8);
    GeometryCollection::Facades::FCollectionTransformFacade::ComputeCollectionSpaceTransforms
              (&local_5b8,&local_5c8);
    GeometryCollection::Facades::FCollectionMeshFacade::FCollectionMeshFacade(&local_4c8,&local_f8);
    iVar4 = FManagedArrayCollection::NumElements(&local_f8,FTransformCollection::TransformGroup);
    uVar8 = 0;
    if (0 < iVar4) {
      lVar10 = 0;
      lVar9 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < local_5c8.ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          local_5d0 = (longlong)local_5c8.ArrayNum;
          local_5d8 = lVar10;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        GeometryCollection::Facades::FCollectionMeshFacade::BakeTransform
                  (&local_4c8,uVar8,(TTransform<double> *)(local_5c8.AllocatorInstance.Data + lVar9)
                  );
        GeometryCollection::Facades::FCollectionTransformFacade::SetBoneTransformToIdentity
                  (&local_5b8,uVar8);
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 0x60;
      } while ((int)uVar8 < iVar4);
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_f8,pFVar1);
    if (local_5c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.AllocatorInstance.Data);
    }
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  }
  return;
}

