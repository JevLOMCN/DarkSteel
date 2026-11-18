// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// Construct @ 14216c8d0

FField * __cdecl
FUInt16Property::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  FUInt16Property *this;
  FUInt16Property *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x70,0);
  pFVar1 = (FUInt16Property *)0x0;
  if (this != (FUInt16Property *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pFVar2 = FNumericProperty::StaticClass();
        FFieldClass::FFieldClass
                  (&::StaticFieldClass,L"FUInt16Property",0x40000,
                   CASTCLASS_FNumericProperty|CASTCLASS_FUInt16Property|CASTCLASS_FProperty|
                   CASTCLASS_UField,pFVar2,Construct);
        atexit(`FUInt16Property::StaticClass'::__l2::
               _dynamic_atexit_destructor_for__StaticFieldClass__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,&::StaticFieldClass);
    *(undefined8 *)&this->field_0x48 = 0;
    *(undefined8 *)&this->field_0x50 = 0;
    *(undefined8 *)&this->field_0x58 = 0;
    *(undefined8 *)&this->field_0x60 = 0;
    *(undefined8 *)&this->field_0x68 = 0;
    *(undefined ***)this = &___7FUInt16Property__6B_;
    local_res20 = (param_1->Container).Unknown;
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    pFVar1 = FUInt16Property(this,(FFieldVariant)&local_res20,param_2,param_3);
  }
  return (FField *)pFVar1;
}

// GetFieldSize @ 14217bcc0

ulong64 __thiscall FUInt16Property::GetFieldSize(FUInt16Property *this)

{
  return 0x70;
}

// StaticClass @ 142194070

FFieldClass * __cdecl FUInt16Property::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FNumericProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FUInt16Property",0x40000,
                 CASTCLASS_FNumericProperty|CASTCLASS_FUInt16Property|CASTCLASS_FProperty|
                 CASTCLASS_UField,pFVar1,Construct);
      atexit(`FUInt16Property::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// FUInt16Property @ 1421b3d10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FUInt16Property * __thiscall
FUInt16Property::FUInt16Property
          (FUInt16Property *this,FFieldVariant param_1,FGenericPropertyParams *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (!UE::GC::GIsIncrementalReachabilityPending)) {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_1421b3d84;
      goto LAB_1421b3d9d;
    }
LAB_1421b3dc1:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_1421b3de0;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_1421b3d84:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1421b3d9d:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_1421b3dc1;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1421b3dc1;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_1421b3de0:
  FNumericProperty::FNumericProperty
            ((FNumericProperty *)this,(FFieldVariant)&local_res8,
             (FPropertyParamsBaseWithOffset *)param_2,
             CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
  *(undefined ***)this = &___7__TProperty_GVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,2);
  *(undefined ***)this = &___7FUInt16Property__6B_;
  return this;
}

// FUInt16Property @ 1421b3e40

FUInt16Property * __thiscall
FUInt16Property::FUInt16Property
          (FUInt16Property *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (!UE::GC::GIsIncrementalReachabilityPending)) {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_1421b3eb5;
      goto LAB_1421b3ece;
    }
LAB_1421b3ef2:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_1421b3f11;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_1421b3eb5:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1421b3ece:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_1421b3ef2;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1421b3ef2;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_1421b3f11:
  FNumericProperty::FNumericProperty
            ((FNumericProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7__TProperty_GVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,2);
  *(undefined ***)this = &___7FUInt16Property__6B_;
  return this;
}

