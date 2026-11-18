// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 148aaa1b0

UClass * __cdecl ASpatialHashRuntimeGridInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpatialHashRuntimeGridInfo",
               &Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.InnerSingleton,
               StaticRegisterNativesASpatialHashRuntimeGridInfo,0x2c8,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<ASpatialHashRuntimeGridInfo>,
               InternalVTableHelperCtorCaller<ASpatialHashRuntimeGridInfo>,local_res8,
               AInfo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.InnerSingleton;
}

// ASpatialHashRuntimeGridInfo @ 148ab31c0

ASpatialHashRuntimeGridInfo * __thiscall
ASpatialHashRuntimeGridInfo::ASpatialHashRuntimeGridInfo
          (ASpatialHashRuntimeGridInfo *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7ASpatialHashRuntimeGridInfo__6B_;
  return this;
}

// ASpatialHashRuntimeGridInfo @ 148ab31f0

ASpatialHashRuntimeGridInfo * __thiscall
ASpatialHashRuntimeGridInfo::ASpatialHashRuntimeGridInfo
          (ASpatialHashRuntimeGridInfo *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"Sprite");
  FVar1 = *pFVar2;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7ASpatialHashRuntimeGridInfo__6B_;
  return this;
}

// ~ASpatialHashRuntimeGridInfo @ 148ab6f30

void __thiscall
ASpatialHashRuntimeGridInfo::~ASpatialHashRuntimeGridInfo(ASpatialHashRuntimeGridInfo *this)

{
  this->_padding_ = (longlong)&___7ASpatialHashRuntimeGridInfo__6B_;
  AInfo::~AInfo((AInfo *)this);
  return;
}

// GetPrivateStaticClass @ 148aceb40

UClass * __cdecl ASpatialHashRuntimeGridInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpatialHashRuntimeGridInfo",
               &Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.InnerSingleton,
               StaticRegisterNativesASpatialHashRuntimeGridInfo,0x2c8,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<ASpatialHashRuntimeGridInfo>,
               InternalVTableHelperCtorCaller<ASpatialHashRuntimeGridInfo>,local_res8,
               AInfo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASpatialHashRuntimeGridInfo.InnerSingleton;
}

// Serialize @ 148ada8e0

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
ASpatialHashRuntimeGridInfo::Serialize(ASpatialHashRuntimeGridInfo *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  AActor::Serialize((AActor *)this,param_1);
  return;
}

// Serialize @ 148ada920

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
ASpatialHashRuntimeGridInfo::Serialize
          (ASpatialHashRuntimeGridInfo *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteMainBranchObjectVersion::GUID);
  AActor::Serialize((AActor *)this,pFVar1);
  return;
}

// StaticRegisterNativesASpatialHashRuntimeGridInfo @ 148adb7b0

void __cdecl ASpatialHashRuntimeGridInfo::StaticRegisterNativesASpatialHashRuntimeGridInfo(void)

{
  return;
}

