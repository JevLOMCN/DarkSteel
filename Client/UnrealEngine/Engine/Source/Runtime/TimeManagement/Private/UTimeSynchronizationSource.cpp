// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 14

// StaticClass @ 146036060

UClass * __cdecl UTimeSynchronizationSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimeSynchronizationSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"TimeSynchronizationSource",
               &Z_Registration_Info_UClass_UTimeSynchronizationSource.InnerSingleton,
               StaticRegisterNativesUTimeSynchronizationSource,0x30,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UTimeSynchronizationSource>,
               InternalVTableHelperCtorCaller<UTimeSynchronizationSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimeSynchronizationSource.InnerSingleton;
}

// UTimeSynchronizationSource @ 146040290

UTimeSynchronizationSource * __thiscall
UTimeSynchronizationSource::UTimeSynchronizationSource
          (UTimeSynchronizationSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTimeSynchronizationSource__6B_;
  return this;
}

// UTimeSynchronizationSource @ 1460402c0

UTimeSynchronizationSource * __thiscall
UTimeSynchronizationSource::UTimeSynchronizationSource
          (UTimeSynchronizationSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bUseForSynchronization = true;
  this->_padding_ = (longlong)&___7UTimeSynchronizationSource__6B_;
  return this;
}

// ~UTimeSynchronizationSource @ 146040630

void __thiscall
UTimeSynchronizationSource::~UTimeSynchronizationSource(UTimeSynchronizationSource *this)

{
  this->_padding_ = (longlong)&___7UTimeSynchronizationSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Close @ 146043e30

void __thiscall UTimeSynchronizationSource::Close(UTimeSynchronizationSource *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h"
             ,0x67,L"Pure virtual not implemented (%s)");
  return;
}

// GetDisplayName @ 14604c430

FString * __thiscall
UTimeSynchronizationSource::GetDisplayName
          (UTimeSynchronizationSource *this,FString *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h"
             ,0x6a,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetFrameRate @ 14604c5f0

FFrameRate __thiscall UTimeSynchronizationSource::GetFrameRate(UTimeSynchronizationSource *this)

{
  FFrameRate in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h"
             ,0x5b,L"Pure virtual not implemented (%s)");
  *(undefined4 *)in_RDX = 60000;
  *(undefined4 *)((longlong)in_RDX + 4) = 1;
  return in_RDX;
}

// GetNewestSampleTime @ 14604c720

FFrameTime __thiscall
UTimeSynchronizationSource::GetNewestSampleTime(UTimeSynchronizationSource *this)

{
  FFrameTime in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h"
             ,0x52,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetOldestSampleTime @ 14604ca40

FFrameTime __thiscall
UTimeSynchronizationSource::GetOldestSampleTime(UTimeSynchronizationSource *this)

{
  FFrameTime in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h"
             ,0x58,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetPrivateStaticClass @ 14604d080

UClass * __cdecl UTimeSynchronizationSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimeSynchronizationSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"TimeSynchronizationSource",
               &Z_Registration_Info_UClass_UTimeSynchronizationSource.InnerSingleton,
               StaticRegisterNativesUTimeSynchronizationSource,0x30,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UTimeSynchronizationSource>,
               InternalVTableHelperCtorCaller<UTimeSynchronizationSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimeSynchronizationSource.InnerSingleton;
}

// IsReady @ 14604deb0

bool __thiscall UTimeSynchronizationSource::IsReady(UTimeSynchronizationSource *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h"
             ,0x5e,L"Pure virtual not implemented (%s)");
  return false;
}

// Open @ 14604ef60

bool __thiscall
UTimeSynchronizationSource::Open
          (UTimeSynchronizationSource *this,FTimeSynchronizationOpenData *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h"
             ,0x61,L"Pure virtual not implemented (%s)");
  return false;
}

// Start @ 14604fd30

void __thiscall
UTimeSynchronizationSource::Start
          (UTimeSynchronizationSource *this,FTimeSynchronizationStartData *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h"
             ,100,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUTimeSynchronizationSource @ 14604fe60

void __cdecl UTimeSynchronizationSource::StaticRegisterNativesUTimeSynchronizationSource(void)

{
  return;
}

