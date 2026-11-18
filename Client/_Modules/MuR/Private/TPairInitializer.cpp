// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// operator<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>_TTuple<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_> @ 14a94ed80

TTuple<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_> *
__thiscall
TPairInitializer<FName_&&,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const_&>
::
operator<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>_TTuple<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>
          (TPairInitializer<FName_&&,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const_&>
           *this,TTuple<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>
                 *__return_storage_ptr__)

{
  byte bVar1;
  TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *pTVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  TTuple<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_> *pTVar6;
  
  pTVar2 = this->Value;
  uVar4 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar4;
  bVar1 = pTVar2->TypeIndex;
  __return_storage_ptr__->field_0x18 = bVar1;
  if (1 < bVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTuple<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(&__return_storage_ptr__->field_0x8,pTVar2);
  return __return_storage_ptr__;
}

