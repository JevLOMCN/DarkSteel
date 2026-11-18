// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 45

// NewFProperty<FAnsiStrProperty,UECodeGen_Private::FGenericPropertyParams> @ 14224e500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FAnsiStrProperty * __cdecl
UECodeGen_Private::NewFProperty<FAnsiStrProperty,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FAnsiStrProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x70,0);
    if (pFVar1 == (FAnsiStrProperty *)0x0) {
      return (FAnsiStrProperty *)0x0;
    }
    pFVar2 = FAnsiStrProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FAnsiStrProperty__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FAnsiStrProperty::FAnsiStrProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x80,0);
  if (pFVar1 == (FAnsiStrProperty *)0x0) {
    return (FAnsiStrProperty *)0x0;
  }
  pFVar2 = FAnsiStrProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined ***)pFVar1 = &___7FAnsiStrProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224e66d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224e66d:
  FAnsiStrProperty::FAnsiStrProperty
            (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFAnsiStrProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FArrayProperty,UECodeGen_Private::FArrayPropertyParams> @ 14224e6c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FArrayProperty * __cdecl
UECodeGen_Private::NewFProperty<FArrayProperty,UECodeGen_Private::FArrayPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FArrayProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x80,0);
    if (pFVar1 == (FArrayProperty *)0x0) {
      return (FArrayProperty *)0x0;
    }
    pFVar2 = FArrayProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FArrayProperty__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FArrayProperty::FArrayProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FArrayPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x90,0);
  if (pFVar1 == (FArrayProperty *)0x0) {
    return (FArrayProperty *)0x0;
  }
  pFVar2 = FArrayProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FArrayProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224e82d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224e82d:
  FArrayProperty::FArrayProperty(pFVar1,(FFieldVariant)&local_res10,(FArrayPropertyParams *)param_2)
  ;
  pFVar1->_padding_ = (longlong)&___7__TPropertyWithSetterAndGetter_VFArrayProperty____6B_;
  pFVar1[1]._padding_ = (longlong)param_2->SetterFunc;
  pFVar1[1]._padding_ = (longlong)param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FBoolProperty,UECodeGen_Private::FBoolPropertyParams> @ 14224e880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FBoolProperty * __cdecl
UECodeGen_Private::NewFProperty<FBoolProperty,UECodeGen_Private::FBoolPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FBoolProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x78,0);
    if (pFVar1 == (FBoolProperty *)0x0) {
      return (FBoolProperty *)0x0;
    }
    pFVar2 = FBoolProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FBoolProperty__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FBoolProperty::FBoolProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FBoolPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x88,0);
  if (pFVar1 == (FBoolProperty *)0x0) {
    return (FBoolProperty *)0x0;
  }
  pFVar2 = FBoolProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FBoolProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224e9ed;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224e9ed:
  FBoolProperty::FBoolProperty(pFVar1,(FFieldVariant)&local_res10,(FBoolPropertyParams *)param_2);
  pFVar1->_padding_ = (longlong)&___7__TPropertyWithSetterAndGetter_VFBoolProperty____6B_;
  pFVar1[1]._padding_ = (longlong)param_2->SetterFunc;
  pFVar1[1]._padding_ = (longlong)param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FByteProperty,UECodeGen_Private::FBytePropertyParams> @ 14224ea40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FByteProperty * __cdecl
UECodeGen_Private::NewFProperty<FByteProperty,UECodeGen_Private::FBytePropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FByteProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FByteProperty::operator_new(0x78);
    if (pFVar1 == (FByteProperty *)0x0) {
      return (FByteProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FByteProperty::FByteProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FBytePropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x88,0);
  if (pFVar1 == (FByteProperty *)0x0) {
    return (FByteProperty *)0x0;
  }
  pFVar2 = FByteProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FByteProperty__6B_;
  (pFVar1->Enum).field0_0x0.DebugPtr = (UEnum *)0x0;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224eb75;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224eb75:
  FByteProperty::FByteProperty(pFVar1,(FFieldVariant)&local_res10,(FBytePropertyParams *)param_2);
  pFVar1->_padding_ = (longlong)&___7__TPropertyWithSetterAndGetter_VFByteProperty____6B_;
  pFVar1[1]._padding_ = (longlong)param_2->SetterFunc;
  pFVar1[1]._padding_ = (longlong)param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FClassProperty,UECodeGen_Private::FClassPropertyParams> @ 14224ebc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FClassProperty * __cdecl
UECodeGen_Private::NewFProperty<FClassProperty,UECodeGen_Private::FClassPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FClassProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FClassProperty::operator_new(0x80);
    if (pFVar1 == (FClassProperty *)0x0) {
      return (FClassProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FClassProperty::FClassProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FClassPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x90,0);
  if (pFVar1 == (FClassProperty *)0x0) {
    return (FClassProperty *)0x0;
  }
  pFVar2 = FClassProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FClassProperty__6B_;
  (pFVar1->MetaClass).field0_0x0.DebugPtr = (UClass *)0x0;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224ecf9;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224ecf9:
  FClassProperty::FClassProperty(pFVar1,(FFieldVariant)&local_res10,(FClassPropertyParams *)param_2)
  ;
  pFVar1->_padding_ = (longlong)&___7__TPropertyWithSetterAndGetter_VFClassProperty____6B_;
  pFVar1[1]._padding_ = (longlong)param_2->SetterFunc;
  pFVar1[1]._padding_ = (longlong)param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FDelegateProperty,UECodeGen_Private::FDelegatePropertyParams> @ 14224ed50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FDelegateProperty * __cdecl
UECodeGen_Private::NewFProperty<FDelegateProperty,UECodeGen_Private::FDelegatePropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FDelegateProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FDelegateProperty::operator_new(0x78);
    if (pFVar1 == (FDelegateProperty *)0x0) {
      return (FDelegateProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FDelegateProperty::FDelegateProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FDelegatePropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x88,0);
  if (pFVar1 == (FDelegateProperty *)0x0) {
    return (FDelegateProperty *)0x0;
  }
  pFVar2 = FDelegateProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FDelegateProperty__6B_;
  (pFVar1->SignatureFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224ee85;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224ee85:
  FDelegateProperty::FDelegateProperty
            (pFVar1,(FFieldVariant)&local_res10,(FDelegatePropertyParams *)param_2);
  pFVar1->_padding_ = (longlong)&___7__TPropertyWithSetterAndGetter_VFDelegateProperty____6B_;
  pFVar1[1]._padding_ = (longlong)param_2->SetterFunc;
  pFVar1[1]._padding_ = (longlong)param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FDoubleProperty,UECodeGen_Private::FGenericPropertyParams> @ 14224eed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FDoubleProperty * __cdecl
UECodeGen_Private::NewFProperty<FDoubleProperty,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FDoubleProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x70,0);
    if (pFVar1 == (FDoubleProperty *)0x0) {
      return (FDoubleProperty *)0x0;
    }
    pFVar2 = FDoubleProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FDoubleProperty__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FDoubleProperty::FDoubleProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x80,0);
  if (pFVar1 == (FDoubleProperty *)0x0) {
    return (FDoubleProperty *)0x0;
  }
  pFVar2 = FDoubleProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined ***)pFVar1 = &___7FDoubleProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224f03d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224f03d:
  FDoubleProperty::FDoubleProperty
            (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFDoubleProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FEnumProperty,UECodeGen_Private::FEnumPropertyParams> @ 14224f090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FEnumProperty * __cdecl
UECodeGen_Private::NewFProperty<FEnumProperty,UECodeGen_Private::FEnumPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FEnumProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FEnumProperty::operator_new(0x80);
    if (pFVar1 == (FEnumProperty *)0x0) {
      return (FEnumProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FEnumProperty::FEnumProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FEnumPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x90,0);
  if (pFVar1 == (FEnumProperty *)0x0) {
    return (FEnumProperty *)0x0;
  }
  pFVar2 = FEnumProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FEnumProperty__6B_;
  (pFVar1->Enum).field0_0x0.DebugPtr = (UEnum *)0x0;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224f1c5;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224f1c5:
  FEnumProperty::FEnumProperty(pFVar1,(FFieldVariant)&local_res10,(FEnumPropertyParams *)param_2);
  pFVar1->_padding_ = (longlong)&___7__TPropertyWithSetterAndGetter_VFEnumProperty____6B_;
  pFVar1[1]._padding_ = (longlong)param_2->SetterFunc;
  pFVar1[1]._padding_ = (longlong)param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FFieldPathProperty,UECodeGen_Private::FFieldPathPropertyParams> @ 14224f210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FFieldPathProperty * __cdecl
UECodeGen_Private::NewFProperty<FFieldPathProperty,UECodeGen_Private::FFieldPathPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FFieldPathProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x78,0);
    if (pFVar1 == (FFieldPathProperty *)0x0) {
      return (FFieldPathProperty *)0x0;
    }
    pFVar2 = FFieldPathProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FFieldPathProperty__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FFieldPathProperty::FFieldPathProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FFieldPathPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x88,0);
  if (pFVar1 == (FFieldPathProperty *)0x0) {
    return (FFieldPathProperty *)0x0;
  }
  pFVar2 = FFieldPathProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FFieldPathProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224f37d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224f37d:
  FFieldPathProperty::FFieldPathProperty
            (pFVar1,(FFieldVariant)&local_res10,(FFieldPathPropertyParams *)param_2);
  pFVar1->_padding_ = (longlong)&___7__TPropertyWithSetterAndGetter_VFFieldPathProperty____6B_;
  pFVar1[1]._padding_ = (longlong)param_2->SetterFunc;
  pFVar1[1]._padding_ = (longlong)param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FFloatProperty,UECodeGen_Private::FGenericPropertyParams> @ 14224f3d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FFloatProperty * __cdecl
UECodeGen_Private::NewFProperty<FFloatProperty,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FFloatProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x70,0);
    if (pFVar1 == (FFloatProperty *)0x0) {
      return (FFloatProperty *)0x0;
    }
    pFVar2 = FFloatProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FFloatProperty__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FFloatProperty::FFloatProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x80,0);
  if (pFVar1 == (FFloatProperty *)0x0) {
    return (FFloatProperty *)0x0;
  }
  pFVar2 = FFloatProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined ***)pFVar1 = &___7FFloatProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224f53d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224f53d:
  FFloatProperty::FFloatProperty
            (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFFloatProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FInt16Property,UECodeGen_Private::FGenericPropertyParams> @ 14224f590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FInt16Property * __cdecl
UECodeGen_Private::NewFProperty<FInt16Property,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FInt16Property *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x70,0);
    if (pFVar1 == (FInt16Property *)0x0) {
      return (FInt16Property *)0x0;
    }
    pFVar2 = FInt16Property::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FInt16Property__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FInt16Property::FInt16Property
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x80,0);
  if (pFVar1 == (FInt16Property *)0x0) {
    return (FInt16Property *)0x0;
  }
  pFVar2 = FInt16Property::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined ***)pFVar1 = &___7FInt16Property__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224f6fd;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224f6fd:
  FInt16Property::FInt16Property
            (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFInt16Property____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FInt64Property,UECodeGen_Private::FGenericPropertyParams> @ 14224f750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FInt64Property * __cdecl
UECodeGen_Private::NewFProperty<FInt64Property,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FInt64Property *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x70,0);
    if (pFVar1 == (FInt64Property *)0x0) {
      return (FInt64Property *)0x0;
    }
    pFVar2 = FInt64Property::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FInt64Property__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FInt64Property::FInt64Property
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x80,0);
  if (pFVar1 == (FInt64Property *)0x0) {
    return (FInt64Property *)0x0;
  }
  pFVar2 = FInt64Property::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined ***)pFVar1 = &___7FInt64Property__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224f8bd;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224f8bd:
  FInt64Property::FInt64Property
            (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFInt64Property____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FInt8Property,UECodeGen_Private::FGenericPropertyParams> @ 14224f910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FInt8Property * __cdecl
UECodeGen_Private::NewFProperty<FInt8Property,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FInt8Property *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x70,0);
    if (pFVar1 == (FInt8Property *)0x0) {
      return (FInt8Property *)0x0;
    }
    pFVar2 = FInt8Property::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FInt8Property__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FInt8Property::FInt8Property
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x80,0);
  if (pFVar1 == (FInt8Property *)0x0) {
    return (FInt8Property *)0x0;
  }
  pFVar2 = FInt8Property::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined ***)pFVar1 = &___7FInt8Property__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224fa7d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224fa7d:
  FInt8Property::FInt8Property(pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2)
  ;
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFInt8Property____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FIntProperty,UECodeGen_Private::FGenericPropertyParams> @ 14224fad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FIntProperty * __cdecl
UECodeGen_Private::NewFProperty<FIntProperty,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FIntProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x70,0);
    if (pFVar1 == (FIntProperty *)0x0) {
      return (FIntProperty *)0x0;
    }
    pFVar2 = FIntProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FIntProperty__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FIntProperty::FIntProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x80,0);
  if (pFVar1 == (FIntProperty *)0x0) {
    return (FIntProperty *)0x0;
  }
  pFVar2 = FIntProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined ***)pFVar1 = &___7FIntProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224fc3d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224fc3d:
  FIntProperty::FIntProperty(pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFIntProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FInterfaceProperty,UECodeGen_Private::FInterfacePropertyParams> @ 14224fc90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FInterfaceProperty * __cdecl
UECodeGen_Private::NewFProperty<FInterfaceProperty,UECodeGen_Private::FInterfacePropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FInterfaceProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FInterfaceProperty::operator_new(0x78);
    if (pFVar1 == (FInterfaceProperty *)0x0) {
      return (FInterfaceProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FInterfaceProperty::FInterfaceProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FInterfacePropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x88,0);
  if (pFVar1 == (FInterfaceProperty *)0x0) {
    return (FInterfaceProperty *)0x0;
  }
  pFVar2 = FInterfaceProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FInterfaceProperty__6B_;
  (pFVar1->InterfaceClass).field0_0x0.DebugPtr = (UClass *)0x0;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224fdc5;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224fdc5:
  FInterfaceProperty::FInterfaceProperty
            (pFVar1,(FFieldVariant)&local_res10,(FInterfacePropertyParams *)param_2);
  pFVar1->_padding_ = (longlong)&___7__TPropertyWithSetterAndGetter_VFInterfaceProperty____6B_;
  pFVar1[1]._padding_ = (longlong)param_2->SetterFunc;
  pFVar1[1]._padding_ = (longlong)param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FLazyObjectProperty,UECodeGen_Private::FObjectPropertyParams> @ 14224fe10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FLazyObjectProperty * __cdecl
UECodeGen_Private::NewFProperty<FLazyObjectProperty,UECodeGen_Private::FObjectPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FLazyObjectProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FLazyObjectProperty::operator_new(0x78);
    if (pFVar1 == (FLazyObjectProperty *)0x0) {
      return (FLazyObjectProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FLazyObjectProperty::FLazyObjectProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FObjectPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x88,0);
  if (pFVar1 == (FLazyObjectProperty *)0x0) {
    return (FLazyObjectProperty *)0x0;
  }
  pFVar2 = FLazyObjectProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined8 *)&pFVar1->field_0x70 = 0;
  *(undefined ***)pFVar1 = &___7FLazyObjectProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14224ff45;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14224ff45:
  FLazyObjectProperty::FLazyObjectProperty
            (pFVar1,(FFieldVariant)&local_res10,(FObjectPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFLazyObjectProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FMapProperty,UECodeGen_Private::FMapPropertyParams> @ 14224ff90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FMapProperty * __cdecl
UECodeGen_Private::NewFProperty<FMapProperty,UECodeGen_Private::FMapPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FMapProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0xa0,0);
    if (pFVar1 == (FMapProperty *)0x0) {
      return (FMapProperty *)0x0;
    }
    pFVar2 = FMapProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FMapProperty__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FMapProperty::FMapProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FMapPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0xb0,0);
  if (pFVar1 == (FMapProperty *)0x0) {
    return (FMapProperty *)0x0;
  }
  pFVar2 = FMapProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FMapProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_1422500fd;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_1422500fd:
  FMapProperty::FMapProperty(pFVar1,(FFieldVariant)&local_res10,(FMapPropertyParams *)param_2);
  pFVar1->_padding_ = (longlong)&___7__TPropertyWithSetterAndGetter_VFMapProperty____6B_;
  pFVar1[1]._padding_ = (longlong)param_2->SetterFunc;
  pFVar1[1]._padding_ = (longlong)param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FMulticastInlineDelegateProperty,UECodeGen_Private::FMulticastDelegatePropertyParams> @ 142250150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FMulticastInlineDelegateProperty * __cdecl
UECodeGen_Private::
NewFProperty<FMulticastInlineDelegateProperty,UECodeGen_Private::FMulticastDelegatePropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FMulticastInlineDelegateProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMulticastInlineDelegateProperty::operator_new(0x78);
    if (pFVar1 == (FMulticastInlineDelegateProperty *)0x0) {
      return (FMulticastInlineDelegateProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FMulticastInlineDelegateProperty::FMulticastInlineDelegateProperty
                       (pFVar1,(FFieldVariant)&local_res10,
                        (FMulticastDelegatePropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x88,0);
  if (pFVar1 == (FMulticastInlineDelegateProperty *)0x0) {
    return (FMulticastInlineDelegateProperty *)0x0;
  }
  pFVar2 = FMulticastInlineDelegateProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined8 *)&pFVar1->field_0x70 = 0;
  *(undefined ***)pFVar1 = &___7FMulticastInlineDelegateProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_142250285;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_142250285:
  FMulticastInlineDelegateProperty::FMulticastInlineDelegateProperty
            (pFVar1,(FFieldVariant)&local_res10,(FMulticastDelegatePropertyParams *)param_2);
  *(undefined ***)pFVar1 =
       &___7__TPropertyWithSetterAndGetter_VFMulticastInlineDelegateProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FMulticastSparseDelegateProperty,UECodeGen_Private::FMulticastDelegatePropertyParams> @ 1422502d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FMulticastSparseDelegateProperty * __cdecl
UECodeGen_Private::
NewFProperty<FMulticastSparseDelegateProperty,UECodeGen_Private::FMulticastDelegatePropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FMulticastSparseDelegateProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMulticastSparseDelegateProperty::operator_new(0x78);
    if (pFVar1 == (FMulticastSparseDelegateProperty *)0x0) {
      return (FMulticastSparseDelegateProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FMulticastSparseDelegateProperty::FMulticastSparseDelegateProperty
                       (pFVar1,(FFieldVariant)&local_res10,
                        (FMulticastDelegatePropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x88,0);
  if (pFVar1 == (FMulticastSparseDelegateProperty *)0x0) {
    return (FMulticastSparseDelegateProperty *)0x0;
  }
  pFVar2 = FMulticastSparseDelegateProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined8 *)&pFVar1->field_0x70 = 0;
  *(undefined ***)pFVar1 = &___7FMulticastSparseDelegateProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_142250405;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_142250405:
  FMulticastSparseDelegateProperty::FMulticastSparseDelegateProperty
            (pFVar1,(FFieldVariant)&local_res10,(FMulticastDelegatePropertyParams *)param_2);
  *(undefined ***)pFVar1 =
       &___7__TPropertyWithSetterAndGetter_VFMulticastSparseDelegateProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FNameProperty,UECodeGen_Private::FGenericPropertyParams> @ 142250450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FNameProperty * __cdecl
UECodeGen_Private::NewFProperty<FNameProperty,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FNameProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x70,0);
    if (pFVar1 == (FNameProperty *)0x0) {
      return (FNameProperty *)0x0;
    }
    pFVar2 = FNameProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FNameProperty__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FNameProperty::FNameProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x80,0);
  if (pFVar1 == (FNameProperty *)0x0) {
    return (FNameProperty *)0x0;
  }
  pFVar2 = FNameProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined ***)pFVar1 = &___7FNameProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_1422505bd;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_1422505bd:
  FNameProperty::FNameProperty(pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2)
  ;
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFNameProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FObjectProperty,UECodeGen_Private::FObjectPropertyParams> @ 142250610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FObjectProperty * __cdecl
UECodeGen_Private::NewFProperty<FObjectProperty,UECodeGen_Private::FObjectPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FObjectProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FObjectProperty::operator_new(0x78);
    if (pFVar1 == (FObjectProperty *)0x0) {
      return (FObjectProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FObjectProperty::FObjectProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FObjectPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x88,0);
  if (pFVar1 == (FObjectProperty *)0x0) {
    return (FObjectProperty *)0x0;
  }
  pFVar2 = FObjectProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined8 *)&pFVar1->field_0x70 = 0;
  *(undefined ***)pFVar1 = &___7FObjectProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_142250745;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_142250745:
  FObjectProperty::FObjectProperty
            (pFVar1,(FFieldVariant)&local_res10,(FObjectPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFObjectProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FOptionalProperty,UECodeGen_Private::FGenericPropertyParams> @ 142250790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FOptionalProperty * __cdecl
UECodeGen_Private::NewFProperty<FOptionalProperty,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FOptionalProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FOptionalProperty::operator_new(0x78);
    if (pFVar1 == (FOptionalProperty *)0x0) {
      return (FOptionalProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FOptionalProperty::FOptionalProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x88,0);
  if (pFVar1 == (FOptionalProperty *)0x0) {
    return (FOptionalProperty *)0x0;
  }
  pFVar2 = FOptionalProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined8 *)&pFVar1->field_0x70 = 0;
  *(undefined ***)pFVar1 = &___7FOptionalProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_1422508c5;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_1422508c5:
  FOptionalProperty::FOptionalProperty
            (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFOptionalProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FSetProperty,UECodeGen_Private::FGenericPropertyParams> @ 142250910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FSetProperty * __cdecl
UECodeGen_Private::NewFProperty<FSetProperty,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FSetProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x90,0);
    if (pFVar1 == (FSetProperty *)0x0) {
      return (FSetProperty *)0x0;
    }
    pFVar2 = FSetProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FSetProperty__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FSetProperty::FSetProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0xa0,0);
  if (pFVar1 == (FSetProperty *)0x0) {
    return (FSetProperty *)0x0;
  }
  pFVar2 = FSetProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FSetProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_142250a7d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_142250a7d:
  FSetProperty::FSetProperty(pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
  pFVar1->_padding_ = (longlong)&___7__TPropertyWithSetterAndGetter_VFSetProperty____6B_;
  pFVar1[1]._padding_ = (longlong)param_2->SetterFunc;
  pFVar1[1]._padding_ = (longlong)param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FSoftClassProperty,UECodeGen_Private::FSoftClassPropertyParams> @ 142250ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FSoftClassProperty * __cdecl
UECodeGen_Private::NewFProperty<FSoftClassProperty,UECodeGen_Private::FSoftClassPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FSoftClassProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FSoftClassProperty::operator_new(0x80);
    if (pFVar1 == (FSoftClassProperty *)0x0) {
      return (FSoftClassProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FSoftClassProperty::FSoftClassProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FSoftClassPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x90,0);
  if (pFVar1 == (FSoftClassProperty *)0x0) {
    return (FSoftClassProperty *)0x0;
  }
  pFVar2 = FSoftClassProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FSoftClassProperty__6B_;
  (pFVar1->MetaClass).field0_0x0.DebugPtr = (UClass *)0x0;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_142250c09;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_142250c09:
  FSoftClassProperty::FSoftClassProperty
            (pFVar1,(FFieldVariant)&local_res10,(FSoftClassPropertyParams *)param_2);
  pFVar1->_padding_ = (longlong)&___7__TPropertyWithSetterAndGetter_VFSoftClassProperty____6B_;
  pFVar1[1]._padding_ = (longlong)param_2->SetterFunc;
  pFVar1[1]._padding_ = (longlong)param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FSoftObjectProperty,UECodeGen_Private::FObjectPropertyParams> @ 142250c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FSoftObjectProperty * __cdecl
UECodeGen_Private::NewFProperty<FSoftObjectProperty,UECodeGen_Private::FObjectPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FSoftObjectProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FSoftObjectProperty::operator_new(0x78);
    if (pFVar1 == (FSoftObjectProperty *)0x0) {
      return (FSoftObjectProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FSoftObjectProperty::FSoftObjectProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FObjectPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x88,0);
  if (pFVar1 == (FSoftObjectProperty *)0x0) {
    return (FSoftObjectProperty *)0x0;
  }
  pFVar2 = FSoftObjectProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined8 *)&pFVar1->field_0x70 = 0;
  *(undefined ***)pFVar1 = &___7FSoftObjectProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_142250d95;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_142250d95:
  FSoftObjectProperty::FSoftObjectProperty
            (pFVar1,(FFieldVariant)&local_res10,(FObjectPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFSoftObjectProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FStrProperty,UECodeGen_Private::FGenericPropertyParams> @ 142250de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FStrProperty * __cdecl
UECodeGen_Private::NewFProperty<FStrProperty,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FStrProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x70,0);
    if (pFVar1 == (FStrProperty *)0x0) {
      return (FStrProperty *)0x0;
    }
    pFVar2 = FStrProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FStrProperty__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FStrProperty::FStrProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x80,0);
  if (pFVar1 == (FStrProperty *)0x0) {
    return (FStrProperty *)0x0;
  }
  pFVar2 = FStrProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined ***)pFVar1 = &___7FStrProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_142250f4d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_142250f4d:
  FStrProperty::FStrProperty(pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFStrProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FStructProperty,UECodeGen_Private::FStructPropertyParams> @ 142250fa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FStructProperty * __cdecl
UECodeGen_Private::NewFProperty<FStructProperty,UECodeGen_Private::FStructPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FStructProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FStructProperty::operator_new(0x78);
    if (pFVar1 == (FStructProperty *)0x0) {
      return (FStructProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FStructProperty::FStructProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FStructPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x88,0);
  if (pFVar1 == (FStructProperty *)0x0) {
    return (FStructProperty *)0x0;
  }
  pFVar2 = FStructProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FStructProperty__6B_;
  (pFVar1->Struct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_1422510d5;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_1422510d5:
  FStructProperty::FStructProperty
            (pFVar1,(FFieldVariant)&local_res10,(FStructPropertyParams *)param_2);
  pFVar1->_padding_ = (longlong)&___7__TPropertyWithSetterAndGetter_VFStructProperty____6B_;
  pFVar1[1]._padding_ = (longlong)param_2->SetterFunc;
  pFVar1[1]._padding_ = (longlong)param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FTextProperty,UECodeGen_Private::FGenericPropertyParams> @ 142251120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FTextProperty * __cdecl
UECodeGen_Private::NewFProperty<FTextProperty,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FTextProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x70,0);
    if (pFVar1 == (FTextProperty *)0x0) {
      return (FTextProperty *)0x0;
    }
    pFVar2 = FTextProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FTextProperty__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FTextProperty::FTextProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x80,0);
  if (pFVar1 == (FTextProperty *)0x0) {
    return (FTextProperty *)0x0;
  }
  pFVar2 = FTextProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined ***)pFVar1 = &___7FTextProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14225128d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14225128d:
  FTextProperty::FTextProperty(pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2)
  ;
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFTextProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FUInt16Property,UECodeGen_Private::FGenericPropertyParams> @ 1422512e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FUInt16Property * __cdecl
UECodeGen_Private::NewFProperty<FUInt16Property,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FUInt16Property *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x70,0);
    if (pFVar1 == (FUInt16Property *)0x0) {
      return (FUInt16Property *)0x0;
    }
    pFVar2 = FUInt16Property::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FUInt16Property__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FUInt16Property::FUInt16Property
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x80,0);
  if (pFVar1 == (FUInt16Property *)0x0) {
    return (FUInt16Property *)0x0;
  }
  pFVar2 = FUInt16Property::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined ***)pFVar1 = &___7FUInt16Property__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14225144d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14225144d:
  FUInt16Property::FUInt16Property
            (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFUInt16Property____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FUInt32Property,UECodeGen_Private::FGenericPropertyParams> @ 1422514a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FUInt32Property * __cdecl
UECodeGen_Private::NewFProperty<FUInt32Property,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FUInt32Property *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x70,0);
    if (pFVar1 == (FUInt32Property *)0x0) {
      return (FUInt32Property *)0x0;
    }
    pFVar2 = FUInt32Property::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FUInt32Property__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FUInt32Property::FUInt32Property
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x80,0);
  if (pFVar1 == (FUInt32Property *)0x0) {
    return (FUInt32Property *)0x0;
  }
  pFVar2 = FUInt32Property::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined ***)pFVar1 = &___7FUInt32Property__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14225160d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14225160d:
  FUInt32Property::FUInt32Property
            (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFUInt32Property____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FUInt64Property,UECodeGen_Private::FGenericPropertyParams> @ 142251660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FUInt64Property * __cdecl
UECodeGen_Private::NewFProperty<FUInt64Property,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FUInt64Property *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x70,0);
    if (pFVar1 == (FUInt64Property *)0x0) {
      return (FUInt64Property *)0x0;
    }
    pFVar2 = FUInt64Property::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FUInt64Property__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FUInt64Property::FUInt64Property
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x80,0);
  if (pFVar1 == (FUInt64Property *)0x0) {
    return (FUInt64Property *)0x0;
  }
  pFVar2 = FUInt64Property::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined ***)pFVar1 = &___7FUInt64Property__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_1422517cd;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_1422517cd:
  FUInt64Property::FUInt64Property
            (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFUInt64Property____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FUtf8StrProperty,UECodeGen_Private::FGenericPropertyParams> @ 142251820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FUtf8StrProperty * __cdecl
UECodeGen_Private::NewFProperty<FUtf8StrProperty,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FUtf8StrProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x70,0);
    if (pFVar1 == (FUtf8StrProperty *)0x0) {
      return (FUtf8StrProperty *)0x0;
    }
    pFVar2 = FUtf8StrProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FUtf8StrProperty__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FUtf8StrProperty::FUtf8StrProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x80,0);
  if (pFVar1 == (FUtf8StrProperty *)0x0) {
    return (FUtf8StrProperty *)0x0;
  }
  pFVar2 = FUtf8StrProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined ***)pFVar1 = &___7FUtf8StrProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_14225198d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_14225198d:
  FUtf8StrProperty::FUtf8StrProperty
            (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFUtf8StrProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FVerseClassProperty,UECodeGen_Private::FVerseClassPropertyParams> @ 1422519e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FVerseClassProperty * __cdecl
UECodeGen_Private::NewFProperty<FVerseClassProperty,UECodeGen_Private::FVerseClassPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FVerseClassProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FVerseClassProperty::operator_new(0x88);
    if (pFVar1 == (FVerseClassProperty *)0x0) {
      return (FVerseClassProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FVerseClassProperty::FVerseClassProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FVerseClassPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x98,0);
  if (pFVar1 == (FVerseClassProperty *)0x0) {
    return (FVerseClassProperty *)0x0;
  }
  pFVar2 = FVerseClassProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  pFVar1->bRequiresConcrete = false;
  pFVar1->bRequiresCastable = false;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FVerseClassProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_142251b22;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_142251b22:
  FVerseClassProperty::FVerseClassProperty
            (pFVar1,(FFieldVariant)&local_res10,(FVerseClassPropertyParams *)param_2);
  pFVar1->_padding_ = (longlong)&___7__TPropertyWithSetterAndGetter_VFVerseClassProperty____6B_;
  pFVar1[1]._padding_ = (longlong)param_2->SetterFunc;
  pFVar1[1]._padding_ = (longlong)param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FVerseDynamicProperty,UECodeGen_Private::FGenericPropertyParams> @ 142251b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FVerseDynamicProperty * __cdecl
UECodeGen_Private::NewFProperty<FVerseDynamicProperty,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FVerseDynamicProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FMemory::Malloc(0x70,0);
    if (pFVar1 == (FVerseDynamicProperty *)0x0) {
      return (FVerseDynamicProperty *)0x0;
    }
    pFVar2 = FVerseDynamicProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FVerseDynamicProperty__6B_;
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FVerseDynamicProperty::FVerseDynamicProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x80,0);
  if (pFVar1 == (FVerseDynamicProperty *)0x0) {
    return (FVerseDynamicProperty *)0x0;
  }
  pFVar2 = FVerseDynamicProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined ***)pFVar1 = &___7FVerseDynamicProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_142251cdd;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_142251cdd:
  FVerseDynamicProperty::FVerseDynamicProperty
            (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFVerseDynamicProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FVerseStringProperty,UECodeGen_Private::FGenericPropertyParams> @ 142251d30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FVerseStringProperty * __cdecl
UECodeGen_Private::NewFProperty<FVerseStringProperty,UECodeGen_Private::FGenericPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FVerseStringProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FVerseStringProperty::operator_new(0x78);
    if (pFVar1 == (FVerseStringProperty *)0x0) {
      return (FVerseStringProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FVerseStringProperty::FVerseStringProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x88,0);
  if (pFVar1 == (FVerseStringProperty *)0x0) {
    return (FVerseStringProperty *)0x0;
  }
  pFVar2 = FVerseStringProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FVerseStringProperty__6B_;
  pFVar1->Inner = (FProperty *)0x0;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_142251e65;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_142251e65:
  FVerseStringProperty::FVerseStringProperty
            (pFVar1,(FFieldVariant)&local_res10,(FGenericPropertyParams *)param_2);
  pFVar1->_padding_ = (longlong)&___7__TPropertyWithSetterAndGetter_VFVerseStringProperty____6B_;
  pFVar1[1]._padding_ = (longlong)param_2->SetterFunc;
  pFVar1[1]._padding_ = (longlong)param_2->GetterFunc;
  return pFVar1;
}

// NewFProperty<FWeakObjectProperty,UECodeGen_Private::FObjectPropertyParams> @ 142251eb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FWeakObjectProperty * __cdecl
UECodeGen_Private::NewFProperty<FWeakObjectProperty,UECodeGen_Private::FObjectPropertyParams>
          (FFieldVariant param_1,FPropertyParamsBase *param_2)

{
  FWeakObjectProperty *pFVar1;
  FFieldClass *pFVar2;
  ulonglong local_res10;
  
  if ((param_2->SetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (param_2->GetterFunc == (_func___cdecl_void_void_ptr_void_ptr *)0x0)) {
    pFVar1 = FWeakObjectProperty::operator_new(0x78);
    if (pFVar1 == (FWeakObjectProperty *)0x0) {
      return (FWeakObjectProperty *)0x0;
    }
    local_res10 = *(ulonglong *)param_1.Container;
    if ((((local_res10 & 1) != 0) &&
        ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
    }
    pFVar1 = FWeakObjectProperty::FWeakObjectProperty
                       (pFVar1,(FFieldVariant)&local_res10,(FObjectPropertyParams *)param_2);
    return pFVar1;
  }
  pFVar1 = FMemory::Malloc(0x88,0);
  if (pFVar1 == (FWeakObjectProperty *)0x0) {
    return (FWeakObjectProperty *)0x0;
  }
  pFVar2 = FWeakObjectProperty::StaticClass();
  FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
  *(undefined8 *)&pFVar1->field_0x48 = 0;
  *(undefined8 *)&pFVar1->field_0x50 = 0;
  *(undefined8 *)&pFVar1->field_0x58 = 0;
  *(undefined8 *)&pFVar1->field_0x60 = 0;
  *(undefined8 *)&pFVar1->field_0x68 = 0;
  *(undefined8 *)&pFVar1->field_0x70 = 0;
  *(undefined ***)pFVar1 = &___7FWeakObjectProperty__6B_;
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) == 0) || ((UObject *)(local_res10 & 0xfffffffffffffffe) == (UObject *)0x0)
      ) || (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((local_res10 & 1) == 0) || ((local_res10 & 0xfffffffffffffffe) == 0)) goto LAB_142251fe5;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
LAB_142251fe5:
  FWeakObjectProperty::FWeakObjectProperty
            (pFVar1,(FFieldVariant)&local_res10,(FObjectPropertyParams *)param_2);
  *(undefined ***)pFVar1 = &___7__TPropertyWithSetterAndGetter_VFWeakObjectProperty____6B_;
  *(_func___cdecl_void_void_ptr_void_ptr **)(pFVar1 + 1) = param_2->SetterFunc;
  *(_func___cdecl_void_void_ptr_void_ptr **)&pFVar1[1].field_0x8 = param_2->GetterFunc;
  return pFVar1;
}

// ConstructFProperties @ 142265980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

void __cdecl
UECodeGen_Private::ConstructFProperties(UObject *param_1,FPropertyParamsBase **param_2,int param_3)

{
  ulonglong uVar1;
  FPropertyParamsBase **local_res10;
  int local_res18 [2];
  ulonglong local_res20;
  
  if (param_3 != 0) {
    uVar1 = (ulonglong)param_1 | 1;
    local_res10 = param_2 + param_3;
    local_res18[0] = param_3;
    do {
      local_res20 = uVar1;
      if (((UObject *)((ulonglong)param_1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
         (UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)((ulonglong)param_1 & 0xfffffffffffffffe));
      }
      ConstructFProperty((FFieldVariant)&local_res20,&local_res10,local_res18);
    } while (local_res18[0] != 0);
  }
  return;
}

// ConstructFProperty @ 142265a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

void __cdecl
UECodeGen_Private::ConstructFProperty
          (FFieldVariant param_1,FPropertyParamsBase ***param_2,int *param_3)

{
  uint uVar1;
  FPropertyParamsBase *pFVar2;
  uchar *_Str;
  code *pcVar3;
  bool bVar4;
  FFieldVariant FVar5;
  FMapProperty *pFVar6;
  size_t sVar7;
  FName *pFVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_2b8 [32];
  ulonglong local_298;
  FMapProperty *local_290;
  FFieldVariant local_288;
  FFieldVariant local_280;
  FFieldVariant local_278;
  FFieldVariant local_270;
  FFieldVariant local_268;
  FFieldVariant local_260;
  FFieldVariant local_258;
  FFieldVariant local_250;
  FFieldVariant local_248;
  FFieldVariant local_240;
  FFieldVariant local_238;
  FFieldVariant local_230;
  FFieldVariant local_228;
  FFieldVariant local_220;
  FFieldVariant local_218;
  FFieldVariant local_210;
  FFieldVariant local_208;
  FFieldVariant local_200;
  FFieldVariant local_1f8;
  FFieldVariant local_1f0;
  FFieldVariant local_1e8;
  FFieldVariant local_1e0;
  FFieldVariant local_1d8;
  FFieldVariant local_1d0;
  FFieldVariant local_1c8;
  FFieldVariant local_1c0;
  FFieldVariant local_1b8;
  FFieldVariant local_1b0;
  FFieldVariant local_1a8;
  FFieldVariant local_1a0;
  FFieldVariant local_198;
  FFieldVariant local_190;
  FFieldVariant local_188;
  FFieldVariant local_180;
  FFieldVariant local_178;
  FName local_170;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  *param_2 = *param_2 + -1;
  iVar9 = 0;
  pFVar2 = **param_2;
  iVar10 = iVar9;
  switch(pFVar2->Flags & (LargeWorldCoordinatesReal|FieldPath)) {
  case Int8:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_288,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FInt8Property,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2);
    break;
  case Int16:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_280,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FInt16Property,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2);
    break;
  case Int:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_278,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FIntProperty,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2);
    break;
  case Int64:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_270,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FInt64Property,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2);
    break;
  case UInt16:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_268,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FUInt16Property,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2);
    break;
  case UInt32:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_260,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FUInt32Property,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2);
    break;
  case UInt64:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_258,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FUInt64Property,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2);
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                       ,0x18ba,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  case Byte:
    local_298 = *(ulonglong *)param_1.Container;
    if ((((local_298 & 1) != 0) && ((UObject *)(local_298 & 0xfffffffffffffffe) != (UObject *)0x0))
       && (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_298 & 0xfffffffffffffffe));
    }
    pFVar6 = (FMapProperty *)
             NewFProperty<FByteProperty,UECodeGen_Private::FBytePropertyParams>
                       ((FFieldVariant)&local_298,pFVar2);
    iVar10 = 0;
    break;
  case Float:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_250,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FFloatProperty,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2);
    break;
  case Double:
  case LargeWorldCoordinatesReal:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_248,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FDoubleProperty,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2);
    break;
  case Bool:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_240,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FBoolProperty,UECodeGen_Private::FBoolPropertyParams>(FVar5,pFVar2);
    break;
  case SoftClass:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_208,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FSoftClassProperty,UECodeGen_Private::FSoftClassPropertyParams>
                       (FVar5,pFVar2);
    break;
  case WeakObject:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_230,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FWeakObjectProperty,UECodeGen_Private::FObjectPropertyParams>
                       (FVar5,pFVar2);
    break;
  case LazyObject:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_228,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FLazyObjectProperty,UECodeGen_Private::FObjectPropertyParams>
                       (FVar5,pFVar2);
    break;
  case SoftObject:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_220,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FSoftObjectProperty,UECodeGen_Private::FObjectPropertyParams>
                       (FVar5,pFVar2);
    break;
  case Class:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_218,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FClassProperty,UECodeGen_Private::FClassPropertyParams>(FVar5,pFVar2);
    goto LAB_142265b9c;
  case Object:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_238,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FObjectProperty,UECodeGen_Private::FObjectPropertyParams>(FVar5,pFVar2);
LAB_142265b9c:
    iVar10 = 0;
    if ((pFVar2->Flags & NativeBool) != Byte) {
      pFVar6->_padding_ = pFVar6->_padding_ | 0x104000000000000;
      iVar10 = iVar9;
    }
    break;
  case Interface:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_200,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FInterfaceProperty,UECodeGen_Private::FInterfacePropertyParams>
                       (FVar5,pFVar2);
    break;
  case Name:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_1f8,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FNameProperty,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2);
    break;
  case Str:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_1f0,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FStrProperty,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2);
    break;
  case Array:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_1e8,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FArrayProperty,UECodeGen_Private::FArrayPropertyParams>(FVar5,pFVar2);
    iVar10 = 1;
    break;
  case Map:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_1e0,(FFieldVariant *)param_1.Container);
    pFVar6 = NewFProperty<FMapProperty,UECodeGen_Private::FMapPropertyParams>(FVar5,pFVar2);
    iVar10 = 2;
    break;
  case Set:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_1d8,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FSetProperty,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2);
    iVar10 = 1;
    break;
  case Struct:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_1d0,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FStructProperty,UECodeGen_Private::FStructPropertyParams>(FVar5,pFVar2);
    break;
  case Delegate:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_1c8,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FDelegateProperty,UECodeGen_Private::FDelegatePropertyParams>
                       (FVar5,pFVar2);
    break;
  case InlineMulticastDelegate:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_1c0,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FMulticastInlineDelegateProperty,UECodeGen_Private::FMulticastDelegatePropertyParams>
                       (FVar5,pFVar2);
    break;
  case SparseMulticastDelegate:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_1b8,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FMulticastSparseDelegateProperty,UECodeGen_Private::FMulticastDelegatePropertyParams>
                       (FVar5,pFVar2);
    break;
  case Text:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_1b0,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FTextProperty,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2);
    break;
  case Enum:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_1a8,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FEnumProperty,UECodeGen_Private::FEnumPropertyParams>(FVar5,pFVar2);
    iVar10 = 1;
    break;
  case FieldPath:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_1a0,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FFieldPathProperty,UECodeGen_Private::FFieldPathPropertyParams>
                       (FVar5,pFVar2);
    break;
  case Optional:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_198,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FOptionalProperty,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2)
    ;
    iVar10 = 1;
    break;
  case VerseValue:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_190,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FVerseDynamicProperty,UECodeGen_Private::FGenericPropertyParams>
                       (FVar5,pFVar2);
    break;
  case Utf8Str:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_188,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FUtf8StrProperty,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2);
    break;
  case AnsiStr:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_180,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FAnsiStrProperty,UECodeGen_Private::FGenericPropertyParams>(FVar5,pFVar2);
    break;
  case VerseString:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_178,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FVerseStringProperty,UECodeGen_Private::FGenericPropertyParams>
                       (FVar5,pFVar2);
    iVar10 = 1;
    break;
  case VerseType:
    FVar5.Container =
         (FFieldObjectUnion)
         FFieldVariant::FFieldVariant(&local_210,(FFieldVariant *)param_1.Container);
    pFVar6 = (FMapProperty *)
             NewFProperty<FVerseClassProperty,UECodeGen_Private::FVerseClassPropertyParams>
                       (FVar5,pFVar2);
  }
  *(uint *)&pFVar6->_padding_ = (uint)pFVar2->ArrayDim;
  _Str = (uchar *)pFVar2->RepNotifyFuncUTF8;
  if (_Str == (uchar *)0x0) goto LAB_142265fad;
  local_68.Data = (FScriptContainerElement *)0x0;
  sVar7 = strlen((char *)_Str);
  local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar7);
  uVar1 = local_58 + 1;
  uVar11 = uVar1;
  if (uVar1 < 0x81) {
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      uVar11 = 0;
      goto LAB_142265f39;
    }
  }
  else {
LAB_142265f39:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar11,2);
  }
  local_60 = local_168;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    local_60 = local_68.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_60,uVar1,_Str,(int)sVar7 + 1);
  pFVar8 = ::FName::FName(&local_170,(wchar_t *)local_60);
  pFVar6->_padding_ = (longlong)*pFVar8;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
LAB_142265fad:
  *param_3 = *param_3 + -1;
  if (iVar10 != 0) {
    do {
      local_290 = pFVar6;
      if ((((ulonglong)pFVar6 & 1) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsUObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x180,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ConstructFProperty((FFieldVariant)&local_290,param_2,param_3);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}

// ConstructUClass @ 1422660d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

void __cdecl UECodeGen_Private::ConstructUClass(UClass **param_1,FClassParams *param_2)

{
  <lambda_1> local_res18 [16];
  
  ConstructUClassHelper<UClass,UECodeGen_Private::FClassParams,_UECodeGen_Private::ConstructUClass_::__l2::<lambda_1>_>
            (param_1,param_2,local_res18);
  return;
}

// ConstructUDelegateFunction @ 1422660e0

void __cdecl
UECodeGen_Private::ConstructUDelegateFunction(UFunction **param_1,FDelegateFunctionParams *param_2)

{
  <lambda_1> local_res18 [16];
  
  ConstructUFunctionHelper<UFunction,UECodeGen_Private::FDelegateFunctionParams,_UECodeGen_Private::ConstructUDelegateFunction_::__l2::<lambda_1>_>
            (param_1,param_2,param_1,local_res18);
  return;
}

// ConstructUEnum @ 142266100

void __cdecl UECodeGen_Private::ConstructUEnum(UEnum **param_1,FEnumParams *param_2)

{
  <lambda_1> local_res18 [16];
  
  ConstructUEnumHelper<UEnum,UECodeGen_Private::FEnumParams,_UECodeGen_Private::ConstructUEnum_::__l2::<lambda_1>_>
            (param_1,param_2,local_res18);
  return;
}

// ConstructUFunction @ 142266110

void __cdecl UECodeGen_Private::ConstructUFunction(UFunction **param_1,FFunctionParams *param_2)

{
  <lambda_1> local_res18 [16];
  
  ConstructUFunctionHelper<UFunction,UECodeGen_Private::FFunctionParams,_UECodeGen_Private::ConstructUFunction_::__l2::<lambda_1>_>
            (param_1,param_2,param_1,local_res18);
  return;
}

// ConstructUPackage @ 142266130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UECodeGen_Private::ConstructUPackage(UPackage **param_1,FPackageParams *param_2)

{
  TArray<UFunction_*,TSizedDefaultAllocator<32>_> *pTVar1;
  _func___cdecl_UObject_ptr **pp_Var2;
  uint uVar3;
  uchar *puVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  EInternalObjectFlags EVar10;
  int iVar11;
  size_t sVar12;
  FName *pFVar13;
  UClass *pUVar14;
  UObject *pUVar15;
  UPackage *pUVar16;
  _func___cdecl_UObject_ptr **pp_Var17;
  ForAnyElementType FVar18;
  uint uVar19;
  undefined1 auStackY_308 [32];
  ForAnyElementType local_2b8;
  undefined8 local_2b0;
  UObject *local_2a8;
  FName local_2a0;
  undefined8 local_298 [2];
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if (*param_1 != (UPackage *)0x0) {
    return;
  }
  puVar4 = (uchar *)param_2->NameUTF8;
  local_188.Data = (FScriptContainerElement *)0x0;
  if (puVar4 == (uchar *)0x0) {
    local_178 = 0;
    local_180 = (FScriptContainerElement *)0x0;
  }
  else {
    sVar12 = strlen((char *)puVar4);
    local_178 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar4,(int)sVar12);
    uVar3 = local_178 + 1;
    uVar19 = uVar3;
    if (uVar3 < 0x81) {
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_1422661c9;
      }
    }
    else {
LAB_1422661c9:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,uVar19,2);
    }
    local_180 = local_288;
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      local_180 = local_188.Data;
    }
    UE::Core::Private::Convert((wchar_t *)local_180,uVar3,puVar4,(int)sVar12 + 1);
  }
  pFVar13 = ::FName::FName(&local_2a0,(wchar_t *)local_180);
  FVar5 = *pFVar13;
  pUVar14 = Z_Construct_UClass_UPackage_NoRegister();
  bVar9 = UE::IsSavingPackage((UObject *)0x0);
  if (bVar9) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
  }
  bVar9 = IsGarbageCollectingAndLockingUObjectHashTables();
  if (bVar9) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
  }
  EVar10 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar15 = StaticFindObjectFastInternal(pUVar14,(UObject *)0x0,FVar5,None,RF_NoFlags,EVar10);
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  if (pUVar15 != (UObject *)0x0) goto LAB_142266395;
  puVar4 = (uchar *)param_2->NameUTF8;
  local_68.Data = (FScriptContainerElement *)0x0;
  if (puVar4 == (uchar *)0x0) {
    local_58 = 0;
    local_60 = (FScriptContainerElement *)0x0;
  }
  else {
    sVar12 = strlen((char *)puVar4);
    local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar4,(int)sVar12);
    uVar3 = local_58 + 1;
    uVar19 = uVar3;
    if (uVar3 < 0x81) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_1422662fe;
      }
    }
    else {
LAB_1422662fe:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar19,2);
    }
    local_60 = local_168;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      local_60 = local_68.Data;
    }
    UE::Core::Private::Convert((wchar_t *)local_60,uVar3,puVar4,(int)sVar12 + 1);
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("FoundPackage",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                     ,0x1a3e,L"Code not found for generated code (package %s).");
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_142266395:
  pUVar16 = CastChecked<UPackage,UObject>(pUVar15);
  *param_1 = pUVar16;
  if ((atomic<unsigned_int>)((uint)pUVar16->PackageFlagsPrivate | param_2->PackageFlags) !=
      pUVar16->PackageFlagsPrivate) {
    LOCK();
    pUVar16->PackageFlagsPrivate =
         (atomic<unsigned_int>)((uint)pUVar16->PackageFlagsPrivate | param_2->PackageFlags);
    UNLOCK();
  }
  uVar3 = param_2->NumSingletons;
  local_2b8.Data = (FScriptContainerElement *)0x0;
  local_2b0 = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&local_2b8,0,(int *)((longlong)&local_2b0 + 4));
  }
  pp_Var17 = param_2->SingletonFuncArray;
  pp_Var2 = pp_Var17 + param_2->NumSingletons;
  FVar18.Data = local_2b8.Data;
  do {
    if (pp_Var17 == pp_Var2) {
      pTVar1 = &pUVar16->Delegates;
      iVar11 = (int)local_2b0;
      local_2b0._4_4_ = (int)((ulonglong)local_2b0 >> 0x20);
      iVar8 = local_2b0._4_4_;
      local_2b8.Data = (FScriptContainerElement *)0x0;
      local_2b0 = 0;
      if (pTVar1 != (TArray<UFunction_*,TSizedDefaultAllocator<32>_> *)local_298) {
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        (pTVar1->AllocatorInstance).Data = FVar18.Data;
        (pUVar16->Delegates).ArrayNum = iVar11;
        (pUVar16->Delegates).ArrayMax = iVar8;
        FVar18.Data = (FScriptContainerElement *)0x0;
      }
      if (FVar18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar18.Data);
      }
      if (local_2b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data);
      }
      return;
    }
    local_2b8.Data = FVar18.Data;
    pUVar15 = (**pp_Var17)();
    if (pUVar15 == (UObject *)0x0) {
LAB_1422664f0:
      local_2a8 = (UObject *)0x0;
    }
    else {
      pUVar14 = Z_Construct_UClass_UFunction_NoRegister();
      iVar11 = (int)pUVar14->_padding_;
      if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar11) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar14->_padding_)) goto LAB_1422664f0;
      local_2a8 = pUVar15;
      if (((local_2b8.Data <= (FScriptContainerElement *)&local_2a8) &&
          ((FScriptContainerElement *)&local_2a8 < local_2b8.Data + (longlong)local_2b0._4_4_ * 8))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (int)local_2b0;
      if ((int)local_2b0 == local_2b0._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_2b8,(int *)((longlong)&local_2b0 + 4));
      }
      local_2b0 = CONCAT44(local_2b0._4_4_,iVar11 + 1);
      *(UObject **)(local_2b8.Data + (longlong)iVar11 * 8) = local_2a8;
    }
    if (*(UPackage **)&pUVar15->field_0x20 == pUVar16) {
      FVar5.ComparisonIndex.Value = *(uint *)&pUVar15->field_0x18;
      FVar5.Number = *(uint *)&pUVar15->field_0x1c;
      NotifyRegistrationEvent
                ((FName)pUVar16->_padding_,FVar5,NRT_NoExportObject,NRP_Finished,
                 (_func___cdecl_UObject_ptr *)0x0,false,pUVar15);
    }
    pp_Var17 = pp_Var17 + 1;
    FVar18.Data = local_2b8.Data;
  } while( true );
}

// ConstructUScriptStruct @ 1422665f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

void __cdecl
UECodeGen_Private::ConstructUScriptStruct(UScriptStruct **param_1,FStructParams *param_2)

{
  <lambda_1> local_res18 [16];
  
  ConstructUScriptStructHelper<UScriptStruct,UECodeGen_Private::FStructParams,_UECodeGen_Private::ConstructUScriptStruct_::__l2::<lambda_1>_>
            (param_1,param_2,local_res18);
  return;
}

// ConstructUSparseDelegateFunction @ 142266600

void __cdecl
UECodeGen_Private::ConstructUSparseDelegateFunction
          (UFunction **param_1,FSparseDelegateFunctionParams *param_2)

{
  <lambda_1> local_res18 [16];
  
  ConstructUFunctionHelper<UFunction,UECodeGen_Private::FSparseDelegateFunctionParams,_UECodeGen_Private::ConstructUSparseDelegateFunction_::__l2::<lambda_1>_>
            (param_1,param_2,param_1,local_res18);
  return;
}

