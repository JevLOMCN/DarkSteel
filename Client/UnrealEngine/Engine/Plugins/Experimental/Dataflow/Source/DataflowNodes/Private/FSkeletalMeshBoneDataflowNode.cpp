// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 11

// StaticStruct @ 14dabe240

UScriptStruct * __cdecl FSkeletalMeshBoneDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode,(UObject *)pUVar1,
                         L"SkeletalMeshBoneDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.OuterSingleton;
}

// GetType @ 14dabe280

FName __thiscall FSkeletalMeshBoneDataflowNode::GetType(FSkeletalMeshBoneDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSkeletalMeshBoneDataflowNode");
  return in_RDX;
}

// IsA @ 14dabe2b0

bool __thiscall
FSkeletalMeshBoneDataflowNode::IsA(FSkeletalMeshBoneDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSkeletalMeshBoneDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14dabe318;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14dabe318:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14dabe336;
      }
    }
  }
  bVar5 = true;
LAB_14dabe336:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14dabe370

FStructOnScope * __thiscall
FSkeletalMeshBoneDataflowNode::NewStructOnScope(FSkeletalMeshBoneDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
      Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode,(UObject *)pUVar2
                           ,L"SkeletalMeshBoneDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14dabe3f0

void __thiscall
FSkeletalMeshBoneDataflowNode::SerializeInternal
          (FSkeletalMeshBoneDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode,(UObject *)pUVar1,
                         L"SkeletalMeshBoneDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dabe46d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14dabe480

FName __thiscall FSkeletalMeshBoneDataflowNode::GetDisplayName(FSkeletalMeshBoneDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SkeletalMeshBone");
  return in_RDX;
}

// GetCategory @ 14dabe4b0

FName __thiscall FSkeletalMeshBoneDataflowNode::GetCategory(FSkeletalMeshBoneDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"General");
  return in_RDX;
}

// GetTags @ 14dabe4e0

FString * __thiscall
FSkeletalMeshBoneDataflowNode::GetTags
          (FSkeletalMeshBoneDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Skeletal Mesh");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14dabe510

UScriptStruct * __thiscall
FSkeletalMeshBoneDataflowNode::TypedScriptStruct(FSkeletalMeshBoneDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode,(UObject *)pUVar1,
                         L"SkeletalMeshBoneDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshBoneDataflowNode.OuterSingleton;
}

// Evaluate @ 14dabe550

void __thiscall
FSkeletalMeshBoneDataflowNode::Evaluate
          (FSkeletalMeshBoneDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  TObjectPtr<USkeletalMesh_const_> TVar5;
  FProperty *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  FDataflowOutput *pFVar13;
  FTimestamp FVar14;
  FGuid *pFVar15;
  ulong64 uVar16;
  FName FVar17;
  TObjectPtr<USkeletalMesh_const_>_u_0 *pTVar18;
  TEngineContext<UE::Dataflow::FContextSingle> *pTVar19;
  FName *pFVar20;
  FString *pFVar21;
  longlong lVar22;
  int *piVar23;
  int iVar24;
  FName FVar25;
  FName local_res8;
  FName local_res18 [2];
  undefined1 local_68 [16];
  void *local_58;
  ForAnyElementType local_50;
  
  piVar1 = &this->BoneIndexOut;
  puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((int *)puVar12 == piVar1) {
    local_58 = (void *)0x0;
    local_68._8_4_ = 0xffffffff;
    local_68._0_8_ = piVar1;
    pFVar13 = FDataflowNode::FindOutput((FDataflowNode *)this,(FConnectionReference *)local_68);
    if (pFVar13 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<int,int>'::__l7::<lambda_1>::operator()(&local_res8);
    }
    else if (pFVar13->_padding_ != 0) {
      FVar14 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar13);
      uVar11 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar13);
      pFVar15 = FDataflowConnection::GetOwningNodeGuid
                          ((FDataflowConnection *)pFVar13,(FGuid *)&local_50);
      local_res18[0] = (FName)pFVar13->_padding_;
      uVar16 = CityHash64((char *)&pFVar13->_padding_,0x10);
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      FVar17 = (FName)::operator_new(0x40);
      FVar25 = local_res8;
      if (FVar17 != (FName)0x0) {
        uVar3 = *(undefined8 *)FVar14.Value;
        uVar7 = pFVar15->A;
        uVar8 = pFVar15->B;
        uVar9 = pFVar15->C;
        uVar10 = pFVar15->D;
        *(undefined4 *)((longlong)FVar17 + 8) = 0;
        *(undefined8 *)((longlong)FVar17 + 0x30) = uVar3;
        *(FName *)((longlong)FVar17 + 0x20) = local_res18[0];
        *(undefined ***)FVar17 = &___7__TContextCacheElement_H_Dataflow_UE__6B_;
        *(uint *)((longlong)FVar17 + 0xc) = uVar7;
        *(uint *)((longlong)FVar17 + 0x10) = uVar8;
        *(uint *)((longlong)FVar17 + 0x14) = uVar9;
        *(uint *)((longlong)FVar17 + 0x18) = uVar10;
        *(uint *)((longlong)FVar17 + 0x28) = uVar11;
        *(undefined4 *)((longlong)FVar17 + 0x38) = 0xffffffff;
      }
      if (local_res8 != (FName)0x0) {
        puVar4 = *(undefined8 **)local_res8;
        local_res8 = FVar17;
        (*(code *)*puVar4)(FVar25,1);
        FVar17 = local_res8;
      }
      local_res8 = FVar17;
      if (local_res8 == (FName)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar16,(FProperty *)local_res18[0],pFVar15,uVar11,
                   (FTimestamp *)FVar14.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar16 & 0xffffffff,&local_res8);
      }
      if (local_res8 != (FName)0x0) {
        (*(code *)**(undefined8 **)local_res8)(local_res8,1);
      }
    }
    pTVar18 = &FDataflowNode::GetValue<TObjectPtr<USkeletalMesh_const_>_>
                         ((FDataflowNode *)this,param_1,&this->SkeletalMesh)->field0_0x0;
    TVar5.field0_0x0 = (TObjectPtr<USkeletalMesh_const_>_u_0)pTVar18->DebugPtr;
    if (TVar5.field0_0x0 != (USkeletalMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar5.field0_0x0);
      }
      FVar25 = this->BoneName;
      if ((FVar25 == (FName)0x0) &&
         (pTVar19 = UE::Dataflow::FContext::
                    AsType<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>_>(param_1),
         pTVar19 != (TEngineContext<UE::Dataflow::FContextSingle> *)0x0)) {
        local_68._0_8_ = (FScriptContainerElement *)0x0;
        local_68._8_8_ = FVar25;
        pFVar20 = ::FName::FName(&local_res8,"BoneName");
        pFVar21 = UE::Dataflow::Reflection::FindOverrideProperty<FString>
                            ((FString *)&local_50,(pTVar19->Owner).field0_0x0.DebugPtr,
                             this->PropertyName,*pFVar20,(FString *)local_68);
        iVar2 = (pFVar21->Data).ArrayNum;
        iVar24 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar24 = 0;
        }
        pFVar20 = ::FName::FName(local_res18,iVar24,
                                 (wchar_t *)(pFVar21->Data).AllocatorInstance.Data,FNAME_Add);
        FVar25 = *pFVar20;
        if (local_50.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data);
        }
        if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_68._0_8_);
        }
      }
      lVar22 = (**(code **)(*(longlong *)TVar5.field0_0x0 + 0x318))(TVar5.field0_0x0);
      iVar24 = -1;
      if ((FVar25 != (FName)0x0) &&
         (piVar23 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                            *)(lVar22 + 0x90),FVar25), piVar23 != (int *)0x0)) {
        iVar24 = *piVar23;
      }
      local_68._8_4_ = -1;
      local_58 = (void *)0x0;
      local_68._0_8_ = piVar1;
      pFVar13 = FDataflowNode::FindOutput((FDataflowNode *)this,(FConnectionReference *)local_68);
      if (pFVar13 == (FDataflowOutput *)0x0) {
        `FDataflowNode::SetValue<int_&,int>'::__l7::<lambda_1>::operator()(&local_res8);
      }
      else if (pFVar13->_padding_ != 0) {
        FVar14 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar13);
        uVar11 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar13);
        pFVar15 = FDataflowConnection::GetOwningNodeGuid
                            ((FDataflowConnection *)pFVar13,(FGuid *)&local_50);
        pFVar6 = (FProperty *)pFVar13->_padding_;
        uVar16 = CityHash64((char *)&pFVar13->_padding_,0x10);
        local_res8.ComparisonIndex.Value = 0;
        local_res8.Number = 0;
        FVar17 = (FName)::operator_new(0x40);
        FVar25 = local_res8;
        if (FVar17 != (FName)0x0) {
          uVar7 = pFVar15->A;
          uVar8 = pFVar15->B;
          uVar9 = pFVar15->C;
          uVar10 = pFVar15->D;
          *(undefined8 *)((longlong)FVar17 + 0x30) = *(undefined8 *)FVar14.Value;
          *(undefined ***)FVar17 = &___7__TContextCacheElement_AEAH_Dataflow_UE__6B_;
          *(undefined4 *)((longlong)FVar17 + 8) = 0;
          *(uint *)((longlong)FVar17 + 0xc) = uVar7;
          *(uint *)((longlong)FVar17 + 0x10) = uVar8;
          *(uint *)((longlong)FVar17 + 0x14) = uVar9;
          *(uint *)((longlong)FVar17 + 0x18) = uVar10;
          *(FProperty **)((longlong)FVar17 + 0x20) = pFVar6;
          *(uint *)((longlong)FVar17 + 0x28) = uVar11;
          *(int *)((longlong)FVar17 + 0x38) = iVar24;
        }
        if (local_res8 != (FName)0x0) {
          puVar4 = *(undefined8 **)local_res8;
          local_res8 = FVar17;
          (*(code *)*puVar4)(FVar25,1);
          FVar17 = local_res8;
        }
        local_res8 = FVar17;
        if (local_res8 == (FName)0x0) {
          UE::Dataflow::FContext::SetNullData
                    (param_1,(uint)uVar16,pFVar6,pFVar15,uVar11,(FTimestamp *)FVar14.Value);
        }
        else {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar16 & 0xffffffff,&local_res8);
        }
        if (local_res8 != (FName)0x0) {
          (*(code *)**(undefined8 **)local_res8)(local_res8,1);
        }
      }
    }
  }
  return;
}

// FSkeletalMeshBoneDataflowNode @ 14dacdd10

FSkeletalMeshBoneDataflowNode * __thiscall
FSkeletalMeshBoneDataflowNode::FSkeletalMeshBoneDataflowNode
          (FSkeletalMeshBoneDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->_padding_ = (longlong)&___7FSkeletalMeshBoneDataflowNode__6B_;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  (this->SkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  this->BoneIndexOut = -1;
  ::FName::FName(&this->PropertyName,"Overrides");
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->SkeletalMesh;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->BoneIndexOut;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

