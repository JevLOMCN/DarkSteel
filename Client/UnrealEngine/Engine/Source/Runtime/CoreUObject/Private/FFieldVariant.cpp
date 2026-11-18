// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 14

// FFieldVariant @ 141f659d0

FFieldVariant * __thiscall FFieldVariant::FFieldVariant(FFieldVariant *this,FFieldVariant *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (param_1->Container).Unknown;
  (this->Container).Unknown = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  return this;
}

// GetClassName @ 141fce080

FString * __thiscall
FFieldVariant::GetClassName(FFieldVariant *this,FString *__return_storage_ptr__)

{
  FField *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FName local_res8;
  
  if ((this->Container).Field == (FField *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Container.Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                       ,0xd0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->Container).Field;
  if (((ulonglong)pFVar1 & 1) != 0) {
    local_res8 = *(FName *)(*(longlong *)(((ulonglong)pFVar1 & 0xfffffffffffffffe) + 0x10) + 0x18);
    ::FName::ToString(&local_res8,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FName::ToString(&pFVar1->ClassPrivate->Name,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFName @ 141fcf1f0

FName __thiscall FFieldVariant::GetFName(FFieldVariant *this)

{
  FField *pFVar1;
  bool bVar2;
  FName in_RDX;
  
  pFVar1 = (this->Container).Field;
  if (((ulonglong)pFVar1 & 1) != 0) {
    *(undefined8 *)in_RDX = *(undefined8 *)(((ulonglong)pFVar1 & 0xfffffffffffffffe) + 0x18);
    return in_RDX;
  }
  bVar2 = IsThisNotNull(pFVar1,"FField::GetFName");
  if (bVar2) {
    *(FName *)in_RDX = pFVar1->NamePrivate;
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetFullName @ 141fcf6d0

FString * __thiscall FFieldVariant::GetFullName(FFieldVariant *this,FString *__return_storage_ptr__)

{
  FField *this_00;
  
  this_00 = (this->Container).Field;
  if (((ulonglong)this_00 & 1) != 0) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)((ulonglong)this_00 & 0xfffffffffffffffe),
               __return_storage_ptr__,(UObject *)0x0,None);
    return __return_storage_ptr__;
  }
  FField::GetFullName(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetName @ 141fd1720

FString * __thiscall FFieldVariant::GetName(FFieldVariant *this,FString *__return_storage_ptr__)

{
  FField *pFVar1;
  bool bVar2;
  FName local_res8;
  
  pFVar1 = (this->Container).Field;
  if (((ulonglong)pFVar1 & 1) != 0) {
    local_res8 = *(FName *)(((ulonglong)pFVar1 & 0xfffffffffffffffe) + 0x18);
    ::FName::ToString(&local_res8,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar2 = IsThisNotNull(pFVar1,"FField::GetName");
  if (bVar2) {
    ::FName::ToString(&pFVar1->NamePrivate,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"None");
  return __return_storage_ptr__;
}

// GetOutermost @ 141fd1ac0

UPackage * __thiscall FFieldVariant::GetOutermost(FFieldVariant *this)

{
  FField *this_00;
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UObject *this_01;
  
  if ((this->Container).Field == (FField *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Container.Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                       ,0xea,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPackage *)(*pcVar1)();
      return pUVar3;
    }
  }
  this_00 = (this->Container).Field;
  if (((ulonglong)this_00 & 1) != 0) {
    pUVar3 = UObjectBaseUtility::GetOutermost
                       ((UObjectBaseUtility *)((ulonglong)this_00 & 0xfffffffffffffffe));
    return pUVar3;
  }
  this_01 = FField::GetOwnerUObject(this_00);
  if (this_01 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerUObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                       ,0x1a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPackage *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_01);
  return pUVar3;
}

// GetOwnerClass @ 141fd1bc0

UClass * __thiscall FFieldVariant::GetOwnerClass(FFieldVariant *this)

{
  int iVar1;
  FField *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UField *this_01;
  UObject *pUVar5;
  UClass *pUVar6;
  
  if ((this->Container).Field == (FField *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Container.Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                       ,0x93,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UClass *)(*pcVar2)();
      return pUVar4;
    }
  }
  this_00 = (this->Container).Field;
  if (((ulonglong)this_00 & 1) != 0) {
    this_01 = CastChecked<UField,UObject>((UObject *)((ulonglong)this_00 & 0xfffffffffffffffe));
    pUVar4 = UField::GetOwnerClass(this_01);
    return pUVar4;
  }
  pUVar5 = FField::GetOwnerUObject(this_00);
  pUVar4 = (UClass *)CastChecked<UField,UObject>(pUVar5);
  if (pUVar4 == (UClass *)0x0) {
    pUVar4 = (UClass *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) {
      pUVar4 = UField::GetOwnerClass((UField *)pUVar4);
      return pUVar4;
    }
  }
  return pUVar4;
}

// GetOwnerVariant @ 141fd1d70

FFieldVariant __thiscall FFieldVariant::GetOwnerVariant(FFieldVariant *this)

{
  ulonglong uVar1;
  FFieldObjectUnion in_RDX;
  
  uVar1 = (this->Container).Unknown;
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulonglong *)(uVar1 + 0x10);
    (in_RDX.Field)->_padding_ = uVar1;
    if ((uVar1 & 1) == 0) {
      return (FFieldVariant)in_RDX.Field;
    }
  }
  else {
    uVar1 = *(ulonglong *)((uVar1 & 0xfffffffffffffffe) + 0x20) | 1;
    (in_RDX.Field)->_padding_ = uVar1;
  }
  if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  return (FFieldVariant)in_RDX;
}

// GetPathName @ 141fd2600

FString * __thiscall FFieldVariant::GetPathName(FFieldVariant *this,FString *__return_storage_ptr__)

{
  FField *this_00;
  
  this_00 = (this->Container).Field;
  if (((ulonglong)this_00 & 1) != 0) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)((ulonglong)this_00 & 0xfffffffffffffffe),
               __return_storage_ptr__,(UObject *)0x0);
    return __return_storage_ptr__;
  }
  FField::GetPathName(this_00,__return_storage_ptr__,(UObject *)0x0);
  return __return_storage_ptr__;
}

// IsA @ 141fd5800

bool __thiscall FFieldVariant::IsA(FFieldVariant *this,FFieldClass *param_1)

{
  FField *pFVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  if (((*(byte *)&this->Container & 1) == 0) &&
     (pFVar1 = (this->Container).Field, pFVar1 != (FField *)0x0)) {
    if ((param_1 == (FFieldClass *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = pFVar1->ClassPrivate;
    if (param_1->Id == CASTCLASS_None) {
      for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
        if (pFVar2 == param_1) {
          bVar4 = true;
          goto LAB_141fd5870;
        }
      }
      bVar4 = false;
    }
    else {
      bVar4 = (pFVar2->CastFlags & param_1->Id) != CASTCLASS_None;
    }
LAB_141fd5870:
    if (bVar4) {
      return true;
    }
  }
  return false;
}

// IsA @ 141fd58a0

bool __thiscall FFieldVariant::IsA(FFieldVariant *this,UClass *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (this->Container).Unknown & 0xfffffffffffffffe;
  if ((*(byte *)&this->Container & uVar3 != 0) != 0) {
    lVar2 = *(longlong *)(uVar3 + 0x10);
    iVar1 = (int)param_1->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &param_1->_padding_)) {
      return true;
    }
  }
  return false;
}

// IsNative @ 141fd5cf0

bool __thiscall FFieldVariant::IsNative(FFieldVariant *this)

{
  FField *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  FUObjectItem *pFVar5;
  int iVar6;
  
  if ((this->Container).Field == (FField *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Container.Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                       ,0xdd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = (this->Container).Field;
  if (((ulonglong)this_00 & 1) == 0) {
    pUVar4 = FField::GetOwnerUObject(this_00);
    if (pUVar4 == (UObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                         ,0x201,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      return true;
    }
    iVar6 = *(int *)&pUVar4->field_0xc;
  }
  else {
    iVar6 = *(int *)(((ulonglong)this_00 & 0xfffffffffffffffe) + 0xc);
  }
  pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,iVar6);
  return (bool)((byte)((ulonglong)((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19) & 1);
}

// IsValidLowLevel @ 141fd62c0

bool __thiscall FFieldVariant::IsValidLowLevel(FFieldVariant *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((this->Container).Field == (FField *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Container.Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                       ,0xf7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar1 = (this->Container).Unknown;
  if ((uVar1 & 1) != 0) {
    bVar3 = UObjectBase::IsValidLowLevel((UObjectBase *)(uVar1 & 0xfffffffffffffffe));
    return bVar3;
  }
  return uVar1 != 0;
}

// Get<FProperty> @ 14209ef40

FProperty * __thiscall FFieldVariant::Get<FProperty>(FFieldVariant *this)

{
  bool bVar1;
  FFieldClass *pFVar2;
  
  pFVar2 = FProperty::StaticClass();
  bVar1 = IsA(this,pFVar2);
  if (bVar1) {
    return (FProperty *)(this->Container).Field;
  }
  return (FProperty *)0x0;
}

