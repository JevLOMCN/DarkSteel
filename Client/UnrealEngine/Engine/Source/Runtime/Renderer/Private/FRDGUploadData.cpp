// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FRDGUploadData<UE::Math::TVector4<float>_> @ 1448ec290

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGUploadData<UE::Math::TVector4<float>_> * __thiscall
FRDGUploadData<UE::Math::TVector4<float>_>::FRDGUploadData<UE::Math::TVector4<float>_>
          (FRDGUploadData<UE::Math::TVector4<float>_> *this,FRDGBuilder *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  FRDGUploadData<UE::Math::TVector4<float>_> *pFVar4;
  
  pvVar3 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,(ulonglong)param_2 << 4,0x10);
  *(void **)this = pvVar3;
  *(uint *)&this->field_0x8 = param_2;
  if ((int)param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGUploadData<UE::Math::TVector4<float>_> *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// FRDGUploadData<UE::Math::TIntVector4<unsigned_int>_> @ 144d3d730

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGUploadData<UE::Math::TIntVector4<unsigned_int>_> * __thiscall
FRDGUploadData<UE::Math::TIntVector4<unsigned_int>_>::
FRDGUploadData<UE::Math::TIntVector4<unsigned_int>_>
          (FRDGUploadData<UE::Math::TIntVector4<unsigned_int>_> *this,FRDGBuilder *param_1,
          uint param_2)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  FRDGUploadData<UE::Math::TIntVector4<unsigned_int>_> *pFVar4;
  
  pvVar3 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,(ulonglong)param_2 << 4,4);
  *(void **)this = pvVar3;
  *(uint *)&this->field_0x8 = param_2;
  if ((int)param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGUploadData<UE::Math::TIntVector4<unsigned_int>_> *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

