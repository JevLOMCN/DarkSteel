// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443e1e50

UScriptStruct * __cdecl FConvertBoolTypesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertBoolTypesDataflowNode,(UObject *)pUVar1,
                         L"ConvertBoolTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.OuterSingleton;
}

// GetType @ 1443e1f40

FName __thiscall FConvertBoolTypesDataflowNode::GetType(FConvertBoolTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FConvertBoolTypesDataflowNode");
  return in_RDX;
}

// IsA @ 1443e1f70

bool __thiscall
FConvertBoolTypesDataflowNode::IsA(FConvertBoolTypesDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FConvertBoolTypesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443e1fd8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443e1fd8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443e1ff6;
      }
    }
  }
  bVar5 = true;
LAB_1443e1ff6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443e2030

FStructOnScope * __thiscall
FConvertBoolTypesDataflowNode::NewStructOnScope(FConvertBoolTypesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FConvertBoolTypesDataflowNode,(UObject *)pUVar2
                           ,L"ConvertBoolTypesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443e20b0

void __thiscall
FConvertBoolTypesDataflowNode::SerializeInternal
          (FConvertBoolTypesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertBoolTypesDataflowNode,(UObject *)pUVar1,
                         L"ConvertBoolTypesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443e212d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443e2140

FName __thiscall FConvertBoolTypesDataflowNode::GetDisplayName(FConvertBoolTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ConvertBoolTypes");
  return in_RDX;
}

// GetCategory @ 1443e2170

FName __thiscall FConvertBoolTypesDataflowNode::GetCategory(FConvertBoolTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Convert");
  return in_RDX;
}

// GetTags @ 1443e21a0

FString * __thiscall
FConvertBoolTypesDataflowNode::GetTags
          (FConvertBoolTypesDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443e21d0

UScriptStruct * __thiscall
FConvertBoolTypesDataflowNode::TypedScriptStruct(FConvertBoolTypesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertBoolTypesDataflowNode,(UObject *)pUVar1,
                         L"ConvertBoolTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertBoolTypesDataflowNode.OuterSingleton;
}

// Evaluate @ 1443e2210

void __thiscall
FConvertBoolTypesDataflowNode::Evaluate
          (FConvertBoolTypesDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowBoolTypes *pFVar1;
  int iVar2;
  code *pcVar3;
  FDataflowNode *this_00;
  longlong lVar4;
  FProperty *pFVar5;
  bool bVar6;
  uint uVar7;
  undefined1 *puVar8;
  FDataflowInput *pFVar9;
  bool *pbVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  FDataflowOutput *pFVar13;
  ulong64 uVar14;
  bool local_res8 [8];
  bool local_res18 [16];
  undefined1 local_98 [8];
  FTimestamp local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  FGuid local_78;
  FConnectionReference local_68;
  FConnectionReference local_50;
  
  puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowBoolTypes *)puVar8 == &this->Out) {
    pFVar1 = &this->In;
    local_68.ContainerReference = (void *)0x0;
    local_68.Index = -1;
    local_68.Reference = pFVar1;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_68);
    bVar6 = pFVar1->Value;
    pFVar13 = pFVar9->Connection;
    local_res18[0] = bVar6;
    if (pFVar13 != (FDataflowOutput *)0x0) {
      if (((pFVar13->_padding_ == 0) || (*(char *)(pFVar13->_padding_ + 0x200) == '\0')) ||
         (UE::Dataflow::Private::bDisableFreezingState != false)) {
        bVar6 = FDataflowOutput::Evaluate(pFVar13,param_1);
        if (bVar6) {
          pcVar3 = *(code **)(param_1->_padding_ + 0x30);
          uVar14 = CityHash64((char *)&pFVar13->_padding_,0x10);
          plVar11 = (longlong *)(*pcVar3)(param_1,uVar14);
          if (((plVar11 != (longlong *)0x0) && (lVar4 = *plVar11, lVar4 != 0)) &&
             ((FName)pFVar9->_padding_ == TDataflowSingleTypePolicy<bool>::TypeName)) {
            local_res8[0] = false;
            iVar2 = *(int *)(lVar4 + 8);
            if (iVar2 == 0) {
              local_res18[0] = (bool)*(undefined1 *)(lVar4 + 0x38);
            }
            else if (iVar2 == 1) {
              puVar12 = (undefined8 *)
                        (**(code **)param_1->_padding_)(param_1,*(undefined4 *)(lVar4 + 0x38));
              local_res18[0] = local_res8[0];
              if (puVar12 != (undefined8 *)0x0) {
                pbVar10 = UE::Dataflow::FContextCacheElementBase::GetTypedData<bool>
                                    ((FContextCacheElementBase *)*puVar12,
                                     (IContextCacheStore *)param_1,(FProperty *)0x0,local_res8);
                local_res18[0] = *pbVar10;
              }
            }
            else if (iVar2 == 2) {
              local_res18[0] = (bool)0;
            }
            else {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                                 ,0x24a,L"");
              local_res18[0] = local_res8[0];
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
        }
      }
      else {
        pbVar10 = FDataflowOutput::GetFrozenValue<bool>(pFVar13,&pFVar1->Value);
        local_res18[0] = *pbVar10;
      }
    }
    local_50.Index = -1;
    local_50.ContainerReference = (void *)0x0;
    local_50.Reference = &this->Out;
    pFVar13 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_50);
    if (pFVar13 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<FDataflowBoolTypes>'::__l7::<lambda_1>::operator()(local_98);
    }
    else if ((FName)pFVar13->_padding_ == TDataflowSingleTypePolicy<bool>::TypeName) {
      this_00 = (FDataflowNode *)pFVar13->_padding_;
      if (this_00 == (FDataflowNode *)0x0) {
        uVar7 = 0;
        local_90.Value = UE::Dataflow::FTimestamp::Invalid;
      }
      else {
        local_90.Value = (this_00->LastModifiedTimestamp).Value;
        uVar7 = FDataflowNode::GetValueHash(this_00);
      }
      lVar4 = pFVar13->_padding_;
      if (lVar4 == 0) {
        local_88 = 0;
        uStack_80 = 0;
        local_88._0_4_ = 0;
        local_88._4_4_ = 0;
        uStack_80._0_4_ = 0;
        uStack_80._4_4_ = 0;
        local_78.A = (uint)local_88;
        local_78.B = local_88._4_4_;
        local_78.C = (uint)uStack_80;
        local_78.D = uStack_80._4_4_;
      }
      else {
        local_78.A = *(uint *)(lVar4 + 0x7c);
        local_78.B = *(uint *)(lVar4 + 0x80);
        local_78.C = *(uint *)(lVar4 + 0x84);
        local_78.D = *(uint *)(lVar4 + 0x88);
      }
      pFVar5 = (FProperty *)pFVar13->_padding_;
      uVar14 = CityHash64((char *)&pFVar13->_padding_,0x10);
      UE::Dataflow::FContext::SetData<bool>
                (param_1,(uint)uVar14,pFVar5,local_res18,&local_78,uVar7,&local_90);
    }
  }
  return;
}

// FConvertBoolTypesDataflowNode @ 14442a1d0

FConvertBoolTypesDataflowNode * __thiscall
FConvertBoolTypesDataflowNode::FConvertBoolTypesDataflowNode
          (FConvertBoolTypesDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput *pFVar3;
  FConvertBoolTypesDataflowNode *pFVar4;
  FDataflowOutput *pFVar5;
  FName local_res8;
  FName local_res18;
  FGuid local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  FConnectionReference local_50;
  FConnectionReference local_38;
  
  local_78.A = param_2->A;
  local_78.B = param_2->B;
  local_78.C = param_2->C;
  local_78.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_78);
  local_50.Index = -1;
  this->_padding_ = (longlong)&___7FConvertBoolTypesDataflowNode__6B_;
  local_50.Reference = &this->In;
  (this->Out).Value = true;
  ((FDataflowBoolTypes *)local_50.Reference)->Value = true;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_50.ContainerReference = (void *)0x0;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_50,&local_res8);
  if (pFVar3->_padding_ == 0) {
    pFVar3->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowSingleTypePolicy<bool>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConvertBoolTypesDataflowNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_68 = 0;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Out;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res18);
  if (pFVar5->_padding_ == 0) {
    pFVar5->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowSingleTypePolicy<bool>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConvertBoolTypesDataflowNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

