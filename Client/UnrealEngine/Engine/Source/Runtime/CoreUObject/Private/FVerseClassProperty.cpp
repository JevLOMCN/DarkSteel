// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// operator_new @ 142259ef0

void * __cdecl FVerseClassProperty::operator_new(ulong64 param_1)

{
  FField *this;
  FFieldClass *pFVar1;
  
  this = FMemory::Malloc(param_1,0);
  if (this != (FField *)0x0) {
    pFVar1 = StaticClass();
    FField::FField(this,EC_InternalUseOnlyConstructor,pFVar1);
    *(undefined2 *)&this[2].NamePrivate.ComparisonIndex.Value = 0;
    this[1].Next = (FField *)0x0;
    this[1].NamePrivate.ComparisonIndex = 0;
    this[1].NamePrivate.Number = 0;
    *(undefined8 *)&this[1].FlagsPrivate = 0;
    this[2]._padding_ = 0;
    this[2].ClassPrivate = (FFieldClass *)0x0;
    this[2].Owner.Container.Field = (FField *)0x0;
    this[2].Next = (FField *)0x0;
    this->_padding_ = (longlong)&___7FVerseClassProperty__6B_;
  }
  return this;
}

// GetFieldSize @ 14226f270

ulong64 __thiscall FVerseClassProperty::GetFieldSize(FVerseClassProperty *this)

{
  return 0x88;
}

// FVerseClassProperty @ 142294e00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FVerseClassProperty * __thiscall
FVerseClassProperty::FVerseClassProperty
          (FVerseClassProperty *this,FFieldVariant param_1,FVerseClassPropertyParams *param_2)

{
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FClassProperty::FClassProperty
            ((FClassProperty *)this,(FFieldVariant)&local_res8,(FClassPropertyParams *)param_2);
  this->_padding_ = (longlong)&___7FVerseClassProperty__6B_;
  this->bRequiresConcrete = param_2->bRequiresConcrete;
  this->bRequiresCastable = param_2->bRequiresCastable;
  return this;
}

// FVerseClassProperty @ 142294e80

FVerseClassProperty * __thiscall
FVerseClassProperty::FVerseClassProperty
          (FVerseClassProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FClassProperty::FClassProperty((FClassProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  this->_padding_ = (longlong)&___7FVerseClassProperty__6B_;
  this->bRequiresConcrete = false;
  this->bRequiresCastable = false;
  return this;
}

// Construct @ 142298e30

FField * __cdecl
FVerseClassProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  FClassProperty *this;
  ulonglong local_res20;
  
  this = operator_new(0x88);
  if (this != (FClassProperty *)0x0) {
    uVar1 = (param_1->Container).Unknown;
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    local_res20 = uVar1;
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    FClassProperty::FClassProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7FVerseClassProperty__6B_;
  }
  return (FField *)this;
}

// GetCPPMacroType @ 14229d140

FString * __thiscall
FVerseClassProperty::GetCPPMacroType
          (FVerseClassProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if ((this->_padding_ & 0x100000000000000U) == 0) {
    ::FString::operator=(param_1,L"UVerseClass");
    pwVar2 = L"OBJECT";
  }
  else {
    local_res8 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(*(longlong *)this->_padding_ + 0x318))();
    ::FString::PrintfImpl(&local_28,L"TObjectPtr<%s%s>");
    if (param_1 != &local_28) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_28.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pwVar2 = L"OBJECTPTR";
  }
  ::FString::FString(__return_storage_ptr__,pwVar2);
  return __return_storage_ptr__;
}

// ImportText_Internal @ 1422a0070

wchar_t * __thiscall
FVerseClassProperty::ImportText_Internal
          (FVerseClassProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  wchar_t *pwVar4;
  UObjectBaseUtility *this_00;
  UClass *pUVar5;
  UObjectBaseUtility *pUVar6;
  void *pvVar7;
  FString local_38;
  FString local_28;
  
  pwVar4 = FClassProperty::ImportText_Internal
                     ((FClassProperty *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  if (pwVar4 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  pvVar7 = param_2;
  if (param_3 == Container) {
    pvVar7 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
  }
  this_00 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x1f8))(this,pvVar7);
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar5 = Z_Construct_UClass_UVerseClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       (pUVar6 = this_00,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar5->_padding_)) goto LAB_1422a011a;
  }
  pUVar6 = (UObjectBaseUtility *)0x0;
LAB_1422a011a:
  if (((this->bRequiresConcrete != false) &&
      ((pUVar6 == (UObjectBaseUtility *)0x0 || ((*(uint *)(pUVar6 + 0xd) >> 2 & 1) == 0)))) ||
     ((this->bRequiresCastable != false &&
      ((pUVar6 == (UObjectBaseUtility *)0x0 || ((*(uint *)(pUVar6 + 0xd) >> 9 & 1) == 0)))))) {
    bVar2 = IsThisNotNull(this,"FField::GetName");
    if (bVar2) {
      ::FName::ToString((FName *)&this->_padding_,&local_38);
    }
    else {
      ::FString::FString(&local_38,L"None");
    }
    UObjectBaseUtility::GetFullName(this_00,&local_28,(UObject *)0x0,None);
    FOutputDevice::LogfImpl(param_6,L"Invalid object \'%s\' specified for property \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (param_3 == Container) {
      cVar3 = (**(code **)(this->_padding_ + 0x70))(this);
      if (cVar3 == '\0') {
        FObjectPropertyBase::SetObjectPropertyValue
                  ((FObjectPropertyBase *)this,
                   (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2),
                   (UObject *)0x0);
        pwVar4 = (wchar_t *)0x0;
      }
      else {
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_38);
        pwVar4 = (wchar_t *)0x0;
      }
    }
    else {
      FObjectPropertyBase::SetObjectPropertyValue
                ((FObjectPropertyBase *)this,param_2,(UObject *)0x0);
      pwVar4 = (wchar_t *)0x0;
    }
  }
  return pwVar4;
}

// SameType @ 1422a6010

bool __thiscall FVerseClassProperty::SameType(FVerseClassProperty *this,FProperty *param_1)

{
  bool bVar1;
  
  bVar1 = FClassProperty::SameType((FClassProperty *)this,param_1);
  if (((bVar1) && (this->bRequiresConcrete == (bool)(char)param_1[1]._padding_)) &&
     (this->bRequiresCastable == (bool)*(char *)((longlong)&param_1[1]._padding_ + 1))) {
    return true;
  }
  return false;
}

// Serialize @ 1422a62f0

void __thiscall FVerseClassProperty::Serialize(FVerseClassProperty *this,FArchive *param_1)

{
  FClassProperty::Serialize((FClassProperty *)this,param_1);
  ::operator<<(param_1,&this->bRequiresConcrete);
  ::operator<<(param_1,&this->bRequiresCastable);
  return;
}

// StaticClass @ 1422a7720

FFieldClass * __cdecl FVerseClassProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FClassProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FVerseClassProperty",0,
                 CASTCLASS_FObjectPropertyBase|CASTCLASS_FObjectProperty|CASTCLASS_FProperty|
                 CASTCLASS_FClassProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FVerseClassProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

