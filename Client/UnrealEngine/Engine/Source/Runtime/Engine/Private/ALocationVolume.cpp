// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 147e8d360

UClass * __cdecl ALocationVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALocationVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocationVolume",
               &Z_Registration_Info_UClass_ALocationVolume.InnerSingleton,
               StaticRegisterNativesALocationVolume,0x308,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALocationVolume>,
               InternalVTableHelperCtorCaller<ALocationVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALocationVolume.InnerSingleton;
}

// ALocationVolume @ 147ea4880

ALocationVolume * __thiscall
ALocationVolume::ALocationVolume(ALocationVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AVolume__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionActorLoaderInterface__;
  return this;
}

// ALocationVolume @ 147ea48c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ALocationVolume * __thiscall
ALocationVolume::ALocationVolume(ALocationVolume *this,FObjectInitializer *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AVolume__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionActorLoaderInterface__;
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this->_padding_,false);
  AActor::SetActorEnableCollision((AActor *)this,false);
  return this;
}

// ~ALocationVolume @ 147ea8c30

void __thiscall ALocationVolume::~ALocationVolume(ALocationVolume *this)

{
  this->_padding_ = (longlong)&_vftable__for__AVolume__;
  this->_padding_ = (longlong)&___7IWorldPartitionActorLoaderInterface__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 147ec4260

UClass * __cdecl ALocationVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALocationVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocationVolume",
               &Z_Registration_Info_UClass_ALocationVolume.InnerSingleton,
               StaticRegisterNativesALocationVolume,0x308,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALocationVolume>,
               InternalVTableHelperCtorCaller<ALocationVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALocationVolume.InnerSingleton;
}

// IsEditorOnly @ 147ecd560

bool __thiscall ALocationVolume::IsEditorOnly(ALocationVolume *this)

{
  return true;
}

// IsLoaded @ 147ecdcd0

bool __thiscall ALocationVolume::IsLoaded(ALocationVolume *this)

{
  return false;
}

// Load @ 147ece8a0

void __thiscall ALocationVolume::Load(ALocationVolume *this)

{
  return;
}

// StaticRegisterNativesALocationVolume @ 147edf0c0

void __cdecl ALocationVolume::StaticRegisterNativesALocationVolume(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_ALocationVolume_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Unload @ 147ee4ca0

void __thiscall ALocationVolume::Unload(ALocationVolume *this)

{
  return;
}

// _getUObject @ 147ee7970

UObject * __thiscall ALocationVolume::_getUObject(ALocationVolume *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execIsLoaded @ 147ee8250

void __cdecl ALocationVolume::execIsLoaded(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execLoad @ 147ee8270

void __cdecl ALocationVolume::execLoad(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execUnload @ 147ee89d0

void __cdecl ALocationVolume::execUnload(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

