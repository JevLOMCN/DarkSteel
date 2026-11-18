// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraUIRenderer
// Functions: 79

// MaterialBrushMap'' @ 1413c8df0

void __cdecl `dynamic_initializer_for_'SNiagaraUISystemWidget::MaterialBrushMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SNiagaraUISystemWidget::MaterialBrushMap__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNiagaraUIRenderer'' @ 1413c8e10

void __cdecl _dynamic_initializer_for__ModuleRegistrantNiagaraUIRenderer__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NiagaraUIRenderer";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NiagaraUIRenderer",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNiagaraUIRendererModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GenerateRibbonData'' @ 1413c8e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GenerateRibbonData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GenerateRibbonData == (FThreadSafeStaticStat<FStat_STAT_GenerateRibbonData>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_GenerateRibbonData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GenerateRibbonData,*pFVar1,
               L"Generate Ribbon Data","STATGROUP_NiagaraUI","STATCAT_Advanced",L"NiagaraUI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GenerateSpriteData'' @ 1413c8ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GenerateSpriteData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GenerateSpriteData == (FThreadSafeStaticStat<FStat_STAT_GenerateSpriteData>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_GenerateSpriteData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GenerateSpriteData,*pFVar1,
               L"Generate Sprite Data","STATGROUP_NiagaraUI","STATCAT_Advanced",L"NiagaraUI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h__Script_NiagaraUIRenderer_2213417406'' @ 1413c8f80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h__Script_NiagaraUIRenderer_2213417406__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraUIRenderer",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h__Script_NiagaraUIRenderer_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h__Script_NiagaraUIRenderer_1533686295'' @ 1413c8fc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h__Script_NiagaraUIRenderer_1533686295__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraUIRenderer",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h__Script_NiagaraUIRenderer_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIComponent_h__Script_NiagaraUIRenderer_4236490105'' @ 1413c9000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIComponent_h__Script_NiagaraUIRenderer_4236490105__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraUIRenderer",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIComponent_h__Script_NiagaraUIRenderer_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_NiagaraUIRenderer'' @ 1413c9040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_NiagaraUIRenderer__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x42b396cb;
  local_res8[0].DeclarationsHash = 0x3bd0897e;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_NiagaraUIRenderer,L"/Script/NiagaraUIRenderer",
             &Z_Registration_Info_UPackage__Script_NiagaraUIRenderer,local_res8);
  return;
}

// NewProp_NewTickWhenPaused_SetBit @ 14d28db60

void __cdecl
Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics::
NewProp_NewTickWhenPaused_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused @ 14d28db70

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_AutoActivate_SetBit @ 14d28dbb0

void __cdecl
Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_AutoActivate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x208) = 1;
  return;
}

// NewProp_TickWhenPaused_SetBit @ 14d28dbc0

void __cdecl
Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_TickWhenPaused_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x209) = 1;
  return;
}

// NewProp_FakeDepthScale_SetBit @ 14d28dbd0

void __cdecl
Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_FakeDepthScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x230) = 1;
  return;
}

// NewProp_ShowDebugSystemInWorld_SetBit @ 14d28dbe0

void __cdecl
Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_ShowDebugSystemInWorld_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x238) = 1;
  return;
}

// NewProp_PassDynamicParametersFromRibbon_SetBit @ 14d28dbf0

void __cdecl
Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_PassDynamicParametersFromRibbon_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x239) = 1;
  return;
}

// NewProp_DisableWarnings_SetBit @ 14d28dc00

void __cdecl
Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_DisableWarnings_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x23a) = 1;
  return;
}

// NewProp_RestartSimulationOnPropertyChange_SetBit @ 14d28dc10

void __cdecl
Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_RestartSimulationOnPropertyChange_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x23b) = 1;
  return;
}

// Z_Construct_UClass_ANiagaraUIActor @ 14d28dce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ANiagaraUIActor(void)

{
  if (Z_Registration_Info_UClass_ANiagaraUIActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ANiagaraUIActor.OuterSingleton,
               &Z_Construct_UClass_ANiagaraUIActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ANiagaraUIActor.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraUIComponent @ 14d28e020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraUIComponent(void)

{
  if (Z_Registration_Info_UClass_UNiagaraUIComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraUIComponent.OuterSingleton,
               &Z_Construct_UClass_UNiagaraUIComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraUIComponent.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d28e080

void * __thiscall
FNiagaraUIRendererModule::_scalar_deleting_destructor_(FNiagaraUIRendererModule *this,uint param_1)

{
  *this = (FNiagaraUIRendererModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_ANiagaraUIActor_NoRegister @ 14d28e0c0

UClass * __cdecl Z_Construct_UClass_ANiagaraUIActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraUIActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraUIRenderer",L"NiagaraUIActor",
               &Z_Registration_Info_UClass_ANiagaraUIActor.InnerSingleton,
               ANiagaraUIActor::StaticRegisterNativesANiagaraUIActor,0x2c0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ANiagaraUIActor>,InternalVTableHelperCtorCaller<ANiagaraUIActor>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraUIActor.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraSystemWidget @ 14d28e180

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraSystemWidget(void)

{
  if (Z_Registration_Info_UClass_UNiagaraSystemWidget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraSystemWidget.OuterSingleton,
               &Z_Construct_UClass_UNiagaraSystemWidget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraSystemWidget.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraUIComponent_NoRegister @ 14d28e1c0

UClass * __cdecl Z_Construct_UClass_UNiagaraUIComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraUIComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraUIRenderer",L"NiagaraUIComponent",
               &Z_Registration_Info_UClass_UNiagaraUIComponent.InnerSingleton,
               UNiagaraUIComponent::StaticRegisterNativesUNiagaraUIComponent,0x810,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraUIComponent>,
               InternalVTableHelperCtorCaller<UNiagaraUIComponent>,local_res8,
               UNiagaraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraUIComponent.InnerSingleton;
}

// Z_Construct_UPackage__Script_NiagaraUIRenderer @ 14d28e280

UPackage * __cdecl Z_Construct_UPackage__Script_NiagaraUIRenderer(void)

{
  if (Z_Registration_Info_UPackage__Script_NiagaraUIRenderer.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_NiagaraUIRenderer.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_NiagaraUIRenderer.OuterSingleton;
}

// NewProp_Reset_SetBit @ 14d28e2c0

void __cdecl
Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics::NewProp_Reset_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem @ 14d28e2d0

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSystemWidget_DeactivateSystem @ 14d28e310

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSystemWidget_DeactivateSystem(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSystemWidget_DeactivateSystem_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent @ 14d28e350

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial @ 14d28e390

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSystemWidget_SetColorAndOpacity @ 14d28e3d0

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSystemWidget_SetColorAndOpacity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSystemWidget_SetColorAndOpacity_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize @ 14d28e410

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial @ 14d28e450

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference @ 14d28e490

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// CastChecked<ANiagaraUIActor,AActor> @ 14d28e720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANiagaraUIActor * __cdecl CastChecked<ANiagaraUIActor,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (ANiagaraUIActor *)0x0;
    }
    pFVar3 = GetTypeName<ANiagaraUIActor>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ANiagaraUIActor::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ANiagaraUIActor *)param_1;
  }
  pFVar3 = GetTypeName<ANiagaraUIActor>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// DestructItems<FNiagaraRendererEntry,int> @ 14d28e800

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl DestructItems<FNiagaraRendererEntry,int>(FNiagaraRendererEntry *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->EmitterInstance).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<SMeshWidget::FRenderData,int> @ 14d28e840

void __cdecl DestructItems<SMeshWidget::FRenderData,int>(FRenderData *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->RenderingResourceHandle).Data.SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[2].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[-2].ReferenceController);
      if (pFVar1[-5].ReferenceController != (void *)0x0) {
        FMemory::Free(pFVar1[-5].ReferenceController);
      }
      if (pFVar1[-7].ReferenceController != (void *)0x0) {
        FMemory::Free(pFVar1[-7].ReferenceController);
      }
      pFVar1 = pFVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ForEachComponent_Internal<UNiagaraUIComponent,1,1,`AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d28f100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UNiagaraUIComponent,1,1,_AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UNiagaraUIComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = UNiagaraUIComponent::StaticClass();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14d28f223;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14d28f223:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14d28f2bd;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14d28f2bd:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14d28f3c0;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14d28f3c0:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UNiagaraUIComponent,1,1,_AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UNiagaraUIComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UNiagaraUIComponent *)0x0) {
      `AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UNiagaraUIComponent,1,0,`AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d28f630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UNiagaraUIComponent,1,0,_AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UNiagaraUIComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<UNiagaraUIComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = UNiagaraUIComponent::StaticClass();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14d28f736;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14d28f736:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d28f7bd;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14d28f7bd:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d28f8c1;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14d28f8c1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UNiagaraUIComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UNiagaraUIComponent *)0x0) {
      `AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UNiagaraUIComponent,0,1,`AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d28f940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UNiagaraUIComponent,0,1,_AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UNiagaraUIComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = UNiagaraUIComponent::StaticClass();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14d28fa33;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14d28fa33:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14d28fae0;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_14d28fae0:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14d28fbf0;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14d28fbf0:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UNiagaraUIComponent,0,1,_AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UNiagaraUIComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UNiagaraUIComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        `AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UNiagaraUIComponent,0,0,`AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d28fe80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UNiagaraUIComponent,0,0,_AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UNiagaraUIComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<UNiagaraUIComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = UNiagaraUIComponent::StaticClass();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14d28ff5e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14d28ff5e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14d28ffef;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14d28ffef:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_14d290100;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_14d290100:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UNiagaraUIComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UNiagaraUIComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        `AActor::GetComponents<UNiagaraUIComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetTypeName<ANiagaraUIActor> @ 14d2901a0

FString * __cdecl GetTypeName<ANiagaraUIActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = ANiagaraUIActor::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,``UNiagaraUIComponent::AddRibbonRendererData'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>_> @ 14d2901e0

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__UNiagaraUIComponent::AddRibbonRendererData_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:___cdecl__public:_void___cdecl_UNiagaraUIComponent::AddRibbonRendererData(SNiagaraUISystemWidget_*,TSharedRef<FNiagaraEmitterInstance_const_,1>,UNiagaraRibbonRendererProperties_*,FNiagaraUIRenderProperties_const_&,FNiagaraWidgetProperties_const_*)_::_2_::<lambda_2>::operator()(TArray<int,TSizedDefaultAllocator<32>_>_&)const_::_5_::<lambda_1>_>
          param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar4;
  iVar8 = iVar5;
  do {
    while (param_2 <= iVar5) {
LAB_14d29031a:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar8;
            iVar8 = 0;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar7 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  iVar6 = param_1[iVar7];
                  fVar10 = FNiagaraDataSetReaderFloat<float>::Get
                                     (*(FNiagaraDataSetReaderFloat<float> **)param_4.Predicate,
                                      param_1[(longlong)iVar4 + 2]);
                  fVar11 = FNiagaraDataSetReaderFloat<float>::Get
                                     (*(FNiagaraDataSetReaderFloat<float> **)param_4.Predicate,iVar6
                                     );
                  if (fVar10 < fVar11) {
                    iVar7 = iVar4;
                  }
                  iVar7 = iVar7 + 1;
                }
                iVar4 = param_1[iVar7];
                fVar10 = FNiagaraDataSetReaderFloat<float>::Get
                                   (*(FNiagaraDataSetReaderFloat<float> **)param_4.Predicate,
                                    param_1[iVar8]);
                fVar11 = FNiagaraDataSetReaderFloat<float>::Get
                                   (*(FNiagaraDataSetReaderFloat<float> **)param_4.Predicate,iVar4);
                if (fVar11 <= fVar10) break;
                iVar4 = param_1[iVar8];
                param_1[iVar8] = param_1[iVar7];
                param_1[iVar7] = iVar4;
                iVar8 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar8 + -2;
      iVar7 = iVar4;
      iVar8 = iVar5;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      iVar1 = param_1[iVar6];
      fVar10 = FNiagaraDataSetReaderFloat<float>::Get
                         (*(FNiagaraDataSetReaderFloat<float> **)param_4.Predicate,
                          param_1[(longlong)iVar5 + 2]);
      fVar11 = FNiagaraDataSetReaderFloat<float>::Get
                         (*(FNiagaraDataSetReaderFloat<float> **)param_4.Predicate,iVar1);
      if (fVar10 < fVar11) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    iVar5 = param_1[iVar6];
    fVar10 = FNiagaraDataSetReaderFloat<float>::Get
                       (*(FNiagaraDataSetReaderFloat<float> **)param_4.Predicate,param_1[iVar4]);
    fVar11 = FNiagaraDataSetReaderFloat<float>::Get
                       (*(FNiagaraDataSetReaderFloat<float> **)param_4.Predicate,iVar5);
    if (fVar11 <= fVar10) goto LAB_14d29031a;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,``UNiagaraUIComponent::AddRibbonRendererData'::__l2::<lambda_2>::operator()'::__l7::<lambda_2>_>_> @ 14d290430

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__UNiagaraUIComponent::AddRibbonRendererData_::__l2::<lambda_2>::operator()_::__l7::<lambda_2>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:___cdecl__public:_void___cdecl_UNiagaraUIComponent::AddRibbonRendererData(SNiagaraUISystemWidget_*,TSharedRef<FNiagaraEmitterInstance_const_,1>,UNiagaraRibbonRendererProperties_*,FNiagaraUIRenderProperties_const_&,FNiagaraWidgetProperties_const_*)_::_2_::<lambda_2>::operator()(TArray<int,TSizedDefaultAllocator<32>_>_&)const_::_7_::<lambda_2>_>
          param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  code *pcVar7;
  <lambda_2> *p<Var8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  <lambda_2> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,__UNiagaraUIComponent::AddRibbonRendererData_::__l2::<lambda_2>::operator()_::__l7::<lambda_2>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<int,_public:___cdecl__public:_void___cdecl_UNiagaraUIComponent::AddRibbonRendererData(SNiagaraUISystemWidget_*,TSharedRef<FNiagaraEmitterInstance_const_,1>,UNiagaraRibbonRendererProperties_*,FNiagaraUIRenderProperties_const_&,FNiagaraWidgetProperties_const_*)_::_2_::<lambda_2>::operator()(TArray<int,TSizedDefaultAllocator<32>_>_&)const_::_7_::<lambda_2>_>
              *)&local_res20);
  iVar13 = param_2 + -1;
  lVar11 = (longlong)iVar13;
  if (0 < iVar13) {
    do {
      iVar12 = *param_1;
      *param_1 = param_1[lVar11];
      param_1[lVar11] = iVar12;
      iVar12 = 0;
      if (1 < iVar13) {
        do {
          p<Var8 = local_res20;
          iVar4 = iVar12 * 2;
          iVar10 = iVar4 + 1;
          if (iVar4 + 2 < iVar13) {
            pcVar5 = *(char **)local_res20;
            iVar2 = param_1[iVar10];
            iVar3 = param_1[(longlong)iVar4 + 2];
            if (((*pcVar5 == '\0') || (*(int *)(pcVar5 + 4) < iVar3)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bIsValid && Index <= NumInstances",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                                   ,0x17f,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcVar6 = *(char **)p<Var8;
            iVar3 = *(int *)(*(longlong *)(pcVar5 + 8) + (longlong)iVar3 * 4);
            if (((*pcVar6 == '\0') || (*(int *)(pcVar6 + 4) < iVar2)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bIsValid && Index <= NumInstances",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                                   ,0x17f,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(int *)(*(longlong *)(pcVar6 + 8) + (longlong)iVar2 * 4) < iVar3) {
              iVar10 = iVar4;
            }
            iVar10 = iVar10 + 1;
          }
          p<Var8 = local_res20;
          iVar4 = param_1[iVar10];
          pcVar5 = *(char **)local_res20;
          piVar1 = param_1 + iVar12;
          iVar12 = *piVar1;
          if (((*pcVar5 == '\0') || (*(int *)(pcVar5 + 4) < iVar12)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("bIsValid && Index <= NumInstances",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                                 ,0x17f,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcVar6 = *(char **)p<Var8;
          iVar12 = *(int *)(*(longlong *)(pcVar5 + 8) + (longlong)iVar12 * 4);
          if (((*pcVar6 == '\0') || (*(int *)(pcVar6 + 4) < iVar4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("bIsValid && Index <= NumInstances",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                                 ,0x17f,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (iVar12 <= *(int *)(*(longlong *)(pcVar6 + 8) + (longlong)iVar4 * 4)) break;
          iVar12 = *piVar1;
          *piVar1 = param_1[iVar10];
          param_1[iVar10] = iVar12;
          iVar12 = iVar10;
        } while (iVar10 * 2 + 1 < iVar13);
      }
      lVar11 = lVar11 + -1;
      iVar13 = iVar13 + -1;
    } while (0 < lVar11);
  }
  return;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>_> @ 14d2906a0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar18 = iVar11;
  iVar14 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14d2907d5:
      if (iVar14 == 0) {
        iVar11 = param_2 + -1;
        lVar13 = (longlong)iVar11;
        if (0 < iVar11) {
          pTVar15 = param_1 + lVar13;
          do {
            uVar4 = *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 8);
            iVar18 = 0;
            TVar5 = param_1->_s_1;
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar15->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar4;
            uVar4 = *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar4;
            pTVar15->_s_1 = TVar5;
            *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 8) = uVar6;
            *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 0x10) = uVar7;
            *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 0x18) = uVar8;
            if (1 < iVar11) {
              do {
                iVar14 = iVar18 * 2;
                iVar10 = iVar14 + 1;
                if (iVar14 + 2 < iVar11) {
                  lVar1 = (longlong)iVar14 + 1;
                  lVar2 = (longlong)iVar14 + 2;
                  if ((param_1[lVar2]._s_1.PrevFreeIndex < param_1[lVar1]._s_1.PrevFreeIndex) ||
                     ((param_1[lVar2]._s_1.PrevFreeIndex == param_1[lVar1]._s_1.PrevFreeIndex &&
                      (*(int *)(lVar2 * 0x20 + 4 + (longlong)param_1) <
                       *(int *)(lVar1 * 0x20 + 4 + (longlong)param_1))))) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  if (bVar9) {
                    iVar10 = iVar14;
                  }
                  iVar10 = iVar10 + 1;
                }
                pTVar16 = param_1 + iVar10;
                pTVar17 = param_1 + iVar18;
                if (((pTVar16->_s_1).PrevFreeIndex <= (pTVar17->_s_1).PrevFreeIndex) &&
                   (((pTVar17->_s_1).PrevFreeIndex != (pTVar16->_s_1).PrevFreeIndex ||
                    ((pTVar16->_s_1).NextFreeIndex <= (pTVar17->_s_1).NextFreeIndex)))) break;
                uVar4 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
                TVar5 = pTVar17->_s_1;
                uVar6 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8);
                uVar7 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10);
                uVar8 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18);
                pTVar17->_s_1 = pTVar16->_s_1;
                *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8) = uVar4;
                uVar4 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
                *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10) =
                     *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
                *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18) = uVar4;
                pTVar16->_s_1 = TVar5;
                *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar6;
                *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar7;
                *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar8;
                iVar18 = iVar10;
              } while (iVar10 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar13 = lVar13 + -1;
            pTVar15 = pTVar15 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar10 = iVar14 + -1;
      iVar11 = iVar18 + -2;
      iVar18 = iVar11;
      iVar14 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      lVar13 = (longlong)iVar11 + 1;
      lVar1 = (longlong)iVar11 + 2;
      if ((param_1[lVar1]._s_1.PrevFreeIndex < param_1[lVar13]._s_1.PrevFreeIndex) ||
         ((param_1[lVar1]._s_1.PrevFreeIndex == param_1[lVar13]._s_1.PrevFreeIndex &&
          (*(int *)(lVar1 * 0x20 + 4 + (longlong)param_1) <
           *(int *)(lVar13 * 0x20 + 4 + (longlong)param_1))))) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    pTVar15 = param_1 + iVar12;
    pTVar16 = param_1 + iVar10;
    if (((pTVar15->_s_1).PrevFreeIndex <= (pTVar16->_s_1).PrevFreeIndex) &&
       (((pTVar16->_s_1).PrevFreeIndex != (pTVar15->_s_1).PrevFreeIndex ||
        ((pTVar15->_s_1).NextFreeIndex <= (pTVar16->_s_1).NextFreeIndex)))) goto LAB_14d2907d5;
    uVar4 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
    iVar11 = iVar12 * 2 + 1;
    TVar5 = pTVar16->_s_1;
    uVar6 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8);
    uVar7 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10);
    uVar8 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18);
    pTVar16->_s_1 = pTVar15->_s_1;
    *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8) = uVar4;
    uVar4 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x18);
    *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10) =
         *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
    *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18) = uVar4;
    pTVar15->_s_1 = TVar5;
    *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar6;
    *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) = uVar7;
    *(undefined8 *)((pTVar15->ElementData).Pad + 0x18) = uVar8;
    iVar10 = iVar12;
  } while( true );
}

// HeapSortInternal<FNiagaraRendererEntry,int,FIdentityFunctor,`UNiagaraUIComponent::RenderUI'::__l2::<lambda_1>_> @ 14d290910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FNiagaraRendererEntry,int,FIdentityFunctor,_UNiagaraUIComponent::RenderUI_::__l2::<lambda_1>_>
          (FNiagaraRendererEntry *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  code *pcVar1;
  FNiagaraEmitterInstance *pFVar2;
  UNiagaraRendererProperties *pUVar3;
  FNiagaraEmitterInstance *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TObjectPtr<UNiagaraEmitter>_u_0 TVar6;
  TObjectPtr<UNiagaraEmitter>_u_0 TVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  FNiagaraRendererEntry *pFVar19;
  int iVar20;
  FNiagaraRendererEntry *pFVar21;
  int iVar22;
  FNiagaraRendererEntry *pFVar23;
  int iVar24;
  
  if (param_2 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar15) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar15) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar16 = (param_2 + -2) / 2;
  iVar17 = iVar16 * 2 + 1;
  iVar22 = iVar17;
  iVar24 = iVar16;
  do {
    while (param_2 <= iVar17) {
LAB_14d290a52:
      if (iVar24 == 0) {
        iVar17 = param_2 + -1;
        lVar18 = (longlong)iVar17;
        if (0 < iVar17) {
          pFVar19 = param_1 + lVar18;
          do {
            pFVar2 = (pFVar19->EmitterInstance).Object;
            pUVar3 = param_1->RendererProperties;
            pFVar4 = (param_1->EmitterInstance).Object;
            pTVar5 = (param_1->EmitterInstance).SharedReferenceCount.ReferenceController;
            TVar6 = (param_1->Emitter).Emitter.field0_0x0;
            uVar11 = (param_1->Emitter).Version.A;
            uVar12 = (param_1->Emitter).Version.B;
            uVar13 = (param_1->Emitter).Version.C;
            uVar14 = (param_1->Emitter).Version.D;
            param_1->RendererProperties = pFVar19->RendererProperties;
            (param_1->EmitterInstance).Object = pFVar2;
            TVar7 = (pFVar19->Emitter).Emitter.field0_0x0;
            (param_1->EmitterInstance).SharedReferenceCount.ReferenceController =
                 (pFVar19->EmitterInstance).SharedReferenceCount.ReferenceController;
            (param_1->Emitter).Emitter.field0_0x0 = TVar7;
            uVar8 = (pFVar19->Emitter).Version.B;
            uVar9 = (pFVar19->Emitter).Version.C;
            uVar10 = (pFVar19->Emitter).Version.D;
            (param_1->Emitter).Version.A = (pFVar19->Emitter).Version.A;
            (param_1->Emitter).Version.B = uVar8;
            (param_1->Emitter).Version.C = uVar9;
            (param_1->Emitter).Version.D = uVar10;
            pFVar19->RendererProperties = pUVar3;
            (pFVar19->EmitterInstance).Object = pFVar4;
            (pFVar19->EmitterInstance).SharedReferenceCount.ReferenceController = pTVar5;
            (pFVar19->Emitter).Emitter.field0_0x0 = TVar6;
            (pFVar19->Emitter).Version.A = uVar11;
            (pFVar19->Emitter).Version.B = uVar12;
            (pFVar19->Emitter).Version.C = uVar13;
            (pFVar19->Emitter).Version.D = uVar14;
            iVar22 = 0;
            if (1 < iVar17) {
              do {
                iVar24 = iVar22 * 2;
                iVar16 = iVar24 + 1;
                if (iVar24 + 2 < iVar17) {
                  if ((param_1[(longlong)iVar24 + 2].RendererProperties)->SortOrderHint <
                      (param_1[iVar16].RendererProperties)->SortOrderHint) {
                    iVar16 = iVar24;
                  }
                  iVar16 = iVar16 + 1;
                }
                pFVar23 = param_1 + iVar16;
                pFVar21 = param_1 + iVar22;
                if (pFVar23->RendererProperties->SortOrderHint <=
                    pFVar21->RendererProperties->SortOrderHint) break;
                pFVar2 = (pFVar23->EmitterInstance).Object;
                pUVar3 = pFVar21->RendererProperties;
                pFVar4 = (pFVar21->EmitterInstance).Object;
                pTVar5 = (pFVar21->EmitterInstance).SharedReferenceCount.ReferenceController;
                TVar6 = (pFVar21->Emitter).Emitter.field0_0x0;
                uVar11 = (pFVar21->Emitter).Version.A;
                uVar12 = (pFVar21->Emitter).Version.B;
                uVar13 = (pFVar21->Emitter).Version.C;
                uVar14 = (pFVar21->Emitter).Version.D;
                pFVar21->RendererProperties = pFVar23->RendererProperties;
                (pFVar21->EmitterInstance).Object = pFVar2;
                TVar7 = (pFVar23->Emitter).Emitter.field0_0x0;
                (pFVar21->EmitterInstance).SharedReferenceCount.ReferenceController =
                     (pFVar23->EmitterInstance).SharedReferenceCount.ReferenceController;
                (pFVar21->Emitter).Emitter.field0_0x0 = TVar7;
                uVar8 = (pFVar23->Emitter).Version.B;
                uVar9 = (pFVar23->Emitter).Version.C;
                uVar10 = (pFVar23->Emitter).Version.D;
                (pFVar21->Emitter).Version.A = (pFVar23->Emitter).Version.A;
                (pFVar21->Emitter).Version.B = uVar8;
                (pFVar21->Emitter).Version.C = uVar9;
                (pFVar21->Emitter).Version.D = uVar10;
                pFVar23->RendererProperties = pUVar3;
                (pFVar23->EmitterInstance).Object = pFVar4;
                (pFVar23->EmitterInstance).SharedReferenceCount.ReferenceController = pTVar5;
                (pFVar23->Emitter).Emitter.field0_0x0 = TVar6;
                (pFVar23->Emitter).Version.A = uVar11;
                (pFVar23->Emitter).Version.B = uVar12;
                (pFVar23->Emitter).Version.C = uVar13;
                (pFVar23->Emitter).Version.D = uVar14;
                iVar22 = iVar16;
              } while (iVar16 * 2 + 1 < iVar17);
            }
            iVar17 = iVar17 + -1;
            lVar18 = lVar18 + -1;
            pFVar19 = pFVar19 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar16 = iVar24 + -1;
      iVar17 = iVar22 + -2;
      iVar22 = iVar17;
      iVar24 = iVar16;
    }
    iVar17 = iVar16 * 2;
    iVar20 = iVar17 + 1;
    if (iVar17 + 2 < param_2) {
      if ((param_1[(longlong)iVar17 + 2].RendererProperties)->SortOrderHint <
          (param_1[iVar20].RendererProperties)->SortOrderHint) {
        iVar20 = iVar17;
      }
      iVar20 = iVar20 + 1;
    }
    pFVar19 = param_1 + iVar20;
    pFVar23 = param_1 + iVar16;
    if (pFVar19->RendererProperties->SortOrderHint <= pFVar23->RendererProperties->SortOrderHint)
    goto LAB_14d290a52;
    pFVar2 = (pFVar19->EmitterInstance).Object;
    iVar17 = iVar20 * 2 + 1;
    pUVar3 = pFVar23->RendererProperties;
    pFVar4 = (pFVar23->EmitterInstance).Object;
    pTVar5 = (pFVar23->EmitterInstance).SharedReferenceCount.ReferenceController;
    TVar6 = (pFVar23->Emitter).Emitter.field0_0x0;
    uVar11 = (pFVar23->Emitter).Version.A;
    uVar12 = (pFVar23->Emitter).Version.B;
    uVar13 = (pFVar23->Emitter).Version.C;
    uVar14 = (pFVar23->Emitter).Version.D;
    pFVar23->RendererProperties = pFVar19->RendererProperties;
    (pFVar23->EmitterInstance).Object = pFVar2;
    TVar7 = (pFVar19->Emitter).Emitter.field0_0x0;
    (pFVar23->EmitterInstance).SharedReferenceCount.ReferenceController =
         (pFVar19->EmitterInstance).SharedReferenceCount.ReferenceController;
    (pFVar23->Emitter).Emitter.field0_0x0 = TVar7;
    uVar8 = (pFVar19->Emitter).Version.B;
    uVar9 = (pFVar19->Emitter).Version.C;
    uVar10 = (pFVar19->Emitter).Version.D;
    (pFVar23->Emitter).Version.A = (pFVar19->Emitter).Version.A;
    (pFVar23->Emitter).Version.B = uVar8;
    (pFVar23->Emitter).Version.C = uVar9;
    (pFVar23->Emitter).Version.D = uVar10;
    pFVar19->RendererProperties = pUVar3;
    (pFVar19->EmitterInstance).Object = pFVar4;
    (pFVar19->EmitterInstance).SharedReferenceCount.ReferenceController = pTVar5;
    (pFVar19->Emitter).Emitter.field0_0x0 = TVar6;
    (pFVar19->Emitter).Version.A = uVar11;
    (pFVar19->Emitter).Version.B = uVar12;
    (pFVar19->Emitter).Version.C = uVar13;
    (pFVar19->Emitter).Version.D = uVar14;
    iVar16 = iVar20;
  } while( true );
}

// HeapifyInternal<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,``UNiagaraUIComponent::AddRibbonRendererData'::__l2::<lambda_2>::operator()'::__l7::<lambda_2>_>_>_> @ 14d290ba0

void __cdecl
AlgoImpl::
HeapifyInternal<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,__UNiagaraUIComponent::AddRibbonRendererData_::__l2::<lambda_2>::operator()_::__l7::<lambda_2>_>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<int,_public:___cdecl__public:_void___cdecl_UNiagaraUIComponent::AddRibbonRendererData(SNiagaraUISystemWidget_*,TSharedRef<FNiagaraEmitterInstance_const_,1>,UNiagaraRibbonRendererProperties_*,FNiagaraUIRenderProperties_const_&,FNiagaraWidgetProperties_const_*)_::_2_::<lambda_2>::operator()(TArray<int,TSizedDefaultAllocator<32>_>_&)const_::_7_::<lambda_2>_>_>
          param_4)

{
  int iVar1;
  int iVar2;
  <lambda_2> *p<Var3;
  char *pcVar4;
  char *pcVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar11 = iVar9 * 2 + 1;
  iVar7 = iVar11;
  iVar10 = iVar9;
  do {
    while (param_2 <= iVar11) {
LAB_14d290d8b:
      if (iVar10 == 0) {
        return;
      }
      iVar9 = iVar10 + -1;
      iVar11 = iVar7 + -2;
      iVar7 = iVar11;
      iVar10 = iVar9;
    }
    iVar11 = iVar9 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      p<Var3 = (param_4.Predicate)->Predicate;
      pcVar4 = *(char **)p<Var3;
      iVar1 = param_1[iVar12];
      iVar2 = param_1[(longlong)iVar11 + 2];
      if (((*pcVar4 == '\0') || (*(int *)(pcVar4 + 4) < iVar2)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid && Index <= NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                             ,0x17f,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar5 = *(char **)p<Var3;
      iVar2 = *(int *)(*(longlong *)(pcVar4 + 8) + (longlong)iVar2 * 4);
      if (((*pcVar5 == '\0') || (*(int *)(pcVar5 + 4) < iVar1)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid && Index <= NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                             ,0x17f,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(int *)(*(longlong *)(pcVar5 + 8) + (longlong)iVar1 * 4) < iVar2) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    p<Var3 = (param_4.Predicate)->Predicate;
    pcVar4 = *(char **)p<Var3;
    iVar11 = param_1[iVar9];
    iVar1 = param_1[iVar12];
    if (((*pcVar4 == '\0') || (*(int *)(pcVar4 + 4) < iVar11)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid && Index <= NumInstances",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                           ,0x17f,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar5 = *(char **)p<Var3;
    iVar11 = *(int *)(*(longlong *)(pcVar4 + 8) + (longlong)iVar11 * 4);
    if (((*pcVar5 == '\0') || (*(int *)(pcVar5 + 4) < iVar1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid && Index <= NumInstances",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                           ,0x17f,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (iVar11 <= *(int *)(*(longlong *)(pcVar5 + 8) + (longlong)iVar1 * 4)) goto LAB_14d290d8b;
    iVar11 = param_1[iVar9];
    param_1[iVar9] = param_1[iVar12];
    param_1[iVar12] = iVar11;
    iVar11 = iVar12 * 2 + 1;
    iVar9 = iVar12;
  } while( true );
}

// InternalConstructor<ANiagaraUIActor> @ 14d290dd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ANiagaraUIActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  UClass *pUVar2;
  USceneComponent *pUVar3;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this);
    this->_padding_ = (longlong)&___7ANiagaraUIActor__6B_;
    if ((this->RootComponent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
      FVar1 = USceneComponent::GetDefaultSceneRootVariableName();
      FVar1 = *(FName *)FVar1;
      pUVar2 = Z_Construct_UClass_USceneComponent_NoRegister();
      pUVar3 = (USceneComponent *)
               UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar2,pUVar2,true,false);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (USceneComponent *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->RootComponent).field0_0x0.DebugPtr = pUVar3;
    }
  }
  return;
}

// InternalConstructor<UNiagaraSystemWidget> @ 14d290e60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UNiagaraSystemWidget>(FObjectInitializer *param_1)

{
  UWidget *this;
  FLinearColor FVar1;
  
  this = (UWidget *)param_1->Obj;
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UNiagaraSystemWidget::_vftable__for__UVisual__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UNiagaraSystemWidget::_vftable__for__INotifyFieldValueChanged__;
    *(undefined4 *)&this[1].Slot.field0_0x0 = 0;
    *(undefined4 *)((longlong)&this[1].Slot.field0_0x0 + 4) = 0x80;
    *(undefined4 *)&this[1].bIsEnabledDelegate = 0xffffffff;
    *(undefined4 *)&this[1].bIsEnabledDelegate.field_0x4 = 0;
    *(undefined8 *)&this[1].bIsEnabledDelegate.field_0x10 = 0;
    *(undefined4 *)&this[1].ToolTipTextDelegate = 0;
    *(undefined8 *)&this[1].ToolTipTextDelegate.field_0x10 = 0x4070000000000000;
    this[1].ToolTipText.TextData.Reference = (ITextData *)0x4070000000000000;
    *(undefined2 *)&this[1].ToolTipTextDelegate.field_0x8 = 1;
    FVar1 = FLinearColor::White;
    this->bIsVolatile = '\x01';
    *(undefined1 *)&this[1].ToolTipWidgetDelegate = 0;
    *(FLinearColor_u_0 *)&this[1].ToolTipText.Flags = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
    *(undefined8 *)&this[1].ToolTipWidgetDelegate.field_0x10 = 0;
    *(undefined8 *)&this[1].VisibilityDelegate = 0;
    *(undefined8 *)&this[1].VisibilityDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].VisibilityDelegate.field_0x10 = 0;
    *(undefined4 *)&this[1].ToolTipWidgetDelegate.field_0x4 = 0x447a0000;
    *(undefined4 *)&this[1].ToolTipWidgetDelegate.field_0x8 = 0x1000000;
  }
  return;
}

// InternalConstructor<UNiagaraUIComponent> @ 14d290f60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl InternalConstructor<UNiagaraUIComponent>(FObjectInitializer *param_1)

{
  UNiagaraComponent *this;
  
  this = (UNiagaraComponent *)param_1->Obj;
  if (this != (UNiagaraComponent *)0x0) {
    UNiagaraComponent::UNiagaraComponent(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UNiagaraUIComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UNiagaraUIComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UNiagaraUIComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UNiagaraUIComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ = (longlong)&UNiagaraUIComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UNiagaraUIComponent::_vftable__for__IPhysicsComponent__;
  }
  return;
}

// InternalVTableHelperCtorCaller<ANiagaraUIActor> @ 14d290fe0

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

UObject * __cdecl InternalVTableHelperCtorCaller<ANiagaraUIActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ANiagaraUIActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ANiagaraUIActor__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraSystemWidget> @ 14d291090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraSystemWidget>(FVTableHelper *param_1)

{
  FLinearColor FVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UWidget *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNiagaraSystemWidget::GetPrivateStaticClass();
  this = (UWidget *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UNiagaraSystemWidget::_vftable__for__UVisual__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UNiagaraSystemWidget::_vftable__for__INotifyFieldValueChanged__;
    *(undefined4 *)&this[1].Slot.field0_0x0 = 0;
    *(undefined4 *)((longlong)&this[1].Slot.field0_0x0 + 4) = 0x80;
    *(undefined4 *)&this[1].bIsEnabledDelegate = 0xffffffff;
    *(undefined4 *)&this[1].bIsEnabledDelegate.field_0x4 = 0;
    *(undefined8 *)&this[1].bIsEnabledDelegate.field_0x10 = 0;
    *(undefined4 *)&this[1].ToolTipTextDelegate = 0;
    *(undefined8 *)&this[1].ToolTipTextDelegate.field_0x10 = 0x4070000000000000;
    this[1].ToolTipText.TextData.Reference = (ITextData *)0x4070000000000000;
    *(undefined2 *)&this[1].ToolTipTextDelegate.field_0x8 = 1;
    FVar1 = FLinearColor::White;
    *(undefined1 *)&this[1].ToolTipWidgetDelegate = 0;
    *(undefined4 *)&this[1].ToolTipWidgetDelegate.field_0x4 = 0x447a0000;
    *(FLinearColor_u_0 *)&this[1].ToolTipText.Flags = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
    *(undefined8 *)&this[1].ToolTipWidgetDelegate.field_0x10 = 0;
    *(undefined8 *)&this[1].VisibilityDelegate = 0;
    *(undefined8 *)&this[1].VisibilityDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].VisibilityDelegate.field_0x10 = 0;
    *(undefined4 *)&this[1].ToolTipWidgetDelegate.field_0x8 = 0x1000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraUIComponent> @ 14d291200

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraUIComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraUIComponent::GetPrivateStaticClass();
  this = (UNiagaraComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraComponent *)0x0) {
    UNiagaraComponent::UNiagaraComponent(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UNiagaraUIComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UNiagaraUIComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UNiagaraUIComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UNiagaraUIComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ = (longlong)&UNiagaraUIComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UNiagaraUIComponent::_vftable__for__IPhysicsComponent__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,``UNiagaraUIComponent::AddRibbonRendererData'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>_> @ 14d291300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__UNiagaraUIComponent::AddRibbonRendererData_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:___cdecl__public:_void___cdecl_UNiagaraUIComponent::AddRibbonRendererData(SNiagaraUISystemWidget_*,TSharedRef<FNiagaraEmitterInstance_const_,1>,UNiagaraRibbonRendererProperties_*,FNiagaraUIRenderProperties_const_&,FNiagaraWidgetProperties_const_*)_::_2_::<lambda_2>::operator()(TArray<int,TSizedDefaultAllocator<32>_>_&)const_::_5_::<lambda_1>_>
          param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_3a8 [32];
  int local_388;
  int **local_380;
  int local_368;
  undefined4 uStack_364;
  int *local_358;
  int *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_3a8;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar9 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar9;
    memset(local_340,0,0x2e8);
    ppiVar5 = &local_358;
    do {
      piVar6 = ppiVar5[1];
      piVar4 = *ppiVar5;
      local_388 = *(int *)(ppiVar5 + 2);
      uStack_364 = *(undefined4 *)((longlong)ppiVar5 + 0x14);
      iVar2 = (int)((longlong)piVar6 - (longlong)piVar4 >> 2) + 1;
      piVar3 = piVar4;
      local_380 = ppiVar5;
      local_368 = local_388;
      if (local_388 != 0) {
LAB_14d2913d2:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          piVar7 = piVar6 + 1;
          iVar1 = piVar3[iVar2 >> 1];
          piVar3[iVar2 >> 1] = *piVar3;
          *piVar3 = iVar1;
          piVar4 = piVar3;
LAB_14d291400:
          piVar4 = piVar4 + 1;
          if (piVar4 <= piVar6) goto code_r0x00014d291409;
          goto LAB_14d291430;
        }
        for (; piVar7 = piVar3, piVar4 = piVar3, piVar3 < piVar6; piVar6 = piVar6 + -1) {
          while (piVar4 = piVar4 + 1, piVar4 <= piVar6) {
            iVar2 = *piVar4;
            fVar9 = FNiagaraDataSetReaderFloat<float>::Get
                              (*(FNiagaraDataSetReaderFloat<float> **)param_4.Predicate,*piVar7);
            fVar10 = FNiagaraDataSetReaderFloat<float>::Get
                               (*(FNiagaraDataSetReaderFloat<float> **)param_4.Predicate,iVar2);
            if (fVar9 < fVar10) {
              piVar7 = piVar4;
            }
          }
          iVar2 = *piVar7;
          *piVar7 = *piVar6;
          *piVar6 = iVar2;
          ppiVar5 = local_380;
        }
        goto LAB_14d291518;
      }
LAB_14d291507:
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__UNiagaraUIComponent::AddRibbonRendererData_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>_>_>
                (piVar4,iVar2,param_3,param_4);
LAB_14d291518:
      ppiVar5 = ppiVar5 + -3;
    } while (&local_358 <= ppiVar5);
  }
  return;
code_r0x00014d291409:
  iVar2 = *piVar4;
  fVar9 = FNiagaraDataSetReaderFloat<float>::Get
                    (*(FNiagaraDataSetReaderFloat<float> **)param_4.Predicate,*piVar3);
  fVar10 = FNiagaraDataSetReaderFloat<float>::Get
                     (*(FNiagaraDataSetReaderFloat<float> **)param_4.Predicate,iVar2);
  if (fVar10 <= fVar9) goto LAB_14d291400;
LAB_14d291430:
  do {
    piVar8 = piVar7;
    piVar7 = piVar8 + -1;
    if (piVar7 <= piVar3) break;
    iVar2 = *piVar3;
    fVar9 = FNiagaraDataSetReaderFloat<float>::Get
                      (*(FNiagaraDataSetReaderFloat<float> **)param_4.Predicate,*piVar7);
    fVar10 = FNiagaraDataSetReaderFloat<float>::Get
                       (*(FNiagaraDataSetReaderFloat<float> **)param_4.Predicate,iVar2);
  } while (fVar10 <= fVar9);
  if (piVar4 <= piVar7) {
    iVar2 = *piVar4;
    *piVar4 = *piVar7;
    *piVar7 = iVar2;
    goto LAB_14d291400;
  }
  iVar2 = *piVar3;
  *piVar3 = *piVar7;
  local_388 = local_388 + -1;
  *piVar7 = iVar2;
  if ((longlong)((longlong)piVar7 + (-4 - (longlong)piVar3) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar6 - (longlong)piVar4 & 0xfffffffffffffffcU)) {
    if (piVar4 < piVar6) {
      *ppiVar5 = piVar4;
      ppiVar5[1] = piVar6;
      *(int *)(ppiVar5 + 2) = local_388;
      ppiVar5 = ppiVar5 + 3;
      local_380 = ppiVar5;
    }
    if (piVar7 <= piVar3 + 1) goto LAB_14d291518;
    piVar6 = piVar8 + -2;
    piVar4 = piVar3;
  }
  else {
    if (piVar3 + 1 < piVar7) {
      *ppiVar5 = piVar3;
      ppiVar5[1] = piVar8 + -2;
      *(int *)(ppiVar5 + 2) = local_388;
      ppiVar5 = ppiVar5 + 3;
      local_380 = ppiVar5;
    }
    if (piVar6 <= piVar4) goto LAB_14d291518;
  }
  iVar2 = (int)((longlong)piVar6 - (longlong)piVar4 >> 2) + 1;
  piVar3 = piVar4;
  if (local_388 == 0) goto LAB_14d291507;
  goto LAB_14d2913d2;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,``UNiagaraUIComponent::AddRibbonRendererData'::__l2::<lambda_2>::operator()'::__l7::<lambda_2>_>_> @ 14d291600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__UNiagaraUIComponent::AddRibbonRendererData_::__l2::<lambda_2>::operator()_::__l7::<lambda_2>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:___cdecl__public:_void___cdecl_UNiagaraUIComponent::AddRibbonRendererData(SNiagaraUISystemWidget_*,TSharedRef<FNiagaraEmitterInstance_const_,1>,UNiagaraRibbonRendererProperties_*,FNiagaraUIRenderProperties_const_&,FNiagaraWidgetProperties_const_*)_::_2_::<lambda_2>::operator()(TArray<int,TSizedDefaultAllocator<32>_>_&)const_::_7_::<lambda_2>_>
          param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  float fVar12;
  undefined1 auStack_3a8 [32];
  FIdentityFunctor local_388;
  int **local_380;
  int *local_378;
  int local_370;
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3a8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_388 = param_3;
    local_348 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar12;
    memset(local_330,0,0x2e8);
    local_380 = &local_348;
    do {
      local_378 = local_380[1];
      piVar7 = *local_380;
      local_358 = local_380[2];
      iVar6 = (int)((longlong)local_378 - (longlong)piVar7 >> 2) + 1;
      local_370 = (int)local_358;
      piVar8 = piVar7;
      if ((int)local_358 != 0) {
LAB_14d2916d3:
        piVar11 = local_378;
        if (8 < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          piVar9 = local_378 + 1;
          iVar1 = piVar8[iVar6 >> 1];
          piVar8[iVar6 >> 1] = *piVar8;
          *piVar8 = iVar1;
          piVar7 = piVar8;
LAB_14d291710:
          piVar7 = piVar7 + 1;
          if (piVar7 <= piVar11) goto code_r0x00014d29171d;
          goto LAB_14d2917a0;
        }
        if (piVar8 < local_378) {
          do {
            piVar7 = local_378;
            piVar11 = piVar8;
            piVar9 = piVar8 + 1;
            if (piVar8 + 1 <= local_378) {
              do {
                pcVar2 = *(char **)param_4.Predicate;
                iVar6 = *piVar9;
                iVar1 = *piVar11;
                if (((*pcVar2 == '\0') || (*(int *)(pcVar2 + 4) < iVar1)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("bIsValid && Index <= NumInstances",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                                       ,0x17f,L""), piVar7 = local_378, bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcVar3 = *(char **)param_4.Predicate;
                iVar1 = *(int *)(*(longlong *)(pcVar2 + 8) + (longlong)iVar1 * 4);
                if (((*pcVar3 == '\0') || (*(int *)(pcVar3 + 4) < iVar6)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("bIsValid && Index <= NumInstances",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                                       ,0x17f,L""), piVar7 = local_378, bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (*(int *)(*(longlong *)(pcVar3 + 8) + (longlong)iVar6 * 4) < iVar1) {
                  piVar11 = piVar9;
                }
                piVar9 = piVar9 + 1;
              } while (piVar9 <= piVar7);
            }
            iVar6 = *piVar11;
            local_378 = piVar7 + -1;
            *piVar11 = *piVar7;
            *piVar7 = iVar6;
            param_3 = local_388;
          } while (piVar8 < local_378);
        }
        goto LAB_14d29190f;
      }
LAB_14d2918f9:
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__UNiagaraUIComponent::AddRibbonRendererData_::__l2::<lambda_2>::operator()_::__l7::<lambda_2>_>_>
                (piVar7,iVar6,param_3,param_4);
LAB_14d29190f:
      local_380 = local_380 + -3;
    } while (&local_348 <= local_380);
  }
  return;
code_r0x00014d29171d:
  pcVar2 = *(char **)param_4.Predicate;
  iVar6 = *piVar7;
  iVar1 = *piVar8;
  if (((*pcVar2 == '\0') || (*(int *)(pcVar2 + 4) < iVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid && Index <= NumInstances",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                         ,0x17f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar3 = *(char **)param_4.Predicate;
  iVar1 = *(int *)(*(longlong *)(pcVar2 + 8) + (longlong)iVar1 * 4);
  if (((*pcVar3 == '\0') || (*(int *)(pcVar3 + 4) < iVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid && Index <= NumInstances",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                         ,0x17f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iVar1 <= *(int *)(*(longlong *)(pcVar3 + 8) + (longlong)iVar6 * 4)) goto LAB_14d291710;
LAB_14d2917a0:
  do {
    piVar10 = piVar9;
    piVar9 = piVar10 + -1;
    if (piVar9 <= piVar8) break;
    pcVar2 = *(char **)param_4.Predicate;
    iVar6 = *piVar8;
    iVar1 = *piVar9;
    if (((*pcVar2 == '\0') || (*(int *)(pcVar2 + 4) < iVar1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid && Index <= NumInstances",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                           ,0x17f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar3 = *(char **)param_4.Predicate;
    iVar1 = *(int *)(*(longlong *)(pcVar2 + 8) + (longlong)iVar1 * 4);
    if (((*pcVar3 == '\0') || (*(int *)(pcVar3 + 4) < iVar6)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid && Index <= NumInstances",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                           ,0x17f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  } while (iVar1 <= *(int *)(*(longlong *)(pcVar3 + 8) + (longlong)iVar6 * 4));
  if (piVar7 <= piVar9) {
    iVar6 = *piVar7;
    *piVar7 = *piVar9;
    *piVar9 = iVar6;
    goto LAB_14d291710;
  }
  iVar6 = *piVar8;
  *piVar8 = *piVar9;
  local_370 = local_370 + -1;
  *piVar9 = iVar6;
  param_3 = local_388;
  if ((longlong)((longlong)piVar9 + (-4 - (longlong)piVar8) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar11 - (longlong)piVar7 & 0xfffffffffffffffcU)) {
    if (piVar7 < local_378) {
      *local_380 = piVar7;
      local_380[1] = local_378;
      *(int *)(local_380 + 2) = local_370;
      local_380 = local_380 + 3;
    }
    if (piVar9 <= piVar8 + 1) goto LAB_14d29190f;
    local_378 = piVar10 + -2;
    piVar7 = piVar8;
  }
  else {
    if (piVar8 + 1 < piVar9) {
      *local_380 = piVar8;
      local_380[1] = piVar10 + -2;
      *(int *)(local_380 + 2) = local_370;
      local_380 = local_380 + 3;
    }
    if (local_378 <= piVar7) goto LAB_14d29190f;
  }
  iVar6 = (int)((longlong)local_378 - (longlong)piVar7 >> 2) + 1;
  piVar8 = piVar7;
  if (local_370 == 0) goto LAB_14d2918f9;
  goto LAB_14d2916d3;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>_> @ 14d291a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> **ppTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_328;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar15;
    memset(local_310,0,0x2e8);
    ppTVar10 = &local_328;
    do {
      pTVar12 = ppTVar10[1];
      pTVar14 = *ppTVar10;
      pTVar1 = ppTVar10[2];
      iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 5) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar13 = pTVar14;
      if ((int)local_338 != 0) {
LAB_14d291b10:
        if (8 < iVar7) {
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          pTVar8 = pTVar12 + 1;
          pTVar14 = pTVar13 + iVar7 / 2;
          TVar3 = pTVar14->_s_1;
          uVar4 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8);
          uVar5 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10);
          uVar6 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x18);
          pTVar14->_s_1 = pTVar13->_s_1;
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar2;
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x18) = uVar2;
          pTVar13->_s_1 = TVar3;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar4;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) = uVar5;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar6;
          pTVar14 = pTVar13;
LAB_14d291b50:
          pTVar11 = pTVar14;
          pTVar14 = pTVar11 + 1;
          if ((pTVar14 <= pTVar12) &&
             ((pTVar14->_s_1).PrevFreeIndex <= (pTVar13->_s_1).PrevFreeIndex))
          goto code_r0x00014d291b61;
          goto LAB_14d291b70;
        }
        for (; pTVar14 = pTVar13, pTVar1 = pTVar13, pTVar13 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar12) {
            if (((pTVar14->_s_1).PrevFreeIndex < (pTVar1->_s_1).PrevFreeIndex) ||
               (((pTVar14->_s_1).PrevFreeIndex == (pTVar1->_s_1).PrevFreeIndex &&
                ((pTVar14->_s_1).NextFreeIndex < (pTVar1->_s_1).NextFreeIndex)))) {
              pTVar14 = pTVar1;
            }
          }
          TVar3 = pTVar14->_s_1;
          uVar2 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x18);
          uVar6 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar14->_s_1 = pTVar12->_s_1;
          *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar6;
          uVar6 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x18) = uVar6;
          pTVar12->_s_1 = TVar3;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar5;
        }
        goto LAB_14d291c5c;
      }
LAB_14d291c4b:
      local_338 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>_>
                (pTVar14,iVar7,param_3,param_4);
LAB_14d291c5c:
      ppTVar10 = ppTVar10 + -3;
    } while (&local_328 <= ppTVar10);
  }
  return;
code_r0x00014d291b61:
  if (((pTVar13->_s_1).PrevFreeIndex != (pTVar14->_s_1).PrevFreeIndex) ||
     (*(int *)((longlong)pTVar11 + 0x24) <= (pTVar13->_s_1).NextFreeIndex)) goto LAB_14d291b50;
LAB_14d291b70:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if ((pTVar8 <= pTVar13) || ((pTVar8->_s_1).PrevFreeIndex < (pTVar13->_s_1).PrevFreeIndex))
    break;
  } while (((pTVar8->_s_1).PrevFreeIndex != (pTVar13->_s_1).PrevFreeIndex) ||
          ((pTVar13->_s_1).NextFreeIndex <= *(int *)((longlong)pTVar9 + -0x1c)));
  uVar2 = *(undefined8 *)((longlong)pTVar9 + -0x18);
  if (pTVar14 <= pTVar8) {
    TVar3 = pTVar14->_s_1;
    uVar4 = *(undefined8 *)((longlong)pTVar11 + 0x28);
    uVar5 = *(undefined8 *)((longlong)pTVar11 + 0x30);
    uVar6 = *(undefined8 *)((longlong)pTVar11 + 0x38);
    pTVar14->_s_1 = pTVar8->_s_1;
    *(undefined8 *)((longlong)pTVar11 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar9 + -8);
    *(undefined8 *)((longlong)pTVar11 + 0x30) = *(undefined8 *)((longlong)pTVar9 + -0x10);
    *(undefined8 *)((longlong)pTVar11 + 0x38) = uVar2;
    pTVar8->_s_1 = TVar3;
    *(undefined8 *)((longlong)pTVar9 + -0x18) = uVar4;
    *(undefined8 *)((longlong)pTVar9 + -0x10) = uVar5;
    *(undefined8 *)((longlong)pTVar9 + -8) = uVar6;
    goto LAB_14d291b50;
  }
  TVar3 = pTVar13->_s_1;
  uVar4 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
  uVar5 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
  uVar6 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
  pTVar13->_s_1 = pTVar8->_s_1;
  *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar2;
  local_338._0_4_ = (int)local_338 + -1;
  uVar2 = *(undefined8 *)((longlong)pTVar9 + -8);
  *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar9 + -0x10);
  *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar2;
  pTVar8->_s_1 = TVar3;
  *(undefined8 *)((longlong)pTVar9 + -0x18) = uVar4;
  *(undefined8 *)((longlong)pTVar9 + -0x10) = uVar5;
  *(undefined8 *)((longlong)pTVar9 + -8) = uVar6;
  if ((longlong)((longlong)pTVar8 + (-0x20 - (longlong)pTVar13) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar14 & 0xffffffffffffffe0U)) {
    if (pTVar14 < pTVar12) {
      *ppTVar10 = pTVar14;
      ppTVar10[1] = pTVar12;
      *(int *)(ppTVar10 + 2) = (int)local_338;
      ppTVar10 = ppTVar10 + 3;
    }
    if (pTVar8 <= pTVar13 + 1) goto LAB_14d291c5c;
    pTVar12 = pTVar9 + -2;
    pTVar14 = pTVar13;
  }
  else {
    if (pTVar13 + 1 < pTVar8) {
      *ppTVar10 = pTVar13;
      ppTVar10[1] = pTVar9 + -2;
      *(int *)(ppTVar10 + 2) = (int)local_338;
      ppTVar10 = ppTVar10 + 3;
    }
    if (pTVar12 <= pTVar14) goto LAB_14d291c5c;
  }
  iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 5) + 1;
  pTVar13 = pTVar14;
  if ((int)local_338 == 0) goto LAB_14d291c4b;
  goto LAB_14d291b10;
}

// IntroSortInternal<FNiagaraRendererEntry,int,FIdentityFunctor,`UNiagaraUIComponent::RenderUI'::__l2::<lambda_1>_> @ 14d291d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FNiagaraRendererEntry,int,FIdentityFunctor,_UNiagaraUIComponent::RenderUI_::__l2::<lambda_1>_>
          (FNiagaraRendererEntry *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FNiagaraRendererEntry *pFVar1;
  FNiagaraEmitterInstance *pFVar2;
  UNiagaraRendererProperties *pUVar3;
  FNiagaraEmitterInstance *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TObjectPtr<UNiagaraEmitter>_u_0 TVar6;
  TObjectPtr<UNiagaraEmitter>_u_0 TVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  FNiagaraRendererEntry *pFVar17;
  FNiagaraRendererEntry *pFVar18;
  FNiagaraRendererEntry *pFVar19;
  FNiagaraRendererEntry *pFVar20;
  FNiagaraRendererEntry *pFVar21;
  FNiagaraRendererEntry *pFVar22;
  FNiagaraRendererEntry **ppFVar23;
  float fVar24;
  undefined1 auStack_378 [48];
  FNiagaraRendererEntry *local_348;
  FNiagaraRendererEntry *local_338;
  FNiagaraRendererEntry *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar24 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar24;
    memset(local_320,0,0x2e8);
    ppFVar23 = &local_338;
    do {
      pFVar17 = ppFVar23[1];
      pFVar22 = *ppFVar23;
      pFVar1 = ppFVar23[2];
      local_348._0_4_ = (int)pFVar1;
      iVar16 = (int)(((longlong)pFVar17 - (longlong)pFVar22) / 0x30) + 1;
      pFVar21 = pFVar22;
      if ((int)local_348 != 0) {
LAB_14d291de0:
        if (8 < iVar16) {
          pFVar2 = (pFVar21->EmitterInstance).Object;
          pFVar19 = pFVar17 + 1;
          pFVar22 = pFVar21 + iVar16 / 2;
          pUVar3 = pFVar22->RendererProperties;
          pFVar4 = (pFVar22->EmitterInstance).Object;
          pTVar5 = (pFVar22->EmitterInstance).SharedReferenceCount.ReferenceController;
          TVar6 = (pFVar22->Emitter).Emitter.field0_0x0;
          uVar11 = (pFVar22->Emitter).Version.A;
          uVar12 = (pFVar22->Emitter).Version.B;
          uVar13 = (pFVar22->Emitter).Version.C;
          uVar14 = (pFVar22->Emitter).Version.D;
          pFVar22->RendererProperties = pFVar21->RendererProperties;
          (pFVar22->EmitterInstance).Object = pFVar2;
          TVar7 = (pFVar21->Emitter).Emitter.field0_0x0;
          (pFVar22->EmitterInstance).SharedReferenceCount.ReferenceController =
               (pFVar21->EmitterInstance).SharedReferenceCount.ReferenceController;
          (pFVar22->Emitter).Emitter.field0_0x0 = TVar7;
          uVar8 = (pFVar21->Emitter).Version.B;
          uVar9 = (pFVar21->Emitter).Version.C;
          uVar10 = (pFVar21->Emitter).Version.D;
          (pFVar22->Emitter).Version.A = (pFVar21->Emitter).Version.A;
          (pFVar22->Emitter).Version.B = uVar8;
          (pFVar22->Emitter).Version.C = uVar9;
          (pFVar22->Emitter).Version.D = uVar10;
          pFVar21->RendererProperties = pUVar3;
          (pFVar21->EmitterInstance).Object = pFVar4;
          (pFVar21->EmitterInstance).SharedReferenceCount.ReferenceController = pTVar5;
          (pFVar21->Emitter).Emitter.field0_0x0 = TVar6;
          (pFVar21->Emitter).Version.A = uVar11;
          (pFVar21->Emitter).Version.B = uVar12;
          (pFVar21->Emitter).Version.C = uVar13;
          (pFVar21->Emitter).Version.D = uVar14;
          pFVar22 = pFVar21;
LAB_14d291e37:
          pFVar18 = pFVar22;
          pFVar22 = pFVar18 + 1;
          if (pFVar22 <= pFVar17) goto code_r0x00014d291e40;
          goto LAB_14d291e50;
        }
        for (; pFVar22 = pFVar21, pFVar1 = pFVar21, pFVar21 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar19 = pFVar22, pFVar1 = pFVar1 + 1, pFVar1 <= pFVar17) {
            pFVar22 = pFVar1;
            if (pFVar1->RendererProperties->SortOrderHint <=
                pFVar19->RendererProperties->SortOrderHint) {
              pFVar22 = pFVar19;
            }
          }
          pUVar3 = pFVar19->RendererProperties;
          pFVar2 = (pFVar19->EmitterInstance).Object;
          pTVar5 = (pFVar19->EmitterInstance).SharedReferenceCount.ReferenceController;
          TVar6 = (pFVar19->Emitter).Emitter.field0_0x0;
          uVar11 = (pFVar19->Emitter).Version.A;
          uVar12 = (pFVar19->Emitter).Version.B;
          uVar13 = (pFVar19->Emitter).Version.C;
          uVar14 = (pFVar19->Emitter).Version.D;
          pFVar4 = (pFVar17->EmitterInstance).Object;
          pFVar19->RendererProperties = pFVar17->RendererProperties;
          (pFVar19->EmitterInstance).Object = pFVar4;
          TVar7 = (pFVar17->Emitter).Emitter.field0_0x0;
          (pFVar19->EmitterInstance).SharedReferenceCount.ReferenceController =
               (pFVar17->EmitterInstance).SharedReferenceCount.ReferenceController;
          (pFVar19->Emitter).Emitter.field0_0x0 = TVar7;
          uVar8 = (pFVar17->Emitter).Version.B;
          uVar9 = (pFVar17->Emitter).Version.C;
          uVar10 = (pFVar17->Emitter).Version.D;
          (pFVar19->Emitter).Version.A = (pFVar17->Emitter).Version.A;
          (pFVar19->Emitter).Version.B = uVar8;
          (pFVar19->Emitter).Version.C = uVar9;
          (pFVar19->Emitter).Version.D = uVar10;
          pFVar17->RendererProperties = pUVar3;
          (pFVar17->EmitterInstance).Object = pFVar2;
          (pFVar17->EmitterInstance).SharedReferenceCount.ReferenceController = pTVar5;
          (pFVar17->Emitter).Emitter.field0_0x0 = TVar6;
          (pFVar17->Emitter).Version.A = uVar11;
          (pFVar17->Emitter).Version.B = uVar12;
          (pFVar17->Emitter).Version.C = uVar13;
          (pFVar17->Emitter).Version.D = uVar14;
        }
        goto LAB_14d291f97;
      }
LAB_14d291f87:
      local_348 = pFVar1;
      HeapSortInternal<FNiagaraRendererEntry,int,FIdentityFunctor,_UNiagaraUIComponent::RenderUI_::__l2::<lambda_1>_>
                (pFVar22,iVar16,param_3,param_4);
LAB_14d291f97:
      ppFVar23 = ppFVar23 + -3;
    } while (&local_338 <= ppFVar23);
  }
  return;
code_r0x00014d291e40:
  if (pFVar22->RendererProperties->SortOrderHint <= pFVar21->RendererProperties->SortOrderHint)
  goto LAB_14d291e37;
LAB_14d291e50:
  do {
    pFVar20 = pFVar19;
    pFVar19 = pFVar20 + -1;
    if (pFVar19 <= pFVar21) break;
  } while (pFVar21->RendererProperties->SortOrderHint <= pFVar19->RendererProperties->SortOrderHint)
  ;
  pFVar2 = pFVar20[-1].EmitterInstance.Object;
  if (pFVar22 <= pFVar19) {
    pUVar3 = pFVar22->RendererProperties;
    pFVar4 = pFVar18[1].EmitterInstance.Object;
    pTVar5 = pFVar18[1].EmitterInstance.SharedReferenceCount.ReferenceController;
    TVar6 = pFVar18[1].Emitter.Emitter.field0_0x0;
    uVar11 = pFVar18[1].Emitter.Version.A;
    uVar12 = pFVar18[1].Emitter.Version.B;
    uVar13 = pFVar18[1].Emitter.Version.C;
    uVar14 = pFVar18[1].Emitter.Version.D;
    pFVar22->RendererProperties = pFVar19->RendererProperties;
    pFVar18[1].EmitterInstance.Object = pFVar2;
    TVar7 = pFVar20[-1].Emitter.Emitter.field0_0x0;
    pFVar18[1].EmitterInstance.SharedReferenceCount.ReferenceController =
         pFVar20[-1].EmitterInstance.SharedReferenceCount.ReferenceController;
    pFVar18[1].Emitter.Emitter.field0_0x0 = TVar7;
    uVar8 = pFVar20[-1].Emitter.Version.B;
    uVar9 = pFVar20[-1].Emitter.Version.C;
    uVar10 = pFVar20[-1].Emitter.Version.D;
    pFVar18[1].Emitter.Version.A = pFVar20[-1].Emitter.Version.A;
    pFVar18[1].Emitter.Version.B = uVar8;
    pFVar18[1].Emitter.Version.C = uVar9;
    pFVar18[1].Emitter.Version.D = uVar10;
    pFVar19->RendererProperties = pUVar3;
    pFVar20[-1].EmitterInstance.Object = pFVar4;
    pFVar20[-1].EmitterInstance.SharedReferenceCount.ReferenceController = pTVar5;
    pFVar20[-1].Emitter.Emitter.field0_0x0 = TVar6;
    pFVar20[-1].Emitter.Version.A = uVar11;
    pFVar20[-1].Emitter.Version.B = uVar12;
    pFVar20[-1].Emitter.Version.C = uVar13;
    pFVar20[-1].Emitter.Version.D = uVar14;
    goto LAB_14d291e37;
  }
  pUVar3 = pFVar21->RendererProperties;
  pFVar4 = (pFVar21->EmitterInstance).Object;
  pTVar5 = (pFVar21->EmitterInstance).SharedReferenceCount.ReferenceController;
  TVar6 = (pFVar21->Emitter).Emitter.field0_0x0;
  local_348._0_4_ = (int)local_348 + -1;
  uVar11 = (pFVar21->Emitter).Version.A;
  uVar12 = (pFVar21->Emitter).Version.B;
  uVar13 = (pFVar21->Emitter).Version.C;
  uVar14 = (pFVar21->Emitter).Version.D;
  lVar15 = (longlong)pFVar19 + (-0x30 - (longlong)pFVar21);
  lVar15 = lVar15 / 6 + (lVar15 >> 0x3f);
  pFVar21->RendererProperties = pFVar19->RendererProperties;
  (pFVar21->EmitterInstance).Object = pFVar2;
  TVar7 = pFVar20[-1].Emitter.Emitter.field0_0x0;
  (pFVar21->EmitterInstance).SharedReferenceCount.ReferenceController =
       pFVar20[-1].EmitterInstance.SharedReferenceCount.ReferenceController;
  (pFVar21->Emitter).Emitter.field0_0x0 = TVar7;
  uVar8 = pFVar20[-1].Emitter.Version.B;
  uVar9 = pFVar20[-1].Emitter.Version.C;
  uVar10 = pFVar20[-1].Emitter.Version.D;
  (pFVar21->Emitter).Version.A = pFVar20[-1].Emitter.Version.A;
  (pFVar21->Emitter).Version.B = uVar8;
  (pFVar21->Emitter).Version.C = uVar9;
  (pFVar21->Emitter).Version.D = uVar10;
  pFVar19->RendererProperties = pUVar3;
  pFVar20[-1].EmitterInstance.Object = pFVar4;
  pFVar20[-1].EmitterInstance.SharedReferenceCount.ReferenceController = pTVar5;
  pFVar20[-1].Emitter.Emitter.field0_0x0 = TVar6;
  pFVar20[-1].Emitter.Version.A = uVar11;
  pFVar20[-1].Emitter.Version.B = uVar12;
  pFVar20[-1].Emitter.Version.C = uVar13;
  pFVar20[-1].Emitter.Version.D = uVar14;
  if ((lVar15 >> 3) - (lVar15 >> 0x3f) < ((longlong)pFVar17 - (longlong)pFVar22) / 0x30) {
    if (pFVar22 < pFVar17) {
      *ppFVar23 = pFVar22;
      ppFVar23[1] = pFVar17;
      *(int *)(ppFVar23 + 2) = (int)local_348;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar19 <= pFVar21 + 1) goto LAB_14d291f97;
    pFVar17 = pFVar20 + -2;
    pFVar22 = pFVar21;
  }
  else {
    if (pFVar21 + 1 < pFVar19) {
      *ppFVar23 = pFVar21;
      ppFVar23[1] = pFVar20 + -2;
      *(int *)(ppFVar23 + 2) = (int)local_348;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar17 <= pFVar22) goto LAB_14d291f97;
  }
  iVar16 = (int)(((longlong)pFVar17 - (longlong)pFVar22) / 0x30) + 1;
  pFVar21 = pFVar22;
  if ((int)local_348 == 0) goto LAB_14d291f87;
  goto LAB_14d291de0;
}

// MakeTDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs> @ 14d292070

TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewObject<UNiagaraUIComponent> @ 14d292120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraUIComponent * __cdecl NewObject<UNiagaraUIComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UNiagaraUIComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNiagaraUIComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNiagaraUIComponent *)
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

// `vector_deleting_destructor'`adjustor{536}' @ 14d293d28

/* [thunk]:public: virtual void * __ptr64 __cdecl SMeshWidget::`vector deleting
   destructor'`adjustor{536}' (unsigned int) __ptr64 */

void * __thiscall
SMeshWidget::_vector_deleting_destructor__adjustor_536__(SMeshWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SMeshWidget *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{536}' @ 14d293d3c

/* [thunk]:public: virtual void * __ptr64 __cdecl SNiagaraUISystemWidget::`vector deleting
   destructor'`adjustor{536}' (unsigned int) __ptr64 */

void * __thiscall
SNiagaraUISystemWidget::_vector_deleting_destructor__adjustor_536__
          (SNiagaraUISystemWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SNiagaraUISystemWidget *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d293d50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraSystemWidget::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraSystemWidget::_vector_deleting_destructor__adjustor_40__
          (UNiagaraSystemWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNiagaraSystemWidget *)&this[-1].ShowDebugSystemInWorld,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14d293d60

/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraUIComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraUIComponent::_vector_deleting_destructor__adjustor_592__
          (UNiagaraUIComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNiagaraUIComponent *)&this[-1].field_0x5c0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14d293d74

/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraUIComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraUIComponent::_vector_deleting_destructor__adjustor_600__
          (UNiagaraUIComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNiagaraUIComponent *)&this[-1].field_0x5b8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14d293d88

/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraUIComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraUIComponent::_vector_deleting_destructor__adjustor_608__
          (UNiagaraUIComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNiagaraUIComponent *)&this[-1].field_0x5b0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d293d9c

/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraUIComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraUIComponent::_vector_deleting_destructor__adjustor_40__
          (UNiagaraUIComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNiagaraUIComponent *)&this[-1].field_0x7e8,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d293db0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNiagaraUISystemWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNiagaraUISystemWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x388);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d293df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ANiagaraUIActor::_scalar_deleting_destructor_(ANiagaraUIActor *this,uint param_1)

{
  *(undefined ***)this = &___7ANiagaraUIActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d293e50

void * __thiscall SMeshWidget::_scalar_deleting_destructor_(SMeshWidget *this,uint param_1)

{
  ~SMeshWidget(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x338);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d293eb0

void * __thiscall
SNiagaraUISystemWidget::_scalar_deleting_destructor_(SNiagaraUISystemWidget *this,uint param_1)

{
  ~SNiagaraUISystemWidget(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x378);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d293f10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UNiagaraSystemWidget::_scalar_deleting_destructor_(UNiagaraSystemWidget *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NiagaraSlateWidget).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->MaterialRemapList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MaterialRemapList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialRemapList);
  UWidget::~UWidget((UWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d293fc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void * __thiscall
UNiagaraUIComponent::_scalar_deleting_destructor_(UNiagaraUIComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UNiagaraComponent::~UNiagaraComponent((UNiagaraComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x810);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraSystemWidget @ 14d297560

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraSystemWidget(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraUIActor @ 14d297570

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraUIActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraUIComponent @ 14d297580

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraUIComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraUIRenderer_init @ 14d297590

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraUIRenderer_init(void)

{
  return;
}

// Z_Construct_UClass_UNiagaraSystemWidget_NoRegister @ 14d29a1e0

UClass * __cdecl Z_Construct_UClass_UNiagaraSystemWidget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSystemWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraUIRenderer",L"NiagaraSystemWidget",
               &Z_Registration_Info_UClass_UNiagaraSystemWidget.InnerSingleton,
               UNiagaraSystemWidget::StaticRegisterNativesUNiagaraSystemWidget,0x260,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraSystemWidget>,
               InternalVTableHelperCtorCaller<UNiagaraSystemWidget>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSystemWidget.InnerSingleton;
}

// IMPLEMENT_MODULE_NiagaraUIRenderer @ 14d29a950

void __cdecl IMPLEMENT_MODULE_NiagaraUIRenderer(void)

{
  return;
}

// MaterialBrushMap'' @ 150455cb0

void __cdecl `dynamic_atexit_destructor_for_'SNiagaraUISystemWidget::MaterialBrushMap__(void)

{
  SNiagaraUISystemWidget::MaterialBrushMap._72_4_ = 0;
  if (SNiagaraUISystemWidget::MaterialBrushMap._64_8_ != 0) {
    FMemory::Free((void *)SNiagaraUISystemWidget::MaterialBrushMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&SNiagaraUISystemWidget::MaterialBrushMap);
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 150455cf0

void __cdecl
`SNiagaraUISystemWidget::GetPrivateWidgetClass'::__l2::
_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

