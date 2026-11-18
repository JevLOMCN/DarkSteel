// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 129

// MainWindowOverlay'' @ 1410a8e50

void __cdecl `dynamic_initializer_for_'TranslationPickerManager::MainWindowOverlay__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TranslationPickerManager::MainWindowOverlay__);
  return;
}

// PickedTexts'' @ 1410a8e70

void __cdecl `dynamic_initializer_for_'TranslationPickerManager::PickedTexts__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TranslationPickerManager::PickedTexts__);
  return;
}

// PickerWindow'' @ 1410a8e90

void __cdecl `dynamic_initializer_for_'TranslationPickerManager::PickerWindow__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TranslationPickerManager::PickerWindow__);
  return;
}

// PickerWindowWidget'' @ 1410a8eb0

void __cdecl `dynamic_initializer_for_'TranslationPickerManager::PickerWindowWidget__(void)

{
  atexit(`dynamic_atexit_destructor_for_'TranslationPickerManager::PickerWindowWidget__);
  return;
}

// TranslationPickerSettingsManagerInstance'' @ 1410a8ed0

void __cdecl
`dynamic_initializer_for_'FTranslationPickerSettingsManager::
TranslationPickerSettingsManagerInstance__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FTranslationPickerSettingsManager::
         TranslationPickerSettingsManagerInstance__);
  return;
}

// `dynamic_initializer_for_'LogTranslationEditor'' @ 1410a8ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTranslationEditor__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogTranslationEditor,L"LogTranslationEditor",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTranslationEditor__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantTranslationEditor'' @ 1410a8f30

void __cdecl _dynamic_initializer_for__ModuleRegistrantTranslationEditor__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "TranslationEditor";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"TranslationEditor",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FTranslationEditorModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h__Script_TranslationEditor_4132411184'' @ 1410a8f80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h__Script_TranslationEditor_4132411184__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TranslationEditor",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h__Script_TranslationEditor_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_TranslationEditor_Private_TranslationUnit_h__Script_TranslationEditor_2386921180'' @ 1410a8fc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_TranslationEditor_Private_TranslationUnit_h__Script_TranslationEditor_2386921180__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TranslationEditor",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_TranslationEditor_Private_TranslationUnit_h__Script_TranslationEditor_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_TranslationEditor_Private_TranslationUnit_h__Script_TranslationEditor_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_TranslationEditor'' @ 1410a9010

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_TranslationEditor__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x15edbb29;
  local_res8[0].DeclarationsHash = 0x55da5b2;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_TranslationEditor,L"/Script/TranslationEditor",
             &Z_Registration_Info_UPackage__Script_TranslationEditor,local_res8);
  return;
}

// NewStructOps @ 146b92200

void * __cdecl Z_Construct_UScriptStruct_FTranslationChange_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTranslationChange,&UE::CoreUObject::Private::Construct<FTranslationChange>,&UE::CoreUObject::Private::ConstructForTests<FTranslationChange>,&UE::CoreUObject::Private::Destruct<FTranslationChange>,&UE::CoreUObject::Private::Copy<FTranslationChange>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UTranslationPickerSettings @ 146b92240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTranslationPickerSettings(void)

{
  if (Z_Registration_Info_UClass_UTranslationPickerSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTranslationPickerSettings.OuterSingleton,
               &Z_Construct_UClass_UTranslationPickerSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTranslationPickerSettings.OuterSingleton;
}

// NewStructOps @ 146b92280

void * __cdecl Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTranslationContextInfo,&UE::CoreUObject::Private::Construct<FTranslationContextInfo>,&UE::CoreUObject::Private::ConstructForTests<FTranslationContextInfo>,&UE::CoreUObject::Private::Destruct<FTranslationContextInfo>,&UE::CoreUObject::Private::Copy<FTranslationContextInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSubmitTranslationPickerChangesToLocalizationService_SetBit @ 146b922c0

void __cdecl
Z_Construct_UClass_UTranslationPickerSettings_Statics::
NewProp_bSubmitTranslationPickerChangesToLocalizationService_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_HasBeenReviewed_SetBit @ 146b922d0

void __cdecl
Z_Construct_UClass_UTranslationUnit_Statics::NewProp_HasBeenReviewed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// Z_Construct_UPackage__Script_TranslationEditor @ 146b922e0

UPackage * __cdecl Z_Construct_UPackage__Script_TranslationEditor(void)

{
  if (Z_Registration_Info_UPackage__Script_TranslationEditor.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_TranslationEditor.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_TranslationEditor.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146b924b0

void * __thiscall
FTranslationEditorModule::_scalar_deleting_destructor_(FTranslationEditorModule *this,uint param_1)

{
  *this = (FTranslationEditorModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UTranslationUnit @ 146b929a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTranslationUnit(void)

{
  if (Z_Registration_Info_UClass_UTranslationUnit.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTranslationUnit.OuterSingleton,
               &Z_Construct_UClass_UTranslationUnit_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTranslationUnit.OuterSingleton;
}

// Z_Construct_UScriptStruct_FTranslationChange @ 146b929e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTranslationChange(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTranslationChange.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTranslationChange.InnerSingleton,
               &Z_Construct_UScriptStruct_FTranslationChange_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTranslationChange.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTranslationChange.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTranslationContextInfo @ 146b92a60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTranslationContextInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTranslationContextInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTranslationContextInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTranslationContextInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTranslationContextInfo.InnerSingleton;
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

// ConstructItems<FTranslationChange,FTranslationChange,int> @ 146b93420

void __cdecl
ConstructItems<FTranslationChange,FTranslationChange,int>
          (void *param_1,FTranslationChange *param_2,int param_3)

{
  int *this;
  FString *pFVar1;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->Source;
    this = (int *)((longlong)param_1 + 0x18);
    do {
      FString::FString((FString *)(this + -6),
                       (FString *)((longlong)param_2 + (-0x18 - (longlong)param_1) + (longlong)this)
                      );
      *(undefined8 *)(this + -2) = *(undefined8 *)((longlong)(pFVar1 + -1) + 8);
      FString::FString((FString *)this,pFVar1);
      FString::FString((FString *)(this + 4),pFVar1 + 1);
      pFVar1 = (FString *)((longlong)(pFVar1 + 3) + 8);
      this = this + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<FTranslationPickerTextItem,1>,TSharedPtr<FTranslationPickerTextItem,1>,int> @ 146b934b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ConstructItems<TSharedPtr<FTranslationPickerTextItem,1>,TSharedPtr<FTranslationPickerTextItem,1>,int>
          (void *param_1,TSharedPtr<FTranslationPickerTextItem,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FTranslationPickerTextItem **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FTranslationChange,int> @ 146b93810

void __cdecl DestructItems<FTranslationChange,int>(FTranslationChange *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Source;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pFVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -2) + 8));
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTranslationContextInfo,int> @ 146b93870

void __cdecl
DestructItems<FTranslationContextInfo,int>(FTranslationContextInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FTranslationChange,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Changes;
    do {
      DestructItems<FTranslationChange,int>
                ((FTranslationChange *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -1))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FTranslationContextInfo *)(pTVar2 + -2))->Key).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTranslationPickerTextAndGeom,int> @ 146b938e0

void __cdecl
DestructItems<FTranslationPickerTextAndGeom,int>(FTranslationPickerTextAndGeom *param_1,int param_2)

{
  ITextData *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->Text).TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FTranslationPickerTextItem,1>,int> @ 146b93920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<FTranslationPickerTextItem,1>,int>
          (TSharedPtr<FTranslationPickerTextItem,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeHash<FTranslationPickerTextItem_const_,1> @ 146b94860

/* WARNING: Enum "Type": Some values do not have unique names */

uint __cdecl
GetTypeHash<FTranslationPickerTextItem_const_,1>
          (TSharedPtr<FTranslationPickerTextItem_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// HeapSortInternal<FTranslationPickerTextAndGeom,int,FIdentityFunctor,TDereferenceWrapper<FTranslationPickerTextAndGeom,`STranslationPickerFloatingWindow::Tick'::__l8::<lambda_1>_>_> @ 146b94890

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FTranslationPickerTextAndGeom,int,FIdentityFunctor,TDereferenceWrapper<FTranslationPickerTextAndGeom,_STranslationPickerFloatingWindow::Tick_::__l8::<lambda_1>_>_>
          (FTranslationPickerTextAndGeom *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FTranslationPickerTextAndGeom,_private:_virtual_void___cdecl_STranslationPickerFloatingWindow::Tick(FGeometry_const_&,double,float)_::_8_::<lambda_1>_>
          param_4)

{
  FTranslationPickerTextAndGeom *pFVar1;
  FTranslationPickerTextAndGeom *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  ITextData *pIVar5;
  TVector2<float>_u_0 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  FTranslationPickerTextAndGeom *pFVar23;
  int iVar24;
  
  if (param_2 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar18 = (param_2 + -2) / 2;
  iVar19 = iVar18 * 2 + 1;
  iVar24 = iVar19;
  iVar21 = iVar18;
  do {
    while (param_2 <= iVar19) {
LAB_146b94a0b:
      if (iVar21 == 0) {
        iVar19 = param_2 + -1;
        lVar22 = (longlong)iVar19;
        if (0 < iVar19) {
          pFVar23 = param_1 + lVar22;
          do {
            uVar13 = (pFVar23->Text).Flags;
            uVar14 = *(undefined4 *)&(pFVar23->Text).field_0xc;
            uVar3 = *(undefined8 *)
                     ((longlong)&(param_1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4
                     );
            pIVar5 = (param_1->Text).TextData.Reference;
            uVar15 = (param_1->Text).Flags;
            uVar16 = *(undefined4 *)&(param_1->Text).field_0xc;
            TVar6 = (param_1->Geometry).DrawPosition.field0_0x0;
            uVar7 = *(undefined8 *)&(param_1->Geometry).DrawScale;
            uVar8 = *(undefined8 *)((longlong)&(param_1->Geometry).DrawSize.field0_0x0 + 4);
            uVar9 = *(undefined8 *)((longlong)&(param_1->Geometry).LocalSize.field0_0x0 + 4);
            uVar10 = *(undefined8 *)((param_1->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
            uVar11 = *(undefined8 *)((param_1->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
            (param_1->Text).TextData.Reference = (pFVar23->Text).TextData.Reference;
            (param_1->Text).Flags = uVar13;
            *(undefined4 *)&(param_1->Text).field_0xc = uVar14;
            uVar12 = *(undefined8 *)&(pFVar23->Geometry).DrawScale;
            (param_1->Geometry).DrawPosition.field0_0x0 =
                 (pFVar23->Geometry).DrawPosition.field0_0x0;
            *(undefined8 *)&(param_1->Geometry).DrawScale = uVar12;
            uVar12 = *(undefined8 *)((longlong)&(pFVar23->Geometry).LocalSize.field0_0x0 + 4);
            *(undefined8 *)((longlong)&(param_1->Geometry).DrawSize.field0_0x0 + 4) =
                 *(undefined8 *)((longlong)&(pFVar23->Geometry).DrawSize.field0_0x0 + 4);
            *(undefined8 *)((longlong)&(param_1->Geometry).LocalSize.field0_0x0 + 4) = uVar12;
            uVar12 = *(undefined8 *)((pFVar23->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
            *(undefined8 *)((param_1->Geometry).AccumulatedRenderTransform.M.M[0] + 1) =
                 *(undefined8 *)((pFVar23->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
            *(undefined8 *)((param_1->Geometry).AccumulatedRenderTransform.M.M[1] + 1) = uVar12;
            *(undefined8 *)
             ((longlong)&(param_1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4) =
                 *(undefined8 *)
                  ((longlong)&(pFVar23->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
            (pFVar23->Text).TextData.Reference = pIVar5;
            (pFVar23->Text).Flags = uVar15;
            *(undefined4 *)&(pFVar23->Text).field_0xc = uVar16;
            (pFVar23->Geometry).DrawPosition.field0_0x0 = TVar6;
            *(undefined8 *)&(pFVar23->Geometry).DrawScale = uVar7;
            *(undefined8 *)((longlong)&(pFVar23->Geometry).DrawSize.field0_0x0 + 4) = uVar8;
            *(undefined8 *)((longlong)&(pFVar23->Geometry).LocalSize.field0_0x0 + 4) = uVar9;
            *(undefined8 *)((pFVar23->Geometry).AccumulatedRenderTransform.M.M[0] + 1) = uVar10;
            *(undefined8 *)((pFVar23->Geometry).AccumulatedRenderTransform.M.M[1] + 1) = uVar11;
            *(undefined8 *)
             ((longlong)&(pFVar23->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4) =
                 uVar3;
            iVar24 = 0;
            if (1 < iVar19) {
              do {
                iVar21 = iVar24 * 2;
                iVar18 = iVar21 + 1;
                if (iVar21 + 2 < iVar19) {
                  bVar17 = `STranslationPickerFloatingWindow::Tick'::__l8::<lambda_1>::operator()
                                     (param_4.Predicate,param_1 + (iVar21 + 2),param_1 + iVar18);
                  if (bVar17) {
                    iVar18 = iVar21;
                  }
                  iVar18 = iVar18 + 1;
                }
                pFVar1 = param_1 + iVar18;
                pFVar2 = param_1 + iVar24;
                bVar17 = `STranslationPickerFloatingWindow::Tick'::__l8::<lambda_1>::operator()
                                   (param_4.Predicate,pFVar2,pFVar1);
                if (!bVar17) break;
                uVar13 = (pFVar1->Text).Flags;
                uVar14 = *(undefined4 *)&(pFVar1->Text).field_0xc;
                pIVar5 = (pFVar2->Text).TextData.Reference;
                uVar15 = (pFVar2->Text).Flags;
                uVar16 = *(undefined4 *)&(pFVar2->Text).field_0xc;
                TVar6 = (pFVar2->Geometry).DrawPosition.field0_0x0;
                uVar7 = *(undefined8 *)&(pFVar2->Geometry).DrawScale;
                uVar8 = *(undefined8 *)((longlong)&(pFVar2->Geometry).DrawSize.field0_0x0 + 4);
                uVar9 = *(undefined8 *)((longlong)&(pFVar2->Geometry).LocalSize.field0_0x0 + 4);
                uVar10 = *(undefined8 *)((pFVar2->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
                uVar11 = *(undefined8 *)((pFVar2->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
                uVar3 = *(undefined8 *)
                         ((longlong)&(pFVar2->Geometry).AccumulatedRenderTransform.Trans.field0_0x0
                         + 4);
                (pFVar2->Text).TextData.Reference = (pFVar1->Text).TextData.Reference;
                (pFVar2->Text).Flags = uVar13;
                *(undefined4 *)&(pFVar2->Text).field_0xc = uVar14;
                uVar12 = *(undefined8 *)&(pFVar1->Geometry).DrawScale;
                (pFVar2->Geometry).DrawPosition.field0_0x0 =
                     (pFVar1->Geometry).DrawPosition.field0_0x0;
                *(undefined8 *)&(pFVar2->Geometry).DrawScale = uVar12;
                uVar12 = *(undefined8 *)((longlong)&(pFVar1->Geometry).LocalSize.field0_0x0 + 4);
                *(undefined8 *)((longlong)&(pFVar2->Geometry).DrawSize.field0_0x0 + 4) =
                     *(undefined8 *)((longlong)&(pFVar1->Geometry).DrawSize.field0_0x0 + 4);
                *(undefined8 *)((longlong)&(pFVar2->Geometry).LocalSize.field0_0x0 + 4) = uVar12;
                uVar12 = *(undefined8 *)((pFVar1->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
                *(undefined8 *)((pFVar2->Geometry).AccumulatedRenderTransform.M.M[0] + 1) =
                     *(undefined8 *)((pFVar1->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
                *(undefined8 *)((pFVar2->Geometry).AccumulatedRenderTransform.M.M[1] + 1) = uVar12;
                *(undefined8 *)
                 ((longlong)&(pFVar2->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4) =
                     *(undefined8 *)
                      ((longlong)&(pFVar1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4
                      );
                (pFVar1->Text).TextData.Reference = pIVar5;
                (pFVar1->Text).Flags = uVar15;
                *(undefined4 *)&(pFVar1->Text).field_0xc = uVar16;
                (pFVar1->Geometry).DrawPosition.field0_0x0 = TVar6;
                *(undefined8 *)&(pFVar1->Geometry).DrawScale = uVar7;
                *(undefined8 *)((longlong)&(pFVar1->Geometry).DrawSize.field0_0x0 + 4) = uVar8;
                *(undefined8 *)((longlong)&(pFVar1->Geometry).LocalSize.field0_0x0 + 4) = uVar9;
                *(undefined8 *)((pFVar1->Geometry).AccumulatedRenderTransform.M.M[0] + 1) = uVar10;
                *(undefined8 *)((pFVar1->Geometry).AccumulatedRenderTransform.M.M[1] + 1) = uVar11;
                *(undefined8 *)
                 ((longlong)&(pFVar1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4) =
                     uVar3;
                iVar24 = iVar18;
              } while (iVar18 * 2 + 1 < iVar19);
            }
            iVar19 = iVar19 + -1;
            lVar22 = lVar22 + -1;
            pFVar23 = pFVar23 + -1;
          } while (0 < lVar22);
        }
        return;
      }
      iVar18 = iVar21 + -1;
      iVar19 = iVar24 + -2;
      iVar24 = iVar19;
      iVar21 = iVar18;
    }
    iVar19 = iVar18 * 2;
    iVar20 = iVar19 + 1;
    if (iVar19 + 2 < param_2) {
      bVar17 = `STranslationPickerFloatingWindow::Tick'::__l8::<lambda_1>::operator()
                         (param_4.Predicate,param_1 + (iVar19 + 2),param_1 + iVar20);
      if (bVar17) {
        iVar20 = iVar19;
      }
      iVar20 = iVar20 + 1;
    }
    pFVar23 = param_1 + iVar20;
    pFVar1 = param_1 + iVar18;
    bVar17 = `STranslationPickerFloatingWindow::Tick'::__l8::<lambda_1>::operator()
                       (param_4.Predicate,pFVar1,pFVar23);
    if (!bVar17) goto LAB_146b94a0b;
    uVar13 = (pFVar23->Text).Flags;
    uVar14 = *(undefined4 *)&(pFVar23->Text).field_0xc;
    iVar19 = iVar20 * 2 + 1;
    uVar3 = *(undefined8 *)
             ((longlong)&(pFVar1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
    pIVar5 = (pFVar1->Text).TextData.Reference;
    uVar15 = (pFVar1->Text).Flags;
    uVar16 = *(undefined4 *)&(pFVar1->Text).field_0xc;
    TVar6 = (pFVar1->Geometry).DrawPosition.field0_0x0;
    uVar7 = *(undefined8 *)&(pFVar1->Geometry).DrawScale;
    uVar8 = *(undefined8 *)((longlong)&(pFVar1->Geometry).DrawSize.field0_0x0 + 4);
    uVar9 = *(undefined8 *)((longlong)&(pFVar1->Geometry).LocalSize.field0_0x0 + 4);
    uVar10 = *(undefined8 *)((pFVar1->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
    uVar11 = *(undefined8 *)((pFVar1->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
    (pFVar1->Text).TextData.Reference = (pFVar23->Text).TextData.Reference;
    (pFVar1->Text).Flags = uVar13;
    *(undefined4 *)&(pFVar1->Text).field_0xc = uVar14;
    uVar12 = *(undefined8 *)&(pFVar23->Geometry).DrawScale;
    (pFVar1->Geometry).DrawPosition.field0_0x0 = (pFVar23->Geometry).DrawPosition.field0_0x0;
    *(undefined8 *)&(pFVar1->Geometry).DrawScale = uVar12;
    uVar12 = *(undefined8 *)((longlong)&(pFVar23->Geometry).LocalSize.field0_0x0 + 4);
    *(undefined8 *)((longlong)&(pFVar1->Geometry).DrawSize.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&(pFVar23->Geometry).DrawSize.field0_0x0 + 4);
    *(undefined8 *)((longlong)&(pFVar1->Geometry).LocalSize.field0_0x0 + 4) = uVar12;
    uVar12 = *(undefined8 *)((pFVar23->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
    *(undefined8 *)((pFVar1->Geometry).AccumulatedRenderTransform.M.M[0] + 1) =
         *(undefined8 *)((pFVar23->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
    *(undefined8 *)((pFVar1->Geometry).AccumulatedRenderTransform.M.M[1] + 1) = uVar12;
    *(undefined8 *)((longlong)&(pFVar1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4) =
         *(undefined8 *)
          ((longlong)&(pFVar23->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
    (pFVar23->Text).TextData.Reference = pIVar5;
    (pFVar23->Text).Flags = uVar15;
    *(undefined4 *)&(pFVar23->Text).field_0xc = uVar16;
    (pFVar23->Geometry).DrawPosition.field0_0x0 = TVar6;
    *(undefined8 *)&(pFVar23->Geometry).DrawScale = uVar7;
    *(undefined8 *)((longlong)&(pFVar23->Geometry).DrawSize.field0_0x0 + 4) = uVar8;
    *(undefined8 *)((longlong)&(pFVar23->Geometry).LocalSize.field0_0x0 + 4) = uVar9;
    *(undefined8 *)((pFVar23->Geometry).AccumulatedRenderTransform.M.M[0] + 1) = uVar10;
    *(undefined8 *)((pFVar23->Geometry).AccumulatedRenderTransform.M.M[1] + 1) = uVar11;
    *(undefined8 *)((longlong)&(pFVar23->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4)
         = uVar3;
    iVar18 = iVar20;
  } while( true );
}

// InternalConstructor<UTranslationPickerSettings> @ 146b94bc0

void __cdecl InternalConstructor<UTranslationPickerSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UTranslationPickerSettings__6B_;
  }
  return;
}

// InternalConstructor<UTranslationUnit> @ 146b94bf0

void __cdecl InternalConstructor<UTranslationUnit>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UTranslationUnit__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 2;
  }
  return;
}

// InternalVTableHelperCtorCaller<UTranslationPickerSettings> @ 146b94ca0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTranslationPickerSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTranslationPickerSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTranslationPickerSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTranslationUnit> @ 146b94d50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTranslationUnit>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTranslationUnit::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTranslationUnit__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FTranslationPickerTextAndGeom,int,FIdentityFunctor,TDereferenceWrapper<FTranslationPickerTextAndGeom,`STranslationPickerFloatingWindow::Tick'::__l8::<lambda_1>_>_> @ 146b94e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FTranslationPickerTextAndGeom,int,FIdentityFunctor,TDereferenceWrapper<FTranslationPickerTextAndGeom,_STranslationPickerFloatingWindow::Tick_::__l8::<lambda_1>_>_>
          (FTranslationPickerTextAndGeom *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FTranslationPickerTextAndGeom,_private:_virtual_void___cdecl_STranslationPickerFloatingWindow::Tick(FGeometry_const_&,double,float)_::_8_::<lambda_1>_>
          param_4)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ITextData *pIVar5;
  TVector2<float>_u_0 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ITextData *pIVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  bool bVar17;
  longlong lVar18;
  int iVar19;
  FTranslationPickerTextAndGeom *pFVar20;
  FTranslationPickerTextAndGeom *pFVar21;
  FTranslationPickerTextAndGeom *pFVar22;
  FTranslationPickerTextAndGeom **ppFVar23;
  int iVar24;
  FTranslationPickerTextAndGeom *pFVar25;
  FTranslationPickerTextAndGeom *pFVar26;
  FTranslationPickerTextAndGeom *pFVar27;
  float fVar28;
  undefined1 auStack_398 [48];
  FTranslationPickerTextAndGeom *local_368;
  FTranslationPickerTextAndGeom *local_358;
  FTranslationPickerTextAndGeom *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
  if (1 < param_2) {
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar28 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar28;
    memset(local_340,0,0x2e8);
    ppFVar23 = &local_358;
    do {
      pFVar27 = ppFVar23[1];
      pFVar26 = *ppFVar23;
      local_368 = ppFVar23[2];
      iVar19 = (int)(((longlong)pFVar27 - (longlong)pFVar26) / 0x48) + 1;
      pFVar25 = pFVar26;
      iVar24 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_146b94f50:
        if (8 < iVar19) {
          uVar13 = (pFVar25->Text).Flags;
          uVar14 = *(undefined4 *)&(pFVar25->Text).field_0xc;
          pFVar20 = pFVar27 + 1;
          iVar19 = iVar19 / 2;
          pFVar26 = pFVar25 + iVar19;
          pIVar5 = (pFVar26->Text).TextData.Reference;
          uVar15 = (pFVar26->Text).Flags;
          uVar16 = *(undefined4 *)&(pFVar26->Text).field_0xc;
          TVar6 = pFVar25[iVar19].Geometry.DrawPosition.field0_0x0;
          uVar4 = *(undefined8 *)&pFVar25[iVar19].Geometry.DrawScale;
          puVar1 = (undefined8 *)((longlong)&pFVar25[iVar19].Geometry.DrawSize.field0_0x0 + 4);
          uVar7 = *puVar1;
          uVar8 = puVar1[1];
          pfVar2 = pFVar25[iVar19].Geometry.AccumulatedRenderTransform.M.M[0] + 1;
          uVar9 = *(undefined8 *)pfVar2;
          uVar10 = *(undefined8 *)(pfVar2 + 2);
          uVar3 = *(undefined8 *)
                   ((longlong)&pFVar25[iVar19].Geometry.AccumulatedRenderTransform.Trans.field0_0x0
                   + 4);
          pFVar26 = pFVar25 + iVar19;
          (pFVar26->Text).TextData.Reference = (pFVar25->Text).TextData.Reference;
          (pFVar26->Text).Flags = uVar13;
          *(undefined4 *)&(pFVar26->Text).field_0xc = uVar14;
          uVar11 = *(undefined8 *)&(pFVar25->Geometry).DrawScale;
          pFVar25[iVar19].Geometry.DrawPosition.field0_0x0 =
               (pFVar25->Geometry).DrawPosition.field0_0x0;
          *(undefined8 *)&pFVar25[iVar19].Geometry.DrawScale = uVar11;
          uVar11 = *(undefined8 *)((longlong)&(pFVar25->Geometry).LocalSize.field0_0x0 + 4);
          puVar1 = (undefined8 *)((longlong)&pFVar25[iVar19].Geometry.DrawSize.field0_0x0 + 4);
          *puVar1 = *(undefined8 *)((longlong)&(pFVar25->Geometry).DrawSize.field0_0x0 + 4);
          puVar1[1] = uVar11;
          uVar11 = *(undefined8 *)((pFVar25->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
          pfVar2 = pFVar25[iVar19].Geometry.AccumulatedRenderTransform.M.M[0] + 1;
          *(undefined8 *)pfVar2 =
               *(undefined8 *)((pFVar25->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
          *(undefined8 *)(pfVar2 + 2) = uVar11;
          *(undefined8 *)
           ((longlong)&pFVar25[iVar19].Geometry.AccumulatedRenderTransform.Trans.field0_0x0 + 4) =
               *(undefined8 *)
                ((longlong)&(pFVar25->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
          (pFVar25->Text).TextData.Reference = pIVar5;
          (pFVar25->Text).Flags = uVar15;
          *(undefined4 *)&(pFVar25->Text).field_0xc = uVar16;
          (pFVar25->Geometry).DrawPosition.field0_0x0 = TVar6;
          *(undefined8 *)&(pFVar25->Geometry).DrawScale = uVar4;
          *(undefined8 *)((longlong)&(pFVar25->Geometry).DrawSize.field0_0x0 + 4) = uVar7;
          *(undefined8 *)((longlong)&(pFVar25->Geometry).LocalSize.field0_0x0 + 4) = uVar8;
          *(undefined8 *)((pFVar25->Geometry).AccumulatedRenderTransform.M.M[0] + 1) = uVar9;
          *(undefined8 *)((pFVar25->Geometry).AccumulatedRenderTransform.M.M[1] + 1) = uVar10;
          *(undefined8 *)
           ((longlong)&(pFVar25->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4) = uVar3;
          pFVar26 = pFVar25;
LAB_146b94fe0:
          pFVar22 = pFVar26;
          pFVar26 = pFVar22 + 1;
          if (pFVar26 <= pFVar27) goto code_r0x000146b94fe9;
          goto LAB_146b95000;
        }
        for (; pFVar20 = pFVar25, pFVar26 = pFVar25, pFVar25 < pFVar27; pFVar27 = pFVar27 + -1) {
          while (pFVar22 = pFVar20, pFVar26 = pFVar26 + 1, pFVar26 <= pFVar27) {
            bVar17 = `STranslationPickerFloatingWindow::Tick'::__l8::<lambda_1>::operator()
                               (param_4.Predicate,pFVar22,pFVar26);
            pFVar20 = pFVar26;
            if (!bVar17) {
              pFVar20 = pFVar22;
            }
          }
          pIVar5 = (pFVar22->Text).TextData.Reference;
          uVar15 = (pFVar22->Text).Flags;
          uVar16 = *(undefined4 *)&(pFVar22->Text).field_0xc;
          uVar3 = *(undefined8 *)
                   ((longlong)&(pFVar22->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
          TVar6 = (pFVar22->Geometry).DrawPosition.field0_0x0;
          uVar4 = *(undefined8 *)&(pFVar22->Geometry).DrawScale;
          uVar13 = (pFVar27->Text).Flags;
          uVar14 = *(undefined4 *)&(pFVar27->Text).field_0xc;
          uVar7 = *(undefined8 *)((longlong)&(pFVar22->Geometry).DrawSize.field0_0x0 + 4);
          uVar8 = *(undefined8 *)((longlong)&(pFVar22->Geometry).LocalSize.field0_0x0 + 4);
          uVar9 = *(undefined8 *)((pFVar22->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
          uVar10 = *(undefined8 *)((pFVar22->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
          (pFVar22->Text).TextData.Reference = (pFVar27->Text).TextData.Reference;
          (pFVar22->Text).Flags = uVar13;
          *(undefined4 *)&(pFVar22->Text).field_0xc = uVar14;
          uVar11 = *(undefined8 *)&(pFVar27->Geometry).DrawScale;
          (pFVar22->Geometry).DrawPosition.field0_0x0 = (pFVar27->Geometry).DrawPosition.field0_0x0;
          *(undefined8 *)&(pFVar22->Geometry).DrawScale = uVar11;
          uVar11 = *(undefined8 *)((longlong)&(pFVar27->Geometry).LocalSize.field0_0x0 + 4);
          *(undefined8 *)((longlong)&(pFVar22->Geometry).DrawSize.field0_0x0 + 4) =
               *(undefined8 *)((longlong)&(pFVar27->Geometry).DrawSize.field0_0x0 + 4);
          *(undefined8 *)((longlong)&(pFVar22->Geometry).LocalSize.field0_0x0 + 4) = uVar11;
          uVar11 = *(undefined8 *)((pFVar27->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
          *(undefined8 *)((pFVar22->Geometry).AccumulatedRenderTransform.M.M[0] + 1) =
               *(undefined8 *)((pFVar27->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
          *(undefined8 *)((pFVar22->Geometry).AccumulatedRenderTransform.M.M[1] + 1) = uVar11;
          *(undefined8 *)
           ((longlong)&(pFVar22->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4) =
               *(undefined8 *)
                ((longlong)&(pFVar27->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
          (pFVar27->Text).TextData.Reference = pIVar5;
          (pFVar27->Text).Flags = uVar15;
          *(undefined4 *)&(pFVar27->Text).field_0xc = uVar16;
          (pFVar27->Geometry).DrawPosition.field0_0x0 = TVar6;
          *(undefined8 *)&(pFVar27->Geometry).DrawScale = uVar4;
          *(undefined8 *)((longlong)&(pFVar27->Geometry).DrawSize.field0_0x0 + 4) = uVar7;
          *(undefined8 *)((longlong)&(pFVar27->Geometry).LocalSize.field0_0x0 + 4) = uVar8;
          *(undefined8 *)((pFVar27->Geometry).AccumulatedRenderTransform.M.M[0] + 1) = uVar9;
          *(undefined8 *)((pFVar27->Geometry).AccumulatedRenderTransform.M.M[1] + 1) = uVar10;
          *(undefined8 *)
           ((longlong)&(pFVar27->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4) = uVar3;
        }
        goto LAB_146b951a7;
      }
LAB_146b9518e:
      HeapSortInternal<FTranslationPickerTextAndGeom,int,FIdentityFunctor,TDereferenceWrapper<FTranslationPickerTextAndGeom,_STranslationPickerFloatingWindow::Tick_::__l8::<lambda_1>_>_>
                (pFVar26,iVar19,param_3,param_4);
LAB_146b951a7:
      ppFVar23 = ppFVar23 + -3;
    } while (&local_358 <= ppFVar23);
  }
  return;
code_r0x000146b94fe9:
  bVar17 = `STranslationPickerFloatingWindow::Tick'::__l8::<lambda_1>::operator()
                     (param_4.Predicate,pFVar25,pFVar26);
  if (!bVar17) goto LAB_146b94fe0;
LAB_146b95000:
  do {
    pFVar21 = pFVar20;
    pFVar20 = pFVar21 + -1;
    if (pFVar20 <= pFVar25) break;
    bVar17 = `STranslationPickerFloatingWindow::Tick'::__l8::<lambda_1>::operator()
                       (param_4.Predicate,pFVar20,pFVar25);
  } while (!bVar17);
  pIVar5 = (pFVar20->Text).TextData.Reference;
  uVar3 = *(undefined8 *)&pFVar21[-1].Text.Flags;
  if (pFVar26 <= pFVar20) {
    pIVar12 = (pFVar26->Text).TextData.Reference;
    uVar13 = pFVar22[1].Text.Flags;
    uVar14 = *(undefined4 *)&pFVar22[1].Text.field_0xc;
    TVar6 = pFVar22[1].Geometry.DrawPosition.field0_0x0;
    uVar7 = *(undefined8 *)&pFVar22[1].Geometry.DrawScale;
    uVar8 = *(undefined8 *)((longlong)&pFVar22[1].Geometry.DrawSize.field0_0x0 + 4);
    uVar9 = *(undefined8 *)((longlong)&pFVar22[1].Geometry.LocalSize.field0_0x0 + 4);
    uVar10 = *(undefined8 *)(pFVar22[1].Geometry.AccumulatedRenderTransform.M.M[0] + 1);
    uVar11 = *(undefined8 *)(pFVar22[1].Geometry.AccumulatedRenderTransform.M.M[1] + 1);
    uVar4 = *(undefined8 *)
             ((longlong)&pFVar22[1].Geometry.AccumulatedRenderTransform.Trans.field0_0x0 + 4);
    (pFVar26->Text).TextData.Reference = pIVar5;
    *(undefined8 *)&pFVar22[1].Text.Flags = uVar3;
    uVar3 = *(undefined8 *)&pFVar21[-1].Geometry.DrawScale;
    pFVar22[1].Geometry.DrawPosition.field0_0x0 = pFVar21[-1].Geometry.DrawPosition.field0_0x0;
    *(undefined8 *)&pFVar22[1].Geometry.DrawScale = uVar3;
    uVar3 = *(undefined8 *)((longlong)&pFVar21[-1].Geometry.LocalSize.field0_0x0 + 4);
    *(undefined8 *)((longlong)&pFVar22[1].Geometry.DrawSize.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&pFVar21[-1].Geometry.DrawSize.field0_0x0 + 4);
    *(undefined8 *)((longlong)&pFVar22[1].Geometry.LocalSize.field0_0x0 + 4) = uVar3;
    uVar3 = *(undefined8 *)(pFVar21[-1].Geometry.AccumulatedRenderTransform.M.M[1] + 1);
    *(undefined8 *)(pFVar22[1].Geometry.AccumulatedRenderTransform.M.M[0] + 1) =
         *(undefined8 *)(pFVar21[-1].Geometry.AccumulatedRenderTransform.M.M[0] + 1);
    *(undefined8 *)(pFVar22[1].Geometry.AccumulatedRenderTransform.M.M[1] + 1) = uVar3;
    *(undefined8 *)((longlong)&pFVar22[1].Geometry.AccumulatedRenderTransform.Trans.field0_0x0 + 4)
         = *(undefined8 *)
            ((longlong)&pFVar21[-1].Geometry.AccumulatedRenderTransform.Trans.field0_0x0 + 4);
    (pFVar20->Text).TextData.Reference = pIVar12;
    pFVar21[-1].Text.Flags = uVar13;
    *(undefined4 *)&pFVar21[-1].Text.field_0xc = uVar14;
    pFVar21[-1].Geometry.DrawPosition.field0_0x0 = TVar6;
    *(undefined8 *)&pFVar21[-1].Geometry.DrawScale = uVar7;
    *(undefined8 *)((longlong)&pFVar21[-1].Geometry.DrawSize.field0_0x0 + 4) = uVar8;
    *(undefined8 *)((longlong)&pFVar21[-1].Geometry.LocalSize.field0_0x0 + 4) = uVar9;
    *(undefined8 *)(pFVar21[-1].Geometry.AccumulatedRenderTransform.M.M[0] + 1) = uVar10;
    *(undefined8 *)(pFVar21[-1].Geometry.AccumulatedRenderTransform.M.M[1] + 1) = uVar11;
    *(undefined8 *)((longlong)&pFVar21[-1].Geometry.AccumulatedRenderTransform.Trans.field0_0x0 + 4)
         = uVar4;
    goto LAB_146b94fe0;
  }
  pIVar12 = (pFVar25->Text).TextData.Reference;
  uVar13 = (pFVar25->Text).Flags;
  uVar14 = *(undefined4 *)&(pFVar25->Text).field_0xc;
  TVar6 = (pFVar25->Geometry).DrawPosition.field0_0x0;
  uVar7 = *(undefined8 *)&(pFVar25->Geometry).DrawScale;
  uVar8 = *(undefined8 *)((longlong)&(pFVar25->Geometry).DrawSize.field0_0x0 + 4);
  uVar9 = *(undefined8 *)((longlong)&(pFVar25->Geometry).LocalSize.field0_0x0 + 4);
  lVar18 = (longlong)pFVar20 + (-0x48 - (longlong)pFVar25);
  iVar24 = iVar24 + -1;
  uVar10 = *(undefined8 *)((pFVar25->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
  uVar11 = *(undefined8 *)((pFVar25->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
  uVar4 = *(undefined8 *)
           ((longlong)&(pFVar25->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
  (pFVar25->Text).TextData.Reference = pIVar5;
  *(undefined8 *)&(pFVar25->Text).Flags = uVar3;
  uVar3 = *(undefined8 *)&pFVar21[-1].Geometry.DrawScale;
  lVar18 = lVar18 / 0x12 + (lVar18 >> 0x3f);
  (pFVar25->Geometry).DrawPosition.field0_0x0 = pFVar21[-1].Geometry.DrawPosition.field0_0x0;
  *(undefined8 *)&(pFVar25->Geometry).DrawScale = uVar3;
  uVar3 = *(undefined8 *)((longlong)&pFVar21[-1].Geometry.LocalSize.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(pFVar25->Geometry).DrawSize.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&pFVar21[-1].Geometry.DrawSize.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(pFVar25->Geometry).LocalSize.field0_0x0 + 4) = uVar3;
  uVar3 = *(undefined8 *)(pFVar21[-1].Geometry.AccumulatedRenderTransform.M.M[1] + 1);
  *(undefined8 *)((pFVar25->Geometry).AccumulatedRenderTransform.M.M[0] + 1) =
       *(undefined8 *)(pFVar21[-1].Geometry.AccumulatedRenderTransform.M.M[0] + 1);
  *(undefined8 *)((pFVar25->Geometry).AccumulatedRenderTransform.M.M[1] + 1) = uVar3;
  *(undefined8 *)((longlong)&(pFVar25->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4) =
       *(undefined8 *)
        ((longlong)&pFVar21[-1].Geometry.AccumulatedRenderTransform.Trans.field0_0x0 + 4);
  (pFVar20->Text).TextData.Reference = pIVar12;
  pFVar21[-1].Text.Flags = uVar13;
  *(undefined4 *)&pFVar21[-1].Text.field_0xc = uVar14;
  pFVar21[-1].Geometry.DrawPosition.field0_0x0 = TVar6;
  *(undefined8 *)&pFVar21[-1].Geometry.DrawScale = uVar7;
  *(undefined8 *)((longlong)&pFVar21[-1].Geometry.DrawSize.field0_0x0 + 4) = uVar8;
  *(undefined8 *)((longlong)&pFVar21[-1].Geometry.LocalSize.field0_0x0 + 4) = uVar9;
  *(undefined8 *)(pFVar21[-1].Geometry.AccumulatedRenderTransform.M.M[0] + 1) = uVar10;
  *(undefined8 *)(pFVar21[-1].Geometry.AccumulatedRenderTransform.M.M[1] + 1) = uVar11;
  *(undefined8 *)((longlong)&pFVar21[-1].Geometry.AccumulatedRenderTransform.Trans.field0_0x0 + 4) =
       uVar4;
  if ((lVar18 >> 2) - (lVar18 >> 0x3f) < ((longlong)pFVar27 - (longlong)pFVar26) / 0x48) {
    if (pFVar26 < pFVar27) {
      *ppFVar23 = pFVar26;
      ppFVar23[1] = pFVar27;
      *(int *)(ppFVar23 + 2) = iVar24;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar20 <= pFVar25 + 1) goto LAB_146b951a7;
    pFVar27 = pFVar21 + -2;
    pFVar26 = pFVar25;
  }
  else {
    if (pFVar25 + 1 < pFVar20) {
      *ppFVar23 = pFVar25;
      ppFVar23[1] = pFVar21 + -2;
      *(int *)(ppFVar23 + 2) = iVar24;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar27 <= pFVar26) goto LAB_146b951a7;
  }
  iVar19 = (int)(((longlong)pFVar27 - (longlong)pFVar26) / 0x48) + 1;
  pFVar25 = pFVar26;
  if (iVar24 == 0) goto LAB_146b9518e;
  goto LAB_146b94f50;
}

// MakeRequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&> @ 146b952b0

/* WARNING: Enum "Type": Some values do not have unique names */

T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&> *
__cdecl RequiredArgs::
        MakeRequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>
                  (T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>
                   *__return_storage_ptr__,TSharedRef<STableViewBase,1> *param_1,
                  TSharedPtr<FTranslationPickerTextItem,1> *param_2)

{
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_> @ 146b952d0

/* WARNING: Enum "Type": Some values do not have unique names */

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_>
          (TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *param_1)

{
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>)
         param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_> @ 146b952e0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>)
         param_1;
}

// MakeShareable<FTranslationDataManager> @ 146b952f0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TRawPtrProxy<FTranslationDataManager> __cdecl
MakeShareable<FTranslationDataManager>(FTranslationDataManager *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRawPtrProxy<FTranslationDataManager> TVar3;
  longlong in_RDX;
  
  if ((((in_RDX != 0) && (*(longlong *)(in_RDX + 8) != 0)) && (*(longlong *)(in_RDX + 0x10) != 0))
     && (0 < *(int *)(*(longlong *)(in_RDX + 0x10) + 8))) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!InObject || !InObject->DoesSharedInstanceExist()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x7a5,L"Trying to share an already-shared object");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Object = (FTranslationDataManager *)(*pcVar1)();
      return (TRawPtrProxy<FTranslationDataManager>)TVar3.Object;
    }
  }
  param_1->_padding_ = in_RDX;
  return (TRawPtrProxy<FTranslationDataManager>)param_1;
}

// MakeShared<FTranslationPickerEditInputProcessor,1,STranslationPickerEditWindow_*> @ 146b95360

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTranslationPickerEditInputProcessor,1> * __cdecl
MakeShared<FTranslationPickerEditInputProcessor,1,STranslationPickerEditWindow_*>
          (TSharedRef<FTranslationPickerEditInputProcessor,1> *__return_storage_ptr__,
          STranslationPickerEditWindow **param_1)

{
  STranslationPickerEditWindow *pSVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FTranslationPickerEditInputProcessor,1> *pTVar5;
  
  pTVar4 = operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FTranslationPickerEditInputProcessor *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTranslationPickerEditInputProcessor___00_SharedPointerInternals__6B_
    ;
    pSVar1 = *param_1;
    pTVar4[1]._padding_ = (longlong)&___7FTranslationPickerEditInputProcessor__6B_;
    *(STranslationPickerEditWindow **)&pTVar4[1].SharedReferenceCount = pSVar1;
    __return_storage_ptr__->Object = (FTranslationPickerEditInputProcessor *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<FTranslationPickerEditInputProcessor,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs> @ 146b95420

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs> *
__cdecl MakeTDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
                  (TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_> @ 146b954d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFTranslationPickerTextItem___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::
    STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>
              ((STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *)(local_38 + 0x10)
             ,(STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_> @ 146b95680

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_> @ 146b95730

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
* __cdecl MakeTDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
                    (TSlateDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STranslationPickerEditWidget *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x418);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSTranslationPickerEditWidget___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x408);
    STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::
    STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>
              ((STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&STranslationPickerEditWidget::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &STranslationPickerEditWidget::_vftable__for__SBorder__;
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<STranslationPickerEditWidget,1>::TSharedRef<STranslationPickerEditWidget,1>
            ((TSharedRef<STranslationPickerEditWidget,1> *)(local_48 + 0x10),
             (STranslationPickerEditWidget *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (STranslationPickerEditWidget *)local_48._16_8_;
    local_48._0_8_ = (STranslationPickerEditWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (STranslationPickerEditWidget *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x408);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs> @ 146b95910

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs> @ 146b959c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs> @ 146b95a70

TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewObject<UTranslationPickerSettings> @ 146b95b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTranslationPickerSettings * __cdecl NewObject<UTranslationPickerSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UTranslationPickerSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UTranslationPickerSettings::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UTranslationPickerSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UTranslationUnit> @ 146b95bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTranslationUnit * __cdecl NewObject<UTranslationUnit>(UObject *param_1)

{
  UClass *pUVar1;
  UTranslationUnit *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UTranslationUnit::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UTranslationUnit *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// `vcall'{152,{flat}}'_}' @ 146b9b5e4

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct FTranslationPickerTextItem,1>
   >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146b9b5e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vector_deleting_destructor'`adjustor{680}' @ 146b9b5f4

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<struct
   FTranslationPickerTextItem,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int)
   __ptr64 */

void * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146b9b608

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   FTranslationPickerTextItem,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146b9b618

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl STranslationPickerEditWidget::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STranslationPickerEditWidget::_vector_deleting_destructor__adjustor_8__
          (STranslationPickerEditWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STranslationPickerEditWidget *)&this[-1].Item.SharedReferenceCount,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146b9b630

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FTranslationPickerTextItem,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<FTranslationPickerTextItem,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9b660

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTranslationPickerTextItem,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<FTranslationPickerTextItem,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_UFTranslationPickerTextItem___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTranslationPickerTextItem,1>_>),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTranslationPickerTextItem,1>_>),FDefaultDelegateUserPolicy>
            *)&this->ItemsSource->ArrayChangedDelegate,
           (FDelegateHandle)(this->ArrayChangedHandle).ID);
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9b720

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTranslationPickerTextItem,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<FTranslationPickerTextItem,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFTranslationPickerTextItem___00___ItemsSource_Slate_UE__6B_
  ;
  TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTranslationPickerTextItem,1>_>),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTranslationPickerTextItem,1>_>),FDefaultDelegateUserPolicy>
            *)&((this->ItemsSource).Object)->ArrayChangedDelegate,
           (FDelegateHandle)(this->ArrayChangedHandle).ID);
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9b7a0

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9b7d0

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9b800

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,enum_ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9b830

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTranslationPickerTextItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTranslationPickerTextItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9b860

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9b890

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<FTranslationPickerTextItem,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9b8f0

void * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9b950

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`STranslationPickerEditWindow::Construct'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9b980

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTranslationPickerTextItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTranslationPickerTextItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTranslationPickerTextItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTranslationPickerTextItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9b9b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTranslationPickerTextItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTranslationPickerTextItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTranslationPickerTextItem,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTranslationPickerTextItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9b9e0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9ba40

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9baa0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STranslationWidgetPicker_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9bb00

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STranslationPickerEditWidget,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STranslationPickerEditWidget,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9bb60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STranslationPickerEditWindow,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STranslationPickerEditWindow,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9bbc0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STranslationPickerEditWindow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STranslationPickerEditWindow,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9bc20

void * __thiscall
TBaseSPMethodDelegateInstance<0,STranslationPickerEditWindow,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9bc80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STranslationPickerEditWindow,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STranslationPickerEditWindow,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9bce0

void * __thiscall
TBaseSPMethodDelegateInstance<0,STranslationPickerEditWindow,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9bd40

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STranslationPickerFloatingWindow,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STranslationPickerFloatingWindow,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9bda0

void * __thiscall
TBaseSPMethodDelegateInstance<0,STranslationWidgetPicker,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9be00

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9be30

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,enum_ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9be60

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9be90

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9bec0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,enum_ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9bef0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTranslationPickerTextItem,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTranslationPickerTextItem,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9bf20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTranslationPickerTextItem,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FTranslationPickerTextItem,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9bf60

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9bfa0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9bfe0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FTranslationPickerTextItem,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FTranslationPickerTextItem,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c020

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTranslationPickerEditInputProcessor,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FTranslationPickerEditInputProcessor,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c060

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTranslationPickerInputProcessor,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FTranslationPickerInputProcessor,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c0a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STranslationPickerEditWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STranslationPickerEditWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x418);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c0e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STranslationPickerEditWindow,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STranslationPickerEditWindow,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x338);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c120

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STranslationPickerFloatingWindow,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STranslationPickerFloatingWindow,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x338);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c160

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STranslationPickerOverlay,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STranslationPickerOverlay,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c1a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c1e0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FInternationalizationArchive,SharedPointerInternals::DefaultDeleter<FInternationalizationArchive>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FInternationalizationArchive,SharedPointerInternals::DefaultDeleter<FInternationalizationArchive>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c220

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FInternationalizationManifest,SharedPointerInternals::DefaultDeleter<FInternationalizationManifest>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FInternationalizationManifest,SharedPointerInternals::DefaultDeleter<FInternationalizationManifest>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c260

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTranslationDataManager,SharedPointerInternals::DefaultDeleter<FTranslationDataManager>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTranslationDataManager,SharedPointerInternals::DefaultDeleter<FTranslationDataManager>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c2a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTranslationPickerSettingsManager,SharedPointerInternals::DefaultDeleter<FTranslationPickerSettingsManager>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTranslationPickerSettingsManager,SharedPointerInternals::DefaultDeleter<FTranslationPickerSettingsManager>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c2e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUploadLocalizationTargetFile,SharedPointerInternals::DefaultDeleter<FUploadLocalizationTargetFile>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FUploadLocalizationTargetFile,SharedPointerInternals::DefaultDeleter<FUploadLocalizationTargetFile>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c320

void * __thiscall
TTableViewMetadata<TSharedPtr<FTranslationPickerTextItem,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<FTranslationPickerTextItem,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c390

void * __thiscall
FPortableObjectEntry::_scalar_deleting_destructor_(FPortableObjectEntry *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->UnknownElements).AllocatorInstance.Data,
             (this->UnknownElements).ArrayNum);
  pFVar1 = (this->UnknownElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>((FString *)(this->Flags).AllocatorInstance.Data,(this->Flags).ArrayNum)
  ;
  pFVar1 = (this->Flags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ReferenceComments).AllocatorInstance.Data,
             (this->ReferenceComments).ArrayNum);
  pFVar1 = (this->ReferenceComments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->TranslatorComments).AllocatorInstance.Data,
             (this->TranslatorComments).ArrayNum);
  pFVar1 = (this->TranslatorComments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ExtractedComments).AllocatorInstance.Data,
             (this->ExtractedComments).ArrayNum);
  pFVar1 = (this->ExtractedComments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->MsgStr).AllocatorInstance.Data,(this->MsgStr).ArrayNum);
  pFVar1 = (this->MsgStr).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c4a0

void * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::FSlateAccessibleListView::
_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c4e0

void * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c520

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void * __thiscall
FTranslationDataManager::_scalar_deleting_destructor_(FTranslationDataManager *this,uint param_1)

{
  ~FTranslationDataManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c560

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FTranslationPickerEditInputProcessor::_scalar_deleting_destructor_
          (FTranslationPickerEditInputProcessor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IInputProcessor__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FTranslationPickerInputProcessor::_scalar_deleting_destructor_
          (FTranslationPickerInputProcessor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IInputProcessor__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FTranslationPickerTextItem::_scalar_deleting_destructor_
          (FTranslationPickerTextItem *this,uint param_1)

{
  ~FTranslationPickerTextItem(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c620

void * __thiscall
FUploadLocalizationTargetFile::_scalar_deleting_destructor_
          (FUploadLocalizationTargetFile *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  ITextData *pIVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  pIVar3 = (this->OutErrorText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pFVar4 = (this->InRelativeInputFilePathAndName).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->InLocale).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7ILocalizationServiceOperation__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
STranslationPickerEditWidget::_scalar_deleting_destructor_
          (STranslationPickerEditWidget *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Item).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::
  ~STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>
            ((STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c720

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
STranslationPickerEditWindow::_scalar_deleting_destructor_
          (STranslationPickerEditWindow *this,uint param_1)

{
  ~STranslationPickerEditWindow(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c780

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
STranslationPickerFloatingWindow::_scalar_deleting_destructor_
          (STranslationPickerFloatingWindow *this,uint param_1)

{
  ~STranslationPickerFloatingWindow(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c7e0

void * __thiscall
STranslationPickerOverlay::_scalar_deleting_destructor_
          (STranslationPickerOverlay *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c840

void * __thiscall
UTranslationPickerSettings::_scalar_deleting_destructor_
          (UTranslationPickerSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UTranslationPickerSettings__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146b9c8a0

void * __thiscall
UTranslationUnit::_scalar_deleting_destructor_(UTranslationUnit *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UTranslationUnit__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->TranslationUnitPropertyChangedEvent).field_0x8,
             *(int *)&(this->TranslationUnitPropertyChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->TranslationUnitPropertyChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TranslationUnitPropertyChangedEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->KeyMetaDataObject).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->LocresPath).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TranslationBeforeImport).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FTranslationContextInfo,int>
            ((FTranslationContextInfo *)(this->Contexts).AllocatorInstance.Data,
             (this->Contexts).ArrayNum);
  pFVar2 = (this->Contexts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Translation).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Source).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Key).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Namespace).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// ClosePickerWindow @ 146b9d490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TranslationPickerManager::ClosePickerWindow(void)

{
  code *pcVar1;
  FSlateApplication *pFVar2;
  TSharedRef<SWindow,1> *pTVar3;
  TSharedRef<SWindow,1> local_18;
  
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar2 = FSlateApplication::Get();
    pcVar1 = *(code **)(*(longlong *)pFVar2 + 0x140);
    pTVar3 = TSharedPtr<SWindow,1>::ToSharedRef(&PickerWindow,&local_18);
    (*pcVar1)(pFVar2,pTVar3);
  }
  ResetPickerWindow();
  return;
}

// EmptyLinkFunctionForGeneratedCodeTranslationEditor_init @ 146ba9600

void __cdecl EmptyLinkFunctionForGeneratedCodeTranslationEditor_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTranslationPickerEditWindow @ 146ba9610

void __cdecl EmptyLinkFunctionForGeneratedCodeTranslationPickerEditWindow(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTranslationUnit @ 146ba9620

void __cdecl EmptyLinkFunctionForGeneratedCodeTranslationUnit(void)

{
  return;
}

// OpenPickerWindow @ 146bb8060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl TranslationPickerManager::OpenPickerWindow(void)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  STranslationPickerOverlay *pSVar7;
  FSharedReferencer<1> FVar8;
  UEngine *pUVar9;
  SWindow *pSVar10;
  STranslationPickerFloatingWindow *pSVar11;
  TSharedPtr<STranslationPickerFloatingWindow,1> TVar12;
  bool bVar13;
  undefined1 uVar14;
  char cVar15;
  byte bVar16;
  atomic<int> aVar17;
  TSharedRef<FGlobalTabmanager,1> *pTVar18;
  FSlateApplication *pFVar19;
  FDeprecateVector2DParameter *pFVar20;
  FArguments *pFVar21;
  TSharedRef<SWindow,1> *pTVar22;
  FSlateBaseNamedArgs *pFVar23;
  UClass *pUVar24;
  FScopedWidgetSlotArguments *pFVar25;
  FSharedReferencer<1> FVar26;
  TReferenceControllerBase<1> *pTVar27;
  undefined1 auStackY_648 [32];
  T0RequiredArgs local_618;
  T0RequiredArgs local_617 [15];
  TSharedRef<SWindow,1> local_608;
  FLLMScope local_5f8;
  FLLMScope local_5f4;
  STranslationPickerOverlay *local_5f0;
  FSharedReferencer<1> local_5e8;
  TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs> local_5e0;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  SWindow *local_5c0;
  TReferenceControllerBase<1> *pTStack_5b8;
  TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs> local_5b0;
  undefined8 local_598;
  FSharedReferencer<1> FStack_590;
  FName local_588;
  FMemScope local_580;
  FName local_578;
  FMemScope local_570;
  TSharedPtr<STranslationPickerFloatingWindow,1> local_568;
  undefined8 local_558;
  FSharedReferencer<1> local_550;
  TSharedPtr<SWindow,1> local_548;
  TSharedRef<SWidget,1> local_538;
  undefined1 local_528 [16];
  TSharedRef<SWindow,1> local_518;
  TSharedRef<SWindow,1> local_508;
  SWindow *local_4f8;
  TReferenceControllerBase<1> *pTStack_4f0;
  undefined1 local_4e8 [8];
  TReferenceControllerBase<1> *local_4e0;
  TSharedRef<SWindow,1> local_4d8;
  FArguments local_4c8;
  FSlateBaseNamedArgs local_2c0;
  FScopedWidgetSlotArguments local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_648;
  if (((FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) ||
      (PickerWindow.Object != (SWindow *)0x0)) ||
     (PickerWindowWidget.Object != (STranslationPickerFloatingWindow *)0x0)) {
    return false;
  }
  pTVar18 = FGlobalTabmanager::Get();
  FGlobalTabmanager::GetRootWindow(pTVar18->Object,&local_548);
  SWindow::MakeCursorDecorator(&local_608);
  SWindow::SetSizingRule(local_608.Object,FixedSize);
  local_5c8 = 0x43fa0000;
  uStack_5c4 = 0x43fa0000;
  SWindow::Resize(local_608.Object,(FDeprecateVector2DParameter)0x43fa000043fa0000);
  pSVar10 = local_608.Object;
  pFVar19 = FSlateApplication::Get();
  pFVar20 = (FDeprecateVector2DParameter *)
            (**(code **)(*(longlong *)pFVar19 + 0x68))(pFVar19,local_528);
  SWindow::MoveWindowTo(pSVar10,*pFVar20);
  FStack_590.ReferenceController = local_608.SharedReferenceCount.ReferenceController;
  if (local_608.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  PickerWindow.Object = local_608.Object;
  local_598 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&PickerWindow.SharedReferenceCount,&FStack_590);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_590.ReferenceController);
  pSVar10 = local_608.Object;
  pFVar21 = STranslationPickerFloatingWindow::FArguments::FArguments(&local_4c8);
  FVar8.ReferenceController = local_608.SharedReferenceCount.ReferenceController;
  if (local_608.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_608.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_608.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_608.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_608.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_5c0 = (pFVar21->_ParentWindow).Object;
  pTStack_5b8 = (pFVar21->_ParentWindow).WeakReferenceCount.ReferenceController;
  (pFVar21->_ParentWindow).Object = local_608.Object;
  (pFVar21->_ParentWindow).WeakReferenceCount.ReferenceController =
       local_608.SharedReferenceCount.ReferenceController;
  if (pTStack_5b8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTStack_5b8->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTStack_5b8->_padding_ + 8))(pTStack_5b8,1);
    }
  }
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar8.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((FVar8.ReferenceController)->_padding_ + 8))(FVar8.ReferenceController,1);
    }
  }
  FLLMScope::FLLMScope(&local_5f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_588 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_580,&local_588,true);
  TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs>
            (&local_5e0,"STranslationPickerFloatingWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerWidget.cpp"
             ,0x9e,&local_618);
  FMemScope::~FMemScope(&local_580);
  FLLMScope::~FLLMScope(&local_5f8);
  FVar8.ReferenceController = local_5e0._Widget.SharedReferenceCount.ReferenceController;
  pSVar11 = local_5e0._Widget.Object;
  local_568.SharedReferenceCount.ReferenceController =
       local_5e0._Widget.SharedReferenceCount.ReferenceController;
  local_568.Object = local_5e0._Widget.Object;
  TVar12 = local_568;
  if (local_5e0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5e0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5e0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_568 = PickerWindowWidget;
  FVar26 = PickerWindowWidget.SharedReferenceCount.ReferenceController;
  PickerWindowWidget = TVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar26.ReferenceController);
  if ((local_5e0._Widget.Object == (STranslationPickerFloatingWindow *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    uVar14 = (*pcVar6)();
    return (bool)uVar14;
  }
  SWidget::SWidgetConstruct((SWidget *)local_5e0._Widget.Object,(FSlateBaseNamedArgs *)pFVar21);
  STranslationPickerFloatingWindow::Construct(local_5e0._Widget.Object,pFVar21);
  if ((local_5e0._Widget.Object == (STranslationPickerFloatingWindow *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    uVar14 = (*pcVar6)();
    return (bool)uVar14;
  }
  if (((local_5e0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar15 = (**(code **)((local_5e0._Widget.Object)->_padding_ + 0x228))(local_5e0._Widget.Object);
    bVar16 = 0;
    if (cVar15 != '\0') goto LAB_146bb8353;
  }
  else {
LAB_146bb8353:
    bVar16 = 0x20;
  }
  *(byte *)&(local_5e0._Widget.Object)->_padding_ =
       (byte)(local_5e0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_5e0._Widget.Object)->_padding_ =
       (byte)(local_5e0._Widget.Object)->_padding_ | bVar16;
  pbVar2 = (byte *)((longlong)&(local_5e0._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  local_5e0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_5e0._Widget.Object = (STranslationPickerFloatingWindow *)0x0;
  if ((pSVar11 == (STranslationPickerFloatingWindow *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    uVar14 = (*pcVar6)();
    return (bool)uVar14;
  }
  local_538.Object = (SWidget *)pSVar11;
  local_538.SharedReferenceCount.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SWindow::SetContent(pSVar10,&local_538);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_4c8._ParentWindow.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_4c8._ParentWindow.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar3 == (atomic<int>)0x1) &&
       (local_4c8._ParentWindow.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)((local_4c8._ParentWindow.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_4c8._ParentWindow.WeakReferenceCount.ReferenceController,1);
    }
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4c8);
  if (local_548.Object == (SWindow *)0x0) {
    pFVar19 = FSlateApplication::Get();
    local_4f8 = local_608.Object;
    pTStack_4f0 = local_608.SharedReferenceCount.ReferenceController;
    pcVar6 = *(code **)(*(longlong *)pFVar19 + 0x10);
    if (local_608.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar6)(pFVar19,local_4e8);
    local_508.SharedReferenceCount.ReferenceController = local_4e0;
  }
  else {
    pFVar19 = FSlateApplication::Get();
    pTVar22 = TSharedPtr<SWindow,1>::ToSharedRef(&local_548,&local_4d8);
    local_518.Object = local_608.Object;
    local_518.SharedReferenceCount.ReferenceController =
         local_608.SharedReferenceCount.ReferenceController;
    if (local_608.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::AddWindowAsNativeChild(pFVar19,&local_508,&local_518,pTVar22,true);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_508.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_608.SharedReferenceCount.ReferenceController);
  if (MainWindowOverlay.Object != (STranslationPickerOverlay *)0x0) goto LAB_146bb86ac;
  pFVar23 = (FSlateBaseNamedArgs *)
            STranslationPickerOverlay::FArguments::FArguments((FArguments *)&local_2c0);
  FLLMScope::FLLMScope(&local_5f4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_578 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_570,&local_578,true);
  TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs>
            (&local_5b0,"STranslationPickerOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerWidget.cpp"
             ,0xae,local_617);
  FMemScope::~FMemScope(&local_570);
  FLLMScope::~FLLMScope(&local_5f4);
  pSVar7 = local_5b0._Widget.Object;
  if ((local_5b0._Widget.Object == (STranslationPickerOverlay *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    uVar14 = (*pcVar6)();
    return (bool)uVar14;
  }
  SWidget::SWidgetConstruct((SWidget *)local_5b0._Widget.Object,pFVar23);
  if ((local_5b0._Widget.Object == (STranslationPickerOverlay *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    uVar14 = (*pcVar6)();
    return (bool)uVar14;
  }
  if (((local_5b0._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar15 = (**(code **)(*(longlong *)local_5b0._Widget.Object + 0x228))(local_5b0._Widget.Object);
    bVar16 = 0;
    if (cVar15 != '\0') goto LAB_146bb85b9;
  }
  else {
LAB_146bb85b9:
    bVar16 = 0x20;
  }
  FVar8.ReferenceController = local_5b0._Widget.SharedReferenceCount.ReferenceController;
  (local_5b0._Widget.Object)->field_0x30 = (local_5b0._Widget.Object)->field_0x30 & 0xdf;
  (local_5b0._Widget.Object)->field_0x30 = (local_5b0._Widget.Object)->field_0x30 | bVar16;
  (local_5b0._Widget.Object)->field_0x31 = (local_5b0._Widget.Object)->field_0x31 | 4;
  local_5b0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_5b0._Widget.Object = (STranslationPickerOverlay *)0x0;
  if ((pSVar7 == (STranslationPickerOverlay *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    uVar14 = (*pcVar6)();
    return (bool)uVar14;
  }
  local_550.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  MainWindowOverlay.Object = pSVar7;
  local_558 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&MainWindowOverlay.SharedReferenceCount,&local_550);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_550.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_2c0);
  pUVar9 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar24 = Z_Construct_UClass_UGameEngine_NoRegister();
    iVar4 = (int)pUVar24->_padding_;
    if ((iVar4 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar24->_padding_)) {
      pTVar5 = (TReferenceControllerBase<1> *)pUVar9[1]._padding_;
      pTVar27 = pTVar5;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar5->SharedReferenceCount;
        do {
          pTVar27 = (TReferenceControllerBase<1> *)0x0;
          if (aVar3 == (atomic<int>)0x0) goto LAB_146bb86a4;
          LOCK();
          aVar17 = pTVar5->SharedReferenceCount;
          bVar13 = aVar3 == aVar17;
          if (bVar13) {
            pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar17 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar17;
        } while (!bVar13);
        pTVar27 = pTVar5;
        if ((SWindow *)pUVar9[1]._padding_ != (SWindow *)0x0) {
          pFVar25 = SWindow::AddOverlaySlot((SWindow *)pUVar9[1]._padding_,&local_c8,-1);
          if ((MainWindowOverlay.Object == (STranslationPickerOverlay *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            uVar14 = (*pcVar6)();
            return (bool)uVar14;
          }
          FVar8.ReferenceController = MainWindowOverlay.SharedReferenceCount.ReferenceController;
          pSVar7 = MainWindowOverlay.Object;
          if (MainWindowOverlay.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (MainWindowOverlay.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(MainWindowOverlay.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pSVar7 == (STranslationPickerOverlay *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            uVar14 = (*pcVar6)();
            return (bool)uVar14;
          }
          local_5f0 = pSVar7;
          local_5e8.ReferenceController = FVar8.ReferenceController;
          if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            (FVar8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((STranslationPickerOverlay **)&pFVar25->_padding_ != &local_5f0) {
            pFVar25->_padding_ = (longlong)pSVar7;
            local_5f0 = (STranslationPickerOverlay *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)&pFVar25->_padding_,&local_5e8);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_5e8.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
          TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::
          ~FScopedWidgetSlotArguments(&local_c8);
        }
      }
LAB_146bb86a4:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
    }
  }
LAB_146bb86ac:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_548.SharedReferenceCount.ReferenceController);
  return true;
}

// RemoveOverlay @ 146bbcad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl TranslationPickerManager::RemoveOverlay(void)

{
  int iVar1;
  SWindow *this;
  code *pcVar2;
  atomic<int> aVar3;
  STranslationPickerOverlay *pSVar4;
  FSharedReferencer<1> FVar5;
  UEngine *pUVar6;
  atomic<int> aVar7;
  UClass *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  TSharedRef<SWidget,1> local_28;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  pUVar6 = GEngine;
  if ((MainWindowOverlay.Object != (STranslationPickerOverlay *)0x0) && (GEngine != (UEngine *)0x0))
  {
    pUVar8 = Z_Construct_UClass_UGameEngine_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) {
      pTVar9 = (TReferenceControllerBase<1> *)pUVar6[1]._padding_;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar9->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146bbcb42;
          }
          LOCK();
          aVar7 = pTVar9->SharedReferenceCount;
          bVar10 = aVar3 == aVar7;
          if (bVar10) {
            pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar7 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar7;
        } while (!bVar10);
        this = (SWindow *)pUVar6[1]._padding_;
        if (this != (SWindow *)0x0) {
          if ((MainWindowOverlay.Object == (STranslationPickerOverlay *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar10)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar5.ReferenceController = MainWindowOverlay.SharedReferenceCount.ReferenceController;
          pSVar4 = MainWindowOverlay.Object;
          if (MainWindowOverlay.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (MainWindowOverlay.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(MainWindowOverlay.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pSVar4 == (STranslationPickerOverlay *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar10)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_28.Object = (SWidget *)pSVar4;
          local_28.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
          if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar5.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          SWindow::RemoveOverlaySlot(this,&local_28);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_28.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar5.ReferenceController);
          local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          MainWindowOverlay.Object = (STranslationPickerOverlay *)0x0;
          local_18 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&MainWindowOverlay.SharedReferenceCount,&local_10);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_10.ReferenceController);
        }
      }
LAB_146bbcb42:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    }
  }
  return;
}

// ResetPickerWindow @ 146bbcd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TranslationPickerManager::ResetPickerWindow(void)

{
  FSharedReferencer<1> local_10;
  
  local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  PickerWindow.Object = (SWindow *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&PickerWindow.SharedReferenceCount,&local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  PickerWindowWidget.Object = (STranslationPickerFloatingWindow *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&PickerWindowWidget.SharedReferenceCount,&local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  return;
}

// Z_Construct_UClass_UTranslationPickerSettings_NoRegister @ 146bc4d10

UClass * __cdecl Z_Construct_UClass_UTranslationPickerSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTranslationPickerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TranslationEditor",L"TranslationPickerSettings",
               &Z_Registration_Info_UClass_UTranslationPickerSettings.InnerSingleton,
               UTranslationPickerSettings::StaticRegisterNativesUTranslationPickerSettings,0x30,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"TranslationPickerSettings",
               InternalConstructor<UTranslationPickerSettings>,
               InternalVTableHelperCtorCaller<UTranslationPickerSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTranslationPickerSettings.InnerSingleton;
}

// Z_Construct_UClass_UTranslationUnit_NoRegister @ 146bc4dc0

UClass * __cdecl Z_Construct_UClass_UTranslationUnit_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTranslationUnit.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TranslationEditor",L"TranslationUnit",
               &Z_Registration_Info_UClass_UTranslationUnit.InnerSingleton,
               UTranslationUnit::StaticRegisterNativesUTranslationUnit,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTranslationUnit>,
               InternalVTableHelperCtorCaller<UTranslationUnit>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTranslationUnit.InnerSingleton;
}

// IMPLEMENT_MODULE_TranslationEditor @ 146bc4e70

void __cdecl IMPLEMENT_MODULE_TranslationEditor(void)

{
  return;
}

// MainWindowOverlay'' @ 1503df210

void __cdecl `dynamic_atexit_destructor_for_'TranslationPickerManager::MainWindowOverlay__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TranslationPickerManager::MainWindowOverlay.SharedReferenceCount.ReferenceController);
  return;
}

// PickedTexts'' @ 1503df230

void __cdecl `dynamic_atexit_destructor_for_'TranslationPickerManager::PickedTexts__(void)

{
  DestructItems<FTranslationPickerTextAndGeom,int>
            ((FTranslationPickerTextAndGeom *)
             TranslationPickerManager::PickedTexts.AllocatorInstance.Data,
             TranslationPickerManager::PickedTexts.ArrayNum);
  if (TranslationPickerManager::PickedTexts.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(TranslationPickerManager::PickedTexts.AllocatorInstance.Data);
    return;
  }
  return;
}

// PickerWindow'' @ 1503df270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `dynamic_atexit_destructor_for_'TranslationPickerManager::PickerWindow__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TranslationPickerManager::PickerWindow.SharedReferenceCount.ReferenceController);
  return;
}

// PickerWindowWidget'' @ 1503df290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `dynamic_atexit_destructor_for_'TranslationPickerManager::PickerWindowWidget__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TranslationPickerManager::PickerWindowWidget.SharedReferenceCount.ReferenceController);
  return;
}

// TranslationPickerSettingsManagerInstance'' @ 1503df2b0

void __cdecl
`dynamic_atexit_destructor_for_'FTranslationPickerSettingsManager::
TranslationPickerSettingsManagerInstance__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FTranslationPickerSettingsManager::TranslationPickerSettingsManagerInstance.
             SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'LogTranslationEditor'' @ 1503df2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTranslationEditor__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTranslationEditor);
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 1503df2f0

void __cdecl
`SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

