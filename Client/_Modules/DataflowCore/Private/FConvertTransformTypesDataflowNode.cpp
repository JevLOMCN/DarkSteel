// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 12

// StaticStruct @ 1443e2770

UScriptStruct * __cdecl FConvertTransformTypesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertTransformTypesDataflowNode,
                         (UObject *)pUVar1,L"ConvertTransformTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.OuterSingleton;
}

// GetType @ 1443e2800

FName __thiscall
FConvertTransformTypesDataflowNode::GetType(FConvertTransformTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FConvertTransformTypesDataflowNode");
  return in_RDX;
}

// IsA @ 1443e2830

bool __thiscall
FConvertTransformTypesDataflowNode::IsA(FConvertTransformTypesDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FConvertTransformTypesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443e2898;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443e2898:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443e28b6;
      }
    }
  }
  bVar5 = true;
LAB_1443e28b6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443e28f0

FStructOnScope * __thiscall
FConvertTransformTypesDataflowNode::NewStructOnScope(FConvertTransformTypesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FConvertTransformTypesDataflowNode,
                           (UObject *)pUVar2,L"ConvertTransformTypesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443e2970

void __thiscall
FConvertTransformTypesDataflowNode::SerializeInternal
          (FConvertTransformTypesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertTransformTypesDataflowNode,
                         (UObject *)pUVar1,L"ConvertTransformTypesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443e29ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443e2a00

FName __thiscall
FConvertTransformTypesDataflowNode::GetDisplayName(FConvertTransformTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ConvertTransformTypes");
  return in_RDX;
}

// GetCategory @ 1443e2a30

FName __thiscall
FConvertTransformTypesDataflowNode::GetCategory(FConvertTransformTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Convert");
  return in_RDX;
}

// GetTags @ 1443e2a60

FString * __thiscall
FConvertTransformTypesDataflowNode::GetTags
          (FConvertTransformTypesDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443e2a90

UScriptStruct * __thiscall
FConvertTransformTypesDataflowNode::TypedScriptStruct(FConvertTransformTypesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertTransformTypesDataflowNode,
                         (UObject *)pUVar1,L"ConvertTransformTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertTransformTypesDataflowNode.OuterSingleton;
}

// Evaluate @ 1443e2b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConvertTransformTypesDataflowNode::Evaluate
          (FConvertTransformTypesDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowNode *this_00;
  longlong lVar1;
  FProperty *pFVar2;
  uint uVar3;
  undefined1 *puVar4;
  FDataflowInput *this_01;
  FDataflowOutput *pFVar5;
  ulong64 uVar6;
  undefined1 auStackY_178 [32];
  undefined1 local_138 [16];
  FConnectionReference local_128;
  FTimestamp local_108 [2];
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowTransformTypes *)puVar4 == &this->Out) {
    local_128.ContainerReference = (void *)0x0;
    local_128.Index = -1;
    local_128.Reference = &this->In;
    this_01 = FDataflowNode::FindInput((FDataflowNode *)this,&local_128);
    FDataflowInput::GetValueFromAnyType<FDataflowTransformTypes>
              (this_01,&local_98,param_1,&(this->In).Value);
    local_128.Index = -1;
    local_128.ContainerReference = (void *)0x0;
    local_128.Reference = &this->Out;
    pFVar5 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_128);
    if (pFVar5 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<FDataflowTransformTypes>'::__l7::<lambda_1>::operator()(local_138);
    }
    else if ((FName)pFVar5->_padding_ ==
             TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::TypeName) {
      this_00 = (FDataflowNode *)pFVar5->_padding_;
      local_f8.Rotation.XY.m128d_f64[0] = local_98.Rotation.XY.m128d_f64[0];
      local_f8.Rotation.XY.m128d_f64[1] = local_98.Rotation.XY.m128d_f64[1];
      local_f8.Rotation.ZW.m128d_f64[0] = local_98.Rotation.ZW.m128d_f64[0];
      local_f8.Rotation.ZW.m128d_f64[1] = local_98.Rotation.ZW.m128d_f64[1];
      local_f8.Translation.XY.m128d_f64[0] = local_98.Translation.XY.m128d_f64[0];
      local_f8.Translation.XY.m128d_f64[1] = local_98.Translation.XY.m128d_f64[1];
      local_f8.Translation.ZW.m128d_f64[0] = local_98.Translation.ZW.m128d_f64[0];
      local_f8.Translation.ZW.m128d_f64[1] = local_98.Translation.ZW.m128d_f64[1];
      local_f8.Scale3D.XY.m128d_f64[0] = local_98.Scale3D.XY.m128d_f64[0];
      local_f8.Scale3D.XY.m128d_f64[1] = local_98.Scale3D.XY.m128d_f64[1];
      local_f8.Scale3D.ZW.m128d_f64[0] = local_98.Scale3D.ZW.m128d_f64[0];
      local_f8.Scale3D.ZW.m128d_f64[1] = local_98.Scale3D.ZW.m128d_f64[1];
      if (this_00 == (FDataflowNode *)0x0) {
        uVar3 = 0;
        local_108[0].Value = UE::Dataflow::FTimestamp::Invalid;
      }
      else {
        local_108[0].Value = (this_00->LastModifiedTimestamp).Value;
        uVar3 = FDataflowNode::GetValueHash(this_00);
      }
      lVar1 = pFVar5->_padding_;
      if (lVar1 == 0) {
        local_128.Reference._0_4_ = 0;
        local_128.Reference._4_4_ = 0;
        local_128.Index = 0;
        local_128._12_4_ = 0;
      }
      else {
        local_128.Reference._0_4_ = *(undefined4 *)(lVar1 + 0x7c);
        local_128.Reference._4_4_ = *(undefined4 *)(lVar1 + 0x80);
        local_128.Index = *(int *)(lVar1 + 0x84);
        local_128._12_4_ = *(undefined4 *)(lVar1 + 0x88);
      }
      pFVar2 = (FProperty *)pFVar5->_padding_;
      uVar6 = CityHash64((char *)&pFVar5->_padding_,0x10);
      UE::Dataflow::FContext::SetData<UE::Math::TTransform<double>_>
                (param_1,(uint)uVar6,pFVar2,&local_f8,(FGuid *)&local_128,uVar3,local_108);
    }
  }
  return;
}

// FConvertTransformTypesDataflowNode @ 14442b450

FConvertTransformTypesDataflowNode * __thiscall
FConvertTransformTypesDataflowNode::FConvertTransformTypesDataflowNode
          (FConvertTransformTypesDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput *pFVar3;
  FConvertTransformTypesDataflowNode *pFVar4;
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
  this->_padding_ = (longlong)&___7FConvertTransformTypesDataflowNode__6B_;
  local_50.Reference = &this->In;
  *&(((FDataflowTransformTypes *)local_50.Reference)->Value).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->In).Value.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  *&(this->In).Value.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->In).Value.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_50.ContainerReference = (void *)0x0;
  *&(this->In).Value.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->In).Value.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Out).Value.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Out).Value.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Out).Value.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Out).Value.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Out).Value.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Out).Value.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_50,&local_res8);
  if (pFVar3->_padding_ == 0) {
    pFVar3->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConvertTransformTypesDataflowNode *)(*pcVar1)();
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
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowSingleTypePolicy<UE::Math::TTransform<double>_>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConvertTransformTypesDataflowNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// FConvertTransformTypesDataflowNode @ 14442b640

FConvertTransformTypesDataflowNode * __thiscall
FConvertTransformTypesDataflowNode::FConvertTransformTypesDataflowNode
          (FConvertTransformTypesDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FConvertTransformTypesDataflowNode__6B_;
  *&(this->In).Value.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->In).Value.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->In).Value.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->In).Value.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->In).Value.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->In).Value.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Out).Value.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Out).Value.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Out).Value.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Out).Value.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Out).Value.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Out).Value.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

