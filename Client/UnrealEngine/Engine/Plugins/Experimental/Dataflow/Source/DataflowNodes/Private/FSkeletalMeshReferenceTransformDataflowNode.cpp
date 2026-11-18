// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 12

// StaticStruct @ 14dabea30

UScriptStruct * __cdecl FSkeletalMeshReferenceTransformDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode,
                         (UObject *)pUVar1,L"SkeletalMeshReferenceTransformDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode.
         OuterSingleton;
}

// GetType @ 14dabea70

FName __thiscall
FSkeletalMeshReferenceTransformDataflowNode::GetType
          (FSkeletalMeshReferenceTransformDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSkeletalMeshReferenceTransformDataflowNode");
  return in_RDX;
}

// IsA @ 14dabeaa0

bool __thiscall
FSkeletalMeshReferenceTransformDataflowNode::IsA
          (FSkeletalMeshReferenceTransformDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSkeletalMeshReferenceTransformDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14dabeb08;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14dabeb08:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14dabeb26;
      }
    }
  }
  bVar5 = true;
LAB_14dabeb26:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14dabeb60

FStructOnScope * __thiscall
FSkeletalMeshReferenceTransformDataflowNode::NewStructOnScope
          (FSkeletalMeshReferenceTransformDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
      Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode,
                           (UObject *)pUVar2,L"SkeletalMeshReferenceTransformDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14dabebe0

void __thiscall
FSkeletalMeshReferenceTransformDataflowNode::SerializeInternal
          (FSkeletalMeshReferenceTransformDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode,
                         (UObject *)pUVar1,L"SkeletalMeshReferenceTransformDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dabec5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14dabec70

FName __thiscall
FSkeletalMeshReferenceTransformDataflowNode::GetDisplayName
          (FSkeletalMeshReferenceTransformDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SkeletalMeshReferenceTransform");
  return in_RDX;
}

// GetCategory @ 14dabeca0

FName __thiscall
FSkeletalMeshReferenceTransformDataflowNode::GetCategory
          (FSkeletalMeshReferenceTransformDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"General");
  return in_RDX;
}

// GetTags @ 14dabecd0

FString * __thiscall
FSkeletalMeshReferenceTransformDataflowNode::GetTags
          (FSkeletalMeshReferenceTransformDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Skeletal Mesh");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14dabed00

UScriptStruct * __thiscall
FSkeletalMeshReferenceTransformDataflowNode::TypedScriptStruct
          (FSkeletalMeshReferenceTransformDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode,
                         (UObject *)pUVar1,L"SkeletalMeshReferenceTransformDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14dabed40

void __thiscall
FSkeletalMeshReferenceTransformDataflowNode::Evaluate
          (FSkeletalMeshReferenceTransformDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  TTransform<double> *pTVar1;
  TObjectPtr<USkeletalMesh_const_> TVar2;
  code *pcVar3;
  longlong *plVar4;
  FProperty *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  FDataflowOutput *pFVar10;
  FTimestamp FVar11;
  ulong64 uVar12;
  FContextCacheElementUStruct *pFVar13;
  FContextCacheElementUStruct *pFVar14;
  FDataflowInput *this_00;
  uint *puVar15;
  TObjectPtr<USkeletalMesh_const_>_u_0 *pTVar16;
  FReferenceSkeleton *pFVar17;
  FGuid *pFVar18;
  FContextCacheElementUStruct *pFVar19;
  TTransform<double> *pTVar20;
  FProperty *local_res8;
  FProperty *local_res18;
  FContextCacheElementUStruct *local_res20;
  FContextCacheElementUStruct *local_e8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_e0;
  FConnectionReference local_d0;
  FConnectionReference local_b8;
  FConnectionReference local_a0;
  FGuid local_78;
  FGuid local_68;
  FGuid local_58;
  FGuid local_48;
  
  pTVar1 = &this->TransformOut;
  puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TTransform<double> *)puVar9 == pTVar1) {
    pFVar19 = (FContextCacheElementUStruct *)0x0;
    local_b8.ContainerReference = (void *)0x0;
    local_b8.Index = -1;
    local_b8.Reference = pTVar1;
    pFVar10 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_b8);
    if (pFVar10 == (FDataflowOutput *)0x0) {
      local_res8 = (FProperty *)((ulonglong)local_res8 & 0xffffffffffffff00);
      `FDataflowNode::SetValue<UE::Math::TTransform<double>_const_&,UE::Math::TTransform<double>_>'
      ::__l7::<lambda_1>::operator()(&local_res8);
    }
    else if (pFVar10->_padding_ != 0) {
      FVar11 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar10);
      uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar10);
      local_res8 = (FProperty *)
                   FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)pFVar10,&local_58);
      local_res18 = (FProperty *)pFVar10->_padding_;
      uVar12 = CityHash64((char *)&pFVar10->_padding_,0x10);
      local_res20 = (FContextCacheElementUStruct *)0x0;
      pFVar13 = ::operator_new(0x58);
      pFVar14 = pFVar19;
      if (pFVar13 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
        local_78._0_8_ = local_res8->_padding_;
        local_78._8_8_ = local_res8->_padding_;
        pFVar14 = UE::Dataflow::FContextCacheElementUStruct::
                  FContextCacheElementUStruct<UE::Math::TTransform<double>_const_&>
                            (pFVar13,&local_78,local_res18,&UE::Math::TTransform<double>::Identity,
                             uVar7,(FTimestamp)*FVar11.Value);
      }
      pFVar13 = local_res20;
      if (local_res20 != (FContextCacheElementUStruct *)0x0) {
        plVar4 = &local_res20->_padding_;
        local_res20 = pFVar14;
        (**(code **)*plVar4)(pFVar13,1);
        pFVar14 = local_res20;
      }
      local_res20 = pFVar14;
      if (local_res20 == (FContextCacheElementUStruct *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar12,local_res18,(FGuid *)local_res8,uVar7,
                   (FTimestamp *)FVar11.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar12 & 0xffffffff,&local_res20);
      }
      if (local_res20 != (FContextCacheElementUStruct *)0x0) {
        (**(code **)local_res20->_padding_)(local_res20,1);
      }
    }
    local_d0.Reference = &this->BoneIndexIn;
    local_d0.Index = -1;
    local_d0.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_d0);
    puVar15 = (uint *)FDataflowInput::GetValue<int>(this_00,param_1,local_d0.Reference);
    uVar7 = *puVar15;
    if (-1 < (int)uVar7) {
      pTVar16 = &FDataflowNode::GetValue<TObjectPtr<USkeletalMesh_const_>_>
                           ((FDataflowNode *)this,param_1,&this->SkeletalMeshIn)->field0_0x0;
      TVar2.field0_0x0 = (TObjectPtr<USkeletalMesh_const_>_u_0)pTVar16->DebugPtr;
      if (TVar2.field0_0x0 != (USkeletalMesh *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
        }
        local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e0.ArrayNum = 0;
        local_e0.ArrayMax = 0;
        pFVar17 = (FReferenceSkeleton *)
                  (**(code **)(*(longlong *)TVar2.field0_0x0 + 0x318))(TVar2.field0_0x0);
        UE::Dataflow::Animation::GlobalTransforms(pFVar17,&local_e0);
        if ((int)uVar7 < local_e0.ArrayNum) {
          uVar8 = 0;
          if ((int)uVar7 < local_e0.ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar20 = (TTransform<double> *)
                    (local_e0.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x60);
          local_a0.Index = -1;
          local_a0.ContainerReference = (void *)0x0;
          local_a0.Reference = pTVar1;
          pFVar10 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_a0);
          if (pFVar10 == (FDataflowOutput *)0x0) {
            `FDataflowNode::SetValue<UE::Math::TTransform<double>_&,UE::Math::TTransform<double>_>'
            ::__l7::<lambda_1>::operator()(&local_res18);
          }
          else if (pFVar10->_padding_ != 0) {
            FVar11 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar10);
            uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar10);
            pFVar18 = FDataflowConnection::GetOwningNodeGuid
                                ((FDataflowConnection *)pFVar10,&local_48);
            local_res8 = (FProperty *)pFVar10->_padding_;
            uVar12 = CityHash64((char *)&pFVar10->_padding_,0x10);
            local_e8 = (FContextCacheElementUStruct *)0x0;
            pFVar14 = ::operator_new(0x58);
            pFVar5 = local_res8;
            if (pFVar14 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
              local_68.A = pFVar18->A;
              local_68.B = pFVar18->B;
              local_68.C = pFVar18->C;
              local_68.D = pFVar18->D;
              pFVar19 = UE::Dataflow::FContextCacheElementUStruct::
                        FContextCacheElementUStruct<UE::Math::TTransform<double>_&>
                                  (pFVar14,&local_68,local_res8,pTVar20,uVar7,
                                   (FTimestamp)*FVar11.Value);
            }
            pFVar14 = local_e8;
            if (local_e8 != (FContextCacheElementUStruct *)0x0) {
              plVar4 = &local_e8->_padding_;
              local_e8 = pFVar19;
              (**(code **)*plVar4)(pFVar14,1);
              pFVar19 = local_e8;
            }
            local_e8 = pFVar19;
            if (local_e8 == (FContextCacheElementUStruct *)0x0) {
              UE::Dataflow::FContext::SetNullData
                        (param_1,(uint)uVar12,pFVar5,pFVar18,uVar7,(FTimestamp *)FVar11.Value);
            }
            else {
              (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar12 & 0xffffffff,&local_e8);
            }
            if (local_e8 != (FContextCacheElementUStruct *)0x0) {
              (**(code **)local_e8->_padding_)(local_e8,1);
            }
          }
        }
        if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// FSkeletalMeshReferenceTransformDataflowNode @ 14dacde10

FSkeletalMeshReferenceTransformDataflowNode * __thiscall
FSkeletalMeshReferenceTransformDataflowNode::FSkeletalMeshReferenceTransformDataflowNode
          (FSkeletalMeshReferenceTransformDataflowNode *this,FNodeParameters *param_1,FGuid *param_2
          )

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
  this->_padding_ = (longlong)&___7FSkeletalMeshReferenceTransformDataflowNode__6B_;
  this->BoneIndexIn = -1;
  local_58.Reference = &this->SkeletalMeshIn;
  (((TObjectPtr<USkeletalMesh_const_> *)local_58.Reference)->field0_0x0).DebugPtr =
       (USkeletalMesh *)0x0;
  *&(this->TransformOut).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  *&(this->TransformOut).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->TransformOut).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_58.ContainerReference = (void *)0x0;
  *&(this->TransformOut).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->TransformOut).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->TransformOut).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->BoneIndexIn;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->TransformOut;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FSkeletalMeshReferenceTransformDataflowNode @ 14dacdf50

FSkeletalMeshReferenceTransformDataflowNode * __thiscall
FSkeletalMeshReferenceTransformDataflowNode::FSkeletalMeshReferenceTransformDataflowNode
          (FSkeletalMeshReferenceTransformDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->BoneIndexIn = -1;
  this->_padding_ = (longlong)&___7FSkeletalMeshReferenceTransformDataflowNode__6B_;
  (this->SkeletalMeshIn).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  *&(this->TransformOut).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->TransformOut).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->TransformOut).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->TransformOut).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->TransformOut).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->TransformOut).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

