// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 12

// StaticStruct @ 141f543d0

UScriptStruct * __cdecl FPropertyBagPropertyDesc::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBagPropertyDesc.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FPropertyBagPropertyDesc.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc,(UObject *)pUVar1,
                         L"PropertyBagPropertyDesc");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyBagPropertyDesc.OuterSingleton;
}

// FPropertyBagPropertyDesc @ 141f65f00

FPropertyBagPropertyDesc * __thiscall
FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
          (FPropertyBagPropertyDesc *this,FPropertyBagPropertyDesc *param_1)

{
  UObject *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  pUVar1 = (param_1->ValueTypeObject).field0_0x0.DebugPtr;
  (this->ValueTypeObject).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  uVar2 = (param_1->ID).B;
  uVar3 = (param_1->ID).C;
  uVar4 = (param_1->ID).D;
  (this->ID).A = (param_1->ID).A;
  (this->ID).B = uVar2;
  (this->ID).C = uVar3;
  (this->ID).D = uVar4;
  this->Name = param_1->Name;
  this->ValueType = param_1->ValueType;
  *(undefined2 *)(this->ContainerTypes).Types.Elements =
       *(undefined2 *)(param_1->ContainerTypes).Types.Elements;
  (this->ContainerTypes).NumContainers = (param_1->ContainerTypes).NumContainers;
  this->PropertyFlags = param_1->PropertyFlags;
  this->CachedProperty = param_1->CachedProperty;
  this->CachedIndex = param_1->CachedIndex;
  return this;
}

// FPropertyBagPropertyDesc @ 141f65f80

FPropertyBagPropertyDesc * __thiscall
FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
          (FPropertyBagPropertyDesc *this,FPropertyBagPropertyDesc *param_1)

{
  UObject *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  pUVar1 = (param_1->ValueTypeObject).field0_0x0.DebugPtr;
  (this->ValueTypeObject).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  uVar2 = (param_1->ID).B;
  uVar3 = (param_1->ID).C;
  uVar4 = (param_1->ID).D;
  (this->ID).A = (param_1->ID).A;
  (this->ID).B = uVar2;
  (this->ID).C = uVar3;
  (this->ID).D = uVar4;
  this->Name = param_1->Name;
  this->ValueType = param_1->ValueType;
  *(undefined2 *)(this->ContainerTypes).Types.Elements =
       *(undefined2 *)(param_1->ContainerTypes).Types.Elements;
  (this->ContainerTypes).NumContainers = (param_1->ContainerTypes).NumContainers;
  this->PropertyFlags = param_1->PropertyFlags;
  this->CachedProperty = param_1->CachedProperty;
  this->CachedIndex = param_1->CachedIndex;
  return this;
}

// FPropertyBagPropertyDesc @ 141f66000

FPropertyBagPropertyDesc * __thiscall
FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
          (FPropertyBagPropertyDesc *this,FName param_1,FProperty *param_2)

{
  code *pcVar1;
  EPropertyBagPropertyType EVar2;
  bool bVar3;
  longlong lVar4;
  UObject *pUVar5;
  FPropertyBagPropertyDesc *pFVar6;
  byte bVar7;
  ulonglong uVar8;
  TStaticArray<EPropertyBagContainerType,2,4294967295> local_res8;
  byte local_resa;
  
  (this->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->ID).A = 0;
  (this->ID).B = 0;
  (this->ID).C = 0;
  (this->ID).D = 0;
  this->Name = param_1;
  this->ValueType = None;
  (this->ContainerTypes).Types = (EPropertyBagContainerType  [2])0x0;
  (this->ContainerTypes).NumContainers = '\0';
  this->PropertyFlags = 1;
  this->CachedProperty = (FProperty *)0x0;
  this->CachedIndex = -1;
  EVar2 = UE::StructUtils::Private::GetValueTypeFromProperty(param_2);
  this->ValueType = EVar2;
  if (param_2 == (FProperty *)0x0) {
LAB_141f6609f:
    if (param_2 == (FProperty *)0x0) {
LAB_141f660e3:
      if (param_2 != (FProperty *)0x0) {
        uVar8 = *(ulonglong *)(param_2->_padding_ + 0x18);
        if ((uVar8 >> 0x1d & 1) != 0) {
          if ((uVar8 >> 0x21 & 1) != 0) {
            pUVar5 = (UObject *)param_2[1]._padding_;
            goto LAB_141f6613d;
          }
          goto LAB_141f66074;
        }
        if ((*(uint *)(param_2->_padding_ + 0x18) >> 0x15 & 1) != 0) {
          pUVar5 = UE::StructUtils::Private::GetValueTypeObjectFromProperty
                             ((FProperty *)param_2[1]._padding_);
          goto LAB_141f6613d;
        }
        if ((*(ulonglong *)(param_2->_padding_ + 0x18) & 0x800000000000) != 0) {
          pUVar5 = UE::StructUtils::Private::GetValueTypeObjectFromProperty
                             ((FProperty *)param_2[1]._padding_);
          goto LAB_141f6613d;
        }
      }
      pUVar5 = (UObject *)0x0;
      goto LAB_141f6613d;
    }
    if ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) == 0) {
      if ((param_2 == (FProperty *)0x0) ||
         (uVar8 = *(ulonglong *)(param_2->_padding_ + 0x18), (uVar8 >> 0x10 & 1) == 0))
      goto LAB_141f660e3;
      if ((uVar8 >> 10 & 1) != 0) {
        pUVar5 = (UObject *)param_2[1]._padding_;
        goto LAB_141f6613d;
      }
    }
  }
  else if (((*(byte *)(param_2->_padding_ + 0x18) & 0x40) == 0) ||
          (lVar4 = (**(code **)(param_2->_padding_ + 0x1e0))(param_2), lVar4 == 0)) {
    if ((param_2 != (FProperty *)0x0) &&
       ((*(ulonglong *)(param_2->_padding_ + 0x18) & 0x1000000000000) != 0)) {
      pUVar5 = (UObject *)param_2[1]._padding_;
      goto LAB_141f6613d;
    }
    goto LAB_141f6609f;
  }
LAB_141f66074:
  pUVar5 = (UObject *)param_2[1]._padding_;
LAB_141f6613d:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  uVar8 = 0;
  (this->ValueTypeObject).field0_0x0.DebugPtr = pUVar5;
  local_res8.Elements[0] = None;
  local_res8.Elements[1] = None;
  local_resa = 0;
  do {
    bVar7 = local_resa;
    if (param_2 == (FProperty *)0x0) {
LAB_141f6622c:
      *&(this->ContainerTypes).Types.Elements = local_res8.Elements;
      (this->ContainerTypes).NumContainers = bVar7;
      return this;
    }
    bVar7 = (byte)uVar8;
    if ((*(uint *)(param_2->_padding_ + 0x18) >> 0x15 & 1) == 0) {
      if (param_2 == (FProperty *)0x0) goto LAB_141f6622c;
LAB_141f661c0:
      bVar7 = (byte)uVar8;
      if ((*(ulonglong *)(param_2->_padding_ + 0x18) & 0x800000000000) == 0) goto LAB_141f6622c;
      if (1 < bVar7) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6601604169788817495>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\PropertyBag.h"
                           ,0x57,"NumContainers < MaxNestedTypes");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FPropertyBagPropertyDesc *)(*pcVar1)();
          return pFVar6;
        }
        local_res8.Elements[0] = None;
        local_res8.Elements[1] = None;
        bVar7 = 0;
        goto LAB_141f6622c;
      }
      local_res8.Elements[uVar8] = Set;
      param_2 = (FProperty *)param_2[1]._padding_;
    }
    else {
      if (1 < bVar7) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6601604169788817495>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\PropertyBag.h"
                           ,0x57,"NumContainers < MaxNestedTypes");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FPropertyBagPropertyDesc *)(*pcVar1)();
          return pFVar6;
        }
        uVar8 = 0;
        local_res8.Elements[0] = None;
        local_res8.Elements[1] = None;
        local_resa = 0;
        goto LAB_141f661c0;
      }
      local_res8.Elements[uVar8] = Array;
      param_2 = (FProperty *)param_2[1]._padding_;
    }
    local_resa = local_resa + 1;
    uVar8 = (ulonglong)local_resa;
  } while( true );
}

// operator= @ 141f69a60

FPropertyBagPropertyDesc * __thiscall
FPropertyBagPropertyDesc::operator=
          (FPropertyBagPropertyDesc *this,FPropertyBagPropertyDesc *param_1)

{
  UObject *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->ValueTypeObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->ValueTypeObject).field0_0x0 = (param_1->ValueTypeObject).field0_0x0;
  uVar2 = (param_1->ID).B;
  uVar3 = (param_1->ID).C;
  uVar4 = (param_1->ID).D;
  (this->ID).A = (param_1->ID).A;
  (this->ID).B = uVar2;
  (this->ID).C = uVar3;
  (this->ID).D = uVar4;
  this->Name = param_1->Name;
  this->ValueType = param_1->ValueType;
  *(undefined2 *)(this->ContainerTypes).Types.Elements =
       *(undefined2 *)(param_1->ContainerTypes).Types.Elements;
  (this->ContainerTypes).NumContainers = (param_1->ContainerTypes).NumContainers;
  this->PropertyFlags = param_1->PropertyFlags;
  this->CachedProperty = param_1->CachedProperty;
  this->CachedIndex = param_1->CachedIndex;
  return this;
}

// operator== @ 141f6a5e0

bool __thiscall
FPropertyBagPropertyDesc::operator==
          (FPropertyBagPropertyDesc *this,FPropertyBagPropertyDesc *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (this->ID).D;
  uVar2 = (this->ID).C;
  uVar3 = (this->ID).B;
  uVar4 = (this->ID).A;
  if (((uVar1 != 0 || uVar2 != 0) || uVar3 != 0) || uVar4 != 0) {
    return ((uVar1 == (param_1->ID).D && uVar2 == (param_1->ID).C) && uVar3 == (param_1->ID).B) &&
           uVar4 == (param_1->ID).A;
  }
  return false;
}

// CompatibleType @ 141f73280

bool __thiscall
FPropertyBagPropertyDesc::CompatibleType
          (FPropertyBagPropertyDesc *this,FPropertyBagPropertyDesc *param_1)

{
  FPropertyBagContainerTypes *pFVar1;
  byte bVar2;
  EPropertyBagPropertyType EVar3;
  int iVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FPropertyBagContainerTypes *pFVar7;
  
  bVar2 = (param_1->ContainerTypes).NumContainers;
  pFVar1 = &param_1->ContainerTypes;
  if (bVar2 == (this->ContainerTypes).NumContainers) {
    if (bVar2 != 0) {
      pFVar7 = pFVar1;
      do {
        if ((pFVar7->Types).Elements[0] !=
            *(EPropertyBagContainerType *)
             ((longlong)pFVar7 + (longlong)this + (0x21 - (longlong)pFVar1))) {
          return false;
        }
        pFVar7 = (FPropertyBagContainerTypes *)((pFVar7->Types).Elements + 1);
      } while ((longlong)pFVar7 - (longlong)pFVar1 < (longlong)(ulonglong)bVar2);
    }
    EVar3 = this->ValueType;
    if (EVar3 == param_1->ValueType) {
      if ((byte)(EVar3 - Enum) < 2) {
        return (this->ValueTypeObject).field0_0x0.DebugPtr ==
               (param_1->ValueTypeObject).field0_0x0.DebugPtr;
      }
      if (EVar3 != Object) {
        return true;
      }
      pUVar5 = Cast<UClass_const_,UObject_const_>(&this->ValueTypeObject);
      pUVar6 = Cast<UClass_const_,UObject_const_>(&param_1->ValueTypeObject);
      if ((pUVar6 != (UClass *)0x0) && (pUVar5 != (UClass *)0x0)) {
        iVar4 = (int)pUVar5->_padding_;
        if ((iVar4 <= (int)pUVar6->_padding_) &&
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar4 * 8) ==
            &pUVar5->_padding_)) {
          return true;
        }
      }
      return false;
    }
  }
  return false;
}

// IsClassType @ 141f8ff90

bool __thiscall FPropertyBagPropertyDesc::IsClassType(FPropertyBagPropertyDesc *this)

{
  if ((this->ValueType != Class) && (this->ValueType != SoftClass)) {
    return false;
  }
  return true;
}

// IsNumericFloatType @ 141f90270

bool __thiscall FPropertyBagPropertyDesc::IsNumericFloatType(FPropertyBagPropertyDesc *this)

{
  if ((this->ValueType != Float) && (this->ValueType != Double)) {
    return false;
  }
  return true;
}

// IsNumericType @ 141f90290

bool __thiscall FPropertyBagPropertyDesc::IsNumericType(FPropertyBagPropertyDesc *this)

{
  switch(this->ValueType) {
  case Bool:
  case Byte:
  case Int32:
  case Int64:
  case Float:
  case Double:
  case UInt32:
  case UInt64:
    return true;
  default:
    return false;
  }
}

// IsObjectType @ 141f902e0

bool __thiscall FPropertyBagPropertyDesc::IsObjectType(FPropertyBagPropertyDesc *this)

{
  if ((this->ValueType != Object) && (this->ValueType != SoftObject)) {
    return false;
  }
  return true;
}

// IsUnsignedNumericType @ 141f90880

bool __thiscall FPropertyBagPropertyDesc::IsUnsignedNumericType(FPropertyBagPropertyDesc *this)

{
  EPropertyBagPropertyType EVar1;
  
  EVar1 = this->ValueType;
  if (((EVar1 != Byte) && (EVar1 != UInt32)) && (EVar1 != UInt64)) {
    return false;
  }
  return true;
}

