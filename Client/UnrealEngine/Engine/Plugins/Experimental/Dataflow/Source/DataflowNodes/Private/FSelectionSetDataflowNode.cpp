// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 10

// StaticStruct @ 14dabc6d0

UScriptStruct * __cdecl FSelectionSetDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSelectionSetDataflowNode,(UObject *)pUVar1,
                         L"SelectionSetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton;
}

// GetType @ 14dabc710

FName __thiscall FSelectionSetDataflowNode::GetType(FSelectionSetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSelectionSetDataflowNode");
  return in_RDX;
}

// IsA @ 14dabc740

bool __thiscall FSelectionSetDataflowNode::IsA(FSelectionSetDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSelectionSetDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14dabc7a8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14dabc7a8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14dabc7c6;
      }
    }
  }
  bVar5 = true;
LAB_14dabc7c6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14dabc800

FStructOnScope * __thiscall
FSelectionSetDataflowNode::NewStructOnScope(FSelectionSetDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
      Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSelectionSetDataflowNode,(UObject *)pUVar2,
                           L"SelectionSetDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14dabc880

void __thiscall
FSelectionSetDataflowNode::SerializeInternal(FSelectionSetDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSelectionSetDataflowNode,(UObject *)pUVar1,
                         L"SelectionSetDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dabc8fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14dabc910

FName __thiscall FSelectionSetDataflowNode::GetDisplayName(FSelectionSetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SelectionSet");
  return in_RDX;
}

// GetCategory @ 14dabc940

FName __thiscall FSelectionSetDataflowNode::GetCategory(FSelectionSetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Dataflow");
  return in_RDX;
}

// GetTags @ 14dabc970

FString * __thiscall
FSelectionSetDataflowNode::GetTags(FSelectionSetDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14dabc9a0

UScriptStruct * __thiscall
FSelectionSetDataflowNode::TypedScriptStruct(FSelectionSetDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSelectionSetDataflowNode,(UObject *)pUVar1,
                         L"SelectionSetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton;
}

// Evaluate @ 14dabc9e0

void __thiscall
FSelectionSetDataflowNode::Evaluate
          (FSelectionSetDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  void *_Src;
  FProperty *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  bool bVar9;
  wchar_t wVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  FString *pFVar14;
  FTimestamp FVar15;
  FGuid *pFVar16;
  ulong64 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  ForAnyElementType FVar23;
  FScriptContainerElement *pFVar24;
  undefined1 local_res8 [8];
  FContext *local_res10;
  undefined8 *local_res18 [2];
  int local_a8 [2];
  ForAnyElementType local_a0;
  undefined8 local_98;
  ForAnyElementType local_90;
  int local_88;
  int local_84;
  TArray<FString,TSizedDefaultAllocator<32>_> local_80;
  FString local_70;
  FGuid local_60 [2];
  
  local_res10 = param_1;
  puVar13 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)puVar13 == &this->IndicesOut) {
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = 0;
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    pFVar14 = ::FString::FString(&local_70," ");
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    ::FString::ParseIntoArray(&this->Indices,&local_80,pwVar22,true);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    iVar8 = local_80.ArrayNum;
    pFVar24 = local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 0x10;
    FVar23.Data = local_80.AllocatorInstance.Data;
    while( true ) {
      if (local_80.ArrayNum != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar23.Data == pFVar24) break;
      local_88 = *(int *)(FVar23.Data + 8);
      lVar21 = (longlong)local_88;
      _Src = *(void **)FVar23.Data;
      local_90.Data = (FScriptContainerElement *)0x0;
      if (local_88 == 0) {
        local_84 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88,0,&local_90,local_88,&local_84);
        memcpy(local_90.Data,_Src,lVar21 * 2);
      }
      FVar20.Data = (FScriptContainerElement *)L"";
      if (local_88 != 0) {
        FVar20.Data = local_90.Data;
      }
      wVar10 = *(wchar_t *)FVar20.Data;
      if ((wVar10 == L'-') || (wVar10 == L'+')) {
        FVar20.Data = FVar20.Data + 2;
        wVar10 = *(wchar_t *)FVar20.Data;
      }
      bVar9 = false;
      if (wVar10 != L'\0') {
        wVar10 = *(wchar_t *)FVar20.Data;
        do {
          if (wVar10 == L'.') {
            if (bVar9) goto LAB_14dabcc39;
            bVar9 = true;
          }
          else {
            iVar11 = iswdigit(wVar10);
            if (iVar11 == 0) goto LAB_14dabcc39;
          }
          wVar10 = *(wchar_t *)(FVar20.Data + 2);
          FVar20.Data = FVar20.Data + 2;
        } while (wVar10 != L'\0');
      }
      FVar20.Data = (FScriptContainerElement *)L"";
      if (local_88 != 0) {
        FVar20.Data = local_90.Data;
      }
      local_a8[0] = _wtoi((wchar_t *)FVar20.Data);
      if (((local_a0.Data <= (FScriptContainerElement *)local_a8) &&
          ((FScriptContainerElement *)local_a8 < local_a0.Data + (longlong)local_98._4_4_ * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar11 = (int)local_98;
      if ((int)local_98 == local_98._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_a0,(int *)((longlong)&local_98 + 4));
      }
      local_98 = CONCAT44(local_98._4_4_,iVar11 + 1);
      *(int *)(local_a0.Data + (longlong)iVar11 * 4) = local_a8[0];
LAB_14dabcc39:
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
      FVar23.Data = FVar23.Data + 0x10;
    }
    if (param_2->_padding_ != 0) {
      FVar15 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)param_2);
      uVar12 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)param_2);
      pFVar16 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)param_2,local_60);
      pFVar1 = (FProperty *)param_2->_padding_;
      uVar17 = CityHash64((char *)&param_2->_padding_,0x10);
      puVar19 = (undefined8 *)0x0;
      local_res18[0] = (undefined8 *)0x0;
      puVar18 = ::operator_new(0x48);
      puVar7 = local_res18[0];
      if (puVar18 != (undefined8 *)0x0) {
        uVar3 = pFVar16->A;
        uVar4 = pFVar16->B;
        uVar5 = pFVar16->C;
        uVar6 = pFVar16->D;
        puVar18[6] = *(undefined8 *)FVar15.Value;
        *puVar18 = &
                   ___7__TContextCacheElement_V__TArray_HV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
        ;
        *(undefined4 *)(puVar18 + 1) = 0;
        *(uint *)((longlong)puVar18 + 0xc) = uVar3;
        *(uint *)(puVar18 + 2) = uVar4;
        *(uint *)((longlong)puVar18 + 0x14) = uVar5;
        *(uint *)(puVar18 + 3) = uVar6;
        puVar18[4] = pFVar1;
        *(uint *)(puVar18 + 5) = uVar12;
        puVar18[7] = local_a0.Data;
        local_a0.Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar18 + 8) = (int)local_98;
        *(int *)((longlong)puVar18 + 0x44) = local_98._4_4_;
        local_98 = 0;
        puVar19 = puVar18;
      }
      if (local_res18[0] != (undefined8 *)0x0) {
        puVar18 = (undefined8 *)*local_res18[0];
        local_res18[0] = puVar19;
        (*(code *)*puVar18)(puVar7,1);
        puVar19 = local_res18[0];
      }
      local_res18[0] = puVar19;
      if (local_res18[0] == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (local_res10,(uint)uVar17,pFVar1,pFVar16,uVar12,(FTimestamp *)FVar15.Value);
      }
      else {
        (**(code **)(local_res10->_padding_ + 0x28))(local_res10,uVar17 & 0xffffffff,local_res18);
      }
      if (local_res18[0] != (undefined8 *)0x0) {
        (**(code **)*local_res18[0])(local_res18[0],1);
      }
    }
    DestructItems<FString,int>((FString *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
  }
  return;
}

