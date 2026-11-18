// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 14

// GetFieldSize @ 141f81cd0

ulong64 __thiscall FSoftClassProperty::GetFieldSize(FSoftClassProperty *this)

{
  return 0x80;
}

// FSoftClassProperty @ 1421624e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FSoftClassProperty * __thiscall
FSoftClassProperty::FSoftClassProperty
          (FSoftClassProperty *this,FFieldVariant param_1,FSoftClassPropertyParams *param_2)

{
  ulonglong uVar1;
  UClass *pUVar2;
  ulonglong local_res8;
  
  pUVar2 = Z_Construct_UClass_UClass_NoRegister();
  uVar1 = *(ulonglong *)param_1.Container;
  local_res8 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_142162567;
      goto LAB_142162580;
    }
LAB_1421625a4:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_1421625c3;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_142162567:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_142162580:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_1421625a4;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1421625a4;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_1421625c3:
  FObjectPropertyBase::FObjectPropertyBase
            ((FObjectPropertyBase *)this,(FFieldVariant)&local_res8,
             (FObjectPropertyParamsWithoutClass *)param_2,CPF_HasGetValueTypeHash);
  this->_padding_ = (longlong)&___7__TProperty_UFSoftObjectPtr__VFObjectPropertyBase____6B_;
  FProperty::SetElementSize((FProperty *)this,0x28);
  this->_padding_ = (longlong)&___7__TFObjectPropertyBase_UFSoftObjectPtr____6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  pUVar2 = (UClass *)0x0;
  this->_padding_ = (longlong)&___7FSoftClassProperty__6B_;
  (this->MetaClass).field0_0x0.DebugPtr = (UClass *)0x0;
  if (param_2->MetaClassFunc != (_func___cdecl_UClass_ptr *)0x0) {
    pUVar2 = (*param_2->MetaClassFunc)();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->MetaClass).field0_0x0.DebugPtr = pUVar2;
  return this;
}

// FSoftClassProperty @ 142162680

FSoftClassProperty * __thiscall
FSoftClassProperty::FSoftClassProperty
          (FSoftClassProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FSoftObjectProperty::FSoftObjectProperty
            ((FSoftObjectProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  this->_padding_ = (longlong)&___7FSoftClassProperty__6B_;
  (this->MetaClass).field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// AddReferencedObjects @ 142166ce0

void __thiscall
FSoftClassProperty::AddReferencedObjects(FSoftClassProperty *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->MetaClass,0,0);
  FObjectPropertyBase::AddReferencedObjects((FObjectPropertyBase *)this,param_1);
  return;
}

// BeginDestroy @ 1421680e0

void __thiscall FSoftClassProperty::BeginDestroy(FSoftClassProperty *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FFieldObjectUnion local_res8;
  
  if ((this->MetaClass).field0_0x0.DebugPtr != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->MetaClass,pUVar3);
    if ((bVar2) && (pUVar3 = (this->MetaClass).field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
      local_res8 = (FFieldObjectUnion)this;
      if (((ulonglong)this & 1) != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsUObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x180,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::Remove
                ((TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator> *)
                 &pUVar3[1].bCooked,(FFieldVariant *)&local_res8);
    }
  }
  FObjectPropertyBase::BeginDestroy((FObjectPropertyBase *)this);
  return;
}

// Construct @ 14216c4f0

FField * __cdecl
FSoftClassProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  FSoftObjectProperty *this;
  FFieldClass *pFVar1;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x80,0);
  if (this == (FSoftObjectProperty *)0x0) {
    this = (FSoftObjectProperty *)0x0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pFVar1 = FSoftObjectProperty::StaticClass();
        FFieldClass::FFieldClass
                  (&::StaticFieldClass,L"FSoftClassProperty",0x200000000,
                   CASTCLASS_FSoftClassProperty|CASTCLASS_FSoftObjectProperty|
                   CASTCLASS_FObjectPropertyBase|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,
                   Construct);
        atexit(`FSoftClassProperty::StaticClass'::__l2::
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
    *(undefined8 *)&this->field_0x70 = 0;
    *(undefined ***)this = &___7FSoftClassProperty__6B_;
    *(undefined8 *)(this + 1) = 0;
    local_res20 = (param_1->Container).Unknown;
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    FSoftObjectProperty::FSoftObjectProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
    *(undefined ***)this = &___7FSoftClassProperty__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return (FField *)this;
}

// GetCPPMacroType @ 142179ac0

FString * __thiscall
FSoftClassProperty::GetCPPMacroType
          (FSoftClassProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)((this->MetaClass).field0_0x0.DebugPtr)->_padding_;
  ::FName::ToString(&local_res8,&local_18);
  (**(code **)(((this->MetaClass).field0_0x0.DebugPtr)->_padding_ + 0x318))();
  ::FString::PrintfImpl(&local_28,L"TSoftClassPtr<%s%s> ");
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
  ::FString::FString(__return_storage_ptr__,L"SOFTCLASS");
  return __return_storage_ptr__;
}

// GetCPPType @ 14217b390

FString * __thiscall
FSoftClassProperty::GetCPPType
          (FSoftClassProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FName local_res8;
  FString local_18;
  
  if (((this->MetaClass).field0_0x0.DebugPtr == (UClass *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MetaClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySoftClassPtr.cpp"
                         ,0x39,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  local_res8 = (FName)((this->MetaClass).field0_0x0.DebugPtr)->_padding_;
  ::FName::ToString(&local_res8,&local_18);
  (**(code **)(((this->MetaClass).field0_0x0.DebugPtr)->_padding_ + 0x318))();
  ::FString::PrintfImpl(__return_storage_ptr__,L"TSoftClassPtr<%s%s> ");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PostDuplicate @ 142187510

void __thiscall FSoftClassProperty::PostDuplicate(FSoftClassProperty *this,FField *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1[2].Next != (FField *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1[2].Next);
  }
  (this->MetaClass).field0_0x0 = (TObjectPtr<UClass>_u_0)param_1[2].Next;
  FObjectPropertyBase::PostDuplicate((FObjectPropertyBase *)this,param_1);
  return;
}

// SameType @ 142189ae0

bool __thiscall FSoftClassProperty::SameType(FSoftClassProperty *this,FProperty *param_1)

{
  bool bVar1;
  
  bVar1 = FObjectPropertyBase::SameType((FObjectPropertyBase *)this,param_1);
  if ((bVar1) && ((this->MetaClass).field0_0x0.DebugPtr == (UClass *)param_1[1]._padding_)) {
    return true;
  }
  return false;
}

// Serialize @ 14218a7f0

void __thiscall FSoftClassProperty::Serialize(FSoftClassProperty *this,FArchive *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UStruct *this_00;
  UPackage *pUVar6;
  UPackage *pUVar7;
  FFieldVariant local_res8;
  FSoftClassProperty *local_res10;
  
  FObjectPropertyBase::Serialize((FObjectPropertyBase *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->MetaClass);
  if (((param_1->field_0x28 & 1) != 0) || ((param_1->field_0x2b & 1) != 0)) {
    if ((this->MetaClass).field0_0x0.DebugPtr == (UClass *)0x0) goto LAB_14218a8a0;
    pUVar5 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->MetaClass,pUVar5);
    if ((bVar4) && (pUVar5 = (this->MetaClass).field0_0x0.DebugPtr, pUVar5 != (UClass *)0x0)) {
      local_res10 = this;
      if ((((ulonglong)this & 1) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsUObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x180,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::
      Emplace<FFieldVariant_const_&>
                ((TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator> *)
                 &pUVar5[1].bCooked,&local_res8,(bool *)&local_res10);
    }
  }
  if ((this->MetaClass).field0_0x0.DebugPtr != (UClass *)0x0) {
    return;
  }
LAB_14218a8a0:
  this_00 = FField::GetOwnerStruct((FField *)this);
  if (this_00 != (UStruct *)0x0) {
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) &&
        (uVar2 = *(uint *)((longlong)&this_00[1]._padding_ + 4), (uVar2 >> 7 & 1) != 0)) &&
       (-1 < (int)uVar2)) {
      pUVar6 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
      pUVar7 = GetTransientPackage();
      if ((pUVar6 != pUVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySoftClassPtr.cpp"
                             ,0x5a,
                             L"Class property tried to serialize a missing class.  Did you remove a native class and not fully recompile?"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// SetMetaClass @ 142191b00

void __thiscall FSoftClassProperty::SetMetaClass(FSoftClassProperty *this,UClass *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FFieldVariant local_res8;
  FSoftClassProperty *local_res10;
  FFieldObjectUnion local_res18 [2];
  
  if (param_1 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      local_res10 = this;
      if (((ulonglong)this & 1) != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsUObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x180,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::
      Emplace<FFieldVariant_const_&>
                ((TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator> *)
                 &param_1[1].bCooked,&local_res8,(bool *)&local_res10);
    }
  }
  if ((this->MetaClass).field0_0x0.DebugPtr != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->MetaClass,pUVar4);
    if ((bVar3) && (pUVar4 = (this->MetaClass).field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) {
      local_res18[0] = (FFieldObjectUnion)this;
      if (((ulonglong)this & 1) != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsUObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x180,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator>::Remove
                ((TSet<FFieldVariant,DefaultKeyFuncs<FFieldVariant,0>,FDefaultSetAllocator> *)
                 &pUVar4[1].bCooked,(FFieldVariant *)local_res18);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->MetaClass).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticClass @ 142193e50

FFieldClass * __cdecl FSoftClassProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FSoftObjectProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FSoftClassProperty",0x200000000,
                 CASTCLASS_FSoftClassProperty|CASTCLASS_FSoftObjectProperty|
                 CASTCLASS_FObjectPropertyBase|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct
                );
      atexit(`FSoftClassProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// operator_new @ 142259dd0

void * __cdecl FSoftClassProperty::operator_new(ulong64 param_1)

{
  FField *this;
  FFieldClass *pFVar1;
  
  this = FMemory::Malloc(param_1,0);
  if (this != (FField *)0x0) {
    pFVar1 = StaticClass();
    FField::FField(this,EC_InternalUseOnlyConstructor,pFVar1);
    this->_padding_ = (longlong)&___7FSoftClassProperty__6B_;
    this[1].Next = (FField *)0x0;
    this[1].NamePrivate.ComparisonIndex = 0;
    this[1].NamePrivate.Number = 0;
    *(undefined8 *)&this[1].FlagsPrivate = 0;
    this[2]._padding_ = 0;
    this[2].ClassPrivate = (FFieldClass *)0x0;
    this[2].Owner.Container.Field = (FField *)0x0;
    this[2].Next = (FField *)0x0;
  }
  return this;
}

