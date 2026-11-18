// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e82c470

UScriptStruct * __cdecl FMakeTransformDataflowNode_v2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeTransformDataflowNode_v2,(UObject *)pUVar1,
                         L"MakeTransformDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode_v2.OuterSingleton;
}

// GetType @ 14e82c5d0

FName __thiscall FMakeTransformDataflowNode_v2::GetType(FMakeTransformDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeTransformDataflowNode_v2");
  return in_RDX;
}

// IsA @ 14e82c610

bool __thiscall
FMakeTransformDataflowNode_v2::IsA(FMakeTransformDataflowNode_v2 *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeTransformDataflowNode_v2");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e82c678;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e82c678:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e82c696;
      }
    }
  }
  bVar5 = true;
LAB_14e82c696:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e82c6d0

FStructOnScope * __thiscall
FMakeTransformDataflowNode_v2::NewStructOnScope(FMakeTransformDataflowNode_v2 *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode_v2.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode_v2.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeTransformDataflowNode_v2,(UObject *)pUVar2
                           ,L"MakeTransformDataflowNode_v2");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode_v2.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e82c750

void __thiscall
FMakeTransformDataflowNode_v2::SerializeInternal
          (FMakeTransformDataflowNode_v2 *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeTransformDataflowNode_v2,(UObject *)pUVar1,
                         L"MakeTransformDataflowNode_v2");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode_v2.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode_v2.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e82c7cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e82c7e0

FName __thiscall FMakeTransformDataflowNode_v2::GetDisplayName(FMakeTransformDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeTransform");
  return in_RDX;
}

// GetCategory @ 14e82c820

FName __thiscall FMakeTransformDataflowNode_v2::GetCategory(FMakeTransformDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Transform");
  return in_RDX;
}

// GetTags @ 14e82c850

FString * __thiscall
FMakeTransformDataflowNode_v2::GetTags
          (FMakeTransformDataflowNode_v2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e82c880

UScriptStruct * __thiscall
FMakeTransformDataflowNode_v2::TypedScriptStruct(FMakeTransformDataflowNode_v2 *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeTransformDataflowNode_v2,(UObject *)pUVar1,
                         L"MakeTransformDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode_v2.OuterSingleton;
}

// Evaluate @ 14e82c9a0

void __thiscall
FMakeTransformDataflowNode_v2::Evaluate
          (FMakeTransformDataflowNode_v2 *this,FContext *param_1,FDataflowOutput *param_2)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  FMakeTransformDataflowNode_v2 *pFVar7;
  bool bVar8;
  uint uVar9;
  undefined1 *puVar10;
  FDataflowInput *pFVar11;
  TVector<double> *pTVar12;
  TQuat<double> *pTVar13;
  undefined8 uVar14;
  ulong64 uVar15;
  undefined8 *puVar16;
  uchar *puVar17;
  FDataflowOutput *pFVar18;
  FTimestamp FVar19;
  FGuid *pFVar20;
  ulong64 uVar21;
  FContextCacheElementUStruct *this_00;
  FMakeTransformDataflowNode_v2 *pFVar22;
  FMakeTransformDataflowNode_v2 *local_res8;
  TVector<double>_u_0 local_168;
  FConnectionReference local_148;
  FGuid local_128;
  TQuat<double> local_118;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_c8;
  TTransform<double> local_b8;
  
  local_res8 = this;
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TTransform<double> *)puVar10 != &this->Transform) {
    return;
  }
  local_148.Reference = &this->Translation;
  pFVar22 = (FMakeTransformDataflowNode_v2 *)0x0;
  local_148.Index = -1;
  local_148.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_148);
  pTVar12 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                      (pFVar11,param_1,local_148.Reference);
  local_c8 = (pTVar12->field0_0x0)._s_0.Z;
  dVar2 = (pTVar12->field0_0x0)._s_0.X;
  dVar3 = (pTVar12->field0_0x0)._s_0.Y;
  local_148.Reference = &this->Scale;
  local_148.Index = -1;
  local_148.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_148);
  pTVar12 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                      (pFVar11,param_1,local_148.Reference);
  local_168._8_4_ = 0xffffffff;
  local_168._s_0.Z = 0.0;
  local_e8 = *(double *)((longlong)&pTVar12->field0_0x0 + 0x10);
  dVar4 = (pTVar12->field0_0x0)._s_0.X;
  dVar5 = (pTVar12->field0_0x0)._s_0.Y;
  local_168._s_0.X = (double)&this->Rotation;
  pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_168._s_0);
  if (pFVar11->Connection == (FDataflowOutput *)0x0) {
    local_168._8_4_ = 0xffffffff;
    local_168._s_0.Z = 0.0;
    local_168._0_8_ = &this->Rotator;
    pFVar11 = FDataflowNode::FindInput
                        ((FDataflowNode *)this,(FConnectionReference *)&local_168._s_0);
    local_168._8_4_ = 0xffffffff;
    local_168._s_0.Z = 0.0;
    if (pFVar11->Connection == (FDataflowOutput *)0x0) {
      local_168._0_8_ = &this->Quat;
      pFVar11 = FDataflowNode::FindInput
                          ((FDataflowNode *)this,(FConnectionReference *)&local_168._s_0);
      if (pFVar11->Connection == (FDataflowOutput *)0x0) {
        local_b8.Rotation.ZW.m128d_f64[0]._0_4_ = (undefined4)local_e8;
        local_b8.Rotation.ZW.m128d_f64[0]._4_4_ = local_e8._4_4_;
      }
      else {
        local_168._8_4_ = 0xffffffff;
        local_168._s_0.Z = 0.0;
        local_168._s_0.X = (double)&this->Quat;
        pFVar11 = FDataflowNode::FindInput
                            ((FDataflowNode *)this,(FConnectionReference *)&local_168._s_0);
        uVar14 = local_168._s_0.X;
        pFVar18 = pFVar11->Connection;
        if (pFVar18 != (FDataflowOutput *)0x0) {
          bVar8 = FDataflowOutput::HasFrozenValue(pFVar18);
          if (bVar8) {
            puVar17 = FDataflowOutput::GetFrozenPropertyValue(pFVar18,(uchar *)uVar14);
            local_f8 = *(undefined4 *)puVar17;
            uStack_f4 = *(undefined4 *)(puVar17 + 4);
            uStack_f0 = *(undefined4 *)(puVar17 + 8);
            uStack_ec = *(undefined4 *)(puVar17 + 0xc);
            uStack_e0 = *(undefined4 *)(puVar17 + 0x18);
            uStack_dc = *(undefined4 *)(puVar17 + 0x1c);
            local_b8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(puVar17 + 0x10);
            local_b8.Rotation.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)(puVar17 + 0x14);
            goto LAB_14e82ce49;
          }
          bVar8 = FDataflowOutput::Evaluate(pFVar18,param_1);
          if (!bVar8) {
            FVar19 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar11);
            uVar9 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar11);
            pFVar20 = FDataflowConnection::GetOwningNodeGuid
                                ((FDataflowConnection *)pFVar11,(FGuid *)&local_148);
            pFVar1 = (FProperty *)pFVar11->_padding_;
            uVar21 = CityHash64((char *)&pFVar18->_padding_,0x10);
            UE::Dataflow::FContext::SetData<UE::Math::TQuat<double>_const_&>
                      (param_1,(uint)uVar21,pFVar1,(TQuat<double> *)uVar14,pFVar20,uVar9,
                       (FTimestamp *)FVar19.Value);
            this = local_res8;
          }
          uVar21 = UE::Dataflow::FTimestamp::Invalid;
          uVar15 = CityHash64((char *)&pFVar18->_padding_,0x10);
          bVar8 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar15,(FTimestamp)uVar21);
          if (bVar8) {
            pFVar1 = (FProperty *)pFVar11->_padding_;
            uVar21 = CityHash64((char *)&pFVar18->_padding_,0x10);
            puVar16 = (undefined8 *)
                      (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar21 & 0xffffffff);
            if (puVar16 != (undefined8 *)0x0) {
              uVar14 = UE::Dataflow::FContextCacheElementBase::
                       GetTypedData<UE::Math::TQuat<double>_>
                                 ((FContextCacheElementBase *)*puVar16,(IContextCacheStore *)param_1
                                  ,pFVar1,(TQuat<double> *)uVar14);
            }
          }
        }
        local_f8 = *(undefined4 *)&((TQuat<double> *)uVar14)->X;
        uStack_f4 = *(undefined4 *)((longlong)&((TQuat<double> *)uVar14)->X + 4);
        uStack_f0 = *(undefined4 *)&((TQuat<double> *)uVar14)->Y;
        uStack_ec = *(undefined4 *)((longlong)&((TQuat<double> *)uVar14)->Y + 4);
        uStack_e0 = *(undefined4 *)&((TQuat<double> *)uVar14)->W;
        uStack_dc = *(undefined4 *)((longlong)&((TQuat<double> *)uVar14)->W + 4);
        local_b8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)&((TQuat<double> *)uVar14)->Z;
        local_b8.Rotation.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)&((TQuat<double> *)uVar14)->Z + 4);
      }
    }
    else {
      local_168._s_0.X = (double)&this->Rotator;
      pFVar11 = FDataflowNode::FindInput
                          ((FDataflowNode *)this,(FConnectionReference *)&local_168._s_0);
      uVar14 = local_168._s_0.X;
      pFVar18 = pFVar11->Connection;
      if (pFVar18 != (FDataflowOutput *)0x0) {
        bVar8 = FDataflowOutput::HasFrozenValue(pFVar18);
        if (bVar8) {
          uVar14 = FDataflowOutput::GetFrozenPropertyValue(pFVar18,(uchar *)uVar14);
        }
        else {
          bVar8 = FDataflowOutput::Evaluate(pFVar18,param_1);
          if (!bVar8) {
            FVar19 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar11);
            uVar9 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar11);
            pFVar20 = FDataflowConnection::GetOwningNodeGuid
                                ((FDataflowConnection *)pFVar11,(FGuid *)&local_148);
            pFVar1 = (FProperty *)pFVar11->_padding_;
            uVar21 = CityHash64((char *)&pFVar18->_padding_,0x10);
            UE::Dataflow::FContext::SetData<UE::Math::TRotator<double>_const_&>
                      (param_1,(uint)uVar21,pFVar1,(TRotator<double> *)uVar14,pFVar20,uVar9,
                       (FTimestamp *)FVar19.Value);
            this = local_res8;
          }
          uVar21 = UE::Dataflow::FTimestamp::Invalid;
          uVar15 = CityHash64((char *)&pFVar18->_padding_,0x10);
          bVar8 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar15,(FTimestamp)uVar21);
          if (bVar8) {
            pFVar1 = (FProperty *)pFVar11->_padding_;
            uVar21 = CityHash64((char *)&pFVar18->_padding_,0x10);
            puVar16 = (undefined8 *)
                      (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar21 & 0xffffffff);
            if (puVar16 != (undefined8 *)0x0) {
              uVar14 = UE::Dataflow::FContextCacheElementBase::
                       GetTypedData<UE::Math::TRotator<double>_>
                                 ((FContextCacheElementBase *)*puVar16,(IContextCacheStore *)param_1
                                  ,pFVar1,(TRotator<double> *)uVar14);
            }
          }
        }
      }
      local_118.X = ((TRotator<double> *)uVar14)->Pitch;
      local_118.Y = ((TRotator<double> *)uVar14)->Yaw;
      local_118.Z = ((TRotator<double> *)uVar14)->Roll;
      pTVar13 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)&local_118,(TQuat<double> *)&local_168._s_0);
      local_f8 = *(undefined4 *)&pTVar13->X;
      uStack_f4 = *(undefined4 *)((longlong)&pTVar13->X + 4);
      uStack_f0 = *(undefined4 *)&pTVar13->Y;
      uStack_ec = *(undefined4 *)((longlong)&pTVar13->Y + 4);
      uStack_e0 = *(undefined4 *)&pTVar13->W;
      uStack_dc = *(undefined4 *)((longlong)&pTVar13->W + 4);
      local_b8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)&pTVar13->Z;
      local_b8.Rotation.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)&pTVar13->Z + 4);
    }
  }
  else {
    local_148.Index = -1;
    local_148.ContainerReference = (void *)0x0;
    local_148.Reference = &this->Rotation;
    pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_148);
    pTVar12 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar11,param_1,local_148.Reference);
    local_168._s_0.X = (pTVar12->field0_0x0)._s_0.X;
    local_168._s_0.Y = *(double *)((longlong)&pTVar12->field0_0x0 + 8);
    local_168._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
    pTVar13 = UE::Math::TQuat<double>::MakeFromEuler(&local_118,(TVector<double> *)&local_168._s_0);
    local_f8 = *(undefined4 *)&pTVar13->X;
    uStack_f4 = *(undefined4 *)((longlong)&pTVar13->X + 4);
    uStack_f0 = *(undefined4 *)&pTVar13->Y;
    uStack_ec = *(undefined4 *)((longlong)&pTVar13->Y + 4);
    uStack_e0 = *(undefined4 *)&pTVar13->W;
    uStack_dc = *(undefined4 *)((longlong)&pTVar13->W + 4);
    local_b8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)&pTVar13->Z;
    local_b8.Rotation.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)&pTVar13->Z + 4);
  }
LAB_14e82ce49:
  local_168._s_0.X = (double)&this->Transform;
  local_168._8_4_ = 0xffffffff;
  local_168._s_0.Z = 0.0;
  local_b8.Translation.ZW.m128d_f64[0] = local_c8;
  local_b8.Translation.ZW.m128d_f64[1] = 0.0;
  local_b8.Scale3D.ZW.m128d_f64[0] = local_e8;
  local_b8.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_b8.Rotation.XY.m128d_f64[0]._0_4_ = local_f8;
  local_b8.Rotation.XY.m128d_f64[0]._4_4_ = uStack_f4;
  local_b8.Rotation.XY.m128d_f64[1]._0_4_ = uStack_f0;
  local_b8.Rotation.XY.m128d_f64[1]._4_4_ = uStack_ec;
  local_b8.Rotation.ZW.m128d_f64[1]._0_4_ = uStack_e0;
  local_b8.Rotation.ZW.m128d_f64[1]._4_4_ = uStack_dc;
  local_b8.Translation.XY.m128d_f64[0] = dVar2;
  local_b8.Translation.XY.m128d_f64[1] = dVar3;
  local_b8.Scale3D.XY.m128d_f64[0] = dVar4;
  local_b8.Scale3D.XY.m128d_f64[1] = dVar5;
  pFVar18 = FDataflowNode::FindOutput((FDataflowNode *)this,(FConnectionReference *)&local_168._s_0)
  ;
  if (pFVar18 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<UE::Math::TTransform<double>_&,UE::Math::TTransform<double>_>'::__l7::
    <lambda_1>::operator()(&local_res8);
  }
  else if (pFVar18->_padding_ != 0) {
    FVar19 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar18);
    uVar9 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar18);
    pFVar20 = FDataflowConnection::GetOwningNodeGuid
                        ((FDataflowConnection *)pFVar18,(FGuid *)&local_148);
    pFVar1 = (FProperty *)pFVar18->_padding_;
    uVar21 = CityHash64((char *)&pFVar18->_padding_,0x10);
    local_res8 = (FMakeTransformDataflowNode_v2 *)0x0;
    this_00 = ::operator_new(0x58);
    if (this_00 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
      local_128.A = pFVar20->A;
      local_128.B = pFVar20->B;
      local_128.C = pFVar20->C;
      local_128.D = pFVar20->D;
      pFVar22 = (FMakeTransformDataflowNode_v2 *)
                UE::Dataflow::FContextCacheElementUStruct::
                FContextCacheElementUStruct<UE::Math::TTransform<double>_&>
                          (this_00,&local_128,pFVar1,&local_b8,uVar9,(FTimestamp)*FVar19.Value);
    }
    pFVar7 = local_res8;
    if (local_res8 != (FMakeTransformDataflowNode_v2 *)0x0) {
      plVar6 = &local_res8->_padding_;
      local_res8 = pFVar22;
      (**(code **)*plVar6)(pFVar7,1);
      pFVar22 = local_res8;
    }
    local_res8 = pFVar22;
    if (local_res8 == (FMakeTransformDataflowNode_v2 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar21,pFVar1,pFVar20,uVar9,(FTimestamp *)FVar19.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar21 & 0xffffffff,&local_res8);
    }
    if (local_res8 != (FMakeTransformDataflowNode_v2 *)0x0) {
      (**(code **)local_res8->_padding_)(local_res8,1);
    }
  }
  return;
}

// FMakeTransformDataflowNode_v2 @ 14e923fc0

FMakeTransformDataflowNode_v2 * __thiscall
FMakeTransformDataflowNode_v2::FMakeTransformDataflowNode_v2
          (FMakeTransformDataflowNode_v2 *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FDataflowInput *pFVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  local_68.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FMakeTransformDataflowNode_v2__6B_;
  (this->Rotation).field0_0x0._s_0.X = 0.0;
  local_68.Reference = &this->Translation;
  (((TVector<double> *)local_68.Reference)->field0_0x0)._s_0.X = 0.0;
  (this->Translation).field0_0x0._s_0.Y = 0.0;
  (this->Translation).field0_0x0._s_0.Z = 0.0;
  (this->Rotation).field0_0x0._s_0.Y = 0.0;
  (this->Rotation).field0_0x0._s_0.Z = 0.0;
  (this->Rotator).Pitch = 0.0;
  (this->Rotator).Yaw = 0.0;
  (this->Rotator).Roll = 0.0;
  (this->Quat).W = 1.0;
  (this->Quat).X = 0.0;
  (this->Quat).Y = 0.0;
  (this->Quat).Z = 0.0;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Rotation;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Rotator;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Quat;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Scale;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Transform;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_68);
  }
  return this;
}

// FMakeTransformDataflowNode_v2 @ 14e9241e0

FMakeTransformDataflowNode_v2 * __thiscall
FMakeTransformDataflowNode_v2::FMakeTransformDataflowNode_v2(FMakeTransformDataflowNode_v2 *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FMakeTransformDataflowNode_v2__6B_;
  (this->Translation).field0_0x0._s_0.X = 0.0;
  (this->Translation).field0_0x0._s_0.Y = 0.0;
  (this->Translation).field0_0x0._s_0.Z = 0.0;
  (this->Rotation).field0_0x0._s_0.X = 0.0;
  (this->Rotation).field0_0x0._s_0.Y = 0.0;
  (this->Rotation).field0_0x0._s_0.Z = 0.0;
  (this->Rotator).Pitch = 0.0;
  (this->Rotator).Yaw = 0.0;
  (this->Rotator).Roll = 0.0;
  (this->Quat).X = 0.0;
  (this->Quat).Y = 0.0;
  (this->Quat).Z = 0.0;
  (this->Quat).W = 1.0;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

