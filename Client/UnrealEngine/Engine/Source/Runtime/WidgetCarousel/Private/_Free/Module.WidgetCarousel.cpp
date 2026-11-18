// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WidgetCarousel
// Functions: 24

// TypeName'' @ 1411cd0d0

void __cdecl `dynamic_initializer_for_'FWidgetCarouselNavigationBarStyle::TypeName__(void)

{
  ::FName::FName(&FWidgetCarouselNavigationBarStyle::TypeName,L"FWidgetCarouselNavigationBarStyle");
  return;
}

// TypeName'' @ 1411cd0f0

void __cdecl `dynamic_initializer_for_'FWidgetCarouselNavigationButtonStyle::TypeName__(void)

{
  ::FName::FName(&FWidgetCarouselNavigationButtonStyle::TypeName,
                 L"FWidgetCarouselNavigationButtonStyle");
  return;
}

// WidgetCarouselStyleInstance'' @ 1411cd110

void __cdecl
`dynamic_initializer_for_'FWidgetCarouselModuleStyle::WidgetCarouselStyleInstance__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FWidgetCarouselModuleStyle::WidgetCarouselStyleInstance__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWidgetCarousel'' @ 1411cd130

void __cdecl _dynamic_initializer_for__ModuleRegistrantWidgetCarousel__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WidgetCarousel";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WidgetCarousel",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FWidgetCarouselModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WidgetCarousel_Public_WidgetCarouselStyle_h__Script_WidgetCarousel_3913654527'' @ 1411cd180

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WidgetCarousel_Public_WidgetCarouselStyle_h__Script_WidgetCarousel_3913654527__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WidgetCarousel",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WidgetCarousel_Public_WidgetCarouselStyle_h__Script_WidgetCarousel_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_WidgetCarousel'' @ 1411cd1c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_WidgetCarousel__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x10d737cd;
  local_res8[0].DeclarationsHash = 0xdf9eae18;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_WidgetCarousel,L"/Script/WidgetCarousel",
             &Z_Registration_Info_UPackage__Script_WidgetCarousel,local_res8);
  return;
}

// Z_Construct_UPackage__Script_WidgetCarousel @ 14a77a620

UPackage * __cdecl Z_Construct_UPackage__Script_WidgetCarousel(void)

{
  if (Z_Registration_Info_UPackage__Script_WidgetCarousel.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_WidgetCarousel.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_WidgetCarousel.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14a77a700

void * __thiscall
FWidgetCarouselModule::_scalar_deleting_destructor_(FWidgetCarouselModule *this,uint param_1)

{
  *this = (FWidgetCarouselModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 14a77a740

void * __cdecl
Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x500;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetCarouselNavigationButtonStyle,&UE::CoreUObject::Private::Construct<FWidgetCarouselNavigationButtonStyle>,&UE::CoreUObject::Private::ConstructForTests<FWidgetCarouselNavigationButtonStyle>,&UE::CoreUObject::Private::Destruct<FWidgetCarouselNavigationButtonStyle>,&UE::CoreUObject::Private::Copy<FWidgetCarouselNavigationButtonStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a77a780

void * __cdecl
Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetCarouselNavigationBarStyle,&UE::CoreUObject::Private::Construct<FWidgetCarouselNavigationBarStyle>,&UE::CoreUObject::Private::ConstructForTests<FWidgetCarouselNavigationBarStyle>,&UE::CoreUObject::Private::Destruct<FWidgetCarouselNavigationBarStyle>,&UE::CoreUObject::Private::Copy<FWidgetCarouselNavigationBarStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a77b2c0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SCarouselNavigationBar_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SCarouselNavigationBar_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 14a77b320

void * __thiscall
TBaseSPMethodDelegateInstance<0,SCarouselNavigationBar,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SCarouselNavigationBar,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,int>
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

// `scalar_deleting_destructor' @ 14a77b380

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWidgetCarouselNavigationBarStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FWidgetCarouselNavigationBarStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a77b3c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWidgetCarouselNavigationButtonStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FWidgetCarouselNavigationButtonStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x510);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a77b400

void * __thiscall
FWidgetCarouselNavigationBarStyle::_scalar_deleting_destructor_
          (FWidgetCarouselNavigationBarStyle *this,uint param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FWidgetCarouselNavigationBarStyle__6B_;
  FButtonStyle::~FButtonStyle(&this->RightButtonStyle);
  FButtonStyle::~FButtonStyle(&this->CenterButtonStyle);
  FButtonStyle::~FButtonStyle(&this->LeftButtonStyle);
  pTVar1 = (this->HighlightBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->HighlightBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a77b490

void * __thiscall
FWidgetCarouselNavigationButtonStyle::_scalar_deleting_destructor_
          (FWidgetCarouselNavigationButtonStyle *this,uint param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FWidgetCarouselNavigationButtonStyle__6B_;
  (this->NavigationButtonRightImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NavigationButtonRightImage).ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  pTVar1 = (this->NavigationButtonLeftImage).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->NavigationButtonLeftImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FButtonStyle::~FButtonStyle(&this->InnerButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x500);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeWidgetCarouselStyle @ 14a77df60

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetCarouselStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetCarousel_init @ 14a77df70

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetCarousel_init(void)

{
  return;
}

// Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle @ 14a77f1e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetCarouselNavigationBarStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetCarouselNavigationBarStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetCarouselNavigationBarStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetCarouselNavigationBarStyle.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle @ 14a77f260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetCarouselNavigationButtonStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetCarouselNavigationButtonStyle.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetCarouselNavigationButtonStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetCarouselNavigationButtonStyle.InnerSingleton;
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

// IMPLEMENT_MODULE_WidgetCarousel @ 14a77f2e0

void __cdecl IMPLEMENT_MODULE_WidgetCarousel(void)

{
  return;
}

// WidgetCarouselStyleInstance'' @ 150420bd0

void __cdecl
`dynamic_atexit_destructor_for_'FWidgetCarouselModuleStyle::WidgetCarouselStyleInstance__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FWidgetCarouselModuleStyle::WidgetCarouselStyleInstance.SharedReferenceCount.
             ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150420bf0

void __cdecl
`FWidgetCarouselNavigationBarStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__
          (void)

{
  ::Default._padding_ = (longlong)&___7FWidgetCarouselNavigationBarStyle__6B_;
  FButtonStyle::~FButtonStyle(&::Default.RightButtonStyle);
  FButtonStyle::~FButtonStyle(&::Default.CenterButtonStyle);
  FButtonStyle::~FButtonStyle(&::Default.LeftButtonStyle);
  ::Default.HighlightBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.HighlightBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150420c60

void __cdecl
`FWidgetCarouselNavigationButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__
          (void)

{
  ::Default._padding_ = (longlong)&___7FWidgetCarouselNavigationButtonStyle__6B_;
  ::Default.NavigationButtonRightImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.NavigationButtonRightImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  ::Default.NavigationButtonLeftImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.NavigationButtonLeftImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FButtonStyle::~FButtonStyle(&::Default.InnerButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

