// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DumpGPUServices
// Functions: 9

// CloneToEmptyStorage @ 14e2bfee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 14e2bff20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l49::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14e2bff60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l51::<lambda_2>,1,0>
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

// Destroy @ 14e2c02a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e2c02d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l49::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e2c0300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l51::<lambda_2>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e2c0305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14e2c0780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e2c0790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l49::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e2c07a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDumpGPUHTTPUpload::StartUploadFile'::__l2::<lambda_1>::operator()'::__l51::<lambda_2>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

