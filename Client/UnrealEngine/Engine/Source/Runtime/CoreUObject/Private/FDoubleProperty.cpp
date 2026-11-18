// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// GetFieldSize @ 141f81c20

ulong64 __thiscall FDoubleProperty::GetFieldSize(FDoubleProperty *this)

{
  return 0x70;
}

// FDoubleProperty @ 1421602c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FDoubleProperty * __thiscall
FDoubleProperty::FDoubleProperty
          (FDoubleProperty *this,FFieldVariant param_1,FGenericPropertyParams *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((uVar1 & 1) == 0) {
LAB_142160347:
    if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) goto LAB_142160358;
LAB_14216036d:
    if ((uVar1 & 1) == 0) goto LAB_14216038e;
  }
  else {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (!UE::GC::GIsIncrementalReachabilityPending)) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216030d;
LAB_142160324:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_142160347;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216030d:
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142160324;
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142160347;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_142160358:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216036d;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_14216038e:
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
  *(undefined ***)this = &___7__TProperty_NVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,8);
  *(undefined ***)this = &___7FDoubleProperty__6B_;
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8000000000000;
  return this;
}

// FDoubleProperty @ 142160400

FDoubleProperty * __thiscall
FDoubleProperty::FDoubleProperty
          (FDoubleProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((uVar1 & 1) == 0) {
LAB_142160490:
    if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) goto LAB_1421604a1;
LAB_1421604b6:
    if ((uVar1 & 1) == 0) goto LAB_1421604d7;
  }
  else {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (!UE::GC::GIsIncrementalReachabilityPending)) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_142160456;
LAB_14216046d:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_142160490;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_142160456:
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216046d;
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142160490;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_1421604a1:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1421604b6;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_1421604d7:
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7__TProperty_NVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,8);
  *(undefined ***)this = &___7FDoubleProperty__6B_;
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8000000000000;
  return this;
}

// Construct @ 14216a6b0

FField * __cdecl
FDoubleProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

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
                (&::StaticFieldClass,L"FDoubleProperty",0x100000000,
                 CASTCLASS_FDoubleProperty|CASTCLASS_FNumericProperty|CASTCLASS_FProperty|
                 CASTCLASS_UField,pFVar2,Construct);
      atexit(`FDoubleProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
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
  this->_padding_ = (longlong)&___7FDoubleProperty__6B_;
  uVar1 = (param_1->Container).Unknown;
  local_res20 = uVar1;
  if ((uVar1 & 1) == 0) {
LAB_14216a7bb:
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216a7cf;
      goto LAB_14216a7dd;
    }
LAB_14216a7ff:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_14216a820;
  }
  else {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (UE::GC::GIsIncrementalReachabilityPending == false)) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216a77e;
LAB_14216a795:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_14216a7bb;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216a77e:
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216a795;
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216a7bb;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216a7cf:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
LAB_14216a7dd:
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (UE::GC::GIsIncrementalReachabilityPending == false)) goto LAB_14216a7ff;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_14216a820:
  FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
  this->_padding_ = (longlong)&___7__TProperty_NVFNumericProperty____6B_;
  FProperty::SetElementSize(this,8);
  this->_padding_ = (longlong)&___7FDoubleProperty__6B_;
  this->PropertyFlags = this->PropertyFlags | CPF_HasGetValueTypeHash;
  return (FField *)this;
}

// GetValueTypeHashInternal @ 14217de10

uint __thiscall FDoubleProperty::GetValueTypeHashInternal(FDoubleProperty *this,void *param_1)

{
  uint uVar1;
  
  uVar1 = UE::PreciseFPHash(*(double *)param_1);
  return uVar1;
}

// Identical @ 14217e3b0

bool __thiscall
FDoubleProperty::Identical(FDoubleProperty *this,void *param_1,void *param_2,uint param_3)

{
  bool bVar1;
  
  if (param_2 != (void *)0x0) {
    bVar1 = UE::PreciseFPEqual(*(double *)param_1,*(double *)param_2);
    return bVar1;
  }
  bVar1 = UE::PreciseFPEqual(*(double *)param_1,0.0);
  return bVar1;
}

// StaticClass @ 142193240

FFieldClass * __cdecl FDoubleProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FNumericProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FDoubleProperty",0x100000000,
                 CASTCLASS_FDoubleProperty|CASTCLASS_FNumericProperty|CASTCLASS_FProperty|
                 CASTCLASS_UField,pFVar1,Construct);
      atexit(`FDoubleProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

