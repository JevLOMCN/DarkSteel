// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1488a3620

UClass * __cdecl ATriggerVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATriggerVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TriggerVolume",
               &Z_Registration_Info_UClass_ATriggerVolume.InnerSingleton,
               StaticRegisterNativesATriggerVolume,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ATriggerVolume>,
               InternalVTableHelperCtorCaller<ATriggerVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATriggerVolume.InnerSingleton;
}

// ATriggerVolume @ 1488adf10

ATriggerVolume * __thiscall
ATriggerVolume::ATriggerVolume(ATriggerVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7ATriggerVolume__6B_;
  return this;
}

// ATriggerVolume @ 1488adf40

ATriggerVolume * __thiscall
ATriggerVolume::ATriggerVolume(ATriggerVolume *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  AVolume::AVolume((AVolume *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  *(undefined ***)this = &___7ATriggerVolume__6B_;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&CollisionProfileName,L"Trigger");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
            (*(longlong **)&this->field_0x2d8,CollisionProfileName,1);
  *(uint *)&this->field_0x2cc = *(uint *)&this->field_0x2cc | 1;
  *(undefined2 *)&this->field_0x2c5 = 0x64ff;
  this->field_0x2c4 = 100;
  this->field_0x2c7 = 0xff;
  return this;
}

// ~ATriggerVolume @ 1488b2100

void __thiscall ATriggerVolume::~ATriggerVolume(ATriggerVolume *this)

{
  *(undefined ***)this = &___7ATriggerVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 1488c3cd0

UClass * __cdecl ATriggerVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATriggerVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TriggerVolume",
               &Z_Registration_Info_UClass_ATriggerVolume.InnerSingleton,
               StaticRegisterNativesATriggerVolume,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ATriggerVolume>,
               InternalVTableHelperCtorCaller<ATriggerVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATriggerVolume.InnerSingleton;
}

// StaticRegisterNativesATriggerVolume @ 1488e2250

void __cdecl ATriggerVolume::StaticRegisterNativesATriggerVolume(void)

{
  return;
}

