// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// GetFieldSize @ 141f81d30

ulong64 __thiscall FUInt64Property::GetFieldSize(FUInt64Property *this)

{
  return 0x70;
}

// Construct @ 14216cb70

FField * __cdecl
FUInt64Property::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  FUInt64Property *this;
  FUInt64Property *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x70,0);
  pFVar1 = (FUInt64Property *)0x0;
  if (this != (FUInt64Property *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pFVar2 = FNumericProperty::StaticClass();
        FFieldClass::FFieldClass
                  (&::StaticFieldClass,L"FUInt64Property",0x200,
                   CASTCLASS_FNumericProperty|CASTCLASS_FProperty|CASTCLASS_FUInt64Property|
                   CASTCLASS_UField,pFVar2,Construct);
        atexit(`FUInt64Property::StaticClass'::__l2::
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
    *(undefined ***)this = &___7FUInt64Property__6B_;
    local_res20 = (param_1->Container).Unknown;
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    pFVar1 = FUInt64Property(this,(FFieldVariant)&local_res20,param_2,param_3);
  }
  return (FField *)pFVar1;
}

// StaticClass @ 1421941d0

FFieldClass * __cdecl FUInt64Property::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FNumericProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FUInt64Property",0x200,
                 CASTCLASS_FNumericProperty|CASTCLASS_FProperty|CASTCLASS_FUInt64Property|
                 CASTCLASS_UField,pFVar1,Construct);
      atexit(`FUInt64Property::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// FUInt64Property @ 1421b41d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FUInt64Property * __thiscall
FUInt64Property::FUInt64Property
          (FUInt64Property *this,FFieldVariant param_1,FGenericPropertyParams *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (!UE::GC::GIsIncrementalReachabilityPending)) {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_1421b4244;
      goto LAB_1421b425d;
    }
LAB_1421b4281:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_1421b42a0;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_1421b4244:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1421b425d:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_1421b4281;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1421b4281;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_1421b42a0:
  FNumericProperty::FNumericProperty
            ((FNumericProperty *)this,(FFieldVariant)&local_res8,
             (FPropertyParamsBaseWithOffset *)param_2,
             CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
  *(undefined ***)this = &___7__TProperty__KVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,8);
  *(undefined ***)this = &___7FUInt64Property__6B_;
  return this;
}

// FUInt64Property @ 1421b4300

FUInt64Property * __thiscall
FUInt64Property::FUInt64Property
          (FUInt64Property *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (!UE::GC::GIsIncrementalReachabilityPending)) {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_1421b4375;
      goto LAB_1421b438e;
    }
LAB_1421b43b2:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_1421b43d1;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_1421b4375:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1421b438e:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_1421b43b2;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1421b43b2;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_1421b43d1:
  FNumericProperty::FNumericProperty
            ((FNumericProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7__TProperty__KVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,8);
  *(undefined ***)this = &___7FUInt64Property__6B_;
  return this;
}

