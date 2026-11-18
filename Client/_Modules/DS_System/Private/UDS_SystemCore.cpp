// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DS_System
// Functions: 8

// StaticClass @ 14c26ba40

UClass * __cdecl UDS_SystemCore::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SystemCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DS_System",L"DS_SystemCore",
               &Z_Registration_Info_UClass_UDS_SystemCore.InnerSingleton,
               StaticRegisterNativesUDS_SystemCore,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_SystemCore>,InternalVTableHelperCtorCaller<UDS_SystemCore>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SystemCore.InnerSingleton;
}

// UDS_SystemCore @ 14c26bcf0

UDS_SystemCore * __thiscall
UDS_SystemCore::UDS_SystemCore(UDS_SystemCore *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsInit = false;
  this->_padding_ = (longlong)&___7UDS_SystemCore__6B_;
  (this->FrontEndServerAddrRequest).Object = (FDS_HttpRequest *)0x0;
  (this->FrontEndServerAddrRequest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ServerListInfoRequest).Object = (FDS_HttpRequest *)0x0;
  (this->ServerListInfoRequest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->HealthTimerHandle).Handle = 0;
  ::FString::FString(&this->SessionUID,"");
  return this;
}

// UDS_SystemCore @ 14c26bd50

UDS_SystemCore * __thiscall
UDS_SystemCore::UDS_SystemCore(UDS_SystemCore *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsInit = false;
  this->_padding_ = (longlong)&___7UDS_SystemCore__6B_;
  (this->FrontEndServerAddrRequest).Object = (FDS_HttpRequest *)0x0;
  (this->FrontEndServerAddrRequest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ServerListInfoRequest).Object = (FDS_HttpRequest *)0x0;
  (this->ServerListInfoRequest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->HealthTimerHandle).Handle = 0;
  ::FString::FString(&this->SessionUID,"");
  return this;
}

// ~UDS_SystemCore @ 14c26bdb0

void __thiscall UDS_SystemCore::~UDS_SystemCore(UDS_SystemCore *this)

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
  return;
}

// GetPrivateStaticClass @ 14c26beb0

UClass * __cdecl UDS_SystemCore::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SystemCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DS_System",L"DS_SystemCore",
               &Z_Registration_Info_UClass_UDS_SystemCore.InnerSingleton,
               StaticRegisterNativesUDS_SystemCore,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_SystemCore>,InternalVTableHelperCtorCaller<UDS_SystemCore>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SystemCore.InnerSingleton;
}

// StaticRegisterNativesUDS_SystemCore @ 14c26bf60

void __cdecl UDS_SystemCore::StaticRegisterNativesUDS_SystemCore(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_SystemCore_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execRequest_GetFrontEndServerAddr @ 14c26c050

void __cdecl
UDS_SystemCore::execRequest_GetFrontEndServerAddr(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Request_GetFrontEndServerAddr((UDS_SystemCore *)param_1);
  return;
}

// execRequest_ServerListInfo @ 14c26c070

void __cdecl
UDS_SystemCore::execRequest_ServerListInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Request_ServerListInfo((UDS_SystemCore *)param_1);
  return;
}

