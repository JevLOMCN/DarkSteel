// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgetsCore
// Functions: 27

// TypeName'' @ 1413e0590

void __cdecl `dynamic_initializer_for_'FAudioMeterDefaultColorWidgetStyle::TypeName__(void)

{
  ::FName::FName(&FAudioMeterDefaultColorWidgetStyle::TypeName,"FAudioMeterDefaultColorWidgetStyle")
  ;
  return;
}

// TypeName'' @ 1413e05b0

void __cdecl `dynamic_initializer_for_'FAudioMeterWidgetStyle::TypeName__(void)

{
  ::FName::FName(&FAudioMeterWidgetStyle::TypeName,"FAudioMeterWidgetStyle");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioWidgetsCore'' @ 1413e05d0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioWidgetsCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioWidgetsCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioWidgetsCore",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAudioWidgetsCoreModule>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgetsCore_Public_AudioMeterChannelInfo_h__Script_AudioWidgetsCore_2876871037'' @ 1413e0620

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgetsCore_Public_AudioMeterChannelInfo_h__Script_AudioWidgetsCore_2876871037__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgetsCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgetsCore_Public_AudioMeterChannelInfo_h__Script_AudioWidgetsCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgetsCore_Public_AudioMeterWidgetStyle_h__Script_AudioWidgetsCore_75137349'' @ 1413e0660

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgetsCore_Public_AudioMeterWidgetStyle_h__Script_AudioWidgetsCore_75137349__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgetsCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgetsCore_Public_AudioMeterWidgetStyle_h__Script_AudioWidgetsCore_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AudioWidgetsCore'' @ 1413e06a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AudioWidgetsCore__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xe372270a;
  local_res8[0].DeclarationsHash = 0x75b42e2;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AudioWidgetsCore,L"/Script/AudioWidgetsCore",
             &Z_Registration_Info_UPackage__Script_AudioWidgetsCore,local_res8);
  return;
}

// Z_Construct_UPackage__Script_AudioWidgetsCore @ 14d7e6fe0

UPackage * __cdecl Z_Construct_UPackage__Script_AudioWidgetsCore(void)

{
  if (Z_Registration_Info_UPackage__Script_AudioWidgetsCore.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AudioWidgetsCore.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_AudioWidgetsCore.OuterSingleton;
}

// NewStructOps @ 14d7e7020

void * __cdecl Z_Construct_UScriptStruct_FAudioMeterChannelInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioMeterChannelInfo,&UE::CoreUObject::Private::Construct<FAudioMeterChannelInfo>,&UE::CoreUObject::Private::ConstructForTests<FAudioMeterChannelInfo>,&UE::CoreUObject::Private::Destruct<FAudioMeterChannelInfo>,&UE::CoreUObject::Private::Copy<FAudioMeterChannelInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bShowScale_SetBit @ 14d7e72a0

void __cdecl
Z_Construct_UScriptStruct_FAudioMeterWidgetStyle_Statics::NewProp_bShowScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3b8) = 1;
  return;
}

// NewProp_bScaleSide_SetBit @ 14d7e72b0

void __cdecl
Z_Construct_UScriptStruct_FAudioMeterWidgetStyle_Statics::NewProp_bScaleSide_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
  return;
}

// NewStructOps @ 14d7e72c0

void * __cdecl Z_Construct_UScriptStruct_FAudioMeterWidgetStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x430;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioMeterWidgetStyle,&UE::CoreUObject::Private::Construct<FAudioMeterWidgetStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioMeterWidgetStyle>,&UE::CoreUObject::Private::Destruct<FAudioMeterWidgetStyle>,&UE::CoreUObject::Private::Copy<FAudioMeterWidgetStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d7e7370

void * __cdecl
Z_Construct_UScriptStruct_FAudioMeterDefaultColorWidgetStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioMeterDefaultColorWidgetStyle,&UE::CoreUObject::Private::Construct<FAudioMeterDefaultColorWidgetStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioMeterDefaultColorWidgetStyle>,&UE::CoreUObject::Private::Destruct<FAudioMeterDefaultColorWidgetStyle>,&UE::CoreUObject::Private::Copy<FAudioMeterDefaultColorWidgetStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d7e73d0

void * __thiscall
FAudioWidgetsCoreModule::_scalar_deleting_destructor_(FAudioWidgetsCoreModule *this,uint param_1)

{
  *this = (FAudioWidgetsCoreModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CompareItems<FAudioMeterChannelInfo,int> @ 14d7e7410

bool __cdecl
CompareItems<FAudioMeterChannelInfo,int>
          (FAudioMeterChannelInfo *param_1,FAudioMeterChannelInfo *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  
  if (param_3 != 0) {
    pfVar2 = &param_2->ClippingValue;
    pfVar1 = &param_1->ClippingValue;
    do {
      if (((__real_322bcc77 <
            (float)((uint)(((FAudioMeterChannelInfo *)(pfVar1 + -2))->MeterValue -
                          *(float *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)pfVar1
                                    )) & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
          (__real_322bcc77 <
           (float)((uint)(pfVar1[-1] - pfVar2[-1]) & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
         (__real_322bcc77 <
          (float)((uint)(*pfVar1 - *pfVar2) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        return false;
      }
      pfVar1 = pfVar1 + 3;
      pfVar2 = pfVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// SetWidgetAttribute<FSlateColor,FSlateColor> @ 14d7e7530

bool __cdecl
SetWidgetAttribute<FSlateColor,FSlateColor>
          (SWidget *param_1,TAttribute<FSlateColor> *param_2,TAttribute<FSlateColor> *param_3,
          EInvalidateWidgetReason param_4)

{
  bool bVar1;
  bool bVar2;
  EInvalidateWidgetReason EVar3;
  
  bVar1 = TAttribute<FSlateColor>::IdenticalTo(param_2,param_3);
  if (!bVar1) {
    bVar1 = TAttribute<FSlateColor>::IsBound(param_2);
    bVar2 = TAttribute<FSlateColor>::IsBound(param_3);
    TAttribute<FSlateColor>::operator=(param_2,param_3);
    EVar3 = param_4 | PaintAndVolatility;
    if (bVar1 == bVar2) {
      EVar3 = param_4;
    }
    SWidget::Invalidate(param_1,EVar3);
    return true;
  }
  return false;
}

// SetWidgetAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>,TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> @ 14d7e75d0

bool __cdecl
SetWidgetAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>,TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>
          (SWidget *param_1,
          TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *param_2,
          TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *param_3,
          EInvalidateWidgetReason param_4)

{
  bool bVar1;
  bool bVar2;
  EInvalidateWidgetReason EVar3;
  
  bVar1 = TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IdenticalTo
                    (param_2,param_3);
  if (!bVar1) {
    bVar1 = TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IsBound
                      (param_2);
    bVar2 = TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IsBound
                      (param_3);
    TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::operator=
              (param_2,param_3);
    EVar3 = param_4 | PaintAndVolatility;
    if (bVar1 == bVar2) {
      EVar3 = param_4;
    }
    SWidget::Invalidate(param_1,EVar3);
    return true;
  }
  return false;
}

// `scalar_deleting_destructor' @ 14d7e7ba0

void * __thiscall
FAudioMeterDefaultColorWidgetStyle::_scalar_deleting_destructor_
          (FAudioMeterDefaultColorWidgetStyle *this,uint param_1)

{
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7e7be0

void * __thiscall
FAudioMeterWidgetStyle::_scalar_deleting_destructor_(FAudioMeterWidgetStyle *this,uint param_1)

{
  ~FAudioMeterWidgetStyle(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x430);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAudioMeterChannelInfo @ 14d7e7ed0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMeterChannelInfo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMeterWidgetStyle @ 14d7e7ee0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMeterWidgetStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioWidgetsCore_init @ 14d7e7ef0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioWidgetsCore_init(void)

{
  return;
}

// Z_Construct_UScriptStruct_FAudioMeterChannelInfo @ 14d7eaf70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioMeterChannelInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioMeterChannelInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioMeterChannelInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioMeterChannelInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioMeterChannelInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioMeterChannelInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAudioMeterDefaultColorWidgetStyle @ 14d7eaff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioMeterDefaultColorWidgetStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioMeterDefaultColorWidgetStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioMeterDefaultColorWidgetStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioMeterDefaultColorWidgetStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioMeterDefaultColorWidgetStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioMeterDefaultColorWidgetStyle.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAudioMeterWidgetStyle @ 14d7eb070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioMeterWidgetStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioMeterWidgetStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioMeterWidgetStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioMeterWidgetStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioMeterWidgetStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioMeterWidgetStyle.InnerSingleton;
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

// IMPLEMENT_MODULE_AudioWidgetsCore @ 14d7eb0f0

void __cdecl IMPLEMENT_MODULE_AudioWidgetsCore(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045a3b0

void __cdecl
`FAudioMeterDefaultColorWidgetStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__
          (void)

{
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045a3d0

void __cdecl
`FAudioMeterWidgetStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  ::Default.MeterPeakImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.MeterPeakImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  ::Default.MeterValueBackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.MeterValueBackgroundImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  ::Default.MeterBackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.MeterBackgroundImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  ::Default.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.BackgroundImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  ::Default.MeterValueImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.MeterValueImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

