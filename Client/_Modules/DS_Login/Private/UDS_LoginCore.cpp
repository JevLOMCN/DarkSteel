// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DS_Login
// Functions: 7

// StaticClass @ 14c265450

UClass * __cdecl UDS_LoginCore::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LoginCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DS_Login",L"DS_LoginCore",
               &Z_Registration_Info_UClass_UDS_LoginCore.InnerSingleton,
               StaticRegisterNativesUDS_LoginCore,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_LoginCore>,InternalVTableHelperCtorCaller<UDS_LoginCore>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LoginCore.InnerSingleton;
}

// UDS_LoginCore @ 14c265740

UDS_LoginCore * __thiscall UDS_LoginCore::UDS_LoginCore(UDS_LoginCore *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsInit = false;
  this->bIsPreLoadRequest_IngameLevel = false;
  this->_padding_ = (longlong)&___7UDS_LoginCore__6B_;
  this->bIsPreLoadComplete_IngameLevel = false;
  ::FString::FString(&this->SessionUID,"");
  FDS_LoginTempData::FDS_LoginTempData(&this->LoginTempData);
  (this->OnCheck_PreLoadComplete_IngameLevel_Handle).Handle = 0;
  (this->LoginAndRegisterRequest).Object = (FDS_HttpRequest *)0x0;
  (this->LoginAndRegisterRequest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UDS_LoginCore @ 14c2657b0

UDS_LoginCore * __thiscall
UDS_LoginCore::UDS_LoginCore(UDS_LoginCore *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsInit = false;
  this->bIsPreLoadRequest_IngameLevel = false;
  this->_padding_ = (longlong)&___7UDS_LoginCore__6B_;
  this->bIsPreLoadComplete_IngameLevel = false;
  ::FString::FString(&this->SessionUID,"");
  FDS_LoginTempData::FDS_LoginTempData(&this->LoginTempData);
  (this->OnCheck_PreLoadComplete_IngameLevel_Handle).Handle = 0;
  (this->LoginAndRegisterRequest).Object = (FDS_HttpRequest *)0x0;
  (this->LoginAndRegisterRequest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UDS_LoginCore @ 14c265820

void __thiscall UDS_LoginCore::~UDS_LoginCore(UDS_LoginCore *this)

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
  return;
}

// GetPrivateStaticClass @ 14c265980

UClass * __cdecl UDS_LoginCore::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LoginCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DS_Login",L"DS_LoginCore",
               &Z_Registration_Info_UClass_UDS_LoginCore.InnerSingleton,
               StaticRegisterNativesUDS_LoginCore,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_LoginCore>,InternalVTableHelperCtorCaller<UDS_LoginCore>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LoginCore.InnerSingleton;
}

// StaticRegisterNativesUDS_LoginCore @ 14c265a30

void __cdecl UDS_LoginCore::StaticRegisterNativesUDS_LoginCore(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_LoginCore_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execPreLoadComplete_IngameLevel @ 14c265b20

void __cdecl
UDS_LoginCore::execPreLoadComplete_IngameLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PreLoadComplete_IngameLevel((UDS_LoginCore *)param_1);
  return;
}

