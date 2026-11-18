// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 10

// StaticStruct @ 14daba100

UScriptStruct * __cdecl FFloatOverrideDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode,(UObject *)pUVar1,
                         L"FloatOverrideDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton;
}

// GetType @ 14daba140

FName __thiscall FFloatOverrideDataflowNode::GetType(FFloatOverrideDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FFloatOverrideDataflowNode");
  return in_RDX;
}

// IsA @ 14daba170

bool __thiscall FFloatOverrideDataflowNode::IsA(FFloatOverrideDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FFloatOverrideDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14daba1d8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14daba1d8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14daba1f6;
      }
    }
  }
  bVar5 = true;
LAB_14daba1f6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14daba230

FStructOnScope * __thiscall
FFloatOverrideDataflowNode::NewStructOnScope(FFloatOverrideDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
      Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode,(UObject *)pUVar2,
                           L"FloatOverrideDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14daba2b0

void __thiscall
FFloatOverrideDataflowNode::SerializeInternal(FFloatOverrideDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode,(UObject *)pUVar1,
                         L"FloatOverrideDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014daba32d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14daba340

FName __thiscall FFloatOverrideDataflowNode::GetDisplayName(FFloatOverrideDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FloatOverride");
  return in_RDX;
}

// GetCategory @ 14daba370

FName __thiscall FFloatOverrideDataflowNode::GetCategory(FFloatOverrideDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Dataflow");
  return in_RDX;
}

// GetTags @ 14daba3a0

FString * __thiscall
FFloatOverrideDataflowNode::GetTags
          (FFloatOverrideDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14daba3d0

UScriptStruct * __thiscall
FFloatOverrideDataflowNode::TypedScriptStruct(FFloatOverrideDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode,(UObject *)pUVar1,
                         L"FloatOverrideDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton;
}

// Evaluate @ 14daba410

void __thiscall
FFloatOverrideDataflowNode::Evaluate
          (FFloatOverrideDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  code *pcVar1;
  FProperty *pFVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  undefined1 *puVar10;
  FDataflowOutput *this_00;
  FTimestamp FVar11;
  FGuid *pFVar12;
  ulong64 uVar13;
  FName FVar14;
  FName FVar15;
  ForAnyElementType _Str;
  FName FVar16;
  double dVar17;
  float fVar18;
  FName local_res8;
  FConnectionReference local_78;
  ForAnyElementType local_60;
  uint local_58;
  
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar10 == &this->ValueOut) {
    fVar18 = 0.0;
    pcVar1 = *(code **)(param_1->_padding_ + 0x18);
    ::FName::FName(&local_res8,"TEngineContext");
    cVar8 = (*pcVar1)(param_1,local_res8);
    FVar15.ComparisonIndex.Value = 0;
    FVar15.Number = 0;
    FVar16 = (FName)param_1;
    if (cVar8 == '\0') {
      FVar16 = FVar15;
    }
    if (FVar16 != (FName)0x0) {
      local_78.Reference = (void *)0x0;
      local_78.Index = 0;
      local_78._12_4_ = 0;
      UE::Dataflow::Reflection::FindOverrideProperty<FString>
                ((FString *)&local_60,(UObject *)((FContext *)((longlong)FVar16 + 0x360))->_padding_
                 ,this->PropertyName,this->KeyName,(FString *)&local_78);
      if (local_78.Reference != (void *)0x0) {
        FMemory::Free(local_78.Reference);
      }
      _Str.Data = (FScriptContainerElement *)L"";
      if (local_58 != 0) {
        _Str.Data = local_60.Data;
      }
      dVar17 = _wtof((wchar_t *)_Str.Data);
      fVar18 = (float)dVar17;
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
    }
    local_78.Index = -1;
    local_78.ContainerReference = (void *)0x0;
    local_78.Reference = &this->ValueOut;
    this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_78);
    if (this_00 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<float_&,float>'::__l7::<lambda_1>::operator()(&local_res8);
    }
    else if (this_00->_padding_ != 0) {
      FVar11 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
      uVar9 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
      pFVar12 = FDataflowConnection::GetOwningNodeGuid
                          ((FDataflowConnection *)this_00,(FGuid *)&local_60);
      pFVar2 = (FProperty *)this_00->_padding_;
      uVar13 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      FVar14 = (FName)::operator_new(0x40);
      FVar16 = local_res8;
      if (FVar14 != (FName)0x0) {
        uVar4 = pFVar12->A;
        uVar5 = pFVar12->B;
        uVar6 = pFVar12->C;
        uVar7 = pFVar12->D;
        *(undefined8 *)((longlong)FVar14 + 0x30) = *(undefined8 *)FVar11.Value;
        *(undefined ***)FVar14 = &___7__TContextCacheElement_AEAM_Dataflow_UE__6B_;
        *(float *)((longlong)FVar14 + 0x38) = fVar18;
        *(undefined4 *)((longlong)FVar14 + 8) = 0;
        *(uint *)((longlong)FVar14 + 0xc) = uVar4;
        *(uint *)((longlong)FVar14 + 0x10) = uVar5;
        *(uint *)((longlong)FVar14 + 0x14) = uVar6;
        *(uint *)((longlong)FVar14 + 0x18) = uVar7;
        *(FProperty **)((longlong)FVar14 + 0x20) = pFVar2;
        *(uint *)((longlong)FVar14 + 0x28) = uVar9;
        FVar15 = FVar14;
      }
      if (local_res8 != (FName)0x0) {
        puVar3 = *(undefined8 **)local_res8;
        local_res8 = FVar15;
        (*(code *)*puVar3)(FVar16,1);
        FVar15 = local_res8;
      }
      local_res8 = FVar15;
      if (local_res8 == (FName)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar13,pFVar2,pFVar12,uVar9,(FTimestamp *)FVar11.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar13 & 0xffffffff,&local_res8);
      }
      if (local_res8 != (FName)0x0) {
        (*(code *)**(undefined8 **)local_res8)(local_res8,1);
      }
    }
  }
  return;
}

