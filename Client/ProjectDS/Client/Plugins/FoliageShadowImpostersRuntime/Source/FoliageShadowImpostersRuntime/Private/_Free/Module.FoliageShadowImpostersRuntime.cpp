// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FoliageShadowImpostersRuntime
// Functions: 19

// `dynamic_initializer_for_'FoliageShadowImpostersTabName'' @ 1413ff6e0

void __cdecl _dynamic_initializer_for__FoliageShadowImpostersTabName__(void)

{
  FName::FName(&FoliageShadowImpostersTabName,"FoliageShadowImposters");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantFoliageShadowImpostersRuntime'' @ 1413ff700

void __cdecl _dynamic_initializer_for__ModuleRegistrantFoliageShadowImpostersRuntime__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "FoliageShadowImpostersRuntime";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"FoliageShadowImpostersRuntime",0x1d);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FFoliageShadowImpostersRuntimeModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_FoliageShadowImpostersRuntime_Source_FoliageShadowImpostersRuntime_Public_FoliageShadowImposterComponent_h__Script_FoliageShadowImpostersRuntime_4036506750'' @ 1413ff750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_FoliageShadowImpostersRuntime_Source_FoliageShadowImpostersRuntime_Public_FoliageShadowImposterComponent_h__Script_FoliageShadowImpostersRuntime_4036506750__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FoliageShadowImpostersRuntime",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_FoliageShadowImpostersRuntime_Source_FoliageShadowImpostersRuntime_Public_FoliageShadowImposterComponent_h__Script_FoliageShadowImpostersRuntime_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_FoliageShadowImpostersRuntime'' @ 1413ff790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_FoliageShadowImpostersRuntime__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xaa412171;
  local_res8[0].DeclarationsHash = 0xf51eaf5d;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_FoliageShadowImpostersRuntime,
             L"/Script/FoliageShadowImpostersRuntime",
             &Z_Registration_Info_UPackage__Script_FoliageShadowImpostersRuntime,local_res8);
  return;
}

// Z_Construct_UClass_UFoliageShadowImposterComponent @ 14de39420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFoliageShadowImposterComponent(void)

{
  if (Z_Registration_Info_UClass_UFoliageShadowImposterComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFoliageShadowImposterComponent.OuterSingleton,
               &Z_Construct_UClass_UFoliageShadowImposterComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFoliageShadowImposterComponent.OuterSingleton;
}

// Z_Construct_UPackage__Script_FoliageShadowImpostersRuntime @ 14de39460

UPackage * __cdecl Z_Construct_UPackage__Script_FoliageShadowImpostersRuntime(void)

{
  if (Z_Registration_Info_UPackage__Script_FoliageShadowImpostersRuntime.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_FoliageShadowImpostersRuntime.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_FoliageShadowImpostersRuntime.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14de394c0

void * __thiscall
FFoliageShadowImpostersRuntimeModule::_scalar_deleting_destructor_
          (FFoliageShadowImpostersRuntimeModule *this,uint param_1)

{
  *this = (FFoliageShadowImpostersRuntimeModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// InternalConstructor<UFoliageShadowImposterComponent> @ 14de39500

void __cdecl InternalConstructor<UFoliageShadowImposterComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UFoliageInstancedStaticMeshComponent *this;
  FObjectInitializer *pFVar2;
  
  this = (UFoliageInstancedStaticMeshComponent *)param_1->Obj;
  if (this != (UFoliageInstancedStaticMeshComponent *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UFoliageInstancedStaticMeshComponent::UFoliageInstancedStaticMeshComponent(this,pFVar2);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 | 8;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 7);
    *pbVar1 = *pbVar1 | 0x20;
    this->_padding_ = (longlong)&UFoliageShadowImposterComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UFoliageShadowImposterComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UFoliageShadowImposterComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UFoliageShadowImposterComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UFoliageShadowImposterComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UFoliageShadowImposterComponent::_vftable__for__IPhysicsComponent__
    ;
    this->_padding_ = (longlong)&___7UFoliageShadowImposterComponent__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UFoliageShadowImposterComponent> @ 14de395a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UFoliageShadowImposterComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UFoliageInstancedStaticMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFoliageShadowImposterComponent::GetPrivateStaticClass();
  this = (UFoliageInstancedStaticMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UFoliageInstancedStaticMeshComponent *)0x0) {
    UFoliageInstancedStaticMeshComponent::UFoliageInstancedStaticMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UFoliageShadowImposterComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UFoliageShadowImposterComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UFoliageShadowImposterComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UFoliageShadowImposterComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UFoliageShadowImposterComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UFoliageShadowImposterComponent::_vftable__for__IPhysicsComponent__
    ;
    this->_padding_ = (longlong)&___7UFoliageShadowImposterComponent__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14de39824

/* [thunk]:public: virtual void * __ptr64 __cdecl UFoliageShadowImposterComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UFoliageShadowImposterComponent::_vector_deleting_destructor__adjustor_592__
          (UFoliageShadowImposterComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UFoliageShadowImposterComponent *)&this[-1].field_0x990,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14de39838

/* [thunk]:public: virtual void * __ptr64 __cdecl UFoliageShadowImposterComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UFoliageShadowImposterComponent::_vector_deleting_destructor__adjustor_600__
          (UFoliageShadowImposterComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UFoliageShadowImposterComponent *)&this[-1].field_0x988,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14de3984c

/* [thunk]:public: virtual void * __ptr64 __cdecl UFoliageShadowImposterComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UFoliageShadowImposterComponent::_vector_deleting_destructor__adjustor_608__
          (UFoliageShadowImposterComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UFoliageShadowImposterComponent *)&this[-1].field_0x980,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14de39860

/* [thunk]:public: virtual void * __ptr64 __cdecl UFoliageShadowImposterComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UFoliageShadowImposterComponent::_vector_deleting_destructor__adjustor_40__
          (UFoliageShadowImposterComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UFoliageShadowImposterComponent *)&this[-1].field_0xbb8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1616}' @ 14de39870

/* [thunk]:public: virtual void * __ptr64 __cdecl UFoliageShadowImposterComponent::`vector deleting
   destructor'`adjustor{1616}' (unsigned int) __ptr64 */

void * __thiscall
UFoliageShadowImposterComponent::_vector_deleting_destructor__adjustor_1616__
          (UFoliageShadowImposterComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UFoliageShadowImposterComponent *)&this[-1].field_0x590,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14de39890

void * __thiscall
UFoliageShadowImposterComponent::_scalar_deleting_destructor_
          (UFoliageShadowImposterComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UFoliageShadowImposterComponent__6B_;
  UFoliageInstancedStaticMeshComponent::~UFoliageInstancedStaticMeshComponent
            ((UFoliageInstancedStaticMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xbe0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeFoliageShadowImposterComponent @ 14de39940

void __cdecl EmptyLinkFunctionForGeneratedCodeFoliageShadowImposterComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFoliageShadowImpostersRuntime_init @ 14de39950

void __cdecl EmptyLinkFunctionForGeneratedCodeFoliageShadowImpostersRuntime_init(void)

{
  return;
}

// Z_Construct_UClass_UFoliageShadowImposterComponent_NoRegister @ 14de39a60

UClass * __cdecl Z_Construct_UClass_UFoliageShadowImposterComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageShadowImposterComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FoliageShadowImpostersRuntime",L"FoliageShadowImposterComponent",
               &Z_Registration_Info_UClass_UFoliageShadowImposterComponent.InnerSingleton,
               UFoliageShadowImposterComponent::StaticRegisterNativesUFoliageShadowImposterComponent
               ,0xbe0,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UFoliageShadowImposterComponent>,
               InternalVTableHelperCtorCaller<UFoliageShadowImposterComponent>,local_res8,
               UFoliageInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageShadowImposterComponent.InnerSingleton;
}

// IMPLEMENT_MODULE_FoliageShadowImpostersRuntime @ 14de39b20

void __cdecl IMPLEMENT_MODULE_FoliageShadowImpostersRuntime(void)

{
  return;
}

