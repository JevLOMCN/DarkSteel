// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 4

// <lambda_invoker_cdecl> @ 1471b91f0

bool __cdecl
`UE::Mass::Private::TBitTypeRegistry<FMassFragment,UScriptStruct>::
TBitTypeRegistry<FMassFragment,UScriptStruct>'::__l1::<lambda_24_>::<lambda_invoker_cdecl>
          (UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar3,L"MassFragment"
                          );
      if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
        return false;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// <lambda_invoker_cdecl> @ 1471b9270

bool __cdecl
`UE::Mass::Private::TBitTypeRegistry<FMassTag,UScriptStruct>::
TBitTypeRegistry<FMassTag,UScriptStruct>'::__l1::<lambda_25_>::<lambda_invoker_cdecl>
          (UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar3,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
        return false;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// TBitTypeRegistry<FMassFragment,UScriptStruct> @ 1471d51b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBitTypeRegistry<FMassFragment,UScriptStruct> * __thiscall
UE::Mass::Private::TBitTypeRegistry<FMassFragment,UScriptStruct>::
TBitTypeRegistry<FMassFragment,UScriptStruct>(TBitTypeRegistry<FMassFragment,UScriptStruct> *this)

{
  undefined1 *puVar1;
  UPackage *pUVar2;
  undefined ***pppuVar3;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_20 = (undefined ***)0x0;
  local_38 = &___7__TFunction_OwnedObject_P6A_NPEBVUStruct___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = `UE::Mass::Private::TBitTypeRegistry<FMassFragment,UScriptStruct>::
             TBitTypeRegistry<FMassFragment,UScriptStruct>'::__l1::<lambda_24_>::
             <lambda_invoker_cdecl>;
  local_48[0] = Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(UStruct_const_*),bool,UStruct_const_*>::Call;
  if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar2,L"MassFragment");
  }
  FStructTracker::FStructTracker
            ((FStructTracker *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton,
             (TFunction<bool___cdecl(UStruct_const_*)> *)local_48);
  puVar1 = &(this->StructTracker).field_0x474;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  if (local_48[0] != (code *)0x0) {
    pppuVar3 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar3 = local_20;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  return this;
}

// TBitTypeRegistry<FMassTag,UScriptStruct> @ 1471d5280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBitTypeRegistry<FMassTag,UScriptStruct> * __thiscall
UE::Mass::Private::TBitTypeRegistry<FMassTag,UScriptStruct>::
TBitTypeRegistry<FMassTag,UScriptStruct>(TBitTypeRegistry<FMassTag,UScriptStruct> *this)

{
  undefined1 *puVar1;
  UPackage *pUVar2;
  undefined ***pppuVar3;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_20 = (undefined ***)0x0;
  local_38 = &___7__TFunction_OwnedObject_P6A_NPEBVUStruct___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = `UE::Mass::Private::TBitTypeRegistry<FMassTag,UScriptStruct>::
             TBitTypeRegistry<FMassTag,UScriptStruct>'::__l1::<lambda_25_>::<lambda_invoker_cdecl>;
  local_48[0] = Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(UStruct_const_*),bool,UStruct_const_*>::Call;
  if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar2,L"MassTag");
  }
  FStructTracker::FStructTracker
            ((FStructTracker *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton,
             (TFunction<bool___cdecl(UStruct_const_*)> *)local_48);
  puVar1 = &(this->StructTracker).field_0x474;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  if (local_48[0] != (code *)0x0) {
    pppuVar3 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar3 = local_20;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  return this;
}

