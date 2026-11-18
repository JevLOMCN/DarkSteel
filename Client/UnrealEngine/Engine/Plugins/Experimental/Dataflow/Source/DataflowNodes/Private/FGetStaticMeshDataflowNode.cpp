// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 13

// StaticStruct @ 14dabb1e0

UScriptStruct * __cdecl FGetStaticMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode,(UObject *)pUVar1,
                         L"GetStaticMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton;
}

// GetType @ 14dabb220

FName __thiscall FGetStaticMeshDataflowNode::GetType(FGetStaticMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetStaticMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14dabb250

bool __thiscall FGetStaticMeshDataflowNode::IsA(FGetStaticMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetStaticMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14dabb2b8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14dabb2b8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14dabb2d6;
      }
    }
  }
  bVar5 = true;
LAB_14dabb2d6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14dabb310

FStructOnScope * __thiscall
FGetStaticMeshDataflowNode::NewStructOnScope(FGetStaticMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
      Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode,(UObject *)pUVar2,
                           L"GetStaticMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14dabb390

void __thiscall
FGetStaticMeshDataflowNode::SerializeInternal(FGetStaticMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode,(UObject *)pUVar1,
                         L"GetStaticMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dabb40d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14dabb420

FName __thiscall FGetStaticMeshDataflowNode::GetDisplayName(FGetStaticMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"StaticMesh");
  return in_RDX;
}

// GetCategory @ 14dabb450

FName __thiscall FGetStaticMeshDataflowNode::GetCategory(FGetStaticMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"General");
  return in_RDX;
}

// GetTags @ 14dabb480

FString * __thiscall
FGetStaticMeshDataflowNode::GetTags
          (FGetStaticMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Static Mesh");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14dabb4b0

UScriptStruct * __thiscall
FGetStaticMeshDataflowNode::TypedScriptStruct(FGetStaticMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode,(UObject *)pUVar1,
                         L"GetStaticMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14dabb4f0

void __thiscall
FGetStaticMeshDataflowNode::Evaluate
          (FGetStaticMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<UStaticMesh_const_> *pTVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FName FVar8;
  char cVar9;
  uint uVar10;
  undefined1 *puVar11;
  FProperty *pFVar12;
  void *pvVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  FDataflowOutput *this_00;
  FTimestamp FVar16;
  FGuid *pFVar17;
  ulong64 uVar18;
  FName FVar19;
  FName local_res8;
  FGuid local_68;
  FConnectionReference local_58;
  
  pTVar1 = &this->StaticMesh;
  puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UStaticMesh_const_> *)puVar11 == pTVar1) {
    FDataflowNode::SetValue<TObjectPtr<UStaticMesh_const_>_const_&,TObjectPtr<UStaticMesh_const_>_>
              ((FDataflowNode *)this,param_1,pTVar1,pTVar1);
    if ((pTVar1->field0_0x0).DebugPtr != (UStaticMesh *)0x0) {
      FDataflowNode::
      SetValue<TObjectPtr<UStaticMesh_const_>_const_&,TObjectPtr<UStaticMesh_const_>_>
                ((FDataflowNode *)this,param_1,pTVar1,pTVar1);
      return;
    }
    pcVar3 = *(code **)(param_1->_padding_ + 0x18);
    ::FName::FName(&local_res8,"TEngineContext");
    cVar9 = (*pcVar3)(param_1,local_res8);
    if (((((cVar9 != '\0') && (param_1 != (FContext *)0x0)) &&
         (pUVar14 = (UObject *)param_1[1]._padding_, pUVar14 != (UObject *)0x0)) &&
        ((*(UStruct **)&pUVar14->field_0x10 != (UStruct *)0x0 &&
         (pFVar12 = UStruct::FindPropertyByName
                              (*(UStruct **)&pUVar14->field_0x10,this->PropertyName),
         pFVar12 != (FProperty *)0x0)))) &&
       (((*(uint *)(pFVar12->_padding_ + 0x18) >> 0x10 & 1) != 0 &&
        ((pvVar13 = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar12,pUVar14,0),
         pvVar13 != (void *)0x0 &&
         (pUVar14 = (UObject *)(**(code **)(pFVar12->_padding_ + 0x1f8))(pFVar12,pvVar13),
         pUVar14 != (UObject *)0x0)))))) {
      pUVar15 = Z_Construct_UClass_UStaticMesh_NoRegister();
      iVar2 = (int)pUVar15->_padding_;
      if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar15->_padding_)) {
        pUVar14 = (UObject *)0x0;
      }
      if (pUVar14 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar14);
        }
        local_58.Index = -1;
        local_58.ContainerReference = (void *)0x0;
        local_58.Reference = pTVar1;
        this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_58);
        if (this_00 == (FDataflowOutput *)0x0) {
          `FDataflowNode::SetValue<TObjectPtr<UStaticMesh_const_>,TObjectPtr<UStaticMesh_const_>_>'
          ::__l7::<lambda_1>::operator()(&local_res8);
        }
        else if (this_00->_padding_ != 0) {
          FVar16 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
          uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
          pFVar17 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_68)
          ;
          pFVar12 = (FProperty *)this_00->_padding_;
          uVar18 = CityHash64((char *)&this_00->_padding_,0x10);
          local_res8.ComparisonIndex.Value = 0;
          local_res8.Number = 0;
          FVar19 = (FName)::operator_new(0x50);
          if (FVar19 == (FName)0x0) {
            FVar19.ComparisonIndex.Value = 0;
            FVar19.Number = 0;
          }
          else {
            uVar4 = *(undefined8 *)FVar16.Value;
            uVar6 = *(undefined8 *)pFVar17;
            uVar7 = *(undefined8 *)&pFVar17->C;
            *(undefined ***)FVar19 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
            *(undefined8 *)((longlong)FVar19 + 0x30) = uVar4;
            *(undefined8 *)((longlong)FVar19 + 0xc) = uVar6;
            *(undefined8 *)((longlong)FVar19 + 0x14) = uVar7;
            *(undefined4 *)((longlong)FVar19 + 8) = 3;
            *(FProperty **)((longlong)FVar19 + 0x20) = pFVar12;
            *(uint *)((longlong)FVar19 + 0x28) = uVar10;
            *(undefined ***)((longlong)FVar19 + 0x38) = &___7FGCObject__6B_;
            *(undefined2 *)((longlong)FVar19 + 0x40) = 0;
            FGCObject::RegisterGCObject((FGCObject *)((longlong)FVar19 + 0x38));
            *(undefined ***)FVar19 =
                 &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_>::
                  _vftable__for__UE__Dataflow__FContextCacheElementBase__;
            *(undefined ***)((longlong)FVar19 + 0x38) =
                 &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_>::
                  _vftable__for__FGCObject__;
            *(UObject **)((longlong)FVar19 + 0x48) = pUVar14;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar14);
            }
          }
          FVar8 = local_res8;
          if (local_res8 != (FName)0x0) {
            puVar5 = *(undefined8 **)local_res8;
            local_res8 = FVar19;
            (*(code *)*puVar5)(FVar8,1);
            FVar19 = local_res8;
          }
          local_res8 = FVar19;
          if (local_res8 == (FName)0x0) {
            UE::Dataflow::FContext::SetNullData
                      (param_1,(uint)uVar18,pFVar12,pFVar17,uVar10,(FTimestamp *)FVar16.Value);
          }
          else {
            (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar18 & 0xffffffff,&local_res8);
          }
          if (local_res8 != (FName)0x0) {
            (*(code *)**(undefined8 **)local_res8)(local_res8,1);
          }
        }
      }
    }
  }
  return;
}

// SupportsAssetProperty @ 14dabb820

bool __thiscall
FGetStaticMeshDataflowNode::SupportsAssetProperty(FGetStaticMeshDataflowNode *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14dabb853;
  }
  param_1 = (UObject *)0x0;
LAB_14dabb853:
  return param_1 != (UObject *)0x0;
}

// SetAssetProperty @ 14dabb870

void __thiscall
FGetStaticMeshDataflowNode::SetAssetProperty(FGetStaticMeshDataflowNode *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)param_1;
    }
  }
  return;
}

// FGetStaticMeshDataflowNode @ 14dacd9e0

FGetStaticMeshDataflowNode * __thiscall
FGetStaticMeshDataflowNode::FGetStaticMeshDataflowNode
          (FGetStaticMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->_padding_ = (longlong)&___7FGetStaticMeshDataflowNode__6B_;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  ::FName::FName(&this->PropertyName,"StaticMesh");
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->StaticMesh;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

