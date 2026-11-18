// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 4

// TCheckedPointerIterator<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_,int,0> @ 146d02260

TCheckedPointerIterator<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_,int,0> * __thiscall
TCheckedPointerIterator<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_,int,0>::
TCheckedPointerIterator<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_,int,0>
          (TCheckedPointerIterator<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_,int,0>
           *this,int *param_1,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> *param_2)

{
  this->Ptr = param_2;
  this->CurrentNum = param_1;
  this->InitialNum = *param_1;
  return this;
}

// TCheckedPointerIterator<UPrimitiveComponent_*,int,0> @ 146d02280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TCheckedPointerIterator<UPrimitiveComponent_*,int,0> * __thiscall
TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::
TCheckedPointerIterator<UPrimitiveComponent_*,int,0>
          (TCheckedPointerIterator<UPrimitiveComponent_*,int,0> *this,int *param_1,
          UPrimitiveComponent **param_2)

{
  this->Ptr = param_2;
  this->CurrentNum = param_1;
  this->InitialNum = *param_1;
  return this;
}

// TCheckedPointerIterator<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0> @ 146d022a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TCheckedPointerIterator<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0> * __thiscall
TCheckedPointerIterator<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0>::
TCheckedPointerIterator<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0>
          (TCheckedPointerIterator<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0> *this,
          int *param_1,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_2)

{
  this->Ptr = param_2;
  this->CurrentNum = param_1;
  this->InitialNum = *param_1;
  return this;
}

// operator() @ 1504fb7e0

bool __thiscall
`TCheckedPointerIterator<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0>::operator!='::
__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2846541355549720852>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2846541355549720852>,
                       &`public:___cdecl_`public:_bool___cdecl_TCheckedPointerIterator<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0>::operator!=(TCheckedPointerIterator<class_TSharedPtr<struct_FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0>_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

