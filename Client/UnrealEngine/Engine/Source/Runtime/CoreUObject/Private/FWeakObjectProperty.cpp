// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 25

// FWeakObjectProperty @ 1421b4440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FWeakObjectProperty * __thiscall
FWeakObjectProperty::FWeakObjectProperty
          (FWeakObjectProperty *this,FFieldVariant param_1,FObjectPropertyParams *param_2)

{
  ulonglong uVar1;
  UClass *pUVar2;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FObjectPropertyBase::FObjectPropertyBase
            ((FObjectPropertyBase *)this,(FFieldVariant)&local_res8,param_2,
             CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
  *(undefined ***)this = &___7__TProperty_UFWeakObjectPtr__VFObjectPropertyBase____6B_;
  FProperty::SetElementSize((FProperty *)this,8);
  *(undefined ***)this = &___7__TFObjectPropertyBase_UFWeakObjectPtr____6B_;
  if (param_2->ClassFunc == (_func___cdecl_UClass_ptr *)0x0) {
    pUVar2 = (UClass *)0x0;
  }
  else {
    pUVar2 = (*param_2->ClassFunc)();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(UClass **)&this->field_0x70 = pUVar2;
  *(undefined ***)this = &___7FWeakObjectProperty__6B_;
  return this;
}

// FWeakObjectProperty @ 1421b4550

FWeakObjectProperty * __thiscall
FWeakObjectProperty::FWeakObjectProperty
          (FWeakObjectProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FObjectPropertyBase::FObjectPropertyBase
            ((FObjectPropertyBase *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7__TProperty_UFWeakObjectPtr__VFObjectPropertyBase____6B_;
  FProperty::SetElementSize((FProperty *)this,8);
  *(undefined ***)this = &___7FWeakObjectProperty__6B_;
  *(undefined8 *)&this->field_0x70 = 0;
  return this;
}

// Construct @ 1421c2690

FField * __cdecl
FWeakObjectProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  FObjectPropertyBase *this;
  FFieldClass *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x78,0);
  if (this == (FObjectPropertyBase *)0x0) {
    return (FField *)0x0;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = FObjectPropertyBase::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FWeakObjectProperty",0x8000000,
                 CASTCLASS_FWeakObjectProperty|CASTCLASS_FObjectPropertyBase|CASTCLASS_FProperty|
                 CASTCLASS_UField,pFVar2,Construct);
      atexit(`FWeakObjectProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FField::FField((FField *)this,EC_InternalUseOnlyConstructor,&::StaticFieldClass);
  this->_padding_ = (longlong)&___7FWeakObjectProperty__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PropertyClass).field0_0x0.DebugPtr = (UClass *)0x0;
  uVar1 = (param_1->Container).Unknown;
  local_res20 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_1421c277c;
      goto LAB_1421c2795;
    }
LAB_1421c27b9:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_1421c27d8;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_1421c277c:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1421c2795:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_1421c27b9;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1421c27b9;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_1421c27d8:
  FObjectPropertyBase::FObjectPropertyBase(this,(FFieldVariant)&local_res20,param_2,param_3);
  this->_padding_ = (longlong)&___7__TProperty_UFWeakObjectPtr__VFObjectPropertyBase____6B_;
  FProperty::SetElementSize((FProperty *)this,8);
  this->_padding_ = (longlong)&___7FWeakObjectProperty__6B_;
  (this->PropertyClass).field0_0x0.DebugPtr = (UClass *)0x0;
  return (FField *)this;
}

// CopyCompleteValueFromScriptVM @ 1421c32f0

void __thiscall
FWeakObjectProperty::CopyCompleteValueFromScriptVM
          (FWeakObjectProperty *this,void *param_1,void *param_2)

{
  FObjectPropertyBase::SetWrappedUObjectPtrValues<FWeakObjectPtr,UObject_*>
            ((FObjectPropertyBase *)this,param_1,Direct,param_2,0,*(int *)&this->field_0x30);
  return;
}

// CopyCompleteValueFromScriptVM_InContainer @ 1421c3320

void __thiscall
FWeakObjectProperty::CopyCompleteValueFromScriptVM_InContainer
          (FWeakObjectProperty *this,void *param_1,void *param_2)

{
  FObjectPropertyBase::SetWrappedUObjectPtrValues<FWeakObjectPtr,UObject_*>
            ((FObjectPropertyBase *)this,param_1,InContainer,param_2,0,*(int *)&this->field_0x30);
  return;
}

// CopyCompleteValueToScriptVM @ 1421c3350

void __thiscall
FWeakObjectProperty::CopyCompleteValueToScriptVM
          (FWeakObjectProperty *this,void *param_1,void *param_2)

{
  FObjectPropertyBase::GetWrappedUObjectPtrValues<FWeakObjectPtr,UObject_*>
            ((FObjectPropertyBase *)this,param_1,param_2,Direct,0,*(int *)&this->field_0x30);
  return;
}

// CopyCompleteValueToScriptVM_InContainer @ 1421c3380

void __thiscall
FWeakObjectProperty::CopyCompleteValueToScriptVM_InContainer
          (FWeakObjectProperty *this,void *param_1,void *param_2)

{
  FObjectPropertyBase::GetWrappedUObjectPtrValues<FWeakObjectPtr,UObject_*>
            ((FObjectPropertyBase *)this,param_1,param_2,InContainer,0,*(int *)&this->field_0x30);
  return;
}

// CopySingleValueFromScriptVM @ 1421c33b0

void __thiscall
FWeakObjectProperty::CopySingleValueFromScriptVM
          (FWeakObjectProperty *this,void *param_1,void *param_2)

{
  UObject *local_res18 [2];
  
  local_res18[0] = *(UObject **)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)local_res18);
  return;
}

// CopySingleValueToScriptVM @ 1421c33f0

void __thiscall
FWeakObjectProperty::CopySingleValueToScriptVM
          (FWeakObjectProperty *this,void *param_1,void *param_2)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(param_2);
  *(UObject **)param_1 = pUVar1;
  return;
}

// GetCPPMacroType @ 1421cf080

FString * __thiscall
FWeakObjectProperty::GetCPPMacroType
          (FWeakObjectProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res8 = *(FName *)(*(longlong *)&this->field_0x70 + 0x18);
  if ((*(ulonglong *)&this->field_0x38 & 0x4000000000) == 0) {
    ::FName::ToString(&local_res8,&local_28);
    (**(code **)(**(longlong **)&this->field_0x70 + 0x318))();
    ::FString::PrintfImpl(&local_38,L"TWeakObjectPtr<%s%s>");
    if (param_1 != &local_38) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_38.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pwVar2 = L"WEAKOBJECT";
  }
  else {
    ::FName::ToString(&local_res8,&local_28);
    (**(code **)(**(longlong **)&this->field_0x70 + 0x318))();
    ::FString::PrintfImpl(&local_48,L"TAutoWeakObjectPtr<%s%s>");
    if (param_1 != &local_48) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_48.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pwVar2 = L"AUTOWEAKOBJECT";
  }
  ::FString::FString(__return_storage_ptr__,pwVar2);
  return __return_storage_ptr__;
}

// GetCPPType @ 1421cf270

FString * __thiscall
FWeakObjectProperty::GetCPPType
          (FWeakObjectProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  undefined8 local_res8;
  undefined8 local_58;
  FName local_50;
  FName local_48;
  undefined1 local_40 [16];
  FString local_30;
  FString local_20;
  
  if ((*(longlong *)&this->field_0x70 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyWeakObjectPtr.cpp"
                         ,0x23,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  if ((*(ulonglong *)&this->field_0x38 & 0x4000000000) == 0) {
    if (*(longlong *)&this->field_0x70 == 0) {
      local_58 = 0;
      local_48 = (FName)&local_58;
    }
    else {
      local_48 = UE::CoreUObject::Private::GetFName((UObject *)(local_40 + 8));
    }
    local_48 = *(FName *)local_48;
    ::FName::ToString(&local_48,&local_20);
    (**(code **)(**(longlong **)&this->field_0x70 + 0x318))();
    ::FString::PrintfImpl(__return_storage_ptr__,L"TWeakObjectPtr<%s%s>");
    local_30.Data.AllocatorInstance.Data = local_20.Data.AllocatorInstance.Data;
  }
  else {
    if (*(longlong *)&this->field_0x70 == 0) {
      local_res8 = 0;
      local_50 = (FName)&local_res8;
    }
    else {
      local_50 = UE::CoreUObject::Private::GetFName((UObject *)local_40);
    }
    local_50 = *(FName *)local_50;
    ::FName::ToString(&local_50,&local_30);
    (**(code **)(**(longlong **)&this->field_0x70 + 0x318))();
    ::FString::PrintfImpl(__return_storage_ptr__,L"TAutoWeakObjectPtr<%s%s>");
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFieldSize @ 1421cf910

ulong64 __thiscall FWeakObjectProperty::GetFieldSize(FWeakObjectProperty *this)

{
  return 0x78;
}

// GetObjectPropertyValue @ 1421d0120

UObject * __thiscall
FWeakObjectProperty::GetObjectPropertyValue(FWeakObjectProperty *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(param_1);
  return pUVar1;
}

// GetObjectPropertyValue_InContainer @ 1421d0130

UObject * __thiscall
FWeakObjectProperty::GetObjectPropertyValue_InContainer
          (FWeakObjectProperty *this,void *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  
  if ((((param_2 < 0) || (iVar1 = *(int *)&this->field_0x30, iVar1 < param_2)) || (iVar1 < 1)) ||
     (iVar1 + -1 < param_2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0xb50,
                       L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UObject *)(*pcVar2)();
      return pUVar5;
    }
  }
  cVar4 = (**(code **)(*(longlong *)this + 0x78))(this);
  if (cVar4 == '\0') {
    if ((param_2 < 0) || (*(int *)&this->field_0x30 <= param_2)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UObject *)(*pcVar2)();
        return pUVar5;
      }
    }
    if (param_1 == (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UObject *)(*pcVar2)();
        return pUVar5;
      }
    }
    pUVar5 = (UObject *)
             (**(code **)(*(longlong *)this + 0x1f8))
                       (this,(longlong)param_1 +
                             (longlong)*(int *)&this->field_0x44 +
                             (longlong)param_2 * (longlong)*(int *)&this->field_0x34);
  }
  else {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    FProperty::GetValue_InContainer((FProperty *)this,param_1,&local_res8);
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
  }
  return pUVar5;
}

// GetObjectPtrPropertyValue @ 1421d0280

TObjectPtr<UObject> __thiscall
FWeakObjectProperty::GetObjectPtrPropertyValue(FWeakObjectProperty *this,void *param_1)

{
  UObject *pUVar1;
  FWeakObjectPtr *in_R8;
  
  pUVar1 = FWeakObjectPtr::Get(in_R8);
  *(UObject **)param_1 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// GetObjectPtrPropertyValue_InContainer @ 1421d02c0

TObjectPtr<UObject> __thiscall
FWeakObjectProperty::GetObjectPtrPropertyValue_InContainer
          (FWeakObjectProperty *this,void *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  TObjectPtr<UObject> TVar5;
  UObject *pUVar6;
  undefined4 in_register_00000084;
  void *pvVar7;
  int in_R9D;
  FWeakObjectPtr local_res8;
  
  pvVar7 = (void *)CONCAT44(in_register_00000084,param_2);
  *(undefined8 *)param_1 = 0;
  if ((((in_R9D < 0) || (iVar1 = *(int *)&this->field_0x30, iVar1 < in_R9D)) || (iVar1 < 1)) ||
     (iVar1 + -1 < in_R9D)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0xb50,
                       L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.field0_0x0 = (TObjectPtr<UObject>_u_0)(*pcVar2)();
      return (TObjectPtr<UObject>)TVar5.field0_0x0;
    }
  }
  cVar4 = (**(code **)(*(longlong *)this + 0x78))(this);
  if (cVar4 == '\0') {
    if ((in_R9D < 0) || (*(int *)&this->field_0x30 <= in_R9D)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.field0_0x0 = (TObjectPtr<UObject>_u_0)(*pcVar2)();
        return (TObjectPtr<UObject>)TVar5.field0_0x0;
      }
    }
    if (pvVar7 == (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.field0_0x0 = (TObjectPtr<UObject>_u_0)(*pcVar2)();
        return (TObjectPtr<UObject>)TVar5.field0_0x0;
      }
    }
    pUVar6 = (UObject *)
             (**(code **)(*(longlong *)this + 0x1f8))
                       (this,(longlong)pvVar7 +
                             (longlong)*(int *)&this->field_0x44 +
                             (longlong)in_R9D * (longlong)*(int *)&this->field_0x34);
  }
  else {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    FProperty::GetValue_InContainer((FProperty *)this,pvVar7,&local_res8);
    pUVar6 = FWeakObjectPtr::Get(&local_res8);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  *(UObject **)param_1 = pUVar6;
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// GetValueTypeHashInternal @ 1421d0f50

uint __thiscall
FWeakObjectProperty::GetValueTypeHashInternal(FWeakObjectProperty *this,void *param_1)

{
  return *(uint *)((longlong)param_1 + 4) ^ *(uint *)param_1;
}

// LinkInternal @ 1421d39f0

void __thiscall FWeakObjectProperty::LinkInternal(FWeakObjectProperty *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if ((*(uint *)&this->field_0x38 >> 0xc & 1) != 0) {
    FField::GetFullName((FField *)this,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAnyPropertyFlags(CPF_NonNullable)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyWeakObjectPtr.cpp"
                       ,0x38,
                       L"Weak Object Properties can\'t be non nullable but \"%s\" is marked as CPF_NonNullable"
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FProperty::SetElementSize((FProperty *)this,8);
  *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x8001040000200;
  return;
}

// SerializeItem @ 1421e6de0

void __thiscall
FWeakObjectProperty::SerializeItem
          (FWeakObjectProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  int iVar1;
  FArchive *pFVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  longlong lVar6;
  longlong lVar7;
  UClass *pUVar8;
  FLinkerPlaceholderBase *this_00;
  FFieldObjectUnion FVar9;
  FWeakObjectProperty *local_res8;
  FSlotBase local_res10;
  FWeakObjectProperty *local_38;
  undefined8 local_30;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  lVar6 = (**(code **)(*(longlong *)this + 0x1f8))(this,param_2);
  pFVar2 = (local_res10.StructuredArchive)->Formatter->Inner;
  (**(code **)(*(longlong *)pFVar2 + 0x138))(pFVar2,param_2);
  if (((pFVar5->field_0x28 & 1) == 0) && ((pFVar5->field_0x2b & 2) == 0)) {
    return;
  }
  lVar7 = (**(code **)(*(longlong *)this + 0x1f8))(this,param_2);
  if (lVar6 == lVar7) {
    return;
  }
  if ((((pFVar5->field_0x28 & 1) != 0) && ((pFVar5->field_0x2b & 1) == 0)) && (lVar7 != 0)) {
    pUVar8 = Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) {
      pUVar8 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar8->_padding_)) goto LAB_1421e6f4b;
      local_38 = this;
      if ((((ulonglong)this & 1) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsUObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x180,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar9.Field = (FField *)&local_38;
      this_00 = (FLinkerPlaceholderBase *)(lVar7 + 0x208);
    }
    else {
      local_res8 = this;
      if ((((ulonglong)this & 1) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsUObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x180,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar9.Field = (FField *)&local_res8;
      this_00 = (FLinkerPlaceholderBase *)(lVar7 + 0x28);
    }
    FLinkerPlaceholderBase::AddReferencingPropertyValue(this_00,(FFieldVariant)FVar9,param_2);
  }
LAB_1421e6f4b:
  local_30 = 0;
  (**(code **)(*(longlong *)this + 0x218))(this,param_2,&local_30,0);
  return;
}

// SetObjectPropertyValueUnchecked @ 1421e84c0

void __thiscall
FWeakObjectProperty::SetObjectPropertyValueUnchecked
          (FWeakObjectProperty *this,void *param_1,UObject *param_2)

{
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  *(FWeakObjectPtr *)param_1 = local_res10;
  return;
}

// SetObjectPropertyValueUnchecked_InContainer @ 1421e8540

void __thiscall
FWeakObjectProperty::SetObjectPropertyValueUnchecked_InContainer
          (FWeakObjectProperty *this,void *param_1,UObject *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  if ((((param_3 < 0) || (iVar1 = *(int *)&this->field_0x30, iVar1 < param_3)) || (iVar1 < 1)) ||
     (iVar1 + -1 < param_3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0xb8a,
                       L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  cVar4 = (**(code **)(*(longlong *)this + 0x70))();
  if (cVar4 == '\0') {
    if ((param_3 < 0) || (*(int *)&this->field_0x30 <= param_3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_1 == (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FObjectPropertyBase::SetObjectPropertyValue
              ((FObjectPropertyBase *)this,
               (void *)((longlong)param_1 +
                       (longlong)*(int *)&this->field_0x44 +
                       (longlong)param_3 * (longlong)*(int *)&this->field_0x34),param_2);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    FProperty::SetValue_InContainer((FProperty *)this,param_1,&local_res8);
  }
  return;
}

// SetObjectPtrPropertyValueUnchecked @ 1421e86d0

void __thiscall
FWeakObjectProperty::SetObjectPtrPropertyValueUnchecked
          (FWeakObjectProperty *this,void *param_1,TObjectPtr<UObject> param_2)

{
  UObject *pUVar1;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  pUVar1 = *(UObject **)param_2.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  *(FWeakObjectPtr *)param_1 = local_res10;
  return;
}

// SetObjectPtrPropertyValueUnchecked_InContainer @ 1421e8760

void __thiscall
FWeakObjectProperty::SetObjectPtrPropertyValueUnchecked_InContainer
          (FWeakObjectProperty *this,void *param_1,TObjectPtr<UObject> param_2,int param_3)

{
  FObjectPropertyBase::SetWrappedUObjectPtrValues<FWeakObjectPtr,TObjectPtr<UObject>_>
            ((FObjectPropertyBase *)this,param_1,InContainer,
             (TObjectPtr<UObject> *)param_2.field0_0x0,param_3,1);
  return;
}

// StaticClass @ 1421e8b90

FFieldClass * __cdecl FWeakObjectProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FObjectPropertyBase::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FWeakObjectProperty",0x8000000,
                 CASTCLASS_FWeakObjectProperty|CASTCLASS_FObjectPropertyBase|CASTCLASS_FProperty|
                 CASTCLASS_UField,pFVar1,Construct);
      atexit(`FWeakObjectProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// operator_new @ 142259fc0

void * __cdecl FWeakObjectProperty::operator_new(ulong64 param_1)

{
  FField *this;
  FFieldClass *pFVar1;
  
  this = FMemory::Malloc(param_1,0);
  if (this != (FField *)0x0) {
    pFVar1 = StaticClass();
    FField::FField(this,EC_InternalUseOnlyConstructor,pFVar1);
    this[1].Next = (FField *)0x0;
    this[1].NamePrivate.ComparisonIndex = 0;
    this[1].NamePrivate.Number = 0;
    *(undefined8 *)&this[1].FlagsPrivate = 0;
    this[2]._padding_ = 0;
    this[2].ClassPrivate = (FFieldClass *)0x0;
    this[2].Owner.Container.Field = (FField *)0x0;
    this->_padding_ = (longlong)&___7FWeakObjectProperty__6B_;
  }
  return this;
}

