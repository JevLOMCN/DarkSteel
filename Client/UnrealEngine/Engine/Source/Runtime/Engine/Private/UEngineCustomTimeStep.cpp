// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// UEngineCustomTimeStep @ 147bbc110

UEngineCustomTimeStep * __thiscall
UEngineCustomTimeStep::UEngineCustomTimeStep(UEngineCustomTimeStep *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEngineCustomTimeStep__6B_;
  return this;
}

// UEngineCustomTimeStep @ 147bbc140

UEngineCustomTimeStep * __thiscall
UEngineCustomTimeStep::UEngineCustomTimeStep
          (UEngineCustomTimeStep *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEngineCustomTimeStep__6B_;
  return this;
}

// ~UEngineCustomTimeStep @ 147bbf1f0

void __thiscall UEngineCustomTimeStep::~UEngineCustomTimeStep(UEngineCustomTimeStep *this)

{
  *(undefined ***)this = &___7UEngineCustomTimeStep__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDisplayName @ 147bdfac0

FString * __thiscall
UEngineCustomTimeStep::GetDisplayName(UEngineCustomTimeStep *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
  local_res8[0].Number = *(uint *)&this->field_0x1c;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147be4d20

UClass * __cdecl UEngineCustomTimeStep::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineCustomTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineCustomTimeStep",
               &Z_Registration_Info_UClass_UEngineCustomTimeStep.InnerSingleton,
               StaticRegisterNativesUEngineCustomTimeStep,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEngineCustomTimeStep>,
               InternalVTableHelperCtorCaller<UEngineCustomTimeStep>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineCustomTimeStep.InnerSingleton;
}

// StaticRegisterNativesUEngineCustomTimeStep @ 147c03550

void __cdecl UEngineCustomTimeStep::StaticRegisterNativesUEngineCustomTimeStep(void)

{
  return;
}

// UpdateApplicationLastTime @ 147c09ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UEngineCustomTimeStep::UpdateApplicationLastTime(void)

{
  LARGE_INTEGER local_res8 [4];
  
  if ((double)CONCAT44(FApp::LastTime._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       FApp::LastTime._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    QueryPerformanceCounter(local_res8);
    FApp::CurrentTime =
         (atomic<double>)
         ((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         ___real_416fffffffff2e49);
  }
  FApp::LastTime = FApp::CurrentTime;
  return;
}

