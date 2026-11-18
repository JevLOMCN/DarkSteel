// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 12

// StaticStruct @ 1443ef070

UScriptStruct * __cdecl FDataflowVectorDistanceNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorDistanceNode,(UObject *)pUVar1,
                         L"DataflowVectorDistanceNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.OuterSingleton;
}

// GetType @ 1443ef0b0

FName __thiscall FDataflowVectorDistanceNode::GetType(FDataflowVectorDistanceNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowVectorDistanceNode");
  return in_RDX;
}

// IsA @ 1443ef120

bool __thiscall FDataflowVectorDistanceNode::IsA(FDataflowVectorDistanceNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowVectorDistanceNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443ef188;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443ef188:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443ef1a6;
      }
    }
  }
  bVar5 = true;
LAB_1443ef1a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443ef1e0

FStructOnScope * __thiscall
FDataflowVectorDistanceNode::NewStructOnScope(FDataflowVectorDistanceNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorDistanceNode,(UObject *)pUVar2,
                           L"DataflowVectorDistanceNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443ef260

void __thiscall
FDataflowVectorDistanceNode::SerializeInternal(FDataflowVectorDistanceNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorDistanceNode,(UObject *)pUVar1,
                         L"DataflowVectorDistanceNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443ef2dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443ef2f0

FName __thiscall FDataflowVectorDistanceNode::GetDisplayName(FDataflowVectorDistanceNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"VectorDistance");
  return in_RDX;
}

// GetCategory @ 1443ef320

FName __thiscall FDataflowVectorDistanceNode::GetCategory(FDataflowVectorDistanceNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Vectors");
  return in_RDX;
}

// GetTags @ 1443ef350

FString * __thiscall
FDataflowVectorDistanceNode::GetTags
          (FDataflowVectorDistanceNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443ef380

UScriptStruct * __thiscall
FDataflowVectorDistanceNode::TypedScriptStruct(FDataflowVectorDistanceNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorDistanceNode,(UObject *)pUVar1,
                         L"DataflowVectorDistanceNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowVectorDistanceNode.OuterSingleton;
}

// Evaluate @ 1443ef3c0

void __thiscall
FDataflowVectorDistanceNode::Evaluate
          (FDataflowVectorDistanceNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *pFVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double local_res8;
  TVector4<double>_u_0 local_48;
  TVector4<double>_u_0 local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowNumericTypes *)puVar1 == &this->Distance) {
    local_48._8_4_ = 0xffffffff;
    local_48._s_0.Z = 0.0;
    local_48._s_0.X = (double)&this->A;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_48._s_0);
    FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
              (pFVar2,(TVector4<double> *)&local_28._s_0,param_1,&(this->A).Value);
    local_48._8_4_ = 0xffffffff;
    local_48._s_0.Z = 0.0;
    local_48._s_0.X = (double)&this->B;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_48._s_0);
    FDataflowInput::GetValueFromAnyType<FDataflowVectorTypes>
              (pFVar2,(TVector4<double> *)&local_48._s_0,param_1,&(this->B).Value);
    dVar5 = (double)CONCAT44(local_48._12_4_,local_48._8_4_) - local_28._s_0.Y;
    auVar3._0_8_ = (local_48._s_0.Z - local_28._s_0.Z) * (local_48._s_0.Z - local_28._s_0.Z);
    auVar3._8_8_ = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (local_48._s_0.W - local_28._s_0.W) * (local_48._s_0.W - local_28._s_0.W) +
                   auVar3._0_8_ +
                   dVar5 * dVar5 +
                   (local_48._s_0.X - local_28._s_0.X) * (local_48._s_0.X - local_28._s_0.X);
    auVar4 = sqrtpd(auVar3,auVar4);
    local_res8 = auVar4._0_8_;
    FDataflowNode::SetValue<FDataflowNumericTypes>
              ((FDataflowNode *)this,param_1,&local_res8,&this->Distance);
  }
  return;
}

// FDataflowVectorDistanceNode @ 14442fa30

FDataflowVectorDistanceNode * __thiscall
FDataflowVectorDistanceNode::FDataflowVectorDistanceNode
          (FDataflowVectorDistanceNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowNumericTypes *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FDataflowInput *pFVar5;
  FDataflowVectorDistanceNode *pFVar6;
  FDataflowOutput *pFVar7;
  FName *pFVar8;
  FName local_res8 [2];
  FName local_res18;
  FName local_res20;
  FConnectionReference local_b8;
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
  local_b8.Index = -1;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  local_b8.ContainerReference = (void *)0x0;
  *(undefined ***)this = &___7FDataflowVectorDistanceNode__6B_;
  pFVar1 = &this->Distance;
  local_b8.Reference = &this->A;
  (this->B).Value.field0_0x0._s_0.X = 0.0;
  (((FDataflowVectorTypes *)local_b8.Reference)->Value).field0_0x0._s_0.X = 0.0;
  (this->A).Value.field0_0x0._s_0.Y = 0.0;
  (this->A).Value.field0_0x0._s_0.Z = 0.0;
  (this->A).Value.field0_0x0._s_0.W = 0.0;
  (this->B).Value.field0_0x0._s_0.Y = 0.0;
  (this->B).Value.field0_0x0._s_0.Z = 0.0;
  (this->B).Value.field0_0x0._s_0.W = 0.0;
  pFVar1->Value = 0.0;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_b8,local_res8);
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
      pFVar6 = (FDataflowVectorDistanceNode *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_a0.Index = -1;
  local_a0.ContainerReference = (void *)0x0;
  local_a0.Reference = &this->B;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_a0,&local_res18);
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
      pFVar6 = (FDataflowVectorDistanceNode *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_88.Index = -1;
  local_88.ContainerReference = (void *)0x0;
  local_88.Reference = pFVar1;
  pFVar7 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_88,&local_res20);
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
      pFVar6 = (FDataflowVectorDistanceNode *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_70.Index = -1;
  local_70.ContainerReference = (void *)0x0;
  local_70.Reference = pFVar1;
  pFVar8 = ::FName::FName(local_58,L"double");
  FVar2 = *pFVar8;
  pFVar7 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_70);
  FDataflowNode::SetConnectionConcreteType
            ((FDataflowNode *)this,(FDataflowConnection *)pFVar7,FVar2,(FName)0x0);
  return this;
}

// FDataflowVectorDistanceNode @ 14442fc40

FDataflowVectorDistanceNode * __thiscall
FDataflowVectorDistanceNode::FDataflowVectorDistanceNode(FDataflowVectorDistanceNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  *(undefined ***)this = &___7FDataflowVectorDistanceNode__6B_;
  (this->A).Value.field0_0x0._s_0.X = 0.0;
  (this->A).Value.field0_0x0._s_0.Y = 0.0;
  (this->A).Value.field0_0x0._s_0.Z = 0.0;
  (this->A).Value.field0_0x0._s_0.W = 0.0;
  (this->B).Value.field0_0x0._s_0.X = 0.0;
  (this->B).Value.field0_0x0._s_0.Y = 0.0;
  (this->B).Value.field0_0x0._s_0.Z = 0.0;
  (this->B).Value.field0_0x0._s_0.W = 0.0;
  (this->Distance).Value = 0.0;
  return this;
}

