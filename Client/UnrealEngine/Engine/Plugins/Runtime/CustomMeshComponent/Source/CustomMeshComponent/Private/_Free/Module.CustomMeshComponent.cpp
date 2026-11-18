// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CustomMeshComponent
// Functions: 25

// `dynamic_initializer_for_'ModuleRegistrantCustomMeshComponent'' @ 141450570

void __cdecl _dynamic_initializer_for__ModuleRegistrantCustomMeshComponent__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "CustomMeshComponent";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"CustomMeshComponent",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FCustomMeshComponentPlugin>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h__Script_CustomMeshComponent_829267312'' @ 1414505c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h__Script_CustomMeshComponent_829267312__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CustomMeshComponent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h__Script_CustomMeshComponent_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h__Script_CustomMeshComponent_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_CustomMeshComponent'' @ 141450610

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_CustomMeshComponent__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x285f639b;
  local_res8[0].DeclarationsHash = 0xbfacae25;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_CustomMeshComponent,L"/Script/CustomMeshComponent",
             &Z_Registration_Info_UPackage__Script_CustomMeshComponent,local_res8);
  return;
}

// Z_Construct_UPackage__Script_CustomMeshComponent @ 14f02f380

UPackage * __cdecl Z_Construct_UPackage__Script_CustomMeshComponent(void)

{
  if (Z_Registration_Info_UPackage__Script_CustomMeshComponent.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_CustomMeshComponent.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_CustomMeshComponent.OuterSingleton;
}

// Z_Construct_UClass_UCustomMeshComponent @ 14f02f4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCustomMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UCustomMeshComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCustomMeshComponent.OuterSingleton,
               &Z_Construct_UClass_UCustomMeshComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCustomMeshComponent.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCustomMeshTriangle @ 14f02f500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCustomMeshTriangle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCustomMeshTriangle.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCustomMeshTriangle.InnerSingleton,
               &Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCustomMeshTriangle.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCustomMeshTriangle.InnerSingleton;
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

// NewStructOps @ 14f02f580

void * __cdecl Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCustomMeshTriangle,&UE::CoreUObject::Private::Construct<FCustomMeshTriangle>,&UE::CoreUObject::Private::ConstructForTests<FCustomMeshTriangle>,&UE::CoreUObject::Private::Destruct<FCustomMeshTriangle>,&UE::CoreUObject::Private::Copy<FCustomMeshTriangle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles @ 14f02f5c0

UFunction * __cdecl Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCustomMeshComponent_ClearCustomMeshTriangles @ 14f02f600

UFunction * __cdecl Z_Construct_UFunction_UCustomMeshComponent_ClearCustomMeshTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCustomMeshComponent_ClearCustomMeshTriangles_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f02f640

void __cdecl
Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles @ 14f02f650

UFunction * __cdecl Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14f02f690

void * __thiscall
ICustomMeshComponentPlugin::_scalar_deleting_destructor_
          (ICustomMeshComponentPlugin *this,uint param_1)

{
  *this = (ICustomMeshComponentPlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f02f6f0

void * __thiscall
FCustomMeshComponentPlugin::_scalar_deleting_destructor_
          (FCustomMeshComponentPlugin *this,uint param_1)

{
  *this = (FCustomMeshComponentPlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// InternalConstructor<UCustomMeshComponent> @ 14f02f850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UCustomMeshComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UMeshComponent *this;
  
  this = (UMeshComponent *)param_1->Obj;
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 & 0xfd;
    this->_padding_ = (longlong)&UCustomMeshComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UCustomMeshComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UCustomMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UCustomMeshComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ = (longlong)&UCustomMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UCustomMeshComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    UPrimitiveComponent::SetCollisionProfileName
              ((UPrimitiveComponent *)this,UCollisionProfile::BlockAllDynamic_ProfileName,true);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UCustomMeshComponent> @ 14f02f8f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCustomMeshComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCustomMeshComponent::GetPrivateStaticClass();
  this = (UMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UCustomMeshComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UCustomMeshComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UCustomMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UCustomMeshComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ = (longlong)&UCustomMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UCustomMeshComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14f0306b8

/* [thunk]:public: virtual void * __ptr64 __cdecl UCustomMeshComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UCustomMeshComponent::_vector_deleting_destructor__adjustor_592__
          (UCustomMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCustomMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14f0306cc

/* [thunk]:public: virtual void * __ptr64 __cdecl UCustomMeshComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UCustomMeshComponent::_vector_deleting_destructor__adjustor_600__
          (UCustomMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCustomMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14f0306e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UCustomMeshComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UCustomMeshComponent::_vector_deleting_destructor__adjustor_608__
          (UCustomMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCustomMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14f0306f4

/* [thunk]:public: virtual void * __ptr64 __cdecl UCustomMeshComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCustomMeshComponent::_vector_deleting_destructor__adjustor_40__
          (UCustomMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCustomMeshComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f030710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FCustomMeshSceneProxy::_scalar_deleting_destructor_(FCustomMeshSceneProxy *this,uint param_1)

{
  FStaticMeshVertexBuffers *this_00;
  
  *(undefined ***)this = &___7FCustomMeshSceneProxy__6B_;
  this_00 = &this->VertexBuffers;
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x20))(this_00);
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x660);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f030820

void * __thiscall
UCustomMeshComponent::_scalar_deleting_destructor_(UCustomMeshComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->CustomMeshTris).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5a0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeCustomMeshComponent @ 14f031280

void __cdecl EmptyLinkFunctionForGeneratedCodeCustomMeshComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCustomMeshComponent_init @ 14f031290

void __cdecl EmptyLinkFunctionForGeneratedCodeCustomMeshComponent_init(void)

{
  return;
}

// Z_Construct_UClass_UCustomMeshComponent_NoRegister @ 14f031ca0

UClass * __cdecl Z_Construct_UClass_UCustomMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomMeshComponent",L"CustomMeshComponent",
               &Z_Registration_Info_UClass_UCustomMeshComponent.InnerSingleton,
               UCustomMeshComponent::StaticRegisterNativesUCustomMeshComponent,0x5a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCustomMeshComponent>,
               InternalVTableHelperCtorCaller<UCustomMeshComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomMeshComponent.InnerSingleton;
}

// IMPLEMENT_MODULE_CustomMeshComponent @ 14f032080

void __cdecl IMPLEMENT_MODULE_CustomMeshComponent(void)

{
  return;
}

