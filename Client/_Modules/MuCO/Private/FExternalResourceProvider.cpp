// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// ~FExternalResourceProvider @ 14ac0c9d0

void __thiscall
UE::Mutable::Private::FExternalResourceProvider::~FExternalResourceProvider
          (FExternalResourceProvider *this)

{
  return;
}

// GetReferencedImageAsync @ 14ac5d6d0

TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> * __thiscall
UE::Mutable::Private::FExternalResourceProvider::GetReferencedImageAsync
          (FExternalResourceProvider *this,
          TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_>
          *__return_storage_ptr__,int param_1,uchar param_2,
          TFunction<void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\System.h"
                     ,0x55,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TTuple<UE::Tasks::Private::FTaskHandle,TFunction<void___cdecl(void)>_> *)(*pcVar1)();
    return pTVar3;
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  return __return_storage_ptr__;
}

