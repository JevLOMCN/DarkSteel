// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PacketHandler
// Functions: 6

// StaticClass @ 14463d1b0

UClass * __cdecl UPacketHandlerProfileConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPacketHandlerProfileConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PacketHandler",L"PacketHandlerProfileConfig",
               &Z_Registration_Info_UClass_UPacketHandlerProfileConfig.InnerSingleton,
               StaticRegisterNativesUPacketHandlerProfileConfig,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPacketHandlerProfileConfig>,
               InternalVTableHelperCtorCaller<UPacketHandlerProfileConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPacketHandlerProfileConfig.InnerSingleton;
}

// UPacketHandlerProfileConfig @ 14463da70

UPacketHandlerProfileConfig * __thiscall
UPacketHandlerProfileConfig::UPacketHandlerProfileConfig
          (UPacketHandlerProfileConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPacketHandlerProfileConfig__6B_;
  (this->Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Components).ArrayNum = 0;
  (this->Components).ArrayMax = 0;
  return this;
}

// UPacketHandlerProfileConfig @ 14463dab0

UPacketHandlerProfileConfig * __thiscall
UPacketHandlerProfileConfig::UPacketHandlerProfileConfig
          (UPacketHandlerProfileConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPacketHandlerProfileConfig__6B_;
  (this->Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Components).ArrayNum = 0;
  (this->Components).ArrayMax = 0;
  return this;
}

// ~UPacketHandlerProfileConfig @ 14463db60

void __thiscall
UPacketHandlerProfileConfig::~UPacketHandlerProfileConfig(UPacketHandlerProfileConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPacketHandlerProfileConfig__6B_;
  DestructItems<FString,int>
            ((FString *)(this->Components).AllocatorInstance.Data,(this->Components).ArrayNum);
  pFVar1 = (this->Components).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14463f4c0

UClass * __cdecl UPacketHandlerProfileConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPacketHandlerProfileConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PacketHandler",L"PacketHandlerProfileConfig",
               &Z_Registration_Info_UClass_UPacketHandlerProfileConfig.InnerSingleton,
               StaticRegisterNativesUPacketHandlerProfileConfig,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPacketHandlerProfileConfig>,
               InternalVTableHelperCtorCaller<UPacketHandlerProfileConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPacketHandlerProfileConfig.InnerSingleton;
}

// StaticRegisterNativesUPacketHandlerProfileConfig @ 144643120

void __cdecl UPacketHandlerProfileConfig::StaticRegisterNativesUPacketHandlerProfileConfig(void)

{
  return;
}

