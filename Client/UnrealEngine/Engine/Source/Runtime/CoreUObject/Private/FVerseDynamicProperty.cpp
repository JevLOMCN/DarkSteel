// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 16

// GetFieldSize @ 14226f280

ulong64 __thiscall FVerseDynamicProperty::GetFieldSize(FVerseDynamicProperty *this)

{
  return 0x70;
}

// HasIntrusiveUnsetOptionalState @ 142272b20

bool __thiscall FVerseDynamicProperty::HasIntrusiveUnsetOptionalState(FVerseDynamicProperty *this)

{
  return false;
}

// FVerseDynamicProperty @ 142294f00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FVerseDynamicProperty * __thiscall
FVerseDynamicProperty::FVerseDynamicProperty
          (FVerseDynamicProperty *this,FFieldVariant param_1,FGenericPropertyParams *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             CPF_HasGetValueTypeHash);
  *(undefined ***)this = &___7__TProperty_UFDynamicallyTypedValue_UE__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x10);
  *(undefined ***)this = &___7FVerseDynamicProperty__6B_;
  return this;
}

// FVerseDynamicProperty @ 142294fb0

FVerseDynamicProperty * __thiscall
FVerseDynamicProperty::FVerseDynamicProperty
          (FVerseDynamicProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7__TProperty_UFDynamicallyTypedValue_UE__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x10);
  *(undefined ***)this = &___7FVerseDynamicProperty__6B_;
  return this;
}

// operator_new @ 1422961e0

void * __cdecl FVerseDynamicProperty::operator_new(ulong64 param_1)

{
  FField *this;
  FFieldClass *pFVar1;
  
  this = FMemory::Malloc(param_1,0);
  if (this != (FField *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pFVar1 = FProperty::StaticClass();
        FFieldClass::FFieldClass
                  (&::StaticFieldClass,L"FVerseDynamicProperty",0,
                   CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct);
        atexit(`FVerseDynamicProperty::StaticClass'::__l2::
               _dynamic_atexit_destructor_for__StaticFieldClass__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    FField::FField(this,EC_InternalUseOnlyConstructor,&::StaticFieldClass);
    this[1].Next = (FField *)0x0;
    this[1].NamePrivate.ComparisonIndex = 0;
    this[1].NamePrivate.Number = 0;
    *(undefined8 *)&this[1].FlagsPrivate = 0;
    this[2]._padding_ = 0;
    this[2].ClassPrivate = (FFieldClass *)0x0;
    this->_padding_ = (longlong)&___7FVerseDynamicProperty__6B_;
  }
  return this;
}

// Construct @ 142298ef0

FField * __cdecl
FVerseDynamicProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  FProperty *this;
  ulonglong local_res20;
  
  this = operator_new(0x70);
  if (this != (FProperty *)0x0) {
    uVar1 = (param_1->Container).Unknown;
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    local_res20 = uVar1;
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
    this->_padding_ = (longlong)&___7__TProperty_UFDynamicallyTypedValue_UE__VFProperty____6B_;
    FProperty::SetElementSize(this,0x10);
    this->_padding_ = (longlong)&___7FVerseDynamicProperty__6B_;
    return (FField *)this;
  }
  return (FField *)0x0;
}

// ContainsObjectReference @ 142299140

bool __thiscall
FVerseDynamicProperty::ContainsObjectReference
          (FVerseDynamicProperty *this,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          EPropertyObjectReferenceType param_2)

{
  return true;
}

// EmitReferenceInfo @ 142299f50

void __thiscall
FVerseDynamicProperty::EmitReferenceInfo
          (FVerseDynamicProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
  int iVar1;
  FString *pFVar2;
  FName *pFVar3;
  int iVar4;
  uint uVar5;
  FName local_res8;
  FString local_48;
  undefined8 local_38;
  FMemberDeclaration local_28;
  
  uVar5 = *(int *)&this->field_0x44 + param_2;
  pFVar2 = UE::GC::FPropertyStack::GetPropertyPath(param_4,&local_48);
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(&local_res8,iVar4,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,
                          FNAME_Add);
  local_28.DebugName = *pFVar3;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.ArrayMax = CONCAT31(local_48.Data.ArrayMax._1_3_,0xc);
  local_28._12_4_ = local_48.Data.ArrayMax;
  local_28.Offset = uVar5;
  local_38 = 0;
  local_28.ExtraWord.ObjectARO = (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_28.DebugName;
  local_48.Data.ArrayNum = uVar5;
  UE::GC::FSchemaBuilder::Add(param_1,&local_28);
  return;
}

// ExportText_Internal @ 14229a460

void __thiscall
FVerseDynamicProperty::ExportText_Internal
          (FVerseDynamicProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  FRuntimeTypeDynamic *pFVar1;
  
  if (param_3 == Container) {
    param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
  }
  pFVar1 = UE::Verse::FRuntimeTypeDynamic::Get();
  (**(code **)(*(longlong *)pFVar1 + 0x58))(pFVar1,param_1,param_2,param_4,param_5,param_7);
  return;
}

// GetCPPMacroType @ 14229d270

FString * __thiscall
FVerseDynamicProperty::GetCPPMacroType
          (FVerseDynamicProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"FDYNAMICALLYTYPEDVALUE");
  return __return_storage_ptr__;
}

// GetValueTypeHashInternal @ 14229eb20

uint __thiscall
FVerseDynamicProperty::GetValueTypeHashInternal(FVerseDynamicProperty *this,void *param_1)

{
  uint uVar1;
  FRuntimeTypeDynamic *pFVar2;
  
  pFVar2 = UE::Verse::FRuntimeTypeDynamic::Get();
                    /* WARNING: Could not recover jumptable at 0x00014229eb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)pFVar2 + 0x30))
                    (pFVar2,param_1,*(code **)(*(longlong *)pFVar2 + 0x30));
  return uVar1;
}

// Identical @ 14229fdf0

bool __thiscall
FVerseDynamicProperty::Identical
          (FVerseDynamicProperty *this,void *param_1,void *param_2,uint param_3)

{
  char cVar1;
  FRuntimeTypeDynamic *pFVar2;
  
  if (param_2 != (void *)0x0) {
    pFVar2 = UE::Verse::FRuntimeTypeDynamic::Get();
    cVar1 = (**(code **)(*(longlong *)pFVar2 + 0x38))(pFVar2,param_1,param_2);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// ImportText_Internal @ 1422a0280

wchar_t * __thiscall
FVerseDynamicProperty::ImportText_Internal
          (FVerseDynamicProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  char cVar1;
  FRuntimeTypeDynamic *pFVar2;
  wchar_t *local_res10 [3];
  
  if (param_3 == Container) {
    param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
  }
  local_res10[0] = param_1;
  pFVar2 = UE::Verse::FRuntimeTypeDynamic::Get();
  cVar1 = (**(code **)(*(longlong *)pFVar2 + 0x60))(pFVar2,local_res10,param_2,param_4,param_6);
  if (cVar1 != '\0') {
    param_1 = local_res10[0];
  }
  return param_1;
}

// InstanceSubobjects @ 1422a0a20

void __thiscall
FVerseDynamicProperty::InstanceSubobjects
          (FVerseDynamicProperty *this,void *param_1,void *param_2,TNotNull<UObject_*> param_3,
          FObjectInstancingGraph *param_4)

{
  FRuntimeTypeDynamic *pFVar1;
  
  pFVar1 = UE::Verse::FRuntimeTypeDynamic::Get();
                    /* WARNING: Could not recover jumptable at 0x0001422a0a5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pFVar1 + 0x68))(pFVar1,param_1,param_2,param_3.Val);
  return;
}

// SerializeItem @ 1422a64a0

void __thiscall
FVerseDynamicProperty::SerializeItem
          (FVerseDynamicProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FArchive *pFVar1;
  FRuntimeTypeDynamic *pFVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  if ((pFVar1->field_0x28 & 1) != 0) {
    pFVar2 = UE::Verse::FRuntimeTypeDynamic::Get();
    (**(code **)(*(longlong *)pFVar2 + 0x20))(pFVar2,param_2);
  }
  pFVar2 = UE::Verse::FRuntimeTypeDynamic::Get();
  (**(code **)(*(longlong *)pFVar2 + 0x28))(pFVar2,local_res10[0].StructuredArchive,param_2,param_3)
  ;
  return;
}

// StaticClass @ 1422a77d0

FFieldClass * __cdecl FVerseDynamicProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FVerseDynamicProperty",0,CASTCLASS_FProperty|CASTCLASS_UField
                 ,pFVar1,Construct);
      atexit(`FVerseDynamicProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

