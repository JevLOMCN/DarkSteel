// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FInt8Property @ 142160c80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FInt8Property * __thiscall
FInt8Property::FInt8Property
          (FInt8Property *this,FFieldVariant param_1,FGenericPropertyParams *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((uVar1 & 1) == 0) {
LAB_142160d07:
    if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) goto LAB_142160d18;
LAB_142160d2d:
    if ((uVar1 & 1) == 0) goto LAB_142160d4e;
  }
  else {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (!UE::GC::GIsIncrementalReachabilityPending)) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_142160ccd;
LAB_142160ce4:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_142160d07;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_142160ccd:
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142160ce4;
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142160d07;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_142160d18:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142160d2d;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_142160d4e:
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
  *(undefined ***)this = &___7__TProperty_CVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,1);
  *(undefined ***)this = &___7FInt8Property__6B_;
  return this;
}

// FInt8Property @ 142160db0

FInt8Property * __thiscall
FInt8Property::FInt8Property
          (FInt8Property *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((uVar1 & 1) == 0) {
LAB_142160e40:
    if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) goto LAB_142160e51;
LAB_142160e66:
    if ((uVar1 & 1) == 0) goto LAB_142160e87;
  }
  else {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (!UE::GC::GIsIncrementalReachabilityPending)) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_142160e06;
LAB_142160e1d:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_142160e40;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_142160e06:
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142160e1d;
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142160e40;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_142160e51:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142160e66;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_142160e87:
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7__TProperty_CVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,1);
  *(undefined ***)this = &___7FInt8Property__6B_;
  return this;
}

// Construct @ 14216afe0

FField * __cdecl
FInt8Property::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  FProperty *this;
  FFieldClass *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x70,0);
  if (this == (FProperty *)0x0) {
    return (FField *)0x0;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = FNumericProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FInt8Property",2,
                 CASTCLASS_FNumericProperty|CASTCLASS_FProperty|CASTCLASS_FInt8Property|
                 CASTCLASS_UField,pFVar2,Construct);
      atexit(`FInt8Property::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  FField::FField((FField *)this,EC_InternalUseOnlyConstructor,&::StaticFieldClass);
  this->PropertyLinkNext = (FProperty *)0x0;
  this->NextRef = (FProperty *)0x0;
  this->DestructorLinkNext = (FProperty *)0x0;
  this->PostConstructLinkNext = (FProperty *)0x0;
  (this->RepNotifyFunc).ComparisonIndex = 0;
  (this->RepNotifyFunc).Number = 0;
  this->_padding_ = (longlong)&___7FInt8Property__6B_;
  uVar1 = (param_1->Container).Unknown;
  local_res20 = uVar1;
  if ((uVar1 & 1) == 0) {
LAB_14216b0eb:
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216b0ff;
      goto LAB_14216b10d;
    }
LAB_14216b12f:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_14216b150;
  }
  else {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (UE::GC::GIsIncrementalReachabilityPending == false)) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216b0ae;
LAB_14216b0c5:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_14216b0eb;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216b0ae:
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216b0c5;
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216b0eb;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216b0ff:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
LAB_14216b10d:
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (UE::GC::GIsIncrementalReachabilityPending == false)) goto LAB_14216b12f;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_14216b150:
  FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
  this->_padding_ = (longlong)&___7__TProperty_CVFNumericProperty____6B_;
  FProperty::SetElementSize(this,1);
  this->_padding_ = (longlong)&___7FInt8Property__6B_;
  return (FField *)this;
}

// GetFieldSize @ 14217bc40

ulong64 __thiscall FInt8Property::GetFieldSize(FInt8Property *this)

{
  return 0x70;
}

// StaticClass @ 142193510

FFieldClass * __cdecl FInt8Property::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FNumericProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FInt8Property",2,
                 CASTCLASS_FNumericProperty|CASTCLASS_FProperty|CASTCLASS_FInt8Property|
                 CASTCLASS_UField,pFVar1,Construct);
      atexit(`FInt8Property::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

