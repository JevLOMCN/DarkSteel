// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 19

// Internal_GetObjectItem @ 142063220

FUObjectItem * __thiscall FWeakObjectPtr::Internal_GetObjectItem(FWeakObjectPtr *this)

{
  FUObjectItem *pFVar1;
  
  if ((this->ObjectSerialNumber != 0) && (-1 < this->ObjectIndex)) {
    pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
    if (pFVar1 != (FUObjectItem *)0x0) {
      if (pFVar1->SerialNumber != this->ObjectSerialNumber) {
        pFVar1 = (FUObjectItem *)0x0;
      }
      return pFVar1;
    }
  }
  return (FUObjectItem *)0x0;
}

// operator= @ 142296550

void __thiscall FWeakObjectPtr::operator=(FWeakObjectPtr *this,FObjectPtr param_1)

{
  int iVar1;
  
  if (*(longlong *)param_1.field0_0x0 != 0) {
    iVar1 = *(int *)(*(longlong *)param_1.field0_0x0 + 0xc);
    this->ObjectIndex = iVar1;
    iVar1 = FUObjectArray::AllocateSerialNumber(&GUObjectArray,iVar1);
    this->ObjectSerialNumber = iVar1;
    return;
  }
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  return;
}

// Get @ 14229cd10

UObject * __thiscall FWeakObjectPtr::Get(FWeakObjectPtr *this)

{
  FUObjectItem *pFVar1;
  
  if ((this->ObjectSerialNumber != 0) && (-1 < this->ObjectIndex)) {
    pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
    if ((pFVar1 != (FUObjectItem *)0x0) &&
       ((pFVar1->SerialNumber == this->ObjectSerialNumber &&
        (((pFVar1->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0)))) {
      return (UObject *)(pFVar1->field1_0x8).Object;
    }
  }
  return (UObject *)0x0;
}

// Get @ 14229cd70

UObject * __thiscall FWeakObjectPtr::Get(FWeakObjectPtr *this,bool param_1)

{
  bool bVar1;
  FUObjectItem *pFVar2;
  
  if ((this->ObjectSerialNumber != 0) && (-1 < this->ObjectIndex)) {
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
    if ((pFVar2 != (FUObjectItem *)0x0) && (pFVar2->SerialNumber == this->ObjectSerialNumber)) {
      if (param_1) {
        bVar1 = (bool)(~(byte)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1);
      }
      else {
        bVar1 = ((pFVar2->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0;
      }
      if (bVar1 != false) {
        return (UObject *)(pFVar2->field1_0x8).Object;
      }
    }
  }
  return (UObject *)0x0;
}

// GetEvenIfUnreachable @ 14229d660

UObject * __thiscall FWeakObjectPtr::GetEvenIfUnreachable(FWeakObjectPtr *this)

{
  FUObjectItem *pFVar1;
  
  if ((this->ObjectSerialNumber != 0) && (-1 < this->ObjectIndex)) {
    pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
    if ((pFVar1 != (FUObjectItem *)0x0) && (pFVar1->SerialNumber == this->ObjectSerialNumber)) {
      pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
      return (UObject *)(pFVar1->field1_0x8).Object;
    }
  }
  return (UObject *)0x0;
}

// Internal_Get @ 1422a0a70

UObject * __thiscall FWeakObjectPtr::Internal_Get(FWeakObjectPtr *this,bool param_1)

{
  bool bVar1;
  FUObjectItem *pFVar2;
  
  if ((this->ObjectSerialNumber != 0) && (-1 < this->ObjectIndex)) {
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
    if ((pFVar2 != (FUObjectItem *)0x0) && (pFVar2->SerialNumber == this->ObjectSerialNumber)) {
      if (param_1) {
        bVar1 = (bool)(~(byte)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1);
      }
      else {
        bVar1 = ((pFVar2->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0;
      }
      if (bVar1 != false) {
        return (UObject *)(pFVar2->field1_0x8).Object;
      }
    }
  }
  return (UObject *)0x0;
}

// Internal_IsValid @ 1422a0af0

bool __thiscall FWeakObjectPtr::Internal_IsValid(FWeakObjectPtr *this,bool param_1,bool param_2)

{
  FUObjectItem *pFVar1;
  bool bVar2;
  
  if (this->ObjectSerialNumber == 0) {
    pFVar1 = (FUObjectItem *)0x0;
  }
  else if (this->ObjectIndex < 0) {
    pFVar1 = (FUObjectItem *)0x0;
  }
  else {
    pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
    if (pFVar1 == (FUObjectItem *)0x0) {
      pFVar1 = (FUObjectItem *)0x0;
    }
    else if (pFVar1->SerialNumber != this->ObjectSerialNumber) {
      pFVar1 = (FUObjectItem *)0x0;
    }
  }
  if (param_2) {
    return pFVar1 != (FUObjectItem *)0x0;
  }
  if (pFVar1 != (FUObjectItem *)0x0) {
    if (param_1) {
      bVar2 = (bool)(~((byte)((ulonglong)((pFVar1->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c) &
                      0xf) & 1);
    }
    else {
      bVar2 = ((pFVar1->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0;
    }
    if (bVar2 != false) {
      return true;
    }
  }
  return false;
}

// Internal_Pin @ 1422a0bd0

TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall FWeakObjectPtr::Internal_Pin(FWeakObjectPtr *this,bool param_1)

{
  UObjectBase *this_00;
  bool bVar1;
  FUObjectItem *pFVar2;
  undefined7 in_register_00000011;
  UObject *pUVar3;
  char in_R8B;
  FGCScopeGuard local_res8 [8];
  
  pUVar3 = (UObject *)CONCAT71(in_register_00000011,param_1);
  FGCScopeGuard::FGCScopeGuard(local_res8);
  if ((this->ObjectSerialNumber != 0) && (-1 < this->ObjectIndex)) {
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
    if ((pFVar2 != (FUObjectItem *)0x0) && (pFVar2->SerialNumber == this->ObjectSerialNumber)) {
      if (in_R8B == '\0') {
        bVar1 = ((pFVar2->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0;
      }
      else {
        bVar1 = (bool)(~(byte)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1);
      }
      if (bVar1 != false) {
        this_00 = (pFVar2->field1_0x8).Object;
        *(undefined8 *)pUVar3 = 0;
        if (this_00 != (UObjectBase *)0x0) {
          UObjectBase::AddRef(this_00);
          *(UObjectBase **)pUVar3 = this_00;
        }
        goto LAB_1422a0c66;
      }
    }
  }
  *(undefined8 *)pUVar3 = 0;
LAB_1422a0c66:
  FGCScopeGuard::~FGCScopeGuard(local_res8);
  return (TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )pUVar3;
}

// Internal_TryPin @ 1422a0c90

TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall FWeakObjectPtr::Internal_TryPin(FWeakObjectPtr *this,bool *param_1,bool param_2)

{
  bool bVar1;
  FUObjectItem *pFVar2;
  UObjectBase *pUVar3;
  undefined7 in_register_00000081;
  char in_R9B;
  FGCScopeTryGuard local_res10 [8];
  bool local_28 [16];
  UObjectBase *pUVar4;
  
  pUVar4 = (UObjectBase *)0x0;
  pUVar3 = (UObjectBase *)0x0;
  param_1[0] = false;
  param_1[1] = false;
  param_1[2] = false;
  param_1[3] = false;
  param_1[4] = false;
  param_1[5] = false;
  param_1[6] = false;
  param_1[7] = false;
  FGCScopeTryGuard::FGCScopeTryGuard(local_res10);
  *(bool *)CONCAT71(in_register_00000081,param_2) = local_res10[0].bLockSuccessful;
  if (local_res10[0].bLockSuccessful != false) {
    if ((this->ObjectSerialNumber != 0) && (-1 < this->ObjectIndex)) {
      pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
      if ((pFVar2 != (FUObjectItem *)0x0) &&
         (pUVar4 = pUVar3, pFVar2->SerialNumber == this->ObjectSerialNumber)) {
        if (in_R9B == '\0') {
          bVar1 = ((pFVar2->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0;
        }
        else {
          bVar1 = (bool)(~(byte)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1);
        }
        if ((bVar1 != false) && (pUVar3 = (pFVar2->field1_0x8).Object, pUVar3 != (UObjectBase *)0x0)
           ) {
          UObjectBase::AddRef(pUVar3);
          pUVar4 = pUVar3;
        }
      }
    }
    if (param_1 == local_28) {
      if (pUVar4 != (UObjectBase *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar4);
      }
    }
    else {
      if (*(UObject **)param_1 != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)param_1);
      }
      *(UObjectBase **)param_1 = pUVar4;
    }
  }
  FGCScopeTryGuard::~FGCScopeTryGuard(local_res10);
  return (TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )(UObject *)param_1;
}

// IsStale @ 1422a0dc0

bool __thiscall FWeakObjectPtr::IsStale(FWeakObjectPtr *this,bool param_1,bool param_2)

{
  FUObjectItem *pFVar1;
  
  if (this->ObjectSerialNumber == 0) {
    return false;
  }
  if (((this->ObjectIndex < 0) ||
      (pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex),
      pFVar1 == (FUObjectItem *)0x0)) || (pFVar1->SerialNumber != this->ObjectSerialNumber)) {
    return true;
  }
  if (param_2) {
    return false;
  }
  if (!param_1) {
    return (bool)((byte)((ulonglong)(pFVar1->field0_0x0).FlagsAndRefCount >> 0x3c) & 1);
  }
  return ((pFVar1->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) != 0;
}

// IsValid @ 1422a0f10

bool __thiscall FWeakObjectPtr::IsValid(FWeakObjectPtr *this)

{
  FUObjectItem *pFVar1;
  
  if ((this->ObjectSerialNumber != 0) && (-1 < this->ObjectIndex)) {
    pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
    if ((pFVar1 != (FUObjectItem *)0x0) &&
       ((pFVar1->SerialNumber == this->ObjectSerialNumber &&
        (((pFVar1->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0)))) {
      return true;
    }
  }
  return false;
}

// IsValid @ 1422a0f70

bool __thiscall FWeakObjectPtr::IsValid(FWeakObjectPtr *this,bool param_1,bool param_2)

{
  FUObjectItem *pFVar1;
  bool bVar2;
  
  if (this->ObjectSerialNumber == 0) {
    pFVar1 = (FUObjectItem *)0x0;
  }
  else if (this->ObjectIndex < 0) {
    pFVar1 = (FUObjectItem *)0x0;
  }
  else {
    pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
    if (pFVar1 == (FUObjectItem *)0x0) {
      pFVar1 = (FUObjectItem *)0x0;
    }
    else if (pFVar1->SerialNumber != this->ObjectSerialNumber) {
      pFVar1 = (FUObjectItem *)0x0;
    }
  }
  if (param_2) {
    return pFVar1 != (FUObjectItem *)0x0;
  }
  if (pFVar1 != (FUObjectItem *)0x0) {
    if (param_1) {
      bVar2 = (bool)(~((byte)((ulonglong)((pFVar1->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c) &
                      0xf) & 1);
    }
    else {
      bVar2 = ((pFVar1->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0;
    }
    if (bVar2 != false) {
      return true;
    }
  }
  return false;
}

// Pin @ 1422a3ed0

TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall FWeakObjectPtr::Pin(FWeakObjectPtr *this)

{
  UObjectBase *this_00;
  FUObjectItem *pFVar1;
  UObject *in_RDX;
  FGCScopeGuard local_res8 [8];
  
  FGCScopeGuard::FGCScopeGuard(local_res8);
  if ((this->ObjectSerialNumber != 0) && (-1 < this->ObjectIndex)) {
    pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
    if ((pFVar1 != (FUObjectItem *)0x0) &&
       ((pFVar1->SerialNumber == this->ObjectSerialNumber &&
        (((pFVar1->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0)))) {
      this_00 = (pFVar1->field1_0x8).Object;
      *(undefined8 *)in_RDX = 0;
      if (this_00 != (UObjectBase *)0x0) {
        UObjectBase::AddRef(this_00);
        *(UObjectBase **)in_RDX = this_00;
      }
      goto LAB_1422a3f42;
    }
  }
  *(undefined8 *)in_RDX = 0;
LAB_1422a3f42:
  FGCScopeGuard::~FGCScopeGuard(local_res8);
  return (TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )in_RDX;
}

// Pin @ 1422a3f60

TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall FWeakObjectPtr::Pin(FWeakObjectPtr *this,bool param_1)

{
  undefined7 in_register_00000011;
  
  Internal_Pin(this,param_1);
  return (TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )(UObject *)CONCAT71(in_register_00000011,param_1);
}

// PinEvenIfUnreachable @ 1422a3f80

TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall FWeakObjectPtr::PinEvenIfUnreachable(FWeakObjectPtr *this)

{
  UObjectBase *this_00;
  FUObjectItem *pFVar1;
  UObject *in_RDX;
  FGCScopeGuard local_res8 [8];
  
  FGCScopeGuard::FGCScopeGuard(local_res8);
  if ((this->ObjectSerialNumber != 0) && (-1 < this->ObjectIndex)) {
    pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
    if ((pFVar1 != (FUObjectItem *)0x0) && (pFVar1->SerialNumber == this->ObjectSerialNumber)) {
      pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
      *(undefined8 *)in_RDX = 0;
      this_00 = (pFVar1->field1_0x8).Object;
      if (this_00 != (UObjectBase *)0x0) {
        UObjectBase::AddRef(this_00);
        *(UObjectBase **)in_RDX = this_00;
      }
      goto LAB_1422a3ff1;
    }
  }
  *(undefined8 *)in_RDX = 0;
LAB_1422a3ff1:
  FGCScopeGuard::~FGCScopeGuard(local_res8);
  return (TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )in_RDX;
}

// Serialize @ 1422a6480

void __thiscall FWeakObjectPtr::Serialize(FWeakObjectPtr *this,FArchive *param_1)

{
  FArchiveUObject::SerializeWeakObjectPtr(param_1,this);
  return;
}

// TryPin @ 1422a9950

TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall FWeakObjectPtr::TryPin(FWeakObjectPtr *this,bool *param_1)

{
  bool in_R8B;
  
  Internal_TryPin(this,param_1,in_R8B);
  return (TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )(UObject *)param_1;
}

// TryPin @ 1422a9970

TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
 __thiscall FWeakObjectPtr::TryPin(FWeakObjectPtr *this,bool *param_1,bool param_2)

{
  Internal_TryPin(this,param_1,param_2);
  return (TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          )(UObject *)param_1;
}

// TryPinEvenIfUnreachable @ 1422a9990

bool __thiscall
FWeakObjectPtr::TryPinEvenIfUnreachable
          (FWeakObjectPtr *this,
          TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
          *param_1)

{
  UObjectBase *this_00;
  FUObjectItem *pFVar1;
  bool bVar2;
  UObjectBase *pUVar3;
  FGCScopeTryGuard local_res18 [16];
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  local_18 [2];
  
  FGCScopeTryGuard::FGCScopeTryGuard(local_res18);
  if (local_res18[0].bLockSuccessful == false) {
    bVar2 = false;
  }
  else {
    if (this->ObjectSerialNumber == 0) {
      pUVar3 = (UObjectBase *)0x0;
    }
    else if (this->ObjectIndex < 0) {
      pUVar3 = (UObjectBase *)0x0;
    }
    else {
      pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
      if (pFVar1 == (FUObjectItem *)0x0) {
        pUVar3 = (UObjectBase *)0x0;
      }
      else if (pFVar1->SerialNumber == this->ObjectSerialNumber) {
        pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,this->ObjectIndex);
        this_00 = (pFVar1->field1_0x8).Object;
        pUVar3 = (UObjectBase *)0x0;
        if (this_00 != (UObjectBase *)0x0) {
          UObjectBase::AddRef(this_00);
          pUVar3 = this_00;
        }
      }
      else {
        pUVar3 = (UObjectBase *)0x0;
      }
    }
    if (param_1 == local_18) {
      if (pUVar3 != (UObjectBase *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar3);
      }
    }
    else {
      if (param_1->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(param_1->Object);
      }
      param_1->Object = (UObject *)pUVar3;
    }
    bVar2 = true;
  }
  FGCScopeTryGuard::~FGCScopeTryGuard(local_res18);
  return bVar2;
}

