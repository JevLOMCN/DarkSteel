// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443e7350

UScriptStruct * __cdecl FDataflowVectorMakeVec3Node::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node,(UObject *)pUVar1,
                         L"DataflowVectorMakeVec3Node");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.OuterSingleton;
}

// GetType @ 1443e75f0

FName __thiscall FDataflowVectorMakeVec3Node::GetType(FDataflowVectorMakeVec3Node *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowVectorMakeVec3Node");
  return in_RDX;
}

// IsA @ 1443e7660

bool __thiscall FDataflowVectorMakeVec3Node::IsA(FDataflowVectorMakeVec3Node *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowVectorMakeVec3Node");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443e76c8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443e76c8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443e76e6;
      }
    }
  }
  bVar5 = true;
LAB_1443e76e6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443e7720

FStructOnScope * __thiscall
FDataflowVectorMakeVec3Node::NewStructOnScope(FDataflowVectorMakeVec3Node *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node,(UObject *)pUVar2,
                           L"DataflowVectorMakeVec3Node");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443e77a0

void __thiscall
FDataflowVectorMakeVec3Node::SerializeInternal(FDataflowVectorMakeVec3Node *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node,(UObject *)pUVar1,
                         L"DataflowVectorMakeVec3Node");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443e781d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443e7830

FName __thiscall FDataflowVectorMakeVec3Node::GetDisplayName(FDataflowVectorMakeVec3Node *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeVector3");
  return in_RDX;
}

// GetCategory @ 1443e7910

FName __thiscall FDataflowVectorMakeVec3Node::GetCategory(FDataflowVectorMakeVec3Node *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Vectors");
  return in_RDX;
}

// GetTags @ 1443e7940

FString * __thiscall
FDataflowVectorMakeVec3Node::GetTags
          (FDataflowVectorMakeVec3Node *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Create Add 3D XYZ");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443e7970

UScriptStruct * __thiscall
FDataflowVectorMakeVec3Node::TypedScriptStruct(FDataflowVectorMakeVec3Node *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorMakeVec3Node,(UObject *)pUVar1,
                         L"DataflowVectorMakeVec3Node");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowVectorMakeVec3Node.OuterSingleton;
}

// Evaluate @ 1443e79f0

void __thiscall
FDataflowVectorMakeVec3Node::Evaluate
          (FDataflowVectorMakeVec3Node *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowNumericTypes *local_58;
  undefined4 local_50;
  undefined8 local_48;
  FDataflowNumericTypes *local_40;
  undefined4 local_38;
  undefined8 local_30;
  TVector4<double>_u_0 local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowVectorTypes *)puVar1 == &this->Vector3D) {
    local_58 = &this->X;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_28._s_0.X =
         FDataflowNode::GetValue<FDataflowNumericTypes>
                   ((FDataflowNode *)this,param_1,
                    (TConnectionReference<FDataflowNumericTypes> *)&local_58);
    local_58 = &this->Y;
    local_40 = &this->Z;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_38 = 0xffffffff;
    local_30 = 0;
    local_28._s_0.Y =
         FDataflowNode::GetValue<FDataflowNumericTypes>
                   ((FDataflowNode *)this,param_1,
                    (TConnectionReference<FDataflowNumericTypes> *)&local_58);
    local_28._s_0.Z =
         FDataflowNode::GetValue<FDataflowNumericTypes>
                   ((FDataflowNode *)this,param_1,
                    (TConnectionReference<FDataflowNumericTypes> *)&local_40);
    local_28._s_0.W = 0.0;
    FDataflowNode::SetValue<FDataflowVectorTypes>
              ((FDataflowNode *)this,param_1,(TVector4<double> *)&local_28._s_0,&this->Vector3D);
  }
  return;
}

// FDataflowVectorMakeVec3Node @ 144430600

FDataflowVectorMakeVec3Node * __thiscall
FDataflowVectorMakeVec3Node::FDataflowVectorMakeVec3Node
          (FDataflowVectorMakeVec3Node *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowVectorTypes *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FDataflowInput *pFVar5;
  FDataflowVectorMakeVec3Node *pFVar6;
  FDataflowOutput *pFVar7;
  FName *pFVar8;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FName local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  FConnectionReference local_d0;
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
  local_d0.Index = -1;
  pFVar1 = &this->Vector3D;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_d0.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FDataflowVectorMakeVec3Node__6B_;
  local_d0.Reference = &this->X;
  (this->Y).Value = 0.0;
  ((FDataflowNumericTypes *)local_d0.Reference)->Value = 0.0;
  (this->Z).Value = 0.0;
  (pFVar1->Value).field0_0x0._s_0.X = 0.0;
  (this->Vector3D).Value.field0_0x0._s_0.Y = 0.0;
  (this->Vector3D).Value.field0_0x0._s_0.Z = 0.0;
  (this->Vector3D).Value.field0_0x0._s_0.W = 0.0;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_d0,&local_res8);
  if (pFVar5->_padding_ == 0) {
    pFVar5->_padding_ =
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
      pFVar6 = (FDataflowVectorMakeVec3Node *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_b8.Index = -1;
  local_b8.ContainerReference = (void *)0x0;
  local_b8.Reference = &this->Y;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_b8,&local_res18);
  if (pFVar5->_padding_ == 0) {
    pFVar5->_padding_ =
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
      pFVar6 = (FDataflowVectorMakeVec3Node *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_a0.Index = -1;
  local_a0.ContainerReference = (void *)0x0;
  local_a0.Reference = &this->Z;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_a0,&local_res20);
  if (pFVar5->_padding_ == 0) {
    pFVar5->_padding_ =
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
      pFVar6 = (FDataflowVectorMakeVec3Node *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  local_e8 = 0;
  local_e0 = 0xffffffff;
  local_d8 = 0;
  local_88.Index = -1;
  local_88.ContainerReference = (void *)0x0;
  local_88.Reference = pFVar1;
  pFVar7 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_88,&local_f8);
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
      pFVar6 = (FDataflowVectorMakeVec3Node *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_70.Index = -1;
  local_70.ContainerReference = (void *)0x0;
  local_70.Reference = pFVar1;
  pFVar8 = ::FName::FName(local_58,L"FVector");
  local_f0 = 0;
  FVar2 = *pFVar8;
  pFVar7 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_70);
  FDataflowNode::SetConnectionConcreteType
            ((FDataflowNode *)this,(FDataflowConnection *)pFVar7,FVar2,(FName)0x0);
  return this;
}

