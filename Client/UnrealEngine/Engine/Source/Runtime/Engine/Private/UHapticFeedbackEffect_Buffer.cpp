// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 14727d0f0

UClass * __cdecl UHapticFeedbackEffect_Buffer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHapticFeedbackEffect_Buffer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HapticFeedbackEffect_Buffer",
               &Z_Registration_Info_UClass_UHapticFeedbackEffect_Buffer.InnerSingleton,
               StaticRegisterNativesUHapticFeedbackEffect_Buffer,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UHapticFeedbackEffect_Buffer>,
               InternalVTableHelperCtorCaller<UHapticFeedbackEffect_Buffer>,local_res8,
               UHapticFeedbackEffect_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHapticFeedbackEffect_Buffer.InnerSingleton;
}

// UHapticFeedbackEffect_Buffer @ 14727f8a0

UHapticFeedbackEffect_Buffer * __thiscall
UHapticFeedbackEffect_Buffer::UHapticFeedbackEffect_Buffer
          (UHapticFeedbackEffect_Buffer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UHapticFeedbackEffect_Buffer__6B_;
  (this->Amplitudes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Amplitudes).ArrayNum = 0;
  (this->Amplitudes).ArrayMax = 0;
  return this;
}

// GetPrivateStaticClass @ 147280ce0

UClass * __cdecl UHapticFeedbackEffect_Buffer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHapticFeedbackEffect_Buffer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HapticFeedbackEffect_Buffer",
               &Z_Registration_Info_UClass_UHapticFeedbackEffect_Buffer.InnerSingleton,
               StaticRegisterNativesUHapticFeedbackEffect_Buffer,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UHapticFeedbackEffect_Buffer>,
               InternalVTableHelperCtorCaller<UHapticFeedbackEffect_Buffer>,local_res8,
               UHapticFeedbackEffect_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHapticFeedbackEffect_Buffer.InnerSingleton;
}

// StaticRegisterNativesUHapticFeedbackEffect_Buffer @ 147281520

void __cdecl UHapticFeedbackEffect_Buffer::StaticRegisterNativesUHapticFeedbackEffect_Buffer(void)

{
  return;
}

// UHapticFeedbackEffect_Buffer @ 147bbcd80

UHapticFeedbackEffect_Buffer * __thiscall
UHapticFeedbackEffect_Buffer::UHapticFeedbackEffect_Buffer
          (UHapticFeedbackEffect_Buffer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UHapticFeedbackEffect_Buffer__6B_;
  (this->Amplitudes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Amplitudes).ArrayNum = 0;
  (this->Amplitudes).ArrayMax = 0;
  return this;
}

// ~UHapticFeedbackEffect_Buffer @ 147bbf660

void __thiscall
UHapticFeedbackEffect_Buffer::~UHapticFeedbackEffect_Buffer(UHapticFeedbackEffect_Buffer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UHapticFeedbackEffect_Buffer__6B_;
  pFVar1 = (this->Amplitudes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UHapticFeedbackEffect_Base::~UHapticFeedbackEffect_Base((UHapticFeedbackEffect_Base *)this);
  return;
}

// GetDuration @ 147bdfc90

float __thiscall UHapticFeedbackEffect_Buffer::GetDuration(UHapticFeedbackEffect_Buffer *this)

{
  return (float)(this->Amplitudes).ArrayNum / (float)this->SampleRate;
}

// GetValues @ 147becb80

void __thiscall
UHapticFeedbackEffect_Buffer::GetValues
          (UHapticFeedbackEffect_Buffer *this,float param_1,FHapticFeedbackValues *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = this->SampleRate;
  param_2->Frequency = 1.0;
  iVar3 = (int)((float)iVar3 * param_1);
  if ((this->Amplitudes).ArrayNum <= iVar3) {
    param_2->Amplitude = 0.0;
    return;
  }
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_2->Amplitude =
       (float)(byte)(this->Amplitudes).AllocatorInstance.Data[iVar3] * __real_3b808081;
  return;
}

// Initialize @ 147befdc0

void __thiscall
UHapticFeedbackEffect_Buffer::Initialize
          (UHapticFeedbackEffect_Buffer *this,FHapticFeedbackBuffer *param_1)

{
  param_1->CurrentPtr = 0;
  param_1->SamplesSent = 0;
  param_1->bFinishedPlaying = false;
  param_1->RawData = (uchar *)0x0;
  param_1->CurrentSampleIndex[0] = 0;
  param_1->CurrentSampleIndex[1] = 0;
  return;
}

