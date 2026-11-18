// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizableMessage
// Functions: 51

// `dynamic_initializer_for_'CVarAllowTextArgumentModifiers'' @ 141443800

void __cdecl
LocalizableMessageProcessor::_dynamic_initializer_for__CVarAllowTextArgumentModifiers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowTextArgumentModifiers,L"Localization.Message.AllowTextArgumentModifiers",
             &bAllowTextArgumentModifiers,
             L"Whether to allow message -> text conversion to use text-style argument modifiers (default: false)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowTextArgumentModifiers__);
  return;
}

// `dynamic_initializer_for_'LogLocalizableMessageProcessor'' @ 141443850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLocalizableMessageProcessor__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLocalizableMessageProcessor,L"LogLocalizableMessageProcessor",
             Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLocalizableMessageProcessor__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantLocalizableMessage'' @ 141443890

void __cdecl _dynamic_initializer_for__ModuleRegistrantLocalizableMessage__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "LocalizableMessage";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"LocalizableMessage",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FLocalizableMessageModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'RegisteredLocalizationTypes'' @ 1414438e0

void __cdecl LocalizableMessageTypes::_dynamic_initializer_for__RegisteredLocalizationTypes__(void)

{
  atexit(_dynamic_atexit_destructor_for__RegisteredLocalizationTypes__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessageBaseParameters_h__Script_LocalizableMessage_1996598172'' @ 141443900

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessageBaseParameters_h__Script_LocalizableMessage_1996598172__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LocalizableMessage",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessageBaseParameters_h__Script_LocalizableMessage_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessage_h__Script_LocalizableMessage_2722797248'' @ 141443940

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessage_h__Script_LocalizableMessage_2722797248__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LocalizableMessage",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessage_h__Script_LocalizableMessage_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_LocalizableMessage'' @ 141443980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_LocalizableMessage__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x446e647;
  local_res8[0].DeclarationsHash = 0xe5d0fa70;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_LocalizableMessage,L"/Script/LocalizableMessage",
             &Z_Registration_Info_UPackage__Script_LocalizableMessage,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14e9bca70

void * __thiscall
FLocalizableMessageModule::_scalar_deleting_destructor_
          (FLocalizableMessageModule *this,uint param_1)

{
  FLocalizableMessageProcessor::~FLocalizableMessageProcessor(&this->LocalizableMessageProcessor);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// Z_Construct_UPackage__Script_LocalizableMessage @ 14e9bcd40

UPackage * __cdecl Z_Construct_UPackage__Script_LocalizableMessage(void)

{
  if (Z_Registration_Info_UPackage__Script_LocalizableMessage.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_LocalizableMessage.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_LocalizableMessage.OuterSingleton;
}

// Z_Construct_UScriptStruct_FLocalizableMessage @ 14e9bd070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLocalizableMessage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessage.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLocalizableMessage.InnerSingleton,
               &Z_Construct_UScriptStruct_FLocalizableMessage_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessage.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FLocalizableMessage.InnerSingleton;
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

// NewStructOps @ 14e9bd0f0

void * __cdecl Z_Construct_UScriptStruct_FLocalizableMessageParameterInt_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLocalizableMessageParameterInt,&UE::CoreUObject::Private::Construct<FLocalizableMessageParameterInt>,&UE::CoreUObject::Private::ConstructForTests<FLocalizableMessageParameterInt>,&UE::CoreUObject::Private::Destruct<FLocalizableMessageParameterInt>,&UE::CoreUObject::Private::Copy<FLocalizableMessageParameterInt>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e9bd190

void * __cdecl
Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLocalizableMessageParameterFloat,&UE::CoreUObject::Private::Construct<FLocalizableMessageParameterFloat>,&UE::CoreUObject::Private::ConstructForTests<FLocalizableMessageParameterFloat>,&UE::CoreUObject::Private::Destruct<FLocalizableMessageParameterFloat>,&UE::CoreUObject::Private::Copy<FLocalizableMessageParameterFloat>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e9bd1d0

void * __cdecl
Z_Construct_UScriptStruct_FLocalizableMessageParameterString_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLocalizableMessageParameterString,&UE::CoreUObject::Private::Construct<FLocalizableMessageParameterString>,&UE::CoreUObject::Private::ConstructForTests<FLocalizableMessageParameterString>,&UE::CoreUObject::Private::Destruct<FLocalizableMessageParameterString>,&UE::CoreUObject::Private::Copy<FLocalizableMessageParameterString>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e9bd210

void * __cdecl
Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLocalizableMessageParameterMessage,&UE::CoreUObject::Private::Construct<FLocalizableMessageParameterMessage>,&UE::CoreUObject::Private::ConstructForTests<FLocalizableMessageParameterMessage>,&UE::CoreUObject::Private::Destruct<FLocalizableMessageParameterMessage>,&UE::CoreUObject::Private::Copy<FLocalizableMessageParameterMessage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry @ 14e9bd280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterEntry.InnerSingleton;
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

// NewStructOps @ 14e9bd300

void * __cdecl
Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLocalizableMessageParameterEntry,&UE::CoreUObject::Private::Construct<FLocalizableMessageParameterEntry>,&UE::CoreUObject::Private::ConstructForTests<FLocalizableMessageParameterEntry>,&UE::CoreUObject::Private::Destruct<FLocalizableMessageParameterEntry>,&UE::CoreUObject::Private::Copy<FLocalizableMessageParameterEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e9bd370

void * __cdecl Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLocalizableMessage,&UE::CoreUObject::Private::Construct<FLocalizableMessage>,&UE::CoreUObject::Private::ConstructForTests<FLocalizableMessage>,&UE::CoreUObject::Private::Destruct<FLocalizableMessage>,&UE::CoreUObject::Private::Copy<FLocalizableMessage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14e9bd3b0

void * __thiscall
ILocalizableMessageModule::_scalar_deleting_destructor_
          (ILocalizableMessageModule *this,uint param_1)

{
  *this = (ILocalizableMessageModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CompareItems<FLocalizableMessageParameterEntry,int> @ 14e9bd3f0

bool __cdecl
CompareItems<FLocalizableMessageParameterEntry,int>
          (FLocalizableMessageParameterEntry *param_1,FLocalizableMessageParameterEntry *param_2,
          int param_3)

{
  int iVar1;
  FInstancedStruct *this;
  FInstancedStruct *pFVar2;
  bool bVar3;
  
  if (param_3 != 0) {
    pFVar2 = &param_2->Value;
    this = &param_1->Value;
    do {
      iVar1 = *(int *)&this[-1].StructMemory;
      if (iVar1 == *(int *)&pFVar2[-1].StructMemory) {
        if (1 < iVar1) {
          iVar1 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)this[-1].ScriptStruct.field0_0x0.DebugPtr,
                             *(wchar_t **)
                              ((longlong)this + (longlong)param_2 + (-0x10 - (longlong)param_1)));
          bVar3 = iVar1 == 0;
          goto LAB_14e9bd446;
        }
      }
      else {
        bVar3 = iVar1 + *(int *)&pFVar2[-1].StructMemory == 1;
LAB_14e9bd446:
        if (!bVar3) {
          return false;
        }
      }
      bVar3 = FInstancedStruct::Identical(this,pFVar2,0);
      if (!bVar3) {
        return false;
      }
      pFVar2 = pFVar2 + 2;
      this = this + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FLocalizableMessageParameterEntry,FLocalizableMessageParameterEntry,int> @ 14e9bd490

void __cdecl
ConstructItems<FLocalizableMessageParameterEntry,FLocalizableMessageParameterEntry,int>
          (void *param_1,FLocalizableMessageParameterEntry *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
  FInstancedStruct *this;
  
  if (param_3 != 0) {
    this = (FInstancedStruct *)((longlong)param_1 + 0x10);
    pFVar1 = &param_2->Value;
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pFVar1),
                       (FString *)(pFVar1 + -1));
      (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
      this->StructMemory = (uchar *)0x0;
      FInstancedStruct::InitializeAs
                (this,(pFVar1->ScriptStruct).field0_0x0.DebugPtr,pFVar1->StructMemory);
      this = this + 2;
      pFVar1 = pFVar1 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FLocalizableMessageParameterEntry,int> @ 14e9bd520

void __cdecl
DestructItems<FLocalizableMessageParameterEntry,int>
          (FLocalizableMessageParameterEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FInstancedStruct::Reset(&param_1->Value);
    pFVar1 = (param_1->Key).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// ~TFunction_OwnedObject<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterFloat>'::__l2::<lambda_1>,0,1> @ 14e9beb10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterFloat>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterFloat>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterLocalizableType_UFLocalizableMessageParameterFloat___FLocalizableMessageProcessor__QEAAXAEBV__TFunction___A6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterFloat__AEBUFLocalizationContext___Z__AEAUFScopedRegistrations_2__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014e9beb33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterInt>'::__l2::<lambda_1>,0,1> @ 14e9beb40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterInt>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterInt>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterLocalizableType_UFLocalizableMessageParameterInt___FLocalizableMessageProcessor__QEAAXAEBV__TFunction___A6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterInt__AEBUFLocalizationContext___Z__AEAUFScopedRegistrations_2__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014e9beb63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterMessage>'::__l2::<lambda_1>,0,1> @ 14e9beb70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterMessage>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterMessage>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterLocalizableType_UFLocalizableMessageParameterMessage___FLocalizableMessageProcessor__QEAAXAEBV__TFunction___A6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterMessage__AEBUFLocalizationContext___Z__AEAUFScopedRegistrations_2__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014e9beb93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterString>'::__l2::<lambda_1>,0,1> @ 14e9beba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterString>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterString>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterLocalizableType_UFLocalizableMessageParameterString___FLocalizableMessageProcessor__QEAAXAEBV__TFunction___A6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterString__AEBUFLocalizationContext___Z__AEAUFScopedRegistrations_2__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014e9bebc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// `scalar_deleting_destructor' @ 14e9bf180

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterFloat_const_&,FLocalizationContext_const_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterFloat_const_&,FLocalizationContext_const_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterFloat__AEBUFLocalizationContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e9bf1c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterInt_const_&,FLocalizationContext_const_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterInt_const_&,FLocalizationContext_const_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterInt__AEBUFLocalizationContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e9bf200

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterMessage_const_&,FLocalizationContext_const_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterMessage_const_&,FLocalizationContext_const_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterMessage__AEBUFLocalizationContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e9bf240

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterString_const_&,FLocalizationContext_const_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterString_const_&,FLocalizationContext_const_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterString__AEBUFLocalizationContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e9bf280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterFloat>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterLocalizableType_UFLocalizableMessageParameterFloat___FLocalizableMessageProcessor__QEAAXAEBV__TFunction___A6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterFloat__AEBUFLocalizationContext___Z__AEAUFScopedRegistrations_2__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e9bf2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterInt>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterLocalizableType_UFLocalizableMessageParameterInt___FLocalizableMessageProcessor__QEAAXAEBV__TFunction___A6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterInt__AEBUFLocalizationContext___Z__AEAUFScopedRegistrations_2__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e9bf340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterMessage>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterLocalizableType_UFLocalizableMessageParameterMessage___FLocalizableMessageProcessor__QEAAXAEBV__TFunction___A6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterMessage__AEBUFLocalizationContext___Z__AEAUFScopedRegistrations_2__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e9bf3a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterString>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterLocalizableType_UFLocalizableMessageParameterString___FLocalizableMessageProcessor__QEAAXAEBV__TFunction___A6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterString__AEBUFLocalizationContext___Z__AEAUFScopedRegistrations_2__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeLocalizableMessage @ 14e9bfa00

void __cdecl EmptyLinkFunctionForGeneratedCodeLocalizableMessage(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLocalizableMessageBaseParameters @ 14e9bfa10

void __cdecl EmptyLinkFunctionForGeneratedCodeLocalizableMessageBaseParameters(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLocalizableMessage_init @ 14e9bfa20

void __cdecl EmptyLinkFunctionForGeneratedCodeLocalizableMessage_init(void)

{
  return;
}

// Float_LocalizeValue @ 14e9bfa30

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FFormatArgumentValue * __cdecl
LocalizableMessageTypes::Float_LocalizeValue
          (FFormatArgumentValue *__return_storage_ptr__,FLocalizableMessageParameterFloat *param_1,
          FLocalizationContext *param_2)

{
  FCulture *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  Type TVar8;
  longlong lVar9;
  FText *pFVar10;
  FFormatArgumentValue *pFVar11;
  longlong lVar12;
  FCulture *pFVar13;
  TSharedPtr<FCulture,1> local_68;
  FText local_58;
  Type local_48;
  FFormatArgumentValue_u_8 local_40;
  FText local_38;
  undefined4 local_28;
  FFormatArgumentValue_u_8 local_20;
  FText local_18;
  
  pFVar1 = (param_2->LocaleOverride).Object;
  pFVar13 = pFVar1;
  if (pFVar1 == (FCulture *)0x0) {
    pFVar13 = (param_2->LanguageOverride).Object;
  }
  lVar12 = 0x20;
  lVar9 = 0x20;
  if (pFVar1 == (FCulture *)0x0) {
    lVar9 = 0x10;
  }
  pTVar2 = *(TReferenceControllerBase<1> **)
            ((longlong)&(param_2->WorldContext).WeakPtr.ObjectIndex + lVar9);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar13 == (FCulture *)0x0) {
    local_40 = (FFormatArgumentValue_u_8)param_1->Value;
    pFVar10 = &local_18;
    TVar8 = Double;
    local_20 = local_40;
    local_28 = 3;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar7 = true;
    local_18.TextData.Reference = (ITextData *)0x0;
    local_18.Flags = 0;
  }
  else {
    local_68.Object = (param_2->LocaleOverride).Object;
    if (local_68.Object == (FCulture *)0x0) {
      local_68.Object = (param_2->LanguageOverride).Object;
      lVar12 = 0x10;
    }
    local_68.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)
          ((longlong)&(param_2->WorldContext).WeakPtr.ObjectIndex + lVar12);
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar10 = FText::AsNumber(&local_58,param_1->Value,(FNumberFormattingOptions *)0x0,&local_68);
    local_48 = Text;
    FText::FText(&local_38,pFVar10);
    if ((local_38.TextData.Reference == (ITextData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FFormatArgumentValue *)(*pcVar3)();
      return pFVar11;
    }
    pFVar10 = &local_38;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar7 = false;
    TVar8 = local_48;
  }
  __return_storage_ptr__->Type = TVar8;
  __return_storage_ptr__->field1_0x8 = local_40;
  (__return_storage_ptr__->TextValue).field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->TextValue).field0_0x0.TypedValue.Flags = 0;
  if ((pFVar10->TextData).Reference != (ITextData *)0x0) {
    FText::FText((FText *)&__return_storage_ptr__->TextValue,pFVar10);
  }
  if ((bVar7) && (local_18.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if ((bVar4) && (local_38.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if ((bVar5) && (local_58.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetTextFormatFlags @ 14e9bfcc0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ETextFormatFlags __cdecl LocalizableMessageProcessor::GetTextFormatFlags(void)

{
  return bAllowTextArgumentModifiers;
}

// Int_LocalizeValue @ 14e9bfd50

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FFormatArgumentValue * __cdecl
LocalizableMessageTypes::Int_LocalizeValue
          (FFormatArgumentValue *__return_storage_ptr__,FLocalizableMessageParameterInt *param_1,
          FLocalizationContext *param_2)

{
  FCulture *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  FText *pFVar9;
  FFormatArgumentValue *pFVar10;
  FCulture *pFVar11;
  longlong lVar12;
  Type TVar13;
  TSharedPtr<FCulture,1> local_68;
  FText local_58;
  Type local_48;
  FFormatArgumentValue_u_8 local_40;
  FText local_38;
  undefined4 local_28;
  FFormatArgumentValue_u_8 local_20;
  FText local_18;
  
  pFVar1 = (param_2->LocaleOverride).Object;
  TVar13 = Int;
  pFVar11 = pFVar1;
  if (pFVar1 == (FCulture *)0x0) {
    pFVar11 = (param_2->LanguageOverride).Object;
  }
  lVar12 = 0x20;
  lVar8 = 0x20;
  if (pFVar1 == (FCulture *)0x0) {
    lVar8 = 0x10;
  }
  pTVar2 = *(TReferenceControllerBase<1> **)
            ((longlong)&(param_2->WorldContext).WeakPtr.ObjectIndex + lVar8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar11 == (FCulture *)0x0) {
    local_40 = (FFormatArgumentValue_u_8)param_1->Value;
    pFVar9 = &local_18;
    local_28 = 0;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar7 = true;
    local_18.TextData.Reference = (ITextData *)0x0;
    local_18.Flags = 0;
    local_20 = local_40;
  }
  else {
    local_68.Object = (param_2->LocaleOverride).Object;
    if (local_68.Object == (FCulture *)0x0) {
      local_68.Object = (param_2->LanguageOverride).Object;
      lVar12 = 0x10;
    }
    local_68.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)
          ((longlong)&(param_2->WorldContext).WeakPtr.ObjectIndex + lVar12);
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9 = FText::AsNumber(&local_58,param_1->Value,(FNumberFormattingOptions *)0x0,&local_68);
    local_48 = Text;
    FText::FText(&local_38,pFVar9);
    if ((local_38.TextData.Reference == (ITextData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FFormatArgumentValue *)(*pcVar3)();
      return pFVar10;
    }
    pFVar9 = &local_38;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar7 = false;
    TVar13 = local_48;
  }
  __return_storage_ptr__->Type = TVar13;
  __return_storage_ptr__->field1_0x8 = local_40;
  (__return_storage_ptr__->TextValue).field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->TextValue).field0_0x0.TypedValue.Flags = 0;
  if ((pFVar9->TextData).Reference != (ITextData *)0x0) {
    FText::FText((FText *)&__return_storage_ptr__->TextValue,pFVar9);
  }
  if ((bVar7) && (local_18.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if ((bVar4) && (local_38.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if ((bVar5) && (local_58.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// Message_LocalizeValue @ 14e9c0640

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FFormatArgumentValue * __cdecl
LocalizableMessageTypes::Message_LocalizeValue
          (FFormatArgumentValue *__return_storage_ptr__,FLocalizableMessageParameterMessage *param_1
          ,FLocalizationContext *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FModuleManager *this;
  IModuleInterface *pIVar5;
  FLocalizableMessageProcessor *this_00;
  FText *pFVar6;
  FFormatArgumentValue *pFVar7;
  FName local_res8;
  FText local_18;
  
  pFVar4 = ::FName::FName(&local_res8,L"LocalizableMessage");
  FVar1 = *pFVar4;
  this = FModuleManager::Get();
  pIVar5 = FModuleManager::LoadModuleChecked(this,FVar1);
  this_00 = (FLocalizableMessageProcessor *)(**(code **)((longlong)*pIVar5 + 0x40))(pIVar5);
  pFVar6 = FLocalizableMessageProcessor::Localize(this_00,&local_18,&param_1->Value,param_2);
  __return_storage_ptr__->Type = Text;
  FText::FText((FText *)&__return_storage_ptr__->TextValue,pFVar6);
  if ((__return_storage_ptr__->TextValue).field0_0x0.TypedValue.TextData.Reference ==
      (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FFormatArgumentValue *)(*pcVar2)();
      return pFVar7;
    }
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// RegisterTypes @ 14e9c0710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl LocalizableMessageTypes::RegisterTypes(void)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  IModuleInterface *pIVar3;
  FLocalizableMessageProcessor *this_00;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  FName local_58 [2];
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar2 = ::FName::FName(local_58,L"LocalizableMessage");
  FVar1 = *pFVar2;
  this = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this,FVar1);
  this_00 = (FLocalizableMessageProcessor *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
  local_38 = &
             ___7__TFunction_OwnedObject_P6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterInt__AEBUFLocalizationContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = (undefined ***)0x0;
  local_30 = Int_LocalizeValue;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterInt_const_&,FLocalizationContext_const_&),FFormatArgumentValue,FLocalizableMessageParameterInt_const_&,FLocalizationContext_const_&>
                ::Call;
  FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterInt>
            (this_00,(TFunction<FFormatArgumentValue___cdecl(FLocalizableMessageParameterInt_const_&,FLocalizationContext_const_&)>
                      *)local_48,&RegisteredLocalizationTypes);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  local_20 = (undefined ***)0x0;
  local_38 = &
             ___7__TFunction_OwnedObject_P6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterFloat__AEBUFLocalizationContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = Float_LocalizeValue;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterFloat_const_&,FLocalizationContext_const_&),FFormatArgumentValue,FLocalizableMessageParameterFloat_const_&,FLocalizationContext_const_&>
                ::Call;
  FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterFloat>
            (this_00,(TFunction<FFormatArgumentValue___cdecl(FLocalizableMessageParameterFloat_const_&,FLocalizationContext_const_&)>
                      *)local_48,&RegisteredLocalizationTypes);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  local_20 = (undefined ***)0x0;
  local_38 = &
             ___7__TFunction_OwnedObject_P6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterString__AEBUFLocalizationContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = String_LocalizeValue;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterString_const_&,FLocalizationContext_const_&),FFormatArgumentValue,FLocalizableMessageParameterString_const_&,FLocalizationContext_const_&>
                ::Call;
  FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterString>
            (this_00,(TFunction<FFormatArgumentValue___cdecl(FLocalizableMessageParameterString_const_&,FLocalizationContext_const_&)>
                      *)local_48,&RegisteredLocalizationTypes);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  local_20 = (undefined ***)0x0;
  local_38 = &
             ___7__TFunction_OwnedObject_P6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterMessage__AEBUFLocalizationContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = Message_LocalizeValue;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterMessage_const_&,FLocalizationContext_const_&),FFormatArgumentValue,FLocalizableMessageParameterMessage_const_&,FLocalizationContext_const_&>
                ::Call;
  FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterMessage>
            (this_00,(TFunction<FFormatArgumentValue___cdecl(FLocalizableMessageParameterMessage_const_&,FLocalizationContext_const_&)>
                      *)local_48,&RegisteredLocalizationTypes);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// String_LocalizeValue @ 14e9c0ae0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FFormatArgumentValue * __cdecl
LocalizableMessageTypes::String_LocalizeValue
          (FFormatArgumentValue *__return_storage_ptr__,FLocalizableMessageParameterString *param_1,
          FLocalizationContext *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FFormatArgumentValue *pFVar5;
  int iVar6;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  FText local_18;
  
  local_28.DataPtr = (wchar_t *)(param_1->Value).Data.AllocatorInstance.Data;
  iVar1 = (param_1->Value).Data.ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  local_28._12_4_ = uStack_2c;
  local_28.Size = iVar6;
  pFVar4 = FText::AsCultureInvariant(&local_18,&local_28);
  __return_storage_ptr__->Type = Text;
  FText::FText((FText *)&__return_storage_ptr__->TextValue,pFVar4);
  if ((__return_storage_ptr__->TextValue).field0_0x0.TypedValue.TextData.Reference ==
      (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFormatArgumentValue *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// UnregisterTypes @ 14e9c0dc0

void __cdecl LocalizableMessageTypes::UnregisterTypes(void)

{
  FName FVar1;
  int iVar2;
  uint uVar3;
  FName *pFVar4;
  FModuleManager *this;
  IModuleInterface *pIVar5;
  TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
  *this_00;
  ForAnyElementType FVar6;
  FName local_res8;
  
  pFVar4 = ::FName::FName(&local_res8,L"LocalizableMessage");
  FVar1 = *pFVar4;
  this = FModuleManager::Get();
  pIVar5 = FModuleManager::LoadModuleChecked(this,FVar1);
  this_00 = (TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
             *)(**(code **)((longlong)*pIVar5 + 0x40))(pIVar5);
  iVar2 = RegisteredLocalizationTypes.Registrations.ArrayNum;
  pFVar4 = (FName *)(RegisteredLocalizationTypes.Registrations.AllocatorInstance.Data +
                    (longlong)RegisteredLocalizationTypes.Registrations.ArrayNum * 8);
  FVar6 = RegisteredLocalizationTypes.Registrations.AllocatorInstance;
  while( true ) {
    if (RegisteredLocalizationTypes.Registrations.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if ((FName *)FVar6.Data == pFVar4) break;
    FVar1 = *(FName *)FVar6.Data;
    local_res8 = FVar1;
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>(this_00,FVar1.Number + uVar3,&local_res8);
    }
    FVar6.Data = FVar6.Data + 8;
  }
  RegisteredLocalizationTypes.Registrations.ArrayNum = 0;
  if (RegisteredLocalizationTypes.Registrations.ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&RegisteredLocalizationTypes,0,
               &RegisteredLocalizationTypes.Registrations.ArrayMax);
  }
  return;
}

// Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat @ 14e9c0ed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.InnerSingleton,
               &Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLocalizableMessageParameterInt @ 14e9c0f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLocalizableMessageParameterInt(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.InnerSingleton,
               &Z_Construct_UScriptStruct_FLocalizableMessageParameterInt_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage @ 14e9c0fd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.InnerSingleton
               ,&Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLocalizableMessageParameterString @ 14e9c1050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLocalizableMessageParameterString(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.InnerSingleton,
               &Z_Construct_UScriptStruct_FLocalizableMessageParameterString_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.InnerSingleton;
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

// IMPLEMENT_MODULE_LocalizableMessage @ 14e9c10d0

void __cdecl IMPLEMENT_MODULE_LocalizableMessage(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowTextArgumentModifiers'' @ 15046c780

void __cdecl
LocalizableMessageProcessor::_dynamic_atexit_destructor_for__CVarAllowTextArgumentModifiers__(void)

{
  CVarAllowTextArgumentModifiers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowTextArgumentModifiers);
  return;
}

// `dynamic_atexit_destructor_for_'LogLocalizableMessageProcessor'' @ 15046c7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLocalizableMessageProcessor__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLocalizableMessageProcessor);
  return;
}

// `dynamic_atexit_destructor_for_'RegisteredLocalizationTypes'' @ 15046c7c0

void __cdecl
LocalizableMessageTypes::_dynamic_atexit_destructor_for__RegisteredLocalizationTypes__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (RegisteredLocalizationTypes.Registrations.ArrayNum != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5897442576507600920>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\LocalizableMessage\\Source\\LocalizableMessage\\Public\\LocalizableMessageProcessor.h"
                       ,0x18,"Registrations.Num() == 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (RegisteredLocalizationTypes.Registrations.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(RegisteredLocalizationTypes.Registrations.AllocatorInstance.Data);
    return;
  }
  return;
}

