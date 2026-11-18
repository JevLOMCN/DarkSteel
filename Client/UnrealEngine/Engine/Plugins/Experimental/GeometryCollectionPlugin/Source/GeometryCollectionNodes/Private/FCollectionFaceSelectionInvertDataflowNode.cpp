// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e864f60

UScriptStruct * __cdecl FCollectionFaceSelectionInvertDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode,
                         (UObject *)pUVar1,L"CollectionFaceSelectionInvertDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode.OuterSingleton
  ;
}

// GetType @ 14e865130

FName __thiscall
FCollectionFaceSelectionInvertDataflowNode::GetType
          (FCollectionFaceSelectionInvertDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionFaceSelectionInvertDataflowNode");
  return in_RDX;
}

// IsA @ 14e865200

bool __thiscall
FCollectionFaceSelectionInvertDataflowNode::IsA
          (FCollectionFaceSelectionInvertDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionFaceSelectionInvertDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e865268;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e865268:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e865286;
      }
    }
  }
  bVar5 = true;
LAB_14e865286:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8652c0

FStructOnScope * __thiscall
FCollectionFaceSelectionInvertDataflowNode::NewStructOnScope
          (FCollectionFaceSelectionInvertDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode,
                           (UObject *)pUVar2,L"CollectionFaceSelectionInvertDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e865380

void __thiscall
FCollectionFaceSelectionInvertDataflowNode::SerializeInternal
          (FCollectionFaceSelectionInvertDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode,
                         (UObject *)pUVar1,L"CollectionFaceSelectionInvertDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8653fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e865410

FName __thiscall
FCollectionFaceSelectionInvertDataflowNode::GetDisplayName
          (FCollectionFaceSelectionInvertDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionFaceSelectInvert");
  return in_RDX;
}

// GetCategory @ 14e8654a0

FName __thiscall
FCollectionFaceSelectionInvertDataflowNode::GetCategory
          (FCollectionFaceSelectionInvertDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Face");
  return in_RDX;
}

// GetTags @ 14e865510

FString * __thiscall
FCollectionFaceSelectionInvertDataflowNode::GetTags
          (FCollectionFaceSelectionInvertDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e865540

UScriptStruct * __thiscall
FCollectionFaceSelectionInvertDataflowNode::TypedScriptStruct
          (FCollectionFaceSelectionInvertDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode,
                         (UObject *)pUVar1,L"CollectionFaceSelectionInvertDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode.OuterSingleton
  ;
}

// Evaluate @ 14e865850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionFaceSelectionInvertDataflowNode::Evaluate
          (FCollectionFaceSelectionInvertDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FDataflowFaceSelection *pFVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  FDataflowFaceSelection *pFVar5;
  uint uVar6;
  void *_Src;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined1 *local_40;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar1 = &this->FaceSelection;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowFaceSelection *)puVar4 == pFVar1) {
    pFVar5 = FDataflowNode::GetValue<FDataflowFaceSelection>((FDataflowNode *)this,param_1,pFVar1);
    uVar8 = 0;
    local_58._0_8_ = *(undefined8 *)pFVar5;
    local_40 = (undefined1 *)0x0;
    local_34 = 0;
    local_38 = 0;
    uVar6 = *(int *)&pFVar5->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar6) {
      local_34 = 0x80;
      if (0x80 < (int)uVar6) {
        local_34 = uVar6;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_58 + 8),0);
    }
    local_38 = *(uint *)&pFVar5->field_0x20;
    if (local_38 != 0) {
      _Src = *(void **)&pFVar5->field_0x18;
      if (*(void **)&pFVar5->field_0x18 == (void *)0x0) {
        _Src = &pFVar5->field_0x8;
      }
      puVar4 = local_58 + 8;
      if (local_40 != (undefined1 *)0x0) {
        puVar4 = local_40;
      }
      memcpy(puVar4,_Src,(ulonglong)(local_38 + 0x1f >> 5) << 2);
    }
    puVar4 = local_58 + 8;
    if (local_40 != (undefined1 *)0x0) {
      puVar4 = local_40;
    }
    iVar3 = (int)(local_38 + 0x1f + ((int)(local_38 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
    uVar6 = local_38 & 0x8000001f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
    }
    uVar9 = 0xffffffff >> ((byte)(0x20 - uVar6) & 0x1f);
    if (0x1f < (int)(0x20 - uVar6)) {
      uVar9 = 0xffffffff;
    }
    uVar6 = 0xffffffff;
    if (iVar3 == 1) {
      uVar6 = uVar9;
    }
    if (0 < iVar3) {
      do {
        lVar2 = uVar8 * 4;
        uVar7 = *(uint *)(puVar4 + uVar8 * 4) & uVar6;
        if (uVar6 == 0xffffffff) {
          uVar7 = *(uint *)(puVar4 + lVar2);
        }
        uVar6 = ~uVar7 & uVar9;
        if ((uint)uVar8 != iVar3 - 1U) {
          uVar6 = ~uVar7;
        }
        uVar7 = (uint)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        *(uint *)(puVar4 + lVar2) = uVar6;
        uVar6 = 0xffffffff;
        if (uVar7 == iVar3 - 1U) {
          uVar6 = uVar9;
        }
      } while ((int)uVar7 < iVar3);
    }
    FDataflowNode::SetValue<FDataflowFaceSelection,FDataflowFaceSelection>
              ((FDataflowNode *)this,param_1,(FDataflowFaceSelection *)local_58,pFVar1);
    if (local_40 != (undefined1 *)0x0) {
      FMemory::Free(local_40);
    }
  }
  return;
}

