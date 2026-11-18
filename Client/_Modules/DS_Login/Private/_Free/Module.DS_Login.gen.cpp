// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DS_Login
// Functions: 16

// `dynamic_initializer_for_'ErrorNamespace'' @ 14129c9a0

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 14129c9d0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 14129c9f0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 14129ca10

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_GameModule_DS_Login_Private_DS_LoginCore_h__Script_DS_Login_1549934992'' @ 14129ca30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_GameModule_DS_Login_Private_DS_LoginCore_h__Script_DS_Login_1549934992__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DS_Login",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_GameModule_DS_Login_Private_DS_LoginCore_h__Script_DS_Login_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_DS_Login'' @ 14129ca70

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_DS_Login__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xf9f57da8;
  local_res8[0].DeclarationsHash = 0x9c630398;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_DS_Login,L"/Script/DS_Login",
             &Z_Registration_Info_UPackage__Script_DS_Login,local_res8);
  return;
}

// Z_Construct_UPackage__Script_DS_Login @ 14c265410

UPackage * __cdecl Z_Construct_UPackage__Script_DS_Login(void)

{
  if (Z_Registration_Info_UPackage__Script_DS_Login.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_DS_Login.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_DS_Login.OuterSingleton;
}

// Z_Construct_UClass_UDS_LoginCore @ 14c265500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_LoginCore(void)

{
  if (Z_Registration_Info_UClass_UDS_LoginCore.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_LoginCore.OuterSingleton,
               &Z_Construct_UClass_UDS_LoginCore_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_LoginCore.OuterSingleton;
}

// Z_Construct_UFunction_UDS_LoginCore_PreLoadComplete_IngameLevel @ 14c265540

UFunction * __cdecl Z_Construct_UFunction_UDS_LoginCore_PreLoadComplete_IngameLevel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_LoginCore_PreLoadComplete_IngameLevel_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// InternalConstructor<UDS_LoginCore> @ 14c265580

void __cdecl InternalConstructor<UDS_LoginCore>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDS_LoginCore__6B_;
    this[1].field_0x2 = 0;
    FString::FString((FString *)&this[1].field_0x8,"");
    FDS_LoginTempData::FDS_LoginTempData((FDS_LoginTempData *)&this[1].field_0x18);
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDS_LoginCore> @ 14c2655f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_LoginCore>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_LoginCore::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDS_LoginCore__6B_;
    pUVar1[1].field_0x2 = 0;
    FString::FString((FString *)&pUVar1[1].field_0x8,"");
    FDS_LoginTempData::FDS_LoginTempData((FDS_LoginTempData *)&pUVar1[1].field_0x18);
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14c2658a0

void * __thiscall UDS_LoginCore::_scalar_deleting_destructor_(UDS_LoginCore *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_LoginCore__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LoginAndRegisterRequest).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->LoginTempData).JwtKey.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoginTempData).SessionUID.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoginTempData).Password.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoginTempData).ID.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SessionUID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeDS_LoginCore @ 14c265960

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_LoginCore(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_Login_init @ 14c265970

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_Login_init(void)

{
  return;
}

// Z_Construct_UClass_UDS_LoginCore_NoRegister @ 14c265a70

UClass * __cdecl Z_Construct_UClass_UDS_LoginCore_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LoginCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DS_Login",L"DS_LoginCore",
               &Z_Registration_Info_UClass_UDS_LoginCore.InnerSingleton,
               UDS_LoginCore::StaticRegisterNativesUDS_LoginCore,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LoginCore>,
               InternalVTableHelperCtorCaller<UDS_LoginCore>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LoginCore.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 150444670

void __cdecl EHttpResponseCodes::_dynamic_atexit_destructor_for__ErrorNamespace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorNamespace.Data.AllocatorInstance.Data;
  if (ErrorNamespace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorNamespace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

