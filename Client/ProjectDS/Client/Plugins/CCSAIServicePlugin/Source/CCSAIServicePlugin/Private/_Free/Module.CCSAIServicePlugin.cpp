// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CCSAIServicePlugin
// Functions: 58

// `dynamic_initializer_for_'ModuleRegistrantCCSAIServicePlugin'' @ 1411dc610

void __cdecl _dynamic_initializer_for__ModuleRegistrantCCSAIServicePlugin__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "CCSAIServicePlugin";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"CCSAIServicePlugin",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FCCSAIServicePluginModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_CCSAIServicePlugin_Source_CCSAIServicePlugin_Public_CCSAIProtocol_h__Script_CCSAIServicePlugin_3057084547'' @ 1411dc660

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_CCSAIServicePlugin_Source_CCSAIServicePlugin_Public_CCSAIProtocol_h__Script_CCSAIServicePlugin_3057084547__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CCSAIServicePlugin",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_CCSAIServicePlugin_Source_CCSAIServicePlugin_Public_CCSAIProtocol_h__Script_CCSAIServicePlugin_Statics
             ::ScriptStructInfo,8,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_CCSAIServicePlugin_Source_CCSAIServicePlugin_Public_CCSAIProtocol_h__Script_CCSAIServicePlugin_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_CCSAIServicePlugin_Source_CCSAIServicePlugin_Public_CCSAIService_h__Script_CCSAIServicePlugin_601359280'' @ 1411dc6b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_CCSAIServicePlugin_Source_CCSAIServicePlugin_Public_CCSAIService_h__Script_CCSAIServicePlugin_601359280__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CCSAIServicePlugin",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_CCSAIServicePlugin_Source_CCSAIServicePlugin_Public_CCSAIService_h__Script_CCSAIServicePlugin_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_CCSAIServicePlugin'' @ 1411dc6f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_CCSAIServicePlugin__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x1fc4d395;
  local_res8[0].DeclarationsHash = 0x46b88c53;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_CCSAIServicePlugin,L"/Script/CCSAIServicePlugin",
             &Z_Registration_Info_UPackage__Script_CCSAIServicePlugin,local_res8);
  return;
}

// Z_Construct_UEnum_CCSAIServicePlugin_ECCS_AIInputType @ 14ac83ab0

UEnum * __cdecl Z_Construct_UEnum_CCSAIServicePlugin_ECCS_AIInputType(void)

{
  if (Z_Registration_Info_UEnum_ECCS_AIInputType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECCS_AIInputType.InnerSingleton,
               &Z_Construct_UEnum_CCSAIServicePlugin_ECCS_AIInputType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECCS_AIInputType.InnerSingleton;
}

// Z_Construct_UEnum_CCSAIServicePlugin_ECCS_MessageType @ 14ac83af0

UEnum * __cdecl Z_Construct_UEnum_CCSAIServicePlugin_ECCS_MessageType(void)

{
  if (Z_Registration_Info_UEnum_ECCS_MessageType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECCS_MessageType.InnerSingleton,
               &Z_Construct_UEnum_CCSAIServicePlugin_ECCS_MessageType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECCS_MessageType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCCS_AICmd @ 14ac83b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCCS_AICmd(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCCS_AICmd.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCCS_AICmd.InnerSingleton,
               &Z_Construct_UScriptStruct_FCCS_AICmd_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCCS_AICmd.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCCS_AICmd.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCCS_AIInput @ 14ac83bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCCS_AIInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCCS_AIInput.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCCS_AIInput.InnerSingleton,
               &Z_Construct_UScriptStruct_FCCS_AIInput_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCCS_AIInput.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCCS_AIInput.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCCS_CharEntityRegistrationResponse @ 14ac83c30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCCS_CharEntityRegistrationResponse(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCCS_CharEntityRegistrationResponse.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCCS_CharEntityRegistrationResponse.InnerSingleton
               ,&Z_Construct_UScriptStruct_FCCS_CharEntityRegistrationResponse_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FCCS_CharEntityRegistrationResponse.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCCS_CharEntityRegistrationResponse.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCCS_LoginRequest @ 14ac83cb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCCS_LoginRequest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCCS_LoginRequest.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCCS_LoginRequest.InnerSingleton,
               &Z_Construct_UScriptStruct_FCCS_LoginRequest_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCCS_LoginRequest.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCCS_LoginRequest.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCCS_LogoutRequest @ 14ac83d30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCCS_LogoutRequest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCCS_LogoutRequest.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCCS_LogoutRequest.InnerSingleton,
               &Z_Construct_UScriptStruct_FCCS_LogoutRequest_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCCS_LogoutRequest.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCCS_LogoutRequest.InnerSingleton;
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

// Z_Construct_UPackage__Script_CCSAIServicePlugin @ 14ac83db0

UPackage * __cdecl Z_Construct_UPackage__Script_CCSAIServicePlugin(void)

{
  if (Z_Registration_Info_UPackage__Script_CCSAIServicePlugin.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_CCSAIServicePlugin.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_CCSAIServicePlugin.OuterSingleton;
}

// ECCS_AIInputType_StaticEnum @ 14ac83df0

UEnum * __cdecl ECCS_AIInputType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECCS_AIInputType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CCSAIServicePlugin();
    Z_Registration_Info_UEnum_ECCS_AIInputType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CCSAIServicePlugin_ECCS_AIInputType,(UObject *)pUVar1,
                       L"ECCS_AIInputType");
  }
  return Z_Registration_Info_UEnum_ECCS_AIInputType.OuterSingleton;
}

// NewProp_bPressed_SetBit @ 14ac83e30

void __cdecl Z_Construct_UScriptStruct_FCCS_AIInput_Statics::NewProp_bPressed_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14ac83e40

void * __cdecl Z_Construct_UScriptStruct_FCCS_AIInput_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCCS_AIInput,&UE::CoreUObject::Private::Construct<FCCS_AIInput>,&UE::CoreUObject::Private::ConstructForTests<FCCS_AIInput>,&UE::CoreUObject::Private::Destruct<FCCS_AIInput>,&UE::CoreUObject::Private::Copy<FCCS_AIInput>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ac83e80

void * __cdecl Z_Construct_UScriptStruct_FCCS_AICmd_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCCS_AICmd,&UE::CoreUObject::Private::Construct<FCCS_AICmd>,&UE::CoreUObject::Private::ConstructForTests<FCCS_AICmd>,&UE::CoreUObject::Private::Destruct<FCCS_AICmd>,&UE::CoreUObject::Private::Copy<FCCS_AICmd>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ECCS_MessageType_StaticEnum @ 14ac83ef0

UEnum * __cdecl ECCS_MessageType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECCS_MessageType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CCSAIServicePlugin();
    Z_Registration_Info_UEnum_ECCS_MessageType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CCSAIServicePlugin_ECCS_MessageType,(UObject *)pUVar1,
                       L"ECCS_MessageType");
  }
  return Z_Registration_Info_UEnum_ECCS_MessageType.OuterSingleton;
}

// NewProp_isLeader_SetBit @ 14ac83f60

void __cdecl
Z_Construct_UScriptStruct_FCCS_LoginRequest_Statics::NewProp_isLeader_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14ac83f70

void * __cdecl Z_Construct_UScriptStruct_FCCS_LoginRequest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCCS_LoginRequest,&UE::CoreUObject::Private::Construct<FCCS_LoginRequest>,&UE::CoreUObject::Private::ConstructForTests<FCCS_LoginRequest>,&UE::CoreUObject::Private::Destruct<FCCS_LoginRequest>,&UE::CoreUObject::Private::Copy<FCCS_LoginRequest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ac83fb0

void * __cdecl Z_Construct_UScriptStruct_FCCS_LogoutRequest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCCS_LogoutRequest,&UE::CoreUObject::Private::Construct<FCCS_LogoutRequest>,&UE::CoreUObject::Private::ConstructForTests<FCCS_LogoutRequest>,&UE::CoreUObject::Private::Destruct<FCCS_LogoutRequest>,&UE::CoreUObject::Private::Copy<FCCS_LogoutRequest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSuccess_SetBit @ 14ac83ff0

void __cdecl
Z_Construct_UScriptStruct_FCCS_CharEntityRegistrationResponse_Statics::NewProp_bSuccess_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 14ac84000

void * __cdecl
Z_Construct_UScriptStruct_FCCS_CharEntityRegistrationResponse_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCCS_CharEntityRegistrationResponse,&UE::CoreUObject::Private::Construct<FCCS_CharEntityRegistrationResponse>,&UE::CoreUObject::Private::ConstructForTests<FCCS_CharEntityRegistrationResponse>,&UE::CoreUObject::Private::Destruct<FCCS_CharEntityRegistrationResponse>,&UE::CoreUObject::Private::Copy<FCCS_CharEntityRegistrationResponse>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ac84040

void * __cdecl Z_Construct_UScriptStruct_FCCS_AICommandRequest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCCS_AICommandRequest,&UE::CoreUObject::Private::Construct<FCCS_AICommandRequest>,&UE::CoreUObject::Private::ConstructForTests<FCCS_AICommandRequest>,&UE::CoreUObject::Private::Destruct<FCCS_AICommandRequest>,&UE::CoreUObject::Private::Copy<FCCS_AICommandRequest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ac84080

void * __cdecl
Z_Construct_UScriptStruct_FCCS_CharEntityRegistrationRequest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCCS_CharEntityRegistrationRequest,&UE::CoreUObject::Private::Construct<FCCS_CharEntityRegistrationRequest>,&UE::CoreUObject::Private::ConstructForTests<FCCS_CharEntityRegistrationRequest>,&UE::CoreUObject::Private::Destruct<FCCS_CharEntityRegistrationRequest>,&UE::CoreUObject::Private::Copy<FCCS_CharEntityRegistrationRequest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ac840c0

void * __cdecl Z_Construct_UScriptStruct_FCCS_AIRequest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCCS_AIRequest,&UE::CoreUObject::Private::Construct<FCCS_AIRequest>,&UE::CoreUObject::Private::ConstructForTests<FCCS_AIRequest>,&UE::CoreUObject::Private::Destruct<FCCS_AIRequest>,&UE::CoreUObject::Private::Copy<FCCS_AIRequest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14ac84160

void * __thiscall
FCCSAIServicePluginModule::_scalar_deleting_destructor_
          (FCCSAIServicePluginModule *this,uint param_1)

{
  *this = (FCCSAIServicePluginModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_ACCSAIService @ 14ac84260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ACCSAIService(void)

{
  if (Z_Registration_Info_UClass_ACCSAIService.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ACCSAIService.OuterSingleton,
               &Z_Construct_UClass_ACCSAIService_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ACCSAIService.OuterSingleton;
}

// Z_Construct_UDelegateFunction_CCSAIServicePlugin_OnAICommandReceived__DelegateSignature @ 14ac842a0

UFunction * __cdecl
Z_Construct_UDelegateFunction_CCSAIServicePlugin_OnAICommandReceived__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_CCSAIServicePlugin_OnAICommandReceived__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_CCSAIServicePlugin_OnCharEntityRegistrationResponse__DelegateSignature @ 14ac842e0

UFunction * __cdecl
Z_Construct_UDelegateFunction_CCSAIServicePlugin_OnCharEntityRegistrationResponse__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_CCSAIServicePlugin_OnCharEntityRegistrationResponse__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_CCSAIServicePlugin_OnLoginRequestReceived__DelegateSignature @ 14ac84320

UFunction * __cdecl
Z_Construct_UDelegateFunction_CCSAIServicePlugin_OnLoginRequestReceived__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_CCSAIServicePlugin_OnLoginRequestReceived__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_CCSAIServicePlugin_OnLogoutRequestReceived__DelegateSignature @ 14ac84360

UFunction * __cdecl
Z_Construct_UDelegateFunction_CCSAIServicePlugin_OnLogoutRequestReceived__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_CCSAIServicePlugin_OnLogoutRequestReceived__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_autoReconnect_SetBit @ 14ac843a0

void __cdecl
Z_Construct_UFunction_ACCSAIService_ConnectToServer_Statics::NewProp_autoReconnect_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14ac843b0

void __cdecl
Z_Construct_UFunction_ACCSAIService_ConnectToServer_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_ACCSAIService_ConnectToServer @ 14ac843c0

UFunction * __cdecl Z_Construct_UFunction_ACCSAIService_ConnectToServer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ACCSAIService_ConnectToServer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ac84400

void __cdecl
Z_Construct_UFunction_ACCSAIService_IsConnected_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ACCSAIService_IsConnected @ 14ac84410

UFunction * __cdecl Z_Construct_UFunction_ACCSAIService_IsConnected(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ACCSAIService_IsConnected_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ac84450

void __cdecl
Z_Construct_UFunction_ACCSAIService_SendJson_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_ACCSAIService_SendJson @ 14ac84460

UFunction * __cdecl Z_Construct_UFunction_ACCSAIService_SendJson(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ACCSAIService_SendJson_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_OpenDebug_SetBit @ 14ac844a0

void __cdecl Z_Construct_UClass_ACCSAIService_Statics::NewProp_OpenDebug_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c8) = 1;
  return;
}

// InternalConstructor<ACCSAIService> @ 14ac84620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ACCSAIService>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7ACCSAIService__6B_;
    pbVar1 = (byte *)((longlong)&(this->PrimaryActorTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    this[1].RemoteRole = '\0';
    this[1].ActorCategory = '\0';
    *(undefined2 *)&this[1].field_0x62 = 0;
    this[1].InitialLifeSpan = 0.0;
    this[1].CustomTimeDilation = 0.0;
    this[1].RayTracingGroupId = 0;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x10 = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 100;
    *(undefined4 *)&this[1]._padding_ = 0x40000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xa00000;
    *(undefined4 *)&this[1]._padding_ = 0x10000;
  }
  return;
}

// InternalVTableHelperCtorCaller<ACCSAIService> @ 14ac846f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ACCSAIService>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ACCSAIService::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7ACCSAIService__6B_;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    this[1].RemoteRole = '\0';
    this[1].ActorCategory = '\0';
    *(undefined2 *)&this[1].field_0x62 = 0;
    this[1].InitialLifeSpan = 0.0;
    this[1].CustomTimeDilation = 0.0;
    this[1].RayTracingGroupId = 0;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x10 = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 100;
    *(undefined4 *)&this[1]._padding_ = 0x40000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xa00000;
    *(undefined4 *)&this[1]._padding_ = 0x10000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_ECCS_AIInputType> @ 14ac85800

UEnum * __cdecl StaticEnum<enum_ECCS_AIInputType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECCS_AIInputType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CCSAIServicePlugin();
    Z_Registration_Info_UEnum_ECCS_AIInputType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CCSAIServicePlugin_ECCS_AIInputType,(UObject *)pUVar1,
                       L"ECCS_AIInputType");
  }
  return Z_Registration_Info_UEnum_ECCS_AIInputType.OuterSingleton;
}

// StaticEnum<enum_ECCS_MessageType> @ 14ac85840

UEnum * __cdecl StaticEnum<enum_ECCS_MessageType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECCS_MessageType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CCSAIServicePlugin();
    Z_Registration_Info_UEnum_ECCS_MessageType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CCSAIServicePlugin_ECCS_MessageType,(UObject *)pUVar1,
                       L"ECCS_MessageType");
  }
  return Z_Registration_Info_UEnum_ECCS_MessageType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14ac86020

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCCSAITCPClient,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FCCSAITCPClient,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac86060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ACCSAIService::_scalar_deleting_destructor_(ACCSAIService *this,uint param_1)

{
  void *pvVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&___7ACCSAIService__6B_;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->TCPClient != (TSharedPtr<FCCSAITCPClient,1> *)&local_18) {
    (this->TCPClient).Object = (FCCSAITCPClient *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TCPClient).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TCPClient).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnCharEntityRegistrationResponse).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCharEntityRegistrationResponse);
  pvVar1 = *(void **)&(this->OnAICommandReceived).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAICommandReceived);
  pvVar1 = *(void **)&(this->OnLogoutRequestReceived).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLogoutRequestReceived);
  pvVar1 = *(void **)&(this->OnLoginRequestReceived).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoginRequestReceived);
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x350);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac86190

void * __thiscall FCCSAITCPClient::_scalar_deleting_destructor_(FCCSAITCPClient *this,uint param_1)

{
  ~FCCSAITCPClient(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeCCSAIProtocol @ 14ac86ff0

void __cdecl EmptyLinkFunctionForGeneratedCodeCCSAIProtocol(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCCSAIService @ 14ac87000

void __cdecl EmptyLinkFunctionForGeneratedCodeCCSAIService(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCCSAIServicePlugin_init @ 14ac87010

void __cdecl EmptyLinkFunctionForGeneratedCodeCCSAIServicePlugin_init(void)

{
  return;
}

// FOnAICommandReceived_DelegateWrapper @ 14ac871e0

void __cdecl
FOnAICommandReceived_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FCCS_AICmd *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  double local_38;
  double dStack_30;
  float local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  
  local_38 = (param_2->moveInputVector).field0_0x0._s_0.X;
  dStack_30 = (param_2->moveInputVector).field0_0x0._s_0.Y;
  local_28 = param_2->cameraYaw;
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  if ((TArray<FCCS_AIInput,TSizedDefaultAllocator<32>_> *)&local_20 != &param_2->inputList) {
    uVar1 = (param_2->inputList).ArrayNum;
    _Src = (param_2->inputList).AllocatorInstance.Data;
    local_18 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,uVar1,0,&local_20,uVar1,(int *)((longlong)&local_18 + 4));
      memcpy(local_20.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_38);
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  return;
}

// FOnCharEntityRegistrationResponse_DelegateWrapper @ 14ac872b0

void __cdecl
FOnCharEntityRegistrationResponse_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          FCCS_CharEntityRegistrationResponse *param_2)

{
  ECCS_MessageType local_38 [8];
  ulong64 local_30;
  undefined1 local_28;
  int local_24;
  FString local_20;
  
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_38[0] = param_2->messageType;
  local_30 = param_2->gameId;
  local_28 = param_2->bSuccess;
  local_24 = param_2->errorCode;
  FString::operator=(&local_20,&param_2->errorMessage);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_38);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// FOnLoginRequestReceived_DelegateWrapper @ 14ac87320

void __cdecl
FOnLoginRequestReceived_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FCCS_LoginRequest *param_2)

{
  FCCS_LoginRequest local_28;
  
  local_28.messageType = LoginRequest;
  local_28.selectedCharId = 0;
  local_28.deckCharId.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.deckCharId.ArrayNum = 0;
  local_28.deckCharId.ArrayMax = 0;
  local_28.isLeader = false;
  FCCS_LoginRequest::operator=(&local_28,param_2);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  if (local_28.deckCharId.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.deckCharId.AllocatorInstance.Data);
  }
  return;
}

// FOnLogoutRequestReceived_DelegateWrapper @ 14ac87380

void __cdecl
FOnLogoutRequestReceived_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FCCS_LogoutRequest *param_2
          )

{
  ECCS_MessageType local_res10 [24];
  
  local_res10[0] = param_2->messageType;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// Z_Construct_UClass_ACCSAIService_NoRegister @ 14ac89f90

UClass * __cdecl Z_Construct_UClass_ACCSAIService_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACCSAIService.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CCSAIServicePlugin",L"CCSAIService",
               &Z_Registration_Info_UClass_ACCSAIService.InnerSingleton,
               ACCSAIService::StaticRegisterNativesACCSAIService,0x350,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ACCSAIService>,InternalVTableHelperCtorCaller<ACCSAIService>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACCSAIService.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCCS_AICommandRequest @ 14ac8a050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCCS_AICommandRequest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCCS_AICommandRequest.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCCS_AICommandRequest.InnerSingleton,
               &Z_Construct_UScriptStruct_FCCS_AICommandRequest_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCCS_AICommandRequest.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FCCS_AICommandRequest.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCCS_AIRequest @ 14ac8a0d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCCS_AIRequest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCCS_AIRequest.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCCS_AIRequest.InnerSingleton,
               &Z_Construct_UScriptStruct_FCCS_AIRequest_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCCS_AIRequest.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCCS_AIRequest.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCCS_CharEntityRegistrationRequest @ 14ac8a150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCCS_CharEntityRegistrationRequest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCCS_CharEntityRegistrationRequest.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCCS_CharEntityRegistrationRequest.InnerSingleton,
               &Z_Construct_UScriptStruct_FCCS_CharEntityRegistrationRequest_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCCS_CharEntityRegistrationRequest.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCCS_CharEntityRegistrationRequest.InnerSingleton;
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

// IMPLEMENT_MODULE_CCSAIServicePlugin @ 14ac8a4d0

void __cdecl IMPLEMENT_MODULE_CCSAIServicePlugin(void)

{
  return;
}

