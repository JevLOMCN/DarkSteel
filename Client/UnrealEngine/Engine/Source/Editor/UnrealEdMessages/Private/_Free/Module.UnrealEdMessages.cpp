// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UnrealEdMessages
// Functions: 14

// `dynamic_initializer_for_'ModuleRegistrantUnrealEdMessages'' @ 141166210

void __cdecl _dynamic_initializer_for__ModuleRegistrantUnrealEdMessages__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "UnrealEdMessages";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"UnrealEdMessages",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FUnrealEdMessagesModule>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_AssetEditorMessages_h__Script_UnrealEdMessages_1525485121'' @ 141166260

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_AssetEditorMessages_h__Script_UnrealEdMessages_1525485121__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UnrealEdMessages",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_AssetEditorMessages_h__Script_UnrealEdMessages_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_FileServerMessages_h__Script_UnrealEdMessages_1530591994'' @ 1411662a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_FileServerMessages_h__Script_UnrealEdMessages_1530591994__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UnrealEdMessages",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_FileServerMessages_h__Script_UnrealEdMessages_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_UnrealEdMessages'' @ 1411662e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_UnrealEdMessages__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xf0bac51f;
  local_res8[0].DeclarationsHash = 0x3a8b94e3;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_UnrealEdMessages,L"/Script/UnrealEdMessages",
             &Z_Registration_Info_UPackage__Script_UnrealEdMessages,local_res8);
  return;
}

// Z_Construct_UPackage__Script_UnrealEdMessages @ 148c37c10

UPackage * __cdecl Z_Construct_UPackage__Script_UnrealEdMessages(void)

{
  if (Z_Registration_Info_UPackage__Script_UnrealEdMessages.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_UnrealEdMessages.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_UnrealEdMessages.OuterSingleton;
}

// NewStructOps @ 148c37c50

void * __cdecl Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAssetEditorRequestOpenAsset,&UE::CoreUObject::Private::Construct<FAssetEditorRequestOpenAsset>,&UE::CoreUObject::Private::ConstructForTests<FAssetEditorRequestOpenAsset>,&UE::CoreUObject::Private::Destruct<FAssetEditorRequestOpenAsset>,&UE::CoreUObject::Private::Copy<FAssetEditorRequestOpenAsset>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148c37cd0

void * __cdecl Z_Construct_UScriptStruct_FFileServerReady_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFileServerReady,&UE::CoreUObject::Private::Construct<FFileServerReady>,&UE::CoreUObject::Private::ConstructForTests<FFileServerReady>,&UE::CoreUObject::Private::Destruct<FFileServerReady>,&UE::CoreUObject::Private::Copy<FFileServerReady>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148c37d40

void * __thiscall
FUnrealEdMessagesModule::_scalar_deleting_destructor_(FUnrealEdMessagesModule *this,uint param_1)

{
  *this = (FUnrealEdMessagesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAssetEditorMessages @ 148c38020

void __cdecl EmptyLinkFunctionForGeneratedCodeAssetEditorMessages(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFileServerMessages @ 148c38030

void __cdecl EmptyLinkFunctionForGeneratedCodeFileServerMessages(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUnrealEdMessages_init @ 148c38040

void __cdecl EmptyLinkFunctionForGeneratedCodeUnrealEdMessages_init(void)

{
  return;
}

// Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset @ 148c38080

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAssetEditorRequestOpenAsset.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAssetEditorRequestOpenAsset.InnerSingleton,
               &Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAssetEditorRequestOpenAsset.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAssetEditorRequestOpenAsset.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFileServerReady @ 148c38100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFileServerReady(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFileServerReady.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFileServerReady.InnerSingleton,
               &Z_Construct_UScriptStruct_FFileServerReady_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFileServerReady.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFileServerReady.InnerSingleton;
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

// IMPLEMENT_MODULE_UnrealEdMessages @ 148c38180

void __cdecl IMPLEMENT_MODULE_UnrealEdMessages(void)

{
  return;
}

