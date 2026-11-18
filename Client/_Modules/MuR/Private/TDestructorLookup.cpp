// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// Destruct @ 14aac3600

void __cdecl
UE::Core::Private::
TDestructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
::Destruct(ulong64 param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (9 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014aac3654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[param_1])(param_2);
  return;
}

// Destruct @ 14aac3660

void __cdecl
UE::Core::Private::
TDestructorLookup<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>
::Destruct(ulong64 param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (5 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014aac36b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,int,float,TSharedPtr<UE::Mutable::Private::String_const_,1>,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[param_1])(param_2);
  return;
}

