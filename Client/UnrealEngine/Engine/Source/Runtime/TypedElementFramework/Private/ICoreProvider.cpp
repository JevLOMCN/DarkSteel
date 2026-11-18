// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 19

// <lambda_invoker_cdecl> @ 142c891c0

void __cdecl
`UE::Editor::DataStorage::ICoreProvider::AddColumn<FTypedElementLabelColumn>'::__l2::<lambda_2>::
<lambda_invoker_cdecl>(UScriptStruct *param_1,void *param_2,void *param_3)

{
  if (param_2 != param_3) {
    if (*(void **)param_2 != (void *)0x0) {
      FMemory::Free(*(void **)param_2);
    }
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = 0;
    *(undefined4 *)((longlong)param_2 + 8) = *(undefined4 *)((longlong)param_3 + 8);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined8 *)((longlong)param_3 + 8) = 0;
  }
  return;
}

// <lambda_invoker_cdecl> @ 142c89210

void __cdecl
`UE::Editor::DataStorage::ICoreProvider::AddColumn<FWidgetPurposeReferenceColumn>'::__l2::<lambda_2>
::<lambda_invoker_cdecl>(UScriptStruct *param_1,void *param_2,void *param_3)

{
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  return;
}

// AddColumn<FTypedElementLabelColumn> @ 142c8a3e0

void __thiscall
UE::Editor::DataStorage::ICoreProvider::AddColumn<FTypedElementLabelColumn>
          (ICoreProvider *this,ulong64 param_1,FTypedElementLabelColumn *param_2)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  FTypedElementLabelColumn *local_res8;
  code *local_18;
  FTypedElementLabelColumn **local_10;
  
  pcVar1 = *(code **)((longlong)*this + 0xb0);
  local_10 = &local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Editor::DataStorage::ICoreProvider::AddColumn<FTypedElementLabelColumn>'::__l2::<lambda_1>,void,void_*,UScriptStruct_const_&>
             ::Call;
  local_res8 = param_2;
  pUVar2 = FTypedElementLabelColumn::StaticStruct();
  (*pcVar1)(this,param_1,pUVar2,&local_18,
            `UE::Editor::DataStorage::ICoreProvider::AddColumn<FTypedElementLabelColumn>'::__l2::
            <lambda_2>::<lambda_invoker_cdecl>);
  return;
}

// AddColumn<FWidgetPurposeReferenceColumn> @ 142c8a460

void __thiscall
UE::Editor::DataStorage::ICoreProvider::AddColumn<FWidgetPurposeReferenceColumn>
          (ICoreProvider *this,ulong64 param_1,FWidgetPurposeReferenceColumn *param_2)

{
  code *pcVar1;
  UPackage *pUVar2;
  FWidgetPurposeReferenceColumn *local_res8;
  code *local_18;
  FWidgetPurposeReferenceColumn **local_10;
  
  pcVar1 = *(code **)((longlong)*this + 0xb0);
  local_10 = &local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Editor::DataStorage::ICoreProvider::AddColumn<FWidgetPurposeReferenceColumn>'::__l2::<lambda_1>,void,void_*,UScriptStruct_const_&>
             ::Call;
  local_res8 = param_2;
  if (Z_Registration_Info_UScriptStruct_FWidgetPurposeReferenceColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FWidgetPurposeReferenceColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetPurposeReferenceColumn,(UObject *)pUVar2,
                         L"WidgetPurposeReferenceColumn");
  }
  (*pcVar1)(this,param_1,
            Z_Registration_Info_UScriptStruct_FWidgetPurposeReferenceColumn.OuterSingleton,&local_18
            ,`UE::Editor::DataStorage::ICoreProvider::AddColumn<FWidgetPurposeReferenceColumn>'::
             __l2::<lambda_2>::<lambda_invoker_cdecl>);
  return;
}

// GetColumn<FTypedElementRowReferenceColumn> @ 142c8e410

FTypedElementRowReferenceColumn * __thiscall
UE::Editor::DataStorage::ICoreProvider::GetColumn<FTypedElementRowReferenceColumn>
          (ICoreProvider *this,ulong64 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UScriptStruct *pUVar1;
  FTypedElementRowReferenceColumn *pFVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*this + 0xf0);
  pUVar1 = FTypedElementRowReferenceColumn::StaticStruct();
                    /* WARNING: Could not recover jumptable at 0x000142c8e44f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FTypedElementRowReferenceColumn *)(*UNRECOVERED_JUMPTABLE)(this,param_1,pUVar1);
  return pFVar2;
}

// GetColumn<FTypedElementSlateWidgetReferenceColumn> @ 142c8e460

FTypedElementSlateWidgetReferenceColumn * __thiscall
UE::Editor::DataStorage::ICoreProvider::GetColumn<FTypedElementSlateWidgetReferenceColumn>
          (ICoreProvider *this,ulong64 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UPackage *pUVar1;
  FTypedElementSlateWidgetReferenceColumn *pFVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*this + 0xf0);
  if (Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn,
                         (UObject *)pUVar1,L"TypedElementSlateWidgetReferenceColumn");
  }
                    /* WARNING: Could not recover jumptable at 0x000142c8e4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FTypedElementSlateWidgetReferenceColumn *)
           (*UNRECOVERED_JUMPTABLE)
                     (this,param_1,
                      Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceColumn.
                      OuterSingleton);
  return pFVar2;
}

// GetColumn<FWidgetFactoryColumn> @ 142c8e4e0

FWidgetFactoryColumn * __thiscall
UE::Editor::DataStorage::ICoreProvider::GetColumn<FWidgetFactoryColumn>
          (ICoreProvider *this,ulong64 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UPackage *pUVar1;
  FWidgetFactoryColumn *pFVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*this + 0xf0);
  if (Z_Registration_Info_UScriptStruct_FWidgetFactoryColumn.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FWidgetFactoryColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetFactoryColumn,(UObject *)pUVar1,
                         L"WidgetFactoryColumn");
  }
                    /* WARNING: Could not recover jumptable at 0x000142c8e548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FWidgetFactoryColumn *)
           (*UNRECOVERED_JUMPTABLE)
                     (this,param_1,
                      Z_Registration_Info_UScriptStruct_FWidgetFactoryColumn.OuterSingleton);
  return pFVar2;
}

// GetColumn<FWidgetFactoryConditionsColumn> @ 142c8e560

FWidgetFactoryConditionsColumn * __thiscall
UE::Editor::DataStorage::ICoreProvider::GetColumn<FWidgetFactoryConditionsColumn>
          (ICoreProvider *this,ulong64 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UPackage *pUVar1;
  FWidgetFactoryConditionsColumn *pFVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*this + 0xe8);
  if (Z_Registration_Info_UScriptStruct_FWidgetFactoryConditionsColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FWidgetFactoryConditionsColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetFactoryConditionsColumn,(UObject *)pUVar1,
                         L"WidgetFactoryConditionsColumn");
  }
                    /* WARNING: Could not recover jumptable at 0x000142c8e5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FWidgetFactoryConditionsColumn *)
           (*UNRECOVERED_JUMPTABLE)
                     (this,param_1,
                      Z_Registration_Info_UScriptStruct_FWidgetFactoryConditionsColumn.
                      OuterSingleton);
  return pFVar2;
}

// HasColumns<FTypedElementSlateWidgetReferenceColumn> @ 142c8f740

bool __thiscall
UE::Editor::DataStorage::ICoreProvider::HasColumns<FTypedElementSlateWidgetReferenceColumn>
          (ICoreProvider *this,ulong64 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  UPackage *pUVar3;
  UScriptStruct *local_res8;
  UScriptStruct **local_18;
  undefined4 uStack_10;
  
  pcVar1 = *(code **)((longlong)*this + 0x100);
  if (Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn,
                         (UObject *)pUVar3,L"TypedElementSlateWidgetReferenceColumn");
  }
  local_18 = &local_res8;
  uStack_10 = 1;
  local_res8 = Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceColumn.
               OuterSingleton;
  uVar2 = (*pcVar1)(this,param_1,&local_18);
  return (bool)uVar2;
}

// AddColumn<FTestColumnDynamic> @ 142ccde10

void __thiscall
UE::Editor::DataStorage::ICoreProvider::AddColumn<FTestColumnDynamic>
          (ICoreProvider *this,ulong64 param_1,FName *param_2)

{
  undefined8 uVar1;
  UScriptStruct *local_18;
  FName local_10;
  
  local_18 = FTestColumnDynamic::StaticStruct();
  local_10 = *param_2;
  uVar1 = (**(code **)((longlong)*this + 0x128))(this,&local_18);
  (**(code **)((longlong)*this + 0xa8))(this,param_1,uVar1);
  return;
}

// AddColumns<FTestColumnB,FTestColumnC,FTestColumnD> @ 142cce190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::ICoreProvider::AddColumns<FTestColumnB,FTestColumnC,FTestColumnD>
          (ICoreProvider *this,ulong64 param_1)

{
  code *pcVar1;
  undefined1 auStack_58 [32];
  UScriptStruct **local_38;
  undefined4 uStack_30;
  UScriptStruct *local_28;
  UScriptStruct *local_20;
  UScriptStruct *local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)((longlong)*this + 0xb8);
  local_28 = FTestColumnB::StaticStruct();
  local_20 = FTestColumnC::StaticStruct();
  local_18 = FTestColumnD::StaticStruct();
  local_38 = &local_28;
  uStack_30 = 3;
  (*pcVar1)(this,param_1,&local_38);
  return;
}

// AddColumns<FTestColumnB,FTestColumnD> @ 142cce230

void __thiscall
UE::Editor::DataStorage::ICoreProvider::AddColumns<FTestColumnB,FTestColumnD>
          (ICoreProvider *this,ulong64 param_1)

{
  code *pcVar1;
  UScriptStruct *local_28;
  UScriptStruct *local_20;
  UScriptStruct **local_18;
  undefined4 uStack_10;
  
  pcVar1 = *(code **)((longlong)*this + 0xb8);
  local_28 = FTestColumnB::StaticStruct();
  local_20 = FTestColumnD::StaticStruct();
  local_18 = &local_28;
  uStack_10 = 2;
  (*pcVar1)(this,param_1,&local_18);
  return;
}

// AddColumns<FTestColumnC,FTestColumnD> @ 142cce2b0

void __thiscall
UE::Editor::DataStorage::ICoreProvider::AddColumns<FTestColumnC,FTestColumnD>
          (ICoreProvider *this,ulong64 param_1)

{
  code *pcVar1;
  UScriptStruct *local_28;
  UScriptStruct *local_20;
  UScriptStruct **local_18;
  undefined4 uStack_10;
  
  pcVar1 = *(code **)((longlong)*this + 0xb8);
  local_28 = FTestColumnC::StaticStruct();
  local_20 = FTestColumnD::StaticStruct();
  local_18 = &local_28;
  uStack_10 = 2;
  (*pcVar1)(this,param_1,&local_18);
  return;
}

// AddColumns<FTestTagColumnB,FTestTagColumnC> @ 142cce330

void __thiscall
UE::Editor::DataStorage::ICoreProvider::AddColumns<FTestTagColumnB,FTestTagColumnC>
          (ICoreProvider *this,ulong64 param_1)

{
  code *pcVar1;
  UScriptStruct *local_28;
  UScriptStruct *local_20;
  UScriptStruct **local_18;
  undefined4 uStack_10;
  
  pcVar1 = *(code **)((longlong)*this + 0xb8);
  local_28 = FTestTagColumnB::StaticStruct();
  local_20 = FTestTagColumnC::StaticStruct();
  local_18 = &local_28;
  uStack_10 = 2;
  (*pcVar1)(this,param_1,&local_18);
  return;
}

// AddColumns<FTestTagColumnB,FTestTagColumnC,FTestTagColumnD> @ 142cce3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::ICoreProvider::AddColumns<FTestTagColumnB,FTestTagColumnC,FTestTagColumnD>
          (ICoreProvider *this,ulong64 param_1)

{
  code *pcVar1;
  undefined1 auStack_58 [32];
  UScriptStruct **local_38;
  undefined4 uStack_30;
  UScriptStruct *local_28;
  UScriptStruct *local_20;
  UScriptStruct *local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)((longlong)*this + 0xb8);
  local_28 = FTestTagColumnB::StaticStruct();
  local_20 = FTestTagColumnC::StaticStruct();
  local_18 = FTestTagColumnD::StaticStruct();
  local_38 = &local_28;
  uStack_30 = 3;
  (*pcVar1)(this,param_1,&local_38);
  return;
}

// AddColumns<FTestTagColumnD> @ 142cce450

void __thiscall
UE::Editor::DataStorage::ICoreProvider::AddColumns<FTestTagColumnD>
          (ICoreProvider *this,ulong64 param_1)

{
  code *pcVar1;
  UScriptStruct *local_res8;
  UScriptStruct **local_18;
  undefined4 uStack_10;
  
  pcVar1 = *(code **)((longlong)*this + 0xb8);
  local_res8 = FTestTagColumnD::StaticStruct();
  local_18 = &local_res8;
  uStack_10 = 1;
  (*pcVar1)(this,param_1,&local_18);
  return;
}

// GetColumn<FTest_PingPongPrePhys> @ 142cd7770

FTest_PingPongPrePhys * __thiscall
UE::Editor::DataStorage::ICoreProvider::GetColumn<FTest_PingPongPrePhys>
          (ICoreProvider *this,ulong64 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UPackage *pUVar1;
  FTest_PingPongPrePhys *pFVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*this + 0xf0);
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPrePhys,(UObject *)pUVar1,
                         L"Test_PingPongPrePhys");
  }
                    /* WARNING: Could not recover jumptable at 0x000142cd77d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FTest_PingPongPrePhys *)
           (*UNRECOVERED_JUMPTABLE)
                     (this,param_1,
                      Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton);
  return pFVar2;
}

// RegisterTable<FTEDSProcessorTestsReferenceColumn,FTEDSProcessorTests_PrimaryTag> @ 142cdea40

ulong64 __thiscall
UE::Editor::DataStorage::ICoreProvider::
RegisterTable<FTEDSProcessorTestsReferenceColumn,FTEDSProcessorTests_PrimaryTag>
          (ICoreProvider *this,FName *param_1)

{
  code *pcVar1;
  ulong64 uVar2;
  UScriptStruct *local_28;
  UScriptStruct *local_20;
  UScriptStruct **local_18;
  undefined4 uStack_10;
  
  pcVar1 = *(code **)((longlong)*this + 0x18);
  local_28 = FTEDSProcessorTestsReferenceColumn::StaticStruct();
  local_20 = FTEDSProcessorTests_PrimaryTag::StaticStruct();
  local_18 = &local_28;
  uStack_10 = 2;
  uVar2 = (*pcVar1)(this,&local_18,param_1);
  return uVar2;
}

// RegisterTable<FTEDSProcessorTestsReferenceColumn,FTEDSProcessorTests_SecondaryTag> @ 142cdeab0

ulong64 __thiscall
UE::Editor::DataStorage::ICoreProvider::
RegisterTable<FTEDSProcessorTestsReferenceColumn,FTEDSProcessorTests_SecondaryTag>
          (ICoreProvider *this,FName *param_1)

{
  code *pcVar1;
  ulong64 uVar2;
  UScriptStruct *local_28;
  UScriptStruct *local_20;
  UScriptStruct **local_18;
  undefined4 uStack_10;
  
  pcVar1 = *(code **)((longlong)*this + 0x18);
  local_28 = FTEDSProcessorTestsReferenceColumn::StaticStruct();
  local_20 = FTEDSProcessorTests_SecondaryTag::StaticStruct();
  local_18 = &local_28;
  uStack_10 = 2;
  uVar2 = (*pcVar1)(this,&local_18,param_1);
  return uVar2;
}

