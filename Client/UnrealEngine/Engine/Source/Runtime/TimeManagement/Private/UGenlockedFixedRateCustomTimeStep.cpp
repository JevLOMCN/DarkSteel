// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 14

// StaticClass @ 14603a970

UClass * __cdecl UGenlockedFixedRateCustomTimeStep::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGenlockedFixedRateCustomTimeStep.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"GenlockedFixedRateCustomTimeStep",
               &Z_Registration_Info_UClass_UGenlockedFixedRateCustomTimeStep.InnerSingleton,
               StaticRegisterNativesUGenlockedFixedRateCustomTimeStep,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGenlockedFixedRateCustomTimeStep>,
               InternalVTableHelperCtorCaller<UGenlockedFixedRateCustomTimeStep>,local_res8,
               UGenlockedCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGenlockedFixedRateCustomTimeStep.InnerSingleton;
}

// UGenlockedFixedRateCustomTimeStep @ 146040080

UGenlockedFixedRateCustomTimeStep * __thiscall
UGenlockedFixedRateCustomTimeStep::UGenlockedFixedRateCustomTimeStep
          (UGenlockedFixedRateCustomTimeStep *this,FVTableHelper *param_1)

{
  UEngineCustomTimeStep::UEngineCustomTimeStep((UEngineCustomTimeStep *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UGenlockedFixedRateCustomTimeStep__6B_;
  (this->FrameRate).Numerator = 60000;
  (this->FrameRate).Denominator = 1;
  return this;
}

// UGenlockedFixedRateCustomTimeStep @ 1460400c0

UGenlockedFixedRateCustomTimeStep * __thiscall
UGenlockedFixedRateCustomTimeStep::UGenlockedFixedRateCustomTimeStep
          (UGenlockedFixedRateCustomTimeStep *this,FObjectInitializer *param_1)

{
  UEngineCustomTimeStep::UEngineCustomTimeStep((UEngineCustomTimeStep *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UGenlockedFixedRateCustomTimeStep__6B_;
  this->LastSyncCountDelta = 0;
  this->QuantizedCurrentTime = 0.0;
  (this->FrameRate).Numerator = 0x18;
  (this->FrameRate).Denominator = 1;
  this->bShouldBlock = true;
  this->bForceSingleFrameDeltaTime = false;
  return this;
}

// ~UGenlockedFixedRateCustomTimeStep @ 1460405b0

void __thiscall
UGenlockedFixedRateCustomTimeStep::~UGenlockedFixedRateCustomTimeStep
          (UGenlockedFixedRateCustomTimeStep *this)

{
  this->_padding_ = (longlong)&___7UFixedFrameRateCustomTimeStep__6B_;
  UEngineCustomTimeStep::~UEngineCustomTimeStep((UEngineCustomTimeStep *)this);
  return;
}

// GetFixedFrameRate @ 14604c5b0

FFrameRate __thiscall
UGenlockedFixedRateCustomTimeStep::GetFixedFrameRate(UGenlockedFixedRateCustomTimeStep *this)

{
  FFrameRate in_RDX;
  
  *(FFrameRate *)in_RDX = this->FrameRate;
  return in_RDX;
}

// GetLastSyncCountDelta @ 14604c710

uint __thiscall
UGenlockedFixedRateCustomTimeStep::GetLastSyncCountDelta(UGenlockedFixedRateCustomTimeStep *this)

{
  return this->LastSyncCountDelta;
}

// GetPrivateStaticClass @ 14604cd80

UClass * __cdecl UGenlockedFixedRateCustomTimeStep::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGenlockedFixedRateCustomTimeStep.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"GenlockedFixedRateCustomTimeStep",
               &Z_Registration_Info_UClass_UGenlockedFixedRateCustomTimeStep.InnerSingleton,
               StaticRegisterNativesUGenlockedFixedRateCustomTimeStep,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGenlockedFixedRateCustomTimeStep>,
               InternalVTableHelperCtorCaller<UGenlockedFixedRateCustomTimeStep>,local_res8,
               UGenlockedCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGenlockedFixedRateCustomTimeStep.InnerSingleton;
}

// GetSynchronizationState @ 14604d360

ECustomTimeStepSynchronizationState __thiscall
UGenlockedFixedRateCustomTimeStep::GetSynchronizationState(UGenlockedFixedRateCustomTimeStep *this)

{
  return Synchronized;
}

// Initialize @ 14604dc80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGenlockedFixedRateCustomTimeStep::Initialize
          (UGenlockedFixedRateCustomTimeStep *this,UEngine *param_1)

{
  return true;
}

// IsLastSyncDataValid @ 14604dea0

bool __thiscall
UGenlockedFixedRateCustomTimeStep::IsLastSyncDataValid(UGenlockedFixedRateCustomTimeStep *this)

{
  return true;
}

// Shutdown @ 14604fc30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGenlockedFixedRateCustomTimeStep::Shutdown
          (UGenlockedFixedRateCustomTimeStep *this,UEngine *param_1)

{
  return;
}

// StaticRegisterNativesUGenlockedFixedRateCustomTimeStep @ 14604fdc0

void __cdecl
UGenlockedFixedRateCustomTimeStep::StaticRegisterNativesUGenlockedFixedRateCustomTimeStep(void)

{
  return;
}

// UpdateTimeStep @ 146050610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGenlockedFixedRateCustomTimeStep::UpdateTimeStep
          (UGenlockedFixedRateCustomTimeStep *this,UEngine *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  atomic<double> aVar8;
  undefined1 local_res8 [32];
  
  UEngineCustomTimeStep::UpdateApplicationLastTime();
  (**(code **)(this->_padding_ + 0x2e0))(this);
  dVar1 = this->QuantizedCurrentTime;
  dVar2 = this->LastIdleTime;
  cVar4 = (**(code **)(this->_padding_ + 0x2f8))(this);
  if (cVar4 != '\0') {
    iVar5 = (**(code **)(this->_padding_ + 0x2f0))(this);
    if (iVar5 != 0) {
      piVar7 = (int *)(**(code **)(this->_padding_ + 0x2e8))(this,local_res8);
      iVar5 = piVar7[1];
      iVar3 = *piVar7;
      uVar6 = (**(code **)(this->_padding_ + 0x2f0))(this);
      aVar8 = (atomic<double>)((double)uVar6 * ((double)iVar5 / (double)iVar3));
      goto LAB_1460506d3;
    }
  }
  piVar7 = (int *)(**(code **)(this->_padding_ + 0x2d8))(this,local_res8);
  aVar8 = (atomic<double>)((double)piVar7[1] / (double)*piVar7);
LAB_1460506d3:
  FApp::CurrentTime = (atomic<double>)this->QuantizedCurrentTime;
  piVar7 = (int *)(**(code **)(this->_padding_ + 0x2d8))(this,local_res8);
  FApp::IdleTime =
       (atomic<double>)
       ((this->QuantizedCurrentTime - (dVar1 - dVar2)) -
       ((double)aVar8 - (double)piVar7[1] / (double)*piVar7));
  FApp::DeltaTime = aVar8;
  return false;
}

// WaitForSync @ 146050d10

bool __thiscall
UGenlockedFixedRateCustomTimeStep::WaitForSync(UGenlockedFixedRateCustomTimeStep *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  atomic<double> aVar10;
  double dVar11;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18 [2];
  
  piVar5 = (int *)(**(code **)(this->_padding_ + 0x2d8))();
  dVar11 = (double)piVar5[1] / (double)*piVar5;
  QueryPerformanceCounter(&local_res10);
  dVar8 = __real_4170000000000000;
  aVar10 = (atomic<double>)
           ((double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000);
  dVar7 = (double)aVar10 - (double)FApp::LastTime;
  if (dVar7 < 0.0) {
    dVar7 = (double)aVar10 - (double)aVar10;
    FApp::CurrentTime = aVar10;
    FApp::LastTime = aVar10;
  }
  dVar6 = dVar11 - dVar7;
  this->LastIdleTime = dVar6;
  if ((this->bShouldBlock != false) && (0.0 < dVar6)) {
    if (__real_3f747ae147ae147b < dVar6) {
      FWindowsPlatformProcess::SleepNoStats((float)dVar6 - __real_3b03126f);
    }
    dVar6 = (double)FApp::LastTime + dVar11;
    QueryPerformanceCounter(&local_res8);
    dVar7 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    while (dVar7 + dVar8 < dVar6) {
      FWindowsPlatformProcess::SleepNoStats(0.0);
      QueryPerformanceCounter(&local_res8);
      dVar7 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    }
    QueryPerformanceCounter(local_res18);
    dVar8 = (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
    FApp::IdleTimeOvershoot = (atomic<double>)(dVar8 - dVar6);
    dVar7 = dVar8 - (double)FApp::LastTime;
  }
  auVar9._0_8_ = (dVar7 + __real_3f1a36e2eb1c432d) / dVar11;
  auVar9._8_8_ = 0;
  auVar9 = roundpd(auVar9,auVar9,1);
  dVar8 = auVar9._0_8_;
  if (__real_41efffffffe00000 <= auVar9._0_8_) {
    dVar8 = __real_41efffffffe00000;
  }
  uVar4 = (uint)(longlong)dVar8;
  this->LastSyncCountDelta = uVar4;
  if (this->bShouldBlock == false) {
    if (uVar4 == 0) {
      this->LastSyncCountDelta = 1;
    }
  }
  else if ((uVar4 == 0) &&
          (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4983118909059104880>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\GenlockedFixedRateCustomTimeStep.cpp"
                              ,0x70,"LastSyncCountDelta > 0"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (this->bForceSingleFrameDeltaTime != false) {
    this->LastSyncCountDelta = 1;
  }
  this->QuantizedCurrentTime = (double)this->LastSyncCountDelta * dVar11 + (double)FApp::LastTime;
  return true;
}

