// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 1

// FCustomSessionSetting @ 14f004920

FCustomSessionSetting * __thiscall
UE::Online::FCustomSessionSetting::FCustomSessionSetting
          (FCustomSessionSetting *this,FCustomSessionSetting *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FCustomSessionSetting *pFVar4;
  
  bVar1 = (param_1->Data).VariantData.TypeIndex;
  (this->Data).VariantData.TypeIndex = bVar1;
  if (3 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FCustomSessionSetting *)(*pcVar2)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FString,__int64,double,bool>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(this,param_1);
  (this->Data).VariantType = (param_1->Data).VariantType;
  this->Visibility = param_1->Visibility;
  this->ID = param_1->ID;
  return this;
}

