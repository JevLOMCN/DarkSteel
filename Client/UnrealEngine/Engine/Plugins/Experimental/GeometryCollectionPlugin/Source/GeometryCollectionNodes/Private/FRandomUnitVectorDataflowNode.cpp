// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e895020

UScriptStruct * __cdecl FRandomUnitVectorDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomUnitVectorDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRandomUnitVectorDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomUnitVectorDataflowNode,(UObject *)pUVar1,
                         L"RandomUnitVectorDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRandomUnitVectorDataflowNode.OuterSingleton;
}

// GetType @ 14e895300

FName __thiscall FRandomUnitVectorDataflowNode::GetType(FRandomUnitVectorDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FRandomUnitVectorDataflowNode");
  return in_RDX;
}

// IsA @ 14e895330

bool __thiscall
FRandomUnitVectorDataflowNode::IsA(FRandomUnitVectorDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FRandomUnitVectorDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e895398;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e895398:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8953b6;
      }
    }
  }
  bVar5 = true;
LAB_14e8953b6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8953f0

FStructOnScope * __thiscall
FRandomUnitVectorDataflowNode::NewStructOnScope(FRandomUnitVectorDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FRandomUnitVectorDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FRandomUnitVectorDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRandomUnitVectorDataflowNode,(UObject *)pUVar2
                           ,L"RandomUnitVectorDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FRandomUnitVectorDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e895480

void __thiscall
FRandomUnitVectorDataflowNode::SerializeInternal
          (FRandomUnitVectorDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomUnitVectorDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRandomUnitVectorDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomUnitVectorDataflowNode,(UObject *)pUVar1,
                         L"RandomUnitVectorDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FRandomUnitVectorDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FRandomUnitVectorDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8954fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e895560

FName __thiscall FRandomUnitVectorDataflowNode::GetDisplayName(FRandomUnitVectorDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"RandomUnitVector");
  return in_RDX;
}

// GetCategory @ 14e895590

FName __thiscall FRandomUnitVectorDataflowNode::GetCategory(FRandomUnitVectorDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Random");
  return in_RDX;
}

// GetTags @ 14e8955c0

FString * __thiscall
FRandomUnitVectorDataflowNode::GetTags
          (FRandomUnitVectorDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8955f0

UScriptStruct * __thiscall
FRandomUnitVectorDataflowNode::TypedScriptStruct(FRandomUnitVectorDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomUnitVectorDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRandomUnitVectorDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomUnitVectorDataflowNode,(UObject *)pUVar1,
                         L"RandomUnitVectorDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRandomUnitVectorDataflowNode.OuterSingleton;
}

// Evaluate @ 14e895740

void __thiscall
FRandomUnitVectorDataflowNode::Evaluate
          (FRandomUnitVectorDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TVector<double> *pTVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  FDataflowInput *this_00;
  float *pfVar13;
  undefined1 auVar14 [16];
  double dVar15;
  FRandomStream local_res8;
  TVector<double>_u_0 local_88 [5];
  
  pTVar1 = &this->ReturnValue;
  puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  dVar9 = __real_3f1a36e2e0000000;
  fVar8 = __real_38800100;
  fVar7 = __real_3f800000;
  dVar5 = __real_3ff0000000000000;
  if ((TVector<double> *)puVar12 == pTVar1) {
    if (this->bDeterministic == false) {
      do {
        do {
          uVar10 = rand();
          uVar11 = rand();
          dVar4 = (double)((float)(uVar10 & 0x7fff) * fVar8 - fVar7);
          dVar6 = (double)((float)(uVar11 & 0x7fff) * fVar8 - fVar7);
          uVar10 = rand();
          dVar15 = (double)((float)(uVar10 & 0x7fff) * fVar8 - fVar7);
          auVar14._0_8_ = dVar6 * dVar6;
          auVar14._8_8_ = 0;
          dVar3 = dVar4 * dVar4 + auVar14._0_8_ + dVar15 * dVar15;
        } while (dVar5 < dVar3);
      } while (dVar3 < dVar9);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = dVar3;
      auVar14 = sqrtpd(auVar14,auVar2);
      dVar5 = dVar5 / auVar14._0_8_;
      local_88[0]._0_8_ = dVar4 * dVar5;
      local_88[0]._8_8_ = dVar6 * dVar5;
      local_88[0]._16_8_ = dVar15 * dVar5;
      FDataflowNode::SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_>
                ((FDataflowNode *)this,param_1,(TVector<double> *)&local_88[0]._s_0,pTVar1);
    }
    else {
      local_88[0]._0_8_ = &this->RandomSeed;
      local_88[0]._8_4_ = 0xffffffff;
      local_88[0]._s_0.Z = 0.0;
      this_00 = FDataflowNode::FindInput
                          ((FDataflowNode *)this,(FConnectionReference *)&local_88[0]._s_0);
      pfVar13 = FDataflowInput::GetValue<float>(this_00,param_1,(float *)local_88[0]._0_8_);
      local_res8.InitialSeed = (int)*pfVar13;
      local_res8.Seed = local_res8.InitialSeed;
      FRandomStream::GetUnitVector(&local_res8,(TVector<double> *)&local_88[0]._s_0);
      FDataflowNode::SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_>
                ((FDataflowNode *)this,param_1,(TVector<double> *)&local_88[0]._s_0,pTVar1);
    }
  }
  return;
}

// FRandomUnitVectorDataflowNode @ 14e929c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FRandomUnitVectorDataflowNode * __thiscall
FRandomUnitVectorDataflowNode::FRandomUnitVectorDataflowNode
          (FRandomUnitVectorDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  float *pfVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->bDeterministic = false;
  this->_padding_ = (longlong)&___7FRandomUnitVectorDataflowNode__6B_;
  pfVar1 = &this->RandomSeed;
  *pfVar1 = 0.0;
  (this->ReturnValue).field0_0x0._s_0.X = 0.0;
  (this->ReturnValue).field0_0x0._s_0.Y = 0.0;
  (this->ReturnValue).field0_0x0._s_0.Z = 0.0;
  uVar2 = rand();
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  *pfVar1 = (float)(uVar2 & 0x7fff) * ___real_40c35187 - __real_47c35000;
  local_48.Reference = pfVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->ReturnValue;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

