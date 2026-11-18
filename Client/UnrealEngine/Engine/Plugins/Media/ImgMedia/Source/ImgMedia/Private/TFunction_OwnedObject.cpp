// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 21

// CloneToEmptyStorage @ 14ea45400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 14ea45440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ea45460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FImgMediaPlayer::Open'::__l2::<lambda_5>_>'::__l4::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 14ea454a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14ea454e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l9::<lambda_2>,1,1>::
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

// CloneToEmptyStorage @ 14ea45520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::__l26::<lambda_2>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14ea45560

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FImgMediaPlayer::Open'::__l2::<lambda_5>,1,1>::
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

// Destroy @ 14ea46aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ea46ad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ea46ad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ea46ae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FImgMediaPlayer::Open'::__l2::<lambda_5>_>'::__l4::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ea46b10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ea46b15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ea46b20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l9::<lambda_2>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ea46b50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::__l26::<lambda_2>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ea46b80

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FImgMediaPlayer::Open'::__l2::<lambda_5>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14ea4b030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::~FExrImgMediaReaderGpu'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ea4b040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ea4b050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FImgMediaPlayer::Open'::__l2::<lambda_5>_>'::__l4::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ea4b060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ea4b070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::AllocateGpuBufferFromPool'::__l9::<lambda_2>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ea4b080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FExrImgMediaReaderGpu::ReadMip'::__l26::<lambda_2>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ea4b090

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FImgMediaPlayer::Open'::__l2::<lambda_5>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

