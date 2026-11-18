// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 27

// FLazyObjectProperty @ 1421612f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FLazyObjectProperty * __thiscall
FLazyObjectProperty::FLazyObjectProperty
          (FLazyObjectProperty *this,FFieldVariant param_1,FObjectPropertyParams *param_2)

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
             CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData);
  *(undefined ***)this = &___7__TProperty_UFLazyObjectPtr__VFObjectPropertyBase____6B_;
  FProperty::SetElementSize((FProperty *)this,0x18);
  *(undefined ***)this = &___7__TFObjectPropertyBase_UFLazyObjectPtr____6B_;
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
  *(undefined ***)this = &___7FLazyObjectProperty__6B_;
  return this;
}

// FLazyObjectProperty @ 142161400

FLazyObjectProperty * __thiscall
FLazyObjectProperty::FLazyObjectProperty
          (FLazyObjectProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

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
  *(undefined ***)this = &___7__TProperty_UFLazyObjectPtr__VFObjectPropertyBase____6B_;
  FProperty::SetElementSize((FProperty *)this,0x18);
  *(undefined ***)this = &___7FLazyObjectProperty__6B_;
  *(undefined8 *)&this->field_0x70 = 0;
  return this;
}

// AllowCrossLevel @ 1421671f0

bool __thiscall FLazyObjectProperty::AllowCrossLevel(FLazyObjectProperty *this)

{
  return true;
}

// Construct @ 14216b620

FField * __cdecl
FLazyObjectProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

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
                (&::StaticFieldClass,L"FLazyObjectProperty",0x10000000,
                 CASTCLASS_FLazyObjectProperty|CASTCLASS_FObjectPropertyBase|CASTCLASS_FProperty|
                 CASTCLASS_UField,pFVar2,Construct);
      atexit(`FLazyObjectProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FField::FField((FField *)this,EC_InternalUseOnlyConstructor,&::StaticFieldClass);
  this->_padding_ = (longlong)&___7FLazyObjectProperty__6B_;
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
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216b70c;
      goto LAB_14216b725;
    }
LAB_14216b749:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_14216b768;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216b70c:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14216b725:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_14216b749;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216b749;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_14216b768:
  FObjectPropertyBase::FObjectPropertyBase(this,(FFieldVariant)&local_res20,param_2,param_3);
  this->_padding_ = (longlong)&___7__TProperty_UFLazyObjectPtr__VFObjectPropertyBase____6B_;
  FProperty::SetElementSize((FProperty *)this,0x18);
  this->_padding_ = (longlong)&___7FLazyObjectProperty__6B_;
  (this->PropertyClass).field0_0x0.DebugPtr = (UClass *)0x0;
  return (FField *)this;
}

// CopyCompleteValueFromScriptVM @ 142173d00

void __thiscall
FLazyObjectProperty::CopyCompleteValueFromScriptVM
          (FLazyObjectProperty *this,void *param_1,void *param_2)

{
  FObjectPropertyBase::SetWrappedUObjectPtrValues<FLazyObjectPtr,UObject_*>
            ((FObjectPropertyBase *)this,param_1,Direct,param_2,0,*(int *)&this->field_0x30);
  return;
}

// CopyCompleteValueFromScriptVM_InContainer @ 142173e00

void __thiscall
FLazyObjectProperty::CopyCompleteValueFromScriptVM_InContainer
          (FLazyObjectProperty *this,void *param_1,void *param_2)

{
  FObjectPropertyBase::SetWrappedUObjectPtrValues<FLazyObjectPtr,UObject_*>
            ((FObjectPropertyBase *)this,param_1,InContainer,param_2,0,*(int *)&this->field_0x30);
  return;
}

// CopyCompleteValueToScriptVM @ 142173e60

void __thiscall
FLazyObjectProperty::CopyCompleteValueToScriptVM
          (FLazyObjectProperty *this,void *param_1,void *param_2)

{
  FObjectPropertyBase::GetWrappedUObjectPtrValues<FLazyObjectPtr,UObject_*>
            ((FObjectPropertyBase *)this,param_1,param_2,Direct,0,*(int *)&this->field_0x30);
  return;
}

// CopyCompleteValueToScriptVM_InContainer @ 142173ec0

void __thiscall
FLazyObjectProperty::CopyCompleteValueToScriptVM_InContainer
          (FLazyObjectProperty *this,void *param_1,void *param_2)

{
  FObjectPropertyBase::GetWrappedUObjectPtrValues<FLazyObjectPtr,UObject_*>
            ((FObjectPropertyBase *)this,param_1,param_2,InContainer,0,*(int *)&this->field_0x30);
  return;
}

// CopySingleValueFromScriptVM @ 142173f20

void __thiscall
FLazyObjectProperty::CopySingleValueFromScriptVM
          (FLazyObjectProperty *this,void *param_1,void *param_2)

{
  UObject *pUVar1;
  UObject *local_res18 [2];
  
  pUVar1 = *(UObject **)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_res18[0] = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  TPersistentObjectPtr<FUniqueObjectGuid>::operator=(param_1,(FObjectPtr)local_res18);
  return;
}

// CopySingleValueToScriptVM @ 142173fe0

void __thiscall
FLazyObjectProperty::CopySingleValueToScriptVM
          (FLazyObjectProperty *this,void *param_1,void *param_2)

{
  UObject *pUVar1;
  
  pUVar1 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(UObject **)param_1 = pUVar1;
  return;
}

// GetCPPMacroType @ 142179590

FString * __thiscall
FLazyObjectProperty::GetCPPMacroType
          (FLazyObjectProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = *(FName *)(*(longlong *)&this->field_0x70 + 0x18);
  ::FName::ToString(&local_res8,&local_18);
  (**(code **)(**(longlong **)&this->field_0x70 + 0x318))();
  ::FString::PrintfImpl(&local_28,L"TLazyObjectPtr<%s%s>");
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
  ::FString::FString(__return_storage_ptr__,L"LAZYOBJECT");
  return __return_storage_ptr__;
}

// GetCPPType @ 14217aa30

FString * __thiscall
FLazyObjectProperty::GetCPPType
          (FLazyObjectProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FName local_res8;
  FString local_18;
  
  if ((*(longlong *)&this->field_0x70 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyLazyObjectPtr.cpp"
                         ,0x21,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  local_res8 = *(FName *)(*(longlong *)&this->field_0x70 + 0x18);
  ::FName::ToString(&local_res8,&local_18);
  (**(code **)(**(longlong **)&this->field_0x70 + 0x318))();
  ::FString::PrintfImpl(__return_storage_ptr__,L"TLazyObjectPtr<%s%s>");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFieldSize @ 14217bc60

ulong64 __thiscall FLazyObjectProperty::GetFieldSize(FLazyObjectProperty *this)

{
  return 0x78;
}

// GetID @ 14217be00

FName __thiscall FLazyObjectProperty::GetID(FLazyObjectProperty *this)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  FName in_RDX;
  undefined1 local_res10 [24];
  
  FVar1 = FNameEntryId::FromValidEName((EName)local_res10);
  *(undefined4 *)in_RDX = *(undefined4 *)CONCAT44(extraout_var,FVar1.Value);
  *(undefined4 *)((longlong)in_RDX + 4) = 0;
  return in_RDX;
}

// GetObjectPropertyValue @ 14217c9b0

UObject * __thiscall
FLazyObjectProperty::GetObjectPropertyValue(FLazyObjectProperty *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(param_1);
  return pUVar1;
}

// GetObjectPropertyValue_InContainer @ 14217c9e0

UObject * __thiscall
FLazyObjectProperty::GetObjectPropertyValue_InContainer
          (FLazyObjectProperty *this,void *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UObject *pUVar5;
  TPersistentObjectPtr<FUniqueObjectGuid> local_28;
  
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
    local_28.WeakPtr.ObjectIndex = 0;
    local_28.WeakPtr.ObjectSerialNumber = 0;
    local_28.ObjectID.Guid.C = 0;
    local_28.ObjectID.Guid.D = 0;
    local_28.ObjectID.Guid.A = 0;
    local_28.ObjectID.Guid.B = 0;
    FProperty::GetValue_InContainer((FProperty *)this,param_1,&local_28);
    pUVar5 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(&local_28);
  }
  return pUVar5;
}

// GetObjectPtrPropertyValue @ 14217ccd0

TObjectPtr<UObject> __thiscall
FLazyObjectProperty::GetObjectPtrPropertyValue(FLazyObjectProperty *this,void *param_1)

{
  UObject *pUVar1;
  TPersistentObjectPtr<FUniqueObjectGuid> *in_R8;
  
  pUVar1 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(in_R8);
  *(UObject **)param_1 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// GetObjectPtrPropertyValue_InContainer @ 14217cd90

TObjectPtr<UObject> __thiscall
FLazyObjectProperty::GetObjectPtrPropertyValue_InContainer
          (FLazyObjectProperty *this,void *param_1,int param_2)

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
  TPersistentObjectPtr<FUniqueObjectGuid> local_38;
  
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
    local_38.WeakPtr.ObjectIndex = 0;
    local_38.WeakPtr.ObjectSerialNumber = 0;
    local_38.ObjectID.Guid.C = 0;
    local_38.ObjectID.Guid.D = 0;
    local_38.ObjectID.Guid.A = 0;
    local_38.ObjectID.Guid.B = 0;
    FProperty::GetValue_InContainer((FProperty *)this,pvVar7,&local_38);
    pUVar6 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(&local_38);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  *(UObject **)param_1 = pUVar6;
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// GetValueTypeHashInternal @ 14217de30

uint __thiscall
FLazyObjectProperty::GetValueTypeHashInternal(FLazyObjectProperty *this,void *param_1)

{
  ulong64 uVar1;
  
  uVar1 = CityHash64((char *)((longlong)param_1 + 8),0x10);
  return (uint)uVar1;
}

// Identical @ 14217e460

bool __thiscall
FLazyObjectProperty::Identical(FLazyObjectProperty *this,void *param_1,void *param_2,uint param_3)

{
  longlong lVar1;
  UClass *this_00;
  FName FVar2;
  bool bVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  TPersistentObjectPtr<FUniqueObjectGuid> local_68;
  TPersistentObjectPtr<FUniqueObjectGuid> local_50 [3];
  
  if (param_1 == (void *)0x0) {
    local_68.ObjectID.Guid.C = 0;
    local_68.ObjectID.Guid.D = 0;
    local_68.WeakPtr.ObjectIndex = 0;
    local_68.WeakPtr.ObjectSerialNumber = 0;
    local_68.ObjectID.Guid.A = 0;
    local_68.ObjectID.Guid.B = 0;
  }
  else {
    local_68.WeakPtr.ObjectIndex = *(int *)param_1;
    local_68.WeakPtr.ObjectSerialNumber = *(int *)((longlong)param_1 + 4);
    local_68.ObjectID.Guid.A = *(uint *)((longlong)param_1 + 8);
    local_68.ObjectID.Guid.B = *(uint *)((longlong)param_1 + 0xc);
    local_68.ObjectID.Guid._8_8_ = *(undefined8 *)((longlong)param_1 + 0x10);
  }
  if (param_2 == (void *)0x0) {
    local_50[0].ObjectID.Guid.C = 0;
    local_50[0].ObjectID.Guid.D = 0;
    local_50[0].WeakPtr.ObjectIndex = 0;
    local_50[0].WeakPtr.ObjectSerialNumber = 0;
    local_50[0].ObjectID.Guid.A = 0;
    local_50[0].ObjectID.Guid.B = 0;
  }
  else {
    local_50[0].WeakPtr.ObjectIndex = *(int *)param_2;
    local_50[0].WeakPtr.ObjectSerialNumber = *(int *)((longlong)param_2 + 4);
    local_50[0].ObjectID.Guid.A = *(uint *)((longlong)param_2 + 8);
    local_50[0].ObjectID.Guid.B = *(uint *)((longlong)param_2 + 0xc);
    local_50[0].ObjectID.Guid._8_8_ = *(undefined8 *)((longlong)param_2 + 0x10);
  }
  if ((param_3 >> 0x16 & 1) == 0) {
    uVar7 = local_68.ObjectID.Guid.C ^ (uint)local_50[0].ObjectID.Guid._8_8_;
    uVar6 = SUB84(local_50[0].ObjectID.Guid._8_8_,4) ^ local_68.ObjectID.Guid.D;
    bVar8 = (((local_50[0].ObjectID.Guid.B ^ local_68.ObjectID.Guid.B) == 0 && uVar6 == 0) &&
            uVar7 == 0) && (local_68.ObjectID.Guid.A ^ local_50[0].ObjectID.Guid.A) == 0;
    if ((((local_50[0].ObjectID.Guid.B ^ local_68.ObjectID.Guid.B) == 0 && uVar6 == 0) && uVar7 == 0
        ) && (local_68.ObjectID.Guid.A ^ local_50[0].ObjectID.Guid.A) == 0) {
      return bVar8;
    }
  }
  else {
    bVar8 = false;
  }
  local_50[1].ObjectID.Guid._8_8_ = local_50[0].ObjectID.Guid._8_8_;
  local_50[2].ObjectID.Guid._8_8_ = local_68.ObjectID.Guid._8_8_;
  pUVar4 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(&local_68);
  if ((pUVar4 != (UObject *)0x0) &&
     (pUVar4 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(local_50), pUVar4 != (UObject *)0x0)) {
    pUVar4 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(&local_68);
    pUVar5 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(local_50);
    if (*(longlong *)&pUVar4->field_0x10 == *(longlong *)&pUVar5->field_0x10) {
      bVar9 = (param_3 & 0x100) != 0;
      if (((param_3 >> 9 & 1) != 0) && ((param_3 & 0x100) == 0)) {
        pUVar4 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(&local_68);
        bVar9 = UObjectBaseUtility::IsTemplate
                          ((UObjectBaseUtility *)pUVar4,RF_ArchetypeObject|RF_ClassDefaultObject);
        pUVar4 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(local_50);
        bVar3 = UObjectBaseUtility::IsTemplate
                          ((UObjectBaseUtility *)pUVar4,RF_ArchetypeObject|RF_ClassDefaultObject);
        bVar9 = bVar3 != bVar9;
      }
      if (bVar9) {
        pUVar4 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(local_50);
        lVar1 = *(longlong *)&pUVar4->field_0x18;
        pUVar4 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(&local_68);
        if (*(longlong *)&pUVar4->field_0x18 == lVar1) {
          pUVar4 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(&local_68);
          this_00 = *(UClass **)&pUVar4->field_0x10;
          pUVar4 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(&local_68);
          FVar2.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
          FVar2.Number = *(uint *)&pUVar4->field_0x1c;
          pUVar4 = UClass::GetDefaultSubobjectByName(this_00,FVar2);
          if (pUVar4 != (UObject *)0x0) {
            pUVar4 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(local_50);
            pUVar5 = TPersistentObjectPtr<FUniqueObjectGuid>::Get(&local_68);
            bVar8 = AreInstancedObjectsIdentical(pUVar5,pUVar4,param_3);
          }
        }
      }
    }
  }
  return bVar8;
}

// SerializeItem @ 14218b820

void __thiscall
FLazyObjectProperty::SerializeItem
          (FLazyObjectProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *pFVar1;
  code *pcVar2;
  FArchive *pFVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  FSlotBase local_res10;
  UObject *local_18 [2];
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if ((pFVar3->field_0x2b & 3) != 1) {
    pUVar4 = (UObject *)(**(code **)(*(longlong *)this + 0x1f8))(this,param_2);
    pFVar1 = (local_res10.StructuredArchive)->Formatter->Inner;
    (**(code **)(*(longlong *)pFVar1 + 0x158))(pFVar1,param_2);
    if ((((pFVar3->field_0x28 & 1) != 0) || ((pFVar3->field_0x2b & 2) != 0)) &&
       (pUVar5 = (UObject *)(**(code **)(*(longlong *)this + 0x1f8))(this,param_2), pUVar4 != pUVar5
       )) {
      pcVar2 = *(code **)(*(longlong *)this + 0x218);
      local_18[0] = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      (*pcVar2)(this,param_2,local_18,0);
    }
  }
  return;
}

// SetObjectPropertyValueUnchecked @ 1421922e0

void __thiscall
FLazyObjectProperty::SetObjectPropertyValueUnchecked
          (FLazyObjectProperty *this,void *param_1,UObject *param_2)

{
  UObject *local_res10 [3];
  TPersistentObjectPtr<FUniqueObjectGuid> local_28;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  local_28.WeakPtr.ObjectIndex = 0;
  local_28.WeakPtr.ObjectSerialNumber = 0;
  local_28.ObjectID.Guid.C = 0;
  local_28.ObjectID.Guid.D = 0;
  local_28.ObjectID.Guid.A = 0;
  local_28.ObjectID.Guid.B = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  local_res10[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  TPersistentObjectPtr<FUniqueObjectGuid>::operator=(&local_28,(FObjectPtr)local_res10);
  *(FWeakObjectPtr *)param_1 = local_28.WeakPtr;
  *(undefined8 *)((longlong)param_1 + 8) = local_28.ObjectID.Guid._0_8_;
  *(undefined8 *)((longlong)param_1 + 0x10) = local_28.ObjectID.Guid._8_8_;
  return;
}

// SetObjectPropertyValueUnchecked_InContainer @ 1421924b0

void __thiscall
FLazyObjectProperty::SetObjectPropertyValueUnchecked_InContainer
          (FLazyObjectProperty *this,void *param_1,UObject *param_2,int param_3)

{
  UObject *local_res18 [2];
  
  local_res18[0] = param_2;
  FObjectPropertyBase::SetWrappedUObjectPtrValues<FLazyObjectPtr,UObject_*>
            ((FObjectPropertyBase *)this,param_1,InContainer,local_res18,param_3,1);
  return;
}

// SetObjectPtrPropertyValueUnchecked @ 142192660

void __thiscall
FLazyObjectProperty::SetObjectPtrPropertyValueUnchecked
          (FLazyObjectProperty *this,void *param_1,TObjectPtr<UObject> param_2)

{
  UObject *pUVar1;
  UObject *local_res10 [3];
  TPersistentObjectPtr<FUniqueObjectGuid> local_28;
  
  pUVar1 = *(UObject **)param_2.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  local_28.WeakPtr.ObjectIndex = 0;
  local_28.WeakPtr.ObjectSerialNumber = 0;
  local_28.ObjectID.Guid.C = 0;
  local_28.ObjectID.Guid.D = 0;
  local_28.ObjectID.Guid.A = 0;
  local_28.ObjectID.Guid.B = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_res10[0] = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  TPersistentObjectPtr<FUniqueObjectGuid>::operator=(&local_28,(FObjectPtr)local_res10);
  *(FWeakObjectPtr *)param_1 = local_28.WeakPtr;
  *(undefined8 *)((longlong)param_1 + 8) = local_28.ObjectID.Guid._0_8_;
  *(undefined8 *)((longlong)param_1 + 0x10) = local_28.ObjectID.Guid._8_8_;
  return;
}

// SetObjectPtrPropertyValueUnchecked_InContainer @ 142192850

void __thiscall
FLazyObjectProperty::SetObjectPtrPropertyValueUnchecked_InContainer
          (FLazyObjectProperty *this,void *param_1,TObjectPtr<UObject> param_2,int param_3)

{
  FObjectPropertyBase::SetWrappedUObjectPtrValues<FLazyObjectPtr,TObjectPtr<UObject>_>
            ((FObjectPropertyBase *)this,param_1,InContainer,
             (TObjectPtr<UObject> *)param_2.field0_0x0,param_3,1);
  return;
}

// StaticClass @ 142193720

FFieldClass * __cdecl FLazyObjectProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FObjectPropertyBase::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FLazyObjectProperty",0x10000000,
                 CASTCLASS_FLazyObjectProperty|CASTCLASS_FObjectPropertyBase|CASTCLASS_FProperty|
                 CASTCLASS_UField,pFVar1,Construct);
      atexit(`FLazyObjectProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// operator_new @ 142259bf0

void * __cdecl FLazyObjectProperty::operator_new(ulong64 param_1)

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
    this->_padding_ = (longlong)&___7FLazyObjectProperty__6B_;
  }
  return this;
}

