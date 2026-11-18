// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 17

// FPropertyBagSetRef @ 141f66260

FPropertyBagSetRef * __thiscall
FPropertyBagSetRef::FPropertyBagSetRef
          (FPropertyBagSetRef *this,FPropertyBagPropertyDesc *param_1,void *param_2)

{
  FPropertyBagContainerTypes *pFVar1;
  uchar *puVar2;
  uchar uVar3;
  longlong lVar4;
  UObject *pUVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  FPropertyBagSetRef *pFVar9;
  byte bVar10;
  FProperty *pFVar11;
  EPropertyBagContainerType *pEVar12;
  
  pFVar11 = param_1->CachedProperty;
  if ((pFVar11 == (FProperty *)0x0) ||
     ((*(ulonglong *)(pFVar11->_padding_ + 0x18) & 0x800000000000) == 0)) {
    pFVar11 = (FProperty *)0x0;
  }
  lVar4 = pFVar11[1]._padding_;
  this->_padding_ = lVar4;
  this->_padding_ = (longlong)param_2;
  lVar7 = pFVar11[1]._padding_;
  this->_padding_ = pFVar11[1]._padding_;
  this->_padding_ = lVar7;
  *(int *)&this->_padding_ = (int)pFVar11[1]._padding_;
  if (lVar4 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1653,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FPropertyBagSetRef *)(*pcVar6)();
      return pFVar9;
    }
  }
  (this->ValueDesc).ValueTypeObject.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->ValueDesc).ID.A = 0;
  (this->ValueDesc).ID.B = 0;
  (this->ValueDesc).ID.C = 0;
  (this->ValueDesc).ID.D = 0;
  (this->ValueDesc).Name.ComparisonIndex = 0;
  (this->ValueDesc).Name.Number = 0;
  (this->ValueDesc).PropertyFlags = 1;
  (this->ValueDesc).CachedProperty = (FProperty *)0x0;
  (this->ValueDesc).CachedIndex = -1;
  (this->ValueDesc).ValueType = None;
  (this->ValueDesc).ContainerTypes.Types = (EPropertyBagContainerType  [2])0x0;
  (this->ValueDesc).ContainerTypes.NumContainers = '\0';
  pFVar11 = param_1->CachedProperty;
  if ((pFVar11 == (FProperty *)0x0) ||
     ((*(ulonglong *)(pFVar11->_padding_ + 0x18) & 0x800000000000) == 0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SetProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\PropertyBag.h"
                       ,0x491,L"");
    pFVar11 = (FProperty *)0x0;
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FPropertyBagSetRef *)(*pcVar6)();
      return pFVar9;
    }
  }
  if (pFVar11[1]._padding_ == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SetProperty->ElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\PropertyBag.h"
                       ,0x492,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FPropertyBagSetRef *)(*pcVar6)();
      return pFVar9;
    }
  }
  (this->ValueDesc).ValueType = param_1->ValueType;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->ValueTypeObject).field0_0x0.DebugPtr, pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  pFVar1 = &(this->ValueDesc).ContainerTypes;
  (this->ValueDesc).ValueTypeObject.field0_0x0 = (param_1->ValueTypeObject).field0_0x0;
  (this->ValueDesc).CachedProperty = (FProperty *)pFVar11[1]._padding_;
  *(undefined2 *)(pFVar1->Types).Elements = *(undefined2 *)(param_1->ContainerTypes).Types.Elements;
  uVar3 = (param_1->ContainerTypes).NumContainers;
  (this->ValueDesc).ContainerTypes.NumContainers = uVar3;
  if (uVar3 != '\0') {
    (pFVar1->Types).Elements[0] = None;
    bVar10 = uVar3 - 1;
    if (bVar10 != 0) {
      pEVar12 = (pFVar1->Types).Elements + bVar10;
      do {
        (pFVar1->Types).Elements[bVar10 - 1] = *pEVar12;
        *pEVar12 = None;
        bVar10 = bVar10 - 1;
        pEVar12 = pEVar12 + -1;
      } while (bVar10 != 0);
    }
    puVar2 = &(this->ValueDesc).ContainerTypes.NumContainers;
    *puVar2 = *puVar2 + 0xff;
  }
  return this;
}

// AddValueBool @ 141f6e430

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueBool(FPropertyBagSetRef *this,bool param_1)

{
  int iVar1;
  undefined1 local_res10 [24];
  
  switch((this->ValueDesc).ValueType) {
  case Bool:
  case Byte:
  case Int32:
  case Int64:
  case Float:
  case Double:
  case UInt32:
  case UInt64:
    break;
  default:
    return TypeMismatch;
  }
  if ((this->ValueDesc).CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  local_res10[0] = param_1;
  iVar1 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,local_res10,0);
  if (iVar1 != -1) {
    return DuplicatedValue;
  }
  FScriptSetHelper::AddElement((FScriptSetHelper *)this,local_res10);
  return Success;
}

// AddValueByte @ 141f6e4d0

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueByte(FPropertyBagSetRef *this,uchar param_1)

{
  int iVar1;
  uchar local_res10 [24];
  
  switch((this->ValueDesc).ValueType) {
  case Bool:
  case Byte:
  case Int32:
  case Int64:
  case Float:
  case Double:
  case UInt32:
  case UInt64:
    break;
  default:
    return TypeMismatch;
  }
  if ((this->ValueDesc).CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  local_res10[0] = param_1;
  iVar1 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,local_res10,0);
  if (iVar1 != -1) {
    return DuplicatedValue;
  }
  FScriptSetHelper::AddElement((FScriptSetHelper *)this,local_res10);
  return Success;
}

// AddValueClass @ 141f6e570

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueClass(FPropertyBagSetRef *this,UClass *param_1)

{
  EPropertyBagPropertyType EVar1;
  undefined4 uVar2;
  longlong lVar3;
  FProperty *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  EPropertyBagResult EVar8;
  int iVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UClass *pUStackX_10;
  
  EVar1 = (this->ValueDesc).ValueType;
  if ((EVar1 != Object) && (2 < (byte)(EVar1 - SoftObject))) {
    return TypeMismatch;
  }
  pUVar10 = (UClass *)(this->ValueDesc).CachedProperty;
  pUVar11 = (UClass *)0x0;
  pUStackX_10 = param_1;
  if (((pUVar10 == (UClass *)0x0) || ((*(uint *)(pUVar10->_padding_ + 0x18) >> 0x1a & 1) == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx"), pUVar10 = pUVar11, bVar7
     )) {
    pcVar6 = (code *)swi(3);
    EVar8 = (*pcVar6)();
    return EVar8;
  }
  if ((pUVar10->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectProperty->PropertyClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                         ,0xf3a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    EVar8 = (*pcVar6)();
    return EVar8;
  }
  if (((this->ValueDesc).ValueTypeObject.field0_0x0.DebugPtr == (UObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueDesc.ValueTypeObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                         ,0xf3b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    EVar8 = (*pcVar6)();
    return EVar8;
  }
  pUVar12 = pUStackX_10;
  EVar1 = (this->ValueDesc).ValueType;
  if ((EVar1 == Object) || (EVar1 == SoftObject)) {
    if (pUStackX_10 != (UClass *)0x0) {
      lVar3 = pUStackX_10->_padding_;
      lVar5 = pUVar10->_padding_;
      if (lVar3 == 0) {
        return TypeMismatch;
      }
      if (lVar5 == 0) {
        return TypeMismatch;
      }
      if (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38)) {
        return TypeMismatch;
      }
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30) {
        return TypeMismatch;
      }
    }
    goto LAB_141f6eb44;
  }
  if (pUStackX_10 == (UClass *)0x0) {
LAB_141f6ea80:
    pUVar12 = pUVar11;
  }
  else {
    pUVar10 = UClass::GetPrivateStaticClass();
    lVar3 = pUVar12->_padding_;
    iVar9 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar9 * 8) !=
        &pUVar10->_padding_)) goto LAB_141f6ea80;
  }
  pFVar4 = (this->ValueDesc).CachedProperty;
  if ((pFVar4 == (FProperty *)0x0) || ((*(uint *)(pFVar4->_padding_ + 0x18) >> 10 & 1) == 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      EVar8 = (*pcVar6)();
      return EVar8;
    }
    pFVar4 = (this->ValueDesc).CachedProperty;
    if ((pFVar4 == (FProperty *)0x0) ||
       ((*(ulonglong *)(pFVar4->_padding_ + 0x18) >> 0x21 & 1) == 0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        EVar8 = (*pcVar6)();
        return EVar8;
      }
    }
    else {
      pUVar11 = (UClass *)pFVar4[1]._padding_;
    }
  }
  else {
    pUVar11 = (UClass *)pFVar4[1]._padding_;
  }
  if ((pUVar12 != (UClass *)0x0) && (pUVar11 != (UClass *)0x0)) {
    uVar2 = (undefined4)pUVar11->_padding_;
    if (((int)uVar2 <= (int)pUVar12->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)(int)uVar2 * 8) ==
        &pUVar11->_padding_)) {
LAB_141f6eb44:
      if (((this->ValueDesc).CachedProperty != (FProperty *)0x0) &&
         (iVar9 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,&pUStackX_10,0),
         iVar9 == -1)) {
        FScriptSetHelper::AddElement((FScriptSetHelper *)this,&pUStackX_10);
      }
      return Success;
    }
  }
  return TypeMismatch;
}

// AddValueDouble @ 141f6e580

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueDouble(FPropertyBagSetRef *this,double param_1)

{
  int iVar1;
  double local_res10 [3];
  
  switch((this->ValueDesc).ValueType) {
  case Bool:
  case Byte:
  case Int32:
  case Int64:
  case Float:
  case Double:
  case UInt32:
  case UInt64:
    break;
  default:
    return TypeMismatch;
  }
  if ((this->ValueDesc).CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  local_res10[0] = param_1;
  iVar1 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,local_res10,0);
  if (iVar1 != -1) {
    return DuplicatedValue;
  }
  FScriptSetHelper::AddElement((FScriptSetHelper *)this,local_res10);
  return Success;
}

// AddValueEnum @ 141f6e620

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueEnum(FPropertyBagSetRef *this,long64 param_1,UEnum *param_2)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  int iVar4;
  FProperty *pFVar5;
  long64 local_res10;
  
  if ((this->ValueDesc).ValueType == Enum) {
    pFVar5 = (this->ValueDesc).CachedProperty;
    local_res10 = param_1;
    if ((pFVar5 == (FProperty *)0x0) ||
       ((*(ulonglong *)(pFVar5->_padding_ + 0x18) & 0x1000000000000) == 0)) {
      pFVar5 = (FProperty *)0x0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
    if ((pFVar5[1]._padding_ == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UnderlyingProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                           ,0xf15,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    if (param_2 == (UEnum *)pFVar5[1]._padding_) {
      if ((this->ValueDesc).CachedProperty == (FProperty *)0x0) {
        return PropertyNotFound;
      }
      iVar4 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,&local_res10,0);
      if (iVar4 == -1) {
        FScriptSetHelper::AddElement((FScriptSetHelper *)this,&local_res10);
        return Success;
      }
      return DuplicatedValue;
    }
  }
  return TypeMismatch;
}

// AddValueFloat @ 141f6e730

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueFloat(FPropertyBagSetRef *this,float param_1)

{
  int iVar1;
  float local_res10 [6];
  
  switch((this->ValueDesc).ValueType) {
  case Bool:
  case Byte:
  case Int32:
  case Int64:
  case Float:
  case Double:
  case UInt32:
  case UInt64:
    break;
  default:
    return TypeMismatch;
  }
  if ((this->ValueDesc).CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  local_res10[0] = param_1;
  iVar1 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,local_res10,0);
  if (iVar1 != -1) {
    return DuplicatedValue;
  }
  FScriptSetHelper::AddElement((FScriptSetHelper *)this,local_res10);
  return Success;
}

// AddValueInt32 @ 141f6e7d0

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueInt32(FPropertyBagSetRef *this,int param_1)

{
  int iVar1;
  int local_res10 [6];
  
  switch((this->ValueDesc).ValueType) {
  case Bool:
  case Byte:
  case Int32:
  case Int64:
  case Float:
  case Double:
  case UInt32:
  case UInt64:
    break;
  default:
    return TypeMismatch;
  }
  if ((this->ValueDesc).CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  local_res10[0] = param_1;
  iVar1 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,local_res10,0);
  if (iVar1 != -1) {
    return DuplicatedValue;
  }
  FScriptSetHelper::AddElement((FScriptSetHelper *)this,local_res10);
  return Success;
}

// AddValueInt64 @ 141f6e870

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueInt64(FPropertyBagSetRef *this,long64 param_1)

{
  int iVar1;
  long64 local_res10 [3];
  
  switch((this->ValueDesc).ValueType) {
  case Bool:
  case Byte:
  case Int32:
  case Int64:
  case Float:
  case Double:
  case UInt32:
  case UInt64:
    break;
  default:
    return TypeMismatch;
  }
  if ((this->ValueDesc).CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  local_res10[0] = param_1;
  iVar1 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,local_res10,0);
  if (iVar1 != -1) {
    return DuplicatedValue;
  }
  FScriptSetHelper::AddElement((FScriptSetHelper *)this,local_res10);
  return Success;
}

// AddValueName @ 141f6e910

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueName(FPropertyBagSetRef *this,FName param_1)

{
  int iVar1;
  FName local_res10 [3];
  
  if ((this->ValueDesc).ValueType != Name) {
    return TypeMismatch;
  }
  if ((this->ValueDesc).CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  local_res10[0] = param_1;
  iVar1 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,local_res10,0);
  if (iVar1 != -1) {
    return DuplicatedValue;
  }
  FScriptSetHelper::AddElement((FScriptSetHelper *)this,local_res10);
  return Success;
}

// AddValueObject @ 141f6e970

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueObject(FPropertyBagSetRef *this,UObject *param_1)

{
  EPropertyBagPropertyType EVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  EPropertyBagResult EVar7;
  int iVar8;
  UClass *pUVar9;
  FProperty *pFVar10;
  FProperty *pFVar11;
  FProperty *pFVar12;
  FProperty *local_res10;
  
  EVar1 = (this->ValueDesc).ValueType;
  if ((EVar1 != Object) && (2 < (byte)(EVar1 - SoftObject))) {
    return TypeMismatch;
  }
  pFVar11 = (this->ValueDesc).CachedProperty;
  pFVar10 = (FProperty *)0x0;
  local_res10 = (FProperty *)param_1;
  if (((pFVar11 == (FProperty *)0x0) || ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x1a & 1) == 0))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar11 = pFVar10,
        bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  if ((pFVar11[1]._padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectProperty->PropertyClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                         ,0xf3a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  if (((this->ValueDesc).ValueTypeObject.field0_0x0.DebugPtr == (UObject *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueDesc.ValueTypeObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                         ,0xf3b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  pFVar12 = local_res10;
  EVar1 = (this->ValueDesc).ValueType;
  if ((EVar1 == Object) || (EVar1 == SoftObject)) {
    if (local_res10 != (FProperty *)0x0) {
      lVar3 = local_res10->_padding_;
      lVar4 = pFVar11[1]._padding_;
      if (lVar3 == 0) {
        return TypeMismatch;
      }
      if (lVar4 == 0) {
        return TypeMismatch;
      }
      if (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38)) {
        return TypeMismatch;
      }
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30) {
        return TypeMismatch;
      }
    }
    goto LAB_141f6eb44;
  }
  if (local_res10 == (FProperty *)0x0) {
LAB_141f6ea80:
    pFVar12 = pFVar10;
  }
  else {
    pUVar9 = UClass::GetPrivateStaticClass();
    lVar3 = pFVar12->_padding_;
    iVar8 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar9->_padding_)) goto LAB_141f6ea80;
  }
  pFVar11 = (this->ValueDesc).CachedProperty;
  if ((pFVar11 == (FProperty *)0x0) || ((*(uint *)(pFVar11->_padding_ + 0x18) >> 10 & 1) == 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
    pFVar11 = (this->ValueDesc).CachedProperty;
    if ((pFVar11 == (FProperty *)0x0) ||
       ((*(ulonglong *)(pFVar11->_padding_ + 0x18) >> 0x21 & 1) == 0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        EVar7 = (*pcVar5)();
        return EVar7;
      }
    }
    else {
      pFVar10 = (FProperty *)pFVar11[1]._padding_;
    }
  }
  else {
    pFVar10 = (FProperty *)pFVar11[1]._padding_;
  }
  if ((pFVar12 != (FProperty *)0x0) && (pFVar10 != (FProperty *)0x0)) {
    uVar2 = (undefined4)pFVar10->PropertyFlags;
    if (((int)uVar2 <= (int)pFVar12->PropertyFlags) &&
       ((int *)*(undefined1 **)(*(longlong *)&pFVar12->ArrayDim + (longlong)(int)uVar2 * 8) ==
        &pFVar10->ArrayDim)) {
LAB_141f6eb44:
      if (((this->ValueDesc).CachedProperty != (FProperty *)0x0) &&
         (iVar8 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,&local_res10,0),
         iVar8 == -1)) {
        FScriptSetHelper::AddElement((FScriptSetHelper *)this,&local_res10);
      }
      return Success;
    }
  }
  return TypeMismatch;
}

// AddValueSoftPath @ 141f6ebd0

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueSoftPath(FPropertyBagSetRef *this,FSoftObjectPath *param_1)

{
  EPropertyBagPropertyType EVar1;
  int iVar2;
  
  EVar1 = (this->ValueDesc).ValueType;
  if ((EVar1 != SoftObject) && (EVar1 != SoftClass)) {
    return TypeMismatch;
  }
  if ((this->ValueDesc).CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  iVar2 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,param_1,0);
  if (iVar2 != -1) {
    return DuplicatedValue;
  }
  FScriptSetHelper::AddElement((FScriptSetHelper *)this,param_1);
  return Success;
}

// AddValueString @ 141f6ec50

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueString(FPropertyBagSetRef *this,FString *param_1)

{
  int iVar1;
  
  if ((this->ValueDesc).ValueType != String) {
    return TypeMismatch;
  }
  if ((this->ValueDesc).CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  iVar1 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,param_1,0);
  if (iVar1 != -1) {
    return DuplicatedValue;
  }
  FScriptSetHelper::AddElement((FScriptSetHelper *)this,param_1);
  return Success;
}

// AddValueStruct @ 141f6ecc0

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueStruct(FPropertyBagSetRef *this,FConstStructView *param_1)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  int iVar4;
  FProperty *pFVar5;
  uchar *local_res8;
  
  pFVar5 = (this->ValueDesc).CachedProperty;
  if ((pFVar5 == (FProperty *)0x0) || ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    pFVar5 = (FProperty *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  if ((pFVar5[1]._padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructProperty->Struct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                         ,0xf22,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  local_res8 = param_1->StructMemory;
  if (((local_res8 != (uchar *)0x0) && (param_1->ScriptStruct != (UScriptStruct *)0x0)) &&
     (((UScriptStruct *)pFVar5[1]._padding_ == (UScriptStruct *)0x0 ||
      ((UScriptStruct *)pFVar5[1]._padding_ != param_1->ScriptStruct)))) {
    return TypeMismatch;
  }
  if ((this->ValueDesc).CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  iVar4 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,&local_res8,0);
  if (iVar4 == -1) {
    FScriptSetHelper::AddElement((FScriptSetHelper *)this,&local_res8);
    return Success;
  }
  return DuplicatedValue;
}

// AddValueText @ 141f6edf0

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueText(FPropertyBagSetRef *this,FText *param_1)

{
  int iVar1;
  
  if ((this->ValueDesc).ValueType != Text) {
    return TypeMismatch;
  }
  if ((this->ValueDesc).CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  iVar1 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,param_1,0);
  if (iVar1 != -1) {
    return DuplicatedValue;
  }
  FScriptSetHelper::AddElement((FScriptSetHelper *)this,param_1);
  return Success;
}

// AddValueUInt32 @ 141f6ee60

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueUInt32(FPropertyBagSetRef *this,uint param_1)

{
  int iVar1;
  uint local_res10 [6];
  
  switch((this->ValueDesc).ValueType) {
  case Bool:
  case Byte:
  case Int32:
  case Int64:
  case Float:
  case Double:
  case UInt32:
  case UInt64:
    break;
  default:
    return TypeMismatch;
  }
  if ((this->ValueDesc).CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  local_res10[0] = param_1;
  iVar1 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,local_res10,0);
  if (iVar1 != -1) {
    return DuplicatedValue;
  }
  FScriptSetHelper::AddElement((FScriptSetHelper *)this,local_res10);
  return Success;
}

// AddValueUInt64 @ 141f6ef00

EPropertyBagResult __thiscall
FPropertyBagSetRef::AddValueUInt64(FPropertyBagSetRef *this,ulong64 param_1)

{
  int iVar1;
  ulong64 local_res10 [3];
  
  switch((this->ValueDesc).ValueType) {
  case Bool:
  case Byte:
  case Int32:
  case Int64:
  case Float:
  case Double:
  case UInt32:
  case UInt64:
    break;
  default:
    return TypeMismatch;
  }
  if ((this->ValueDesc).CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  local_res10[0] = param_1;
  iVar1 = FScriptSetHelper::FindElementIndex((FScriptSetHelper *)this,local_res10,0);
  if (iVar1 != -1) {
    return DuplicatedValue;
  }
  FScriptSetHelper::AddElement((FScriptSetHelper *)this,local_res10);
  return Success;
}

