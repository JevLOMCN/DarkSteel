// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443e1320

UScriptStruct * __cdecl FConvertVectorTypesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertVectorTypesDataflowNode,(UObject *)pUVar1
                         ,L"ConvertVectorTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.OuterSingleton;
}

// GetType @ 1443e1360

FName __thiscall FConvertVectorTypesDataflowNode::GetType(FConvertVectorTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FConvertVectorTypesDataflowNode");
  return in_RDX;
}

// IsA @ 1443e1390

bool __thiscall
FConvertVectorTypesDataflowNode::IsA(FConvertVectorTypesDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FConvertVectorTypesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443e13f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443e13f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443e1416;
      }
    }
  }
  bVar5 = true;
LAB_1443e1416:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443e1450

FStructOnScope * __thiscall
FConvertVectorTypesDataflowNode::NewStructOnScope(FConvertVectorTypesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FConvertVectorTypesDataflowNode,
                           (UObject *)pUVar2,L"ConvertVectorTypesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443e14d0

void __thiscall
FConvertVectorTypesDataflowNode::SerializeInternal
          (FConvertVectorTypesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertVectorTypesDataflowNode,(UObject *)pUVar1
                         ,L"ConvertVectorTypesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443e154d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443e1560

FName __thiscall
FConvertVectorTypesDataflowNode::GetDisplayName(FConvertVectorTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ConvertVectorTypes");
  return in_RDX;
}

// GetCategory @ 1443e1590

FName __thiscall FConvertVectorTypesDataflowNode::GetCategory(FConvertVectorTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Convert");
  return in_RDX;
}

// GetTags @ 1443e15c0

FString * __thiscall
FConvertVectorTypesDataflowNode::GetTags
          (FConvertVectorTypesDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443e15f0

UScriptStruct * __thiscall
FConvertVectorTypesDataflowNode::TypedScriptStruct(FConvertVectorTypesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertVectorTypesDataflowNode,(UObject *)pUVar1
                         ,L"ConvertVectorTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertVectorTypesDataflowNode.OuterSingleton;
}

// Evaluate @ 1443e1630

void __thiscall
FConvertVectorTypesDataflowNode::Evaluate
          (FConvertVectorTypesDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  FConnectionReference local_48;
  TVector4<double> local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowVectorTypes *)puVar1 == &this->Out) {
    local_48.Index = -1;
    local_48.ContainerReference = (void *)0x0;
    local_48.Reference = &this->In;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
    FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
              (this_00,&local_28,param_1,&(this->In).Value);
    FDataflowNode::SetValue<FDataflowVectorTypes>
              ((FDataflowNode *)this,param_1,&local_28,&this->Out);
  }
  return;
}

// FConvertVectorTypesDataflowNode @ 14442b9f0

FConvertVectorTypesDataflowNode * __thiscall
FConvertVectorTypesDataflowNode::FConvertVectorTypesDataflowNode
          (FConvertVectorTypesDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput *pFVar3;
  FConvertVectorTypesDataflowNode *pFVar4;
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
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_50.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FConvertVectorTypesDataflowNode__6B_;
  local_50.Reference = &this->In;
  (this->Out).Value.field0_0x0._s_0.X = 0.0;
  (((FDataflowVectorTypes *)local_50.Reference)->Value).field0_0x0._s_0.X = 0.0;
  (this->In).Value.field0_0x0._s_0.Y = 0.0;
  (this->In).Value.field0_0x0._s_0.Z = 0.0;
  (this->In).Value.field0_0x0._s_0.W = 0.0;
  (this->Out).Value.field0_0x0._s_0.Y = 0.0;
  (this->Out).Value.field0_0x0._s_0.Z = 0.0;
  (this->Out).Value.field0_0x0._s_0.W = 0.0;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_50,&local_res8);
  if (pFVar3->_padding_ == 0) {
    pFVar3->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConvertVectorTypesDataflowNode *)(*pcVar1)();
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
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConvertVectorTypesDataflowNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

