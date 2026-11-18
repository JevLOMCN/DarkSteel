// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 10

// StaticClass @ 1460378f0

UClass * __cdecl UFixedFrameRateCustomTimeStep::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFixedFrameRateCustomTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"FixedFrameRateCustomTimeStep",
               &Z_Registration_Info_UClass_UFixedFrameRateCustomTimeStep.InnerSingleton,
               StaticRegisterNativesUFixedFrameRateCustomTimeStep,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UFixedFrameRateCustomTimeStep>,
               InternalVTableHelperCtorCaller<UFixedFrameRateCustomTimeStep>,local_res8,
               UEngineCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFixedFrameRateCustomTimeStep.InnerSingleton;
}

// UFixedFrameRateCustomTimeStep @ 14603ffc0

UFixedFrameRateCustomTimeStep * __thiscall
UFixedFrameRateCustomTimeStep::UFixedFrameRateCustomTimeStep
          (UFixedFrameRateCustomTimeStep *this,FVTableHelper *param_1)

{
  UEngineCustomTimeStep::UEngineCustomTimeStep((UEngineCustomTimeStep *)this,param_1);
  *(undefined ***)this = &___7UFixedFrameRateCustomTimeStep__6B_;
  return this;
}

// UFixedFrameRateCustomTimeStep @ 14603fff0

UFixedFrameRateCustomTimeStep * __thiscall
UFixedFrameRateCustomTimeStep::UFixedFrameRateCustomTimeStep
          (UFixedFrameRateCustomTimeStep *this,FObjectInitializer *param_1)

{
  UEngineCustomTimeStep::UEngineCustomTimeStep((UEngineCustomTimeStep *)this,param_1);
  *(undefined ***)this = &___7UFixedFrameRateCustomTimeStep__6B_;
  return this;
}

// ~UFixedFrameRateCustomTimeStep @ 146040570

void __thiscall
UFixedFrameRateCustomTimeStep::~UFixedFrameRateCustomTimeStep(UFixedFrameRateCustomTimeStep *this)

{
  *(undefined ***)this = &___7UFixedFrameRateCustomTimeStep__6B_;
  UEngineCustomTimeStep::~UEngineCustomTimeStep((UEngineCustomTimeStep *)this);
  return;
}

// GetDisplayName @ 14604c370

FString * __thiscall
UFixedFrameRateCustomTimeStep::GetDisplayName
          (UFixedFrameRateCustomTimeStep *this,FString *__return_storage_ptr__)

{
  FFrameRate *this_00;
  FName local_res8;
  FString local_28;
  FText local_18;
  
  local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
  local_res8.Number = *(uint *)&this->field_0x1c;
  ::FName::GetPlainNameString(&local_res8,&local_28);
  this_00 = (FFrameRate *)(**(code **)(*(longlong *)this + 0x2d8))(this,&local_res8);
  FFrameRate::ToPrettyText(this_00,&local_18);
  FText::ToString(&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s (%d)");
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFixedFrameRate @ 14604c510

FFrameRate __thiscall
UFixedFrameRateCustomTimeStep::GetFixedFrameRate(UFixedFrameRateCustomTimeStep *this)

{
  FFrameRate in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Public\\FixedFrameRateCustomTimeStep.h"
             ,0x20,L"Pure virtual not implemented (%s)");
  *(undefined4 *)in_RDX = 0x18;
  *(undefined4 *)((longlong)in_RDX + 4) = 1;
  return in_RDX;
}

// GetFixedFrameRate_PureVirtual @ 14604c5d0

FFrameRate __thiscall
UFixedFrameRateCustomTimeStep::GetFixedFrameRate_PureVirtual(UFixedFrameRateCustomTimeStep *this)

{
  FFrameRate in_RDX;
  
  *(undefined4 *)in_RDX = 0x18;
  *(undefined4 *)((longlong)in_RDX + 4) = 1;
  return in_RDX;
}

// GetPrivateStaticClass @ 14604cc00

UClass * __cdecl UFixedFrameRateCustomTimeStep::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFixedFrameRateCustomTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"FixedFrameRateCustomTimeStep",
               &Z_Registration_Info_UClass_UFixedFrameRateCustomTimeStep.InnerSingleton,
               StaticRegisterNativesUFixedFrameRateCustomTimeStep,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UFixedFrameRateCustomTimeStep>,
               InternalVTableHelperCtorCaller<UFixedFrameRateCustomTimeStep>,local_res8,
               UEngineCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFixedFrameRateCustomTimeStep.InnerSingleton;
}

// StaticRegisterNativesUFixedFrameRateCustomTimeStep @ 14604fda0

void __cdecl UFixedFrameRateCustomTimeStep::StaticRegisterNativesUFixedFrameRateCustomTimeStep(void)

{
  return;
}

// WaitForFixedFrameRate @ 146050b10

void __thiscall
UFixedFrameRateCustomTimeStep::WaitForFixedFrameRate(UFixedFrameRateCustomTimeStep *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int local_res8;
  int local_resc;
  LARGE_INTEGER local_res10 [3];
  
  UEngineCustomTimeStep::UpdateApplicationLastTime();
  QueryPerformanceCounter(local_res10);
  dVar2 = __real_4170000000000000;
  dVar3 = (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  (**(code **)(*(longlong *)this + 0x2d8))(this,&local_res8);
  dVar3 = (double)local_resc / (double)local_res8 - (dVar3 - (double)FApp::LastTime);
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  QueryPerformanceCounter(local_res10);
  dVar1 = (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (__real_3f747ae147ae147b < dVar3) {
    FWindowsPlatformProcess::SleepNoStats((float)dVar3 - __real_3b03126f);
  }
  dVar4 = (double)FApp::DeltaTime + (double)FApp::LastTime;
  QueryPerformanceCounter(local_res10);
  dVar3 = (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  while (dVar3 + dVar2 < dVar4) {
    FWindowsPlatformProcess::SleepNoStats(0.0);
    QueryPerformanceCounter(local_res10);
    dVar3 = (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  }
  QueryPerformanceCounter(local_res10);
  FApp::DeltaTime = (atomic<double>)((double)local_resc / (double)local_res8);
  FApp::IdleTime =
       (atomic<double>)
       ((double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1);
  FApp::CurrentTime =
       (atomic<double>)((double)local_resc / (double)local_res8 + (double)FApp::LastTime);
  return;
}

