// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8df5b0

UScriptStruct * __cdecl FMeshToOBJStringDebugDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshToOBJStringDebugDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshToOBJStringDebugDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode,
                         (UObject *)pUVar1,L"MeshToOBJStringDebugDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMeshToOBJStringDebugDataflowNode.OuterSingleton;
}

// GetType @ 14e8dfa50

FName __thiscall FMeshToOBJStringDebugDataflowNode::GetType(FMeshToOBJStringDebugDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMeshToOBJStringDebugDataflowNode");
  return in_RDX;
}

// IsA @ 14e8dfb40

bool __thiscall
FMeshToOBJStringDebugDataflowNode::IsA(FMeshToOBJStringDebugDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMeshToOBJStringDebugDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8dfba8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8dfba8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8dfbc6;
      }
    }
  }
  bVar5 = true;
LAB_14e8dfbc6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8dfc30

FStructOnScope * __thiscall
FMeshToOBJStringDebugDataflowNode::NewStructOnScope(FMeshToOBJStringDebugDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMeshToOBJStringDebugDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMeshToOBJStringDebugDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode,
                           (UObject *)pUVar2,L"MeshToOBJStringDebugDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMeshToOBJStringDebugDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8dfcf0

void __thiscall
FMeshToOBJStringDebugDataflowNode::SerializeInternal
          (FMeshToOBJStringDebugDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshToOBJStringDebugDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshToOBJStringDebugDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode,
                         (UObject *)pUVar1,L"MeshToOBJStringDebugDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMeshToOBJStringDebugDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMeshToOBJStringDebugDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8dfd6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8dfd80

FName __thiscall
FMeshToOBJStringDebugDataflowNode::GetDisplayName(FMeshToOBJStringDebugDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Convert Mesh to OBJ String");
  return in_RDX;
}

// GetCategory @ 14e8dfe00

FName __thiscall
FMeshToOBJStringDebugDataflowNode::GetCategory(FMeshToOBJStringDebugDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Development");
  return in_RDX;
}

// GetTags @ 14e8dff20

FString * __thiscall
FMeshToOBJStringDebugDataflowNode::GetTags
          (FMeshToOBJStringDebugDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8dff50

UScriptStruct * __thiscall
FMeshToOBJStringDebugDataflowNode::TypedScriptStruct(FMeshToOBJStringDebugDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshToOBJStringDebugDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshToOBJStringDebugDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshToOBJStringDebugDataflowNode,
                         (UObject *)pUVar1,L"MeshToOBJStringDebugDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMeshToOBJStringDebugDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8e0460

void __thiscall
FMeshToOBJStringDebugDataflowNode::Evaluate
          (FMeshToOBJStringDebugDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  TObjectPtr<UDynamicMesh>_u_0 *pTVar3;
  FDataflowInput *this_00;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  FString local_88;
  FString local_78;
  FString local_68;
  FConnectionReference local_58;
  
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FString *)puVar2 == &this->StringOBJ) {
    pTVar3 = &FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                        ((FDataflowNode *)this,param_1,&this->Mesh)->field0_0x0;
    uVar9 = 0;
    lVar1 = *(longlong *)((longlong)*pTVar3 + 0xb8);
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    ::FString::Reset(&local_78,
                     *(int *)(lVar1 + 0x170) * 0x18 +
                     (*(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24)) * 0x28);
    iVar10 = *(int *)(lVar1 + 0x20);
    iVar6 = *(int *)(lVar1 + 0x24);
    uVar8 = uVar9;
    if (0 < iVar10 * 0x200 + iVar6) {
      do {
        local_58.ContainerReference =
             (void *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar7 = (uint)uVar8;
        if ((-1 < (int)uVar7) && ((int)uVar7 < iVar10 * 0x200 + iVar6)) {
          if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar1 + 0x28) + (uVar8 >> 9) * 8) +
                                 (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe) {
            local_58.ContainerReference =
                 *(void **)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + (uVar8 >> 9) * 8) + 0x10 +
                           (ulonglong)(uVar7 & 0x1ff) * 0x18);
          }
        }
        ::FString::PrintfImpl(&local_88,L"v %f %f %f\n");
        iVar10 = local_88.Data.ArrayNum + -1;
        if (local_88.Data.ArrayNum == 0) {
          iVar10 = 0;
        }
        ::FString::AppendChars(&local_78,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar10);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        iVar10 = *(int *)(lVar1 + 0x20);
        iVar6 = *(int *)(lVar1 + 0x24);
        uVar8 = (ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < iVar10 * 0x200 + iVar6);
    }
    if (*(char *)(lVar1 + 0xb0) == '\0') {
      iVar10 = (**(code **)(**(longlong **)(lVar1 + 0x208) + 0xa8))();
      uVar8 = 0;
      if (0 < iVar10) {
        uVar4 = uVar9;
        if (*(ulonglong *)(lVar1 + 0x208) != 0) {
          uVar4 = *(ulonglong *)(lVar1 + 0x208);
        }
        if (((0 < *(int *)(uVar4 + 0x28)) && (uVar8 = **(ulonglong **)(uVar4 + 0x20), uVar8 != 0))
           && (uVar4 = uVar9, 0 < *(int *)(uVar8 + 0x38))) {
          do {
            ::FString::PrintfImpl(&local_88,L"vt %f %f\n");
            iVar10 = local_88.Data.ArrayNum + -1;
            if (local_88.Data.ArrayNum == 0) {
              iVar10 = 0;
            }
            ::FString::AppendChars(&local_78,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar10)
            ;
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            uVar7 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar7;
          } while ((int)uVar7 < *(int *)(uVar8 + 0x38));
        }
      }
    }
    else {
      uVar4 = uVar9;
      uVar8 = uVar9;
      if (0 < iVar10 * 0x200 + iVar6) {
        do {
          ::FString::PrintfImpl(&local_88,L"vt %f %f\n");
          iVar10 = local_88.Data.ArrayNum + -1;
          if (local_88.Data.ArrayNum == 0) {
            iVar10 = 0;
          }
          ::FString::AppendChars(&local_78,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar10);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          uVar7 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar7;
        } while ((int)uVar7 < *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24));
      }
    }
    local_58.Reference = &this->bInvertFaces;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_58);
    FDataflowInput::GetValue<bool>(this_00,param_1,local_58.Reference);
    iVar10 = *(int *)(lVar1 + 0x140);
    iVar6 = *(int *)(lVar1 + 0x144);
    if (0 < iVar10 * 0x200 + iVar6) {
      do {
        uVar7 = (uint)uVar9;
        if ((-1 < (int)uVar7) && ((int)uVar7 < iVar10 * 0x200 + iVar6)) {
          if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar1 + 0x148) + (uVar9 >> 9) * 8) +
                                 (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe) {
            local_88.Data.AllocatorInstance.Data =
                 *(FScriptContainerElement **)
                  (*(longlong *)(*(longlong *)(lVar1 + 0x130) + (uVar9 >> 9) * 8) +
                  (ulonglong)(uVar7 & 0x1ff) * 0xc);
            if (uVar8 == 0) {
              ::FString::PrintfImpl((FString *)&local_58,L"f %d %d %d\n");
              iVar10 = local_58.Index + -1;
              if (local_58.Index == 0) {
                iVar10 = 0;
              }
              ::FString::AppendChars(&local_78,local_58.Reference,iVar10);
              FVar5.Data = local_58.Reference;
            }
            else {
              ::FString::PrintfImpl(&local_68,L"f %d/%d %d/%d %d/%d\n");
              iVar10 = local_68.Data.ArrayNum + -1;
              if (local_68.Data.ArrayNum == 0) {
                iVar10 = 0;
              }
              ::FString::AppendChars
                        (&local_78,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar10);
              FVar5.Data = local_68.Data.AllocatorInstance.Data;
            }
            if (FVar5.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar5.Data);
            }
          }
        }
        iVar10 = *(int *)(lVar1 + 0x140);
        uVar9 = (ulonglong)(uVar7 + 1);
        iVar6 = *(int *)(lVar1 + 0x144);
      } while ((int)(uVar7 + 1) < iVar10 * 0x200 + iVar6);
    }
    FDataflowNode::SetValue<FString,FString>
              ((FDataflowNode *)this,param_1,&local_78,&this->StringOBJ);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FMeshToOBJStringDebugDataflowNode @ 14e925e70

FMeshToOBJStringDebugDataflowNode * __thiscall
FMeshToOBJStringDebugDataflowNode::FMeshToOBJStringDebugDataflowNode
          (FMeshToOBJStringDebugDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FMeshToOBJStringDebugDataflowNode__6B_;
  local_58.Reference = &this->Mesh;
  (this->StringOBJ).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((TObjectPtr<UDynamicMesh> *)local_58.Reference)->field0_0x0).DebugPtr = (UDynamicMesh *)0x0;
  this->bInvertFaces = false;
  (this->StringOBJ).Data.ArrayNum = 0;
  (this->StringOBJ).Data.ArrayMax = 0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->bInvertFaces;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->StringOBJ;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

