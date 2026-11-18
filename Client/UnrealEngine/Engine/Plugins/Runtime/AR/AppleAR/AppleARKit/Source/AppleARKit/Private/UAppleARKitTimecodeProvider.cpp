// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 10

// StaticClass @ 14cfcc3f0

UClass * __cdecl UAppleARKitTimecodeProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitTimecodeProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitTimecodeProvider",
               &Z_Registration_Info_UClass_UAppleARKitTimecodeProvider.InnerSingleton,
               StaticRegisterNativesUAppleARKitTimecodeProvider,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitTimecodeProvider>,
               InternalVTableHelperCtorCaller<UAppleARKitTimecodeProvider>,local_res8,
               UTimecodeProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitTimecodeProvider.InnerSingleton;
}

// UAppleARKitTimecodeProvider @ 14cfd08b0

UAppleARKitTimecodeProvider * __thiscall
UAppleARKitTimecodeProvider::UAppleARKitTimecodeProvider
          (UAppleARKitTimecodeProvider *this,FVTableHelper *param_1)

{
  UTimecodeProvider::UTimecodeProvider((UTimecodeProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UAppleARKitTimecodeProvider__6B_;
  (this->FrameRate).Numerator = 60000;
  (this->FrameRate).Denominator = 1;
  return this;
}

// UAppleARKitTimecodeProvider @ 14cfd08f0

UAppleARKitTimecodeProvider * __thiscall
UAppleARKitTimecodeProvider::UAppleARKitTimecodeProvider(UAppleARKitTimecodeProvider *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UTimecodeProvider::UTimecodeProvider((UTimecodeProvider *)this,pFVar1);
  this->_padding_ = (longlong)&___7UAppleARKitTimecodeProvider__6B_;
  (this->FrameRate).Numerator = 0x3c;
  (this->FrameRate).Denominator = 1;
  return this;
}

// ~UAppleARKitTimecodeProvider @ 14cfd14a0

void __thiscall
UAppleARKitTimecodeProvider::~UAppleARKitTimecodeProvider(UAppleARKitTimecodeProvider *this)

{
  this->_padding_ = (longlong)&___7UAppleARKitTimecodeProvider__6B_;
  UTimecodeProvider::~UTimecodeProvider((UTimecodeProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14cfd7800

UClass * __cdecl UAppleARKitTimecodeProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitTimecodeProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitTimecodeProvider",
               &Z_Registration_Info_UClass_UAppleARKitTimecodeProvider.InnerSingleton,
               StaticRegisterNativesUAppleARKitTimecodeProvider,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitTimecodeProvider>,
               InternalVTableHelperCtorCaller<UAppleARKitTimecodeProvider>,local_res8,
               UTimecodeProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitTimecodeProvider.InnerSingleton;
}

// GetQualifiedFrameTime @ 14cfd7980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FQualifiedFrameTime * __thiscall
UAppleARKitTimecodeProvider::GetQualifiedFrameTime
          (UAppleARKitTimecodeProvider *this,FQualifiedFrameTime *__return_storage_ptr__)

{
  bool bVar1;
  FTimecode *pFVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  LARGE_INTEGER local_res8;
  FTimecode local_48;
  FTimecode local_30;
  
  QueryPerformanceCounter(&local_res8);
  dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar6 = (double)(this->FrameRate).Numerator / (double)(this->FrameRate).Denominator;
  dVar5 = dVar6 - ___real_403df853e2556b29;
  if (((double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3e45798ee2308c3a) ||
     (dVar6 = dVar6 - ___real_404df853e2556b29,
     (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3e45798ee2308c3a)) {
    bVar1 = FTimecode::UseDropFormatTimecodeByDefaultWhenSupported();
    if (bVar1) {
      bVar1 = true;
      goto LAB_14cfd7a1b;
    }
  }
  bVar1 = false;
LAB_14cfd7a1b:
  local_res8.QuadPart = 0;
  dVar3 = modf(dVar3,(double *)&local_res8);
  auVar4._0_8_ = (double)(this->FrameRate).Denominator;
  auVar4._8_8_ = 0;
  auVar7._0_8_ = ((double)((int)(double)local_res8 % 0x15180) + dVar3) *
                 ((double)(this->FrameRate).Numerator / auVar4._0_8_) + __real_3fe0000000000000;
  auVar7._8_8_ = 0;
  auVar4 = roundpd(auVar4,auVar7,1);
  local_res8.s.LowPart = (int)auVar4._0_8_;
  pFVar2 = FTimecode::FromFrameNumber
                     (&local_30,(FFrameNumber *)&local_res8.s,&this->FrameRate,bVar1);
  local_48.Hours = pFVar2->Hours;
  local_48.Minutes = pFVar2->Minutes;
  local_48.Seconds = pFVar2->Seconds;
  local_48.Frames = pFVar2->Frames;
  local_48.Subframe = pFVar2->Subframe;
  local_48.bDropFrameFormat = pFVar2->bDropFrameFormat;
  local_48._21_3_ = *(undefined3 *)&pFVar2->field_0x15;
  ::FQualifiedFrameTime::FQualifiedFrameTime(__return_storage_ptr__,&local_48,&this->FrameRate);
  return __return_storage_ptr__;
}

// GetSynchronizationState @ 14cfd88d0

ETimecodeProviderSynchronizationState __thiscall
UAppleARKitTimecodeProvider::GetSynchronizationState(UAppleARKitTimecodeProvider *this)

{
  return Synchronized;
}

// Initialize @ 14cfd9950

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
UAppleARKitTimecodeProvider::Initialize(UAppleARKitTimecodeProvider *this,UEngine *param_1)

{
  return true;
}

// Shutdown @ 14cfded60

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
UAppleARKitTimecodeProvider::Shutdown(UAppleARKitTimecodeProvider *this,UEngine *param_1)

{
  return;
}

// StaticRegisterNativesUAppleARKitTimecodeProvider @ 14cfdf4a0

void __cdecl UAppleARKitTimecodeProvider::StaticRegisterNativesUAppleARKitTimecodeProvider(void)

{
  return;
}

