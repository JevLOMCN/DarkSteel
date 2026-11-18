// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 9

// <lambda_invoker_cdecl> @ 142ccca70

void __cdecl
`UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::
AddColumn<FTEDSProcessorTestsReferenceColumn>'::__l3::<lambda_1>::<lambda_invoker_cdecl>
          (UScriptStruct *param_1,void *param_2,void *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_3 + 8);
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// <lambda_invoker_cdecl> @ 142ccca80

void __cdecl
`UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::AddColumn<FTest_PingPongDurPhys>'::
__l3::<lambda_1>::<lambda_invoker_cdecl>(UScriptStruct *param_1,void *param_2,void *param_3)

{
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  return;
}

// <lambda_invoker_cdecl> @ 142ccca90

void __cdecl
`UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::AddColumn<FTest_PingPongPostPhys>'::
__l3::<lambda_1>::<lambda_invoker_cdecl>(UScriptStruct *param_1,void *param_2,void *param_3)

{
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  return;
}

// <lambda_invoker_cdecl> @ 142cccaa0

void __cdecl
`UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::AddColumn<FTest_PingPongPrePhys>'::
__l3::<lambda_1>::<lambda_invoker_cdecl>(UScriptStruct *param_1,void *param_2,void *param_3)

{
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  return;
}

// AddColumn<FTEDSProcessorTestsReferenceColumn> @ 142ccddb0

FTEDSProcessorTestsReferenceColumn * __thiscall
UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::
AddColumn<FTEDSProcessorTestsReferenceColumn>
          (ICommonQueryWithEnvironmentContext *this,ulong64 param_1,
          FTEDSProcessorTestsReferenceColumn *param_2)

{
  bool bVar1;
  undefined7 uVar2;
  UScriptStruct *pUVar3;
  FTEDSProcessorTestsReferenceColumn *pFVar4;
  
  pUVar3 = FTEDSProcessorTestsReferenceColumn::StaticStruct();
  pFVar4 = (FTEDSProcessorTestsReferenceColumn *)
           (**(code **)((longlong)*this + 0xe0))
                     (this,param_1,pUVar3,
                      `UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::
                      AddColumn<FTEDSProcessorTestsReferenceColumn>'::__l3::<lambda_1>::
                      <lambda_invoker_cdecl>);
  bVar1 = param_2->IsReferenced;
  uVar2 = *(undefined7 *)&param_2->field_0x9;
  pFVar4->Reference = param_2->Reference;
  pFVar4->IsReferenced = bVar1;
  *(undefined7 *)&pFVar4->field_0x9 = uVar2;
  return pFVar4;
}

// AddColumn<FTest_PingPongDurPhys> @ 142ccde80

FTest_PingPongDurPhys * __thiscall
UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::AddColumn<FTest_PingPongDurPhys>
          (ICommonQueryWithEnvironmentContext *this,ulong64 param_1,FTest_PingPongDurPhys *param_2)

{
  UPackage *pUVar1;
  FTest_PingPongDurPhys *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongDurPhys,(UObject *)pUVar1,
                         L"Test_PingPongDurPhys");
  }
  pFVar2 = (FTest_PingPongDurPhys *)
           (**(code **)((longlong)*this + 0xe0))
                     (this,param_1,
                      Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton,
                      `UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::
                      AddColumn<FTest_PingPongDurPhys>'::__l3::<lambda_1>::<lambda_invoker_cdecl>);
  pFVar2->Value = param_2->Value;
  return pFVar2;
}

// AddColumn<FTest_PingPongPostPhys> @ 142ccdf00

FTest_PingPongPostPhys * __thiscall
UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::AddColumn<FTest_PingPongPostPhys>
          (ICommonQueryWithEnvironmentContext *this,ulong64 param_1,FTest_PingPongPostPhys *param_2)

{
  UPackage *pUVar1;
  FTest_PingPongPostPhys *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPostPhys,(UObject *)pUVar1,
                         L"Test_PingPongPostPhys");
  }
  pFVar2 = (FTest_PingPongPostPhys *)
           (**(code **)((longlong)*this + 0xe0))
                     (this,param_1,
                      Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton,
                      `UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::
                      AddColumn<FTest_PingPongPostPhys>'::__l3::<lambda_1>::<lambda_invoker_cdecl>);
  pFVar2->Value = param_2->Value;
  return pFVar2;
}

// AddColumn<FTest_PingPongPrePhys> @ 142ccdf80

FTest_PingPongPrePhys * __thiscall
UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::AddColumn<FTest_PingPongPrePhys>
          (ICommonQueryWithEnvironmentContext *this,ulong64 param_1,FTest_PingPongPrePhys *param_2)

{
  UPackage *pUVar1;
  FTest_PingPongPrePhys *pFVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPrePhys,(UObject *)pUVar1,
                         L"Test_PingPongPrePhys");
  }
  pFVar2 = (FTest_PingPongPrePhys *)
           (**(code **)((longlong)*this + 0xe0))
                     (this,param_1,
                      Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton,
                      `UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::
                      AddColumn<FTest_PingPongPrePhys>'::__l3::<lambda_1>::<lambda_invoker_cdecl>);
  pFVar2->Value = param_2->Value;
  return pFVar2;
}

// AddColumns<FTEDSProcessorTests_Linked> @ 142cce120

void __thiscall
UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::AddColumns<FTEDSProcessorTests_Linked>
          (ICommonQueryWithEnvironmentContext *this,ulong64 param_1)

{
  code *pcVar1;
  UScriptStruct *local_res8;
  UScriptStruct **local_18;
  undefined4 uStack_10;
  
  pcVar1 = *(code **)((longlong)*this + 200);
  local_res8 = FTEDSProcessorTests_Linked::StaticStruct();
  local_18 = &local_res8;
  uStack_10 = 1;
  (*pcVar1)(this,param_1,&local_18);
  return;
}

