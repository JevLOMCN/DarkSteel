// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraCore
// Functions: 49

// `dynamic_initializer_for_'DelayedAutoRegisterHelper101'' @ 14116b980

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper101__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_5>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper101,ShaderTypesReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  return;
}

// `dynamic_initializer_for_'GRegisterNiagaraCustomVersion'' @ 14116b9e0

void __cdecl _dynamic_initializer_for__GRegisterNiagaraCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FNiagaraCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,0x5d,L"NiagaraVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterNiagaraCustomVersion__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNiagaraCore'' @ 14116ba20

void __cdecl _dynamic_initializer_for__ModuleRegistrantNiagaraCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NiagaraCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NiagaraCore",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<INiagaraCoreModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCompileHash_h__Script_NiagaraCore_3614752714'' @ 14116ba70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCompileHash_h__Script_NiagaraCore_3614752714__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCompileHash_h__Script_NiagaraCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h__Script_NiagaraCore_2919506979'' @ 14116bab0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h__Script_NiagaraCore_2919506979__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h__Script_NiagaraCore_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h__Script_NiagaraCore_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h__Script_NiagaraCore_1655236531'' @ 14116bb00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h__Script_NiagaraCore_1655236531__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h__Script_NiagaraCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraMergeable_h__Script_NiagaraCore_1889162874'' @ 14116bb40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraMergeable_h__Script_NiagaraCore_1889162874__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraMergeable_h__Script_NiagaraCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraNotifyOnChanged_h__Script_NiagaraCore_1176580852'' @ 14116bb80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraNotifyOnChanged_h__Script_NiagaraCore_1176580852__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraNotifyOnChanged_h__Script_NiagaraCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_NiagaraCore'' @ 14116bbc0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_NiagaraCore__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x52d3c248;
  local_res8[0].DeclarationsHash = 0x94cc4c91;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_NiagaraCore,L"/Script/NiagaraCore",
             &Z_Registration_Info_UPackage__Script_NiagaraCore,local_res8);
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceBase @ 148dca330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceBase(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraNotifyOnChanged @ 148dca370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraNotifyOnChanged(void)

{
  if (Z_Registration_Info_UClass_UNiagaraNotifyOnChanged.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraNotifyOnChanged.OuterSingleton,
               &Z_Construct_UClass_UNiagaraNotifyOnChanged_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraNotifyOnChanged.OuterSingleton;
}

// NewStructOps @ 148dca3f0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraCompileHash,&UE::CoreUObject::Private::Construct<FNiagaraCompileHash>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraCompileHash>,&UE::CoreUObject::Private::Destruct<FNiagaraCompileHash>,&UE::CoreUObject::Private::Copy<FNiagaraCompileHash>,&UE::CoreUObject::Private::GetStructTypeHash<FNiagaraCompileHash>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148dca430

void * __thiscall
INiagaraCoreModule::_scalar_deleting_destructor_(INiagaraCoreModule *this,uint param_1)

{
  *this = (INiagaraCoreModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UNiagaraMergeable @ 148dca470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraMergeable(void)

{
  if (Z_Registration_Info_UClass_UNiagaraMergeable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraMergeable.OuterSingleton,
               &Z_Construct_UClass_UNiagaraMergeable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraMergeable.OuterSingleton;
}

// Z_Construct_UPackage__Script_NiagaraCore @ 148dca4f0

UPackage * __cdecl Z_Construct_UPackage__Script_NiagaraCore(void)

{
  if (Z_Registration_Info_UPackage__Script_NiagaraCore.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_NiagaraCore.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_NiagaraCore.OuterSingleton;
}

// ENiagaraParameterAccessLevel_StaticEnum @ 148dca530

UEnum * __cdecl ENiagaraParameterAccessLevel_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraParameterAccessLevel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraCore();
    Z_Registration_Info_UEnum_ENiagaraParameterAccessLevel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NiagaraCore_ENiagaraParameterAccessLevel,(UObject *)pUVar1,
                       L"ENiagaraParameterAccessLevel");
  }
  return Z_Registration_Info_UEnum_ENiagaraParameterAccessLevel.OuterSingleton;
}

// ENiagaraIterationSource_StaticEnum @ 148dca570

UEnum * __cdecl ENiagaraIterationSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraIterationSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraCore();
    Z_Registration_Info_UEnum_ENiagaraIterationSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource,(UObject *)pUVar1,
                       L"ENiagaraIterationSource");
  }
  return Z_Registration_Info_UEnum_ENiagaraIterationSource.OuterSingleton;
}

// NewStructOps @ 148dca5b0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraVariableCommonReference,&UE::CoreUObject::Private::Construct<FNiagaraVariableCommonReference>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraVariableCommonReference>,&UE::CoreUObject::Private::Destruct<FNiagaraVariableCommonReference>,&UE::CoreUObject::Private::SerializeArchive<FNiagaraVariableCommonReference>,&UE::CoreUObject::Private::Copy<FNiagaraVariableCommonReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// <lambda_invoker_cdecl> @ 148dca860

void __cdecl <lambda_5>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FNiagaraDataInterfaceParametersCS::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// InternalConstructor<UNiagaraDataInterfaceBase> @ 148dca880

void __cdecl InternalConstructor<UNiagaraDataInterfaceBase>(FObjectInitializer *param_1)

{
  UObject *this;
  FObjectInitializer *pFVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar1);
    *(undefined ***)this = &___7UNiagaraDataInterfaceBase__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraMergeable> @ 148dca8c0

void __cdecl InternalConstructor<UNiagaraMergeable>(FObjectInitializer *param_1)

{
  UObject *this;
  FObjectInitializer *pFVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar1);
    *(undefined ***)this = &___7UNiagaraMergeable__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraNotifyOnChanged> @ 148dca900

void __cdecl InternalConstructor<UNiagaraNotifyOnChanged>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraNotifyOnChanged__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UNiagaraDataInterfaceBase> @ 148dca930

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraDataInterfaceBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDataInterfaceBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraDataInterfaceBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraMergeable> @ 148dca9e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraMergeable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraMergeable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraMergeable__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraNotifyOnChanged> @ 148dcaa90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraNotifyOnChanged>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraNotifyOnChanged::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraNotifyOnChanged__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntrinsicAppendHash<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*> @ 148dcab40

uint __cdecl
Freeze::IntrinsicAppendHash<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>
          (TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*> *param_1,
          FTypeLayoutDesc *param_2,FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,8,param_4);
  return uVar1;
}

// IntrinsicUnfrozenCopy<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*> @ 148dcab60

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>
          (FMemoryUnfreezeContent *param_1,
          TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*> *param_2,
          void *param_3)

{
  UNiagaraDataInterfaceBase *pUVar1;
  
  pUVar1 = TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>::Get
                     (param_2,param_1->PrevPointerTable);
  *(UNiagaraDataInterfaceBase **)param_3 = pUVar1;
  return 8;
}

// IntrinsicWriteMemoryImage<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*> @ 148dcab90

void __cdecl
Freeze::IntrinsicWriteMemoryImage<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>
          (FMemoryImageWriter *param_1,
          TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*> *param_2,
          FTypeLayoutDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPointerTableBase *pFVar4;
  UNiagaraDataInterfaceBase *pUVar5;
  ulonglong *puVar6;
  ulonglong local_res20;
  ulonglong local_18 [2];
  
  pFVar4 = FMemoryImageWriter::TryGetPrevPointerTable(param_1);
  pUVar5 = TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>::Get
                     (param_2,pFVar4);
  if (pUVar5 == (UNiagaraDataInterfaceBase *)0x0) {
    local_18[0] = 0;
    puVar6 = local_18;
  }
  else {
    pFVar4 = FMemoryImageWriter::GetPointerTable(param_1);
    uVar3 = (**(code **)((longlong)*pFVar4 + 8))(pFVar4,param_3,pUVar5);
    if (uVar3 == 0xffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index != (uint32)INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x49e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    puVar6 = &local_res20;
    local_res20 = (ulonglong)uVar3 * 2 | 1;
  }
  FMemoryImageWriter::WriteBytes(param_1,puVar6,8);
  return;
}

// StaticEnum<enum_ENiagaraIterationSource> @ 148dcac50

UEnum * __cdecl StaticEnum<enum_ENiagaraIterationSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraIterationSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraCore();
    Z_Registration_Info_UEnum_ENiagaraIterationSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource,(UObject *)pUVar1,
                       L"ENiagaraIterationSource");
  }
  return Z_Registration_Info_UEnum_ENiagaraIterationSource.OuterSingleton;
}

// StaticEnum<enum_ENiagaraParameterAccessLevel> @ 148dcac90

UEnum * __cdecl StaticEnum<enum_ENiagaraParameterAccessLevel>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraParameterAccessLevel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraCore();
    Z_Registration_Info_UEnum_ENiagaraParameterAccessLevel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NiagaraCore_ENiagaraParameterAccessLevel,(UObject *)pUVar1,
                       L"ENiagaraParameterAccessLevel");
  }
  return Z_Registration_Info_UEnum_ENiagaraParameterAccessLevel.OuterSingleton;
}

// operator<< @ 148dcae70

FArchive * __cdecl operator<<(FArchive *param_1,FNiagaraCompileHash *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &(param_2->DataHash).ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(param_2->DataHash).ArrayNum,(longlong)*piVar1);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = (param_2->DataHash).ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && ((param_2->DataHash).ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)param_2,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x1000001)) {
        (param_2->DataHash).ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,auStackX_8[0],*piVar1,(ForAnyElementType *)param_2,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->DataHash).AllocatorInstance.Data,
                   (longlong)(param_2->DataHash).ArrayNum);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// `scalar_deleting_destructor' @ 148dcaec0

void * __thiscall
UNiagaraDataInterfaceBase::_scalar_deleting_destructor_
          (UNiagaraDataInterfaceBase *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraNotifyOnChanged__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148dcaf20

void * __thiscall
UNiagaraMergeable::_scalar_deleting_destructor_(UNiagaraMergeable *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraNotifyOnChanged__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148dcaf80

void * __thiscall
UNiagaraNotifyOnChanged::_scalar_deleting_destructor_(UNiagaraNotifyOnChanged *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraNotifyOnChanged__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraCompileHash @ 148dcb260

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraCompileHash(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraCore @ 148dcb270

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraCore(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraCore_init @ 148dcb280

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraCore_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceBase @ 148dcb290

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraMergeable @ 148dcb2a0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraMergeable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraNotifyOnChanged @ 148dcb2b0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraNotifyOnChanged(void)

{
  return;
}

// Z_Construct_UClass_UNiagaraDataInterfaceBase_NoRegister @ 148dcb890

UClass * __cdecl Z_Construct_UClass_UNiagaraDataInterfaceBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraCore",L"NiagaraDataInterfaceBase",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.InnerSingleton,
               UNiagaraDataInterfaceBase::StaticRegisterNativesUNiagaraDataInterfaceBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceBase>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceBase>,local_res8,
               UNiagaraNotifyOnChanged::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraMergeable_NoRegister @ 148dcb950

UClass * __cdecl Z_Construct_UClass_UNiagaraMergeable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraMergeable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraCore",L"NiagaraMergeable",
               &Z_Registration_Info_UClass_UNiagaraMergeable.InnerSingleton,
               UNiagaraMergeable::StaticRegisterNativesUNiagaraMergeable,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraMergeable>,
               InternalVTableHelperCtorCaller<UNiagaraMergeable>,local_res8,
               UNiagaraNotifyOnChanged::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraMergeable.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraNotifyOnChanged_NoRegister @ 148dcba10

UClass * __cdecl Z_Construct_UClass_UNiagaraNotifyOnChanged_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraNotifyOnChanged.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraCore",L"NiagaraNotifyOnChanged",
               &Z_Registration_Info_UClass_UNiagaraNotifyOnChanged.InnerSingleton,
               UNiagaraNotifyOnChanged::StaticRegisterNativesUNiagaraNotifyOnChanged,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraNotifyOnChanged>
               ,InternalVTableHelperCtorCaller<UNiagaraNotifyOnChanged>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraNotifyOnChanged.InnerSingleton;
}

// Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource @ 148dcbac0

UEnum * __cdecl Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraIterationSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraIterationSource.InnerSingleton,
               &Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraIterationSource.InnerSingleton;
}

// Z_Construct_UEnum_NiagaraCore_ENiagaraParameterAccessLevel @ 148dcbb00

UEnum * __cdecl Z_Construct_UEnum_NiagaraCore_ENiagaraParameterAccessLevel(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraParameterAccessLevel.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraParameterAccessLevel.InnerSingleton,
               &Z_Construct_UEnum_NiagaraCore_ENiagaraParameterAccessLevel_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraParameterAccessLevel.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraCompileHash @ 148dcbb40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraCompileHash(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraCompileHash.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraCompileHash.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraCompileHash.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNiagaraCompileHash.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraVariableCommonReference @ 148dcbbc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraVariableCommonReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableCommonReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraVariableCommonReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableCommonReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraVariableCommonReference.InnerSingleton;
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

// IMPLEMENT_MODULE_NiagaraCore @ 148dcbc40

void __cdecl IMPLEMENT_MODULE_NiagaraCore(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterNiagaraCustomVersion'' @ 15040ce60

void __cdecl _dynamic_atexit_destructor_for__GRegisterNiagaraCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterNiagaraCustomVersion.Key);
  return;
}

