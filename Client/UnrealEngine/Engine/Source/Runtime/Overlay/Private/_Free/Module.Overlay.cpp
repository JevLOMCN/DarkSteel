// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Overlay
// Functions: 34

// `dynamic_initializer_for_'LogOverlay'' @ 141164960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOverlay__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogOverlay,L"LogOverlay",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogOverlay__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOverlay'' @ 1411649a0

void __cdecl _dynamic_initializer_for__ModuleRegistrantOverlay__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Overlay";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Overlay",7);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FOverlayModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_BasicOverlays_h__Script_Overlay_2071297087'' @ 1411649f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_BasicOverlays_h__Script_Overlay_2071297087__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Overlay",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_BasicOverlays_h__Script_Overlay_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h__Script_Overlay_4198712864'' @ 141164a30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h__Script_Overlay_4198712864__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Overlay",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h__Script_Overlay_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h__Script_Overlay_2728984114'' @ 141164a70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h__Script_Overlay_2728984114__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Overlay",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h__Script_Overlay_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h__Script_Overlay_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_Overlay'' @ 141164ac0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_Overlay__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x350aeaf2;
  local_res8[0].DeclarationsHash = 0x65d9b497;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_Overlay,L"/Script/Overlay",
             &Z_Registration_Info_UPackage__Script_Overlay,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 148bba0c0

void * __thiscall IOverlayModule::_scalar_deleting_destructor_(IOverlayModule *this,uint param_1)

{
  *this = (IOverlayModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bba130

void * __thiscall FOverlayModule::_scalar_deleting_destructor_(FOverlayModule *this,uint param_1)

{
  *this = (FOverlayModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UPackage__Script_Overlay @ 148bba260

UPackage * __cdecl Z_Construct_UPackage__Script_Overlay(void)

{
  if (Z_Registration_Info_UPackage__Script_Overlay.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_Overlay.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_Overlay.OuterSingleton;
}

// Z_Construct_UClass_UOverlays @ 148bba390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOverlays(void)

{
  if (Z_Registration_Info_UClass_UOverlays.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOverlays.OuterSingleton,
               &Z_Construct_UClass_UOverlays_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOverlays.OuterSingleton;
}

// Z_Construct_UScriptStruct_FOverlayItem @ 148bba3d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOverlayItem(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOverlayItem.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOverlayItem.InnerSingleton,
               &Z_Construct_UScriptStruct_FOverlayItem_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FOverlayItem.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOverlayItem.InnerSingleton;
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

// NewStructOps @ 148bba450

void * __cdecl Z_Construct_UScriptStruct_FOverlayItem_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOverlayItem,&UE::CoreUObject::Private::Construct<FOverlayItem>,&UE::CoreUObject::Private::ConstructForTests<FOverlayItem>,&UE::CoreUObject::Private::Destruct<FOverlayItem>,&UE::CoreUObject::Private::Copy<FOverlayItem>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UBasicOverlays_NoRegister @ 148bba490

UClass * __cdecl Z_Construct_UClass_UBasicOverlays_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBasicOverlays.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Overlay",L"BasicOverlays",
               &Z_Registration_Info_UClass_UBasicOverlays.InnerSingleton,
               UBasicOverlays::StaticRegisterNativesUBasicOverlays,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBasicOverlays>,
               InternalVTableHelperCtorCaller<UBasicOverlays>,local_res8,UOverlays::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBasicOverlays.InnerSingleton;
}

// Z_Construct_UClass_UBasicOverlays @ 148bba610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBasicOverlays(void)

{
  if (Z_Registration_Info_UClass_UBasicOverlays.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBasicOverlays.OuterSingleton,
               &Z_Construct_UClass_UBasicOverlays_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBasicOverlays.OuterSingleton;
}

// Z_Construct_UClass_ULocalizedOverlays @ 148bba710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULocalizedOverlays(void)

{
  if (Z_Registration_Info_UClass_ULocalizedOverlays.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULocalizedOverlays.OuterSingleton,
               &Z_Construct_UClass_ULocalizedOverlays_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULocalizedOverlays.OuterSingleton;
}

// ConstructItems<FOverlayItem,FOverlayItem,int> @ 148bba750

void __cdecl
ConstructItems<FOverlayItem,FOverlayItem,int>(void *param_1,FOverlayItem *param_2,int param_3)

{
  TVector2<double> *pTVar1;
  long64 lVar2;
  double dVar3;
  FString *this;
  FString *pFVar4;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x10);
    pFVar4 = &param_2->Text;
    do {
      this[-1].Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)
            ((longlong)this + (longlong)param_2 + (-0x10 - (longlong)param_1));
      lVar2 = (((FOverlayItem *)(pFVar4 + -1))->EndTime).Ticks;
      this[-1].Data.ArrayNum = (int)lVar2;
      this[-1].Data.ArrayMax = (int)((ulonglong)lVar2 >> 0x20);
      FString::FString(this,pFVar4);
      pTVar1 = (TVector2<double> *)(pFVar4 + 1);
      dVar3 = (((TVector2<double> *)(pFVar4 + 1))->field0_0x0)._s_0.Y;
      pFVar4 = pFVar4 + 3;
      this[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)(pTVar1->field0_0x0)._s_0.X;
      *(double *)&this[1].Data.ArrayNum = dVar3;
      this = this + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FOverlayItem,int> @ 148bba7d0

void __cdecl DestructItems<FOverlayItem,int>(FOverlayItem *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Text;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// InternalConstructor<UBasicOverlays> @ 148bba8d0

void __cdecl InternalConstructor<UBasicOverlays>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UBasicOverlays__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<ULocalizedOverlays> @ 148bba910

void __cdecl InternalConstructor<ULocalizedOverlays>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULocalizedOverlays__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
  }
  return;
}

// InternalConstructor<UOverlays> @ 148bba970

void __cdecl InternalConstructor<UOverlays>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UOverlays__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UBasicOverlays> @ 148bba9a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBasicOverlays>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBasicOverlays::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBasicOverlays__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULocalizedOverlays> @ 148bbaa60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULocalizedOverlays>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULocalizedOverlays::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULocalizedOverlays__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOverlays> @ 148bbab40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UOverlays>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOverlays::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOverlays__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 148bbaf80

void * __thiscall UBasicOverlays::_scalar_deleting_destructor_(UBasicOverlays *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBasicOverlays__6B_;
  DestructItems<FOverlayItem,int>
            ((FOverlayItem *)(this->Overlays).AllocatorInstance.Data,(this->Overlays).ArrayNum);
  pFVar1 = (this->Overlays).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UOverlays__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bbb010

void * __thiscall
ULocalizedOverlays::_scalar_deleting_destructor_(ULocalizedOverlays *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULocalizedOverlays__6B_;
  *(undefined4 *)&(this->LocaleToOverlaysMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LocaleToOverlaysMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UBasicOverlays>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UBasicOverlays>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UBasicOverlays>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LocaleToOverlaysMap);
  this->_padding_ = (longlong)&___7UOverlays__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bbb0b0

void * __thiscall UOverlays::_scalar_deleting_destructor_(UOverlays *this,uint param_1)

{
  *(undefined ***)this = &___7UOverlays__6B_;
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

// EmptyLinkFunctionForGeneratedCodeBasicOverlays @ 148bbb1f0

void __cdecl EmptyLinkFunctionForGeneratedCodeBasicOverlays(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLocalizedOverlays @ 148bbb200

void __cdecl EmptyLinkFunctionForGeneratedCodeLocalizedOverlays(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOverlay_init @ 148bbb210

void __cdecl EmptyLinkFunctionForGeneratedCodeOverlay_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOverlays @ 148bbb220

void __cdecl EmptyLinkFunctionForGeneratedCodeOverlays(void)

{
  return;
}

// Z_Construct_UClass_ULocalizedOverlays_NoRegister @ 148bbc5d0

UClass * __cdecl Z_Construct_UClass_ULocalizedOverlays_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalizedOverlays.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Overlay",L"LocalizedOverlays",
               &Z_Registration_Info_UClass_ULocalizedOverlays.InnerSingleton,
               ULocalizedOverlays::StaticRegisterNativesULocalizedOverlays,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULocalizedOverlays>,
               InternalVTableHelperCtorCaller<ULocalizedOverlays>,local_res8,UOverlays::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalizedOverlays.InnerSingleton;
}

// Z_Construct_UClass_UOverlays_NoRegister @ 148bbc690

UClass * __cdecl Z_Construct_UClass_UOverlays_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOverlays.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Overlay",L"Overlays",&Z_Registration_Info_UClass_UOverlays.InnerSingleton,
               UOverlays::StaticRegisterNativesUOverlays,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UOverlays>,
               InternalVTableHelperCtorCaller<UOverlays>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOverlays.InnerSingleton;
}

// IMPLEMENT_MODULE_Overlay @ 148bbc740

void __cdecl IMPLEMENT_MODULE_Overlay(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogOverlay'' @ 15040a800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOverlay__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOverlay);
  return;
}

