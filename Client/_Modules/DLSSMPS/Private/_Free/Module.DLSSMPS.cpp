// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSSMPS
// Functions: 17

// `dynamic_initializer_for_'ModuleRegistrantDLSSMoviePipelineSupport'' @ 1413ff140

void __cdecl _dynamic_initializer_for__ModuleRegistrantDLSSMoviePipelineSupport__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DLSSMoviePipelineSupport";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DLSSMoviePipelineSupport",0x18);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1413ff190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreateWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreateWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar1,L"UserWidget Create",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSSMoviePipelineSupport_Source_DLSSMoviePipelineSupport_Public_MoviePipelineDLSSSetting_h__Script_DLSSMoviePipelineSupport_153649599'' @ 1413ff220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSSMoviePipelineSupport_Source_DLSSMoviePipelineSupport_Public_MoviePipelineDLSSSetting_h__Script_DLSSMoviePipelineSupport_153649599__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DLSSMoviePipelineSupport",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSSMoviePipelineSupport_Source_DLSSMoviePipelineSupport_Public_MoviePipelineDLSSSetting_h__Script_DLSSMoviePipelineSupport_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_DLSSMoviePipelineSupport_Source_DLSSMoviePipelineSupport_Public_MoviePipelineDLSSSetting_h__Script_DLSSMoviePipelineSupport_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_DLSSMoviePipelineSupport'' @ 1413ff270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_DLSSMoviePipelineSupport__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xcbc570e9;
  local_res8[0].DeclarationsHash = 0xa71f9744;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_DLSSMoviePipelineSupport,
             L"/Script/DLSSMoviePipelineSupport",
             &Z_Registration_Info_UPackage__Script_DLSSMoviePipelineSupport,local_res8);
  return;
}

// Z_Construct_UPackage__Script_DLSSMoviePipelineSupport @ 14de30190

UPackage * __cdecl Z_Construct_UPackage__Script_DLSSMoviePipelineSupport(void)

{
  if (Z_Registration_Info_UPackage__Script_DLSSMoviePipelineSupport.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_DLSSMoviePipelineSupport.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_DLSSMoviePipelineSupport.OuterSingleton;
}

// Z_Construct_UClass_UMoviePipelineDLSSSetting @ 14de30290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineDLSSSetting(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineDLSSSetting.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineDLSSSetting.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineDLSSSetting_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineDLSSSetting.OuterSingleton;
}

// Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality @ 14de302d0

UEnum * __cdecl Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality(void)

{
  if (Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.InnerSingleton,
               &Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.InnerSingleton;
}

// EMoviePipelineDLSSQuality_StaticEnum @ 14de30310

UEnum * __cdecl EMoviePipelineDLSSQuality_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSSMoviePipelineSupport();
    Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality,
                       (UObject *)pUVar1,L"EMoviePipelineDLSSQuality");
  }
  return Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton;
}

// InternalConstructor<UMoviePipelineDLSSSetting> @ 14de30350

void __cdecl InternalConstructor<UMoviePipelineDLSSSetting>(FObjectInitializer *param_1)

{
  UMoviePipelineViewFamilySetting *this;
  
  this = (UMoviePipelineViewFamilySetting *)param_1->Obj;
  if (this != (UMoviePipelineViewFamilySetting *)0x0) {
    UMoviePipelineViewFamilySetting::UMoviePipelineViewFamilySetting(this);
    *(undefined1 *)(this + 1) = 4;
    *(undefined ***)this = &___7UMoviePipelineDLSSSetting__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMoviePipelineDLSSSetting> @ 14de30380

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMoviePipelineDLSSSetting>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineViewFamilySetting *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineDLSSSetting::GetPrivateStaticClass();
  this = (UMoviePipelineViewFamilySetting *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineViewFamilySetting *)0x0) {
    UMoviePipelineViewFamilySetting::UMoviePipelineViewFamilySetting(this,param_1);
    *(undefined ***)this = &___7UMoviePipelineDLSSSetting__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EMoviePipelineDLSSQuality> @ 14de30430

UEnum * __cdecl StaticEnum<enum_EMoviePipelineDLSSQuality>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DLSSMoviePipelineSupport();
    Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSSMoviePipelineSupport_EMoviePipelineDLSSQuality,
                       (UObject *)pUVar1,L"EMoviePipelineDLSSQuality");
  }
  return Z_Registration_Info_UEnum_EMoviePipelineDLSSQuality.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14de304f0

void * __thiscall
UMoviePipelineDLSSSetting::_scalar_deleting_destructor_
          (UMoviePipelineDLSSSetting *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMoviePipelineDLSSSetting__6B_;
  UMoviePipelineViewFamilySetting::~UMoviePipelineViewFamilySetting
            ((UMoviePipelineViewFamilySetting *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// EMoviePipelineDLSSQualityToUDLSSMode @ 14de30550

UDLSSMode __cdecl
MRQHelpers::EMoviePipelineDLSSQualityToUDLSSMode(EMoviePipelineDLSSQuality param_1)

{
  return param_1 + EMoviePipelineDLSSQuality_Quality;
}

// EmptyLinkFunctionForGeneratedCodeDLSSMoviePipelineSupport_init @ 14de30560

void __cdecl EmptyLinkFunctionForGeneratedCodeDLSSMoviePipelineSupport_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineDLSSSetting @ 14de30570

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineDLSSSetting(void)

{
  return;
}

// Z_Construct_UClass_UMoviePipelineDLSSSetting_NoRegister @ 14de30f90

UClass * __cdecl Z_Construct_UClass_UMoviePipelineDLSSSetting_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineDLSSSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DLSSMoviePipelineSupport",L"MoviePipelineDLSSSetting",
               &Z_Registration_Info_UClass_UMoviePipelineDLSSSetting.InnerSingleton,
               UMoviePipelineDLSSSetting::StaticRegisterNativesUMoviePipelineDLSSSetting,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineDLSSSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineDLSSSetting>,local_res8,
               UMoviePipelineViewFamilySetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineDLSSSetting.InnerSingleton;
}

// IMPLEMENT_MODULE_DLSSMoviePipelineSupport @ 14de31050

void __cdecl IMPLEMENT_MODULE_DLSSMoviePipelineSupport(void)

{
  return;
}

