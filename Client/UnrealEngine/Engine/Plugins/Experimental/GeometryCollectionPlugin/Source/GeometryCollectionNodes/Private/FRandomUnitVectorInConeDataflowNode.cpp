// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8966b0

UScriptStruct * __cdecl FRandomUnitVectorInConeDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomUnitVectorInConeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRandomUnitVectorInConeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomUnitVectorInConeDataflowNode,
                         (UObject *)pUVar1,L"RandomUnitVectorInConeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRandomUnitVectorInConeDataflowNode.OuterSingleton;
}

// GetType @ 14e8967f0

FName __thiscall
FRandomUnitVectorInConeDataflowNode::GetType(FRandomUnitVectorInConeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FRandomUnitVectorInConeDataflowNode");
  return in_RDX;
}

// IsA @ 14e896860

bool __thiscall
FRandomUnitVectorInConeDataflowNode::IsA(FRandomUnitVectorInConeDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FRandomUnitVectorInConeDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8968c8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8968c8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8968e6;
      }
    }
  }
  bVar5 = true;
LAB_14e8968e6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e896920

FStructOnScope * __thiscall
FRandomUnitVectorInConeDataflowNode::NewStructOnScope(FRandomUnitVectorInConeDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FRandomUnitVectorInConeDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FRandomUnitVectorInConeDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRandomUnitVectorInConeDataflowNode,
                           (UObject *)pUVar2,L"RandomUnitVectorInConeDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FRandomUnitVectorInConeDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8969a0

void __thiscall
FRandomUnitVectorInConeDataflowNode::SerializeInternal
          (FRandomUnitVectorInConeDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomUnitVectorInConeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRandomUnitVectorInConeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomUnitVectorInConeDataflowNode,
                         (UObject *)pUVar1,L"RandomUnitVectorInConeDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FRandomUnitVectorInConeDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FRandomUnitVectorInConeDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e896a1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e896a30

FName __thiscall
FRandomUnitVectorInConeDataflowNode::GetDisplayName(FRandomUnitVectorInConeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"RandomUnitVectorInCone");
  return in_RDX;
}

// GetCategory @ 14e896a60

FName __thiscall
FRandomUnitVectorInConeDataflowNode::GetCategory(FRandomUnitVectorInConeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Random");
  return in_RDX;
}

// GetTags @ 14e896a90

FString * __thiscall
FRandomUnitVectorInConeDataflowNode::GetTags
          (FRandomUnitVectorInConeDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e896ac0

UScriptStruct * __thiscall
FRandomUnitVectorInConeDataflowNode::TypedScriptStruct(FRandomUnitVectorInConeDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomUnitVectorInConeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRandomUnitVectorInConeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomUnitVectorInConeDataflowNode,
                         (UObject *)pUVar1,L"RandomUnitVectorInConeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRandomUnitVectorInConeDataflowNode.OuterSingleton;
}

// Evaluate @ 14e896c20

void __thiscall
FRandomUnitVectorInConeDataflowNode::Evaluate
          (FRandomUnitVectorInConeDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  undefined1 *puVar2;
  FDataflowInput *pFVar3;
  TVector<double> *pTVar4;
  float *pfVar5;
  FRandomStream local_res8;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TVector<double> *)puVar2 == &this->ReturnValue) {
    local_48._s_0.X = (double)&this->ConeDirection;
    local_48._8_4_ = 0xffffffff;
    local_48._s_0.Z = 0.0;
    pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_48._s_0);
    pTVar4 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                       (pFVar3,param_1,(TVector<double> *)local_48._s_0.X);
    local_30._s_0.X = (pTVar4->field0_0x0)._s_0.X;
    local_30._s_0.Y = (pTVar4->field0_0x0)._s_0.Y;
    local_30._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
    local_48._s_0.X = (double)&this->ConeHalfAngle;
    local_48._8_4_ = 0xffffffff;
    local_48._s_0.Z = 0.0;
    pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_48._s_0);
    pfVar5 = FDataflowInput::GetValue<float>(pFVar3,param_1,(float *)local_48._s_0.X);
    fVar1 = *pfVar5;
    if (this->bDeterministic == false) {
      pTVar4 = FMath::VRandCone((TVector<double> *)&local_48._s_0,(TVector<double> *)&local_30._s_0,
                                fVar1);
    }
    else {
      local_48._s_0.X = (double)&this->RandomSeed;
      local_48._8_4_ = 0xffffffff;
      local_48._s_0.Z = 0.0;
      pFVar3 = FDataflowNode::FindInput
                         ((FDataflowNode *)this,(FConnectionReference *)&local_48._s_0);
      pfVar5 = FDataflowInput::GetValue<float>(pFVar3,param_1,(float *)local_48._s_0.X);
      local_res8.InitialSeed = (int)*pfVar5;
      local_res8.Seed = local_res8.InitialSeed;
      pTVar4 = FRandomStream::VRandCone
                         (&local_res8,(TVector<double> *)&local_48._s_0,
                          (TVector<double> *)&local_30._s_0,fVar1);
    }
    FDataflowNode::SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_>
              ((FDataflowNode *)this,param_1,pTVar4,&this->ReturnValue);
  }
  return;
}

// FRandomUnitVectorInConeDataflowNode @ 14e929d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FRandomUnitVectorInConeDataflowNode * __thiscall
FRandomUnitVectorInConeDataflowNode::FRandomUnitVectorInConeDataflowNode
          (FRandomUnitVectorInConeDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  float *pfVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->bDeterministic = false;
  this->_padding_ = (longlong)&___7FRandomUnitVectorInConeDataflowNode__6B_;
  pfVar1 = &this->RandomSeed;
  *pfVar1 = 0.0;
  (this->ConeDirection).field0_0x0._s_0.X = 0.0;
  (this->ConeDirection).field0_0x0._s_0.Z = 1.0;
  (this->ConeDirection).field0_0x0._s_0.Y = 0.0;
  this->ConeHalfAngle = 0.7853982;
  (this->ReturnValue).field0_0x0._s_0.X = 0.0;
  (this->ReturnValue).field0_0x0._s_0.Y = 0.0;
  (this->ReturnValue).field0_0x0._s_0.Z = 0.0;
  uVar2 = rand();
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  *pfVar1 = (float)(uVar2 & 0x7fff) * ___real_40c35187 - __real_47c35000;
  local_68.Reference = pfVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->ConeDirection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->ConeHalfAngle;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->ReturnValue;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_68);
  }
  return this;
}

// FRandomUnitVectorInConeDataflowNode @ 14e929eb0

FRandomUnitVectorInConeDataflowNode * __thiscall
FRandomUnitVectorInConeDataflowNode::FRandomUnitVectorInConeDataflowNode
          (FRandomUnitVectorInConeDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->bDeterministic = false;
  this->RandomSeed = 0.0;
  this->_padding_ = (longlong)&___7FRandomUnitVectorInConeDataflowNode__6B_;
  (this->ConeDirection).field0_0x0._s_0.Z = 1.0;
  (this->ConeDirection).field0_0x0._s_0.X = 0.0;
  (this->ConeDirection).field0_0x0._s_0.Y = 0.0;
  this->ConeHalfAngle = 0.7853982;
  (this->ReturnValue).field0_0x0._s_0.X = 0.0;
  (this->ReturnValue).field0_0x0._s_0.Y = 0.0;
  (this->ReturnValue).field0_0x0._s_0.Z = 0.0;
  return this;
}

