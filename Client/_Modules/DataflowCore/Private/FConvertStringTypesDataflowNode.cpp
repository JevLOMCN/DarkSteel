// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443e1800

UScriptStruct * __cdecl FConvertStringTypesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertStringTypesDataflowNode,(UObject *)pUVar1
                         ,L"ConvertStringTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.OuterSingleton;
}

// GetType @ 1443e1840

FName __thiscall FConvertStringTypesDataflowNode::GetType(FConvertStringTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FConvertStringTypesDataflowNode");
  return in_RDX;
}

// IsA @ 1443e1870

bool __thiscall
FConvertStringTypesDataflowNode::IsA(FConvertStringTypesDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FConvertStringTypesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443e18d8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443e18d8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443e18f6;
      }
    }
  }
  bVar5 = true;
LAB_1443e18f6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443e1930

FStructOnScope * __thiscall
FConvertStringTypesDataflowNode::NewStructOnScope(FConvertStringTypesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FConvertStringTypesDataflowNode,
                           (UObject *)pUVar2,L"ConvertStringTypesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443e19b0

void __thiscall
FConvertStringTypesDataflowNode::SerializeInternal
          (FConvertStringTypesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertStringTypesDataflowNode,(UObject *)pUVar1
                         ,L"ConvertStringTypesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443e1a2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443e1a40

FName __thiscall
FConvertStringTypesDataflowNode::GetDisplayName(FConvertStringTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ConvertStringTypes");
  return in_RDX;
}

// GetCategory @ 1443e1a70

FName __thiscall FConvertStringTypesDataflowNode::GetCategory(FConvertStringTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Convert");
  return in_RDX;
}

// GetTags @ 1443e1aa0

FString * __thiscall
FConvertStringTypesDataflowNode::GetTags
          (FConvertStringTypesDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443e1ad0

UScriptStruct * __thiscall
FConvertStringTypesDataflowNode::TypedScriptStruct(FConvertStringTypesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertStringTypesDataflowNode,(UObject *)pUVar1
                         ,L"ConvertStringTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertStringTypesDataflowNode.OuterSingleton;
}

// Evaluate @ 1443e1b10

void __thiscall
FConvertStringTypesDataflowNode::Evaluate
          (FConvertStringTypesDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowNode *this_00;
  longlong lVar1;
  FProperty *pFVar2;
  ForAnyElementType _Src;
  uint uVar3;
  undefined1 *puVar4;
  FDataflowInput *this_01;
  FDataflowOutput *pFVar5;
  ulong64 uVar6;
  FTimestamp local_res8;
  <lambda_1> local_68;
  undefined1 local_48 [12];
  uint uStack_3c;
  TVector4<double> *local_38;
  FString local_28;
  
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowStringTypes *)puVar4 == &this->Out) {
    local_38 = (void *)0x0;
    local_48._8_4_ = 0xffffffff;
    local_48._0_8_ = &this->In;
    this_01 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_48);
    FDataflowInput::GetValueFromAnyType<FDataflowStringTypes>
              (this_01,&local_28,param_1,&(this->In).Value);
    stack0xffffffffffffffc0 = (FContext *)CONCAT44(uStack_3c,0xffffffff);
    local_38 = (TVector4<double> *)0x0;
    local_48._0_8_ = &this->Out;
    pFVar5 = FDataflowNode::FindOutput((FDataflowNode *)this,(FConnectionReference *)local_48);
    _Src.Data = local_28.Data.AllocatorInstance.Data;
    if (pFVar5 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<FDataflowStringTypes>'::__l7::<lambda_1>::operator()(&local_res8);
    }
    else {
      local_38 = (TVector4<double> *)&local_28;
      local_48._0_8_ = pFVar5;
      unique0x100003b3 = param_1;
      if ((FName)pFVar5->_padding_ == TDataflowSingleTypePolicy<FString>::TypeName) {
        local_68.__this = (FDataflowOutput *)0x0;
        uVar3 = 0;
        local_68.Context = (FContext *)(ulonglong)(uint)local_28.Data.ArrayNum;
        if (local_28.Data.ArrayNum != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_68,
                     local_28.Data.ArrayNum,(int *)((longlong)&local_68.Context + 4));
          memcpy(local_68.__this,_Src.Data,(longlong)local_28.Data.ArrayNum * 2);
        }
        this_00 = (FDataflowNode *)pFVar5->_padding_;
        if (this_00 == (FDataflowNode *)0x0) {
          local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
        }
        else {
          local_res8.Value = (this_00->LastModifiedTimestamp).Value;
          uVar3 = FDataflowNode::GetValueHash(this_00);
        }
        lVar1 = pFVar5->_padding_;
        if (lVar1 == 0) {
          local_48._0_4_ = 0;
          local_48._4_4_ = 0;
          local_48._8_4_ = 0;
          uStack_3c = 0;
        }
        else {
          local_48._0_4_ = *(uint *)(lVar1 + 0x7c);
          local_48._4_4_ = *(uint *)(lVar1 + 0x80);
          local_48._8_4_ = *(uint *)(lVar1 + 0x84);
          uStack_3c = *(uint *)(lVar1 + 0x88);
        }
        pFVar2 = (FProperty *)pFVar5->_padding_;
        uVar6 = CityHash64((char *)&pFVar5->_padding_,0x10);
        UE::Dataflow::FContext::SetData<FString>
                  (param_1,(uint)uVar6,pFVar2,(FString *)&local_68,(FGuid *)local_48,uVar3,
                   &local_res8);
        if (local_68.__this != (FDataflowOutput *)0x0) {
          FMemory::Free(local_68.__this);
        }
      }
      else {
        local_68.__this = pFVar5;
        local_68.Context = param_1;
        local_68.InVal = local_38;
        TDataflowMultiTypePolicy<FName,FText>::
        VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringTypes>_::__l2::<lambda_1>_>
                  ((FName)pFVar5->_padding_,&local_68);
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FConvertStringTypesDataflowNode @ 14442b160

FConvertStringTypesDataflowNode * __thiscall
FConvertStringTypesDataflowNode::FConvertStringTypesDataflowNode
          (FConvertStringTypesDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput *pFVar3;
  FConvertStringTypesDataflowNode *pFVar4;
  FDataflowOutput *pFVar5;
  FName local_res8;
  FName local_res18 [2];
  FGuid local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  FConnectionReference local_60;
  FConnectionReference local_48;
  
  local_88.A = param_2->A;
  local_88.B = param_2->B;
  local_88.C = param_2->C;
  local_88.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_88);
  this->_padding_ = (longlong)&___7FConvertStringTypesDataflowNode__6B_;
  ::FString::FString(&(this->In).Value,"");
  ::FString::FString(&(this->Out).Value,"");
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_60.ContainerReference = (void *)0x0;
  local_60.Index = -1;
  local_60.Reference = &this->In;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_60,&local_res8);
  if (pFVar3->_padding_ == 0) {
    pFVar3->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<FString,FName,FText>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConvertStringTypesDataflowNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Out;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,local_res18);
  if (pFVar5->_padding_ == 0) {
    pFVar5->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<FString,FName,FText>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConvertStringTypesDataflowNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

