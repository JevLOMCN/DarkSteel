// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443edf60

UScriptStruct * __cdecl FDataflowVectorLengthNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorLengthNode,(UObject *)pUVar1,
                         L"DataflowVectorLengthNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.OuterSingleton;
}

// GetType @ 1443edfa0

FName __thiscall FDataflowVectorLengthNode::GetType(FDataflowVectorLengthNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowVectorLengthNode");
  return in_RDX;
}

// IsA @ 1443edfd0

bool __thiscall FDataflowVectorLengthNode::IsA(FDataflowVectorLengthNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowVectorLengthNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443ee038;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443ee038:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443ee056;
      }
    }
  }
  bVar5 = true;
LAB_1443ee056:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443ee090

FStructOnScope * __thiscall
FDataflowVectorLengthNode::NewStructOnScope(FDataflowVectorLengthNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorLengthNode,(UObject *)pUVar2,
                           L"DataflowVectorLengthNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443ee110

void __thiscall
FDataflowVectorLengthNode::SerializeInternal(FDataflowVectorLengthNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorLengthNode,(UObject *)pUVar1,
                         L"DataflowVectorLengthNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443ee18d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443ee1a0

FName __thiscall FDataflowVectorLengthNode::GetDisplayName(FDataflowVectorLengthNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"VectorLength");
  return in_RDX;
}

// GetCategory @ 1443ee210

FName __thiscall FDataflowVectorLengthNode::GetCategory(FDataflowVectorLengthNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Vectors");
  return in_RDX;
}

// GetTags @ 1443ee240

FString * __thiscall
FDataflowVectorLengthNode::GetTags(FDataflowVectorLengthNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Size Magnitude");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443ee270

UScriptStruct * __thiscall
FDataflowVectorLengthNode::TypedScriptStruct(FDataflowVectorLengthNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorLengthNode,(UObject *)pUVar1,
                         L"DataflowVectorLengthNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowVectorLengthNode.OuterSingleton;
}

// Evaluate @ 1443ee2b0

void __thiscall
FDataflowVectorLengthNode::Evaluate
          (FDataflowVectorLengthNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double local_res8;
  TVector4<double>_u_0 local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowNumericTypes *)puVar1 == &this->Length) {
    local_28._8_4_ = 0xffffffff;
    local_28._s_0.Z = 0.0;
    local_28._s_0.X = (double)&this->V;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_28._s_0)
    ;
    FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
              (this_00,(TVector4<double> *)&local_28._s_0,param_1,&(this->V).Value);
    auVar2._0_8_ = local_28._s_0.X * local_28._s_0.X;
    auVar2._8_8_ = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_28._s_0.W * local_28._s_0.W + local_28._s_0.Z * local_28._s_0.Z +
                   (double)CONCAT44(local_28._12_4_,local_28._8_4_) *
                   (double)CONCAT44(local_28._12_4_,local_28._8_4_) + auVar2._0_8_;
    auVar3 = sqrtpd(auVar2,auVar3);
    local_res8 = auVar3._0_8_;
    FDataflowNode::SetValue<FDataflowNumericTypes>
              ((FDataflowNode *)this,param_1,&local_res8,&this->Length);
  }
  return;
}

// FDataflowVectorLengthNode @ 144430260

FDataflowVectorLengthNode * __thiscall
FDataflowVectorLengthNode::FDataflowVectorLengthNode
          (FDataflowVectorLengthNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowNumericTypes *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FDataflowInput *pFVar5;
  FDataflowVectorLengthNode *pFVar6;
  FDataflowOutput *pFVar7;
  FName *pFVar8;
  FName local_res8;
  FName local_res18;
  undefined8 local_res20;
  FConnectionReference local_90;
  FConnectionReference local_78;
  FConnectionReference local_60;
  FName local_48 [2];
  FGuid local_38;
  
  local_38.A = param_2->A;
  local_38.B = param_2->B;
  local_38.C = param_2->C;
  local_38.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_38);
  local_90.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  *(undefined ***)this = &___7FDataflowVectorLengthNode__6B_;
  pFVar1 = &this->Length;
  local_90.Reference = &this->V;
  pFVar1->Value = 0.0;
  (((FDataflowVectorTypes *)local_90.Reference)->Value).field0_0x0._s_0.X = 0.0;
  (this->V).Value.field0_0x0._s_0.Y = 0.0;
  (this->V).Value.field0_0x0._s_0.Z = 0.0;
  (this->V).Value.field0_0x0._s_0.W = 0.0;
  local_90.ContainerReference = (void *)0x0;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_90,&local_res8);
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
      pFVar6 = (FDataflowVectorLengthNode *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pFVar1;
  pFVar7 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_78,&local_res18);
  if (pFVar7->_padding_ == 0) {
    pFVar7->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FDataflowVectorLengthNode *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_60.Index = -1;
  local_60.ContainerReference = (void *)0x0;
  local_60.Reference = pFVar1;
  pFVar8 = ::FName::FName(local_48,L"double");
  local_res20 = 0;
  FVar2 = *pFVar8;
  pFVar7 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_60);
  FDataflowNode::SetConnectionConcreteType
            ((FDataflowNode *)this,(FDataflowConnection *)pFVar7,FVar2,(FName)0x0);
  return this;
}

