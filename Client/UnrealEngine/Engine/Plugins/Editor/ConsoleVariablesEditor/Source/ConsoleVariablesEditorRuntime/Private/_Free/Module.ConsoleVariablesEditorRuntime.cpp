// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ConsoleVariablesEditorRuntime
// Functions: 40

// `dynamic_initializer_for_'LogConsoleVariablesEditorRuntime'' @ 1413ff530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogConsoleVariablesEditorRuntime__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogConsoleVariablesEditorRuntime,
             L"LogConsoleVariablesEditorRuntime",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogConsoleVariablesEditorRuntime__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantConsoleVariablesEditorRuntime'' @ 1413ff570

void __cdecl _dynamic_initializer_for__ModuleRegistrantConsoleVariablesEditorRuntime__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ConsoleVariablesEditorRuntime";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ConsoleVariablesEditorRuntime",0x1d);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FConsoleVariablesEditorRuntimeModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h__Script_ConsoleVariablesEditorRuntime_2293254303'' @ 1413ff5c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h__Script_ConsoleVariablesEditorRuntime_2293254303__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ConsoleVariablesEditorRuntime",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h__Script_ConsoleVariablesEditorRuntime_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h__Script_ConsoleVariablesEditorRuntime_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ConsoleVariablesEditorRuntime'' @ 1413ff610

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ConsoleVariablesEditorRuntime__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xe856c8cb;
  local_res8[0].DeclarationsHash = 0x42add4e1;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ConsoleVariablesEditorRuntime,
             L"/Script/ConsoleVariablesEditorRuntime",
             &Z_Registration_Info_UPackage__Script_ConsoleVariablesEditorRuntime,local_res8);
  return;
}

// Z_Construct_UPackage__Script_ConsoleVariablesEditorRuntime @ 14de36180

UPackage * __cdecl Z_Construct_UPackage__Script_ConsoleVariablesEditorRuntime(void)

{
  if (Z_Registration_Info_UPackage__Script_ConsoleVariablesEditorRuntime.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ConsoleVariablesEditorRuntime.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ConsoleVariablesEditorRuntime.OuterSingleton;
}

// Z_Construct_UClass_UConsoleVariablesAsset_NoRegister @ 14de361c0

UClass * __cdecl Z_Construct_UClass_UConsoleVariablesAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConsoleVariablesAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ConsoleVariablesEditorRuntime",L"ConsoleVariablesAsset",
               &Z_Registration_Info_UClass_UConsoleVariablesAsset.InnerSingleton,
               UConsoleVariablesAsset::StaticRegisterNativesUConsoleVariablesAsset,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UConsoleVariablesAsset>,
               InternalVTableHelperCtorCaller<UConsoleVariablesAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConsoleVariablesAsset.InnerSingleton;
}

// Z_Construct_UClass_UConsoleVariablesAsset @ 14de36360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UConsoleVariablesAsset(void)

{
  if (Z_Registration_Info_UClass_UConsoleVariablesAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UConsoleVariablesAsset.OuterSingleton,
               &Z_Construct_UClass_UConsoleVariablesAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UConsoleVariablesAsset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData @ 14de363a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConsoleVariablesEditorAssetSaveData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConsoleVariablesEditorAssetSaveData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FConsoleVariablesEditorAssetSaveData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConsoleVariablesEditorAssetSaveData.InnerSingleton;
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

// NewStructOps @ 14de36420

void * __cdecl
Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConsoleVariablesEditorAssetSaveData,&UE::CoreUObject::Private::Construct<FConsoleVariablesEditorAssetSaveData>,&UE::CoreUObject::Private::ConstructForTests<FConsoleVariablesEditorAssetSaveData>,&UE::CoreUObject::Private::Destruct<FConsoleVariablesEditorAssetSaveData>,&UE::CoreUObject::Private::Copy<FConsoleVariablesEditorAssetSaveData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UConsoleVariablesAsset_AddFrom @ 14de36460

UFunction * __cdecl Z_Construct_UFunction_UConsoleVariablesAsset_AddFrom(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConsoleVariablesAsset_AddFrom_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData @ 14de364a0

UFunction * __cdecl
Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom @ 14de364e0

UFunction * __cdecl Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOnlyIncludeChecked_SetBit @ 14de36520

void __cdecl
Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::
NewProp_bOnlyIncludeChecked_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands @ 14de36530

UFunction * __cdecl Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de36570

void __cdecl
Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString @ 14de36580

UFunction * __cdecl Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands @ 14de365c0

UFunction * __cdecl Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOnlyIncludeChecked_SetBit @ 14de36600

void __cdecl
Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::
NewProp_bOnlyIncludeChecked_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString @ 14de36610

UFunction * __cdecl
Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOnlyIncludeChecked_SetBit @ 14de36650

void __cdecl
Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::
NewProp_bOnlyIncludeChecked_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray @ 14de36660

UFunction * __cdecl Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount @ 14de366a0

UFunction * __cdecl Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription @ 14de366e0

UFunction * __cdecl
Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de36720

void __cdecl
Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable @ 14de36730

UFunction * __cdecl Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands @ 14de36770

UFunction * __cdecl Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription @ 14de367b0

UFunction * __cdecl
Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ConstructItems<FConsoleVariablesEditorAssetSaveData,FConsoleVariablesEditorAssetSaveData,int> @ 14de36910

void __cdecl
ConstructItems<FConsoleVariablesEditorAssetSaveData,FConsoleVariablesEditorAssetSaveData,int>
          (void *param_1,FConsoleVariablesEditorAssetSaveData *param_2,int param_3)

{
  ECheckBoxState EVar1;
  ECheckBoxState *pEVar2;
  ECheckBoxState *pEVar3;
  
  if (param_3 != 0) {
    pEVar3 = &param_2->CheckedState;
    pEVar2 = (ECheckBoxState *)((longlong)param_1 + 0x20);
    do {
      FString::FString((FString *)(pEVar2 + -0x20),
                       (FString *)(pEVar2 + (longlong)param_2 + (-0x20 - (longlong)param_1)));
      FString::FString((FString *)(pEVar2 + -0x10),(FString *)(pEVar3 + -0x10));
      EVar1 = *pEVar3;
      pEVar3 = pEVar3 + 0x28;
      *pEVar2 = EVar1;
      pEVar2 = pEVar2 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FConsoleVariablesEditorAssetSaveData,int> @ 14de36990

void __cdecl
DestructItems<FConsoleVariablesEditorAssetSaveData,int>
          (FConsoleVariablesEditorAssetSaveData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->CommandValueAsString).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->CommandName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// InternalConstructor<UConsoleVariablesAsset> @ 14de369e0

void __cdecl InternalConstructor<UConsoleVariablesAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UConsoleVariablesAsset::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UConsoleVariablesAsset::_vftable__for__IMovieSceneConsoleVariableTrackInterface__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UConsoleVariablesAsset> @ 14de36a30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UConsoleVariablesAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UConsoleVariablesAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UConsoleVariablesAsset::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UConsoleVariablesAsset::_vftable__for__IMovieSceneConsoleVariableTrackInterface__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// RemoveAll<`TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_>::Remove'::__l2::<lambda_1>_> @ 14de36b00

int __thiscall
TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_>::
RemoveAll<_TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
          (TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  int local_res18;
  
  iVar1 = this->ArrayNum;
  lVar5 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar4 = *(int *)(*(undefined8 **)param_1 + 1);
  iVar10 = 0;
  iVar7 = *(int *)(pFVar2 + 8);
  local_res18 = 0;
  if (iVar7 == iVar4) {
    if (iVar7 < 2) {
      bVar11 = false;
    }
    else {
      iVar4 = wcscmp(*(wchar_t **)pFVar2,(wchar_t *)**(undefined8 **)param_1);
      bVar11 = iVar4 != 0;
    }
  }
  else {
    bVar11 = iVar7 + iVar4 != 1;
  }
  lVar6 = 0;
  iVar4 = 0;
  do {
    iVar7 = iVar4 + 1;
    lVar6 = lVar6 + 1;
    if (lVar6 < lVar5) {
      puVar3 = *(undefined8 **)param_1;
      iVar8 = *(int *)(puVar3 + 1);
      pFVar9 = pFVar2 + lVar6 * 0x28;
      do {
        iVar10 = *(int *)(pFVar9 + 8);
        if (iVar10 == iVar8) {
          if (iVar10 < 2) {
            bVar12 = false;
          }
          else {
            iVar10 = wcscmp(*(wchar_t **)pFVar9,(wchar_t *)*puVar3);
            bVar12 = iVar10 != 0;
          }
        }
        else {
          bVar12 = iVar8 + iVar10 != 1;
        }
        iVar10 = local_res18;
        if (bVar11 != bVar12) break;
        iVar7 = iVar7 + 1;
        lVar6 = lVar6 + 1;
        pFVar9 = pFVar9 + 0x28;
      } while (lVar6 < lVar5);
    }
    iVar8 = iVar7 - iVar4;
    if (bVar11 == false) {
      DestructItems<FConsoleVariablesEditorAssetSaveData,int>
                ((FConsoleVariablesEditorAssetSaveData *)(pFVar2 + (longlong)iVar4 * 0x28),iVar8);
    }
    else {
      if (iVar10 != iVar4) {
        memmove(pFVar2 + (longlong)iVar10 * 0x28,pFVar2 + (longlong)iVar4 * 0x28,
                (longlong)iVar8 * 0x28);
      }
      iVar10 = iVar10 + iVar8;
      local_res18 = iVar10;
    }
    bVar11 = (bool)(bVar11 ^ 1);
    iVar4 = iVar7;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar10;
      return iVar1 - iVar10;
    }
  } while( true );
}

// `vector_deleting_destructor'`adjustor{40}' @ 14de36ecc

/* [thunk]:public: virtual void * __ptr64 __cdecl UConsoleVariablesAsset::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UConsoleVariablesAsset::_vector_deleting_destructor__adjustor_40__
          (UConsoleVariablesAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UConsoleVariablesAsset *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14de36ee0

void * __thiscall
FConsoleVariablesEditorRuntimeModule::_scalar_deleting_destructor_
          (FConsoleVariablesEditorRuntimeModule *this,uint param_1)

{
  *this = (FConsoleVariablesEditorRuntimeModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de36f20

void * __thiscall
IMovieSceneConsoleVariableTrackInterface::_scalar_deleting_destructor_
          (IMovieSceneConsoleVariableTrackInterface *this,uint param_1)

{
  *this = (IMovieSceneConsoleVariableTrackInterface)
          &___7IMovieSceneConsoleVariableTrackInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de36f60

void * __thiscall
UConsoleVariablesAsset::_scalar_deleting_destructor_(UConsoleVariablesAsset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneConsoleVariableTrackInterface__;
  DestructItems<FConsoleVariablesEditorAssetSaveData,int>
            ((FConsoleVariablesEditorAssetSaveData *)(this->SavedCommands).AllocatorInstance.Data,
             (this->SavedCommands).ArrayNum);
  pFVar1 = (this->SavedCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VariableCollectionDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneConsoleVariableTrackInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeConsoleVariablesAsset @ 14de375a0

void __cdecl EmptyLinkFunctionForGeneratedCodeConsoleVariablesAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeConsoleVariablesEditorRuntime_init @ 14de375b0

void __cdecl EmptyLinkFunctionForGeneratedCodeConsoleVariablesEditorRuntime_init(void)

{
  return;
}

// IMPLEMENT_MODULE_ConsoleVariablesEditorRuntime @ 14de38dd0

void __cdecl IMPLEMENT_MODULE_ConsoleVariablesEditorRuntime(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogConsoleVariablesEditorRuntime'' @ 15045f510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogConsoleVariablesEditorRuntime__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogConsoleVariablesEditorRuntime);
  return;
}

