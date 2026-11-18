// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 99

// TypeName'' @ 1411d06e0

void __cdecl `dynamic_initializer_for_'UE::Anim::FBlendStackAnimEventsFilterScope::TypeName__(void)

{
  ::FName::FName(&UE::Anim::FBlendStackAnimEventsFilterScope::TypeName,
                 L"UE::Anim::FBlendStackAnimEventsFilterScope");
  return;
}

// `dynamic_initializer_for_'CVarAnimBlendStackEnable'' @ 1411d0700

void __cdecl UE::BlendStack::_dynamic_initializer_for__CVarAnimBlendStackEnable__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimBlendStackEnable,L"a.AnimNode.BlendStack.Enable",&GVarAnimBlendStackEnable,
             L"Enable / Disable Blend Stack",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimBlendStackEnable__);
  return;
}

// `dynamic_initializer_for_'CVarUseBlendCurveFixes'' @ 1411d0750

void __cdecl UE::BlendStack::_dynamic_initializer_for__CVarUseBlendCurveFixes__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseBlendCurveFixes,L"a.AnimNode.BlendStack.UseBlendCurveFixes",
             &GVarUseBlendCurveFixes,
             L"Enable BlendStack BlendCurve fixes. It causes behavioral changes. For the good",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseBlendCurveFixes__);
  return;
}

// `dynamic_initializer_for_'LogBlendStack'' @ 1411d07a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBlendStack__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogBlendStack,L"LogBlendStack",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogBlendStack__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantBlendStack'' @ 1411d07e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantBlendStack__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "BlendStack";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"BlendStack",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_AnimNode_BlendStackInput_h__Script_BlendStack_3638263159'' @ 1411d0830

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_AnimNode_BlendStackInput_h__Script_BlendStack_3638263159__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/BlendStack",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_AnimNode_BlendStackInput_h__Script_BlendStack_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_AnimNode_BlendStack_h__Script_BlendStack_2916429047'' @ 1411d0870

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_AnimNode_BlendStack_h__Script_BlendStack_2916429047__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/BlendStack",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_AnimNode_BlendStack_h__Script_BlendStack_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_AnimNode_BlendStack_h__Script_BlendStack_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackAnimNodeLibrary_h__Script_BlendStack_3339718521'' @ 1411d08c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackAnimNodeLibrary_h__Script_BlendStack_3339718521__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/BlendStack",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackAnimNodeLibrary_h__Script_BlendStack_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackAnimNodeLibrary_h__Script_BlendStack_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h__Script_BlendStack_2962648527'' @ 1411d0910

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h__Script_BlendStack_2962648527__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/BlendStack",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h__Script_BlendStack_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h__Script_BlendStack_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_BlendStack'' @ 1411d0960

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_BlendStack__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x4b0c442b;
  local_res8[0].DeclarationsHash = 0x575da8fe;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_BlendStack,L"/Script/BlendStack",
             &Z_Registration_Info_UPackage__Script_BlendStack,local_res8);
  return;
}

// Z_Construct_UClass_UBlendStackInputAnimNodeLibrary @ 14a85ad20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlendStackInputAnimNodeLibrary(void)

{
  if (Z_Registration_Info_UClass_UBlendStackInputAnimNodeLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlendStackInputAnimNodeLibrary.OuterSingleton,
               &Z_Construct_UClass_UBlendStackInputAnimNodeLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlendStackInputAnimNodeLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FBlendStackInputAnimNodeReference @ 14a85ad60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlendStackInputAnimNodeReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlendStackInputAnimNodeReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlendStackInputAnimNodeReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlendStackInputAnimNodeReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlendStackInputAnimNodeReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlendStackInputAnimNodeReference.InnerSingleton;
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

// NewStructOps @ 14a85ade0

void * __cdecl
Z_Construct_UScriptStruct_FBlendStackInputAnimNodeReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlendStackInputAnimNodeReference,&UE::CoreUObject::Private::Construct<FBlendStackInputAnimNodeReference>,&UE::CoreUObject::Private::ConstructForTests<FBlendStackInputAnimNodeReference>,&UE::CoreUObject::Private::Destruct<FBlendStackInputAnimNodeReference>,&UE::CoreUObject::Private::Copy<FBlendStackInputAnimNodeReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlendStackInputAnimNodeLibrary_ConvertToBlendStackInputNode @ 14a85ae20

UFunction * __cdecl
Z_Construct_UFunction_UBlendStackInputAnimNodeLibrary_ConvertToBlendStackInputNode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackInputAnimNodeLibrary_ConvertToBlendStackInputNode_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Result_SetBit @ 14a85ae60

void __cdecl
Z_Construct_UFunction_UBlendStackInputAnimNodeLibrary_ConvertToBlendStackInputNodePure_Statics::
NewProp_Result_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UBlendStackInputAnimNodeLibrary_ConvertToBlendStackInputNodePure @ 14a85aea0

UFunction * __cdecl
Z_Construct_UFunction_UBlendStackInputAnimNodeLibrary_ConvertToBlendStackInputNodePure(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackInputAnimNodeLibrary_ConvertToBlendStackInputNodePure_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlendStackInputAnimNodeLibrary_GetProperties @ 14a85af10

UFunction * __cdecl Z_Construct_UFunction_UBlendStackInputAnimNodeLibrary_GetProperties(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackInputAnimNodeLibrary_GetProperties_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_BlendStack @ 14a85af50

UPackage * __cdecl Z_Construct_UPackage__Script_BlendStack(void)

{
  if (Z_Registration_Info_UPackage__Script_BlendStack.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_BlendStack.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_BlendStack.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14a85b950

void * __thiscall
FAnimNode_BlendStackInput::_scalar_deleting_destructor_
          (FAnimNode_BlendStackInput *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// NewProp_bOverridePlayRate_SetBit @ 14a85b990

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_BlendStackInput_Statics::NewProp_bOverridePlayRate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14a85b9a0

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_BlendStackInput_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_BlendStackInput,&UE::CoreUObject::Private::Construct<FAnimNode_BlendStackInput>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_BlendStackInput>,&UE::CoreUObject::Private::Destruct<FAnimNode_BlendStackInput>,&UE::CoreUObject::Private::Copy<FAnimNode_BlendStackInput>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UBlendStackAnimNodeLibrary @ 14a85bb60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlendStackAnimNodeLibrary(void)

{
  if (Z_Registration_Info_UClass_UBlendStackAnimNodeLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlendStackAnimNodeLibrary.OuterSingleton,
               &Z_Construct_UClass_UBlendStackAnimNodeLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlendStackAnimNodeLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FBlendStackAnimNodeReference @ 14a85bba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlendStackAnimNodeReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlendStackAnimNodeReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlendStackAnimNodeReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlendStackAnimNodeReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlendStackAnimNodeReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlendStackAnimNodeReference.InnerSingleton;
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

// Z_Construct_UEnum_BlendStack_EBlendStack_BlendspaceUpdateMode @ 14a85bc20

UEnum * __cdecl Z_Construct_UEnum_BlendStack_EBlendStack_BlendspaceUpdateMode(void)

{
  if (Z_Registration_Info_UEnum_EBlendStack_BlendspaceUpdateMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBlendStack_BlendspaceUpdateMode.InnerSingleton,
               &Z_Construct_UEnum_BlendStack_EBlendStack_BlendspaceUpdateMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBlendStack_BlendspaceUpdateMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone @ 14a85bc60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack_Standalone.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack_Standalone.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack_Standalone.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack_Standalone.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBlendStackAnimPlayer @ 14a85bce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlendStackAnimPlayer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlendStackAnimPlayer.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlendStackAnimPlayer.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlendStackAnimPlayer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlendStackAnimPlayer.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FBlendStackAnimPlayer.InnerSingleton;
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

// NewStructOps @ 14a85bd60

void * __cdecl Z_Construct_UScriptStruct_FBlendStackAnimNodeReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlendStackAnimNodeReference,&UE::CoreUObject::Private::Construct<FBlendStackAnimNodeReference>,&UE::CoreUObject::Private::ConstructForTests<FBlendStackAnimNodeReference>,&UE::CoreUObject::Private::Destruct<FBlendStackAnimNodeReference>,&UE::CoreUObject::Private::Copy<FBlendStackAnimNodeReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EBlendStack_BlendspaceUpdateMode_StaticEnum @ 14a85bda0

UEnum * __cdecl EBlendStack_BlendspaceUpdateMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBlendStack_BlendspaceUpdateMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_BlendStack();
    Z_Registration_Info_UEnum_EBlendStack_BlendspaceUpdateMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_BlendStack_EBlendStack_BlendspaceUpdateMode,
                       (UObject *)pUVar1,L"EBlendStack_BlendspaceUpdateMode");
  }
  return Z_Registration_Info_UEnum_EBlendStack_BlendspaceUpdateMode.OuterSingleton;
}

// NewStructOps @ 14a85bde0

void * __cdecl Z_Construct_UScriptStruct_FBlendStackAnimPlayer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3a0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlendStackAnimPlayer,&UE::CoreUObject::Private::Construct<FBlendStackAnimPlayer>,&UE::CoreUObject::Private::ConstructForTests<FBlendStackAnimPlayer>,&UE::CoreUObject::Private::Destruct<FBlendStackAnimPlayer>,&UE::CoreUObject::Private::Copy<FBlendStackAnimPlayer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bLoop_SetBit @ 14a85be20

void __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_BlendTo_Statics::NewProp_bLoop_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// NewProp_bMirrored_SetBit @ 14a85be30

void __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_BlendTo_Statics::NewProp_bMirrored_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  return;
}

// NewProp_bShouldFilterNotifies_SetBit @ 14a85be40

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone_Statics::
NewProp_bShouldFilterNotifies_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UFunction_UBlendStackAnimNodeLibrary_BlendTo @ 14a85be50

UFunction * __cdecl Z_Construct_UFunction_UBlendStackAnimNodeLibrary_BlendTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackAnimNodeLibrary_BlendTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bStoreBlendedPose_SetBit @ 14a85be90

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone_Statics::NewProp_bStoreBlendedPose_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  return;
}

// NewStructOps @ 14a85bea0

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_BlendStack_Standalone,&UE::CoreUObject::Private::Construct<FAnimNode_BlendStack_Standalone>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_BlendStack_Standalone>,&UE::CoreUObject::Private::Destruct<FAnimNode_BlendStack_Standalone>,&UE::CoreUObject::Private::Copy<FAnimNode_BlendStack_Standalone>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bLoop_SetBit @ 14a85bee0

void __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_BlendToWithSettings_Statics::NewProp_bLoop_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// NewProp_bMirrored_SetBit @ 14a85bef0

void __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_BlendToWithSettings_Statics::
NewProp_bMirrored_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  return;
}

// NewProp_bInertialBlend_SetBit @ 14a85bf00

void __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_BlendToWithSettings_Statics::
NewProp_bInertialBlend_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// Z_Construct_UFunction_UBlendStackAnimNodeLibrary_BlendToWithSettings @ 14a85de40

UFunction * __cdecl Z_Construct_UFunction_UBlendStackAnimNodeLibrary_BlendToWithSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackAnimNodeLibrary_BlendToWithSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLoop_SetBit @ 14a85de80

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bLoop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewProp_bMirrored_SetBit @ 14a85de90

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bMirrored_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  return;
}

// NewProp_bUseInertialBlend_SetBit @ 14a85dea0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bUseInertialBlend_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x114) = 1;
  return;
}

// NewProp_bResetOnBecomingRelevant_SetBit @ 14a85deb0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bResetOnBecomingRelevant_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// NewStructOps @ 14a85dec0

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_BlendStack,&UE::CoreUObject::Private::Construct<FAnimNode_BlendStack>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_BlendStack>,&UE::CoreUObject::Private::Destruct<FAnimNode_BlendStack>,&UE::CoreUObject::Private::Copy<FAnimNode_BlendStack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlendStackAnimNodeLibrary_ConvertToBlendStackNode @ 14a85df00

UFunction * __cdecl Z_Construct_UFunction_UBlendStackAnimNodeLibrary_ConvertToBlendStackNode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackAnimNodeLibrary_ConvertToBlendStackNode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Result_SetBit @ 14a85df40

void __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_ConvertToBlendStackNodePure_Statics::
NewProp_Result_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UBlendStackAnimNodeLibrary_ConvertToBlendStackNodePure @ 14a85df50

UFunction * __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_ConvertToBlendStackNodePure(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackAnimNodeLibrary_ConvertToBlendStackNodePure_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a85df90

void * __thiscall
FAnimNode_BlendStack_Standalone::_scalar_deleting_destructor_
          (FAnimNode_BlendStack_Standalone *this,uint param_1)

{
  ~FAnimNode_BlendStack_Standalone(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// Z_Construct_UFunction_UBlendStackAnimNodeLibrary_ForceBlendNextUpdate @ 14a85dfd0

UFunction * __cdecl Z_Construct_UFunction_UBlendStackAnimNodeLibrary_ForceBlendNextUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackAnimNodeLibrary_ForceBlendNextUpdate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a85f190

void * __thiscall
FAnimNode_BlendStack::_scalar_deleting_destructor_(FAnimNode_BlendStack *this,uint param_1)

{
  FAnimNode_BlendStack_Standalone::~FAnimNode_BlendStack_Standalone
            ((FAnimNode_BlendStack_Standalone *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentAsset @ 14a85f1d0

UFunction * __cdecl Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentAsset_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentAssetTime @ 14a85f210

UFunction * __cdecl Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentAssetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentAssetTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentAssetTimeRemaining @ 14a85f250

UFunction * __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentAssetTimeRemaining(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentAssetTimeRemaining_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimAsset @ 14a85f290

UFunction * __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimAsset_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a85f2d0

void __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimAssetMirrored_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimAssetMirrored @ 14a85f2e0

UFunction * __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimAssetMirrored(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimAssetMirrored_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimAssetMirrorTable @ 14a85f320

UFunction * __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimAssetMirrorTable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimAssetMirrorTable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimAssetTime @ 14a85f360

UFunction * __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimAssetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimAssetTime_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a85f3a0

void __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimIsActive_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimIsActive @ 14a85f3b0

UFunction * __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimIsActive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackAnimNodeLibrary_GetCurrentBlendStackAnimIsActive_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a85f3f0

void __cdecl
Z_Construct_UFunction_UBlendStackAnimNodeLibrary_IsCurrentAssetLooping_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UBlendStackAnimNodeLibrary_IsCurrentAssetLooping @ 14a85f400

UFunction * __cdecl Z_Construct_UFunction_UBlendStackAnimNodeLibrary_IsCurrentAssetLooping(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlendStackAnimNodeLibrary_IsCurrentAssetLooping_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// ConstructItems<FBlendStackAnimPlayer,FBlendStackAnimPlayer,int> @ 14a85f6d0

void __cdecl
ConstructItems<FBlendStackAnimPlayer,FBlendStackAnimPlayer,int>
          (void *param_1,FBlendStackAnimPlayer *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FBlendStackAnimPlayer::FBlendStackAnimPlayer
                ((FBlendStackAnimPlayer *)(lVar1 + (longlong)param_2),param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FBlendStackAnimPlayer,int> @ 14a85f730

void __cdecl DefaultConstructItems<FBlendStackAnimPlayer,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined1 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x24) = 0xfffffffe;
      *(undefined4 *)(lVar1 + 0x2c) = 0xfffffffe;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      *(undefined1 *)(lVar1 + 0x44) = 0;
      *(undefined4 *)(lVar1 + 0x4c) = 0;
      *(undefined1 *)(lVar1 + 0x50) = 0;
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined1 *)(lVar1 + 0x48) = 0;
      *(undefined ***)(lVar1 + 0x14) = &___7FAnimNode_SequencePlayer_Standalone__6B_;
      *(undefined8 *)(lVar1 + 0x54) = 0;
      *(undefined4 *)(lVar1 + 0x5c) = 0;
      *(undefined8 *)(lVar1 + 100) = 0;
      *(undefined4 *)(lVar1 + 0x6c) = 0x3f800000;
      *(undefined4 *)(lVar1 + 0x70) = 0x3f800000;
      *(undefined2 *)(lVar1 + 0x74) = 0;
      *(undefined1 *)(lVar1 + 0x76) = 0;
      *(undefined8 *)(lVar1 + 0x88) = 0x3f800000;
      *(undefined4 *)(lVar1 + 0x90) = 0;
      *(undefined4 *)(lVar1 + 0x94) = 0x3f800000;
      *(undefined4 *)(lVar1 + 0x98) = 0x41200000;
      *(undefined8 *)(lVar1 + 0x9c) = 0x41200000;
      *(undefined2 *)(lVar1 + 0xa4) = 1;
      *(undefined4 *)(lVar1 + 0x78) = 0;
      *(undefined8 *)(lVar1 + 0x7c) = 0x3f800000;
      *(undefined4 *)(lVar1 + 0x84) = 0x3f800000;
      *(undefined4 *)(lVar1 + 0xbc) = 0xfffffffe;
      *(undefined4 *)(lVar1 + 0xc4) = 0xfffffffe;
      *(undefined8 *)(lVar1 + 0xd4) = 0;
      *(undefined1 *)(lVar1 + 0xdc) = 0;
      *(undefined8 *)(lVar1 + 0xe4) = 0;
      *(undefined8 *)(lVar1 + 0xec) = 0;
      *(undefined8 *)(lVar1 + 0xf4) = 0;
      *(undefined8 *)(lVar1 + 0xfc) = 0;
      *(undefined8 *)(lVar1 + 0x10c) = 0;
      *(undefined8 *)(lVar1 + 0xb4) = 0;
      *(undefined8 *)(lVar1 + 0xcc) = 0;
      *(undefined1 *)(lVar1 + 0xe0) = 0;
      *(undefined4 *)(lVar1 + 0x104) = 0xffffffff;
      *(undefined ***)(lVar1 + 0xac) = &___7FAnimNode_BlendSpacePlayer_Standalone__6B_;
      *(undefined8 *)(lVar1 + 0x114) = 0;
      *(undefined4 *)(lVar1 + 0x11c) = 0;
      *(undefined8 *)(lVar1 + 0x120) = 0;
      *(undefined4 *)(lVar1 + 0x128) = 0x3f800000;
      *(undefined2 *)(lVar1 + 300) = 0x101;
      *(undefined4 *)(lVar1 + 0x130) = 0;
      *(undefined8 *)(lVar1 + 0x134) = 0;
      FAnimNode_Mirror_Standalone::FAnimNode_Mirror_Standalone
                ((FAnimNode_Mirror_Standalone *)(lVar1 + 0x13c));
      *(undefined8 *)(lVar1 + 0x19c) = 0;
      *(undefined8 *)(lVar1 + 0x1a4) = 0;
      *(undefined8 *)(lVar1 + 0x1ac) = 0;
      *(undefined8 *)(lVar1 + 0x1b4) = 0;
      *(undefined1 *)(lVar1 + 0x1bc) = 0;
      *(undefined8 *)(lVar1 + 0x1c4) = 0;
      *(undefined8 *)(lVar1 + 0x1cc) = 0;
      *(undefined8 *)(lVar1 + 0x1d4) = 0;
      *(undefined8 *)(lVar1 + 0x1dc) = 0;
      *(undefined8 *)(lVar1 + 0x1e4) = 0;
      *(undefined8 *)(lVar1 + 0x1ec) = 0;
      *(undefined8 *)(lVar1 + 500) = 0;
      *(undefined8 *)(lVar1 + 0x1fc) = 0;
      *(undefined8 *)(lVar1 + 0x204) = 0;
      FBoneContainer::FBoneContainer((FBoneContainer *)(lVar1 + 0x20c));
      *(undefined8 *)(lVar1 + 0x36c) = 0;
      *(undefined8 *)(lVar1 + 0x374) = 0;
      *(undefined1 *)(lVar1 + 0x364) = 0;
      *(undefined4 *)(lVar1 + 0x368) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x37c) = 0;
      *(undefined4 *)(lVar1 + 900) = 0;
      *(undefined1 *)(lVar1 + 0x388) = 0;
      ((FColor_u_0 *)(lVar1 + 0x38c))->_s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
      param_2 = param_2 + -1;
      lVar1 = lVar1 + 0x3a0;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::BlendStack::FBlendStack_SampleGraphExecutionHelper,int> @ 14a85f9b0

void __cdecl
DefaultConstructItems<UE::BlendStack::FBlendStack_SampleGraphExecutionHelper,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0xffffffffffffffff;
      *puVar1 = 0xffff;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FBlendStackAnimPlayer,int> @ 14a85f9e0

void __cdecl DestructItems<FBlendStackAnimPlayer,int>(FBlendStackAnimPlayer *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &(param_1->BlendSpacePlayerNode)._padding_;
    do {
      if ((void *)plVar1[0x4f] != (void *)0x0) {
        FMemory::Free((void *)plVar1[0x4f]);
      }
      FBoneContainer::~FBoneContainer((FBoneContainer *)(plVar1 + 0x23));
      UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::
      ~TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>
                ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                 (plVar1 + 0x1b));
      if ((void *)plVar1[0x17] != (void *)0x0) {
        FMemory::Free((void *)plVar1[0x17]);
      }
      if ((void *)plVar1[0x15] != (void *)0x0) {
        FMemory::Free((void *)plVar1[0x15]);
      }
      FAnimNode_Mirror_Standalone::~FAnimNode_Mirror_Standalone
                ((FAnimNode_Mirror_Standalone *)(plVar1 + 9));
      DestructItems<FBlendSampleData,int>((FBlendSampleData *)*plVar1,(int)plVar1[1]);
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      DestructItems<FFIRFilterTimeBased,int>((FFIRFilterTimeBased *)plVar1[-2],(int)plVar1[-1]);
      if ((void *)plVar1[-2] != (void *)0x0) {
        FMemory::Free((void *)plVar1[-2]);
      }
      ((FAnimNode_BlendSpacePlayer_Standalone *)(plVar1 + -9))->_padding_ =
           (longlong)&___7FAnimNode_Base__6B_;
      plVar1[-0x1c] = (longlong)&___7FAnimNode_Base__6B_;
      if ((void *)plVar1[-0x20] != (void *)0x0) {
        FMemory::Free((void *)plVar1[-0x20]);
      }
      plVar1 = plVar1 + 0x74;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// InternalConstructor<UBlendStackAnimNodeLibrary> @ 14a85fc20

void __cdecl InternalConstructor<UBlendStackAnimNodeLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UBlendStackAnimNodeLibrary__6B_;
  }
  return;
}

// InternalConstructor<UBlendStackInputAnimNodeLibrary> @ 14a85fc50

void __cdecl InternalConstructor<UBlendStackInputAnimNodeLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UBlendStackInputAnimNodeLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UBlendStackAnimNodeLibrary> @ 14a85fc80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlendStackAnimNodeLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlendStackAnimNodeLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBlendStackAnimNodeLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlendStackInputAnimNodeLibrary> @ 14a85fd30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UBlendStackInputAnimNodeLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlendStackInputAnimNodeLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBlendStackInputAnimNodeLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// MutableView<TObjectPtr<UAnimationAsset>_> @ 14a85fef0

TMutableView<TObjectPtr<UAnimationAsset>_> __cdecl
MutableView<TObjectPtr<UAnimationAsset>_>(TObjectPtr<UAnimationAsset> *param_1)

{
  TObjectPtr<UAnimationAsset>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UAnimationAsset>_>)(UAnimationAsset **)param_1;
}

// ObjectPtrWrap<UAnimationAsset_*,TObjectPtr<UAnimationAsset>_> @ 14a85ff00

TObjectPtr<UAnimationAsset> * __cdecl
ObjectPtrWrap<UAnimationAsset_*,TObjectPtr<UAnimationAsset>_>(UAnimationAsset **param_1)

{
  return (TObjectPtr<UAnimationAsset> *)param_1;
}

// StaticEnum<enum_EBlendStack_BlendspaceUpdateMode> @ 14a85ff10

UEnum * __cdecl StaticEnum<enum_EBlendStack_BlendspaceUpdateMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBlendStack_BlendspaceUpdateMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_BlendStack();
    Z_Registration_Info_UEnum_EBlendStack_BlendspaceUpdateMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_BlendStack_EBlendStack_BlendspaceUpdateMode,
                       (UObject *)pUVar1,L"EBlendStack_BlendspaceUpdateMode");
  }
  return Z_Registration_Info_UEnum_EBlendStack_BlendspaceUpdateMode.OuterSingleton;
}

// Union<`UE::Anim::FNamedValueArrayUtils::Union<TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> @ 14a85ff50

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_UE::Anim::FNamedValueArrayUtils::Union<TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
          (ForElementType<UE::Anim::FCurveElement> *param_1,
          ForElementType<UE::Anim::FCurveElement> *param_2)

{
  ForElementType<UE::Anim::FCurveElement> *pFVar1;
  int *piVar2;
  FName FVar3;
  FName FVar4;
  FCurveElement *pFVar5;
  code *pcVar6;
  int iVar7;
  FName *pFVar8;
  float fVar9;
  ECurveElementFlags EVar10;
  undefined3 uVar11;
  bool bVar12;
  int iVar13;
  FCurveElement *pFVar14;
  FCurveElement *pFVar15;
  FCurveElement *pFVar16;
  FCurveElement *pFVar17;
  int iVar18;
  uint uVar19;
  FIdentityFunctor local_res8;
  
  if ((param_1 == param_2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                          ,0x10a,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar13 = *(int *)&param_2[1].Data;
  pFVar1 = param_1 + 1;
  iVar18 = *(int *)&pFVar1->Data;
  if (iVar13 != 0) {
    if (*(char *)&param_1[2].Data == '\0') {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                (param_1->Data,iVar18,local_res8,(FElementSortPredicate)local_res8);
      *(undefined1 *)&param_1[2].Data = 1;
    }
    if (*(char *)&param_2[2].Data == '\0') {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::FElementSortPredicate>
                (param_2->Data,*(int *)&param_2[1].Data,local_res8,(FElementSortPredicate)local_res8
                );
      *(undefined1 *)&param_2[2].Data = 1;
    }
    iVar7 = iVar13;
    if (iVar13 < iVar18) {
      iVar7 = iVar18;
    }
    uVar19 = iVar7 / 2 + iVar7;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    piVar2 = (int *)((longlong)&param_1[1].Data + 4);
    if (*(int *)((longlong)&param_1[1].Data + 4) < (int)uVar19) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar19,param_1,*(int *)&pFVar1->Data,piVar2);
    }
    pFVar14 = param_1->Data;
    pFVar17 = param_2->Data;
    pFVar16 = pFVar17 + iVar13;
    pFVar15 = pFVar14 + iVar18;
    if (pFVar14 != pFVar15) {
      if (pFVar17 == pFVar16) {
        return;
      }
      do {
        while( true ) {
          FVar3 = pFVar17->Name;
          FVar4 = pFVar14->Name;
          if (FVar4 != FVar3) break;
          pFVar8 = &pFVar17->Name;
          fVar9 = pFVar17->Value;
          EVar10 = pFVar17->Flags;
          uVar11 = *(undefined3 *)&pFVar17->field_0xd;
          pFVar17 = pFVar17 + 1;
          pFVar14->Name = *pFVar8;
          pFVar14->Value = fVar9;
          pFVar14->Flags = EVar10;
          *(undefined3 *)&pFVar14->field_0xd = uVar11;
          pFVar14 = pFVar14 + 1;
          if ((pFVar14 == pFVar15) || (pFVar17 == pFVar16)) goto LAB_14a860127;
        }
        iVar13 = FVar4.ComparisonIndex.Value.Value - FVar3.ComparisonIndex.Value;
        if (iVar13 == 0) {
          iVar13 = FVar4.Number - FVar3.Number;
        }
        if (iVar13 < 0) {
          pFVar14 = pFVar14 + 1;
          bVar12 = pFVar14 == pFVar15;
        }
        else {
          pFVar15 = param_1->Data;
          iVar13 = *(int *)&pFVar1->Data;
          if (iVar13 == *piVar2) {
            iVar13 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                               (0x410,param_1,piVar2);
          }
          iVar18 = (int)((longlong)pFVar14 - (longlong)pFVar15 >> 4);
          *(int *)&pFVar1->Data = iVar13 + 1;
          memmove(param_1->Data + iVar18 + 1,param_1->Data + iVar18,(longlong)(iVar13 - iVar18) << 4
                 );
          pFVar5 = param_1->Data;
          pFVar8 = &pFVar17->Name;
          fVar9 = pFVar17->Value;
          EVar10 = pFVar17->Flags;
          uVar11 = *(undefined3 *)&pFVar17->field_0xd;
          pFVar17 = pFVar17 + 1;
          pFVar15 = pFVar5 + *(int *)&pFVar1->Data;
          pFVar14 = pFVar5 + (longlong)iVar18 + 1;
          bVar12 = pFVar17 == pFVar16;
          pFVar5 = pFVar5 + iVar18;
          pFVar5->Name = *pFVar8;
          pFVar5->Value = fVar9;
          pFVar5->Flags = EVar10;
          *(undefined3 *)&pFVar5->field_0xd = uVar11;
        }
      } while (!bVar12);
    }
LAB_14a860127:
    if (pFVar17 < pFVar16) {
      iVar13 = *(int *)&pFVar1->Data;
      iVar18 = (int)((longlong)pFVar16 - (longlong)pFVar17 >> 4);
      uVar19 = iVar13 + iVar18;
      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      if (*piVar2 < (int)uVar19) {
        Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar19,param_1,iVar13,piVar2);
      }
      Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar18,param_1,(int *)pFVar1,piVar2);
      pFVar14 = param_1->Data + iVar13;
      do {
        pFVar8 = &pFVar17->Name;
        fVar9 = pFVar17->Value;
        EVar10 = pFVar17->Flags;
        uVar11 = *(undefined3 *)&pFVar17->field_0xd;
        pFVar17 = pFVar17 + 1;
        pFVar14->Name = *pFVar8;
        pFVar14->Value = fVar9;
        pFVar14->Flags = EVar10;
        *(undefined3 *)&pFVar14->field_0xd = uVar11;
        pFVar14 = pFVar14 + 1;
      } while (pFVar17 < pFVar16);
    }
  }
  return;
}

// UnionEx<`UE::BlendStack::FBlendedCurveUtils::LerpToPerBoneEx'::__l5::<lambda_1>_> @ 14a8601e0

void __cdecl
UE::BlendStack::FBlendedCurveUtils::
UnionEx<_UE::BlendStack::FBlendedCurveUtils::LerpToPerBoneEx_::__l5::<lambda_1>_>
          (FBlendedCurve *param_1,FBlendedCurve *param_2,<lambda_1> *param_3)

{
  float fVar1;
  TArrayView<float_const_,int> *pTVar2;
  FName FVar3;
  FName FVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  FCurveMetaData *pFVar9;
  float *pfVar10;
  void *_Src;
  longlong lVar11;
  FBoneReference *pFVar12;
  int iVar13;
  FBoneReference *pFVar14;
  FName *pFVar15;
  uint uVar16;
  ForElementType<unsigned_int> FVar17;
  FName *pFVar18;
  int *piVar19;
  ForElementType<unsigned_int> FVar20;
  float fVar21;
  uint *local_res8;
  undefined1 local_res10 [8];
  <lambda_1> *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5 [5];
  FName *local_a0;
  FName *local_98;
  FName *local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  int *local_70;
  ForElementType<unsigned_int> local_68;
  ForElementType<unsigned_int> local_60;
  
  local_res18 = param_3;
  if ((param_1 == param_2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\BlendedCurveUtils.h"
                         ,0x1a,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)&param_2->field_0x8;
  piVar19 = (int *)&param_1->field_0x8;
  iVar13 = *piVar19;
  local_70 = piVar19;
  if (iVar8 == 0) {
    if (GVarUseBlendCurveFixes != false) {
      pFVar15 = *(FName **)param_1;
      pFVar18 = pFVar15 + (longlong)iVar13 * 2;
      for (; pFVar15 != pFVar18; pFVar15 = pFVar15 + 2) {
        pTVar2 = param_3->OtherCurveBoneWeights;
        if ((pTVar2->ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar21 = *pTVar2->DataPtr;
        pFVar9 = USkeleton::GetCurveMetaData(param_3->Skeleton,*pFVar15);
        if (pFVar9 != (FCurveMetaData *)0x0) {
          iVar8 = (pFVar9->LinkedBones).ArrayNum;
          pFVar12 = (FBoneReference *)(pFVar9->LinkedBones).AllocatorInstance.Data;
          pFVar14 = pFVar12 + iVar8;
          while( true ) {
            if ((pFVar9->LinkedBones).ArrayNum != iVar8) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<FBoneReference_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res10);
            }
            if (pFVar12 == pFVar14) goto LAB_14a860333;
            FBoneReference::GetCompactPoseIndex(pFVar12,(FBoneContainer *)local_88);
            if (local_88._0_4_ != -1) break;
            pFVar12 = pFVar12 + 1;
          }
          pfVar10 = TArrayView<float_const_,int>::operator[]
                              (param_3->OtherCurveBoneWeights,local_88._0_4_);
          fVar21 = *pfVar10;
        }
LAB_14a860333:
        fVar1 = (float)pFVar15[1].ComparisonIndex.Value;
        pFVar15[1].ComparisonIndex.Value = (uint)(fVar1 - fVar1 * fVar21);
      }
    }
  }
  else {
    local_res8._0_1_ = SUB81(param_1,0);
    if (param_1->field_0x10 == '\0') {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                (*(FCurveElement **)param_1,iVar13,local_res8._0_1_,
                 (FElementSortPredicate)local_res8._0_1_);
      param_1->field_0x10 = 1;
    }
    if (param_2->field_0x10 == '\0') {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                (*(FCurveElement **)param_2,*(int *)&param_2->field_0x8,local_res8._0_1_,
                 (FElementSortPredicate)local_res8._0_1_);
      param_2->field_0x10 = 1;
    }
    iVar6 = iVar8;
    if (iVar8 < iVar13) {
      iVar6 = iVar13;
    }
    uVar16 = iVar6 / 2 + iVar6;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    local_68 = (ForElementType<unsigned_int>)&param_1->field_0xc;
    if (*(int *)local_68 < (int)uVar16) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar16,(ForElementType<UE::Anim::FCurveElement> *)param_1,*piVar19,
                 (int *)local_68);
    }
    local_a0 = *(FName **)param_2;
    pFVar15 = *(FName **)param_1;
    local_98 = pFVar15 + (longlong)iVar13 * 2;
    local_90 = local_a0 + (longlong)iVar8 * 2;
    if ((pFVar15 == local_98) || (local_a0 == local_90)) {
      FVar20 = (ForElementType<unsigned_int>)&param_3->OtherCurveBoneWeights;
    }
    else {
      local_60 = (ForElementType<unsigned_int>)&param_3->OtherCurveBoneWeights;
      FVar17 = (ForElementType<unsigned_int>)&param_1->field_0xc;
      do {
        while( true ) {
          FVar3 = *local_a0;
          FVar4 = *pFVar15;
          if (FVar4 != FVar3) break;
          pTVar2 = param_3->OtherCurveBoneWeights;
          FVar20 = (ForElementType<unsigned_int>)&param_3->OtherCurveBoneWeights;
          if ((pTVar2->ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar21 = *pTVar2->DataPtr;
          pFVar9 = USkeleton::GetCurveMetaData(local_res18->Skeleton,*pFVar15);
          if (pFVar9 != (FCurveMetaData *)0x0) {
            iVar8 = (pFVar9->LinkedBones).ArrayNum;
            pFVar12 = (FBoneReference *)(pFVar9->LinkedBones).AllocatorInstance.Data;
            pFVar14 = pFVar12 + iVar8;
            while( true ) {
              if ((pFVar9->LinkedBones).ArrayNum != iVar8) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<FBoneReference_const_,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(local_res20);
              }
              if (pFVar12 == pFVar14) goto LAB_14a860513;
              FBoneReference::GetCompactPoseIndex(pFVar12,(FBoneContainer *)(local_88 + 4));
              if (local_88._4_4_ != -1) break;
              pFVar12 = pFVar12 + 1;
            }
            pfVar10 = TArrayView<float_const_,int>::operator[]
                                (*(TArrayView<float_const_,int> **)FVar20,local_88._4_4_);
            fVar21 = *pfVar10;
          }
LAB_14a860513:
          pFVar18 = local_a0 + 1;
          uVar16 = local_a0[1].Number;
          local_a0 = local_a0 + 2;
          pFVar15[1].ComparisonIndex.Value =
               (uint)(((float)(pFVar18->ComparisonIndex).Value -
                      (float)pFVar15[1].ComparisonIndex.Value) * fVar21 +
                     (float)pFVar15[1].ComparisonIndex.Value);
          *(byte *)&pFVar15[1].Number = (byte)pFVar15[1].Number | (byte)uVar16;
          pFVar15 = pFVar15 + 2;
          piVar19 = local_70;
          if ((pFVar15 == local_98) ||
             (FVar17 = local_68, param_3 = local_res18, local_a0 == local_90)) goto LAB_14a8607bf;
        }
        iVar8 = FVar4.ComparisonIndex.Value.Value - FVar3.ComparisonIndex.Value;
        if (iVar8 == 0) {
          iVar8 = FVar4.Number - FVar3.Number;
        }
        if (iVar8 < 0) {
          pTVar2 = *(TArrayView<float_const_,int> **)local_60;
          if ((pTVar2->ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar21 = *pTVar2->DataPtr;
          pFVar9 = USkeleton::GetCurveMetaData(param_3->Skeleton,*pFVar15);
          if (pFVar9 != (FCurveMetaData *)0x0) {
            iVar8 = (pFVar9->LinkedBones).ArrayNum;
            pFVar12 = (FBoneReference *)(pFVar9->LinkedBones).AllocatorInstance.Data;
            pFVar14 = pFVar12 + iVar8;
            while( true ) {
              if ((pFVar9->LinkedBones).ArrayNum != iVar8) {
                local_a8 = 0;
                `TCheckedPointerIterator<FBoneReference_const_,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(&local_a8);
              }
              if (pFVar12 == pFVar14) goto LAB_14a86062b;
              FBoneReference::GetCompactPoseIndex(pFVar12,(FBoneContainer *)local_80);
              if (local_80._0_4_ != -1) break;
              pFVar12 = pFVar12 + 1;
            }
            pfVar10 = TArrayView<float_const_,int>::operator[]
                                (param_3->OtherCurveBoneWeights,local_80._0_4_);
            fVar21 = *pfVar10;
          }
LAB_14a86062b:
          fVar1 = (float)pFVar15[1].ComparisonIndex.Value;
          pFVar15[1].ComparisonIndex.Value = (uint)(fVar1 - fVar1 * fVar21);
          pFVar15 = pFVar15 + 2;
          bVar7 = pFVar15 == local_98;
        }
        else {
          lVar11 = *(longlong *)param_1;
          iVar8 = *(int *)&param_1->field_0x8;
          if (iVar8 == *(int *)FVar17) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                              (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,
                               (int *)FVar17);
          }
          iVar13 = (int)((longlong)pFVar15 - lVar11 >> 4);
          *(int *)&param_1->field_0x8 = iVar8 + 1;
          lVar11 = (longlong)iVar13 * 0x10;
          _Src = (void *)(*(longlong *)param_1 + lVar11);
          memmove((void *)((longlong)_Src + 0x10),_Src,(longlong)(iVar8 - iVar13) << 4);
          local_98 = (FName *)((longlong)*(int *)&param_1->field_0x8 * 0x10 + *(longlong *)param_1);
          pFVar15 = (FName *)(lVar11 + *(longlong *)param_1);
          pTVar2 = param_3->OtherCurveBoneWeights;
          pFVar15->ComparisonIndex = 0;
          pFVar15->Number = 0;
          pFVar15[1].ComparisonIndex = 0;
          pFVar15[1].Number = 0;
          pFVar15[1].ComparisonIndex.Value = 0;
          *pFVar15 = FVar3;
          if ((pTVar2->ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar21 = *pTVar2->DataPtr;
          pFVar9 = USkeleton::GetCurveMetaData(param_3->Skeleton,*pFVar15);
          if (pFVar9 != (FCurveMetaData *)0x0) {
            iVar8 = (pFVar9->LinkedBones).ArrayNum;
            pFVar12 = (FBoneReference *)(pFVar9->LinkedBones).AllocatorInstance.Data;
            pFVar14 = pFVar12 + iVar8;
            while( true ) {
              if ((pFVar9->LinkedBones).ArrayNum != iVar8) {
                local_a7 = 0;
                `TCheckedPointerIterator<FBoneReference_const_,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(&local_a7);
              }
              if (pFVar12 == pFVar14) goto LAB_14a86076a;
              FBoneReference::GetCompactPoseIndex(pFVar12,(FBoneContainer *)(local_80 + 4));
              if (local_80._4_4_ != -1) break;
              pFVar12 = pFVar12 + 1;
            }
            pfVar10 = TArrayView<float_const_,int>::operator[]
                                (param_3->OtherCurveBoneWeights,local_80._4_4_);
            fVar21 = *pfVar10;
          }
LAB_14a86076a:
          pFVar18 = local_a0 + 1;
          uVar16 = local_a0[1].Number;
          local_a0 = local_a0 + 2;
          pFVar15[1].ComparisonIndex.Value =
               (uint)(((float)(pFVar18->ComparisonIndex).Value -
                      (float)pFVar15[1].ComparisonIndex.Value) * fVar21 +
                     (float)pFVar15[1].ComparisonIndex.Value);
          *(byte *)&pFVar15[1].Number = (byte)pFVar15[1].Number | (byte)uVar16;
          pFVar15 = pFVar15 + 2;
          bVar7 = local_a0 == local_90;
        }
        FVar17 = local_68;
        piVar19 = local_70;
        FVar20 = local_60;
        param_3 = local_res18;
      } while (!bVar7);
    }
LAB_14a8607bf:
    FVar17 = local_68;
    pFVar18 = local_a0;
    if (local_a0 < local_90) {
      iVar8 = *piVar19;
      iVar13 = (int)((longlong)local_90 - (longlong)local_a0 >> 4);
      uVar16 = iVar13 + iVar8;
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (*(int *)local_68 < (int)uVar16) {
        Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar16,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar8,
                   (int *)local_68);
      }
      Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar13,(ForElementType<UE::Anim::FCurveElement> *)param_1,
                 (int *)&param_1->field_0x8,(int *)FVar17);
      pFVar15 = (FName *)((longlong)iVar8 * 0x10 + *(longlong *)param_1);
      local_98 = pFVar15 + (longlong)iVar13 * 2;
      local_res8 = &pFVar18[1].Number;
      local_a0 = (FName *)((longlong)pFVar18 - (longlong)pFVar15);
      do {
        FVar3 = *(FName *)((longlong)&(local_a0->ComparisonIndex).Value +
                          (longlong)&(pFVar15->ComparisonIndex).Value);
        pTVar2 = *(TArrayView<float_const_,int> **)FVar20;
        pFVar15->ComparisonIndex = 0;
        pFVar15->Number = 0;
        pFVar15[1].ComparisonIndex = 0;
        pFVar15[1].Number = 0;
        pFVar15[1].ComparisonIndex.Value = 0;
        *pFVar15 = FVar3;
        if ((pTVar2->ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar21 = *pTVar2->DataPtr;
        pFVar9 = USkeleton::GetCurveMetaData(local_res18->Skeleton,*pFVar15);
        if (pFVar9 != (FCurveMetaData *)0x0) {
          iVar8 = (pFVar9->LinkedBones).ArrayNum;
          pFVar12 = (FBoneReference *)(pFVar9->LinkedBones).AllocatorInstance.Data;
          pFVar14 = pFVar12 + iVar8;
          while( true ) {
            if ((pFVar9->LinkedBones).ArrayNum != iVar8) {
              local_a6 = 0;
              `TCheckedPointerIterator<FBoneReference_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_a6);
            }
            if (pFVar12 == pFVar14) goto LAB_14a860922;
            FBoneReference::GetCompactPoseIndex(pFVar12,(FBoneContainer *)local_78);
            if (local_78._0_4_ != -1) break;
            pFVar12 = pFVar12 + 1;
          }
          pfVar10 = TArrayView<float_const_,int>::operator[]
                              (*(TArrayView<float_const_,int> **)FVar20,local_78._0_4_);
          fVar21 = *pfVar10;
        }
LAB_14a860922:
        uVar16 = *local_res8;
        pFVar18 = (FName *)(local_res8 + -1);
        local_res8 = local_res8 + 4;
        pFVar15[1].ComparisonIndex.Value =
             (uint)(((float)(pFVar18->ComparisonIndex).Value -
                    (float)pFVar15[1].ComparisonIndex.Value) * fVar21 +
                   (float)pFVar15[1].ComparisonIndex.Value);
        *(byte *)&pFVar15[1].Number = (byte)pFVar15[1].Number | (byte)uVar16;
        pFVar15 = pFVar15 + 2;
      } while ((FName *)((longlong)&(local_a0->ComparisonIndex).Value +
                        (longlong)&(pFVar15->ComparisonIndex).Value) < local_90);
    }
    if ((GVarUseBlendCurveFixes != false) && (pFVar15 < local_98)) {
      do {
        pTVar2 = *(TArrayView<float_const_,int> **)FVar20;
        if ((pTVar2->ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar21 = *pTVar2->DataPtr;
        pFVar9 = USkeleton::GetCurveMetaData(local_res18->Skeleton,*pFVar15);
        if (pFVar9 != (FCurveMetaData *)0x0) {
          iVar8 = (pFVar9->LinkedBones).ArrayNum;
          pFVar12 = (FBoneReference *)(pFVar9->LinkedBones).AllocatorInstance.Data;
          pFVar14 = pFVar12 + iVar8;
          while( true ) {
            if ((pFVar9->LinkedBones).ArrayNum != iVar8) {
              local_a5[0] = 0;
              `TCheckedPointerIterator<FBoneReference_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_a5);
            }
            if (pFVar12 == pFVar14) goto LAB_14a860a32;
            FBoneReference::GetCompactPoseIndex(pFVar12,(FBoneContainer *)(local_78 + 4));
            if (local_78._4_4_ != -1) break;
            pFVar12 = pFVar12 + 1;
          }
          pfVar10 = TArrayView<float_const_,int>::operator[]
                              (*(TArrayView<float_const_,int> **)FVar20,local_78._4_4_);
          fVar21 = *pfVar10;
        }
LAB_14a860a32:
        fVar1 = (float)pFVar15[1].ComparisonIndex.Value;
        pFVar15[1].ComparisonIndex.Value = (uint)(fVar1 - fVar1 * fVar21);
        pFVar15 = pFVar15 + 2;
      } while (pFVar15 < local_98);
    }
  }
  return;
}

// UnionEx<`UE::BlendStack::FBlendedCurveUtils::LerpToEx'::__l11::<lambda_1>_> @ 14a860a90

void __cdecl
UE::BlendStack::FBlendedCurveUtils::
UnionEx<_UE::BlendStack::FBlendedCurveUtils::LerpToEx_::__l11::<lambda_1>_>
          (FBlendedCurve *param_1,FBlendedCurve *param_2,<lambda_1> param_3)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined1 uVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  longlong *plVar19;
  FIdentityFunctor local_res8;
  
  if ((param_1 == param_2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\BlendedCurveUtils.h"
                         ,0x1a,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)&param_2->field_0x8;
  iVar15 = *(int *)&param_1->field_0x8;
  if (iVar8 == 0) {
    if (GVarUseBlendCurveFixes == false) {
      return;
    }
    lVar9 = *(longlong *)param_1;
    lVar11 = (longlong)iVar15 * 0x10 + lVar9;
    if (lVar9 == lVar11) {
      return;
    }
    fVar1 = *param_3.Alpha;
    do {
      *(float *)(lVar9 + 8) = *(float *)(lVar9 + 8) - *(float *)(lVar9 + 8) * fVar1;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != lVar11);
    return;
  }
  if (param_1->field_0x10 == '\0') {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
              (*(FCurveElement **)param_1,iVar15,local_res8,(FElementSortPredicate)local_res8);
    param_1->field_0x10 = 1;
  }
  if (param_2->field_0x10 == '\0') {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
              (*(FCurveElement **)param_2,*(int *)&param_2->field_0x8,local_res8,
               (FElementSortPredicate)local_res8);
    param_2->field_0x10 = 1;
  }
  iVar6 = iVar8;
  if (iVar8 < iVar15) {
    iVar6 = iVar15;
  }
  uVar18 = iVar6 / 2 + iVar6;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  puVar12 = &param_1->field_0xc;
  if (*(int *)&param_1->field_0xc < (int)uVar18) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               *(int *)&param_1->field_0x8,(int *)puVar12);
  }
  plVar16 = *(longlong **)param_1;
  plVar19 = *(longlong **)param_2;
  plVar13 = plVar16 + (longlong)iVar15 * 2;
  plVar14 = plVar19 + (longlong)iVar8 * 2;
  if (plVar16 != plVar13) {
    if (plVar19 == plVar14) goto LAB_14a860dda;
    do {
      while( true ) {
        lVar9 = *plVar19;
        lVar11 = *plVar16;
        if (lVar11 != lVar9) break;
        pfVar10 = (float *)(plVar19 + 1);
        bVar3 = *(byte *)((longlong)plVar19 + 0xc);
        plVar19 = plVar19 + 2;
        *(float *)(plVar16 + 1) =
             (*pfVar10 - *(float *)(plVar16 + 1)) * *param_3.Alpha + *(float *)(plVar16 + 1);
        *(byte *)((longlong)plVar16 + 0xc) = *(byte *)((longlong)plVar16 + 0xc) | bVar3;
        plVar16 = plVar16 + 2;
        if ((plVar16 == plVar13) || (plVar19 == plVar14)) goto LAB_14a860d24;
      }
      iVar8 = (int)lVar11 - (int)lVar9;
      if (iVar8 == 0) {
        iVar8 = (int)((ulonglong)lVar11 >> 0x20) - (int)((ulonglong)lVar9 >> 0x20);
      }
      if (iVar8 < 0) {
        *(float *)(plVar16 + 1) = *(float *)(plVar16 + 1) - *(float *)(plVar16 + 1) * *param_3.Alpha
        ;
        plVar16 = plVar16 + 2;
        bVar7 = plVar16 == plVar13;
      }
      else {
        lVar11 = *(longlong *)param_1;
        iVar8 = *(int *)&param_1->field_0x8;
        if (iVar8 == *(int *)puVar12) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                            (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,(int *)puVar12
                            );
        }
        iVar15 = (int)((longlong)plVar16 - lVar11 >> 4);
        *(int *)&param_1->field_0x8 = iVar8 + 1;
        lVar17 = (longlong)iVar15 * 0x10;
        memmove((void *)(*(longlong *)param_1 + lVar17 + 0x10),
                (void *)(*(longlong *)param_1 + lVar17),(longlong)(iVar8 - iVar15) << 4);
        lVar11 = *(longlong *)param_1;
        iVar8 = *(int *)&param_1->field_0x8;
        uVar4 = *(undefined1 *)((longlong)plVar19 + 0xc);
        *(undefined8 *)(lVar17 + lVar11) = 0;
        ((undefined8 *)(lVar17 + lVar11))[1] = 0;
        *(undefined4 *)(lVar17 + 8 + lVar11) = 0;
        fVar1 = *(float *)(plVar19 + 1);
        plVar13 = (longlong *)((longlong)iVar8 * 0x10 + lVar11);
        *(longlong *)(lVar17 + lVar11) = lVar9;
        plVar16 = (longlong *)(lVar11 + 0x10 + lVar17);
        fVar2 = *param_3.Alpha;
        plVar19 = plVar19 + 2;
        *(undefined1 *)(lVar17 + 0xc + lVar11) = uVar4;
        bVar7 = plVar19 == plVar14;
        *(float *)(lVar17 + 8 + lVar11) = fVar1 * fVar2;
      }
    } while (!bVar7);
  }
LAB_14a860d24:
  if (plVar19 < plVar14) {
    iVar8 = *(int *)&param_1->field_0x8;
    iVar15 = (int)((longlong)plVar14 - (longlong)plVar19 >> 4);
    uVar18 = iVar8 + iVar15;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if (*(int *)puVar12 < (int)uVar18) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar8,
                 (int *)puVar12);
    }
    Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,iVar15,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               (int *)&param_1->field_0x8,(int *)puVar12);
    plVar16 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)param_1);
    plVar13 = plVar16 + (longlong)iVar15 * 2;
    lVar9 = (longlong)plVar19 - (longlong)plVar16;
    puVar12 = (undefined1 *)((longlong)plVar19 + 0xc);
    do {
      lVar11 = *(longlong *)(lVar9 + (longlong)plVar16);
      *plVar16 = 0;
      plVar16[1] = 0;
      *plVar16 = lVar11;
      uVar4 = *puVar12;
      fVar1 = *(float *)(puVar12 + -4);
      *(undefined4 *)(plVar16 + 1) = 0;
      fVar2 = *param_3.Alpha;
      *(undefined1 *)((longlong)plVar16 + 0xc) = uVar4;
      *(float *)(plVar16 + 1) = fVar1 * fVar2;
      plVar16 = plVar16 + 2;
      puVar12 = puVar12 + 0x10;
    } while ((longlong *)(lVar9 + (longlong)plVar16) < plVar14);
  }
LAB_14a860dda:
  if ((GVarUseBlendCurveFixes != false) && (plVar16 < plVar13)) {
    if (0x3f < ((longlong)plVar13 + (0xf - (longlong)plVar16) & 0xfffffffffffffff0U)) {
      do {
        *(float *)(plVar16 + 1) = *(float *)(plVar16 + 1) - *(float *)(plVar16 + 1) * *param_3.Alpha
        ;
        *(float *)(plVar16 + 3) = *(float *)(plVar16 + 3) - *(float *)(plVar16 + 3) * *param_3.Alpha
        ;
        *(float *)(plVar16 + 5) = *(float *)(plVar16 + 5) - *(float *)(plVar16 + 5) * *param_3.Alpha
        ;
        *(float *)(plVar16 + 7) = *(float *)(plVar16 + 7) - *(float *)(plVar16 + 7) * *param_3.Alpha
        ;
        plVar16 = plVar16 + 8;
      } while (plVar16 < plVar13 + -6);
      if (plVar13 <= plVar16) {
        return;
      }
    }
    pfVar10 = (float *)(plVar16 + 1);
    lVar9 = ((ulonglong)((longlong)plVar13 + (-1 - (longlong)plVar16)) >> 4) + 1;
    do {
      *pfVar10 = *pfVar10 - *pfVar10 * *param_3.Alpha;
      pfVar10 = pfVar10 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}

// `scalar_deleting_destructor' @ 14a863790

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TArray<FName,TSizedDefaultAllocator<32>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TArray<FName,TSizedDefaultAllocator<32>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8637d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a863810

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Anim::FAnimBlendDebugScope,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Anim::FAnimBlendDebugScope,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a863850

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Anim::FBlendStackAnimEventsFilterScope,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Anim::FBlendStackAnimEventsFilterScope,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a863890

void * __thiscall
UE::Anim::FBlendStackAnimEventsFilterContext::_scalar_deleting_destructor_
          (FBlendStackAnimEventsFilterContext *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NotifyBanList).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FiredNotifies).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8638e0

void * __thiscall
UE::Anim::FBlendStackAnimEventsFilterScope::_scalar_deleting_destructor_
          (FBlendStackAnimEventsFilterScope *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NotifyBanList).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FiredNotifies).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a863930

void * __thiscall
UE::Anim::IAnimEventsFilterContext::_scalar_deleting_destructor_
          (IAnimEventsFilterContext *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a863960

void * __thiscall
UBlendStackAnimNodeLibrary::_scalar_deleting_destructor_
          (UBlendStackAnimNodeLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UBlendStackAnimNodeLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a8639c0

void * __thiscall
UBlendStackInputAnimNodeLibrary::_scalar_deleting_destructor_
          (UBlendStackInputAnimNodeLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UBlendStackInputAnimNodeLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_BlendStack @ 14a865830

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_BlendStack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_BlendStackInput @ 14a865840

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_BlendStackInput(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlendStackAnimNodeLibrary @ 14a865850

void __cdecl EmptyLinkFunctionForGeneratedCodeBlendStackAnimNodeLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlendStackInputAnimNodeLibrary @ 14a865860

void __cdecl EmptyLinkFunctionForGeneratedCodeBlendStackInputAnimNodeLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlendStack_init @ 14a865870

void __cdecl EmptyLinkFunctionForGeneratedCodeBlendStack_init(void)

{
  return;
}

// GetBlendInWeightsCompactPose @ 14a8661f0

void __cdecl
GetBlendInWeightsCompactPose
          (FBlendStackAnimPlayer *param_1,
          TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_>
          *param_2,TArrayView<float,int> *param_3,FBoneContainer *param_4)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  iVar1 = (param_4->BoneIndicesArray).ArrayNum;
  if ((param_3->ArrayNum != iVar1) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Weights.Num() == CompactPoseNumBones",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                         ,0x1ff,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar4 = __real_3f800000;
  fVar3 = __real_322bcc77;
  fVar12 = __real_3f800000;
  if (0.0 < param_1->TimeToActivation) {
    fVar12 = 0.0;
  }
  uVar10 = 0;
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      if (((int)uVar10 < 0) || ((param_4->CompactPoseToSkeletonIndex).ArrayNum <= (int)uVar10)) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8192494858347217501>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                           ,0x25d,"CompactPoseToSkeletonIndex.IsValidIndex(BoneIndex.GetInt())");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
LAB_14a8664a9:
        uVar6 = 0;
        if ((int)uVar10 < param_3->ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        param_3->DataPtr[lVar9] = 0.0;
      }
      else {
        uVar8 = ~uVar10;
        uVar6 = 0;
        if ((int)uVar10 < (param_4->CompactPoseToSkeletonIndex).ArrayNum) {
          uVar6 = uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = *(uint *)((param_4->CompactPoseToSkeletonIndex).AllocatorInstance.Data + lVar9 * 4);
        if (uVar6 == 0xffffffff) goto LAB_14a8664a9;
        uVar7 = 0;
        if ((int)uVar6 < *(int *)&param_2->field_0x8) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar11 = *(float *)(*(longlong *)param_2 + (longlong)(int)uVar6 * 4);
        if (fVar3 <= fVar11) {
          if ((param_1->CurrentBlendInTime <= 0.0 && param_1->CurrentBlendInTime != 0.0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("AnimPlayer.GetCurrentBlendInTime() >= 0.f",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                                 ,0x212,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          fVar11 = param_1->CurrentBlendInTime / fVar11;
          if (fVar4 <= fVar11) {
            fVar11 = fVar4;
          }
          fVar11 = FAlphaBlend::AlphaToBlendOption(fVar11,param_1->BlendOption,(UCurveFloat *)0x0);
          uVar6 = 0;
          if ((int)uVar10 < param_3->ArrayNum) {
            uVar6 = uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          param_3->DataPtr[lVar9] = fVar11;
        }
        else {
          uVar6 = 0;
          if ((int)uVar10 < param_3->ArrayNum) {
            uVar6 = uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          param_3->DataPtr[lVar9] = fVar12;
        }
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar1);
  }
  return;
}

// Z_Construct_UClass_UBlendStackAnimNodeLibrary_NoRegister @ 14a8699d0

UClass * __cdecl Z_Construct_UClass_UBlendStackAnimNodeLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendStackAnimNodeLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/BlendStack",L"BlendStackAnimNodeLibrary",
               &Z_Registration_Info_UClass_UBlendStackAnimNodeLibrary.InnerSingleton,
               UBlendStackAnimNodeLibrary::StaticRegisterNativesUBlendStackAnimNodeLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlendStackAnimNodeLibrary>,
               InternalVTableHelperCtorCaller<UBlendStackAnimNodeLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendStackAnimNodeLibrary.InnerSingleton;
}

// Z_Construct_UClass_UBlendStackInputAnimNodeLibrary_NoRegister @ 14a869a90

UClass * __cdecl Z_Construct_UClass_UBlendStackInputAnimNodeLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendStackInputAnimNodeLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/BlendStack",L"BlendStackInputAnimNodeLibrary",
               &Z_Registration_Info_UClass_UBlendStackInputAnimNodeLibrary.InnerSingleton,
               UBlendStackInputAnimNodeLibrary::StaticRegisterNativesUBlendStackInputAnimNodeLibrary
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlendStackInputAnimNodeLibrary>,
               InternalVTableHelperCtorCaller<UBlendStackInputAnimNodeLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendStackInputAnimNodeLibrary.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimNode_BlendStack @ 14a869b50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_BlendStack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_BlendStackInput @ 14a869bd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_BlendStackInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_BlendStackInput_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_BlendStackInput.InnerSingleton;
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

// IMPLEMENT_MODULE_BlendStack @ 14a86b570

void __cdecl IMPLEMENT_MODULE_BlendStack(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimBlendStackEnable'' @ 150421650

void __cdecl UE::BlendStack::_dynamic_atexit_destructor_for__CVarAnimBlendStackEnable__(void)

{
  CVarAnimBlendStackEnable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimBlendStackEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseBlendCurveFixes'' @ 150421670

void __cdecl UE::BlendStack::_dynamic_atexit_destructor_for__CVarUseBlendCurveFixes__(void)

{
  CVarUseBlendCurveFixes._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseBlendCurveFixes);
  return;
}

// `dynamic_atexit_destructor_for_'LogBlendStack'' @ 150421690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBlendStack__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBlendStack);
  return;
}

