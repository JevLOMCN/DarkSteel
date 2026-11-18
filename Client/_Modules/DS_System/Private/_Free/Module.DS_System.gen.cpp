// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DS_System
// Functions: 17

// `dynamic_initializer_for_'ErrorNamespace'' @ 14129d1f0

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 14129d220

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 14129d240

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 14129d260

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_GameModule_DS_System_Private_DS_SystemCore_h__Script_DS_System_1397246295'' @ 14129d280

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_GameModule_DS_System_Private_DS_SystemCore_h__Script_DS_System_1397246295__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DS_System",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Source_GameModule_DS_System_Private_DS_SystemCore_h__Script_DS_System_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_DS_System'' @ 14129d2c0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_DS_System__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xc1477e64;
  local_res8[0].DeclarationsHash = 0xcfa6b3ef;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_DS_System,L"/Script/DS_System",
             &Z_Registration_Info_UPackage__Script_DS_System,local_res8);
  return;
}

// Z_Construct_UPackage__Script_DS_System @ 14c26ba00

UPackage * __cdecl Z_Construct_UPackage__Script_DS_System(void)

{
  if (Z_Registration_Info_UPackage__Script_DS_System.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_DS_System.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_DS_System.OuterSingleton;
}

// Z_Construct_UClass_UDS_SystemCore @ 14c26baf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDS_SystemCore(void)

{
  if (Z_Registration_Info_UClass_UDS_SystemCore.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDS_SystemCore.OuterSingleton,
               &Z_Construct_UClass_UDS_SystemCore_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDS_SystemCore.OuterSingleton;
}

// Z_Construct_UFunction_UDS_SystemCore_Request_GetFrontEndServerAddr @ 14c26bb30

UFunction * __cdecl Z_Construct_UFunction_UDS_SystemCore_Request_GetFrontEndServerAddr(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_SystemCore_Request_GetFrontEndServerAddr_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDS_SystemCore_Request_ServerListInfo @ 14c26bb70

UFunction * __cdecl Z_Construct_UFunction_UDS_SystemCore_Request_ServerListInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDS_SystemCore_Request_ServerListInfo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UDS_SystemCore> @ 14c26bbb0

void __cdecl InternalConstructor<UDS_SystemCore>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDS_SystemCore__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    FString::FString((FString *)&this[2].field_0x8,"");
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDS_SystemCore> @ 14c26bc10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDS_SystemCore>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDS_SystemCore::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDS_SystemCore__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    FString::FString((FString *)&pUVar1[2].field_0x8,"");
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14c26be00

void * __thiscall UDS_SystemCore::_scalar_deleting_destructor_(UDS_SystemCore *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_SystemCore__6B_;
  pFVar1 = (this->SessionUID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ServerListInfoRequest).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FrontEndServerAddrRequest).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeDS_SystemCore @ 14c26be90

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_SystemCore(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDS_System_init @ 14c26bea0

void __cdecl EmptyLinkFunctionForGeneratedCodeDS_System_init(void)

{
  return;
}

// Z_Construct_UClass_UDS_SystemCore_NoRegister @ 14c26bfa0

UClass * __cdecl Z_Construct_UClass_UDS_SystemCore_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SystemCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DS_System",L"DS_SystemCore",
               &Z_Registration_Info_UClass_UDS_SystemCore.InnerSingleton,
               UDS_SystemCore::StaticRegisterNativesUDS_SystemCore,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SystemCore>,
               InternalVTableHelperCtorCaller<UDS_SystemCore>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SystemCore.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 150444750

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

