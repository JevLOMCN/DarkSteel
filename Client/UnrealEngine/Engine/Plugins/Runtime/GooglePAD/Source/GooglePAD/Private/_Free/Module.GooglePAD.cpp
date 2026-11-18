// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GooglePAD
// Functions: 51

// DownloadStateMap'' @ 1414506a0

void __cdecl `dynamic_initializer_for_'UGooglePADFunctionLibrary::DownloadStateMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UGooglePADFunctionLibrary::DownloadStateMap__);
  return;
}

// LocationMap'' @ 1414506c0

void __cdecl `dynamic_initializer_for_'UGooglePADFunctionLibrary::LocationMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UGooglePADFunctionLibrary::LocationMap__);
  return;
}

// `dynamic_initializer_for_'LogGooglePAD'' @ 1414506e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGooglePAD__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogGooglePAD,L"LogGooglePAD",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGooglePAD__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantGooglePAD'' @ 141450720

void __cdecl _dynamic_initializer_for__ModuleRegistrantGooglePAD__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "GooglePAD";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"GooglePAD",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FGooglePADModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h__Script_GooglePAD_3689090251'' @ 141450770

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h__Script_GooglePAD_3689090251__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GooglePAD",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h__Script_GooglePAD_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h__Script_GooglePAD_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_GooglePAD'' @ 1414507c0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_GooglePAD__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xbaf4817;
  local_res8[0].DeclarationsHash = 0x9536c3c5;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_GooglePAD,L"/Script/GooglePAD",
             &Z_Registration_Info_UPackage__Script_GooglePAD,local_res8);
  return;
}

// Z_Construct_UPackage__Script_GooglePAD @ 14f032270

UPackage * __cdecl Z_Construct_UPackage__Script_GooglePAD(void)

{
  if (Z_Registration_Info_UPackage__Script_GooglePAD.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_GooglePAD.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_GooglePAD.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14f0322d0

void * __thiscall
FGooglePADModule::_scalar_deleting_destructor_(FGooglePADModule *this,uint param_1)

{
  *this = (FGooglePADModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UGooglePADFunctionLibrary @ 14f0323d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGooglePADFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UGooglePADFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGooglePADFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGooglePADFunctionLibrary.OuterSingleton;
}

// Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus @ 14f032410

UEnum * __cdecl Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus(void)

{
  if (Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus.InnerSingleton,
               &Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus.InnerSingleton;
}

// Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus @ 14f032450

UEnum * __cdecl Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus(void)

{
  if (Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus.InnerSingleton,
               &Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus.InnerSingleton;
}

// Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus @ 14f032490

UEnum * __cdecl Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus(void)

{
  if (Z_Registration_Info_UEnum_EGooglePADDownloadStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGooglePADDownloadStatus.InnerSingleton,
               &Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGooglePADDownloadStatus.InnerSingleton;
}

// Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode @ 14f0324d0

UEnum * __cdecl Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode(void)

{
  if (Z_Registration_Info_UEnum_EGooglePADErrorCode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGooglePADErrorCode.InnerSingleton,
               &Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGooglePADErrorCode.InnerSingleton;
}

// Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod @ 14f032510

UEnum * __cdecl Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod(void)

{
  if (Z_Registration_Info_UEnum_EGooglePADStorageMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGooglePADStorageMethod.InnerSingleton,
               &Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGooglePADStorageMethod.InnerSingleton;
}

// EGooglePADErrorCode_StaticEnum @ 14f032550

UEnum * __cdecl EGooglePADErrorCode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGooglePADErrorCode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GooglePAD();
    Z_Registration_Info_UEnum_EGooglePADErrorCode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode,(UObject *)pUVar1,
                       L"EGooglePADErrorCode");
  }
  return Z_Registration_Info_UEnum_EGooglePADErrorCode.OuterSingleton;
}

// EGooglePADDownloadStatus_StaticEnum @ 14f032590

UEnum * __cdecl EGooglePADDownloadStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGooglePADDownloadStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GooglePAD();
    Z_Registration_Info_UEnum_EGooglePADDownloadStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus,(UObject *)pUVar1,
                       L"EGooglePADDownloadStatus");
  }
  return Z_Registration_Info_UEnum_EGooglePADDownloadStatus.OuterSingleton;
}

// EGooglePADStorageMethod_StaticEnum @ 14f0325d0

UEnum * __cdecl EGooglePADStorageMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGooglePADStorageMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GooglePAD();
    Z_Registration_Info_UEnum_EGooglePADStorageMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod,(UObject *)pUVar1,
                       L"EGooglePADStorageMethod");
  }
  return Z_Registration_Info_UEnum_EGooglePADStorageMethod.OuterSingleton;
}

// EGooglePADCellularDataConfirmStatus_StaticEnum @ 14f032610

UEnum * __cdecl EGooglePADCellularDataConfirmStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GooglePAD();
    Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus,
                       (UObject *)pUVar1,L"EGooglePADCellularDataConfirmStatus");
  }
  return Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus.OuterSingleton;
}

// EGooglePADConfirmationDialogStatus_StaticEnum @ 14f032650

UEnum * __cdecl EGooglePADConfirmationDialogStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GooglePAD();
    Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus,
                       (UObject *)pUVar1,L"EGooglePADConfirmationDialogStatus");
  }
  return Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus.OuterSingleton;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload @ 14f032690

UFunction * __cdecl Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation @ 14f0326d0

UFunction * __cdecl Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath @ 14f032710

UFunction * __cdecl Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded @ 14f032750

UFunction * __cdecl Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState @ 14f032790

UFunction * __cdecl Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus @ 14f0327d0

UFunction * __cdecl Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus @ 14f032810

UFunction * __cdecl
Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus @ 14f032850

UFunction * __cdecl
Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowConfirmationDialogStatus_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod @ 14f032890

UFunction * __cdecl Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload @ 14f0328d0

UFunction * __cdecl Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation @ 14f032910

UFunction * __cdecl Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState @ 14f032950

UFunction * __cdecl Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload @ 14f032990

UFunction * __cdecl Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo @ 14f0329d0

UFunction * __cdecl Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval @ 14f032a10

UFunction * __cdecl Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation @ 14f032a50

UFunction * __cdecl
Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog @ 14f032a90

UFunction * __cdecl Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowConfirmationDialog_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UGooglePADFunctionLibrary> @ 14f032ad0

void __cdecl InternalConstructor<UGooglePADFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UGooglePADFunctionLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UGooglePADFunctionLibrary> @ 14f032b00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGooglePADFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGooglePADFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGooglePADFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EGooglePADCellularDataConfirmStatus> @ 14f032bb0

UEnum * __cdecl StaticEnum<enum_EGooglePADCellularDataConfirmStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GooglePAD();
    Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus,
                       (UObject *)pUVar1,L"EGooglePADCellularDataConfirmStatus");
  }
  return Z_Registration_Info_UEnum_EGooglePADCellularDataConfirmStatus.OuterSingleton;
}

// StaticEnum<enum_EGooglePADConfirmationDialogStatus> @ 14f032bf0

UEnum * __cdecl StaticEnum<enum_EGooglePADConfirmationDialogStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GooglePAD();
    Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADConfirmationDialogStatus,
                       (UObject *)pUVar1,L"EGooglePADConfirmationDialogStatus");
  }
  return Z_Registration_Info_UEnum_EGooglePADConfirmationDialogStatus.OuterSingleton;
}

// StaticEnum<enum_EGooglePADDownloadStatus> @ 14f032c30

UEnum * __cdecl StaticEnum<enum_EGooglePADDownloadStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGooglePADDownloadStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GooglePAD();
    Z_Registration_Info_UEnum_EGooglePADDownloadStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus,(UObject *)pUVar1,
                       L"EGooglePADDownloadStatus");
  }
  return Z_Registration_Info_UEnum_EGooglePADDownloadStatus.OuterSingleton;
}

// StaticEnum<enum_EGooglePADErrorCode> @ 14f032c70

UEnum * __cdecl StaticEnum<enum_EGooglePADErrorCode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGooglePADErrorCode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GooglePAD();
    Z_Registration_Info_UEnum_EGooglePADErrorCode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode,(UObject *)pUVar1,
                       L"EGooglePADErrorCode");
  }
  return Z_Registration_Info_UEnum_EGooglePADErrorCode.OuterSingleton;
}

// StaticEnum<enum_EGooglePADStorageMethod> @ 14f032cb0

UEnum * __cdecl StaticEnum<enum_EGooglePADStorageMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGooglePADStorageMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GooglePAD();
    Z_Registration_Info_UEnum_EGooglePADStorageMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod,(UObject *)pUVar1,
                       L"EGooglePADStorageMethod");
  }
  return Z_Registration_Info_UEnum_EGooglePADStorageMethod.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14f032e10

void * __thiscall
UGooglePADFunctionLibrary::_scalar_deleting_destructor_
          (UGooglePADFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UGooglePADFunctionLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeGooglePADFunctionLibrary @ 14f033110

void __cdecl EmptyLinkFunctionForGeneratedCodeGooglePADFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGooglePAD_init @ 14f033120

void __cdecl EmptyLinkFunctionForGeneratedCodeGooglePAD_init(void)

{
  return;
}

// Z_Construct_UClass_UGooglePADFunctionLibrary_NoRegister @ 14f033460

UClass * __cdecl Z_Construct_UClass_UGooglePADFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGooglePADFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GooglePAD",L"GooglePADFunctionLibrary",
               &Z_Registration_Info_UClass_UGooglePADFunctionLibrary.InnerSingleton,
               UGooglePADFunctionLibrary::StaticRegisterNativesUGooglePADFunctionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGooglePADFunctionLibrary>,
               InternalVTableHelperCtorCaller<UGooglePADFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGooglePADFunctionLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_GooglePAD @ 14f034070

void __cdecl IMPLEMENT_MODULE_GooglePAD(void)

{
  return;
}

// DownloadStateMap'' @ 1504714c0

void __cdecl `dynamic_atexit_destructor_for_'UGooglePADFunctionLibrary::DownloadStateMap__(void)

{
  UGooglePADFunctionLibrary::DownloadStateMap._72_4_ = 0;
  if (UGooglePADFunctionLibrary::DownloadStateMap._64_8_ != 0) {
    FMemory::Free((void *)UGooglePADFunctionLibrary::DownloadStateMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UGooglePADFunctionLibrary::DownloadStateMap);
  return;
}

// LocationMap'' @ 150471500

void __cdecl `dynamic_atexit_destructor_for_'UGooglePADFunctionLibrary::LocationMap__(void)

{
  UGooglePADFunctionLibrary::LocationMap._72_4_ = 0;
  if (UGooglePADFunctionLibrary::LocationMap._64_8_ != 0) {
    FMemory::Free((void *)UGooglePADFunctionLibrary::LocationMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UGooglePADFunctionLibrary::LocationMap);
  return;
}

// `dynamic_atexit_destructor_for_'LogGooglePAD'' @ 150471540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGooglePAD__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGooglePAD);
  return;
}

