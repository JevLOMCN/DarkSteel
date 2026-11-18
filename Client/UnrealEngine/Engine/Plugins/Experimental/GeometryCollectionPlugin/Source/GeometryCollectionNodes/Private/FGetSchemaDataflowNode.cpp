// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e8c81a0

UScriptStruct * __cdecl FGetSchemaDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetSchemaDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetSchemaDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetSchemaDataflowNode,(UObject *)pUVar1,
                         L"GetSchemaDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetSchemaDataflowNode.OuterSingleton;
}

// GetType @ 14e8c8260

FName __thiscall FGetSchemaDataflowNode::GetType(FGetSchemaDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetSchemaDataflowNode");
  return in_RDX;
}

// IsA @ 14e8c8290

bool __thiscall FGetSchemaDataflowNode::IsA(FGetSchemaDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetSchemaDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8c82f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8c82f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8c8316;
      }
    }
  }
  bVar5 = true;
LAB_14e8c8316:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8c8350

FStructOnScope * __thiscall FGetSchemaDataflowNode::NewStructOnScope(FGetSchemaDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetSchemaDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetSchemaDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetSchemaDataflowNode,(UObject *)pUVar2,
                           L"GetSchemaDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetSchemaDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8c83d0

void __thiscall
FGetSchemaDataflowNode::SerializeInternal(FGetSchemaDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetSchemaDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetSchemaDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetSchemaDataflowNode,(UObject *)pUVar1,
                         L"GetSchemaDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FGetSchemaDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FGetSchemaDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8c844d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8c8460

FName __thiscall FGetSchemaDataflowNode::GetDisplayName(FGetSchemaDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetSchema");
  return in_RDX;
}

// GetCategory @ 14e8c8490

FName __thiscall FGetSchemaDataflowNode::GetCategory(FGetSchemaDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8c84c0

FString * __thiscall
FGetSchemaDataflowNode::GetTags(FGetSchemaDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8c8500

UScriptStruct * __thiscall FGetSchemaDataflowNode::TypedScriptStruct(FGetSchemaDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetSchemaDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetSchemaDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetSchemaDataflowNode,(UObject *)pUVar1,
                         L"GetSchemaDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetSchemaDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8c8610

void __thiscall
FGetSchemaDataflowNode::Evaluate
          (FGetSchemaDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FName *pFVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  FManagedArrayCollection *this_00;
  FName FVar6;
  int iVar7;
  undefined1 *puVar8;
  ForAnyElementType this_01;
  ForAnyElementType this_02;
  undefined1 local_res18 [8];
  FName *local_res20;
  undefined1 local_b0 [8];
  FString local_a8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_98;
  TArray<FName,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FString *)puVar5 != &this->String) {
    return;
  }
  this_00 = FDataflowNode::GetValue<FManagedArrayCollection>
                      ((FDataflowNode *)this,param_1,&this->Collection);
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  ::FString::AppendfImpl(&local_a8,L"\n----------------------------------------\n");
  FManagedArrayCollection::GroupNames(this_00,&local_88);
  iVar3 = local_88.ArrayNum;
  local_res20 = (FName *)(local_88.AllocatorInstance.Data + (longlong)iVar3 * 8);
  this_02.Data = local_88.AllocatorInstance.Data;
LAB_14e8c86c0:
  do {
    pFVar1 = local_res20;
    if (local_88.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((FName *)this_02.Data == pFVar1) {
      if ((FName *)local_88.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      ::FString::AppendfImpl(&local_a8,L"----------------------------------------\n");
      FDataflowNode::SetValue<FString,FString>
                ((FDataflowNode *)this,param_1,&local_a8,&this->String);
      if (local_a8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      return;
    }
    FVar6 = *(FName *)this_02.Data;
    uVar4 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
    if (*(int *)&(this_00->GroupInfo).field_0x8 != *(int *)&(this_00->GroupInfo).field_0x34) {
      puVar5 = *(undefined1 **)&(this_00->GroupInfo).field_0x40;
      puVar8 = &(this_00->GroupInfo).field_0x38;
      if (puVar5 != (undefined1 *)0x0) {
        puVar8 = puVar5;
      }
      iVar7 = *(int *)(puVar8 + (ulonglong)
                                (*(int *)&(this_00->GroupInfo).field_0x48 - 1U &
                                FVar6.Number + uVar4) * 4);
      if (iVar7 != -1) {
LAB_14e8c8730:
        if (*(FName *)(*(longlong *)&this_00->GroupInfo + (longlong)iVar7 * 0x14) != FVar6) break;
        FManagedArrayCollection::NumElements(this_00,*(FName *)this_02.Data);
        ::FName::ToString((FName *)this_02.Data,&local_68);
        ::FString::AppendfImpl(&local_a8,L"Group: %s  Number of Elements: %d\n");
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        ::FString::AppendfImpl(&local_a8,L"Attributes:\n");
        FManagedArrayCollection::AttributeNames(this_00,&local_98,*(FName *)this_02.Data);
        iVar7 = local_98.ArrayNum;
        pFVar1 = (FName *)(local_98.AllocatorInstance.Data + (longlong)iVar7 * 8);
        this_01.Data = local_98.AllocatorInstance.Data;
        while( true ) {
          if (local_98.ArrayNum != iVar7) {
            `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if ((FName *)this_01.Data == pFVar1) break;
          bVar2 = FManagedArrayCollection::HasAttribute
                            (this_00,*(FName *)this_01.Data,*(FName *)this_02.Data);
          if (bVar2) {
            FManagedArrayCollection::GetAttributeType
                      (this_00,*(FName *)this_01.Data,*(FName *)this_02.Data);
            FVar6 = ::`anonymous_namespace'::GetArrayTypeString((EManagedArrayType)local_b0);
            ::FName::ToString((FName *)FVar6,&local_78);
            ::FName::ToString((FName *)this_01.Data,&local_58);
            ::FString::AppendfImpl(&local_a8,L"\t%s\t[%s]\n");
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
          this_01.Data = this_01.Data + 8;
        }
        if ((FName *)local_98.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_98.AllocatorInstance.Data);
        }
        ::FString::AppendfImpl(&local_a8,L"\n--------------------\n");
      }
    }
    this_02.Data = this_02.Data + 8;
  } while( true );
  iVar7 = *(int *)(*(longlong *)&this_00->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
  if (iVar7 == -1) goto code_r0x00014e8c8745;
  goto LAB_14e8c8730;
code_r0x00014e8c8745:
  this_02.Data = this_02.Data + 8;
  goto LAB_14e8c86c0;
}

