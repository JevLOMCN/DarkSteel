// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 14

// StaticClass @ 14603a100

UClass * __cdecl UGenlockedCustomTimeStep::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGenlockedCustomTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"GenlockedCustomTimeStep",
               &Z_Registration_Info_UClass_UGenlockedCustomTimeStep.InnerSingleton,
               StaticRegisterNativesUGenlockedCustomTimeStep,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UGenlockedCustomTimeStep>,
               InternalVTableHelperCtorCaller<UGenlockedCustomTimeStep>,local_res8,
               UFixedFrameRateCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGenlockedCustomTimeStep.InnerSingleton;
}

// UGenlockedCustomTimeStep @ 146040020

UGenlockedCustomTimeStep * __thiscall
UGenlockedCustomTimeStep::UGenlockedCustomTimeStep
          (UGenlockedCustomTimeStep *this,FVTableHelper *param_1)

{
  UEngineCustomTimeStep::UEngineCustomTimeStep((UEngineCustomTimeStep *)this,param_1);
  this->bAutoDetectFormat = false;
  this->bWaitForBothFields = false;
  this->_padding_ = (longlong)&___7UGenlockedCustomTimeStep__6B_;
  return this;
}

// UGenlockedCustomTimeStep @ 146040050

UGenlockedCustomTimeStep * __thiscall
UGenlockedCustomTimeStep::UGenlockedCustomTimeStep
          (UGenlockedCustomTimeStep *this,FObjectInitializer *param_1)

{
  UEngineCustomTimeStep::UEngineCustomTimeStep((UEngineCustomTimeStep *)this,param_1);
  this->bAutoDetectFormat = false;
  this->bWaitForBothFields = false;
  this->_padding_ = (longlong)&___7UGenlockedCustomTimeStep__6B_;
  return this;
}

// ~UGenlockedCustomTimeStep @ 146040590

void __thiscall UGenlockedCustomTimeStep::~UGenlockedCustomTimeStep(UGenlockedCustomTimeStep *this)

{
  this->_padding_ = (longlong)&___7UFixedFrameRateCustomTimeStep__6B_;
  UEngineCustomTimeStep::~UEngineCustomTimeStep((UEngineCustomTimeStep *)this);
  return;
}

// GetExpectedSyncCountDelta @ 14604c470

uint __thiscall UGenlockedCustomTimeStep::GetExpectedSyncCountDelta(UGenlockedCustomTimeStep *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x2d8))(this,local_res8);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x2e8))(this,local_res10);
  dVar3 = (double)((int)((ulonglong)uVar1 >> 0x20) * (int)*puVar2);
  return (int)ROUND((dVar3 + dVar3) / (double)((int)((ulonglong)*puVar2 >> 0x20) * (int)uVar1) +
                    __real_3fe0000000000000) >> 1;
}

// GetFixedFrameRate @ 14604c560

FFrameRate __thiscall UGenlockedCustomTimeStep::GetFixedFrameRate(UGenlockedCustomTimeStep *this)

{
  FFrameRate in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Public\\GenlockedCustomTimeStep.h"
             ,0x23,L"Pure virtual not implemented (%s)");
  *(undefined4 *)in_RDX = 0x18;
  *(undefined4 *)((longlong)in_RDX + 4) = 1;
  return in_RDX;
}

// GetLastSyncCountDelta @ 14604c6d0

uint __thiscall UGenlockedCustomTimeStep::GetLastSyncCountDelta(UGenlockedCustomTimeStep *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Public\\GenlockedCustomTimeStep.h"
             ,0x29,L"Pure virtual not implemented (%s)");
  return 1;
}

// GetPrivateStaticClass @ 14604ccc0

UClass * __cdecl UGenlockedCustomTimeStep::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGenlockedCustomTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"GenlockedCustomTimeStep",
               &Z_Registration_Info_UClass_UGenlockedCustomTimeStep.InnerSingleton,
               StaticRegisterNativesUGenlockedCustomTimeStep,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UGenlockedCustomTimeStep>,
               InternalVTableHelperCtorCaller<UGenlockedCustomTimeStep>,local_res8,
               UFixedFrameRateCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGenlockedCustomTimeStep.InnerSingleton;
}

// GetSyncRate @ 14604d2a0

FFrameRate __thiscall UGenlockedCustomTimeStep::GetSyncRate(UGenlockedCustomTimeStep *this)

{
  FFrameRate in_RDX;
  
  (**(code **)(this->_padding_ + 0x2d8))();
  return in_RDX;
}

// IsLastSyncDataValid @ 14604de70

bool __thiscall UGenlockedCustomTimeStep::IsLastSyncDataValid(UGenlockedCustomTimeStep *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Public\\GenlockedCustomTimeStep.h"
             ,0x2c,L"Pure virtual not implemented (%s)");
  return false;
}

// StaticRegisterNativesUGenlockedCustomTimeStep @ 14604fdb0

void __cdecl UGenlockedCustomTimeStep::StaticRegisterNativesUGenlockedCustomTimeStep(void)

{
  return;
}

// SupportsFormatAutoDetection @ 14604fed0

bool __thiscall
UGenlockedCustomTimeStep::SupportsFormatAutoDetection(UGenlockedCustomTimeStep *this)

{
  return false;
}

// UpdateAppTimes @ 146050230

void __thiscall
UGenlockedCustomTimeStep::UpdateAppTimes
          (UGenlockedCustomTimeStep *this,double *param_1,double *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  atomic<double> aVar6;
  undefined1 local_res8 [8];
  
  cVar2 = (**(code **)(this->_padding_ + 0x2f8))();
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(this->_padding_ + 0x2f0))(this);
    if (iVar3 != 0) {
      piVar5 = (int *)(**(code **)(this->_padding_ + 0x2e8))(this,local_res8);
      iVar3 = piVar5[1];
      iVar1 = *piVar5;
      uVar4 = (**(code **)(this->_padding_ + 0x2f0))(this);
      aVar6 = (atomic<double>)((double)uVar4 * ((double)iVar3 / (double)iVar1));
      goto LAB_1460502dc;
    }
  }
  piVar5 = (int *)(**(code **)(this->_padding_ + 0x2d8))(this,local_res8);
  aVar6 = (atomic<double>)((double)piVar5[1] / (double)*piVar5);
LAB_1460502dc:
  FApp::CurrentTime = (atomic<double>)*param_2;
  piVar5 = (int *)(**(code **)(this->_padding_ + 0x2d8))(this,local_res8);
  FApp::IdleTime =
       (atomic<double>)
       ((*param_2 - *param_1) - ((double)aVar6 - (double)piVar5[1] / (double)*piVar5));
  FApp::DeltaTime = aVar6;
  return;
}

// WaitForSync @ 146050ce0

bool __thiscall UGenlockedCustomTimeStep::WaitForSync(UGenlockedCustomTimeStep *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Public\\GenlockedCustomTimeStep.h"
             ,0x1c,L"Pure virtual not implemented (%s)");
  return false;
}

