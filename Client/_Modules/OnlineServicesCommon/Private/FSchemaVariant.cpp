// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 2

// FSchemaVariant @ 14ee0e6e0

FSchemaVariant * __thiscall
UE::Online::FSchemaVariant::FSchemaVariant(FSchemaVariant *this,FSchemaVariant *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FSchemaVariant *pFVar4;
  
  bVar1 = (param_1->VariantData).TypeIndex;
  (this->VariantData).TypeIndex = bVar1;
  if (3 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSchemaVariant *)(*pcVar2)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FString,__int64,double,bool>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(this,param_1);
  this->VariantType = param_1->VariantType;
  return this;
}

// FSchemaVariant @ 14efe3b50

FSchemaVariant * __thiscall
UE::Online::FSchemaVariant::FSchemaVariant(FSchemaVariant *this,wchar_t *param_1)

{
  (this->VariantData)._padding_ = 0;
  (this->VariantData)._padding_ = 0;
  (this->VariantData).TypeIndex = '\0';
  this->VariantType = None;
  Set(this,param_1);
  return this;
}

