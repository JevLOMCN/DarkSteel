// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 12

// StaticStruct @ 14dabd7f0

UScriptStruct * __cdecl FGetSkeletonDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetSkeletonDataflowNode,(UObject *)pUVar1,
                         L"GetSkeletonDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.OuterSingleton;
}

// GetType @ 14dabda70

FName __thiscall FGetSkeletonDataflowNode::GetType(FGetSkeletonDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetSkeletonDataflowNode");
  return in_RDX;
}

// IsA @ 14dabdaa0

bool __thiscall FGetSkeletonDataflowNode::IsA(FGetSkeletonDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetSkeletonDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14dabdb08;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14dabdb08:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14dabdb26;
      }
    }
  }
  bVar5 = true;
LAB_14dabdb26:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14dabdb60

FStructOnScope * __thiscall
FGetSkeletonDataflowNode::NewStructOnScope(FGetSkeletonDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
      Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetSkeletonDataflowNode,(UObject *)pUVar2,
                           L"GetSkeletonDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14dabdbe0

void __thiscall
FGetSkeletonDataflowNode::SerializeInternal(FGetSkeletonDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetSkeletonDataflowNode,(UObject *)pUVar1,
                         L"GetSkeletonDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dabdc5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14dabdc70

FName __thiscall FGetSkeletonDataflowNode::GetDisplayName(FGetSkeletonDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Skeleton");
  return in_RDX;
}

// GetCategory @ 14dabdca0

FName __thiscall FGetSkeletonDataflowNode::GetCategory(FGetSkeletonDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"General");
  return in_RDX;
}

// GetTags @ 14dabdcd0

FString * __thiscall
FGetSkeletonDataflowNode::GetTags(FGetSkeletonDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Skeletal Mesh");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14dabdd50

UScriptStruct * __thiscall
FGetSkeletonDataflowNode::TypedScriptStruct(FGetSkeletonDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetSkeletonDataflowNode,(UObject *)pUVar1,
                         L"GetSkeletonDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetSkeletonDataflowNode.OuterSingleton;
}

// Evaluate @ 14dabdd90

void __thiscall
FGetSkeletonDataflowNode::Evaluate
          (FGetSkeletonDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<USkeleton_const_> *pTVar1;
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
  FDataflowOutput *pFVar12;
  FTimestamp FVar13;
  FGuid *pFVar14;
  ulong64 uVar15;
  FProperty *pFVar16;
  void *pvVar17;
  UObject *pUVar18;
  UClass *pUVar19;
  FName FVar20;
  FName local_res8;
  FGuid local_68;
  FConnectionReference local_58;
  
  pTVar1 = &this->Skeleton;
  puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<USkeleton_const_> *)puVar11 == pTVar1) {
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_58.Reference = pTVar1;
    pFVar12 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_58);
    if (pFVar12 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<TObjectPtr<USkeleton_const_>_const_&,TObjectPtr<USkeleton_const_>_>'
      ::__l7::<lambda_1>::operator()(&local_res8);
    }
    else if (pFVar12->_padding_ != 0) {
      FVar13 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar12);
      uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar12);
      pFVar14 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)pFVar12,&local_68);
      pFVar16 = (FProperty *)pFVar12->_padding_;
      uVar15 = CityHash64((char *)&pFVar12->_padding_,0x10);
      UE::Dataflow::FContext::SetData<TObjectPtr<USkeleton_const_>_const_&>
                (param_1,(uint)uVar15,pFVar16,pTVar1,pFVar14,uVar10,(FTimestamp *)FVar13.Value);
    }
    if ((pTVar1->field0_0x0).DebugPtr == (USkeleton *)0x0) {
      pcVar3 = *(code **)(param_1->_padding_ + 0x18);
      ::FName::FName(&local_res8,"TEngineContext");
      cVar9 = (*pcVar3)(param_1,local_res8);
      if (((((cVar9 != '\0') && (param_1 != (FContext *)0x0)) &&
           (pUVar18 = (UObject *)param_1[1]._padding_, pUVar18 != (UObject *)0x0)) &&
          ((*(UStruct **)&pUVar18->field_0x10 != (UStruct *)0x0 &&
           (pFVar16 = UStruct::FindPropertyByName
                                (*(UStruct **)&pUVar18->field_0x10,this->PropertyName),
           pFVar16 != (FProperty *)0x0)))) &&
         (((*(uint *)(pFVar16->_padding_ + 0x18) >> 0x10 & 1) != 0 &&
          ((pvVar17 = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar16,pUVar18,0),
           pvVar17 != (void *)0x0 &&
           (pUVar18 = (UObject *)(**(code **)(pFVar16->_padding_ + 0x1f8))(pFVar16,pvVar17),
           pUVar18 != (UObject *)0x0)))))) {
        pUVar19 = Z_Construct_UClass_USkeleton_NoRegister();
        iVar2 = (int)pUVar19->_padding_;
        if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar19->_padding_)) {
          pUVar18 = (UObject *)0x0;
        }
        if (pUVar18 != (UObject *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar18);
          }
          local_58.Index = -1;
          local_58.ContainerReference = (void *)0x0;
          local_58.Reference = pTVar1;
          pFVar12 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_58);
          if (pFVar12 == (FDataflowOutput *)0x0) {
            `FDataflowNode::SetValue<TObjectPtr<USkeleton_const_>,TObjectPtr<USkeleton_const_>_>'::
            __l7::<lambda_1>::operator()(&local_res8);
          }
          else if (pFVar12->_padding_ != 0) {
            FVar13 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar12);
            uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar12);
            pFVar14 = FDataflowConnection::GetOwningNodeGuid
                                ((FDataflowConnection *)pFVar12,&local_68);
            pFVar16 = (FProperty *)pFVar12->_padding_;
            uVar15 = CityHash64((char *)&pFVar12->_padding_,0x10);
            local_res8.ComparisonIndex.Value = 0;
            local_res8.Number = 0;
            FVar20 = (FName)::operator_new(0x50);
            if (FVar20 == (FName)0x0) {
              FVar20.ComparisonIndex.Value = 0;
              FVar20.Number = 0;
            }
            else {
              uVar4 = *(undefined8 *)FVar13.Value;
              uVar6 = *(undefined8 *)pFVar14;
              uVar7 = *(undefined8 *)&pFVar14->C;
              *(undefined ***)FVar20 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
              *(undefined8 *)((longlong)FVar20 + 0x30) = uVar4;
              *(undefined8 *)((longlong)FVar20 + 0xc) = uVar6;
              *(undefined8 *)((longlong)FVar20 + 0x14) = uVar7;
              *(undefined4 *)((longlong)FVar20 + 8) = 3;
              *(FProperty **)((longlong)FVar20 + 0x20) = pFVar16;
              *(uint *)((longlong)FVar20 + 0x28) = uVar10;
              *(undefined ***)((longlong)FVar20 + 0x38) = &___7FGCObject__6B_;
              *(undefined2 *)((longlong)FVar20 + 0x40) = 0;
              FGCObject::RegisterGCObject((FGCObject *)((longlong)FVar20 + 0x38));
              *(undefined ***)FVar20 =
                   &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>::
                    _vftable__for__UE__Dataflow__FContextCacheElementBase__;
              *(undefined ***)((longlong)FVar20 + 0x38) =
                   &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>::
                    _vftable__for__FGCObject__;
              *(UObject **)((longlong)FVar20 + 0x48) = pUVar18;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar18);
              }
            }
            FVar8 = local_res8;
            if (local_res8 != (FName)0x0) {
              puVar5 = *(undefined8 **)local_res8;
              local_res8 = FVar20;
              (*(code *)*puVar5)(FVar8,1);
              FVar20 = local_res8;
            }
            local_res8 = FVar20;
            if (local_res8 == (FName)0x0) {
              UE::Dataflow::FContext::SetNullData
                        (param_1,(uint)uVar15,pFVar16,pFVar14,uVar10,(FTimestamp *)FVar13.Value);
            }
            else {
              (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar15 & 0xffffffff,&local_res8);
            }
            if (local_res8 != (FName)0x0) {
              (*(code *)**(undefined8 **)local_res8)(local_res8,1);
            }
          }
        }
      }
    }
  }
  return;
}

// SupportsAssetProperty @ 14dabe140

bool __thiscall
FGetSkeletonDataflowNode::SupportsAssetProperty(FGetSkeletonDataflowNode *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_USkeleton_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14dabe173;
  }
  param_1 = (UObject *)0x0;
LAB_14dabe173:
  return param_1 != (UObject *)0x0;
}

// SetAssetProperty @ 14dabe190

void __thiscall
FGetSkeletonDataflowNode::SetAssetProperty(FGetSkeletonDataflowNode *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_USkeleton_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)param_1;
    }
  }
  return;
}

