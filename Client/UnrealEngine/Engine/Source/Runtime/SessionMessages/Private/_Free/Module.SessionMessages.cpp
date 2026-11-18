// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionMessages
// Functions: 20

// `dynamic_initializer_for_'ModuleRegistrantSessionMessages'' @ 1411683a0

void __cdecl _dynamic_initializer_for__ModuleRegistrantSessionMessages__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SessionMessages";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SessionMessages",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FSessionMessagesModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SessionMessages_Public_SessionServiceMessages_h__Script_SessionMessages_367156995'' @ 1411683f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SessionMessages_Public_SessionServiceMessages_h__Script_SessionMessages_367156995__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SessionMessages",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SessionMessages_Public_SessionServiceMessages_h__Script_SessionMessages_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_SessionMessages'' @ 141168430

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_SessionMessages__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x5e174258;
  local_res8[0].DeclarationsHash = 0xed52d5ee;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_SessionMessages,L"/Script/SessionMessages",
             &Z_Registration_Info_UPackage__Script_SessionMessages,local_res8);
  return;
}

// Z_Construct_UPackage__Script_SessionMessages @ 148ce7ca0

UPackage * __cdecl Z_Construct_UPackage__Script_SessionMessages(void)

{
  if (Z_Registration_Info_UPackage__Script_SessionMessages.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_SessionMessages.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_SessionMessages.OuterSingleton;
}

// NewStructOps @ 148ce7e20

void * __cdecl Z_Construct_UScriptStruct_FSessionServicePing_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSessionServicePing,&UE::CoreUObject::Private::Construct<FSessionServicePing>,&UE::CoreUObject::Private::ConstructForTests<FSessionServicePing>,&UE::CoreUObject::Private::Destruct<FSessionServicePing>,&UE::CoreUObject::Private::Copy<FSessionServicePing>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_Authorized_SetBit @ 148ce7e60

void __cdecl
Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Authorized_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_Standalone_SetBit @ 148ce7e70

void __cdecl
Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Standalone_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// NewStructOps @ 148ce7e80

void * __cdecl Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSessionServicePong,&UE::CoreUObject::Private::Construct<FSessionServicePong>,&UE::CoreUObject::Private::ConstructForTests<FSessionServicePong>,&UE::CoreUObject::Private::Destruct<FSessionServicePong>,&UE::CoreUObject::Private::Copy<FSessionServicePong>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148ce7ec0

void * __cdecl Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSessionServiceLog,&UE::CoreUObject::Private::Construct<FSessionServiceLog>,&UE::CoreUObject::Private::ConstructForTests<FSessionServiceLog>,&UE::CoreUObject::Private::Destruct<FSessionServiceLog>,&UE::CoreUObject::Private::Copy<FSessionServiceLog>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148ce7f00

void * __cdecl Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSessionServiceLogSubscribe,&UE::CoreUObject::Private::Construct<FSessionServiceLogSubscribe>,&UE::CoreUObject::Private::ConstructForTests<FSessionServiceLogSubscribe>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148ce7f40

void * __cdecl Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSessionServiceLogUnsubscribe,&UE::CoreUObject::Private::Construct<FSessionServiceLogUnsubscribe>,&UE::CoreUObject::Private::ConstructForTests<FSessionServiceLogUnsubscribe>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148ce7fb0

void * __thiscall
FSessionMessagesModule::_scalar_deleting_destructor_(FSessionMessagesModule *this,uint param_1)

{
  *this = (FSessionMessagesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeSessionMessages_init @ 148ce83a0

void __cdecl EmptyLinkFunctionForGeneratedCodeSessionMessages_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSessionServiceMessages @ 148ce83b0

void __cdecl EmptyLinkFunctionForGeneratedCodeSessionServiceMessages(void)

{
  return;
}

// Z_Construct_UScriptStruct_FSessionServiceLog @ 148ce83f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSessionServiceLog(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSessionServiceLog.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSessionServiceLog.InnerSingleton,
               &Z_Construct_UScriptStruct_FSessionServiceLog_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSessionServiceLog.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSessionServiceLog.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSessionServiceLogSubscribe @ 148ce8470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSessionServiceLogSubscribe(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSessionServiceLogSubscribe.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSessionServiceLogSubscribe.InnerSingleton,
               &Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSessionServiceLogSubscribe.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSessionServiceLogSubscribe.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe @ 148ce84f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSessionServiceLogUnsubscribe.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSessionServiceLogUnsubscribe.InnerSingleton,
               &Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSessionServiceLogUnsubscribe.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSessionServiceLogUnsubscribe.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSessionServicePing @ 148ce8570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSessionServicePing(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSessionServicePing.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSessionServicePing.InnerSingleton,
               &Z_Construct_UScriptStruct_FSessionServicePing_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSessionServicePing.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSessionServicePing.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSessionServicePong @ 148ce85f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSessionServicePong(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSessionServicePong.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSessionServicePong.InnerSingleton,
               &Z_Construct_UScriptStruct_FSessionServicePong_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSessionServicePong.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSessionServicePong.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_SessionMessages @ 148ce8670

void __cdecl IMPLEMENT_MODULE_SessionMessages(void)

{
  return;
}

