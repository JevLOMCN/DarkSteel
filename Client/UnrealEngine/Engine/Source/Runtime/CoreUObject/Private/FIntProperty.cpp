// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// GetFieldSize @ 141f81c60

ulong64 __thiscall FIntProperty::GetFieldSize(FIntProperty *this)

{
  return 0x70;
}

// FIntProperty @ 142160ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FIntProperty * __thiscall
FIntProperty::FIntProperty(FIntProperty *this,FFieldVariant param_1,FGenericPropertyParams *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((uVar1 & 1) == 0) {
LAB_142160f67:
    if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) goto LAB_142160f78;
LAB_142160f8d:
    if ((uVar1 & 1) == 0) goto LAB_142160fae;
  }
  else {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (!UE::GC::GIsIncrementalReachabilityPending)) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_142160f2d;
LAB_142160f44:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_142160f67;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_142160f2d:
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142160f44;
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142160f67;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_142160f78:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142160f8d;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_142160fae:
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
  *(undefined ***)this = &___7__TProperty_HVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,4);
  *(undefined ***)this = &___7FIntProperty__6B_;
  return this;
}

// FIntProperty @ 142161010

FIntProperty * __thiscall
FIntProperty::FIntProperty
          (FIntProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((uVar1 & 1) == 0) {
LAB_1421610a0:
    if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) goto LAB_1421610b1;
LAB_1421610c6:
    if ((uVar1 & 1) == 0) goto LAB_1421610e7;
  }
  else {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (!UE::GC::GIsIncrementalReachabilityPending)) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_142161066;
LAB_14216107d:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_1421610a0;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_142161066:
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216107d;
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1421610a0;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_1421610b1:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1421610c6;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_1421610e7:
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7__TProperty_HVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,4);
  *(undefined ***)this = &___7FIntProperty__6B_;
  return this;
}

// Construct @ 14216b220

FField * __cdecl FIntProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

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
                (&::StaticFieldClass,L"FIntProperty",0x80,
                 CASTCLASS_FNumericProperty|CASTCLASS_FProperty|CASTCLASS_FIntProperty|
                 CASTCLASS_UField,pFVar2,Construct);
      atexit(`FIntProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__);
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
  this->_padding_ = (longlong)&___7FIntProperty__6B_;
  uVar1 = (param_1->Container).Unknown;
  local_res20 = uVar1;
  if ((uVar1 & 1) == 0) {
LAB_14216b32b:
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216b33f;
      goto LAB_14216b34d;
    }
LAB_14216b36f:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_14216b390;
  }
  else {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (UE::GC::GIsIncrementalReachabilityPending == false)) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216b2ee;
LAB_14216b305:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_14216b32b;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216b2ee:
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216b305;
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216b32b;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216b33f:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
LAB_14216b34d:
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (UE::GC::GIsIncrementalReachabilityPending == false)) goto LAB_14216b36f;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_14216b390:
  FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
  this->_padding_ = (longlong)&___7__TProperty_HVFNumericProperty____6B_;
  FProperty::SetElementSize(this,4);
  this->_padding_ = (longlong)&___7FIntProperty__6B_;
  return (FField *)this;
}

// StaticClass @ 1421935c0

FFieldClass * __cdecl FIntProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FNumericProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FIntProperty",0x80,
                 CASTCLASS_FNumericProperty|CASTCLASS_FProperty|CASTCLASS_FIntProperty|
                 CASTCLASS_UField,pFVar1,Construct);
      atexit(`FIntProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

