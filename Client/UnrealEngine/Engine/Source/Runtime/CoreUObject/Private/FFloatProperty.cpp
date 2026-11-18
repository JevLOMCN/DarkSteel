// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// GetFieldSize @ 141f81c40

ulong64 __thiscall FFloatProperty::GetFieldSize(FFloatProperty *this)

{
  return 0x70;
}

// FFloatProperty @ 142160540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FFloatProperty * __thiscall
FFloatProperty::FFloatProperty
          (FFloatProperty *this,FFieldVariant param_1,FGenericPropertyParams *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((uVar1 & 1) == 0) {
LAB_1421605c7:
    if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) goto LAB_1421605d8;
LAB_1421605ed:
    if ((uVar1 & 1) == 0) goto LAB_14216060e;
  }
  else {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (!UE::GC::GIsIncrementalReachabilityPending)) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216058d;
LAB_1421605a4:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_1421605c7;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216058d:
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1421605a4;
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1421605c7;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_1421605d8:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1421605ed;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_14216060e:
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
  *(undefined ***)this = &___7__TProperty_MVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,4);
  *(undefined ***)this = &___7FFloatProperty__6B_;
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8000000000000;
  return this;
}

// FFloatProperty @ 142160680

FFloatProperty * __thiscall
FFloatProperty::FFloatProperty
          (FFloatProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((uVar1 & 1) == 0) {
LAB_142160710:
    if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) goto LAB_142160721;
LAB_142160736:
    if ((uVar1 & 1) == 0) goto LAB_142160757;
  }
  else {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (!UE::GC::GIsIncrementalReachabilityPending)) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_1421606d6;
LAB_1421606ed:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_142160710;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_1421606d6:
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1421606ed;
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142160710;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_142160721:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_142160736;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_142160757:
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7__TProperty_MVFNumericProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,4);
  *(undefined ***)this = &___7FFloatProperty__6B_;
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8000000000000;
  return this;
}

// Construct @ 14216a910

FField * __cdecl
FFloatProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

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
                (&::StaticFieldClass,L"FFloatProperty",0x100,
                 CASTCLASS_FNumericProperty|CASTCLASS_FProperty|CASTCLASS_FFloatProperty|
                 CASTCLASS_UField,pFVar2,Construct);
      atexit(`FFloatProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__
            );
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
  this->_padding_ = (longlong)&___7FFloatProperty__6B_;
  uVar1 = (param_1->Container).Unknown;
  local_res20 = uVar1;
  if ((uVar1 & 1) == 0) {
LAB_14216aa1b:
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216aa2f;
      goto LAB_14216aa3d;
    }
LAB_14216aa5f:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_14216aa80;
  }
  else {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (UE::GC::GIsIncrementalReachabilityPending == false)) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216a9de;
LAB_14216a9f5:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_14216aa1b;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216a9de:
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216a9f5;
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216aa1b;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216aa2f:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
LAB_14216aa3d:
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0) ||
       (UE::GC::GIsIncrementalReachabilityPending == false)) goto LAB_14216aa5f;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_14216aa80:
  FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
  this->_padding_ = (longlong)&___7__TProperty_MVFNumericProperty____6B_;
  FProperty::SetElementSize(this,4);
  this->_padding_ = (longlong)&___7FFloatProperty__6B_;
  this->PropertyFlags = this->PropertyFlags | CPF_HasGetValueTypeHash;
  return (FField *)this;
}

// GetValueTypeHashInternal @ 14217de20

uint __thiscall FFloatProperty::GetValueTypeHashInternal(FFloatProperty *this,void *param_1)

{
  uint uVar1;
  
  uVar1 = UE::PreciseFPHash(*(float *)param_1);
  return uVar1;
}

// Identical @ 14217e3e0

bool __thiscall
FFloatProperty::Identical(FFloatProperty *this,void *param_1,void *param_2,uint param_3)

{
  bool bVar1;
  
  if (param_2 != (void *)0x0) {
    bVar1 = UE::PreciseFPEqual(*(float *)param_1,*(float *)param_2);
    return bVar1;
  }
  bVar1 = UE::PreciseFPEqual(*(float *)param_1,0.0);
  return bVar1;
}

// StaticClass @ 142193300

FFieldClass * __cdecl FFloatProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FNumericProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FFloatProperty",0x100,
                 CASTCLASS_FNumericProperty|CASTCLASS_FProperty|CASTCLASS_FFloatProperty|
                 CASTCLASS_UField,pFVar1,Construct);
      atexit(`FFloatProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__
            );
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

