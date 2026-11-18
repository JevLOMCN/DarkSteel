// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443f0630

UScriptStruct * __cdecl FDataflowVectorNormalize::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorNormalize,(UObject *)pUVar1,
                         L"DataflowVectorNormalize");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.OuterSingleton;
}

// GetType @ 1443f0670

FName __thiscall FDataflowVectorNormalize::GetType(FDataflowVectorNormalize *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowVectorNormalize");
  return in_RDX;
}

// IsA @ 1443f06a0

bool __thiscall FDataflowVectorNormalize::IsA(FDataflowVectorNormalize *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowVectorNormalize");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443f0708;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443f0708:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443f0726;
      }
    }
  }
  bVar5 = true;
LAB_1443f0726:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443f0760

FStructOnScope * __thiscall
FDataflowVectorNormalize::NewStructOnScope(FDataflowVectorNormalize *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorNormalize,(UObject *)pUVar2,
                           L"DataflowVectorNormalize");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443f07e0

void __thiscall
FDataflowVectorNormalize::SerializeInternal(FDataflowVectorNormalize *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorNormalize,(UObject *)pUVar1,
                         L"DataflowVectorNormalize");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443f085d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443f08b0

FName __thiscall FDataflowVectorNormalize::GetDisplayName(FDataflowVectorNormalize *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"NormalizeVector");
  return in_RDX;
}

// GetCategory @ 1443f08e0

FName __thiscall FDataflowVectorNormalize::GetCategory(FDataflowVectorNormalize *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Vectors");
  return in_RDX;
}

// GetTags @ 1443f0910

FString * __thiscall
FDataflowVectorNormalize::GetTags(FDataflowVectorNormalize *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443f0940

UScriptStruct * __thiscall
FDataflowVectorNormalize::TypedScriptStruct(FDataflowVectorNormalize *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorNormalize,(UObject *)pUVar1,
                         L"DataflowVectorNormalize");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowVectorNormalize.OuterSingleton;
}

// Evaluate @ 1443f0980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDataflowVectorNormalize::Evaluate
          (FDataflowVectorNormalize *this,FContext *param_1,FDataflowOutput *param_2)

{
  double dVar1;
  undefined1 *puVar2;
  FDataflowInput *this_00;
  double dVar3;
  TVector4<double>_u_0 local_58;
  TVector4<double>_u_0 local_38;
  
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowVectorTypes *)puVar2 == &this->Normalized) {
    local_58._8_4_ = 0xffffffff;
    local_58._s_0.Z = 0.0;
    local_58._s_0.X = (double)&this->V;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_58._s_0)
    ;
    FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
              (this_00,(TVector4<double> *)&local_58._s_0,param_1,&(this->V).Value);
    dVar1 = (double)CONCAT44(local_58._12_4_,local_58._8_4_);
    dVar3 = dVar1 * dVar1 + local_58._s_0.X * local_58._s_0.X + local_58._s_0.Z * local_58._s_0.Z;
    if (dVar3 <= __real_3e45798ee0000000) {
      local_38._s_0.X = 0.0;
      local_38._s_0.Y = 0.0;
      local_38._s_0.Z = ___xmm_3ff00000000000000000000000000000;
      local_38._s_0.W = _UNK_15061cbc8;
    }
    else {
      dVar3 = __real_3ff0000000000000 / SQRT(dVar3);
      local_38._s_0.X = local_58._s_0.X * dVar3;
      local_38._s_0.Y = dVar1 * dVar3;
      local_38._s_0.Z = local_58._s_0.Z * dVar3;
      local_38._s_0.W = 0.0;
    }
    FDataflowNode::SetValue<FDataflowVectorTypes>
              ((FDataflowNode *)this,param_1,(TVector4<double> *)&local_38._s_0,&this->Normalized);
  }
  return;
}

// FDataflowVectorNormalize @ 144430df0

FDataflowVectorNormalize * __thiscall
FDataflowVectorNormalize::FDataflowVectorNormalize
          (FDataflowVectorNormalize *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowVectorTypes *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FDataflowInput *pFVar5;
  FDataflowVectorNormalize *pFVar6;
  FDataflowOutput *pFVar7;
  FName *pFVar8;
  FName local_res8 [2];
  FName local_res18;
  undefined8 local_res20;
  FConnectionReference local_a0;
  FConnectionReference local_88;
  FConnectionReference local_70;
  FName local_58 [2];
  FGuid local_48;
  
  local_48.A = param_2->A;
  local_48.B = param_2->B;
  local_48.C = param_2->C;
  local_48.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_48);
  local_a0.Index = -1;
  pFVar1 = &this->Normalized;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  local_a0.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FDataflowVectorNormalize__6B_;
  local_a0.Reference = &this->V;
  (pFVar1->Value).field0_0x0._s_0.X = 0.0;
  (((FDataflowVectorTypes *)local_a0.Reference)->Value).field0_0x0._s_0.X = 0.0;
  (this->V).Value.field0_0x0._s_0.Y = 0.0;
  (this->V).Value.field0_0x0._s_0.Z = 0.0;
  (this->V).Value.field0_0x0._s_0.W = 0.0;
  (this->Normalized).Value.field0_0x0._s_0.Y = 0.0;
  (this->Normalized).Value.field0_0x0._s_0.Z = 0.0;
  (this->Normalized).Value.field0_0x0._s_0.W = 0.0;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_a0,local_res8);
  if (pFVar5->_padding_ == 0) {
    pFVar5->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FDataflowVectorNormalize *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_88.Index = -1;
  local_88.ContainerReference = (void *)0x0;
  local_88.Reference = pFVar1;
  pFVar7 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_88,&local_res18);
  if (pFVar7->_padding_ == 0) {
    pFVar7->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FDataflowVectorNormalize *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_70.Index = -1;
  local_70.ContainerReference = (void *)0x0;
  local_70.Reference = pFVar1;
  pFVar8 = ::FName::FName(local_58,L"FVector4");
  local_res20 = 0;
  FVar2 = *pFVar8;
  pFVar7 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_70);
  FDataflowNode::SetConnectionConcreteType
            ((FDataflowNode *)this,(FDataflowConnection *)pFVar7,FVar2,(FName)0x0);
  return this;
}

