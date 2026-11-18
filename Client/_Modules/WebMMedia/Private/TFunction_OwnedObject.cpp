// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 12

// CloneToEmptyStorage @ 14f11bd30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMAudioDecoder::DecodeAudioFramesAsync'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14f11bd70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMVideoDecoder::DecodeVideoFramesAsync'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14f11bdb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l32::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14f11bdf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l29::<lambda_2>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14f11da40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMAudioDecoder::DecodeAudioFramesAsync'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f11da70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMVideoDecoder::DecodeVideoFramesAsync'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f11daa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l32::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f11daa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f11dab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l29::<lambda_2>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14f11e8e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMAudioDecoder::DecodeAudioFramesAsync'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f11e8f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMVideoDecoder::DecodeVideoFramesAsync'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f11e900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l32::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f11e910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l29::<lambda_2>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

