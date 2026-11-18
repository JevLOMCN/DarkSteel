// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 15

// StaticClass @ 1460379b0

UClass * __cdecl UCatchupFixedRateCustomTimeStep::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCatchupFixedRateCustomTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"CatchupFixedRateCustomTimeStep",
               &Z_Registration_Info_UClass_UCatchupFixedRateCustomTimeStep.InnerSingleton,
               StaticRegisterNativesUCatchupFixedRateCustomTimeStep,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCatchupFixedRateCustomTimeStep>,
               InternalVTableHelperCtorCaller<UCatchupFixedRateCustomTimeStep>,local_res8,
               UFixedFrameRateCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCatchupFixedRateCustomTimeStep.InnerSingleton;
}

// UCatchupFixedRateCustomTimeStep @ 14603fea0

UCatchupFixedRateCustomTimeStep * __thiscall
UCatchupFixedRateCustomTimeStep::UCatchupFixedRateCustomTimeStep
          (UCatchupFixedRateCustomTimeStep *this,FVTableHelper *param_1)

{
  UEngineCustomTimeStep::UEngineCustomTimeStep((UEngineCustomTimeStep *)this,param_1);
  (this->FrameRate).Numerator = 60000;
  this->_padding_ = (longlong)&_vftable__for__UFixedFrameRateCustomTimeStep__;
  this->_padding_ = (longlong)&_vftable__for__IClockedTimeStep__;
  this->MaxCatchupSeconds = 16.0;
  (this->FrameRate).Denominator = 1;
  this->SimulationSeconds = 0.0;
  return this;
}

// UCatchupFixedRateCustomTimeStep @ 14603ff00

UCatchupFixedRateCustomTimeStep * __thiscall
UCatchupFixedRateCustomTimeStep::UCatchupFixedRateCustomTimeStep
          (UCatchupFixedRateCustomTimeStep *this,FObjectInitializer *param_1)

{
  UEngineCustomTimeStep::UEngineCustomTimeStep((UEngineCustomTimeStep *)this,param_1);
  (this->FrameRate).Numerator = 0x18;
  this->_padding_ = (longlong)&_vftable__for__UFixedFrameRateCustomTimeStep__;
  this->_padding_ = (longlong)&_vftable__for__IClockedTimeStep__;
  this->MaxCatchupSeconds = 16.0;
  (this->FrameRate).Denominator = 1;
  this->SimulationSeconds = 0.0;
  return this;
}

// ~UCatchupFixedRateCustomTimeStep @ 146040540

void __thiscall
UCatchupFixedRateCustomTimeStep::~UCatchupFixedRateCustomTimeStep
          (UCatchupFixedRateCustomTimeStep *this)

{
  this->_padding_ = (longlong)&___7IClockedTimeStep__6B_;
  this->_padding_ = (longlong)&___7UFixedFrameRateCustomTimeStep__6B_;
  UEngineCustomTimeStep::~UEngineCustomTimeStep((UEngineCustomTimeStep *)this);
  return;
}

// BlockUntilPlatformSeconds @ 146041fb0

void __thiscall
UCatchupFixedRateCustomTimeStep::BlockUntilPlatformSeconds
          (UCatchupFixedRateCustomTimeStep *this,double param_1)

{
  double dVar1;
  double dVar2;
  LARGE_INTEGER local_res10 [3];
  
  QueryPerformanceCounter(local_res10);
  dVar1 = __real_4170000000000000;
  dVar2 = param_1 - ((double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
                    __real_4170000000000000);
  if (0.0 < dVar2) {
    if (__real_3f70624dd2f1a9fc < dVar2) {
      FWindowsPlatformProcess::SleepNoStats((float)(dVar2 - __real_3f60624dd2f1a9fc));
    }
    QueryPerformanceCounter(local_res10);
    dVar2 = (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
    while (dVar2 + dVar1 < param_1) {
      FWindowsPlatformProcess::SleepNoStats(0.0);
      QueryPerformanceCounter(local_res10);
      dVar2 = (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
    }
  }
  return;
}

// CalculateDeltaSeconds @ 146043ae0

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall
UCatchupFixedRateCustomTimeStep::CalculateDeltaSeconds
          (UCatchupFixedRateCustomTimeStep *this,double param_1,double param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 local_res8 [32];
  
  piVar4 = (int *)(**(code **)(this->_padding_ + 0x2d8))(this,local_res8);
  dVar1 = this->MaxCatchupSeconds;
  dVar3 = param_2 - param_1;
  dVar6 = (double)piVar4[1] / (double)*piVar4;
  if (dVar1 <= dVar3) {
    if (2 < (byte)LogTimeManagement._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeManagement);
    }
    return (double)(int)(dVar3 / dVar6) * dVar6;
  }
  auVar5._0_8_ = dVar1 * __real_3fe0000000000000;
  auVar5._8_8_ = 0;
  if (auVar5._0_8_ <= dVar3) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (__real_4008000000000000 / (dVar1 - auVar5._0_8_)) * (dVar3 - auVar5._0_8_) +
                   __real_3ff8000000000000;
    auVar5 = roundpd(auVar5,auVar2,1);
    return auVar5._0_8_ * dVar6;
  }
  return dVar6;
}

// GetFixedFrameRate @ 14604c4f0

FFrameRate __thiscall
UCatchupFixedRateCustomTimeStep::GetFixedFrameRate(UCatchupFixedRateCustomTimeStep *this)

{
  FFrameRate in_RDX;
  
  *(FFrameRate *)in_RDX = this->FrameRate;
  return in_RDX;
}

// GetPrivateStaticClass @ 14604ca80

UClass * __cdecl UCatchupFixedRateCustomTimeStep::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCatchupFixedRateCustomTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"CatchupFixedRateCustomTimeStep",
               &Z_Registration_Info_UClass_UCatchupFixedRateCustomTimeStep.InnerSingleton,
               StaticRegisterNativesUCatchupFixedRateCustomTimeStep,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCatchupFixedRateCustomTimeStep>,
               InternalVTableHelperCtorCaller<UCatchupFixedRateCustomTimeStep>,local_res8,
               UFixedFrameRateCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCatchupFixedRateCustomTimeStep.InnerSingleton;
}

// GetSynchronizationState @ 14604d2d0

ECustomTimeStepSynchronizationState __thiscall
UCatchupFixedRateCustomTimeStep::GetSynchronizationState(UCatchupFixedRateCustomTimeStep *this)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar1 = ((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000) - this->SimulationSeconds;
  return (this->MaxCatchupSeconds * __real_3fe0000000000000 <
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) +
         Synchronized;
}

// GetUnderlyingClockTime_AnyThread @ 14604d4c0

TOptional<double> * __thiscall
UCatchupFixedRateCustomTimeStep::GetUnderlyingClockTime_AnyThread
          (UCatchupFixedRateCustomTimeStep *this,TOptional<double> *__return_storage_ptr__)

{
  LARGE_INTEGER local_res10 [3];
  
  QueryPerformanceCounter(local_res10);
  __return_storage_ptr__->bIsSet = true;
  __return_storage_ptr__->TypedValue =
       (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return __return_storage_ptr__;
}

// Initialize @ 14604dbc0

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
UCatchupFixedRateCustomTimeStep::Initialize(UCatchupFixedRateCustomTimeStep *this,UEngine *param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  this->SimulationSeconds =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  piVar1 = (int *)(**(code **)(this->_padding_ + 0x2d8))(this,local_res8);
  auVar2._0_8_ = (double)*piVar1;
  auVar2._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = this->SimulationSeconds / ((double)piVar1[1] / auVar2._0_8_) +
                 __real_3fe0000000000000;
  auVar3 = roundpd(auVar2,auVar3,1);
  this->SimulationSeconds = auVar3._0_8_ * ((double)piVar1[1] / auVar2._0_8_);
  return true;
}

// Shutdown @ 14604fbf0

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
UCatchupFixedRateCustomTimeStep::Shutdown(UCatchupFixedRateCustomTimeStep *this,UEngine *param_1)

{
  return;
}

// StaticRegisterNativesUCatchupFixedRateCustomTimeStep @ 14604fd80

void __cdecl
UCatchupFixedRateCustomTimeStep::StaticRegisterNativesUCatchupFixedRateCustomTimeStep(void)

{
  return;
}

// UpdateTimeStep @ 146050350

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
UCatchupFixedRateCustomTimeStep::UpdateTimeStep
          (UCatchupFixedRateCustomTimeStep *this,UEngine *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  int *piVar6;
  double dVar7;
  double dVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  atomic<double> aVar10;
  LARGE_INTEGER local_res8 [4];
  
  UEngineCustomTimeStep::UpdateApplicationLastTime();
  QueryPerformanceCounter(local_res8);
  dVar5 = __real_4170000000000000;
  dVar7 = this->SimulationSeconds;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar7;
  dVar3 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  piVar6 = (int *)(**(code **)(this->_padding_ + 0x2d8))(this,local_res8);
  dVar4 = __real_3fe0000000000000;
  dVar8 = this->MaxCatchupSeconds;
  aVar10 = (atomic<double>)((double)piVar6[1] / (double)*piVar6);
  dVar7 = dVar3 - dVar7;
  if (dVar7 < dVar8) {
    in_XMM2._0_8_ = dVar8 * __real_3fe0000000000000;
    in_XMM2._8_8_ = 0;
    if (in_XMM2._0_8_ <= dVar7) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (__real_4008000000000000 / (dVar8 - in_XMM2._0_8_)) * (dVar7 - in_XMM2._0_8_) +
                     __real_3ff8000000000000;
      auVar9 = roundpd(auVar9,auVar2,1);
      aVar10 = (atomic<double>)(auVar9._0_8_ * (double)aVar10);
    }
  }
  else {
    aVar10 = (atomic<double>)((double)(int)(dVar7 / (double)aVar10) * (double)aVar10);
    if (2 < (byte)LogTimeManagement._0_1_) {
      in_XMM2._8_8_ = 0;
      in_XMM2._0_8_ = dVar8;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeManagement);
    }
  }
  this->SimulationSeconds = (double)aVar10 + this->SimulationSeconds;
  piVar6 = (int *)(**(code **)(this->_padding_ + 0x2d8))(this,local_res8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = this->SimulationSeconds / ((double)piVar6[1] / (double)*piVar6) + dVar4;
  auVar9 = roundpd(in_XMM2,auVar1,1);
  dVar7 = auVar9._0_8_ * ((double)piVar6[1] / (double)*piVar6);
  this->SimulationSeconds = dVar7;
  FApp::IdleTime = (atomic<double>)(dVar7 - dVar3);
  if ((double)FApp::IdleTime <= 0.0) {
    FApp::IdleTime = (atomic<double>)0x0;
  }
  dVar7 = this->SimulationSeconds;
  QueryPerformanceCounter(local_res8);
  dVar8 = dVar7 - ((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5);
  if (0.0 < dVar8) {
    if (__real_3f70624dd2f1a9fc < dVar8) {
      FWindowsPlatformProcess::SleepNoStats((float)(dVar8 - __real_3f60624dd2f1a9fc));
    }
    QueryPerformanceCounter(local_res8);
    dVar8 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
    while (dVar8 + dVar5 < dVar7) {
      FWindowsPlatformProcess::SleepNoStats(0.0);
      QueryPerformanceCounter(local_res8);
      dVar8 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
    }
  }
  QueryPerformanceCounter(local_res8);
  FApp::IdleTimeOvershoot =
       (atomic<double>)
       (((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5) -
       this->SimulationSeconds);
  if ((double)FApp::IdleTimeOvershoot <= 0.0) {
    FApp::IdleTimeOvershoot = (atomic<double>)0x0;
  }
  FApp::CurrentTime = (atomic<double>)this->SimulationSeconds;
  FApp::DeltaTime = aVar10;
  return false;
}

// _getUObject @ 1460518b0

UObject * __thiscall
UCatchupFixedRateCustomTimeStep::_getUObject(UCatchupFixedRateCustomTimeStep *this)

{
  return (UObject *)&this[-1]._padding_;
}

