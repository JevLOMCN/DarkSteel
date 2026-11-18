// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 89

// ContainerUObjectPtrToValuePtrInternal @ 141e93430

void * __thiscall
FProperty::ContainerUObjectPtrToValuePtrInternal(FProperty *this,UObject *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  UClass *pUVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  FName local_res8;
  FName local_res10 [2];
  FName local_res20;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if (((param_2 < 0) || (this->ArrayDim <= param_2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2eb,L"Array index out of bounds: %i from an array of size %i"), bVar2))
  {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  if ((param_1 == (UObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2ec,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  bVar2 = UObjectBase::IsValidLowLevel((UObjectBase *)param_1);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("((UObject*)ContainerPtr)->IsValidLowLevel()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2f0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  if ((*(longlong *)&param_1->field_0x10 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("((UObject*)ContainerPtr)->GetClass() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2f1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  pUVar4 = Z_Construct_UClass_UClass_NoRegister();
  bVar2 = FFieldVariant::IsA((FFieldVariant *)&this->_padding_,pUVar4);
  if (((!bVar2) || ((this->_padding_ & 0xfffffffffffffffeU) == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetOwner<UClass>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2f2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  pUVar4 = Z_Construct_UClass_UClass_NoRegister();
  bVar2 = FFieldVariant::IsA((FFieldVariant *)&this->_padding_,pUVar4);
  uVar6 = 0;
  uVar5 = uVar6;
  if (bVar2) {
    uVar5 = this->_padding_ & 0xfffffffffffffffe;
  }
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < *(int *)(uVar5 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) +
       (longlong)*(int *)(uVar5 + 0x38) * 8) != uVar5 + 0x30)) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&this->_padding_,pUVar4);
    if (bVar2) {
      uVar6 = this->_padding_ & 0xfffffffffffffffe;
    }
    local_res8 = *(FName *)(uVar6 + 0x18);
    ::FName::ToString(&local_res8,&local_50);
    bVar2 = IsThisNotNull(this,"FField::GetName");
    if (bVar2) {
      ::FName::ToString((FName *)&this->_padding_,&local_80);
    }
    else {
      ::FString::FString(&local_80,L"None");
    }
    local_res10[0] = *(FName *)(*(longlong *)&param_1->field_0x10 + 0x18);
    ::FName::ToString(local_res10,&local_60);
    local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res20.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res20,&local_70);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("((UObject*)ContainerPtr)->IsA(GetOwner<UClass>())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2f9,
                       L"\'%s\' is of class \'%s\' however property \'%s\' belongs to class \'%s\'")
    ;
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  return &param_1->field_0x0 +
         (longlong)this->Offset_Internal + (longlong)this->ElementSize * (longlong)param_2;
}

// CallGetter @ 141f71960

void __thiscall FProperty::CallGetter(FProperty *this,void *param_1,void *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FString local_18;
  
  cVar2 = (**(code **)(this->_padding_ + 0x78))();
  if (cVar2 == '\0') {
    FField::GetFullName((FField *)this,&local_18);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasGetter()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x17a,L"Calling a getter on %s but it doesn\'t have one");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// CallSetter @ 141f719e0

void __thiscall FProperty::CallSetter(FProperty *this,void *param_1,void *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FString local_18;
  
  cVar2 = (**(code **)(this->_padding_ + 0x70))();
  if (cVar2 == '\0') {
    FField::GetFullName((FField *)this,&local_18);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasSetter()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x171,L"Calling a setter on %s but it doesn\'t have one");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ExportText_Internal @ 141f7a970

void __thiscall
FProperty::ExportText_Internal
          (FProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,void *param_4
          ,UObject *param_5,int param_6,UObject *param_7)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
             ,0x2ce,L"Pure virtual not implemented (%s)");
  return;
}

// GetCPPType @ 141f81280

FString * __thiscall
FProperty::GetCPPType(FProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
             ,0x153,L"Pure virtual not implemented (%s)");
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetFieldSize @ 141f81cb0

ulong64 __thiscall FProperty::GetFieldSize(FProperty *this)

{
  return 0x70;
}

// GetValue_InContainer @ 141f8b150

void __thiscall FProperty::GetValue_InContainer(FProperty *this,void *param_1,void *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  void *_Src;
  
  cVar2 = (**(code **)(this->_padding_ + 0x78))();
  if (cVar2 == '\0') {
    if (this->ArrayDim < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_1 == (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    _Src = (void *)((longlong)this->Offset_Internal + (longlong)param_1);
    if (param_2 != _Src) {
      if (((uint)(int)this->PropertyFlags >> 0x1e & 1) != 0) {
        memcpy(param_2,_Src,(longlong)this->ElementSize * (longlong)this->ArrayDim);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000141f8b235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0xf0))(this,param_2,_Src,this->ArrayDim);
      return;
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x90))(this,param_1,param_2);
  }
  return;
}

// HasGetter @ 141f8b4d0

bool __thiscall FProperty::HasGetter(FProperty *this)

{
  return false;
}

// HasIntrusiveUnsetOptionalState @ 141f8b600

bool __thiscall FProperty::HasIntrusiveUnsetOptionalState(FProperty *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
             ,0x537,L"Pure virtual not implemented (%s)");
  return false;
}

// HasSetter @ 141f8b760

bool __thiscall FProperty::HasSetter(FProperty *this)

{
  return false;
}

// HasSetterOrGetter @ 141f8b770

bool __thiscall FProperty::HasSetterOrGetter(FProperty *this)

{
  return false;
}

// Identical @ 141f8c720

bool __thiscall FProperty::Identical(FProperty *this,void *param_1,void *param_2,uint param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
             ,0x203,L"Pure virtual not implemented (%s)");
  return false;
}

// ImportText_Internal @ 141f8d770

wchar_t * __thiscall
FProperty::ImportText_Internal
          (FProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
             ,0x2cf,L"Pure virtual not implemented (%s)");
  return (wchar_t *)0x0;
}

// InitializeValue_InContainer @ 141f8ed30

void __thiscall FProperty::InitializeValue_InContainer(FProperty *this,void *param_1)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  
  if (((uint)(int)this->PropertyFlags >> 9 & 1) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x150);
    if (this->ArrayDim < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar3) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    if (param_1 == (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar3) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000141f8ee6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(this,(longlong)this->Offset_Internal + (longlong)param_1);
    return;
  }
  iVar1 = this->ArrayDim;
  iVar2 = this->ElementSize;
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar3) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  if (param_1 == (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar3) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  memset((void *)((longlong)this->Offset_Internal + (longlong)param_1),0,
         (longlong)iVar2 * (longlong)iVar1);
  return;
}

// SerializeBinProperty @ 141f9f170

void __thiscall
FProperty::SerializeBinProperty
          (FProperty *this,FStructuredArchiveSlot param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  FArchive *pFVar3;
  int iVar4;
  longlong lVar5;
  FSlotBase local_res10;
  FSerializedPropertyScope local_38;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  bVar2 = ShouldSerializeValue(this,pFVar3);
  if (bVar2) {
    if (param_3 < 0) {
      param_3 = 0;
      iVar4 = this->ArrayDim;
    }
    else {
      iVar4 = param_3 + 1;
    }
    if (param_3 < iVar4) {
      lVar5 = (longlong)param_3;
      do {
        local_38.Ar = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
        local_38.Property = this;
        FSerializedPropertyScope::PushProperty(&local_38);
        pcVar1 = *(code **)(this->_padding_ + 0xc0);
        if (((param_3 < 0) || (this->ArrayDim <= param_3)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((param_2 == (void *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (*pcVar1)(this,param_1,
                  (longlong)param_2 + (longlong)this->Offset_Internal + this->ElementSize * lVar5,0)
        ;
        FSerializedPropertyScope::PopProperty(&local_38);
        param_3 = param_3 + 1;
        lVar5 = lVar5 + 1;
      } while (param_3 < iVar4);
    }
  }
  return;
}

// SerializeItem @ 141fa62e0

void __thiscall
FProperty::SerializeItem(FProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
             ,0x245,L"Pure virtual not implemented (%s)");
  return;
}

// SetValue_InContainer @ 141fad9e0

void __thiscall FProperty::SetValue_InContainer(FProperty *this,void *param_1,void *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  void *_Dst;
  
  cVar2 = (**(code **)(this->_padding_ + 0x70))();
  if (cVar2 == '\0') {
    if (this->ArrayDim < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_1 == (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    _Dst = (void *)((longlong)this->Offset_Internal + (longlong)param_1);
    if (_Dst != param_2) {
      if (((uint)(int)this->PropertyFlags >> 0x1e & 1) != 0) {
        memcpy(_Dst,param_2,(longlong)this->ElementSize * (longlong)this->ArrayDim);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000141fadac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0xf0))(this,_Dst,param_2,this->ArrayDim);
      return;
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x88))(this,param_1,param_2);
  }
  return;
}

// ContainerVoidPtrToValuePtrInternal @ 141fc7850

void * __thiscall
FProperty::ContainerVoidPtrToValuePtrInternal(FProperty *this,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((param_2 < 0) || (this->ArrayDim <= param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if (param_1 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  return (void *)((longlong)param_1 +
                 (longlong)this->Offset_Internal + (longlong)this->ElementSize * (longlong)param_2);
}

// ContainsObjectReference @ 142024890

bool __thiscall
FProperty::ContainsObjectReference
          (FProperty *this,TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          EPropertyObjectReferenceType param_2)

{
  return false;
}

// EmitReferenceInfo @ 14203e430

void __thiscall
FProperty::EmitReferenceInfo
          (FProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
  return;
}

// ContainerPtrToValuePtrForDefaults<void> @ 1420e2f40

void * __thiscall
FProperty::ContainerPtrToValuePtrForDefaults<void>
          (FProperty *this,UStruct *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  
  if (param_2 != (void *)0x0) {
    if (param_1 == (UStruct *)0x0) {
      iVar4 = 0x7fffffff;
    }
    else {
      iVar4 = param_1->PropertiesSize;
    }
    if (this->ArrayDim * this->ElementSize + this->Offset_Internal <= iVar4) {
      if ((param_3 < 0) || (this->ArrayDim <= param_3)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pvVar3 = (void *)(*pcVar1)();
          return pvVar3;
        }
      }
      return (void *)((longlong)param_2 +
                     (longlong)this->Offset_Internal +
                     (longlong)param_3 * (longlong)this->ElementSize);
    }
  }
  return (void *)0x0;
}

// Identical_InContainer @ 1420fe600

bool __thiscall
FProperty::Identical_InContainer
          (FProperty *this,void *param_1,void *param_2,int param_3,uint param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0xb8);
  if (param_2 == (void *)0x0) {
    lVar3 = 0;
  }
  else {
    if ((param_3 < 0) || (this->ArrayDim <= param_3)) {
      bVar1 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar1) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        uVar2 = (*UNRECOVERED_JUMPTABLE)();
        return (bool)uVar2;
      }
    }
    lVar3 = (longlong)param_2 +
            (longlong)this->Offset_Internal + (longlong)param_3 * (longlong)this->ElementSize;
  }
  if ((param_3 < 0) || (this->ArrayDim <= param_3)) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return (bool)uVar2;
    }
  }
  if (param_1 == (void *)0x0) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return (bool)uVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001420fe73f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)
                    (this,(longlong)param_1 +
                          (longlong)this->Offset_Internal +
                          (longlong)param_3 * (longlong)this->ElementSize,lVar3,param_4);
  return (bool)uVar2;
}

// ImportText_Direct @ 1420fe750

wchar_t * __thiscall
FProperty::ImportText_Direct
          (FProperty *this,wchar_t *param_1,void *param_2,UObject *param_3,int param_4,
          FOutputDevice *param_5)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  bVar1 = ValidateImportFlags(this,param_4,param_5);
  if ((bVar1) && (param_1 != (wchar_t *)0x0)) {
    pwVar2 = (wchar_t *)
             (**(code **)(this->_padding_ + 0xe8))
                       (this,param_1,param_2,0,param_3,param_4 | 0x8000000,param_5);
  }
  else {
    pwVar2 = (wchar_t *)0x0;
  }
  return pwVar2;
}

// ImportText_InContainer @ 1420fe7e0

wchar_t * __thiscall
FProperty::ImportText_InContainer
          (FProperty *this,wchar_t *param_1,void *param_2,UObject *param_3,int param_4,
          FOutputDevice *param_5)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  bVar1 = ValidateImportFlags(this,param_4,param_5);
  if ((bVar1) && (param_1 != (wchar_t *)0x0)) {
    pwVar2 = (wchar_t *)
             (**(code **)(this->_padding_ + 0xe8))
                       (this,param_1,param_2,1,param_3,param_4 | 0x8000000,param_5);
  }
  else {
    pwVar2 = (wchar_t *)0x0;
  }
  return pwVar2;
}

// FProperty @ 14212bca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FProperty * __thiscall
FProperty::FProperty
          (FProperty *this,FFieldVariant param_1,FPropertyParamsBaseWithOffset *param_2,
          EPropertyFlags param_3)

{
  uint uVar1;
  EObjectFlags EVar2;
  uchar *_Str;
  EPropertyFlags EVar3;
  size_t sVar4;
  uint uVar5;
  undefined1 auStack_198 [32];
  FName local_178;
  ulonglong local_170;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  _Str = (uchar *)param_2->NameUTF8;
  EVar2 = param_2->ObjectFlags;
  local_68.Data = (FScriptContainerElement *)0x0;
  if (_Str == (uchar *)0x0) {
    local_58 = 0;
    local_60 = (FScriptContainerElement *)0x0;
    goto LAB_14212bd9e;
  }
  sVar4 = strlen((char *)_Str);
  local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar4);
  uVar1 = local_58 + 1;
  uVar5 = uVar1;
  if (uVar1 < 0x81) {
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      uVar5 = 0;
      goto LAB_14212bd35;
    }
  }
  else {
LAB_14212bd35:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar5,2);
  }
  local_60 = local_168;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    local_60 = local_68.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_60,uVar1,_Str,(int)sVar4 + 1);
LAB_14212bd9e:
  ::FName::FName(&local_178,(wchar_t *)local_60);
  local_170 = *(ulonglong *)param_1.Container;
  if ((((local_170 & 1) != 0) && ((UObject *)(local_170 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(local_170 & 0xfffffffffffffffe));
  }
  FField::FField((FField *)this,(FFieldVariant)&local_170,&local_178,EVar2);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  this->ArrayDim = 1;
  this->ElementSize = 0;
  this->_padding_ = (longlong)&___7FProperty__6B_;
  EVar3 = param_2->PropertyFlags;
  this->Offset_Internal = 0;
  this->PropertyFlags = param_3 | EVar3;
  this->RepIndex = 0;
  (this->BlueprintReplicationCondition).Value = '\0';
  this->PropertyLinkNext = (FProperty *)0x0;
  this->NextRef = (FProperty *)0x0;
  this->DestructorLinkNext = (FProperty *)0x0;
  this->PostConstructLinkNext = (FProperty *)0x0;
  (this->RepNotifyFunc).ComparisonIndex = 0;
  (this->RepNotifyFunc).Number = 0;
  this->Offset_Internal = (uint)param_2->Offset;
  Init(this);
  return this;
}

// FProperty @ 14212be80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FProperty * __thiscall
FProperty::FProperty
          (FProperty *this,FFieldVariant param_1,FPropertyParamsBaseWithoutOffset *param_2,
          EPropertyFlags param_3)

{
  uint uVar1;
  EObjectFlags EVar2;
  uchar *_Str;
  size_t sVar3;
  uint uVar4;
  undefined1 auStack_198 [32];
  FName local_178;
  ulonglong local_170;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  _Str = (uchar *)param_2->NameUTF8;
  EVar2 = param_2->ObjectFlags;
  local_68.Data = (FScriptContainerElement *)0x0;
  if (_Str == (uchar *)0x0) {
    local_58 = 0;
    local_60 = (FScriptContainerElement *)0x0;
    goto LAB_14212bf78;
  }
  sVar3 = strlen((char *)_Str);
  local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar3);
  uVar1 = local_58 + 1;
  uVar4 = uVar1;
  if (uVar1 < 0x81) {
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      uVar4 = 0;
      goto LAB_14212bf12;
    }
  }
  else {
LAB_14212bf12:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar4,2);
  }
  local_60 = local_168;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    local_60 = local_68.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_60,uVar1,_Str,(int)sVar3 + 1);
LAB_14212bf78:
  ::FName::FName(&local_178,(wchar_t *)local_60);
  local_170 = *(ulonglong *)param_1.Container;
  if ((((local_170 & 1) != 0) && ((UObject *)(local_170 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(local_170 & 0xfffffffffffffffe));
  }
  FField::FField((FField *)this,(FFieldVariant)&local_170,&local_178,EVar2);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  this->ArrayDim = 1;
  this->ElementSize = 0;
  this->_padding_ = (longlong)&___7FProperty__6B_;
  this->PropertyFlags = param_3 | param_2->PropertyFlags;
  this->RepIndex = 0;
  (this->BlueprintReplicationCondition).Value = '\0';
  this->Offset_Internal = 0;
  this->PropertyLinkNext = (FProperty *)0x0;
  this->NextRef = (FProperty *)0x0;
  this->DestructorLinkNext = (FProperty *)0x0;
  this->PostConstructLinkNext = (FProperty *)0x0;
  (this->RepNotifyFunc).ComparisonIndex = 0;
  (this->RepNotifyFunc).Number = 0;
  Init(this);
  return this;
}

// FProperty @ 14212c050

FProperty * __thiscall
FProperty::FProperty(FProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FField::FField((FField *)this,(FFieldVariant)&local_res8,param_2,param_3);
  this->_padding_ = (longlong)&___7FProperty__6B_;
  this->PropertyFlags = CPF_None;
  this->RepIndex = 0;
  (this->BlueprintReplicationCondition).Value = '\0';
  this->Offset_Internal = 0;
  this->PropertyLinkNext = (FProperty *)0x0;
  this->NextRef = (FProperty *)0x0;
  this->DestructorLinkNext = (FProperty *)0x0;
  this->PostConstructLinkNext = (FProperty *)0x0;
  (this->RepNotifyFunc).ComparisonIndex = 0;
  (this->RepNotifyFunc).Number = 0;
  this->ArrayDim = 1;
  this->ElementSize = 0;
  return this;
}

// operator() @ 14212fce0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __thiscall
`FProperty::ImportSingleProperty'::__l250::<lambda_1>::operator()
          (void *this,wchar_t *param_1,FProperty *param_2,void *param_3)

{
  FOutputDevice *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  uint uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  FName local_res8;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FOutputDevice local_48;
  FString local_38;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  ::FString::FString(&local_38,L"");
  FOutputDevice::FOutputDevice(&local_48);
  pwVar7 = (wchar_t *)0x0;
  local_48._padding_ = (longlong)&___7FStringOutputDevice__6B_;
  local_48.bAutoEmitLineTerminator = false;
  pwVar4 = pwVar7;
  if (((*(uint *)((longlong)this + 8) & 0x10) == 0) ||
     (((uint)(int)param_2->PropertyFlags >> 0xe & 1) == 0)) {
    if (param_1 != (wchar_t *)0x0) {
      pwVar4 = (wchar_t *)
               (**(code **)(param_2->_padding_ + 0xe8))
                         (param_2,param_1,param_3,0,*(undefined8 *)this,
                          CONCAT44(uVar8,*(uint *)((longlong)this + 8)) | 0x8000000,&local_48);
    }
  }
  else {
    bVar3 = IsThisNotNull(param_2,"FField::GetName");
    if (bVar3) {
      ::FName::ToString((FName *)&param_2->_padding_,&local_88);
    }
    else {
      ::FString::FString(&local_88,L"None");
    }
    ::FString::PrintfImpl
              (&local_68,
               L"Import failed for \'%s\': property is config (Check to see if the property is listed in the DefaultProperties.  It should only be listed in the specific .ini file)"
              );
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    FOutputDevice::LogfImpl(&local_48,L"%s");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  uVar5 = local_38.Data.ArrayNum - 1;
  if (local_38.Data.ArrayNum == 0) {
    uVar5 = 0;
  }
  if ((int)uVar5 < 1) {
    if ((pwVar4 == param_1) && (*param_1 == L'\0')) {
      FOutputDevice::LogfImpl
                (*(FOutputDevice **)((longlong)this + 0x10),Warning,
                 L"Invalid property value in defaults: %s");
    }
  }
  else {
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_38,&local_98,L"\r\n",true);
    pFVar1 = *(FOutputDevice **)((longlong)this + 0x10);
    local_res8 = *(FName *)(*(longlong *)((longlong)this + 0x20) + 0x18);
    ::FName::ToString(&local_res8,&local_58);
    bVar3 = IsThisNotNull(param_2,"FField::GetName");
    if (bVar3) {
      ::FName::ToString((FName *)&param_2->_padding_,&local_78);
    }
    else {
      ::FString::FString(&local_78,L"None");
    }
    FOutputDevice::LogfImpl(pFVar1,Warning,L"While importing text for property \'%s\' in \'%s\':");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (0 < local_98.ArrayNum) {
      do {
        pFVar1 = *(FOutputDevice **)((longlong)this + 0x10);
        uVar6 = (uint)pwVar7;
        uVar5 = 0;
        if ((int)uVar6 < local_98.ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pwVar4 = (wchar_t *)(*pcVar2)();
          return pwVar4;
        }
        FOutputDevice::LogfImpl(pFVar1,Warning,L"%s");
        pwVar7 = (wchar_t *)(ulonglong)(uVar6 + 1);
      } while ((int)(uVar6 + 1) < local_98.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  FOutputDevice::~FOutputDevice(&local_48);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return pwVar4;
}

// AllocateAndInitializeValue @ 142131170

void * __thiscall FProperty::AllocateAndInitializeValue(FProperty *this)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = (**(code **)(this->_padding_ + 0x168))();
  pvVar2 = FMemory::MallocZeroed((longlong)(this->ElementSize * this->ArrayDim),uVar1);
  if (((uint)(int)this->PropertyFlags >> 9 & 1) == 0) {
    (**(code **)(this->_padding_ + 0x150))(this,pvVar2);
  }
  return pvVar2;
}

// CanSerializeFromTypeName @ 142133b40

bool __thiscall FProperty::CanSerializeFromTypeName(FProperty *this,FPropertyTypeName param_1)

{
  longlong *plVar1;
  FName FVar2;
  undefined1 local_res8 [8];
  FPropertyTypeName local_res10 [6];
  
  local_res10[0].Index = param_1.Index;
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x158))(this,local_res8);
  FVar2 = UE::FPropertyTypeName::GetName(local_res10);
  return *(longlong *)FVar2 == *plVar1;
}

// ClearIntrusiveOptionalValue @ 142134760

void __thiscall FProperty::ClearIntrusiveOptionalValue(FProperty *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                     ,0x948,
                     L"Missing implementation for ClearIntrusiveOptionalValue for property type returning true from HasIntrusiveUnsetOptionalState"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ClearValueInternal @ 142134910

void __thiscall FProperty::ClearValueInternal(FProperty *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  FField::GetFullName((FField *)this,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                     ,0x3a3,
                     L"%s failed to handle ClearValueInternal, but it was not CPF_NoDestructor | CPF_ZeroConstructor"
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Construct @ 142134c70

FField * __cdecl FProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  FProperty *this;
  FFieldClass *pFVar1;
  FProperty *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x70,0);
  pFVar2 = (FProperty *)0x0;
  if (this != (FProperty *)0x0) {
    pFVar1 = StaticClass();
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,pFVar1);
    this->_padding_ = (longlong)&___7FProperty__6B_;
    this->PropertyLinkNext = (FProperty *)0x0;
    this->NextRef = (FProperty *)0x0;
    this->DestructorLinkNext = (FProperty *)0x0;
    this->PostConstructLinkNext = (FProperty *)0x0;
    (this->RepNotifyFunc).ComparisonIndex = 0;
    (this->RepNotifyFunc).Number = 0;
    local_res20 = (param_1->Container).Unknown;
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    pFVar2 = FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
  }
  return (FField *)pFVar2;
}

// ContainsClearOnFinishDestroyInternal @ 1421350e0

bool __thiscall
FProperty::ContainsClearOnFinishDestroyInternal
          (FProperty *this,TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// ConvertFromType @ 142135940

EConvertFromTypeResult __thiscall
FProperty::ConvertFromType
          (FProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,uchar *param_3,
          UStruct *param_4,uchar *param_5)

{
  return UseSerializeItem;
}

// CopyCompleteValue @ 1421367f0

void __thiscall FProperty::CopyCompleteValue(FProperty *this,void *param_1,void *param_2)

{
  if (param_1 == param_2) {
    return;
  }
  if (((uint)(int)this->PropertyFlags >> 0x1e & 1) != 0) {
    memcpy(param_1,param_2,(longlong)this->ElementSize * (longlong)this->ArrayDim);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142136823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xf0))();
  return;
}

// CopyCompleteValueFromScriptVM @ 142136840

void __thiscall
FProperty::CopyCompleteValueFromScriptVM(FProperty *this,void *param_1,void *param_2)

{
  if (param_1 == param_2) {
    return;
  }
  if (((uint)(int)this->PropertyFlags >> 0x1e & 1) != 0) {
    memcpy(param_1,param_2,(longlong)this->ElementSize * (longlong)this->ArrayDim);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142136873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xf0))();
  return;
}

// CopyCompleteValueFromScriptVM_InContainer @ 142136890

void __thiscall
FProperty::CopyCompleteValueFromScriptVM_InContainer(FProperty *this,void *param_1,void *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  void *_Dst;
  
  cVar2 = (**(code **)(this->_padding_ + 0x70))();
  if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001421368cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x88))(this,param_1,param_2);
    return;
  }
  if (this->ArrayDim < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (void *)((longlong)this->Offset_Internal + (longlong)param_1);
  if (_Dst != param_2) {
    if (((uint)(int)this->PropertyFlags >> 0x1e & 1) != 0) {
      memcpy(_Dst,param_2,(longlong)this->ElementSize * (longlong)this->ArrayDim);
      return;
    }
    (**(code **)(this->_padding_ + 0xf0))(this,_Dst,param_2,this->ArrayDim);
  }
  return;
}

// CopyCompleteValueToScriptVM @ 1421369a0

void __thiscall FProperty::CopyCompleteValueToScriptVM(FProperty *this,void *param_1,void *param_2)

{
  if (param_1 == param_2) {
    return;
  }
  if (((uint)(int)this->PropertyFlags >> 0x1e & 1) != 0) {
    memcpy(param_1,param_2,(longlong)this->ElementSize * (longlong)this->ArrayDim);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001421369d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xf0))();
  return;
}

// CopyCompleteValueToScriptVM_InContainer @ 1421369f0

void __thiscall
FProperty::CopyCompleteValueToScriptVM_InContainer(FProperty *this,void *param_1,void *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  void *_Src;
  
  cVar2 = (**(code **)(this->_padding_ + 0x78))();
  if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142136a2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x90))(this,param_2,param_1);
    return;
  }
  if (this->ArrayDim < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Src = (void *)((longlong)this->Offset_Internal + (longlong)param_2);
  if (param_1 != _Src) {
    if (((uint)(int)this->PropertyFlags >> 0x1e & 1) != 0) {
      memcpy(param_1,_Src,(longlong)this->ElementSize * (longlong)this->ArrayDim);
      return;
    }
    (**(code **)(this->_padding_ + 0xf0))(this,param_1,_Src,this->ArrayDim);
  }
  return;
}

// CopySingleValueFromScriptVM @ 142137120

void __thiscall FProperty::CopySingleValueFromScriptVM(FProperty *this,void *param_1,void *param_2)

{
  if (param_1 == param_2) {
    return;
  }
  if (((uint)(int)this->PropertyFlags >> 0x1e & 1) != 0) {
    memcpy(param_1,param_2,(longlong)this->ElementSize);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014213714d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xf0))();
  return;
}

// CopySingleValueToScriptVM @ 142137160

void __thiscall FProperty::CopySingleValueToScriptVM(FProperty *this,void *param_1,void *param_2)

{
  if (param_1 == param_2) {
    return;
  }
  if (((uint)(int)this->PropertyFlags >> 0x1e & 1) != 0) {
    memcpy(param_1,param_2,(longlong)this->ElementSize);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014213718d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xf0))();
  return;
}

// CopyValuesInternal @ 142137520

void __thiscall
FProperty::CopyValuesInternal(FProperty *this,void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                     ,0x932,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// DestroyAndFreeValue @ 142137d70

void __thiscall FProperty::DestroyAndFreeValue(FProperty *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    if ((this->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      (**(code **)(this->_padding_ + 0x138))();
    }
    FMemory::Free(param_1);
  }
  return;
}

// DestroyValueInternal @ 142138040

void __thiscall FProperty::DestroyValueInternal(FProperty *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  FField::GetFullName((FField *)this,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                     ,0x3a7,
                     L"%s failed to handle DestroyValueInternal, but it was not CPF_NoDestructor");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// EmitIntrusiveOptionalReferenceInfo @ 142138710

void __thiscall
FProperty::EmitIntrusiveOptionalReferenceInfo
          (FProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                     ,0x94d,
                     L"Missing implementation for EmitIntrusiveOptionalReferenceInfo for property type returning true from HasIntrusiveUnsetOptionalState"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ExportText_Direct @ 142138e50

bool __thiscall
FProperty::ExportText_Direct
          (FProperty *this,FString *param_1,void *param_2,void *param_3,UObject *param_4,int param_5
          ,UObject *param_6)

{
  longlong lVar1;
  bool bVar2;
  EOverriddenPropertyOperation EVar3;
  char cVar4;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if ((*(char *)(lVar1 + 0xc98) == '\0') ||
     (bVar2 = FOverridableSerializationLogic::HasCapabilities(T3DSerialization), !bVar2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (param_2 != param_3) {
    if (bVar2) {
      EVar3 = FOverridableSerializationLogic::GetOverriddenPropertyOperationForPortText
                        (param_2,param_3,param_5);
      if (EVar3 == None) {
        return false;
      }
    }
    else {
      cVar4 = (**(code **)(this->_padding_ + 0xb8))(this,param_2,param_3,param_5);
      if (cVar4 != '\0') {
        return false;
      }
    }
  }
  (**(code **)(this->_padding_ + 0xe0))(this,param_1,param_2,0,param_3,param_4,param_5,param_6);
  return true;
}

// FindRedirectedPropertyName @ 14213b6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FName __cdecl FProperty::FindRedirectedPropertyName(UStruct *param_1,FName param_2)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_static_class_FName___cdecl_FProperty::FindRedirectedPropertyName(UStruct_const_*,FName)_::_2_::FStat_STAT_LinkerLoad_FindRedirectedPropertyName>
  FVar8;
  UPackage *pUVar9;
  FString *pFVar10;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar11;
  int iVar12;
  FNameEntryId FVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FName in_R8;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FStatMessage local_78;
  FCoreRedirectObjectName local_68;
  FCoreRedirectObjectName local_50;
  
  FVar13.Value = 0;
  local_res10.s.LowPart = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_LinkerLoad_FindRedirectedPropertyName ==
          (FThreadSafeStaticStat<_public:_static_class_FName___cdecl_FProperty::FindRedirectedPropertyName(UStruct_const_*,FName)_::_2_::FStat_STAT_LinkerLoad_FindRedirectedPropertyName>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res10.s,"STAT_LinkerLoad_FindRedirectedPropertyName"
                               );
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_FindRedirectedPropertyName,
                   *pFVar7,L"FProperty::FindRedirectedPropertyName","STATGROUP_LoadTimeVerbose",
                   "STATCAT_Advanced",L"LoadTimeVerbose",false,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_LinkerLoad_FindRedirectedPropertyName;
  if (StatPtr_STAT_LinkerLoad_FindRedirectedPropertyName ==
      (FThreadSafeStaticStat<_public:_static_class_FName___cdecl_FProperty::FindRedirectedPropertyName(UStruct_const_*,FName)_::_2_::FStat_STAT_LinkerLoad_FindRedirectedPropertyName>
       )0x0) {
    pFVar7 = ::FName::FName(local_res18,"STAT_LinkerLoad_FindRedirectedPropertyName");
    FVar8 = (FThreadSafeStaticStat<_public:_static_class_FName___cdecl_FProperty::FindRedirectedPropertyName(UStruct_const_*,FName)_::_2_::FStat_STAT_LinkerLoad_FindRedirectedPropertyName>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_LinkerLoad_FindRedirectedPropertyName,*pFVar7,
                         L"FProperty::FindRedirectedPropertyName","STATGROUP_LoadTimeVerbose",
                         "STATCAT_Advanced",L"LoadTimeVerbose",false,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar15 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar11 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar14.Value;
        local_res10.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                   ,0x906);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar14.Value;
      local_res10.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar5 = true;
      FVar13.Value = FVar14.Value;
      goto LAB_14213b843;
    }
  }
  bVar5 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_14213b843:
  pUVar9 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_2);
  FVar3 = (FName)pUVar9->_padding_;
  if (pUVar9 == *(UPackage **)((longlong)param_2 + 0x20)) {
    local_68.OuterName = *(FName *)((longlong)param_2 + 0x18);
  }
  else {
    pFVar10 = UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)param_2,(FString *)&local_78,(UObject *)pUVar9);
    iVar2 = (pFVar10->Data).ArrayNum;
    iVar12 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar12 = 0;
    }
    pFVar7 = ::FName::FName((FName *)&local_res10.s,iVar12,
                            (wchar_t *)(pFVar10->Data).AllocatorInstance.Data,FNAME_Add);
    local_68.OuterName = *pFVar7;
    if (local_78.StatData.Pad != (uchar  [8])0x0) {
      FMemory::Free((void *)local_78.StatData.Pad);
    }
  }
  local_68.ObjectName = in_R8;
  local_68.PackageName = FVar3;
  FCoreRedirects::GetRedirectedName(&local_50,Type_Property,&local_68,None);
  if (((local_50.ObjectName == local_68.ObjectName) && (local_50.OuterName == local_68.OuterName))
     && (local_50.PackageName == local_68.PackageName)) {
    local_50.ObjectName.ComparisonIndex.Value = 0;
    local_50.ObjectName.Number = 0;
  }
  param_1->_padding_ = (longlong)local_50.ObjectName;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_78.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_78.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res10);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_78);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return (FName)param_1;
}

// FinishDestroyInternal @ 14213bcd0

void __thiscall FProperty::FinishDestroyInternal(FProperty *this,void *param_1)

{
  return;
}

// GetCPPMacroType @ 14213cd40

FString * __thiscall
FProperty::GetCPPMacroType(FProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FString local_18;
  
  ::FString::operator=(param_1,L"F");
  ::FName::ToString((FName *)this->_padding_,&local_18);
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(__return_storage_ptr__,L"PROPERTY");
  return __return_storage_ptr__;
}

// GetID @ 14213d850

FName __thiscall FProperty::GetID(FProperty *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)this->_padding_;
  return in_RDX;
}

// GetMinAlignment @ 14213d9d0

int __thiscall FProperty::GetMinAlignment(FProperty *this)

{
  return 1;
}

// GetNameCPP @ 14213d9f0

FString * __thiscall FProperty::GetNameCPP(FProperty *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  FString *pFVar5;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (((uint)(int)this->PropertyFlags >> 0x1d & 1) == 0) {
    bVar3 = IsThisNotNull(this,"FField::GetName");
    if (bVar3) {
      ::FName::ToString((FName *)&this->_padding_,&local_38);
    }
    else {
      ::FString::FString(&local_38,L"None");
    }
    pFVar5 = &local_38;
    bVar2 = false;
    bVar1 = false;
    bVar3 = true;
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  else {
    bVar3 = IsThisNotNull(this,"FField::GetName");
    if (bVar3) {
      ::FName::ToString((FName *)&this->_padding_,&local_18);
    }
    else {
      ::FString::FString(&local_18,L"None");
    }
    ::FString::ConcatFC(&local_28,&local_18,L"_DEPRECATED");
    pFVar5 = &local_28;
    bVar2 = true;
    bVar1 = true;
    bVar3 = false;
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar4.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (bVar1) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSingleValue_InContainer @ 14213e920

void __thiscall
FProperty::GetSingleValue_InContainer(FProperty *this,void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  void *_Src;
  FString local_28;
  
  if (this->ArrayDim < param_3) {
    FField::GetFullName((FField *)this,&local_28);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex <= ArrayDim",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                       ,0x53b,L"ArrayIndex (%d) must be less than the property %s array size (%d)");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  cVar3 = (**(code **)(this->_padding_ + 0x78))(this);
  if (cVar3 == '\0') {
    if (((param_3 < 0) || (this->ArrayDim <= param_3)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar2)
       ) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1 == (void *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar4 = (void *)((longlong)param_1 +
                     (longlong)this->Offset_Internal +
                     (longlong)param_3 * (longlong)this->ElementSize);
    if (param_2 != pvVar4) {
      if (((uint)(int)this->PropertyFlags >> 0x1e & 1) == 0) {
        (**(code **)(this->_padding_ + 0xf0))(this,param_2,pvVar4,1);
      }
      else {
        memcpy(param_2,pvVar4,(longlong)this->ElementSize);
      }
    }
  }
  else if (this->ArrayDim == 1) {
    (**(code **)(this->_padding_ + 0x90))(this,param_1,param_2);
  }
  else {
    pvVar4 = AllocateAndInitializeValue(this);
    GetValue_InContainer(this,param_1,pvVar4);
    _Src = (void *)((longlong)(this->ElementSize * param_3) + (longlong)pvVar4);
    if (param_2 != _Src) {
      if (((uint)(int)this->PropertyFlags >> 0x1e & 1) == 0) {
        (**(code **)(this->_padding_ + 0xf0))(this,param_2,_Src,1);
      }
      else {
        memcpy(param_2,_Src,(longlong)this->ElementSize);
      }
    }
    if (pvVar4 != (void *)0x0) {
      if ((this->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(this->_padding_ + 0x138))(this,pvVar4);
      }
      FMemory::Free(pvVar4);
    }
  }
  return;
}

// GetValueAddressAtIndex_Direct @ 14213ef40

void * __thiscall
FProperty::GetValueAddressAtIndex_Direct
          (FProperty *this,FProperty *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  FString local_18;
  
  if (param_1 != (FProperty *)0x0) {
    FField::GetFullName((FField *)this,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Inner == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                       ,0x517,
                       L"%s should not have an inner property or it\'s missing specialized GetValueAddressAtIndex_Direct override"
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if (((this->ArrayDim <= param_3) || (param_3 < 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < ArrayDim && Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                         ,0x518,L"Array index (%d) out of range"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)((longlong)(param_3 * this->ElementSize) + (longlong)param_2);
}

// GetValueTypeHash @ 14213f020

uint __thiscall FProperty::GetValueTypeHash(FProperty *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((this->PropertyFlags & CPF_HasGetValueTypeHash) == CPF_None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyFlags & CPF_HasGetValueTypeHash",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                       ,0x92b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (param_1 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Src",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                       ,0x92c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014213f0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(this->_padding_ + 0xf8))(this,param_1);
  return uVar3;
}

// GetValueTypeHashInternal @ 14213f0c0

uint __thiscall FProperty::GetValueTypeHashInternal(FProperty *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName *this_00;
  undefined1 local_res8 [8];
  FString local_28;
  FString local_18;
  
  bVar2 = IsThisNotNull(this,"FField::GetName");
  if (bVar2) {
    ::FName::ToString((FName *)&this->_padding_,&local_28);
  }
  else {
    ::FString::FString(&local_28,L"None");
  }
  this_00 = (FName *)(**(code **)(this->_padding_ + 0x158))(this,local_res8);
  ::FName::ToString(this_00,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                     ,0x937,
                     L"Missing implementation for GetValueTypeHashInternal with ID %s and Name %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

// ImportSingleProperty @ 14213f6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl
FProperty::ImportSingleProperty
          (wchar_t *param_1,void *param_2,UStruct *param_3,UObject *param_4,int param_5,
          FOutputDevice *param_6,TArray<FDefinedProperty,TSizedDefaultAllocator<32>_> *param_7)

{
  undefined1 uVar1;
  EArrayPropertyFlags EVar2;
  FFieldClass *pFVar3;
  FScriptContainerElement *pFVar4;
  FProperty *pFVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  FPropertyVisitorPath *pFVar10;
  bool bVar11;
  char cVar12;
  wchar_t wVar13;
  int iVar14;
  int iVar15;
  FNameEntryId FVar16;
  wchar_t *pwVar17;
  FName *pFVar18;
  FFieldClass *pFVar19;
  FName FVar20;
  void *pvVar21;
  undefined1 auVar22 [8];
  FObjectPropertyBase *pFVar23;
  ulonglong uVar24;
  TNotNull<UObject_*> TVar25;
  UObject *pUVar26;
  FOverriddenPropertyNode *pFVar27;
  FMapProperty *pFVar28;
  FScriptContainerElement *pFVar29;
  uchar *puVar30;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FMapProperty *pFVar31;
  ForAnyElementType _Str;
  undefined1 *puVar32;
  undefined1 *puVar33;
  ulonglong uVar34;
  FMapProperty *pFVar35;
  FLogScopedCategoryAndVerbosityOverride *this;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  FOutputDevice *pFVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  FMapProperty *pFVar44;
  FMapProperty *pFVar45;
  undefined1 auVar46 [8];
  longlong lVar47;
  int iVar48;
  undefined1 auStackY_808 [32];
  undefined1 local_7b8 [8];
  undefined1 local_7b0 [8];
  FOutputDevice *local_7a8;
  FMapProperty *local_7a0;
  FMapProperty *local_798;
  undefined1 local_790 [40];
  TScriptArray<TMemoryImageAllocator<0>_> *local_768;
  int local_760;
  uint local_75c;
  undefined1 local_758;
  FPropertyVisitorPath *local_750;
  FScriptArrayHelper local_748;
  FName local_728;
  undefined1 local_720 [16];
  longlong local_710;
  int local_708 [2];
  FString local_700;
  FName local_6f0;
  FMapProperty *local_6e8;
  TFieldIterator<FProperty> local_6e0;
  undefined1 local_6c8 [8];
  FProperty *local_6c0;
  FNameEntryId local_6b8;
  uint uStack_6b4;
  FMapProperty *local_6b0;
  int iStack_6a8;
  undefined4 uStack_6a4;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  uint local_688;
  undefined4 uStack_684;
  UObject *local_680;
  int local_678;
  FOutputDevice *local_670;
  FMapProperty *local_668;
  UStruct *local_660;
  FString local_658;
  FOutputDevice local_648;
  FString local_638;
  undefined1 local_628 [4];
  undefined1 local_624 [4];
  undefined1 local_620 [48];
  FProperty *local_5f0;
  FString local_5e8;
  TObjectPtr<UField>_u_0 local_5d8;
  undefined1 local_5d0 [32];
  FProperty *local_5b0;
  FProperty *local_5a8;
  FProperty *pFStack_5a0;
  FProperty *local_598;
  ForAnyElementType local_590;
  FProperty *local_588;
  FProperty *local_580;
  atomic<FUnversionedStructSchema_const_*> local_578;
  FProperty *local_570;
  FName local_568;
  undefined1 *local_560;
  code *local_558;
  undefined1 *local_550;
  code *local_548;
  FProperty **local_540;
  code *local_538;
  TObjectPtr<UField>_u_0 *local_530;
  code *local_528;
  undefined1 *local_520;
  undefined1 local_518 [24];
  ulonglong *local_500;
  int local_4f8;
  byte local_4f0;
  code *local_4e8;
  undefined1 *local_4e0;
  FLogScopedCategoryAndVerbosityOverride local_4d8;
  FLogScopedCategoryAndVerbosityOverride local_4c8;
  FLogScopedCategoryAndVerbosityOverride local_4b8;
  FLogScopedCategoryAndVerbosityOverride local_4a8;
  FLogScopedCategoryAndVerbosityOverride local_498;
  FLogScopedCategoryAndVerbosityOverride local_488;
  FScriptMapHelper *local_478;
  FMapProperty *local_470;
  FProperty *local_468;
  FProperty *local_460;
  FProperty *local_458;
  FMapProperty *local_450;
  code *local_448;
  FProperty **local_440;
  int local_438;
  undefined1 local_430 [40];
  FLogScopedCategoryAndVerbosityOverride local_408;
  FLogScopedCategoryAndVerbosityOverride local_3f8;
  FLogScopedCategoryAndVerbosityOverride local_3e8;
  FLogScopedCategoryAndVerbosityOverride local_3d8;
  FName local_3c8;
  FName local_3c0;
  FString local_3b8;
  FString local_3a8;
  FProperty *local_398;
  FProperty *pFStack_390;
  FOverriddenPropertyNodeID local_388;
  FOverriddenPropertyNodeID local_368;
  FOverriddenPropertyNodeID local_348;
  FScriptMapHelper local_328;
  FArchiveSerializedPropertyChain local_2f0;
  FArchiveSerializedPropertyChain local_298;
  FArchiveSerializedPropertyChain local_240;
  FArchiveSerializedPropertyChain local_1e8;
  FArchiveSerializedPropertyChain local_190;
  FArchiveSerializedPropertyChain local_138;
  FOverridableTextPortPropertyPathScope local_d8;
  ulonglong local_58;
  
  puVar40 = auStackY_808;
  puVar41 = auStackY_808;
  puVar42 = auStackY_808;
  puVar32 = auStackY_808;
  puVar33 = auStackY_808;
  local_58 = __security_cookie.value ^ (ulonglong)local_7b8;
  local_620._16_8_ = param_7;
  local_790._8_4_ = param_5;
  local_7a8 = param_6;
  local_7b8 = (undefined1  [8])param_1;
  local_790._16_8_ = param_2;
  local_790._24_8_ = param_4;
  if ((param_3 == (UStruct *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ObjectStruct",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                          ,0x630,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pwVar17 = (wchar_t *)(*pcVar6)();
    return pwVar17;
  }
  wVar13 = (wchar_t)*(longlong *)local_7b8;
  uVar24 = (-(ulonglong)((ushort)wVar13 < 0x40) & 0x100000200) >> ((byte)wVar13 & 0x3f);
  auVar46 = local_7b8;
  while ((uVar24 & 1) != 0) {
    wVar13 = *(wchar_t *)((longlong)&((FMapProperty *)auVar46)->_padding_ + 2);
    auVar46 = (undefined1  [8])((longlong)&((FMapProperty *)auVar46)->_padding_ + 2);
    uVar24 = (-(ulonglong)((ushort)wVar13 < 0x40) & 0x100000200) >> ((byte)wVar13 & 0x3f);
  }
  wVar13 = (wchar_t)((FMapProperty *)auVar46)->_padding_;
  pFVar45 = (FMapProperty *)0x0;
  pFVar44 = (FMapProperty *)0x0;
  local_6a0 = 0;
  uVar38 = (uint)(ushort)wVar13;
  uVar37 = 0;
  if (uVar38 == 0x22) {
    local_6c8 = (undefined1  [8])0x0;
    local_6c0 = (FProperty *)0x0;
    FParse::QuotedString((wchar_t *)auVar46,(FString *)local_6c8,local_708);
    uVar38 = (int)local_6c0 - 1;
    if ((int)local_6c0 == 0) {
      uVar38 = uVar37;
    }
    pFVar18 = ::FName::FName(&local_3c0,uVar38,(wchar_t *)local_6c8,FNAME_Add);
    FVar20 = *pFVar18;
    wVar13 = *(wchar_t *)
              ((longlong)&((FMapProperty *)auVar46)->_padding_ + (longlong)local_708[0] * 2);
    local_7b8 = (undefined1  [8])
                ((longlong)&((FMapProperty *)auVar46)->_padding_ + (longlong)local_708[0] * 2);
    pFVar31 = pFVar45;
    if (((ushort)wVar13 & 0xffffffc0) == 0x40) {
      pFVar31 = (FMapProperty *)&DAT_08000000;
    }
    uVar24 = ((ulonglong)pFVar31 | -(ulonglong)((ushort)wVar13 < 0x40) & 0x3000410000000001) >>
             ((ushort)wVar13 & 0x3f);
    while ((uVar24 & 1) == 0) {
      wVar13 = *(wchar_t *)((longlong)&((FMapProperty *)local_7b8)->_padding_ + 2);
      local_7b8 = (undefined1  [8])((longlong)&((FMapProperty *)local_7b8)->_padding_ + 2);
      pFVar31 = pFVar45;
      if (((ushort)wVar13 & 0xffffffc0) == 0x40) {
        pFVar31 = (FMapProperty *)&DAT_08000000;
      }
      uVar24 = ((ulonglong)pFVar31 | -(ulonglong)((ushort)wVar13 < 0x40) & 0x3000410000000001) >>
               ((ushort)wVar13 & 0x3f);
    }
    if (local_6c8 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_6c8);
    }
  }
  else {
    pFVar31 = pFVar45;
    if ((wVar13 & 0xffc0U) == 0x40) {
      pFVar31 = (FMapProperty *)&DAT_08000000;
    }
    uVar24 = ((ulonglong)pFVar31 | -(ulonglong)(uVar38 < 0x40) & 0x3000410000000001) >>
             (uVar38 & 0x3f);
    local_7b8 = auVar46;
    while ((uVar24 & 1) == 0) {
      wVar13 = *(wchar_t *)((longlong)&((FMapProperty *)local_7b8)->_padding_ + 2);
      local_7b8 = (undefined1  [8])((longlong)&((FMapProperty *)local_7b8)->_padding_ + 2);
      pFVar31 = pFVar45;
      if (((ushort)wVar13 & 0xffffffc0) == 0x40) {
        pFVar31 = (FMapProperty *)&DAT_08000000;
      }
      uVar24 = ((ulonglong)pFVar31 | -(ulonglong)((ushort)wVar13 < 0x40) & 0x3000410000000001) >>
               ((ushort)wVar13 & 0x3f);
    }
    if ((wchar_t)((FMapProperty *)local_7b8)->_padding_ == L'\0') {
      FVar20.ComparisonIndex.Value = 0;
      FVar20.Number = 0;
    }
    else {
      uVar24 = (longlong)local_7b8 - (longlong)auVar46 >> 1;
      uVar38 = (uint)uVar24;
      lVar47 = (longlong)(int)uVar38;
      if (0 < (int)uVar38) {
        pwVar17 = (wchar_t *)((longlong)auVar46 + (lVar47 + -1) * 2);
        do {
          uVar38 = (uint)uVar24;
          if (((-(ulonglong)((ushort)*pwVar17 < 0x40) & 0x100000200) >> ((byte)*pwVar17 & 0x3f) & 1)
              == 0) break;
          uVar38 = uVar38 - 1;
          uVar24 = (ulonglong)uVar38;
          lVar47 = lVar47 + -1;
          pwVar17 = pwVar17 + -1;
        } while (0 < lVar47);
      }
      pFVar18 = ::FName::FName(&local_3c8,uVar38,(wchar_t *)auVar46,FNAME_Add);
      FVar20 = *pFVar18;
    }
  }
  puVar43 = auStackY_808;
  if (((wchar_t)*(longlong *)local_7b8 == L'\0') || (puVar43 = auStackY_808, FVar20 == (FName)0x0))
  goto LAB_142141e80;
  if (param_3 == (UStruct *)0x0) {
    local_6e0.Field = (FField *)0x0;
  }
  else {
    local_6e0.Field = param_3->ChildProperties;
  }
  local_6e0.InterfaceIndex = -1;
  local_6e0.bIncludeSuper = true;
  local_6e0.bIncludeDeprecated = true;
  local_6e0.bIncludeInterface = false;
  local_6e0.Struct = param_3;
  TFieldIterator<FProperty>::IterateToNext(&local_6e0);
  pFVar31 = (FMapProperty *)local_6e0.Field;
  while (local_6e0.Field = (FField *)pFVar31, pFVar31 != (FMapProperty *)0x0) {
    bVar11 = IsThisNotNull(pFVar31,"FField::GetFName");
    if (bVar11) {
      local_6f0 = (FName)pFVar31->_padding_;
    }
    else {
      local_6f0.ComparisonIndex.Value = 0;
      local_6f0.Number = 0;
    }
    if (local_6f0 == FVar20) {
      if (pFVar31 != (FMapProperty *)0x0) goto LAB_14213fb44;
      break;
    }
    local_6e0.Field = (FField *)pFVar31->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_6e0);
    pFVar31 = (FMapProperty *)local_6e0.Field;
  }
  FindRedirectedPropertyName((UStruct *)local_620,(FName)param_3);
  local_698 = 0;
  if ((((FName)local_620._0_8_ == (FName)0x0) ||
      (pFVar31 = (FMapProperty *)FindFProperty<FProperty>(param_3,(FName)local_620._0_8_,Default),
      pFVar31 == (FMapProperty *)0x0)) &&
     (pFVar31 = (FMapProperty *)(**(code **)(param_3->_padding_ + 0x308))(param_3,FVar20),
     pFVar31 == (FMapProperty *)0x0)) {
    puVar43 = auStackY_808;
    if ((byte)LogExec._0_1_ < 6) goto LAB_142141e80;
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_4d8,(FName)LogExec._4_8_,Verbose);
    local_5d0._16_8_ = param_3->_padding_;
    ::FName::ToString((FName *)(local_5d0 + 0x10),&local_5e8);
    FOutputDevice::LogfImpl(local_7a8,L"Unknown property in %s: %s ");
    if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
    }
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Verbose);
    this = &local_4d8;
  }
  else {
LAB_14213fb44:
    if ((((0 < *(int *)((longlong)&pFVar31->_padding_ + 4) * (int)pFVar31->_padding_) &&
         ((uVar24 = pFVar31->_padding_, (uVar24 >> 0x1d & 1) == 0 || ((param_5 & 0x8010000U) != 0)))
         ) && (((uVar24 >> 0xd & 1) == 0 || ((param_5 & 0x30000U) != 0)))) &&
       (((((((uint)param_5 >> 0xb & 1) == 0 || ((uVar24 & 0x400000200000) == 0)) ||
          ((param_5 & 0x30000U) != 0)) &&
         ((((uint)param_5 >> 0x16 & 1) != 0 || ((uVar24 >> 0x2f & 1) == 0)))) &&
        (((-1 < (char)param_5 || ((pFVar31->_padding_ & 0x8000080000U) != 0)) &&
         ((((uint)param_5 >> 0x13 & 1) == 0 || ((~(byte)pFVar31->_padding_ & 1) == 0)))))))) {
      FOverridableTextPortPropertyPathScope::FOverridableTextPortPropertyPathScope
                (&local_d8,(FProperty *)pFVar31,-1,None);
      uVar38 = uVar37;
      if ((wchar_t)*(longlong *)local_7b8 == L'.') {
        local_7b8 = (undefined1  [8])((longlong)(longlong *)local_7b8 + 2);
        bVar11 = FParse::Command((wchar_t **)local_7b8,L"Empty",true);
        if (bVar11) {
          uVar38 = 4;
        }
        else {
          bVar11 = FParse::Command((wchar_t **)local_7b8,L"Add",true);
          if (bVar11) {
            uVar38 = 1;
          }
          else {
            bVar11 = FParse::Command((wchar_t **)local_7b8,L"Remove",true);
            if (bVar11) {
              uVar38 = 2;
            }
            else {
              bVar11 = FParse::Command((wchar_t **)local_7b8,L"RemoveIndex",true);
              if (bVar11) {
                uVar38 = 3;
              }
            }
          }
        }
      }
      pFVar3 = (FFieldClass *)pFVar31->_padding_;
      pFVar19 = FArrayProperty::StaticClass();
      pFVar39 = local_7a8;
      pFVar28 = pFVar45;
      if (pFVar3 == pFVar19) {
        pFVar28 = pFVar31;
      }
      ReadOverriddenOperation((wchar_t **)local_7b0,(FOutputDevice *)local_7b8);
      local_728.ComparisonIndex.Value = 0;
      local_728.Number = 0;
      local_750 = (FPropertyVisitorPath *)0x0;
      if (local_7b0[1] != false) {
        FVar20 = (FName)FOverridableSerializationLogic::GetOverriddenProperties();
        local_728 = FVar20;
        local_750 = FOverridableSerializationLogic::GetOverriddenPortTextPropertyPath();
        pFVar39 = local_7a8;
        if ((((FVar20 != (FName)0x0) && (((ulonglong)pFVar31->_padding_ >> 0x3a & 1) == 0)) &&
            (SUB21(local_7b0._0_2_,0) != true)) && (SUB21(local_7b0._0_2_,0) != true)) {
          if ((local_750 == (FPropertyVisitorPath *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Path",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                                  ,0x6a6,L"Expecting a path"), bVar11)) {
            pcVar6 = (code *)swi(3);
            pwVar17 = (wchar_t *)(*pcVar6)();
            return pwVar17;
          }
          FPropertyVisitorPath::ToSerializedPropertyChain(local_750,&local_2f0);
          if ((local_7b0[1] == false) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            pwVar17 = (wchar_t *)(*pcVar6)();
            return pwVar17;
          }
          FOverriddenPropertySet::ConditionallyRestoreOverriddenPropertyOperation
                    ((FOverriddenPropertySet *)FVar20,local_7b0[0],&local_2f0,(FProperty *)0x0);
          pFVar39 = local_7a8;
          if (local_2f0.SerializedPropertyChain.AllocatorInstance.SecondaryData !=
              (ForElementType<FProperty_*>)0x0) {
            FMemory::Free((void *)local_2f0.SerializedPropertyChain.AllocatorInstance.SecondaryData)
            ;
            pFVar39 = local_7a8;
          }
        }
      }
      if (((*(uint *)(pFVar31->_padding_ + 0x18) >> 0x19 & 1) == 0) ||
         (pFVar31 == (FMapProperty *)0x0)) {
        if (uVar38 == 0) goto LAB_142140af6;
        if (pFVar28 == (FMapProperty *)0x0) {
          puVar33 = auStackY_808;
          if (2 < (byte)LogExec._0_1_) {
            FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                      (&local_498,(FName)LogExec._4_8_,Warning);
            FOutputDevice::LogfImpl(pFVar39,L"Array operation performed on non-array variable: %s");
            FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
            FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
                      (&local_498);
            auVar46 = local_7b8;
            FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope(&local_d8)
            ;
            local_7b8 = auVar46;
            puVar43 = auStackY_808;
            goto LAB_142141e80;
          }
        }
        else {
          if (((int)pFVar28->_padding_ < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            pwVar17 = (wchar_t *)(*pcVar6)();
            return pwVar17;
          }
          uVar8 = local_790._16_8_;
          if (((UObject *)local_790._16_8_ == (UObject *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            pwVar17 = (wchar_t *)(*pcVar6)();
            return pwVar17;
          }
          iVar14 = *(int *)((longlong)&pFVar28->_padding_ + 4);
          uVar1 = *(undefined1 *)&((TObjectPtr<UClass> *)&pFVar28->KeyProp)->field0_0x0;
          local_75c = (**(code **)(pFVar28->ValueProp->_padding_ + 0x168))();
          local_790._32_8_ = pFVar28->ValueProp;
          local_760 = ((FProperty *)local_790._32_8_)->ElementSize;
          local_768 = (TScriptArray<TMemoryImageAllocator<0>_> *)((undefined1 *)uVar8 + iVar14);
          local_758 = uVar1;
          if ((local_760 < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ElementSize > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x1177,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            pwVar17 = (wchar_t *)(*pcVar6)();
            return pwVar17;
          }
          if (((FProperty *)local_790._32_8_ == (FProperty *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InnerProperty",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x1178,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            pwVar17 = (wchar_t *)(*pcVar6)();
            return pwVar17;
          }
          if (uVar38 != 4) {
            if (uVar38 - 1 < 2) {
              SkipWhitespace((wchar_t **)local_7b8);
              plVar7 = (longlong *)local_7b8;
              local_7b8 = (undefined1  [8])((longlong)(longlong *)local_7b8 + 2);
              if ((wchar_t)*plVar7 != L'(') {
                if (2 < (byte)LogExec._0_1_) {
                  FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                            (&local_3f8,(FName)LogExec._4_8_,Warning);
                  FOutputDevice::LogfImpl
                            (local_7a8,L"Missing \'(\' in default properties array operation: %s");
                  FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
                  FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
                            (&local_3f8);
                  auVar46 = local_7b8;
                  FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
                            (&local_d8);
                  local_7b8 = auVar46;
                  puVar43 = auStackY_808;
                  goto LAB_142141e80;
                }
                goto LAB_142141b46;
              }
              SkipWhitespace((wchar_t **)local_7b8);
              if (uVar38 == 1) {
                iVar15 = local_768->ArrayNum;
                iVar14 = iVar15 + 1;
                local_768->ArrayNum = iVar14;
                if ((local_758 & CPF_Edit) == CPF_None) {
                  if (local_768->ArrayMax < iVar14) {
                    TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
                              ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)local_768,iVar15,
                               local_760,local_75c);
                  }
                }
                else if (local_768->ArrayMax < iVar14) {
                  TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow
                            (local_768,iVar15,local_760,local_75c);
                }
                pFVar44 = pFVar45;
                if (local_768->ArrayNum != 0) {
                  puVar33 = (undefined1 *)local_768->_padding_;
                  if (((local_758 & CPF_Edit) != CPF_None) && (((ulonglong)puVar33 & 1) != 0)) {
                    puVar33 = (undefined1 *)
                              ((longlong)&local_768->_padding_ + ((longlong)puVar33 >> 0x18));
                  }
                  pFVar44 = (FMapProperty *)(puVar33 + (longlong)iVar15 * (longlong)local_760);
                }
                if (((uint)(int)*(EPropertyFlags *)(local_790._32_8_ + 0x38) >> 9 & 1) == 0) {
                  (**(code **)(*(longlong *)local_790._32_8_ + 0x150))(local_790._32_8_,pFVar44);
                }
                else {
                  memset(pFVar44,0,(longlong)local_760);
                }
                pFVar39 = local_7a8;
                if (local_768->ArrayNum != 0) {
                  puVar33 = (undefined1 *)local_768->_padding_;
                  if (((local_758 & CPF_Edit) != CPF_None) && (((ulonglong)puVar33 & 1) != 0)) {
                    puVar33 = (undefined1 *)
                              ((longlong)&local_768->_padding_ + ((longlong)puVar33 >> 0x18));
                  }
                  pFVar45 = (FMapProperty *)(puVar33 + (longlong)iVar15 * (longlong)local_760);
                }
                auVar22 = (undefined1  [8])
                          ImportText_Direct(pFVar28->ValueProp,(wchar_t *)local_7b8,pFVar45,
                                            (UObject *)local_790._24_8_,local_790._8_4_,local_7a8);
                if ((auVar22 == (undefined1  [8])0x0) ||
                   (puVar33 = auStackY_808, auVar22 == local_7b8)) {
                  FOutputDevice::LogfImpl
                            (pFVar39,Warning,
                             L"Unable to parse parameter value \'%s\' in defaultproperties array operation: %s"
                            );
                  auVar46 = local_7b8;
                  FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
                            (&local_d8);
                  local_7b8 = auVar46;
                  puVar43 = auStackY_808;
                  goto LAB_142141e80;
                }
              }
              else {
                pFVar5 = pFVar28->ValueProp;
                iVar14 = pFVar5->ElementSize;
                puVar33 = auStackY_808;
                pFVar44 = pFVar45;
                if (iVar14 != 0) {
                  uVar24 = (longlong)(iVar14 + 0xf) + 0xf;
                  if (uVar24 <= (ulonglong)(longlong)(iVar14 + 0xf)) {
                    uVar24 = 0xffffffffffffff0;
                  }
                  puVar33 = auStackY_808 + -(uVar24 & 0xfffffffffffffff0);
                  pFVar44 = (FMapProperty *)(local_7b0 + -(uVar24 & 0xfffffffffffffff0));
                }
                if (((uint)(int)pFVar5->PropertyFlags >> 9 & 1) == 0) {
                  pcVar6 = *(code **)(pFVar5->_padding_ + 0x150);
                  *(undefined8 *)(puVar33 + -8) = 0x142140958;
                  (*pcVar6)(pFVar5,pFVar44);
                }
                else {
                  iVar15 = pFVar5->ArrayDim;
                  *(undefined8 *)(puVar33 + -8) = 0x142140947;
                  memset(pFVar44,0,(longlong)iVar15 * (longlong)iVar14);
                }
                uVar8 = local_790._24_8_;
                uVar9 = local_790._8_4_;
                pFVar39 = local_7a8;
                auVar22 = local_7b8;
                *(FOutputDevice **)(puVar33 + 0x28) = local_7a8;
                *(undefined4 *)(puVar33 + 0x20) = uVar9;
                pFVar5 = pFVar28->ValueProp;
                *(undefined8 *)(puVar33 + -8) = 0x14214097c;
                auVar22 = (undefined1  [8])
                          ImportText_Direct(pFVar5,(wchar_t *)auVar22,pFVar44,(UObject *)uVar8,
                                            *(int *)(puVar33 + 0x20),
                                            *(FOutputDevice **)(puVar33 + 0x28));
                if ((auVar22 == (undefined1  [8])0x0) || (auVar22 == local_7b8)) {
                  *(undefined1 (*) [8])(puVar33 + 0x20) = auVar46;
                  *(undefined8 *)(puVar33 + -8) = 0x142140abc;
                  FOutputDevice::LogfImpl
                            (pFVar39,Error,
                             L"Unable to parse parameter value \'%s\' in defaultproperties array operation: %s"
                            );
                  pFVar5 = pFVar28->ValueProp;
                  if ((~(byte)(pFVar5->PropertyFlags >> 0x24) & 1) != 0) {
                    pcVar6 = *(code **)(pFVar5->_padding_ + 0x138);
                    *(undefined8 *)(puVar33 + -8) = 0x142140ade;
                    (*pcVar6)(pFVar5,pFVar44);
                    auVar46 = local_7b8;
                    *(undefined8 *)(puVar33 + -8) = 0x142140aee;
                    FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
                              (&local_d8);
                    local_7b8 = auVar46;
                    puVar43 = puVar33;
                    goto LAB_142141e80;
                  }
                  goto LAB_142141b46;
                }
                bVar11 = false;
                pFVar31 = pFVar45;
                while( true ) {
                  uVar38 = (uint)pFVar31;
                  if ((uint)local_768->ArrayNum <= uVar38) break;
                  pFVar31 = pFVar45;
                  if (local_768->ArrayNum != 0) {
                    puVar32 = (undefined1 *)local_768->_padding_;
                    if (((local_758 & CPF_Edit) != CPF_None) && (((ulonglong)puVar32 & 1) != 0)) {
                      puVar32 = (undefined1 *)
                                ((longlong)&local_768->_padding_ + ((longlong)puVar32 >> 0x18));
                    }
                    pFVar31 = (FMapProperty *)
                              (puVar32 + (longlong)(int)uVar38 * (longlong)local_760);
                  }
                  pFVar5 = pFVar28->ValueProp;
                  pcVar6 = *(code **)(pFVar5->_padding_ + 0xb8);
                  *(undefined8 *)(puVar33 + -8) = 0x1421409ee;
                  cVar12 = (*pcVar6)(pFVar5,pFVar44,pFVar31,0);
                  uVar37 = uVar38;
                  if (cVar12 != '\0') {
                    uVar37 = uVar38 - 1;
                    *(undefined8 *)(puVar33 + -8) = 0x142140a05;
                    FScriptArrayHelper::RemoveValues
                              ((FScriptArrayHelper *)(local_790 + 0x20),uVar38,1);
                    bVar11 = true;
                  }
                  pFVar31 = (FMapProperty *)(ulonglong)(uVar37 + 1);
                }
                pFVar39 = local_7a8;
                if (!bVar11) {
                  *(undefined8 *)(puVar33 + -8) = 0x142140a20;
                  FField::GetName((FField *)pFVar28,&local_3a8);
                  pFVar39 = local_7a8;
                  *(undefined8 *)(puVar33 + -8) = 0x142140a4c;
                  FOutputDevice::LogfImpl(pFVar39,Warning,L"%s.Remove(): Value not found in array");
                  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    *(undefined8 *)(puVar33 + -8) = 0x142140a5d;
                    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
                  }
                }
                pFVar5 = pFVar28->ValueProp;
                if ((~(byte)(pFVar5->PropertyFlags >> 0x24) & 1) != 0) {
                  pcVar6 = *(code **)(pFVar5->_padding_ + 0x138);
                  *(undefined8 *)(puVar33 + -8) = 0x142140a81;
                  (*pcVar6)(pFVar5,pFVar44);
                }
              }
            }
            else {
              pFVar39 = local_7a8;
              puVar33 = auStackY_808;
              auVar22 = local_7b8;
              if (uVar38 != 3) goto LAB_1421406a2;
              SkipWhitespace((wchar_t **)local_7b8);
              plVar7 = (longlong *)local_7b8;
              local_7b8 = (undefined1  [8])((longlong)(longlong *)local_7b8 + 2);
              if ((wchar_t)*plVar7 != L'(') {
                puVar33 = auStackY_808;
                if (2 < (byte)LogExec._0_1_) {
                  FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                            ((FLogScopedCategoryAndVerbosityOverride *)(local_430 + 0x18),
                             (FName)LogExec._4_8_,Warning);
                  FOutputDevice::LogfImpl
                            (local_7a8,L"Missing \'(\' in default properties array operation:: %s");
                  FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
                  FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
                            ((FLogScopedCategoryAndVerbosityOverride *)(local_430 + 0x18));
                  auVar46 = local_7b8;
                  FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
                            (&local_d8);
                  local_7b8 = auVar46;
                  puVar43 = auStackY_808;
                  goto LAB_142141e80;
                }
                goto LAB_142141b46;
              }
              SkipWhitespace((wchar_t **)local_7b8);
              local_700.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_700.Data.ArrayNum = 0;
              local_700.Data.ArrayMax = 0;
              wVar13 = (wchar_t)*(longlong *)local_7b8;
              if (wVar13 == L')') {
LAB_14214061a:
                _Str.Data = (FScriptContainerElement *)L"";
              }
              else {
                do {
                  if (wVar13 == L'\0') {
                    if (2 < (byte)LogExec._0_1_) {
                      FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                                (&local_408,(FName)LogExec._4_8_,Warning);
                      FOutputDevice::LogfImpl
                                (local_7a8,
                                 L"Missing \')\' in default properties array operation: %s");
                      FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
                      FLogScopedCategoryAndVerbosityOverride::
                      ~FLogScopedCategoryAndVerbosityOverride(&local_408);
                    }
                    auVar46 = local_7b8;
                    puVar32 = auStackY_808;
                    if (local_700.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
                    goto LAB_142141290;
                    FMemory::Free(local_700.Data.AllocatorInstance.Data);
                    FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
                              (&local_d8);
                    local_7b8 = auVar46;
                    puVar43 = auStackY_808;
                    goto LAB_142141e80;
                  }
                  ::FString::AppendChar(&local_700,wVar13);
                  local_7b8 = (undefined1  [8])((longlong)(longlong *)local_7b8 + 2);
                  wVar13 = (wchar_t)((FMapProperty *)local_7b8)->_padding_;
                } while (wVar13 != L')');
                _Str.Data = local_700.Data.AllocatorInstance.Data;
                if (local_700.Data.ArrayNum == 0) goto LAB_14214061a;
              }
              iVar14 = _wtoi((wchar_t *)_Str.Data);
              if ((iVar14 < 0) || (local_768->ArrayNum <= iVar14)) {
                FField::GetName((FField *)pFVar28,&local_3b8);
                FOutputDevice::LogfImpl
                          (local_7a8,Warning,L"%s.RemoveIndex(%d): Index not found in array");
                if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
                }
              }
              else {
                FScriptArrayHelper::RemoveValues((FScriptArrayHelper *)(local_790 + 0x20),iVar14,1);
              }
              pFVar39 = local_7a8;
              puVar33 = auStackY_808;
              auVar22 = local_7b8;
              if (local_700.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_700.Data.AllocatorInstance.Data);
                pFVar39 = local_7a8;
                puVar33 = auStackY_808;
                auVar22 = local_7b8;
              }
            }
LAB_1421406a2:
            local_7b8 = auVar22;
            *(undefined8 *)(puVar33 + -8) = 0x1421406ab;
            SkipWhitespace((wchar_t **)local_7b8);
            puVar43 = puVar33;
            if ((wchar_t)*(longlong *)local_7b8 == L')') {
              local_7b8 = (undefined1  [8])((longlong)(longlong *)local_7b8 + 2);
              *(undefined8 *)(puVar33 + -8) = 0x142140a9e;
              FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
                        (&local_d8);
              goto LAB_142141e80;
            }
            puVar32 = puVar33;
            auVar46 = local_7b8;
            if (2 < (byte)LogExec._0_1_) {
              *(undefined8 *)(puVar33 + -8) = 0x1421406dc;
              FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                        (&local_3e8,(FName)LogExec._4_8_,Warning);
              *(undefined8 *)(puVar33 + -8) = 0x1421406ee;
              FOutputDevice::LogfImpl
                        (pFVar39,L"Missing \')\' in default properties array operation: %s");
              *(undefined8 *)(puVar33 + -8) = 0x1421406fc;
              FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
              *(undefined8 *)(puVar33 + -8) = 0x142140708;
              FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
                        (&local_3e8);
              auVar46 = local_7b8;
              *(undefined8 *)(puVar33 + -8) = 0x142140718;
              FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
                        (&local_d8);
              local_7b8 = auVar46;
              goto LAB_142141e80;
            }
            goto LAB_142141290;
          }
          if (local_768->ArrayNum != 0) {
            FScriptArrayHelper::DestructItems
                      ((FScriptArrayHelper *)(local_790 + 0x20),0,local_768->ArrayNum);
            local_768->ArrayNum = 0;
            if ((local_758 & CPF_Edit) == CPF_None) {
              if (local_768->ArrayMax != 0) {
                TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                          ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)local_768,0,local_760,
                           local_75c);
              }
            }
            else if (local_768->ArrayMax != 0) {
              TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo(local_768,0,local_760,local_75c);
            }
          }
          SkipWhitespace((wchar_t **)local_7b8);
          plVar7 = (longlong *)local_7b8;
          local_7b8 = (undefined1  [8])((longlong)(longlong *)local_7b8 + 2);
          pFVar39 = local_7a8;
          puVar33 = auStackY_808;
          auVar22 = local_7b8;
          if ((wchar_t)*plVar7 == L'(') goto LAB_1421406a2;
          puVar33 = auStackY_808;
          if (2 < (byte)LogExec._0_1_) {
            FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                      (&local_488,(FName)LogExec._4_8_,Warning);
            FOutputDevice::LogfImpl
                      (local_7a8,L"Missing \'(\' in default properties array operation: %s");
            FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
            FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
                      (&local_488);
            auVar46 = local_7b8;
            FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope(&local_d8)
            ;
            local_7b8 = auVar46;
            puVar43 = auStackY_808;
            goto LAB_142141e80;
          }
        }
        goto LAB_142141b46;
      }
      if (uVar38 != 0) {
        if (((uVar38 - 1 & 0xfffffffc) == 0) && (uVar38 != 3)) {
          SkipWhitespace((wchar_t **)local_7b8);
          plVar7 = (longlong *)local_7b8;
          local_7b8 = (undefined1  [8])((longlong)(longlong *)local_7b8 + 2);
          if ((wchar_t)*plVar7 == L'(') {
            SkipWhitespace((wchar_t **)local_7b8);
            if (uVar38 == 4) {
              pcVar6 = *(code **)(pFVar31->_padding_ + 0x1f0);
              if (((int)pFVar31->_padding_ < 1) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2dd,
                                      L"Array index out of bounds: %i from an array of size %i"),
                 bVar11)) {
                pcVar6 = (code *)swi(3);
                pwVar17 = (wchar_t *)(*pcVar6)();
                return pwVar17;
              }
              uVar8 = local_790._16_8_;
              if (((UObject *)local_790._16_8_ == (UObject *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ContainerPtr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2de,L""), bVar11)) {
                pcVar6 = (code *)swi(3);
                pwVar17 = (wchar_t *)(*pcVar6)();
                return pwVar17;
              }
              (*pcVar6)(pFVar31,local_790._24_8_,
                        (undefined1 *)uVar8 + *(int *)((longlong)&pFVar31->_padding_ + 4));
              pFVar39 = local_7a8;
            }
            else {
              ::FString::FString(&local_638,L"");
              FOutputDevice::FOutputDevice(&local_648);
              local_648.bAutoEmitLineTerminator = false;
              local_648._padding_ = (longlong)&___7FStringOutputDevice__6B_;
              if (uVar38 == 1) {
                if (((int)pFVar31->_padding_ < 1) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                        ,0x2dd,
                                        L"Array index out of bounds: %i from an array of size %i"),
                   bVar11)) {
                  pcVar6 = (code *)swi(3);
                  pwVar17 = (wchar_t *)(*pcVar6)();
                  return pwVar17;
                }
                uVar8 = local_790._16_8_;
                if (((UObject *)local_790._16_8_ == (UObject *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ContainerPtr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                        ,0x2de,L""), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  pwVar17 = (wchar_t *)(*pcVar6)();
                  return pwVar17;
                }
                pFVar44 = (FMapProperty *)
                          FMulticastDelegateProperty::ImportText_Add
                                    ((FMulticastDelegateProperty *)pFVar31,(wchar_t *)local_7b8,
                                     (undefined1 *)uVar8 +
                                     *(int *)((longlong)&pFVar31->_padding_ + 4),local_790._8_4_,
                                     (UObject *)local_790._24_8_,&local_648);
              }
              else {
                pFVar44 = pFVar45;
                if (uVar38 == 2) {
                  pvVar21 = ContainerVoidPtrToValuePtrInternal
                                      ((FProperty *)pFVar31,(void *)local_790._16_8_,0);
                  pFVar44 = (FMapProperty *)
                            FMulticastDelegateProperty::ImportText_Remove
                                      ((FMulticastDelegateProperty *)pFVar31,(wchar_t *)local_7b8,
                                       pvVar21,local_790._8_4_,(UObject *)local_790._24_8_,
                                       &local_648);
                }
              }
              pFVar39 = local_7a8;
              if ((local_638.Data.ArrayNum == 0) || (local_638.Data.ArrayNum + -1 < 1)) {
                if ((pFVar44 == (FMapProperty *)0x0) || ((undefined1  [8])pFVar44 == local_7b8)) {
                  FOutputDevice::LogfImpl
                            (local_7a8,Warning,
                             L"Unable to parse parameter value \'%s\' in defaultproperties multi-cast delegate operation: %s"
                            );
                  goto LAB_142140143;
                }
LAB_14214014e:
                local_7b8 = (undefined1  [8])pFVar44;
              }
              else {
                local_720._8_8_ = (FString *)0x0;
                local_710 = 0;
                ::FString::ParseIntoArray
                          (&local_638,(TArray<FString,TSizedDefaultAllocator<32>_> *)(local_720 + 8)
                           ,L"\r\n",true);
                pFVar39 = local_7a8;
                if (0 < (int)local_710) {
                  do {
                    uVar36 = (uint)pFVar45;
                    uVar38 = uVar37;
                    if ((int)uVar36 < (int)local_710) {
                      uVar38 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar38 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar6 = (code *)swi(3);
                      pwVar17 = (wchar_t *)(*pcVar6)();
                      return pwVar17;
                    }
                    FOutputDevice::LogfImpl(pFVar39,Warning,L"%s");
                    pFVar45 = (FMapProperty *)(ulonglong)(uVar36 + 1);
                  } while ((int)(uVar36 + 1) < (int)local_710);
                }
                DestructItems<FString,int>((FString *)local_720._8_8_,(int)local_710);
                if ((FString *)local_720._8_8_ != (FString *)0x0) {
                  FMemory::Free((void *)local_720._8_8_);
                }
LAB_142140143:
                if (pFVar44 != (FMapProperty *)0x0) goto LAB_14214014e;
              }
              FOutputDevice::~FOutputDevice(&local_648);
              if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_638.Data.AllocatorInstance.Data);
              }
            }
            SkipWhitespace((wchar_t **)local_7b8);
            if ((wchar_t)*(longlong *)local_7b8 == L')') {
              local_7b8 = (undefined1  [8])((longlong)(longlong *)local_7b8 + 2);
              FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
                        (&local_d8);
              puVar43 = auStackY_808;
              goto LAB_142141e80;
            }
            puVar33 = auStackY_808;
            if (2 < (byte)LogExec._0_1_) {
              FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                        (&local_4b8,(FName)LogExec._4_8_,Warning);
              FOutputDevice::LogfImpl
                        (pFVar39,
                         L"Missing \')\' in default properties multi-cast delegate operation: %s");
              FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
              FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
                        (&local_4b8);
              auVar46 = local_7b8;
              FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
                        (&local_d8);
              local_7b8 = auVar46;
              puVar43 = auStackY_808;
              goto LAB_142141e80;
            }
          }
          else {
            puVar33 = auStackY_808;
            if (2 < (byte)LogExec._0_1_) {
              FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                        (&local_4c8,(FName)LogExec._4_8_,Warning);
              FOutputDevice::LogfImpl
                        (pFVar39,
                         L"Missing \'(\' in default properties multi-cast delegate operation: %s");
              FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
              FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
                        (&local_4c8);
              auVar46 = local_7b8;
              FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
                        (&local_d8);
              local_7b8 = auVar46;
              puVar43 = auStackY_808;
              goto LAB_142141e80;
            }
          }
        }
        else {
          puVar33 = auStackY_808;
          if (2 < (byte)LogExec._0_1_) {
            FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                      (&local_4a8,(FName)LogExec._4_8_,Warning);
            FOutputDevice::LogfImpl
                      (pFVar39,L"Unsupported operation on multi-cast delegate variable: %s");
            FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
            FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
                      (&local_4a8);
            auVar46 = local_7b8;
            FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope(&local_d8)
            ;
            local_7b8 = auVar46;
            puVar43 = auStackY_808;
            goto LAB_142141e80;
          }
        }
LAB_142141b46:
        auVar46 = local_7b8;
        *(undefined8 *)(puVar33 + -8) = 0x142141b56;
        FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope(&local_d8);
        local_7b8 = auVar46;
        puVar43 = puVar33;
        goto LAB_142141e80;
      }
LAB_142140af6:
      iVar14 = ReadArrayIndex(param_3,(wchar_t **)local_7b8,pFVar39);
      SkipWhitespace((wchar_t **)local_7b8);
      plVar7 = (longlong *)local_7b8;
      local_7b8 = (undefined1  [8])((longlong)(longlong *)local_7b8 + 2);
      if ((wchar_t)*plVar7 != L'=') {
        FOutputDevice::LogfImpl
                  (pFVar39,Warning,L"Missing \'=\' in default properties assignment: %s");
        auVar46 = local_7b8;
        FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope(&local_d8);
        local_7b8 = auVar46;
        puVar43 = auStackY_808;
        goto LAB_142141e80;
      }
      SkipWhitespace((wchar_t **)local_7b8);
      local_680 = (UObject *)local_790._24_8_;
      local_678 = local_790._8_4_;
      local_670 = pFVar39;
      local_668 = (FMapProperty *)auVar46;
      local_660 = param_3;
      if (local_7b0[1] == false) {
LAB_142141aca:
        if (pFVar28 == (FMapProperty *)0x0) {
LAB_142141ad9:
          if ((int)pFVar31->_padding_ <= iVar14) {
            FOutputDevice::LogfImpl
                      (pFVar39,Warning,L"Out of bound array default property (%i/%i): %s");
            auVar46 = local_7b8;
            FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope(&local_d8)
            ;
            local_7b8 = auVar46;
            puVar43 = auStackY_808;
            goto LAB_142141e80;
          }
        }
LAB_142141176:
        uVar8 = local_620._16_8_;
        pFVar4 = ((ForAnyElementType *)local_620._16_8_)->Data;
        for (pFVar29 = pFVar4; local_6b0 = pFVar31, iStack_6a8 = iVar14,
            pFVar29 != pFVar4 + (longlong)*(int *)(local_620._16_8_ + 8) * 0x10;
            pFVar29 = pFVar29 + 0x10) {
          if ((*(FMapProperty **)pFVar29 == pFVar31) && (*(int *)(pFVar29 + 8) == iVar14)) {
            if ((int)((longlong)pFVar29 - (longlong)pFVar4 >> 4) != -1) {
              FOutputDevice::LogfImpl(local_7a8,Warning,L"redundant data: %s");
              puVar33 = auStackY_808;
              goto LAB_142141b46;
            }
            break;
          }
        }
        if (((pFVar4 <= (FScriptContainerElement *)&local_6b0) &&
            ((FScriptContainerElement *)&local_6b0 <
             pFVar4 + (longlong)*(int *)(local_620._16_8_ + 0xc) * 0x10)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pwVar17 = (wchar_t *)(*pcVar6)();
          return pwVar17;
        }
        iVar15 = *(int *)(uVar8 + 8);
        if (iVar15 == *(int *)(uVar8 + 0xc)) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)uVar8,(int *)(uVar8 + 0xc));
        }
        *(int *)(uVar8 + 8) = iVar15 + 1;
        pFVar4 = ((ForAnyElementType *)uVar8)->Data + (longlong)iVar15 * 0x10;
        *(FMapProperty **)pFVar4 = local_6b0;
        *(ulonglong *)(pFVar4 + 8) = CONCAT44(uStack_6a4,iStack_6a8);
        if ((((local_7b8 != (undefined1  [8])0x0) &&
             (wVar13 = (wchar_t)*(longlong *)local_7b8, wVar13 != L'\0')) &&
            ((wVar13 != L',' && (wVar13 != L')')))) ||
           (auVar46 = local_7b8, pFVar28 != (FMapProperty *)0x0)) {
          bVar11 = IsThisNotNull(pFVar31,"FField::GetFName");
          if (bVar11) {
            pFVar44 = (FMapProperty *)pFVar31->_padding_;
          }
          else {
            local_690 = 0;
            pFVar44 = pFVar45;
          }
          FVar16 = FNameEntryId::FromValidEName((EName)local_628);
          uStack_684 = 0;
          local_688 = *(uint *)CONCAT44(extraout_var,FVar16.Value);
          if ((pFVar44 == (FMapProperty *)(ulonglong)local_688) && ((pFVar31->_padding_ & 1U) != 0))
          {
            pUVar26 = (UObject *)(pFVar31->_padding_ & 0xfffffffffffffffe);
            if ((pUVar26 != (UObject *)0x0) && (UE::GC::GIsIncrementalReachabilityPending != false))
            {
              UE::GC::MarkAsReachable(pUVar26);
            }
            pUVar26 = FField::GetOwner<UObject>((FField *)pFVar31);
            uVar24 = *(ulonglong *)&pUVar26->field_0x18;
            FVar16 = FNameEntryId::FromValidEName((EName)local_624);
            uStack_6b4 = 0;
            local_6b8.Value = *(uint *)CONCAT44(extraout_var_00,FVar16.Value);
            if (uVar24 != local_6b8.Value) goto LAB_142141bfe;
          }
          else {
LAB_142141bfe:
            if ((iVar14 < 0) || (pFVar28 == (FMapProperty *)0x0)) {
              pFVar3 = (FFieldClass *)pFVar31->_padding_;
              pFVar19 = FEnumProperty::StaticClass();
              if (pFVar3 != pFVar19) {
                if (iVar14 == -1) {
                  iVar14 = 0;
                }
                pFVar45 = ContainerVoidPtrToValuePtrInternal
                                    ((FProperty *)pFVar31,(void *)local_790._16_8_,iVar14);
                goto LAB_142141da8;
              }
              if (iVar14 == -1) {
                iVar14 = 0;
              }
              SkipWhitespace((wchar_t **)local_7b8);
              bVar11 = (wchar_t)*(longlong *)local_7b8 == L'\"';
              if (bVar11) {
                local_7b8 = (undefined1  [8])((longlong)(longlong *)local_7b8 + 2);
              }
              pvVar21 = ContainerVoidPtrToValuePtrInternal
                                  ((FProperty *)pFVar31,(void *)local_790._16_8_,iVar14);
              pFVar44 = (FMapProperty *)
                        `FProperty::ImportSingleProperty'::__l250::<lambda_1>::operator()
                                  (&local_680,(wchar_t *)local_7b8,(FProperty *)pFVar31,pvVar21);
              local_6e8 = pFVar44;
              if (pFVar44 == (FMapProperty *)0x0) goto LAB_142141dc1;
              if (bVar11) {
                SkipWhitespace((wchar_t **)&local_6e8);
                if ((wchar_t)local_6e8->_padding_ == L'\"') {
                  local_7b8 = (undefined1  [8])((longlong)&local_6e8->_padding_ + 2);
                  FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
                            (&local_d8);
                  puVar43 = auStackY_808;
                }
                else {
                  FOutputDevice::LogfImpl
                            (local_7a8,Warning,
                             L"Property delineated by quotes is missing ending quote: %s");
                  local_7b8 = (undefined1  [8])local_6e8;
                  FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
                            (&local_d8);
                  puVar43 = auStackY_808;
                }
                goto LAB_142141e80;
              }
            }
            else {
              pvVar21 = ContainerVoidPtrToValuePtrInternal
                                  ((FProperty *)pFVar28,(void *)local_790._16_8_,0);
              EVar2 = *(EArrayPropertyFlags *)&((TObjectPtr<UClass> *)&pFVar28->KeyProp)->field0_0x0
              ;
              uVar38 = (**(code **)(pFVar28->ValueProp->_padding_ + 0x168))();
              FScriptArrayHelper::FScriptArrayHelper
                        ((FScriptArrayHelper *)(local_518 + 0x10),Internal,pFVar28->ValueProp,
                         pvVar21,pFVar28->ValueProp->ElementSize,uVar38,EVar2);
              FScriptArrayHelper::ExpandForIndex((FScriptArrayHelper *)(local_518 + 0x10),iVar14);
              if ((int)local_500[1] != 0) {
                uVar24 = *local_500;
                if (((local_4f0 & 1) != 0) && ((uVar24 & 1) != 0)) {
                  uVar24 = (longlong)local_500 + ((longlong)uVar24 >> 0x18);
                }
                pFVar45 = (FMapProperty *)(uVar24 + (longlong)iVar14 * (longlong)local_4f8);
              }
              pFVar31 = (FMapProperty *)pFVar28->ValueProp;
LAB_142141da8:
              pFVar44 = (FMapProperty *)
                        `FProperty::ImportSingleProperty'::__l250::<lambda_1>::operator()
                                  (&local_680,(wchar_t *)local_7b8,(FProperty *)pFVar31,pFVar45);
              if (pFVar44 == (FMapProperty *)0x0) goto LAB_142141dc1;
            }
            local_7b8 = (undefined1  [8])pFVar44;
          }
LAB_142141dc1:
          FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope(&local_d8);
          puVar43 = auStackY_808;
          goto LAB_142141e80;
        }
      }
      else {
        puVar33 = auStackY_808;
        if (local_7b0[0] == true) goto LAB_142141b46;
        if (local_7b0[0] == true) goto LAB_142141aca;
        if (pFVar28 == (FMapProperty *)0x0) {
          pFVar3 = (FFieldClass *)pFVar31->_padding_;
          pFVar19 = FMapProperty::StaticClass();
          pFVar35 = pFVar45;
          if (pFVar3 == pFVar19) {
            pFVar35 = pFVar31;
          }
          if (pFVar35 != (FMapProperty *)0x0) {
            local_720._0_8_ = pFVar35;
            pvVar21 = ContainerVoidPtrToValuePtrInternal
                                ((FProperty *)pFVar35,(void *)local_790._16_8_,0);
            FScriptMapHelper::FScriptMapHelper(&local_328,pFVar35,pvVar21);
            iVar14 = (((FScriptMapLayout *)(local_720._0_8_ + 0x80))->SetLayout).Size;
            pFVar31 = pFVar45;
            if (iVar14 != 0) {
              uVar34 = (ulonglong)(iVar14 + 0xf);
              uVar24 = uVar34 + 0xf;
              if (uVar24 <= uVar34) {
                uVar24 = 0xffffffffffffff0;
              }
              puVar42 = auStackY_808 + -(uVar24 & 0xfffffffffffffff0);
              pFVar31 = (FMapProperty *)(local_7b0 + -(uVar24 & 0xfffffffffffffff0));
            }
            pFVar5 = *(FProperty **)(local_720._0_8_ + 0x70);
            local_790._0_8_ = pFVar31;
            *(undefined8 *)(puVar42 + -8) = 0x14214133e;
            InitializeValue(pFVar5,pFVar31);
            iVar14 = ((FScriptMapLayout *)(local_720._0_8_ + 0x80))->ValueOffset;
            plVar7 = (longlong *)local_790._0_8_;
            pFVar5 = *(FProperty **)(local_720._0_8_ + 0x78);
            *(undefined8 *)(puVar42 + -8) = 0x142141359;
            InitializeValue(pFVar5,(undefined1 *)((longlong)plVar7 + (longlong)iVar14));
            pFVar5 = local_328.KeyProp;
            uVar8 = local_790._0_8_;
            auVar46 = local_7b8;
            local_5a8 = (FProperty *)local_720;
            pFStack_5a0 = (FProperty *)local_790;
            puVar43 = puVar42;
            local_398 = local_5a8;
            pFStack_390 = pFStack_5a0;
            if (local_7b0[0] == true) {
              local_798 = (FMapProperty *)local_7b8;
              *(undefined8 *)(puVar42 + -8) = 0x142141849;
              SkipWhitespace((wchar_t **)&local_798);
              plVar7 = &local_798->_padding_;
              local_798 = (FMapProperty *)((longlong)&local_798->_padding_ + 2);
              if ((short)*plVar7 == 0x28) {
                *(undefined8 *)(puVar42 + -8) = 0x14214186b;
                SkipWhitespace((wchar_t **)&local_798);
                pFVar5 = local_328.KeyProp;
                uVar8 = local_790._0_8_;
                pFVar45 = local_798;
                *(undefined8 *)(puVar42 + -8) = 0x142141886;
                local_798 = (FMapProperty *)
                            `FProperty::ImportSingleProperty'::__l250::<lambda_1>::operator()
                                      (&local_680,(wchar_t *)pFVar45,pFVar5,(void *)uVar8);
                uVar8 = local_790._0_8_;
                if ((local_328.MapFlags & UsesMemoryImageAllocator) == None) {
                  local_5d8.DebugPtr = (UField *)local_328.KeyProp;
                  local_620._8_8_ = local_328.KeyProp;
                  local_530 = &local_5d8;
                  local_4e0 = local_620 + 8;
                  local_538 = UE::Core::Private::Function::
                              TFunctionRefCaller<``FScriptMapHelper::FindMapPairIndexFromHash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                              ::Call;
                  local_4e8 = UE::Core::Private::Function::
                              TFunctionRefCaller<``FScriptMapHelper::FindMapPairIndexFromHash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                              ::Call;
                  *(code ***)(puVar42 + 0x20) = &local_538;
                  *(undefined8 *)(puVar42 + -8) = 0x142141971;
                  iVar14 = TScriptMap<FDefaultSetAllocator,FScriptMap>::FindPairIndex
                                     ((TScriptMap<FDefaultSetAllocator,FScriptMap> *)
                                      local_328.field2_0x10.HeapMap,(void *)uVar8,
                                      &local_328.MapLayout,
                                      (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_4e8
                                      ,*(TFunctionRef<bool___cdecl(void_const_*,void_const_*)> **)
                                        (puVar42 + 0x20));
                }
                else {
                  local_620._32_8_ = local_328.KeyProp;
                  local_5f0 = local_328.KeyProp;
                  local_550 = local_620 + 0x20;
                  local_540 = &local_5f0;
                  local_558 = UE::Core::Private::Function::
                              TFunctionRefCaller<``FScriptMapHelper::FindMapPairIndexFromHash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                              ::Call;
                  local_548 = UE::Core::Private::Function::
                              TFunctionRefCaller<``FScriptMapHelper::FindMapPairIndexFromHash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                              ::Call;
                  *(code ***)(puVar42 + 0x20) = &local_558;
                  *(undefined8 *)(puVar42 + -8) = 0x14214190a;
                  iVar14 = TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
                           ::FindPairIndex(local_328.field2_0x10.FreezableMap,(void *)uVar8,
                                           &local_328.MapLayout,
                                           (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)
                                           &local_548,
                                           *(TFunctionRef<bool___cdecl(void_const_*,void_const_*)>
                                             **)(puVar42 + 0x20));
                }
                *(undefined8 *)(puVar42 + -8) = 0x14214197c;
                SkipWhitespace((wchar_t **)&local_798);
                plVar7 = &local_798->_padding_;
                local_798 = (FMapProperty *)((longlong)&local_798->_padding_ + 2);
                if ((wchar_t)*plVar7 == L',') {
                  if (iVar14 == -1) {
                    puVar30 = (uchar *)((longlong)(longlong *)local_790._0_8_ +
                                       (longlong)local_328.MapLayout.ValueOffset);
                  }
                  else {
                    local_518._0_8_ = &local_328;
                    local_518._8_4_ = iVar14;
                    *(undefined8 *)(puVar42 + -8) = 0x1421419c1;
                    puVar30 = FScriptMapHelper::
                              WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                                        (&local_328,(<lambda_1> *)local_518);
                  }
                  pFVar45 = local_798;
                  *(undefined8 *)(puVar42 + -8) = 0x1421419e8;
                  local_798 = (FMapProperty *)
                              `FProperty::ImportSingleProperty'::__l250::<lambda_1>::operator()
                                        (&local_680,(wchar_t *)pFVar45,local_328.ValueProp,puVar30);
                  *(undefined8 *)(puVar42 + -8) = 0x1421419f5;
                  SkipWhitespace((wchar_t **)&local_798);
                  pFVar10 = local_750;
                  plVar7 = &local_798->_padding_;
                  local_798 = (FMapProperty *)((longlong)&local_798->_padding_ + 2);
                  if (((wchar_t)*plVar7 == L')') &&
                     (pFVar44 = local_798, local_750 != (FPropertyVisitorPath *)0x0)) {
                    *(undefined8 *)(puVar42 + -8) = 0x142141a2a;
                    FPropertyVisitorPath::ToSerializedPropertyChain(pFVar10,&local_138);
                    FVar20 = local_728;
                    if (local_728 != (FName)0x0) {
                      *(undefined8 *)(puVar42 + -8) = 0x142141a4a;
                      pFVar27 = FOverriddenPropertySet::RestoreOverriddenPropertyOperation
                                          ((FOverriddenPropertySet *)FVar20,Modified,&local_138,
                                           (FProperty *)0x0);
                      uVar8 = local_790._0_8_;
                      if (pFVar27 != (FOverriddenPropertyNode *)0x0) {
                        pFVar5 = *(FProperty **)(local_720._0_8_ + 0x70);
                        *(undefined8 *)(puVar42 + -8) = 0x142141a6d;
                        FOverriddenPropertyNodeID::FromMapKey(&local_348,pFVar5,(void *)uVar8);
                        *(undefined8 *)(puVar42 + -8) = 0x142141a81;
                        FOverriddenPropertySet::RestoreSubPropertyOperation
                                  ((FOverriddenPropertySet *)FVar20,Modified,pFVar27,&local_348);
                        if (local_348.Path.Path.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          *(undefined8 *)(puVar42 + -8) = 0x142141a92;
                          FMemory::Free(local_348.Path.Path.AllocatorInstance.Data);
                        }
                      }
                    }
                    pFVar44 = local_798;
                    if (local_138.SerializedPropertyChain.AllocatorInstance.SecondaryData !=
                        (ForElementType<FProperty_*>)0x0) {
                      *(undefined8 *)(puVar42 + -8) = 0x142141aa3;
                      FMemory::Free((void *)local_138.SerializedPropertyChain.AllocatorInstance.
                                            SecondaryData);
                      pFVar44 = local_798;
                    }
                  }
                }
              }
            }
            else if (local_7b0[0] == true) {
              local_7a0 = (FMapProperty *)local_7b8;
              *(undefined8 *)(puVar42 + -8) = 0x142141508;
              SkipWhitespace((wchar_t **)&local_7a0);
              plVar7 = &local_7a0->_padding_;
              local_7a0 = (FMapProperty *)((longlong)&local_7a0->_padding_ + 2);
              if ((short)*plVar7 == 0x28) {
                *(undefined8 *)(puVar42 + -8) = 0x14214152a;
                SkipWhitespace((wchar_t **)&local_7a0);
                pFVar5 = local_328.KeyProp;
                uVar8 = local_790._0_8_;
                pFVar45 = local_7a0;
                *(undefined8 *)(puVar42 + -8) = 0x142141545;
                local_7a0 = (FMapProperty *)
                            `FProperty::ImportSingleProperty'::__l250::<lambda_1>::operator()
                                      (&local_680,(wchar_t *)pFVar45,pFVar5,(void *)uVar8);
                *(undefined8 *)(puVar42 + -8) = 0x142141552;
                SkipWhitespace((wchar_t **)&local_7a0);
                plVar7 = &local_7a0->_padding_;
                local_7a0 = (FMapProperty *)((longlong)&local_7a0->_padding_ + 2);
                if ((wchar_t)*plVar7 == L',') {
                  *(undefined8 *)(puVar42 + -8) = 0x142141574;
                  SkipWhitespace((wchar_t **)&local_7a0);
                  uVar8 = local_790._0_8_;
                  if ((local_328.MapFlags & UsesMemoryImageAllocator) == None) {
                    local_430._8_8_ = local_328.ValueProp;
                    local_580 = (FProperty *)local_430;
                    local_588 = (FProperty *)
                                UE::Core::Private::Function::
                                TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_3>,void,void_*,void_*>
                                ::Call;
                    local_570 = (FProperty *)(local_620 + 0x28);
                    local_578 = (atomic<FUnversionedStructSchema_const_*>)
                                UE::Core::Private::Function::
                                TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                                ::Call;
                    local_560 = local_620 + 0x18;
                    local_568 = (FName)UE::Core::Private::Function::
                                       TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                                       ::Call;
                    *(FProperty ***)(puVar42 + 0x28) = &local_588;
                    local_430._0_8_ = local_328.KeyProp;
                    local_620._40_8_ = local_328.KeyProp;
                    local_620._24_8_ = local_328.KeyProp;
                    *(atomic<FUnversionedStructSchema_const_*> **)(puVar42 + 0x20) = &local_578;
                    local_430._16_8_ = uVar8;
                    *(undefined8 *)(puVar42 + -8) = 0x14214173c;
                    pvVar21 = TScriptMap<FDefaultSetAllocator,FScriptMap>::FindOrAdd
                                        ((TScriptMap<FDefaultSetAllocator,FScriptMap> *)
                                         local_328.field2_0x10.HeapMap,(void *)uVar8,
                                         &local_328.MapLayout,
                                         (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)
                                         &local_568,
                                         *(TFunctionRef<bool___cdecl(void_const_*,void_const_*)> **)
                                          (puVar42 + 0x20),
                                         *(TFunctionRef<void___cdecl(void_*,void_*)> **)
                                          (puVar42 + 0x28));
                  }
                  else {
                    local_458 = local_328.ValueProp;
                    local_448 = UE::Core::Private::Function::
                                TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_3>,void,void_*,void_*>
                                ::Call;
                    local_440 = &local_460;
                    local_590.Data = (FScriptContainerElement *)&local_448;
                    local_598 = (FProperty *)
                                UE::Core::Private::Function::
                                TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::FindOrAdd'::__l2::<lambda_1>,void,void_*>
                                ::Call;
                    local_528 = UE::Core::Private::Function::
                                TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
                                ::Call;
                    local_520 = local_5d0 + 8;
                    local_5d0._24_8_ =
                         UE::Core::Private::Function::
                         TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                         ::Call;
                    local_5b0 = (FProperty *)local_5d0;
                    *(FProperty ***)(puVar42 + 0x28) = &local_598;
                    local_460 = local_328.KeyProp;
                    local_5d0._8_8_ = local_328.KeyProp;
                    local_5d0._0_8_ = local_328.KeyProp;
                    *(code ***)(puVar42 + 0x20) = &local_528;
                    local_450 = (FMapProperty *)uVar8;
                    local_438 = local_328.MapLayout.ValueOffset;
                    *(undefined8 *)(puVar42 + -8) = 0x142141668;
                    iVar14 = TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
                             ::FindOrAdd((TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
                                          *)local_328.field2_0x10.HeapMap,(void *)uVar8,
                                         &local_328.MapLayout.SetLayout,
                                         (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)
                                         (local_5d0 + 0x18),
                                         *(TFunctionRef<bool___cdecl(void_const_*,void_const_*)> **)
                                          (puVar42 + 0x20),
                                         *(TFunctionRef<void___cdecl(void_*)> **)(puVar42 + 0x28));
                    uVar24 = ((local_328.field2_0x10.FreezableMap)->Pairs).Elements.Data._padding_;
                    if ((uVar24 & 1) != 0) {
                      uVar24 = (longlong)
                               &(((TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                                   *)&(local_328.field2_0x10.HeapMap)->field_0x0)->Data)._padding_ +
                               ((longlong)uVar24 >> 0x18);
                    }
                    pvVar21 = (void *)((longlong)
                                       (iVar14 * local_328.MapLayout.SetLayout.SparseArrayLayout.
                                                 Size) + uVar24 +
                                      (longlong)local_328.MapLayout.ValueOffset);
                  }
                  pFVar45 = local_7a0;
                  *(undefined8 *)(puVar42 + -8) = 0x142141756;
                  local_7a0 = (FMapProperty *)
                              `FProperty::ImportSingleProperty'::__l250::<lambda_1>::operator()
                                        (&local_680,(wchar_t *)pFVar45,local_328.ValueProp,pvVar21);
                  *(undefined8 *)(puVar42 + -8) = 0x142141763;
                  SkipWhitespace((wchar_t **)&local_7a0);
                  pFVar10 = local_750;
                  plVar7 = &local_7a0->_padding_;
                  local_7a0 = (FMapProperty *)((longlong)&local_7a0->_padding_ + 2);
                  if (((wchar_t)*plVar7 == L')') &&
                     (pFVar44 = local_7a0, local_750 != (FPropertyVisitorPath *)0x0)) {
                    *(undefined8 *)(puVar42 + -8) = 0x142141798;
                    FPropertyVisitorPath::ToSerializedPropertyChain(pFVar10,&local_190);
                    FVar20 = local_728;
                    if (local_728 != (FName)0x0) {
                      *(undefined8 *)(puVar42 + -8) = 0x1421417b8;
                      pFVar27 = FOverriddenPropertySet::RestoreOverriddenPropertyOperation
                                          ((FOverriddenPropertySet *)FVar20,Modified,&local_190,
                                           (FProperty *)0x0);
                      uVar8 = local_790._0_8_;
                      if (pFVar27 != (FOverriddenPropertyNode *)0x0) {
                        pFVar5 = *(FProperty **)(local_720._0_8_ + 0x70);
                        *(undefined8 *)(puVar42 + -8) = 0x1421417db;
                        FOverriddenPropertyNodeID::FromMapKey(&local_368,pFVar5,(void *)uVar8);
                        *(undefined8 *)(puVar42 + -8) = 0x1421417ef;
                        FOverriddenPropertySet::RestoreSubPropertyOperation
                                  ((FOverriddenPropertySet *)FVar20,Add,pFVar27,&local_368);
                        if (local_368.Path.Path.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          *(undefined8 *)(puVar42 + -8) = 0x142141800;
                          FMemory::Free(local_368.Path.Path.AllocatorInstance.Data);
                        }
                      }
                    }
                    if (local_190.SerializedPropertyChain.AllocatorInstance.SecondaryData !=
                        (ForElementType<FProperty_*>)0x0) {
                      *(undefined8 *)(puVar42 + -8) = 0x142141811;
                      FMemory::Free((void *)local_190.SerializedPropertyChain.AllocatorInstance.
                                            SecondaryData);
                    }
                    pFVar44 = local_7a0;
                    *(undefined8 *)(puVar42 + -8) = 0x142141824;
                    ScopeExitSupport::
                    TScopeGuard<`FProperty::ImportSingleProperty'::__l322::<lambda_2>_>::
                    ~TScopeGuard<_FProperty::ImportSingleProperty_::__l322::<lambda_2>_>(&local_398)
                    ;
                    *(undefined8 *)(puVar42 + -8) = 0x142141830;
                    FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
                              (&local_d8);
                    local_7b8 = (undefined1  [8])pFVar44;
                    goto LAB_142141e80;
                  }
                }
              }
            }
            else if (local_7b0[0] == true) {
              *(undefined8 *)(puVar42 + -8) = 0x142141401;
              pFVar44 = (FMapProperty *)
                        `FProperty::ImportSingleProperty'::__l250::<lambda_1>::operator()
                                  (&local_680,(wchar_t *)auVar46,pFVar5,(void *)uVar8);
              local_478 = &local_328;
              local_470 = (FMapProperty *)local_790._0_8_;
              local_468 = local_328.KeyProp;
              *(undefined8 *)(puVar42 + -8) = 0x14214143e;
              FScriptMapHelper::WithScriptMap<_FScriptMapHelper::RemovePair_::__l2::<lambda_1>_>
                        (&local_328,(<lambda_1> *)&local_478);
              pFVar10 = local_750;
              if (local_750 != (FPropertyVisitorPath *)0x0) {
                *(undefined8 *)(puVar42 + -8) = 0x14214145a;
                FPropertyVisitorPath::ToSerializedPropertyChain(pFVar10,&local_1e8);
                FVar20 = local_728;
                if (local_728 != (FName)0x0) {
                  *(undefined8 *)(puVar42 + -8) = 0x14214147a;
                  pFVar27 = FOverriddenPropertySet::RestoreOverriddenPropertyOperation
                                      ((FOverriddenPropertySet *)FVar20,Modified,&local_1e8,
                                       (FProperty *)0x0);
                  uVar8 = local_790._0_8_;
                  if (pFVar27 != (FOverriddenPropertyNode *)0x0) {
                    pFVar5 = *(FProperty **)(local_720._0_8_ + 0x70);
                    *(undefined8 *)(puVar42 + -8) = 0x14214149d;
                    FOverriddenPropertyNodeID::FromMapKey(&local_388,pFVar5,(void *)uVar8);
                    *(undefined8 *)(puVar42 + -8) = 0x1421414b1;
                    FOverriddenPropertySet::RestoreSubPropertyOperation
                              ((FOverriddenPropertySet *)FVar20,Remove,pFVar27,&local_388);
                    if (local_388.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                       ) {
                      *(undefined8 *)(puVar42 + -8) = 0x1421414c2;
                      FMemory::Free(local_388.Path.Path.AllocatorInstance.Data);
                    }
                  }
                }
                if (local_1e8.SerializedPropertyChain.AllocatorInstance.SecondaryData !=
                    (ForElementType<FProperty_*>)0x0) {
                  *(undefined8 *)(puVar42 + -8) = 0x1421414d7;
                  FMemory::Free((void *)local_1e8.SerializedPropertyChain.AllocatorInstance.
                                        SecondaryData);
                  *(undefined8 *)(puVar42 + -8) = 0x1421414e3;
                  ScopeExitSupport::
                  TScopeGuard<`FProperty::ImportSingleProperty'::__l322::<lambda_2>_>::
                  ~TScopeGuard<_FProperty::ImportSingleProperty_::__l322::<lambda_2>_>(&local_398);
                  *(undefined8 *)(puVar42 + -8) = 0x1421414ef;
                  FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
                            (&local_d8);
                  local_7b8 = (undefined1  [8])pFVar44;
                  goto LAB_142141e80;
                }
              }
            }
            else {
              *(undefined8 *)(puVar42 + -8) = 0x1421413bc;
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                                  ,0x875,L"Unsupported map operation while importing text");
              pFVar44 = pFVar45;
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                pwVar17 = (wchar_t *)(*pcVar6)();
                return pwVar17;
              }
            }
            *(undefined8 *)(puVar42 + -8) = 0x142141ab6;
            ScopeExitSupport::TScopeGuard<`FProperty::ImportSingleProperty'::__l322::<lambda_2>_>::
            ~TScopeGuard<_FProperty::ImportSingleProperty_::__l322::<lambda_2>_>(&local_398);
            *(undefined8 *)(puVar42 + -8) = 0x142141ac2;
            FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope(&local_d8)
            ;
            local_7b8 = (undefined1  [8])pFVar44;
            goto LAB_142141e80;
          }
          local_720._0_8_ = 0;
          pFVar39 = local_7a8;
          goto LAB_142141ad9;
        }
        if (((int)pFVar28->_padding_ < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar11)) {
          pcVar6 = (code *)swi(3);
          pwVar17 = (wchar_t *)(*pcVar6)();
          return pwVar17;
        }
        uVar8 = local_790._16_8_;
        if (((UObject *)local_790._16_8_ == (UObject *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          pwVar17 = (wchar_t *)(*pcVar6)();
          return pwVar17;
        }
        iVar15 = *(int *)((longlong)&pFVar28->_padding_ + 4);
        EVar2 = *(EArrayPropertyFlags *)&((TObjectPtr<UClass> *)&pFVar28->KeyProp)->field0_0x0;
        local_748.ElementAlignment = (**(code **)(pFVar28->ValueProp->_padding_ + 0x168))();
        local_748.InnerProperty = pFVar28->ValueProp;
        local_748.ElementSize = (local_748.InnerProperty)->ElementSize;
        local_748.field1_0x8.HeapArray = (FScriptArray *)((undefined1 *)uVar8 + iVar15);
        local_748.ArrayFlags = EVar2;
        if ((local_748.ElementSize < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ElementSize > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x1177,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          pwVar17 = (wchar_t *)(*pcVar6)();
          return pwVar17;
        }
        if ((local_748.InnerProperty == (FProperty *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InnerProperty",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x1178,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          pwVar17 = (wchar_t *)(*pcVar6)();
          return pwVar17;
        }
        if ((local_7b0[1] == false) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pwVar17 = (wchar_t *)(*pcVar6)();
          return pwVar17;
        }
        if (local_7b0[0] == true) {
          pFVar44 = (FMapProperty *)pFVar28->ValueProp;
          if ((pFVar44->_padding_ & 0x2000000000000U) != 0) {
            if ((pFVar44 == (FMapProperty *)0x0) ||
               ((*(uint *)(pFVar44->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
              pFVar44 = pFVar45;
            }
            if (pFVar44 != (FMapProperty *)0x0) {
              iVar15 = *(int *)((longlong)&pFVar44->_padding_ + 4);
              pFVar31 = pFVar45;
              if (iVar15 != 0) {
                uVar34 = (ulonglong)(iVar15 + 0xf);
                uVar24 = uVar34 + 0xf;
                if (uVar24 <= uVar34) {
                  uVar24 = 0xffffffffffffff0;
                }
                puVar41 = auStackY_808 + -(uVar24 & 0xfffffffffffffff0);
                pFVar31 = (FMapProperty *)(local_7b0 + -(uVar24 & 0xfffffffffffffff0));
              }
              *(undefined8 *)(puVar41 + -8) = 0x142140fa6;
              InitializeValue((FProperty *)pFVar44,pFVar31);
              auVar46 = local_7b8;
              *(undefined8 *)(puVar41 + -8) = 0x142140fbc;
              pFVar28 = (FMapProperty *)
                        `FProperty::ImportSingleProperty'::__l250::<lambda_1>::operator()
                                  (&local_680,(wchar_t *)auVar46,(FProperty *)pFVar44,pFVar31);
              pcVar6 = *(code **)(pFVar44->_padding_ + 0x1f8);
              local_790._24_8_ = pFVar28;
              *(undefined8 *)(puVar41 + -8) = 0x142140fd6;
              TVar25.Val = (UObject *)(*pcVar6)(pFVar44,pFVar31);
              if (TVar25.Val != (UObject *)0x0) {
                *(undefined8 *)(puVar41 + -8) = 0x142140fea;
                local_790._16_8_ = UObject::GetArchetype(TVar25.Val);
                iVar15 = (local_748.field1_0x8.FreezableArray)->ArrayNum;
                pFVar28 = pFVar45;
                if (0 < iVar15) {
                  do {
                    pcVar6 = *(code **)(pFVar44->_padding_ + 0x1f8);
                    iVar48 = (int)pFVar28;
                    pFVar35 = pFVar45;
                    if ((local_748.field1_0x8.FreezableArray)->ArrayNum != 0) {
                      puVar33 = (undefined1 *)(local_748.field1_0x8.FreezableArray)->_padding_;
                      if (((local_748.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                         (((ulonglong)puVar33 & 1) != 0)) {
                        puVar33 = &(local_748.field1_0x8.HeapArray)->field_0x0 +
                                  ((longlong)puVar33 >> 0x18);
                      }
                      pFVar35 = (FMapProperty *)
                                (puVar33 + (longlong)local_748.ElementSize * (longlong)pFVar28);
                    }
                    *(undefined8 *)(puVar41 + -8) = 0x142141049;
                    pUVar26 = (UObject *)(*pcVar6)(pFVar44,pFVar35);
                    if ((pUVar26 == TVar25.Val) || (pUVar26 == (UObject *)local_790._16_8_))
                    goto LAB_142141081;
                    pFVar28 = (FMapProperty *)(ulonglong)(iVar48 + 1U);
                  } while ((int)(iVar48 + 1U) < iVar15);
                }
                iVar48 = iVar14;
                if (iVar14 == -1) {
                  iVar48 = (local_748.field1_0x8.FreezableArray)->ArrayNum;
                  *(undefined8 *)(puVar41 + -8) = 0x14214107d;
                  FScriptArrayHelper::ExpandForIndex(&local_748,iVar48);
                }
LAB_142141081:
                if ((local_748.field1_0x8.FreezableArray)->ArrayNum != 0) {
                  puVar33 = (undefined1 *)(local_748.field1_0x8.FreezableArray)->_padding_;
                  if (((local_748.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                     (((ulonglong)puVar33 & 1) != 0)) {
                    puVar33 = &(local_748.field1_0x8.HeapArray)->field_0x0 +
                              ((longlong)puVar33 >> 0x18);
                  }
                  pFVar45 = (FMapProperty *)
                            (puVar33 + (longlong)iVar48 * (longlong)local_748.ElementSize);
                }
                *(undefined8 *)(puVar41 + -8) = 0x1421410c1;
                FObjectPropertyBase::SetObjectPropertyValue
                          ((FObjectPropertyBase *)pFVar44,pFVar45,TVar25.Val);
                pFVar10 = local_750;
                pFVar28 = (FMapProperty *)local_790._24_8_;
                if (local_750 != (FPropertyVisitorPath *)0x0) {
                  *(undefined8 *)(puVar41 + -8) = 0x1421410d9;
                  FPropertyVisitorPath::ToSerializedPropertyChain(pFVar10,&local_240);
                  FVar20 = local_728;
                  if (local_728 != (FName)0x0) {
                    *(undefined8 *)(puVar41 + -8) = 0x1421410f9;
                    pFVar27 = FOverriddenPropertySet::RestoreOverriddenPropertyOperation
                                        ((FOverriddenPropertySet *)FVar20,Modified,&local_240,
                                         (FProperty *)0x0);
                    if (pFVar27 != (FOverriddenPropertyNode *)0x0) {
                      *(undefined8 *)(puVar41 + -8) = 0x14214110e;
                      FOverriddenPropertySet::RestoreSubObjectOperation
                                ((FOverriddenPropertySet *)FVar20,Add,pFVar27,TVar25);
                    }
                  }
                  pFVar28 = (FMapProperty *)local_790._24_8_;
                  if (local_240.SerializedPropertyChain.AllocatorInstance.SecondaryData !=
                      (ForElementType<FProperty_*>)0x0) {
                    *(undefined8 *)(puVar41 + -8) = 0x14214111f;
                    FMemory::Free((void *)local_240.SerializedPropertyChain.AllocatorInstance.
                                          SecondaryData);
                    pFVar28 = (FMapProperty *)local_790._24_8_;
                  }
                }
              }
              if ((~(byte)((ulonglong)pFVar44->_padding_ >> 0x24) & 1) != 0) {
                pcVar6 = *(code **)(pFVar44->_padding_ + 0x138);
                *(undefined8 *)(puVar41 + -8) = 0x142141140;
                (*pcVar6)(pFVar44,pFVar31);
              }
              *(undefined8 *)(puVar41 + -8) = 0x14214114f;
              FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
                        (&local_d8);
              local_7b8 = (undefined1  [8])pFVar28;
              puVar43 = puVar41;
              goto LAB_142141e80;
            }
          }
          iVar14 = (local_748.field1_0x8.FreezableArray)->ArrayNum;
          FScriptArrayHelper::ExpandForIndex(&local_748,iVar14);
          goto LAB_142141176;
        }
        if (local_7b0[0] == true) {
          if (((pFVar28->ValueProp->PropertyFlags & CPF_PersistentInstance) == CPF_None) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayProperty->Inner->HasAnyPropertyFlags(CPF_PersistentInstance)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                                  ,0x7a3,L"Only instanced sub object is supporting remove operation"
                                 ), bVar11)) {
            pcVar6 = (code *)swi(3);
            pwVar17 = (wchar_t *)(*pcVar6)();
            return pwVar17;
          }
          pFVar23 = CastFieldChecked<FObjectPropertyBase>((FField *)pFVar28->ValueProp);
          iVar14 = *(int *)((longlong)&pFVar23->_padding_ + 4);
          pFVar44 = pFVar45;
          if (iVar14 != 0) {
            uVar24 = (longlong)(iVar14 + 0xf) + 0xf;
            if (uVar24 <= (ulonglong)(longlong)(iVar14 + 0xf)) {
              uVar24 = 0xffffffffffffff0;
            }
            puVar40 = auStackY_808 + -(uVar24 & 0xfffffffffffffff0);
            pFVar44 = (FMapProperty *)(local_7b0 + -(uVar24 & 0xfffffffffffffff0));
          }
          if (((uint)pFVar23->_padding_ >> 9 & 1) == 0) {
            pcVar6 = *(code **)(pFVar23->_padding_ + 0x150);
            *(undefined8 *)(puVar40 + -8) = 0x142140dd1;
            (*pcVar6)(pFVar23,pFVar44);
          }
          else {
            lVar47 = pFVar23->_padding_;
            *(undefined8 *)(puVar40 + -8) = 0x142140dc0;
            memset(pFVar44,0,(longlong)(int)lVar47 * (longlong)iVar14);
          }
          auVar46 = local_7b8;
          *(undefined8 *)(puVar40 + -8) = 0x142140de7;
          pFVar31 = (FMapProperty *)
                    `FProperty::ImportSingleProperty'::__l250::<lambda_1>::operator()
                              (&local_680,(wchar_t *)auVar46,(FProperty *)pFVar23,pFVar44);
          pcVar6 = *(code **)(pFVar23->_padding_ + 0x1f8);
          *(undefined8 *)(puVar40 + -8) = 0x142140dfd;
          TVar25.Val = (UObject *)(*pcVar6)(pFVar23,pFVar44);
          if (TVar25.Val != (UObject *)0x0) {
            iVar14 = (local_748.field1_0x8.FreezableArray)->ArrayNum;
            pFVar28 = pFVar45;
            if (0 < iVar14) {
              do {
                pcVar6 = *(code **)(pFVar23->_padding_ + 0x1f8);
                pFVar35 = pFVar45;
                if ((local_748.field1_0x8.FreezableArray)->ArrayNum != 0) {
                  puVar33 = (undefined1 *)(local_748.field1_0x8.FreezableArray)->_padding_;
                  if (((local_748.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                     (((ulonglong)puVar33 & 1) != 0)) {
                    puVar33 = &(local_748.field1_0x8.HeapArray)->field_0x0 +
                              ((longlong)puVar33 >> 0x18);
                  }
                  pFVar35 = (FMapProperty *)
                            (puVar33 + (longlong)local_748.ElementSize * (longlong)pFVar28);
                }
                *(undefined8 *)(puVar40 + -8) = 0x142140e60;
                pUVar26 = (UObject *)(*pcVar6)(pFVar23,pFVar35);
                *(undefined8 *)(puVar40 + -8) = 0x142140e68;
                pUVar26 = UObject::GetArchetype(pUVar26);
                if (pUVar26 == TVar25.Val) {
                  *(undefined8 *)(puVar40 + -8) = 0x142140e92;
                  FScriptArrayHelper::RemoveValues(&local_748,(int)pFVar28,1);
                  break;
                }
                uVar38 = (int)pFVar28 + 1;
                pFVar28 = (FMapProperty *)(ulonglong)uVar38;
              } while ((int)uVar38 < iVar14);
            }
            pFVar10 = local_750;
            if (local_750 != (FPropertyVisitorPath *)0x0) {
              *(undefined8 *)(puVar40 + -8) = 0x142140eaa;
              FPropertyVisitorPath::ToSerializedPropertyChain(pFVar10,&local_298);
              FVar20 = local_728;
              if (local_728 != (FName)0x0) {
                *(undefined8 *)(puVar40 + -8) = 0x142140eca;
                pFVar27 = FOverriddenPropertySet::RestoreOverriddenPropertyOperation
                                    ((FOverriddenPropertySet *)FVar20,Modified,&local_298,
                                     (FProperty *)0x0);
                if (pFVar27 != (FOverriddenPropertyNode *)0x0) {
                  *(undefined8 *)(puVar40 + -8) = 0x142140edf;
                  FOverriddenPropertySet::RestoreSubObjectOperation
                            ((FOverriddenPropertySet *)FVar20,Remove,pFVar27,TVar25);
                }
              }
              if (local_298.SerializedPropertyChain.AllocatorInstance.SecondaryData !=
                  (ForElementType<FProperty_*>)0x0) {
                *(undefined8 *)(puVar40 + -8) = 0x142140ef0;
                FMemory::Free((void *)local_298.SerializedPropertyChain.AllocatorInstance.
                                      SecondaryData);
              }
            }
          }
          if ((~(byte)((ulonglong)pFVar23->_padding_ >> 0x24) & 1) != 0) {
            pcVar6 = *(code **)(pFVar23->_padding_ + 0x138);
            *(undefined8 *)(puVar40 + -8) = 0x142140f0d;
            (*pcVar6)(pFVar23,pFVar44);
          }
          *(undefined8 *)(puVar40 + -8) = 0x142140f1c;
          FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope(&local_d8);
          local_7b8 = (undefined1  [8])pFVar31;
          puVar43 = puVar40;
          goto LAB_142141e80;
        }
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                            ,0x7fb,L"Unsupported array operation while importing text");
        puVar32 = auStackY_808;
        auVar46 = (undefined1  [8])pFVar45;
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          pwVar17 = (wchar_t *)(*pcVar6)();
          return pwVar17;
        }
      }
LAB_142141290:
      *(undefined8 *)(puVar32 + -8) = 0x14214129c;
      FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope(&local_d8);
      local_7b8 = auVar46;
      puVar43 = puVar32;
      goto LAB_142141e80;
    }
    puVar43 = auStackY_808;
    if ((byte)LogExec._0_1_ < 3) goto LAB_142141e80;
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_3d8,(FName)LogExec._4_8_,Warning);
    bVar11 = IsThisNotNull(pFVar31,"FField::GetName");
    if (bVar11) {
      ::FName::ToString((FName *)&pFVar31->_padding_,&local_658);
    }
    else {
      ::FString::FString(&local_658,L"None");
    }
    FOutputDevice::LogfImpl(local_7a8,L"Cannot perform text import on property \'%s\' here: %s");
    if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data.AllocatorInstance.Data);
    }
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
    this = &local_3d8;
  }
  FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(this);
  puVar43 = auStackY_808;
LAB_142141e80:
  *(undefined8 *)(puVar43 + -8) = 0x142141e8f;
  return (wchar_t *)local_7b8;
}

// Init @ 142142870

void __thiscall FProperty::Init(FProperty *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FFieldClass *pFVar4;
  longlong *plVar5;
  
  pUVar3 = Z_Construct_UClass_UObject_NoRegister();
  bVar2 = FFieldVariant::IsA((FFieldVariant *)&this->_padding_,pUVar3);
  if ((!bVar2) || ((this->_padding_ & 0xfffffffffffffffeU) == 0)) {
    pFVar4 = FField::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&this->_padding_,pFVar4);
    if (bVar2) {
      plVar5 = (longlong *)this->_padding_;
      if (plVar5 != (longlong *)0x0) goto LAB_142142947;
    }
    else {
      plVar5 = (longlong *)0x0;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x337,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_142142947:
                    /* WARNING: Could not recover jumptable at 0x00014214295a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x38))(plVar5,this);
    return;
  }
  pUVar3 = Z_Construct_UClass_UField_NoRegister();
  bVar2 = FFieldVariant::IsA((FFieldVariant *)&this->_padding_,pUVar3);
  if (bVar2) {
    plVar5 = (longlong *)(this->_padding_ & 0xfffffffffffffffe);
    if (plVar5 != (longlong *)0x0) goto LAB_1421428e5;
  }
  else {
    plVar5 = (longlong *)0x0;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                     ,0x337,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1421428e5:
                    /* WARNING: Could not recover jumptable at 0x0001421428f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x2b0))(plVar5,this);
  return;
}

// InitializeIntrusiveUnsetOptionalValue @ 142142c20

void __thiscall FProperty::InitializeIntrusiveUnsetOptionalValue(FProperty *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                     ,0x93d,
                     L"Missing implementation for InitializeIntrusiveUnsetOptionalValue for property type returning true from HasIntrusiveUnsetOptionalState"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// InitializeValue @ 142142c60

void __thiscall FProperty::InitializeValue(FProperty *this,void *param_1)

{
  if (((uint)(int)this->PropertyFlags >> 9 & 1) != 0) {
    memset(param_1,0,(longlong)this->ElementSize * (longlong)this->ArrayDim);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142142c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x150))();
  return;
}

// InitializeValueInternal @ 142142ca0

void __thiscall FProperty::InitializeValueInternal(FProperty *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  FField::GetFullName((FField *)this,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                     ,0x3ab,
                     L"%s failed to handle InitializeValueInternal, but it was not CPF_ZeroConstructor"
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// InstanceSubobjects @ 1421431c0

void __thiscall
FProperty::InstanceSubobjects
          (FProperty *this,void *param_1,void *param_2,TNotNull<UObject_*> param_3,
          FObjectInstancingGraph *param_4)

{
  return;
}

// IsIntrusiveOptionalValueSet @ 142143450

bool __thiscall FProperty::IsIntrusiveOptionalValueSet(FProperty *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                     ,0x942,
                     L"Missing implementation for IsIntrusiveOptionalValueSet for property type returning true from HasIntrusiveUnsetOptionalState"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// LinkInternal @ 142144480

void __thiscall FProperty::LinkInternal(FProperty *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                     ,0x4b4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// LoadTypeName @ 142144b60

bool __thiscall
FProperty::LoadTypeName(FProperty *this,FPropertyTypeName param_1,FPropertyTag *param_2)

{
  bool bVar1;
  FName FVar2;
  longlong *plVar3;
  FPropertyTypeName local_res10 [2];
  undefined1 local_res20 [8];
  FProperty *local_18;
  FPropertyTypeName *local_10;
  
  local_res10[0].Index = param_1.Index;
  FVar2 = UE::FPropertyTypeName::GetName(local_res10);
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x158))(this,local_res20);
  if (*plVar3 != *(longlong *)FVar2) {
    local_10 = local_res10;
    local_18 = this;
    bVar1 = `FProperty::LoadTypeName'::__l2::<lambda_1>::operator()(&local_18);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// NetSerializeItem @ 142145700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FProperty::NetSerializeItem
          (FProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar2;
  undefined1 auStack_1d8 [40];
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pcVar1 = *(code **)(this->_padding_ + 0xc0);
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b0,param_1);
  FVar2 = FStructuredArchiveFromArchive::GetSlot(this_00);
  (*pcVar1)(this,*(undefined8 *)FVar2,param_3,0);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
  return true;
}

// PerformOperationWithGetter @ 142146640

void __thiscall
FProperty::PerformOperationWithGetter
          (FProperty *this,void *param_1,void *param_2,
          TFunctionRef<void___cdecl(void_const_*)> *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  void *local_res10;
  void *local_18 [2];
  
  if ((param_1 != (void *)0x0) && (cVar2 = (**(code **)(this->_padding_ + 0x78))(), cVar2 != '\0'))
  {
    pvVar4 = AllocateAndInitializeValue(this);
    GetValue_InContainer(this,param_1,pvVar4);
    local_res10 = pvVar4;
    (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_res10);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    if ((this->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      (**(code **)(this->_padding_ + 0x138))(this,pvVar4);
    }
    FMemory::Free(pvVar4);
    return;
  }
  if (param_2 == (void *)0x0) {
    if ((param_1 == (void *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutContainer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                           ,0x586,
                           L"Container pointr must be valid if DirectPropertyAddress is not valid"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_2 = (void *)((longlong)this->Offset_Internal + (longlong)param_1);
  }
  local_18[0] = param_2;
  (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_18);
  return;
}

// PerformOperationWithSetter @ 142146740

void __thiscall
FProperty::PerformOperationWithSetter
          (FProperty *this,void *param_1,void *param_2,TFunctionRef<void___cdecl(void_*)> *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  void *local_res10;
  void *local_18 [2];
  
  if ((param_1 != (void *)0x0) && (cVar2 = (**(code **)(this->_padding_ + 0x80))(), cVar2 != '\0'))
  {
    pvVar4 = AllocateAndInitializeValue(this);
    GetValue_InContainer(this,param_1,pvVar4);
    local_res10 = pvVar4;
    (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_res10);
    SetValue_InContainer(this,param_1,pvVar4);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    if ((this->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      (**(code **)(this->_padding_ + 0x138))(this,pvVar4);
    }
    FMemory::Free(pvVar4);
    return;
  }
  if (param_2 == (void *)0x0) {
    if ((param_1 == (void *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutContainer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                           ,0x56b,
                           L"Container pointr must be valid if DirectPropertyAddress is not valid"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_2 = (void *)((longlong)this->Offset_Internal + (longlong)param_1);
  }
  local_18[0] = param_2;
  (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_18);
  return;
}

// PostDuplicate @ 1421469e0

void __thiscall FProperty::PostDuplicate(FProperty *this,FField *param_1)

{
  this->ArrayDim = (int)param_1[1]._padding_;
  this->ElementSize = *(int *)((longlong)&param_1[1]._padding_ + 4);
  this->PropertyFlags = (EPropertyFlags)param_1[1].ClassPrivate;
  this->RepIndex = *(ushort *)&param_1[1].Owner.Container;
  this->Offset_Internal = *(int *)((longlong)&param_1[1].Owner.Container + 4);
  this->RepNotifyFunc = (FName)param_1[2].ClassPrivate;
  (this->BlueprintReplicationCondition).Value =
       *(uchar *)((longlong)&param_1[1].Owner.Container + 2);
  FField::PostDuplicate((FField *)this,param_1);
  return;
}

// ResolveVisitedPathInfo @ 14214b310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall
FProperty::ResolveVisitedPathInfo(FProperty *this,void *param_1,FPropertyVisitorInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_118 [32];
  void *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  void **local_d8;
  FPropertyVisitorInfo *local_d0;
  int local_c8;
  ForAnyElementType *local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  ForAnyElementType local_98;
  undefined8 local_90;
  code *local_88;
  longlong local_78 [3];
  longlong *local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  uStack_e8 = (void ***)0x0;
  uStack_dc = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88 = (code *)0x0;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  local_30 = (longlong *)0x0;
  local_e0 = 0xffffffff;
  local_f0 = (code *)this;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x818,&local_98,(int *)((longlong)&local_90 + 4));
  local_90 = CONCAT44(local_90._4_4_,iVar3 + 1);
  pFVar1 = local_98.Data + (longlong)iVar3 * 0x18;
  *(undefined4 *)pFVar1 = (undefined4)local_f0;
  *(undefined4 *)(pFVar1 + 4) = local_f0._4_4_;
  *(undefined4 *)(pFVar1 + 8) = (undefined4)uStack_e8;
  *(undefined4 *)(pFVar1 + 0xc) = uStack_e8._4_4_;
  *(ulonglong *)(local_98.Data + (longlong)iVar3 * 0x18 + 0x10) =
       CONCAT26(uStack_da,CONCAT24(uStack_dc,local_e0));
  if (local_88 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_88);
    pcVar2 = local_88;
    plVar5 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar5 = local_60;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_f0);
  }
  local_c0 = &local_98;
  local_f8 = (void *)0x0;
  local_d8 = &local_f8;
  local_c8 = (int)local_90 + 1;
  local_b0 = 0;
  uStack_e8 = &local_d8;
  local_f0 = UE::Core::Private::Function::
             TFunctionRefCaller<`PropertyVisitorHelpers::ResolveVisitedPathInfo_Generic<FProperty_const_>'::__l2::<lambda_1>,enum_EPropertyVisitorControlFlow,FPropertyVisitorContext_const_&>
             ::Call;
  local_a8 = 0;
  local_d0 = param_2;
  local_b8 = param_1;
  (**(code **)(this->_padding_ + 0x98))(this,&local_c0,&local_f0);
  if (local_58 != 0) {
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_88 != (code *)0x0) {
    plVar5 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar5 = local_60;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return local_f8;
}

// SameType @ 14214b5a0

bool __thiscall FProperty::SameType(FProperty *this,FProperty *param_1)

{
  if ((param_1 != (FProperty *)0x0) && (this->_padding_ == param_1->_padding_)) {
    return true;
  }
  return false;
}

// SaveTypeName @ 14214b650

void __thiscall FProperty::SaveTypeName(FProperty *this,FPropertyTypeNameBuilder *param_1)

{
  FName *pFVar1;
  undefined1 local_res8 [32];
  
  pFVar1 = (FName *)(**(code **)(this->_padding_ + 0x158))(this,local_res8);
  UE::FPropertyTypeNameBuilder::AddName(param_1,*pFVar1);
  return;
}

// Serialize @ 14214cb00

void __thiscall FProperty::Serialize(FProperty *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  ushort local_res8 [4];
  EPropertyFlags local_res10;
  FProperty *local_res18;
  
  FField::Serialize((FField *)this,param_1);
  piVar2 = &this->ArrayDim;
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ElementSize,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->ElementSize);
    }
  }
  else {
    this->ElementSize = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((0 < UE::CoreUObject::Private::EnsureAgainstLargeProperties) && (0xffffff < this->ElementSize)
     ) {
    local_res18 = this;
    `FProperty::Serialize'::__l2::<lambda_1>::operator()(&local_res18);
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  local_res10 = this->PropertyFlags &
                ~(CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
  if ((EPropertyFlags *)plVar3[1] < (EPropertyFlags *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res10,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_res10);
    }
  }
  else {
    local_res10 = *(EPropertyFlags *)*plVar3;
    *plVar3 = *plVar3 + 8;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    this->PropertyFlags =
         this->PropertyFlags &
         (CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
    this->PropertyFlags =
         this->PropertyFlags |
         local_res10 &
         ~(CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_IsPlainOldData|CPF_ZeroConstructor);
  }
  if ((this->PropertyFlags & CPF_EditorOnly) != CPF_None) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsEditorOnlyProperty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                       ,0x355,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = 0;
  if ((ushort *)plVar3[1] < (ushort *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(ushort *)*plVar3;
    *plVar3 = *plVar3 + 2;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->RepNotifyFunc);
  if ((param_1->field_0x28 & 1) != 0) {
    this->Offset_Internal = 0;
    this->DestructorLinkNext = (FProperty *)0x0;
  }
  puVar4 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar4 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    (this->BlueprintReplicationCondition).Value = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->BlueprintReplicationCondition,1);
  return;
}

// SetElementSize @ 142150090

void __thiscall FProperty::SetElementSize(FProperty *this,int param_1)

{
  this->ElementSize = param_1;
  return;
}

// SetOffset_Internal @ 142150510

void __thiscall FProperty::SetOffset_Internal(FProperty *this,int param_1)

{
  this->Offset_Internal = param_1;
  return;
}

// SetSingleValue_InContainer @ 142151380

void __thiscall
FProperty::SetSingleValue_InContainer(FProperty *this,void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  void *_Dst;
  FString local_28;
  
  if (this->ArrayDim < param_3) {
    FField::GetFullName((FField *)this,&local_28);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex <= ArrayDim",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                       ,0x51e,L"ArrayIndex (%d) must be less than the property %s array size (%d)");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  cVar3 = (**(code **)(this->_padding_ + 0x70))(this);
  if (cVar3 == '\0') {
    if (((param_3 < 0) || (this->ArrayDim <= param_3)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar2)
       ) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1 == (void *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar4 = (void *)((longlong)param_1 +
                     (longlong)this->Offset_Internal +
                     (longlong)param_3 * (longlong)this->ElementSize);
    if (pvVar4 != param_2) {
      if (((uint)(int)this->PropertyFlags >> 0x1e & 1) == 0) {
        (**(code **)(this->_padding_ + 0xf0))(this,pvVar4,param_2,1);
      }
      else {
        memcpy(pvVar4,param_2,(longlong)this->ElementSize);
      }
    }
  }
  else if (this->ArrayDim == 1) {
    (**(code **)(this->_padding_ + 0x88))(this,param_1,param_2);
  }
  else {
    pvVar4 = AllocateAndInitializeValue(this);
    GetValue_InContainer(this,param_1,pvVar4);
    _Dst = (void *)((longlong)(this->ElementSize * param_3) + (longlong)pvVar4);
    if (_Dst != param_2) {
      if (((uint)(int)this->PropertyFlags >> 0x1e & 1) == 0) {
        (**(code **)(this->_padding_ + 0xf0))(this,_Dst,param_2,1);
      }
      else {
        memcpy(_Dst,param_2,(longlong)this->ElementSize);
      }
    }
    (**(code **)(this->_padding_ + 0x88))(this,param_1,pvVar4);
    if (pvVar4 != (void *)0x0) {
      if ((this->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(this->_padding_ + 0x138))(this,pvVar4);
      }
      FMemory::Free(pvVar4);
    }
  }
  return;
}

// SetupOffset @ 1421515d0

int __thiscall FProperty::SetupOffset(FProperty *this)

{
  bool bVar1;
  int iVar2;
  UClass *pUVar3;
  uint uVar4;
  ulonglong uVar5;
  
  pUVar3 = Z_Construct_UClass_UObject_NoRegister();
  bVar1 = FFieldVariant::IsA((FFieldVariant *)&this->_padding_,pUVar3);
  if (((bVar1) && (uVar5 = this->_padding_ & 0xfffffffffffffffe, uVar5 != 0)) &&
     ((*(byte *)(*(longlong *)(uVar5 + 0x10) + 0xd8) & 8) != 0)) {
    iVar2 = (**(code **)(this->_padding_ + 0x168))(this);
    uVar4 = iVar2 + -1 + *(int *)(uVar5 + 0x58) & -iVar2;
  }
  else {
    (**(code **)(this->_padding_ + 0x168))(this);
    uVar4 = 0;
  }
  this->Offset_Internal = uVar4;
  uVar4 = this->ElementSize * this->ArrayDim + uVar4;
  if (uVar4 < 0x7fffffff) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  UE::CoreUObject::Private::OnInvalidPropertySize(uVar4,this);
}

// ShouldPort @ 1421517a0

bool __thiscall FProperty::ShouldPort(FProperty *this,uint param_1)

{
  EPropertyFlags EVar1;
  
  if (((0 < this->ElementSize * this->ArrayDim) &&
      ((EVar1 = this->PropertyFlags, (EVar1 >> 0x1d & 1) == 0 || ((param_1 & 0x8010000) != 0)))) &&
     ((((EVar1 >> 0xd & 1) == 0 || ((param_1 & 0x30000) != 0)) &&
      (((((param_1 >> 0xb & 1) == 0 ||
         ((EVar1 & (CPF_TextExportTransient|CPF_DuplicateTransient)) == CPF_None)) ||
        ((param_1 & 0x30000) != 0)) &&
       ((((param_1 >> 0x16 & 1) != 0 || ((EVar1 >> 0x2f & 1) == 0)) &&
        ((-1 < (char)param_1 ||
         ((EVar1 & (CPF_ContainsInstancedReference|CPF_InstancedReference)) != CPF_None)))))))))) {
    if ((param_1 >> 0x13 & 1) == 0) {
      return true;
    }
    return (bool)((byte)EVar1 & 1);
  }
  return false;
}

// ShouldSerializeValue @ 142151830

bool __thiscall FProperty::ShouldSerializeValue(FProperty *this,FArchive *param_1)

{
  EPropertyFlags EVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x98))(param_1,this);
  if ((cVar2 != '\0') ||
     ((EVar1 = this->PropertyFlags, (EVar1 >> 0x18 & 1) == 0 && ((param_1->field_0x2b & 0x40) != 0))
     )) {
    return false;
  }
  if ((EVar1 & (CPF_SkipSerialization|CPF_NonPIEDuplicateTransient|CPF_EditorOnly|
                CPF_NonTransactional|CPF_Deprecated|CPF_DuplicateTransient|CPF_Transient)) !=
      CPF_None) {
    if ((((EVar1 >> 0xd & 1) != 0) && ((param_1->field_0x29 & 1) != 0)) &&
       (*(int *)&param_1->field_0x30 < 1)) {
      return false;
    }
    if (((EVar1 >> 0x15 & 1) != 0) && ((*(uint *)&param_1->field_0x34 & 0x1000) != 0)) {
      return false;
    }
    if (((EVar1 >> 0x2f & 1) != 0) && ((*(uint *)&param_1->field_0x34 & 0x401000) == 0x1000)) {
      return false;
    }
    if (((EVar1 >> 0x1d & 1) != 0) && ((*(uint *)&param_1->field_0x34 & 0x8000000) == 0)) {
      if ((param_1->field_0x28 & 4) != 0) {
        return false;
      }
      if ((param_1->field_0x28 & 0x20) != 0) {
        return false;
      }
    }
    if ((EVar1 >> 0x37 & 1) != 0) {
      if ((param_1->field_0x28 & 0x20) != 0) {
        return false;
      }
      if ((*(uint *)&param_1->field_0x34 & 0x20000000) == 0) {
        return false;
      }
    }
    if ((EVar1 >> 0x23 & 1) != 0) {
      return (bool)(~((byte)param_1->field_0x2b >> 4) & 1);
    }
  }
  return true;
}

// StaticClass @ 142152650

FFieldClass * __cdecl FProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FField::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FProperty",0x8000,CASTCLASS_FProperty|CASTCLASS_UField,pFVar1
                 ,Construct);
      atexit(`FProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// SupportsNetSharedSerialization @ 142152c10

bool __thiscall FProperty::SupportsNetSharedSerialization(FProperty *this)

{
  return true;
}

// UseBinaryOrNativeSerialization @ 1421547b0

bool __thiscall FProperty::UseBinaryOrNativeSerialization(FProperty *this,FArchive *param_1)

{
  return (bool)((byte)param_1->field_0x28 >> 5 & 1);
}

// ValidateImportFlags @ 142154870

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FProperty::ValidateImportFlags(FProperty *this,uint param_1,FOutputDevice *param_2)

{
  bool bVar1;
  FString local_28;
  FString local_18;
  
  if (((param_1 & 0x10) != 0) && (((uint)(int)this->PropertyFlags >> 0xe & 1) != 0)) {
    bVar1 = IsThisNotNull(this,"FField::GetName");
    if (bVar1) {
      ::FName::ToString((FName *)&this->_padding_,&local_18);
    }
    else {
      ::FString::FString(&local_18,L"None");
    }
    ::FString::PrintfImpl
              (&local_28,
               L"Import failed for \'%s\': property is config (Check to see if the property is listed in the DefaultProperties.  It should only be listed in the specific .ini file)"
              );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (param_2 == (FOutputDevice *)0x0) {
      if (2 < (byte)LogProperty._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
      }
    }
    else {
      FOutputDevice::LogfImpl(param_2,L"%s");
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// Visit @ 142155190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EPropertyVisitorControlFlow __thiscall
FProperty::Visit(FProperty *this,FPropertyVisitorData *param_1,
                TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)>
                *param_2)

{
  code *pcVar1;
  EPropertyVisitorControlFlow EVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  FProperty *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  ForAnyElementType *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  ForAnyElementType local_98;
  undefined8 local_90;
  code *local_88;
  longlong local_78 [3];
  longlong *local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  uStack_d0 = 0;
  uStack_c4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88 = (code *)0x0;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  local_30 = (longlong *)0x0;
  local_c8 = 0xffffffff;
  local_d8 = this;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x818,&local_98,(int *)((longlong)&local_90 + 4));
  local_90 = CONCAT44(local_90._4_4_,iVar3 + 1);
  *(FProperty **)(local_98.Data + (longlong)iVar3 * 0x18) = local_d8;
  *(undefined8 *)(local_98.Data + (longlong)iVar3 * 0x18 + 8) = uStack_d0;
  *(ulonglong *)(local_98.Data + (longlong)iVar3 * 0x18 + 0x10) =
       CONCAT26(uStack_c2,CONCAT24(uStack_c4,local_c8));
  if (local_88 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_88);
    pcVar1 = local_88;
    plVar5 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar5 = local_60;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(uVar4,&local_d8);
  }
  local_b8 = *(undefined4 *)&param_1->PropertyData;
  uStack_b4 = *(undefined4 *)((longlong)&param_1->PropertyData + 4);
  uStack_b0 = *(undefined4 *)&param_1->ParentStructData;
  uStack_ac = *(undefined4 *)((longlong)&param_1->ParentStructData + 4);
  local_c0 = &local_98;
  local_a8 = 0;
  local_d8 = *(FProperty **)param_2;
  uStack_d0 = *(undefined8 *)&param_2->field_0x8;
  EVar2 = (**(code **)(this->_padding_ + 0x98))(this,&local_c0,&local_d8);
  if (local_58 != 0) {
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_88 != (code *)0x0) {
    plVar5 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar5 = local_60;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return EVar2;
}

// Visit @ 142155300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EPropertyVisitorControlFlow __thiscall
FProperty::Visit(FProperty *this,FPropertyVisitorData *param_1,
                TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorPath_const_&,FPropertyVisitorData_const_&)>
                *param_2)

{
  code *pcVar1;
  EPropertyVisitorControlFlow EVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  FProperty *local_c8;
  TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorPath_const_&,FPropertyVisitorData_const_&)>
  **ppTStack_c0;
  undefined4 local_b8;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorPath_const_&,FPropertyVisitorData_const_&)>
  *local_b0;
  ForAnyElementType *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  code *local_78;
  longlong local_68 [3];
  longlong *local_50;
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  ppTStack_c0 = (TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorPath_const_&,FPropertyVisitorData_const_&)>
                 **)0x0;
  uStack_b4 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78 = (code *)0x0;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  local_20 = (longlong *)0x0;
  local_b8 = 0xffffffff;
  local_c8 = this;
  local_b0 = param_2;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x818,&local_88,(int *)((longlong)&local_80 + 4));
  local_80 = CONCAT44(local_80._4_4_,iVar3 + 1);
  *(FProperty **)(local_88.Data + (longlong)iVar3 * 0x18) = local_c8;
  *(TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorPath_const_&,FPropertyVisitorData_const_&)>
    ***)(local_88.Data + (longlong)iVar3 * 0x18 + 8) = ppTStack_c0;
  *(ulonglong *)(local_88.Data + (longlong)iVar3 * 0x18 + 0x10) =
       CONCAT26(uStack_b2,CONCAT24(uStack_b4,local_b8));
  if (local_78 != (code *)0x0) {
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar1 = local_78;
    plVar5 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar5 = local_50;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(uVar4,&local_c8);
  }
  local_a0 = *(undefined4 *)&param_1->PropertyData;
  uStack_9c = *(undefined4 *)((longlong)&param_1->PropertyData + 4);
  uStack_98 = *(undefined4 *)&param_1->ParentStructData;
  uStack_94 = *(undefined4 *)((longlong)&param_1->ParentStructData + 4);
  local_a8 = &local_88;
  local_90 = 0;
  local_c8 = (FProperty *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`FProperty::Visit'::__l2::<lambda_1>,enum_EPropertyVisitorControlFlow,FPropertyVisitorContext_const_&>
             ::Call;
  ppTStack_c0 = &local_b0;
  EVar2 = (**(code **)(this->_padding_ + 0x98))(this,&local_a8,&local_c8);
  if (local_48 != 0) {
    plVar5 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar5 = local_20;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_78 != (code *)0x0) {
    plVar5 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar5 = local_50;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return EVar2;
}

// Visit @ 142155480

EPropertyVisitorControlFlow __thiscall
FProperty::Visit(FProperty *this,FPropertyVisitorContext *param_1,
                TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)>
                *param_2)

{
  code *pcVar1;
  bool bVar2;
  EPropertyVisitorControlFlow EVar3;
  FPropertyVisitorInfo *pFVar4;
  
  pFVar4 = FPropertyVisitorPath::Top(param_1->Path);
  if (pFVar4->Property != this) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.Path.Top().Property == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                       ,0x4d8,L"The property set in the info has to match to this property");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001421554e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,param_1);
  return EVar3;
}

// operator() @ 150485ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall `FProperty::LoadTypeName'::__l2::<lambda_1>::operator()(void *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  wchar_t *pwVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  FName this_00;
  FName *this_01;
  undefined1 auStack_258 [32];
  wchar_t *local_238;
  FName local_228 [2];
  undefined1 local_218 [16];
  TStringBuilderBase<wchar_t> local_208;
  wchar_t local_1e8 [64];
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [64];
  TStringBuilderBase<wchar_t> local_c8;
  wchar_t local_a8 [64];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  bVar4 = false;
  bVar3 = false;
  bVar7 = false;
  local_228[0] = (FName)((ulonglong)local_228[0] & 0xffffffff00000000);
  bVar6 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7044316157276321410>);
  if (bVar6) {
    this_00 = UE::FPropertyTypeName::GetName(*(FPropertyTypeName **)((longlong)this + 8));
    local_c8.Base = local_a8;
    local_c8.bIsDynamic = false;
    local_c8.bIsExternal = false;
    local_c8.CurPos = local_a8;
    local_c8.End = (wchar_t *)local_28;
    ::FName::AppendString((FName *)this_00,&local_c8);
    if (local_c8.End < local_c8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
    }
    pwVar5 = local_c8.Base;
    *local_c8.CurPos = L'\0';
    this_01 = (FName *)(**(code **)(**(longlong **)this + 0x158))(*(longlong **)this,local_218);
    local_168.Base = local_148;
    local_168.bIsDynamic = false;
    local_168.bIsExternal = false;
    local_168.CurPos = local_148;
    local_168.End = (wchar_t *)&local_c8;
    ::FName::AppendString(this_01,&local_168);
    if (local_168.End < (TStringBuilderBase<wchar_t> *)(local_168.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,1);
    }
    *local_168.CurPos = L'\0';
    pvVar1 = *(void **)this;
    bVar7 = IsThisNotNull(pvVar1,"FField::GetFName");
    if (bVar7) {
      local_228[0] = *(FName *)((longlong)pvVar1 + 0x20);
    }
    else {
      local_228[0].ComparisonIndex.Value = 0;
      local_228[0].Number = 0;
    }
    local_208.Base = local_1e8;
    local_208.bIsDynamic = false;
    local_208.bIsExternal = false;
    local_208.CurPos = local_1e8;
    local_208.End = (wchar_t *)&local_168;
    ::FName::AppendString(local_228,&local_208);
    if (local_208.End < (TStringBuilderBase<wchar_t> *)(local_208.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_208,1);
    }
    *local_208.CurPos = L'\0';
    local_238 = pwVar5;
    bVar4 = true;
    bVar3 = true;
    bVar7 = true;
    bVar6 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7044316157276321410>,&::ENSURE_Static);
    if (bVar6) {
      bVar6 = true;
      goto LAB_1504860f0;
    }
  }
  bVar6 = false;
LAB_1504860f0:
  if (bVar7) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_208);
  }
  if (bVar3) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  }
  if (bVar4) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
  }
  if (bVar6) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  return false;
}

// operator() @ 150486160

bool __thiscall `FProperty::Serialize'::__l2::<lambda_1>::operator()(void *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7044316157276323002>);
  if (bVar3) {
    pvVar1 = *(void **)this;
    bVar3 = IsThisNotNull(pvVar1,"FField::GetName");
    if (bVar3) {
      ::FName::ToString((FName *)((longlong)pvVar1 + 0x20),&local_18);
    }
    else {
      ::FString::FString(&local_18,L"None");
    }
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7044316157276323002>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1504861f8;
    }
  }
  bVar3 = false;
LAB_1504861f8:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

