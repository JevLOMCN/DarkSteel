// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443e8ba0

UScriptStruct * __cdecl FDataflowVectorBreakNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorBreakNode,(UObject *)pUVar1,
                         L"DataflowVectorBreakNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.OuterSingleton;
}

// GetType @ 1443e8f20

FName __thiscall FDataflowVectorBreakNode::GetType(FDataflowVectorBreakNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowVectorBreakNode");
  return in_RDX;
}

// IsA @ 1443e9010

bool __thiscall FDataflowVectorBreakNode::IsA(FDataflowVectorBreakNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowVectorBreakNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443e9078;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443e9078:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443e9096;
      }
    }
  }
  bVar5 = true;
LAB_1443e9096:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443e90d0

FStructOnScope * __thiscall
FDataflowVectorBreakNode::NewStructOnScope(FDataflowVectorBreakNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorBreakNode,(UObject *)pUVar2,
                           L"DataflowVectorBreakNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443e9150

void __thiscall
FDataflowVectorBreakNode::SerializeInternal(FDataflowVectorBreakNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorBreakNode,(UObject *)pUVar1,
                         L"DataflowVectorBreakNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443e91cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443e91f0

FName __thiscall FDataflowVectorBreakNode::GetDisplayName(FDataflowVectorBreakNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BreakVector");
  return in_RDX;
}

// GetCategory @ 1443e9220

FName __thiscall FDataflowVectorBreakNode::GetCategory(FDataflowVectorBreakNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Vectors");
  return in_RDX;
}

// GetTags @ 1443e9350

FString * __thiscall
FDataflowVectorBreakNode::GetTags(FDataflowVectorBreakNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Expand Split X Y Z W Components");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443e9380

UScriptStruct * __thiscall
FDataflowVectorBreakNode::TypedScriptStruct(FDataflowVectorBreakNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorBreakNode,(UObject *)pUVar1,
                         L"DataflowVectorBreakNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowVectorBreakNode.OuterSingleton;
}

// Evaluate @ 1443e93c0

void __thiscall
FDataflowVectorBreakNode::Evaluate
          (FDataflowVectorBreakNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *pFVar2;
  double *pdVar3;
  FDataflowNumericTypes *pFVar4;
  FConnectionReference local_48;
  undefined1 local_28 [16];
  double local_18;
  double local_10;
  
  pFVar4 = &this->X;
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowNumericTypes *)puVar1 == pFVar4) {
    local_48.Index = -1;
    local_48.ContainerReference = (void *)0x0;
    local_48.Reference = &this->V;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
    FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
              (pFVar2,(TVector4<double> *)local_28,param_1,&(this->V).Value);
    pdVar3 = (double *)local_28;
  }
  else {
    pFVar4 = &this->Y;
    puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FDataflowNumericTypes *)puVar1 == pFVar4) {
      local_48.Index = -1;
      local_48.ContainerReference = (void *)0x0;
      local_48.Reference = &this->V;
      pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
      FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
                (pFVar2,(TVector4<double> *)local_28,param_1,&(this->V).Value);
      pdVar3 = (double *)(local_28 + 8);
    }
    else {
      pFVar4 = &this->Z;
      puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
      if ((FDataflowNumericTypes *)puVar1 == pFVar4) {
        local_48.Index = -1;
        local_48.ContainerReference = (void *)0x0;
        local_48.Reference = &this->V;
        pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
        FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
                  (pFVar2,(TVector4<double> *)local_28,param_1,&(this->V).Value);
        pdVar3 = &local_18;
      }
      else {
        pFVar4 = &this->W;
        puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
        if ((FDataflowNumericTypes *)puVar1 != pFVar4) {
          return;
        }
        local_48.Index = -1;
        local_48.ContainerReference = (void *)0x0;
        local_48.Reference = &this->V;
        pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
        FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
                  (pFVar2,(TVector4<double> *)local_28,param_1,&(this->V).Value);
        pdVar3 = &local_10;
      }
    }
  }
  FDataflowNode::SetValue<FDataflowNumericTypes>((FDataflowNode *)this,param_1,pdVar3,pFVar4);
  return;
}

// FDataflowVectorBreakNode @ 14442f330

FDataflowVectorBreakNode * __thiscall
FDataflowVectorBreakNode::FDataflowVectorBreakNode
          (FDataflowVectorBreakNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowNumericTypes *pFVar1;
  FDataflowNumericTypes *pFVar2;
  FDataflowNumericTypes *pFVar3;
  FDataflowNumericTypes *pFVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  FDataflowInput *pFVar8;
  FDataflowVectorBreakNode *pFVar9;
  FDataflowOutput *pFVar10;
  FName *pFVar11;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FName local_1d8;
  FName local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  FConnectionReference local_148;
  FConnectionReference local_130;
  FConnectionReference local_118;
  FConnectionReference local_100;
  FConnectionReference local_e8;
  FConnectionReference local_d0;
  FConnectionReference local_b8;
  FConnectionReference local_a0;
  FConnectionReference local_88;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [2];
  FGuid local_48;
  
  local_48.A = param_2->A;
  local_48.B = param_2->B;
  local_48.C = param_2->C;
  local_48.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_48);
  local_148.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FDataflowVectorBreakNode__6B_;
  pFVar1 = &this->X;
  local_148.Reference = &this->V;
  pFVar1->Value = 0.0;
  pFVar2 = &this->Y;
  (((FDataflowVectorTypes *)local_148.Reference)->Value).field0_0x0._s_0.X = 0.0;
  pFVar3 = &this->Z;
  (this->V).Value.field0_0x0._s_0.Y = 0.0;
  pFVar4 = &this->W;
  (this->V).Value.field0_0x0._s_0.Z = 0.0;
  (this->V).Value.field0_0x0._s_0.W = 0.0;
  pFVar2->Value = 0.0;
  pFVar3->Value = 0.0;
  pFVar4->Value = 0.0;
  local_148.ContainerReference = (void *)0x0;
  pFVar8 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_148,&local_res8);
  if (pFVar8->_padding_ == 0) {
    pFVar8->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FDataflowVectorBreakNode *)(*pcVar6)();
      return pFVar9;
    }
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_1a8 = 0;
  local_1a0 = 0xffffffff;
  local_198 = 0;
  local_130.Index = -1;
  local_130.ContainerReference = (void *)0x0;
  local_130.Reference = pFVar1;
  pFVar10 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_130,&local_res18);
  if (pFVar10->_padding_ == 0) {
    pFVar10->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FDataflowVectorBreakNode *)(*pcVar6)();
      return pFVar9;
    }
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_190 = 0;
  local_188 = 0xffffffff;
  local_180 = 0;
  local_118.Index = -1;
  local_118.ContainerReference = (void *)0x0;
  local_118.Reference = pFVar2;
  pFVar10 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_118,&local_res20);
  if (pFVar10->_padding_ == 0) {
    pFVar10->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FDataflowVectorBreakNode *)(*pcVar6)();
      return pFVar9;
    }
  }
  local_1d8.ComparisonIndex.Value = 0;
  local_1d8.Number = 0;
  local_178 = 0;
  local_170 = 0xffffffff;
  local_168 = 0;
  local_100.Index = -1;
  local_100.ContainerReference = (void *)0x0;
  local_100.Reference = pFVar3;
  pFVar10 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_100,&local_1d8);
  if (pFVar10->_padding_ == 0) {
    pFVar10->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FDataflowVectorBreakNode *)(*pcVar6)();
      return pFVar9;
    }
  }
  local_1d0.ComparisonIndex.Value = 0;
  local_1d0.Number = 0;
  local_160 = 0;
  local_158 = 0xffffffff;
  local_150 = 0;
  local_e8.Index = -1;
  local_e8.ContainerReference = (void *)0x0;
  local_e8.Reference = pFVar4;
  pFVar10 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_e8,&local_1d0);
  if (pFVar10->_padding_ == 0) {
    pFVar10->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FDataflowVectorBreakNode *)(*pcVar6)();
      return pFVar9;
    }
  }
  local_d0.Index = -1;
  local_d0.ContainerReference = (void *)0x0;
  local_d0.Reference = pFVar1;
  pFVar11 = ::FName::FName(&local_70,L"double");
  local_1c8 = 0;
  FVar5 = *pFVar11;
  pFVar10 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_d0);
  FDataflowNode::SetConnectionConcreteType
            ((FDataflowNode *)this,(FDataflowConnection *)pFVar10,FVar5,(FName)0x0);
  local_b8.Index = -1;
  local_b8.ContainerReference = (void *)0x0;
  local_b8.Reference = pFVar2;
  pFVar11 = ::FName::FName(&local_68,L"double");
  local_1c0 = 0;
  FVar5 = *pFVar11;
  pFVar10 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_b8);
  FDataflowNode::SetConnectionConcreteType
            ((FDataflowNode *)this,(FDataflowConnection *)pFVar10,FVar5,(FName)0x0);
  local_a0.Index = -1;
  local_a0.ContainerReference = (void *)0x0;
  local_a0.Reference = pFVar3;
  pFVar11 = ::FName::FName(&local_60,L"double");
  local_1b8 = 0;
  FVar5 = *pFVar11;
  pFVar10 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_a0);
  FDataflowNode::SetConnectionConcreteType
            ((FDataflowNode *)this,(FDataflowConnection *)pFVar10,FVar5,(FName)0x0);
  local_88.Index = -1;
  local_88.ContainerReference = (void *)0x0;
  local_88.Reference = pFVar4;
  pFVar11 = ::FName::FName(local_58,L"double");
  local_1b0 = 0;
  FVar5 = *pFVar11;
  pFVar10 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_88);
  FDataflowNode::SetConnectionConcreteType
            ((FDataflowNode *)this,(FDataflowConnection *)pFVar10,FVar5,(FName)0x0);
  return this;
}

