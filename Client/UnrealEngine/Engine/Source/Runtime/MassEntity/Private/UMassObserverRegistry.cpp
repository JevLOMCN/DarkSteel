// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 10

// StaticClass @ 1471b46f0

UClass * __cdecl UMassObserverRegistry::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassObserverRegistry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassObserverRegistry",
               &Z_Registration_Info_UClass_UMassObserverRegistry.InnerSingleton,
               StaticRegisterNativesUMassObserverRegistry,0x530,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMassObserverRegistry>,
               InternalVTableHelperCtorCaller<UMassObserverRegistry>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassObserverRegistry.InnerSingleton;
}

// UMassObserverRegistry @ 1471dd3b0

UMassObserverRegistry * __thiscall
UMassObserverRegistry::UMassObserverRegistry(UMassObserverRegistry *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMassObserverRegistry__6B_;
  (this->ModulesUnloadedHandle).ID = 0;
  *(undefined8 *)this->FragmentObserverMaps = 0;
  *(undefined8 *)&this->FragmentObserverMaps[0].field_0x8 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[0].field_0x20 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[0].field_0x28 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[0].field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObserverMaps[0].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObserverMaps[0].field_0x34 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[0].field_0x40 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[0].field_0x48 = 0;
  *(undefined8 *)(this->FragmentObserverMaps + 1) = 0;
  *(undefined8 *)&this->FragmentObserverMaps[1].field_0x8 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[1].field_0x20 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[1].field_0x28 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[1].field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObserverMaps[1].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObserverMaps[1].field_0x34 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[1].field_0x40 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[1].field_0x48 = 0;
  *(undefined8 *)(this->FragmentObserverMaps + 2) = 0;
  *(undefined8 *)&this->FragmentObserverMaps[2].field_0x8 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[2].field_0x20 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[2].field_0x28 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[2].field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObserverMaps[2].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObserverMaps[2].field_0x34 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[2].field_0x40 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[2].field_0x48 = 0;
  *(undefined8 *)(this->FragmentObserverMaps + 3) = 0;
  *(undefined8 *)&this->FragmentObserverMaps[3].field_0x8 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[3].field_0x20 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[3].field_0x28 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[3].field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObserverMaps[3].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObserverMaps[3].field_0x34 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[3].field_0x40 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[3].field_0x48 = 0;
  *(undefined8 *)this->TagObserverMaps = 0;
  *(undefined8 *)&this->TagObserverMaps[0].field_0x8 = 0;
  *(undefined8 *)&this->TagObserverMaps[0].field_0x20 = 0;
  *(undefined4 *)&this->TagObserverMaps[0].field_0x28 = 0;
  *(undefined4 *)&this->TagObserverMaps[0].field_0x2c = 0x80;
  *(undefined4 *)&this->TagObserverMaps[0].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObserverMaps[0].field_0x34 = 0;
  *(undefined8 *)&this->TagObserverMaps[0].field_0x40 = 0;
  *(undefined4 *)&this->TagObserverMaps[0].field_0x48 = 0;
  *(undefined8 *)(this->TagObserverMaps + 1) = 0;
  *(undefined8 *)&this->TagObserverMaps[1].field_0x8 = 0;
  *(undefined8 *)&this->TagObserverMaps[1].field_0x20 = 0;
  *(undefined4 *)&this->TagObserverMaps[1].field_0x28 = 0;
  *(undefined4 *)&this->TagObserverMaps[1].field_0x2c = 0x80;
  *(undefined4 *)&this->TagObserverMaps[1].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObserverMaps[1].field_0x34 = 0;
  *(undefined8 *)&this->TagObserverMaps[1].field_0x40 = 0;
  *(undefined4 *)&this->TagObserverMaps[1].field_0x48 = 0;
  *(undefined8 *)(this->TagObserverMaps + 2) = 0;
  *(undefined8 *)&this->TagObserverMaps[2].field_0x8 = 0;
  *(undefined8 *)&this->TagObserverMaps[2].field_0x20 = 0;
  *(undefined4 *)&this->TagObserverMaps[2].field_0x28 = 0;
  *(undefined4 *)&this->TagObserverMaps[2].field_0x2c = 0x80;
  *(undefined4 *)&this->TagObserverMaps[2].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObserverMaps[2].field_0x34 = 0;
  *(undefined8 *)&this->TagObserverMaps[2].field_0x40 = 0;
  *(undefined4 *)&this->TagObserverMaps[2].field_0x48 = 0;
  *(undefined8 *)(this->TagObserverMaps + 3) = 0;
  *(undefined8 *)&this->TagObserverMaps[3].field_0x8 = 0;
  *(undefined8 *)&this->TagObserverMaps[3].field_0x20 = 0;
  *(undefined4 *)&this->TagObserverMaps[3].field_0x28 = 0;
  *(undefined4 *)&this->TagObserverMaps[3].field_0x2c = 0x80;
  *(undefined4 *)&this->TagObserverMaps[3].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObserverMaps[3].field_0x34 = 0;
  *(undefined8 *)&this->TagObserverMaps[3].field_0x40 = 0;
  *(undefined4 *)&this->TagObserverMaps[3].field_0x48 = 0;
  *(undefined8 *)&this->FragmentObservers[0].Container = 0;
  *(undefined8 *)&this->FragmentObservers[0].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[0].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x34 = 0;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x30 = 0xffffffff;
  *(undefined8 *)&this->FragmentObservers[0].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x48 = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x34 = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x48 = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x34 = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x48 = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x34 = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[0].Container = 0;
  *(undefined8 *)&this->TagObservers[0].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[0].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x34 = 0;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x30 = 0xffffffff;
  *(undefined8 *)&this->TagObservers[0].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[1].Container = 0;
  *(undefined8 *)&this->TagObservers[1].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[1].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x34 = 0;
  *(undefined8 *)&this->TagObservers[1].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[2].Container = 0;
  *(undefined8 *)&this->TagObservers[2].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[2].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x34 = 0;
  *(undefined8 *)&this->TagObservers[2].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[3].Container = 0;
  *(undefined8 *)&this->TagObservers[3].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[3].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x34 = 0;
  *(undefined8 *)&this->TagObservers[3].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x48 = 0;
  return this;
}

// UMassObserverRegistry @ 1471dd7f0

UMassObserverRegistry * __thiscall
UMassObserverRegistry::UMassObserverRegistry(UMassObserverRegistry *this)

{
  code *pcVar1;
  bool bVar2;
  UMassObserverRegistry *pUVar3;
  FDelegateHandle FVar4;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UMassObserverRegistry__6B_;
  (this->ModulesUnloadedHandle).ID = 0;
  *(undefined8 *)this->FragmentObserverMaps = 0;
  *(undefined8 *)&this->FragmentObserverMaps[0].field_0x8 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[0].field_0x20 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[0].field_0x28 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[0].field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObserverMaps[0].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObserverMaps[0].field_0x34 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[0].field_0x40 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[0].field_0x48 = 0;
  *(undefined8 *)(this->FragmentObserverMaps + 1) = 0;
  *(undefined8 *)&this->FragmentObserverMaps[1].field_0x8 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[1].field_0x20 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[1].field_0x28 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[1].field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObserverMaps[1].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObserverMaps[1].field_0x34 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[1].field_0x40 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[1].field_0x48 = 0;
  *(undefined8 *)(this->FragmentObserverMaps + 2) = 0;
  *(undefined8 *)&this->FragmentObserverMaps[2].field_0x8 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[2].field_0x20 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[2].field_0x28 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[2].field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObserverMaps[2].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObserverMaps[2].field_0x34 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[2].field_0x40 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[2].field_0x48 = 0;
  *(undefined8 *)(this->FragmentObserverMaps + 3) = 0;
  *(undefined8 *)&this->FragmentObserverMaps[3].field_0x8 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[3].field_0x20 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[3].field_0x28 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[3].field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObserverMaps[3].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObserverMaps[3].field_0x34 = 0;
  *(undefined8 *)&this->FragmentObserverMaps[3].field_0x40 = 0;
  *(undefined4 *)&this->FragmentObserverMaps[3].field_0x48 = 0;
  *(undefined8 *)this->TagObserverMaps = 0;
  *(undefined8 *)&this->TagObserverMaps[0].field_0x8 = 0;
  *(undefined8 *)&this->TagObserverMaps[0].field_0x20 = 0;
  *(undefined4 *)&this->TagObserverMaps[0].field_0x28 = 0;
  *(undefined4 *)&this->TagObserverMaps[0].field_0x2c = 0x80;
  *(undefined4 *)&this->TagObserverMaps[0].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObserverMaps[0].field_0x34 = 0;
  *(undefined8 *)&this->TagObserverMaps[0].field_0x40 = 0;
  *(undefined4 *)&this->TagObserverMaps[0].field_0x48 = 0;
  *(undefined8 *)(this->TagObserverMaps + 1) = 0;
  *(undefined8 *)&this->TagObserverMaps[1].field_0x8 = 0;
  *(undefined8 *)&this->TagObserverMaps[1].field_0x20 = 0;
  *(undefined4 *)&this->TagObserverMaps[1].field_0x28 = 0;
  *(undefined4 *)&this->TagObserverMaps[1].field_0x2c = 0x80;
  *(undefined4 *)&this->TagObserverMaps[1].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObserverMaps[1].field_0x34 = 0;
  *(undefined8 *)&this->TagObserverMaps[1].field_0x40 = 0;
  *(undefined4 *)&this->TagObserverMaps[1].field_0x48 = 0;
  *(undefined8 *)(this->TagObserverMaps + 2) = 0;
  *(undefined8 *)&this->TagObserverMaps[2].field_0x8 = 0;
  *(undefined8 *)&this->TagObserverMaps[2].field_0x20 = 0;
  *(undefined4 *)&this->TagObserverMaps[2].field_0x28 = 0;
  *(undefined4 *)&this->TagObserverMaps[2].field_0x2c = 0x80;
  *(undefined4 *)&this->TagObserverMaps[2].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObserverMaps[2].field_0x34 = 0;
  *(undefined8 *)&this->TagObserverMaps[2].field_0x40 = 0;
  *(undefined4 *)&this->TagObserverMaps[2].field_0x48 = 0;
  *(undefined8 *)(this->TagObserverMaps + 3) = 0;
  *(undefined8 *)&this->TagObserverMaps[3].field_0x8 = 0;
  *(undefined8 *)&this->TagObserverMaps[3].field_0x20 = 0;
  *(undefined4 *)&this->TagObserverMaps[3].field_0x28 = 0;
  *(undefined4 *)&this->TagObserverMaps[3].field_0x2c = 0x80;
  *(undefined4 *)&this->TagObserverMaps[3].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObserverMaps[3].field_0x34 = 0;
  *(undefined8 *)&this->TagObserverMaps[3].field_0x40 = 0;
  *(undefined4 *)&this->TagObserverMaps[3].field_0x48 = 0;
  *(undefined8 *)&this->FragmentObservers[0].Container = 0;
  *(undefined8 *)&this->FragmentObservers[0].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[0].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x34 = 0;
  *(undefined8 *)&this->FragmentObservers[0].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x48 = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x34 = 0;
  *(undefined8 *)&this->FragmentObservers[1].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x48 = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x34 = 0;
  *(undefined8 *)&this->FragmentObservers[2].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x48 = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container.field_0x8 = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container.field_0x20 = 0;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x28 = 0;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x34 = 0;
  *(undefined8 *)&this->FragmentObservers[3].Container.field_0x40 = 0;
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[0].Container = 0;
  *(undefined8 *)&this->TagObservers[0].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[0].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x34 = 0;
  *(undefined8 *)&this->TagObservers[0].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[0].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[1].Container = 0;
  *(undefined8 *)&this->TagObservers[1].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[1].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x34 = 0;
  *(undefined8 *)&this->TagObservers[1].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[1].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[2].Container = 0;
  *(undefined8 *)&this->TagObservers[2].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[2].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x34 = 0;
  *(undefined8 *)&this->TagObservers[2].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[2].Container.field_0x48 = 0;
  *(undefined8 *)&this->TagObservers[3].Container = 0;
  *(undefined8 *)&this->TagObservers[3].Container.field_0x8 = 0;
  *(undefined8 *)&this->TagObservers[3].Container.field_0x20 = 0;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x28 = 0;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x2c = 0x80;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x34 = 0;
  *(undefined8 *)&this->TagObservers[3].Container.field_0x40 = 0;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x48 = 0;
  if ((this->_padding_ & 0x10) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAnyFlags(RF_ClassDefaultObject)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverRegistry.cpp"
                       ,0xe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UMassObserverRegistry *)(*pcVar1)();
      return pUVar3;
    }
  }
  if ((this->ModulesUnloadedHandle).ID == 0) {
    FVar4 = TMulticastDelegateRegistration<void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
            ::AddUObject<UMassObserverRegistry>
                      ((TMulticastDelegateRegistration<void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
                        *)&FCoreUObjectDelegates::CompiledInUObjectsRemovedDelegate,
                       (UMassObserverRegistry *)&stack0x00000008,(pmf_3c19dd6a)this);
                    /* WARNING: Load size is inaccurate */
    (this->ModulesUnloadedHandle).ID = *FVar4.ID;
  }
  return this;
}

// ~UMassObserverRegistry @ 1471e0e70

void __thiscall UMassObserverRegistry::~UMassObserverRegistry(UMassObserverRegistry *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMassObserverRegistry__6B_;
  *(undefined4 *)&this->TagObservers[3].Container.field_0x48 = 0;
  pvVar1 = *(void **)&this->TagObservers[3].Container.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->TagObservers + 3));
  *(undefined4 *)&this->TagObservers[2].Container.field_0x48 = 0;
  pvVar1 = *(void **)&this->TagObservers[2].Container.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->TagObservers + 2));
  *(undefined4 *)&this->TagObservers[1].Container.field_0x48 = 0;
  pvVar1 = *(void **)&this->TagObservers[1].Container.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->TagObservers + 1));
  *(undefined4 *)&this->TagObservers[0].Container.field_0x48 = 0;
  pvVar1 = *(void **)&this->TagObservers[0].Container.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this->TagObservers);
  *(undefined4 *)&this->FragmentObservers[3].Container.field_0x48 = 0;
  pvVar1 = *(void **)&this->FragmentObservers[3].Container.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->FragmentObservers + 3));
  *(undefined4 *)&this->FragmentObservers[2].Container.field_0x48 = 0;
  pvVar1 = *(void **)&this->FragmentObservers[2].Container.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->FragmentObservers + 2));
  *(undefined4 *)&this->FragmentObservers[1].Container.field_0x48 = 0;
  pvVar1 = *(void **)&this->FragmentObservers[1].Container.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->FragmentObservers + 1));
  *(undefined4 *)&this->FragmentObservers[0].Container.field_0x48 = 0;
  pvVar1 = *(void **)&this->FragmentObservers[0].Container.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this->FragmentObservers);
  *(undefined4 *)&this->TagObserverMaps[3].field_0x48 = 0;
  pvVar1 = *(void **)&this->TagObserverMaps[3].field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->TagObserverMaps + 3));
  *(undefined4 *)&this->TagObserverMaps[2].field_0x48 = 0;
  pvVar1 = *(void **)&this->TagObserverMaps[2].field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->TagObserverMaps + 2));
  *(undefined4 *)&this->TagObserverMaps[1].field_0x48 = 0;
  pvVar1 = *(void **)&this->TagObserverMaps[1].field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->TagObserverMaps + 1));
  *(undefined4 *)&this->TagObserverMaps[0].field_0x48 = 0;
  pvVar1 = *(void **)&this->TagObserverMaps[0].field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this->TagObserverMaps);
  *(undefined4 *)&this->FragmentObserverMaps[3].field_0x48 = 0;
  pvVar1 = *(void **)&this->FragmentObserverMaps[3].field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->FragmentObserverMaps + 3));
  *(undefined4 *)&this->FragmentObserverMaps[2].field_0x48 = 0;
  pvVar1 = *(void **)&this->FragmentObserverMaps[2].field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->FragmentObserverMaps + 2));
  *(undefined4 *)&this->FragmentObserverMaps[1].field_0x48 = 0;
  pvVar1 = *(void **)&this->FragmentObserverMaps[1].field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->FragmentObserverMaps + 1));
  *(undefined4 *)&this->FragmentObserverMaps[0].field_0x48 = 0;
  pvVar1 = *(void **)&this->FragmentObserverMaps[0].field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this->FragmentObserverMaps);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 1471e35d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UMassObserverRegistry::OnModulePackagesUnloaded'::__l2::<lambda_1>::operator()
          (void *this,
          TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
          *param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  void *_Dst;
  longlong lVar10;
  FSoftObjectPath *this_00;
  FName local_res18;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_a8;
  char local_a0;
  char cStack_9f;
  FString local_98;
  FString local_88;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_50;
  FName local_48;
  FName FStack_40;
  
  TSet<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)param_1);
  local_a0 = '\0';
  cStack_9f = '\0';
  stack0xffffffffffffff38 = local_78._16_16_;
  auStack_d0._0_8_ = local_78._8_8_;
  local_b8 = local_58;
  pTStack_b0 = pTStack_50;
  uVar8 = local_78._24_8_ >> 0x20;
  local_a8 = (TSet<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)param_1;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar10 = (longlong)(int)uVar8 * 0x20 + *(longlong *)local_78._0_8_;
      uVar9 = 0;
      while ((-1 < (int)uVar9 &&
             (piVar2 = (int *)(lVar10 + 0x10), (int)uVar9 < *(int *)(lVar10 + 0x10)))) {
        if (((int)uVar9 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = (FSoftObjectPath *)(*(longlong *)(lVar10 + 8) + (longlong)(int)uVar9 * 0x20);
        local_res18 = (this_00->AssetPath).PackageName;
        FStack_40 = (this_00->AssetPath).AssetName;
        plVar6 = (longlong *)**(longlong **)this;
        plVar1 = plVar6 + (int)(*(longlong **)this)[1];
        local_48 = local_res18;
        if (plVar6 == plVar1) {
LAB_1471e3859:
          uVar9 = uVar9 + 1;
        }
        else {
          do {
            if (local_res18 == *(FName *)(*plVar6 + 0x18)) {
              if (4 < (byte)LogMass._0_1_) {
                ::FName::ToString(&local_res18,&local_88);
                FSoftObjectPath::ToString(this_00,&local_98);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
                if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_98.Data.AllocatorInstance.Data);
                }
                if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
              }
              uVar5 = 0;
              if ((int)uVar9 < *piVar2) {
                uVar5 = ~uVar9 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              _Dst = (void *)((longlong)(int)uVar9 * 0x20 + *(longlong *)(lVar10 + 8));
              if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
                FMemory::Free(*(void **)((longlong)_Dst + 0x10));
              }
              iVar7 = *piVar2 + ~uVar9;
              if (iVar7 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)iVar7 << 5);
              }
              *piVar2 = *piVar2 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,(ForAnyElementType *)(lVar10 + 8),*piVar2,(int *)(lVar10 + 0x14));
              uVar9 = uVar9 - 1;
              goto LAB_1471e3859;
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar1);
          uVar9 = uVar9 + 1;
        }
      }
      if (*(int *)(lVar10 + 0x10) == 0) {
        TSet<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_b0,uStack_bc);
        local_a0 = '\x01';
      }
      uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
      uVar8 = (ulonglong)uStack_bc;
    } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
    if ((local_a0 != '\0') && (cStack_9f != '\0')) {
      uVar9 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar7 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar10 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_a8->HashSize < iVar7)) || (iVar7 < local_a8->HashSize)) {
        local_a8->HashSize = iVar7;
        TSet<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_a8);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 147224a80

UClass * __cdecl UMassObserverRegistry::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassObserverRegistry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassObserverRegistry",
               &Z_Registration_Info_UClass_UMassObserverRegistry.InnerSingleton,
               StaticRegisterNativesUMassObserverRegistry,0x530,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMassObserverRegistry>,
               InternalVTableHelperCtorCaller<UMassObserverRegistry>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassObserverRegistry.InnerSingleton;
}

// OnModulePackagesUnloaded @ 147237e80

void __thiscall
UMassObserverRegistry::OnModulePackagesUnloaded
          (UMassObserverRegistry *this,TArrayView<UPackage_*_const,int> *param_1)

{
  longlong lVar1;
  TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  bool bVar3;
  TArrayView<UPackage_*_const,int> *local_res10;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId48,"UMassObserverRegistry::OnModulePackagesUnloaded",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverRegistry.cpp"
               ,0x30);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId48);
  }
  pTVar2 = this->TagObserverMaps;
  lVar1 = 4;
  local_res10 = param_1;
  do {
    `UMassObserverRegistry::OnModulePackagesUnloaded'::__l2::<lambda_1>::operator()
              (&local_res10,pTVar2 + -4);
    `UMassObserverRegistry::OnModulePackagesUnloaded'::__l2::<lambda_1>::operator()
              (&local_res10,pTVar2);
    pTVar2 = pTVar2 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RegisterObserver @ 14723eff0

void __thiscall
UMassObserverRegistry::RegisterObserver
          (UMassObserverRegistry *this,UScriptStruct *param_1,EMassObservedOperation param_2,
          TSubclassOf<UMassProcessor> param_3)

{
  UObject *local_res10;
  
  local_res10 = *(UObject **)param_3.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  if (param_1 != (UScriptStruct *)0x0) {
    RegisterObserver(this,(TNotNull<UScriptStruct_const_*>)param_1,'\x01' << (param_2 & 0x1f),
                     (TSubclassOf<UMassProcessor>)&local_res10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RegisterObserver @ 14723f070

void __thiscall
UMassObserverRegistry::RegisterObserver
          (UMassObserverRegistry *this,TNotNull<UScriptStruct_const_*> param_1,uchar param_2,
          TSubclassOf<UMassProcessor> param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UPackage *pUVar5;
  TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  UObject *pUVar9;
  longlong lVar10;
  TMapBase<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  byte bVar11;
  uint uVar13;
  UObject *pUVar14;
  FWeakObjectPtr local_res10 [2];
  FWeakObjectPtr local_res20;
  UScriptStruct *local_68;
  FSoftObjectPath local_60;
  uint uVar12;
  
  lVar10 = *(longlong *)param_3.Class.field0_0x0;
  if ((lVar10 == 0) || (pUVar4 = UMassProcessor::StaticClass(), pUVar4 == (UClass *)0x0)) {
LAB_14723f0c8:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ObserverClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverRegistry.cpp"
                       ,0x18,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar10 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) || (*(longlong *)param_3.Class.field0_0x0 == 0)) goto LAB_14723f0c8;
  }
  if (param_1.Val != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar5,L"MassFragment"
                          );
      if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_14723f14e;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
    if (((int)(param_1.Val)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((param_1.Val)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      bVar3 = true;
      goto LAB_14723f150;
    }
  }
LAB_14723f14e:
  bVar3 = false;
LAB_14723f150:
  uVar12 = 0;
  lVar10 = 0x30;
  if (!bVar3) {
    lVar10 = 0x170;
  }
  this_01 = (TMapBase<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
             *)((longlong)this->FragmentObserverMaps + lVar10 + -0x30);
  pUVar14 = (UObject *)0x0;
  do {
    if ((param_2 >> (uVar12 & 0x1f) & 1) != 0) {
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      uVar6 = 0;
      uVar7 = uVar6;
      if (param_1.Val != (UScriptStruct *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1.Val);
        }
        local_res10[0].ObjectIndex = 0;
        local_res10[0].ObjectSerialNumber = 0;
        local_68 = param_1.Val;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1.Val);
        }
        FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_68);
        uVar6 = local_res10[0].ObjectIndex;
        local_res20 = local_res10[0];
        uVar7 = local_res10[0].ObjectSerialNumber;
      }
      uVar13 = uVar6 - uVar7 ^ uVar7 >> 0xd;
      uVar6 = (-0x61c88647 - uVar13) - uVar7 ^ uVar13 << 8;
      uVar8 = (uVar7 - uVar6) - uVar13 ^ uVar6 >> 0xd;
      uVar13 = (uVar13 - uVar8) - uVar6 ^ uVar8 >> 0xc;
      uVar7 = (uVar6 - uVar13) - uVar8 ^ uVar13 << 0x10;
      uVar6 = (uVar8 - uVar7) - uVar13 ^ uVar7 >> 5;
      uVar8 = (uVar13 - uVar6) - uVar7 ^ uVar6 >> 3;
      uVar7 = (uVar7 - uVar8) - uVar6 ^ uVar8 << 10;
      this_00 = TMapBase<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<TObjectKey<UScriptStruct_const_>_>
                          (this_01,(uVar6 - uVar7) - uVar8 ^ uVar7 >> 0xf,
                           (TObjectKey<UScriptStruct_const_> *)&local_res20);
      lVar10 = *(longlong *)param_3.Class.field0_0x0;
      pUVar9 = pUVar14;
      if ((lVar10 != 0) && (pUVar4 = UMassProcessor::StaticClass(), pUVar4 != (UClass *)0x0)) {
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(lVar10 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar9 = *(UObject **)param_3.Class.field0_0x0;
        }
      }
      local_60.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_60.AssetPath.PackageName.Number = 0;
      local_60.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_60.AssetPath.AssetName.Number = 0;
      local_60.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.SubPathString.Data.ArrayNum = 0;
      local_60.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_60,pUVar9);
      TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoftClassPath>
                (this_00,(FSoftClassPath *)&local_60);
      if (local_60.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.SubPathString.Data.AllocatorInstance.Data);
      }
    }
    bVar11 = (char)uVar12 + 1;
    uVar12 = (uint)bVar11;
    this_01 = this_01 + 1;
  } while (bVar11 < 4);
  return;
}

// StaticRegisterNativesUMassObserverRegistry @ 147250740

void __cdecl UMassObserverRegistry::StaticRegisterNativesUMassObserverRegistry(void)

{
  return;
}

