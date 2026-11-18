// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// StaticStruct @ 14ad7a3e0

UScriptStruct * __cdecl FMetasoundFrontendClassOutput::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassOutput.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassOutput.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassOutput,(UObject *)pUVar1,
                         L"MetasoundFrontendClassOutput");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassOutput.OuterSingleton;
}

// FMetasoundFrontendClassOutput @ 14ad9a540

FMetasoundFrontendClassOutput * __thiscall
FMetasoundFrontendClassOutput::FMetasoundFrontendClassOutput
          (FMetasoundFrontendClassOutput *this,FMetasoundFrontendClassVertex *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&this->field_0x18 = uVar1;
  uVar2 = (param_1->NodeID).B;
  uVar3 = (param_1->NodeID).C;
  uVar4 = (param_1->NodeID).D;
  *(uint *)&this->field_0x20 = (param_1->NodeID).A;
  *(uint *)&this->field_0x24 = uVar2;
  *(uint *)&this->field_0x28 = uVar3;
  *(uint *)&this->field_0x2c = uVar4;
  *(EMetasoundFrontendVertexAccessType *)&this->field_0x30 = param_1->AccessType;
  return this;
}

// FMetasoundFrontendClassOutput @ 14ad9a570

FMetasoundFrontendClassOutput * __thiscall
FMetasoundFrontendClassOutput::FMetasoundFrontendClassOutput
          (FMetasoundFrontendClassOutput *this,FOutput *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid FVar4;
  FGuid FVar5;
  char cVar6;
  bool bVar7;
  IDataTypeRegistry *pIVar8;
  FName FVar9;
  FClassIDGenerator *this_00;
  FGuid *pFVar10;
  FName local_res8;
  FName *local_res10;
  FName local_res18 [2];
  FGuid local_28;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  FVar4 = Metasound::FrontendInvalidID;
  *(undefined4 *)&this->field_0x30 = 0;
  FVar5 = Metasound::FrontendInvalidID;
  Metasound::FrontendInvalidID.A = FVar4.A;
  Metasound::FrontendInvalidID.B = FVar4.B;
  uVar1 = Metasound::FrontendInvalidID.B;
  Metasound::FrontendInvalidID.C = FVar4.C;
  uVar2 = Metasound::FrontendInvalidID.C;
  Metasound::FrontendInvalidID.D = FVar4.D;
  uVar3 = Metasound::FrontendInvalidID.D;
  *(uint *)&this->field_0x20 = Metasound::FrontendInvalidID.A;
  Metasound::FrontendInvalidID = FVar5;
  *(uint *)&this->field_0x24 = uVar1;
  *(uint *)&this->field_0x28 = uVar2;
  *(uint *)&this->field_0x2c = uVar3;
  uVar1 = (param_1->ParamName).Number;
  *(uint *)&this->field_0x0 = (param_1->ParamName).ComparisonIndex.Value;
  *(uint *)&this->field_0x4 = uVar1;
  local_res8 = param_1->DataType;
  if (local_res8 != (FName)0x0) {
    pIVar8 = Metasound::Frontend::IDataTypeRegistry::Get();
    cVar6 = (**(code **)((longlong)*pIVar8 + 0x38))(pIVar8,&local_res8);
    FVar9 = local_res8;
    if (cVar6 != '\0') goto LAB_14ad9a603;
    local_res10 = &local_res8;
    bVar7 = `Metasound::DocumentPrivate::ResolveMemberDataType'::__l6::<lambda_1>::operator()
                      (&local_res10);
    FVar9 = local_res8;
    if (bVar7) goto LAB_14ad9a603;
  }
  Metasound::Frontend::ConvertParameterToDataType((EAudioParameterType)local_res18);
  FVar9 = local_res18[0];
LAB_14ad9a603:
  *(uint *)&this->field_0x8 = FVar9.ComparisonIndex.Value;
  *(uint *)&this->field_0xc = FVar9.Number;
  this_00 = Metasound::Frontend::FClassIDGenerator::Get();
  pFVar10 = Metasound::Frontend::FClassIDGenerator::CreateOutputID(this_00,&local_28,param_1);
  uVar1 = pFVar10->B;
  uVar2 = pFVar10->C;
  uVar3 = pFVar10->D;
  *(uint *)&this->field_0x10 = pFVar10->A;
  *(uint *)&this->field_0x14 = uVar1;
  *(uint *)&this->field_0x18 = uVar2;
  *(uint *)&this->field_0x1c = uVar3;
  return this;
}

