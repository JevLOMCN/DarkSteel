// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// CloneToEmptyStorage @ 14e5e3960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGLTFBufferUtilities::ReadRHIBuffer'::__l2::<lambda_1>,1,1>::
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

// Destroy @ 14e5ef6d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGLTFBufferUtilities::ReadRHIBuffer'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14e5f3c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGLTFBufferUtilities::ReadRHIBuffer'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

