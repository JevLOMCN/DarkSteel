// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// GetFieldSize @ 141f81d20

ulong64 __thiscall FUInt32Property::GetFieldSize(FUInt32Property *this)

{
  return 0x70;
}

// Construct @ 14216ca20

FField * __cdecl
FUInt32Property::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  FUInt32Property *this;
  FUInt32Property *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x70,0);
  pFVar1 = (FUInt32Property *)0x0;
  if (this != (FUInt32Property *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pFVar2 = FNumericProperty::StaticClass();
        FFieldClass::FFieldClass
                  (&::StaticFieldClass,L"FUInt32Property",0x800,
                   CASTCLASS_FNumericProperty|CASTCLASS_FProperty|CASTCLASS_FUInt32Property|
                   CASTCLASS_UField,pFVar2,Construct);
        atexit(`FUInt32Property::StaticClass'::__l2::
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
    *(undefined ***)this = &___7FUInt32Property__6B_;
    local_res20 = (param_1->Container).Unknown;
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    pFVar1 = FUInt32Property(this,(FFieldVariant)&local_res20,param_2,param_3);
  }
  return (FField *)pFVar1;
}

// StaticClass @ 142194120

FFieldClass * __cdecl FUInt32Property::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FNumericProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FUInt32Property",0x800,
                 CASTCLASS_FNumericProperty|CASTCLASS_FProperty|CASTCLASS_FUInt32Property|
                 CASTCLASS_UField,pFVar1,Construct);
      atexit(`FUInt32Property::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// FUInt32Property @ 1421b3f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FUInt32Property * __thiscall
FUInt32Property::FUInt32Property
          (FUInt32Property *this,FFieldVariant param_1,FGenericPropertyParams *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (!UE::GC::GIsIncrementalReachabilityPending)) {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_1421b3fe4;
      goto LAB_1421b3ffd;
    }
LAB_1421b4021:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_1421b4040;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_1421b3fe4:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1421b3ffd:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_1421b4021;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1421b4021;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_1421b4040:
  FNumericProperty::FNumericProperty
            ((FNumericProperty *)this,(FFieldVariant)&local_res8,
             (FPropertyParamsBaseWithOffset *)param_2,
             CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
  *(undefined ***)this = &___7__TProperty_IVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,4);
  *(undefined ***)this = &___7FUInt32Property__6B_;
  return this;
}

// FUInt32Property @ 1421b40a0

FUInt32Property * __thiscall
FUInt32Property::FUInt32Property
          (FUInt32Property *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (!UE::GC::GIsIncrementalReachabilityPending)) {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_1421b4115;
      goto LAB_1421b412e;
    }
LAB_1421b4152:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_1421b4171;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_1421b4115:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1421b412e:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_1421b4152;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1421b4152;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_1421b4171:
  FNumericProperty::FNumericProperty
            ((FNumericProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7__TProperty_IVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,4);
  *(undefined ***)this = &___7FUInt32Property__6B_;
  return this;
}

