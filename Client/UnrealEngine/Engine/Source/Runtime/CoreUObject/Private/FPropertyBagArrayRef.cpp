// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 36

// FPropertyBagArrayRef @ 141f65d10

FPropertyBagArrayRef * __thiscall
FPropertyBagArrayRef::FPropertyBagArrayRef
          (FPropertyBagArrayRef *this,FPropertyBagPropertyDesc *param_1,void *param_2)

{
  FPropertyBagContainerTypes *pFVar1;
  uchar *puVar2;
  uchar uVar3;
  int iVar4;
  UObject *pUVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 uVar9;
  FPropertyBagArrayRef *pFVar10;
  byte bVar11;
  FProperty *pFVar12;
  EPropertyBagContainerType *pEVar13;
  
  pFVar12 = param_1->CachedProperty;
  if ((pFVar12 == (FProperty *)0x0) || ((*(uint *)(pFVar12->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    pFVar12 = (FProperty *)0x0;
  }
  lVar7 = pFVar12[1]._padding_;
  uVar9 = (**(code **)(*(longlong *)pFVar12[1]._padding_ + 0x168))();
  iVar4 = *(int *)(pFVar12[1]._padding_ + 0x34);
  this->_padding_ = pFVar12[1]._padding_;
  *(int *)&this->_padding_ = iVar4;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar9;
  *(char *)&this->_padding_ = (char)lVar7;
  this->_padding_ = (longlong)param_2;
  if (iVar4 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1177,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FPropertyBagArrayRef *)(*pcVar6)();
      return pFVar10;
    }
  }
  if (this->_padding_ == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1178,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FPropertyBagArrayRef *)(*pcVar6)();
      return pFVar10;
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
  pFVar12 = param_1->CachedProperty;
  if ((pFVar12 == (FProperty *)0x0) || ((*(uint *)(pFVar12->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\PropertyBag.h"
                       ,0x3e9,L"");
    pFVar12 = (FProperty *)0x0;
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FPropertyBagArrayRef *)(*pcVar6)();
      return pFVar10;
    }
  }
  if (pFVar12[1]._padding_ == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayProperty->Inner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\PropertyBag.h"
                       ,0x3ea,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FPropertyBagArrayRef *)(*pcVar6)();
      return pFVar10;
    }
  }
  (this->ValueDesc).ValueType = param_1->ValueType;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->ValueTypeObject).field0_0x0.DebugPtr, pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  pFVar1 = &(this->ValueDesc).ContainerTypes;
  (this->ValueDesc).ValueTypeObject.field0_0x0 = (param_1->ValueTypeObject).field0_0x0;
  (this->ValueDesc).CachedProperty = (FProperty *)pFVar12[1]._padding_;
  *(undefined2 *)(pFVar1->Types).Elements = *(undefined2 *)(param_1->ContainerTypes).Types.Elements;
  uVar3 = (param_1->ContainerTypes).NumContainers;
  (this->ValueDesc).ContainerTypes.NumContainers = uVar3;
  if (uVar3 != '\0') {
    (pFVar1->Types).Elements[0] = None;
    bVar11 = uVar3 - 1;
    if (bVar11 != 0) {
      pEVar13 = (pFVar1->Types).Elements + bVar11;
      do {
        (pFVar1->Types).Elements[bVar11 - 1] = *pEVar13;
        *pEVar13 = None;
        bVar11 = bVar11 - 1;
        pEVar13 = pEVar13 + -1;
      } while (bVar11 != 0);
    }
    puVar2 = &(this->ValueDesc).ContainerTypes.NumContainers;
    *puVar2 = *puVar2 + 0xff;
  }
  return this;
}

// GetMutableNestedArrayRef @ 141f82300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> * __thiscall
FPropertyBagArrayRef::GetMutableNestedArrayRef
          (FPropertyBagArrayRef *this,
          TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> *__return_storage_ptr__,int param_1
          )

{
  ulonglong *puVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> *pTVar5;
  FPropertyBagArrayRef *pFVar6;
  ulonglong uVar7;
  void *pvVar8;
  undefined1 auStack_98 [32];
  FPropertyBagArrayRef local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((this->ValueDesc).ContainerTypes.NumContainers == '\0') ||
     ((this->ValueDesc).ContainerTypes.Types.Elements[0] != Array)) {
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  }
  else {
    if (((this->ValueDesc).CachedProperty == (FProperty *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueDesc.CachedProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                           ,0xe50,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    if (-1 < param_1) {
      puVar1 = (ulonglong *)this->_padding_;
      if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
        uVar7 = *puVar1;
        if (((this->_padding_ & 1) != 0) && ((uVar7 & 1) != 0)) {
          uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)puVar1;
        }
        pvVar8 = (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar7);
        if (pvVar8 != (void *)0x0) {
          pFVar6 = FPropertyBagArrayRef(&local_78,&this->ValueDesc,pvVar8);
          lVar3 = pFVar6->_padding_;
          (__return_storage_ptr__->Variant)._padding_ = pFVar6->_padding_;
          (__return_storage_ptr__->Variant)._padding_ = lVar3;
          lVar3 = pFVar6->_padding_;
          (__return_storage_ptr__->Variant)._padding_ = pFVar6->_padding_;
          (__return_storage_ptr__->Variant)._padding_ = lVar3;
          FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                    ((FPropertyBagPropertyDesc *)&(__return_storage_ptr__->Variant)._padding_,
                     &pFVar6->ValueDesc);
          (__return_storage_ptr__->Variant).TypeIndex = '\0';
          return __return_storage_ptr__;
        }
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  }
  return __return_storage_ptr__;
}

// GetNestedArrayRef @ 141f82650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> * __thiscall
FPropertyBagArrayRef::GetNestedArrayRef
          (FPropertyBagArrayRef *this,
          TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *__return_storage_ptr__,
          int param_1)

{
  ulonglong *puVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *pTVar5;
  FPropertyBagArrayRef *pFVar6;
  ulonglong uVar7;
  void *pvVar8;
  undefined1 auStack_98 [32];
  FPropertyBagArrayRef local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((this->ValueDesc).ContainerTypes.NumContainers == '\0') ||
     ((this->ValueDesc).ContainerTypes.Types.Elements[0] != Array)) {
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  }
  else {
    if (((this->ValueDesc).CachedProperty == (FProperty *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueDesc.CachedProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                           ,0xe64,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    if (-1 < param_1) {
      puVar1 = (ulonglong *)this->_padding_;
      if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
        uVar7 = *puVar1;
        if (((this->_padding_ & 1) != 0) && ((uVar7 & 1) != 0)) {
          uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)puVar1;
        }
        pvVar8 = (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar7);
        if (pvVar8 != (void *)0x0) {
          pFVar6 = FPropertyBagArrayRef(&local_78,&this->ValueDesc,pvVar8);
          lVar3 = pFVar6->_padding_;
          (__return_storage_ptr__->Variant)._padding_ = pFVar6->_padding_;
          (__return_storage_ptr__->Variant)._padding_ = lVar3;
          lVar3 = pFVar6->_padding_;
          (__return_storage_ptr__->Variant)._padding_ = pFVar6->_padding_;
          (__return_storage_ptr__->Variant)._padding_ = lVar3;
          FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                    ((FPropertyBagPropertyDesc *)&(__return_storage_ptr__->Variant)._padding_,
                     &pFVar6->ValueDesc);
          (__return_storage_ptr__->Variant).TypeIndex = '\0';
          return __return_storage_ptr__;
        }
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  }
  return __return_storage_ptr__;
}

// GetValueBool @ 141f88130

TValueOrError<bool,EPropertyBagResult> __thiscall
FPropertyBagArrayRef::GetValueBool(FPropertyBagArrayRef *this,int param_1)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  undefined4 in_register_00000014;
  EPropertyBagResult *pEVar4;
  void *pvVar5;
  int in_R8D;
  long64 local_res8 [4];
  
  pEVar4 = (EPropertyBagResult *)CONCAT44(in_register_00000014,param_1);
  pvVar5 = (void *)0x0;
  local_res8[0] = 0;
  if (-1 < in_R8D) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((in_R8D < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      pvVar5 = (void *)((longlong)(int)this->_padding_ * (longlong)in_R8D + uVar3);
    }
  }
  EVar2 = UE::StructUtils::Private::GetPropertyAsInt64(&this->ValueDesc,pvVar5,local_res8);
  if (EVar2 != Success) {
    pEVar4[1] = TypeMismatch;
    *pEVar4 = EVar2;
    return (TValueOrError<bool,EPropertyBagResult>)SUB42(param_1,0);
  }
  pEVar4[1] = Success;
  *pEVar4 = local_res8[0] != 0;
  return (TValueOrError<bool,EPropertyBagResult>)SUB42(param_1,0);
}

// GetValueByte @ 141f882f0

TValueOrError<unsigned_char,EPropertyBagResult> __thiscall
FPropertyBagArrayRef::GetValueByte(FPropertyBagArrayRef *this,int param_1)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  undefined4 in_register_00000014;
  EPropertyBagResult *pEVar4;
  void *pvVar5;
  int in_R8D;
  ulong64 local_res8 [4];
  
  pEVar4 = (EPropertyBagResult *)CONCAT44(in_register_00000014,param_1);
  pvVar5 = (void *)0x0;
  local_res8[0] = 0;
  if (-1 < in_R8D) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((in_R8D < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      pvVar5 = (void *)((longlong)(int)this->_padding_ * (longlong)in_R8D + uVar3);
    }
  }
  EVar2 = UE::StructUtils::Private::GetPropertyAsUInt64(&this->ValueDesc,pvVar5,local_res8);
  if (EVar2 != Success) {
    pEVar4[1] = TypeMismatch;
    *pEVar4 = EVar2;
    return (TValueOrError<unsigned_char,EPropertyBagResult>)SUB42(param_1,0);
  }
  pEVar4[1] = Success;
  *pEVar4 = (EPropertyBagResult)local_res8[0];
  return (TValueOrError<unsigned_char,EPropertyBagResult>)SUB42(param_1,0);
}

// GetValueClass @ 141f88690

TValueOrError<UClass_*,EPropertyBagResult> * __thiscall
FPropertyBagArrayRef::GetValueClass
          (FPropertyBagArrayRef *this,
          TValueOrError<UClass_*,EPropertyBagResult> *__return_storage_ptr__,int param_1)

{
  EPropertyBagPropertyType EVar1;
  int iVar2;
  ulonglong *puVar3;
  code *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  TValueOrError<UClass_*,EPropertyBagResult> *pTVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  longlong lVar10;
  FProperty *pFVar11;
  
  if (param_1 < 0) {
LAB_141f886f6:
    lVar10 = 0;
  }
  else {
    puVar3 = (ulonglong *)this->_padding_;
    if (((int)puVar3[1] <= param_1) || ((int)puVar3[1] == 0)) goto LAB_141f886f6;
    uVar9 = *puVar3;
    if (((this->_padding_ & 1) != 0) && ((uVar9 & 1) != 0)) {
      uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar3;
    }
    lVar10 = (longlong)(int)this->_padding_ * (longlong)param_1 + uVar9;
  }
  if ((this == (FPropertyBagArrayRef *)0xffffffffffffffe0) ||
     (pFVar11 = (this->ValueDesc).CachedProperty, pFVar11 == (FProperty *)0x0)) {
    uVar5 = 3;
  }
  else {
    EVar1 = (this->ValueDesc).ValueType;
    if ((EVar1 == Object) || ((byte)(EVar1 - SoftObject) < 3)) {
      if (lVar10 == 0) {
        uVar5 = 2;
        goto LAB_141f88817;
      }
      if ((this->ValueDesc).ContainerTypes.NumContainers == '\0') {
        if ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x1a & 1) == 0) {
          pFVar11 = (FProperty *)0x0;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CastResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x480,L"CastFieldChecked failed with 0x%016llx");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TValueOrError<UClass_*,EPropertyBagResult> *)(*pcVar4)();
            return pTVar7;
          }
        }
        if ((pFVar11[1]._padding_ == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ObjectProperty->PropertyClass",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                               ,0x36b,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TValueOrError<UClass_*,EPropertyBagResult> *)(*pcVar4)();
          return pTVar7;
        }
        lVar10 = (**(code **)(pFVar11->_padding_ + 0x1f8))(pFVar11,lVar10);
        if (lVar10 != 0) {
          pUVar8 = UClass::GetPrivateStaticClass();
          iVar2 = (int)pUVar8->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar8->_padding_)) goto LAB_141f887f1;
        }
        bVar6 = lVar10 == 0;
        lVar10 = 0;
        if (bVar6) {
LAB_141f887f1:
          (__return_storage_ptr__->Variant)._padding_ = lVar10;
          (__return_storage_ptr__->Variant).TypeIndex = '\0';
          return __return_storage_ptr__;
        }
        *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
        goto LAB_141f88819;
      }
    }
    uVar5 = 1;
  }
LAB_141f88817:
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar5;
LAB_141f88819:
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueDouble @ 141f88990

TValueOrError<double,EPropertyBagResult> * __thiscall
FPropertyBagArrayRef::GetValueDouble
          (FPropertyBagArrayRef *this,
          TValueOrError<double,EPropertyBagResult> *__return_storage_ptr__,int param_1)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  void *pvVar4;
  double local_res8 [4];
  
  local_res8[0] = 0.0;
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      pvVar4 = (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3);
      goto LAB_141f889e2;
    }
  }
  pvVar4 = (void *)0x0;
LAB_141f889e2:
  EVar2 = UE::StructUtils::Private::GetPropertyAsDouble(&this->ValueDesc,pvVar4,local_res8);
  if (EVar2 != Success) {
    *(EPropertyBagResult *)&(__return_storage_ptr__->Variant)._padding_ = EVar2;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Variant)._padding_ = (longlong)local_res8[0];
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// GetValueEnum @ 141f88b50

TValueOrError<unsigned_char,EPropertyBagResult> __thiscall
FPropertyBagArrayRef::GetValueEnum(FPropertyBagArrayRef *this,int param_1,UEnum *param_2)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  undefined4 in_register_00000014;
  EPropertyBagResult *pEVar4;
  int iVar5;
  void *pvVar6;
  UEnum *in_R9;
  EPropertyBagResult local_res18 [16];
  
  pEVar4 = (EPropertyBagResult *)CONCAT44(in_register_00000014,param_1);
  iVar5 = (int)param_2;
  if (-1 < iVar5) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((iVar5 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      pvVar6 = (void *)((longlong)(int)this->_padding_ * (longlong)iVar5 + uVar3);
      goto LAB_141f88b9c;
    }
  }
  pvVar6 = (void *)0x0;
LAB_141f88b9c:
  EVar2 = UE::StructUtils::Private::GetPropertyValueAsEnum
                    (&this->ValueDesc,in_R9,pvVar6,local_res18);
  if (EVar2 != Success) {
    pEVar4[1] = TypeMismatch;
    *pEVar4 = EVar2;
    return (TValueOrError<unsigned_char,EPropertyBagResult>)SUB42(param_1,0);
  }
  pEVar4[1] = Success;
  *pEVar4 = local_res18[0];
  return (TValueOrError<unsigned_char,EPropertyBagResult>)SUB42(param_1,0);
}

// GetValueFloat @ 141f88d30

TValueOrError<float,EPropertyBagResult> __thiscall
FPropertyBagArrayRef::GetValueFloat(FPropertyBagArrayRef *this,int param_1)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  undefined4 in_register_00000014;
  TVariant<float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,EPropertyBagResult>::FEmptyType>
  TVar4;
  void *pvVar5;
  int in_R8D;
  double local_res8 [4];
  
  TVar4._4_4_ = in_register_00000014;
  TVar4._padding_ = param_1;
  local_res8[0] = 0.0;
  if (-1 < in_R8D) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((in_R8D < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      pvVar5 = (void *)((longlong)(int)this->_padding_ * (longlong)in_R8D + uVar3);
      goto LAB_141f88d82;
    }
  }
  pvVar5 = (void *)0x0;
LAB_141f88d82:
  EVar2 = UE::StructUtils::Private::GetPropertyAsDouble(&this->ValueDesc,pvVar5,local_res8);
  if (EVar2 != Success) {
    *(EPropertyBagResult *)TVar4 = EVar2;
    *(EPropertyBagResult *)((longlong)TVar4 + 4) = TypeMismatch;
    return (TValueOrError<float,EPropertyBagResult>)TVar4;
  }
  *(EPropertyBagResult *)((longlong)TVar4 + 4) = Success;
  *(float *)TVar4 = (float)local_res8[0];
  return (TValueOrError<float,EPropertyBagResult>)TVar4;
}

// GetValueInt32 @ 141f88f00

TValueOrError<int,EPropertyBagResult> __thiscall
FPropertyBagArrayRef::GetValueInt32(FPropertyBagArrayRef *this,int param_1)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  undefined4 in_register_00000014;
  TVariant<int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,EPropertyBagResult>::FEmptyType>
  TVar4;
  void *pvVar5;
  int in_R8D;
  long64 local_res8 [4];
  
  TVar4._4_4_ = in_register_00000014;
  TVar4._padding_ = param_1;
  pvVar5 = (void *)0x0;
  local_res8[0] = 0;
  if (-1 < in_R8D) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((in_R8D < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      pvVar5 = (void *)((longlong)(int)this->_padding_ * (longlong)in_R8D + uVar3);
    }
  }
  EVar2 = UE::StructUtils::Private::GetPropertyAsInt64(&this->ValueDesc,pvVar5,local_res8);
  if (EVar2 != Success) {
    *(EPropertyBagResult *)TVar4 = EVar2;
    *(EPropertyBagResult *)((longlong)TVar4 + 4) = TypeMismatch;
    return (TValueOrError<int,EPropertyBagResult>)TVar4;
  }
  *(undefined4 *)TVar4 = (undefined4)local_res8[0];
  *(EPropertyBagResult *)((longlong)TVar4 + 4) = Success;
  return (TValueOrError<int,EPropertyBagResult>)TVar4;
}

// GetValueInt64 @ 141f890e0

TValueOrError<__int64,EPropertyBagResult> * __thiscall
FPropertyBagArrayRef::GetValueInt64
          (FPropertyBagArrayRef *this,
          TValueOrError<__int64,EPropertyBagResult> *__return_storage_ptr__,int param_1)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  void *pvVar4;
  long64 local_res8 [4];
  
  pvVar4 = (void *)0x0;
  local_res8[0] = 0;
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      pvVar4 = (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3);
    }
  }
  EVar2 = UE::StructUtils::Private::GetPropertyAsInt64(&this->ValueDesc,pvVar4,local_res8);
  if (EVar2 != Success) {
    *(EPropertyBagResult *)&(__return_storage_ptr__->Variant)._padding_ = EVar2;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Variant)._padding_ = local_res8[0];
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// GetValueName @ 141f892d0

TValueOrError<FName,EPropertyBagResult> * __thiscall
FPropertyBagArrayRef::GetValueName
          (FPropertyBagArrayRef *this,
          TValueOrError<FName,EPropertyBagResult> *__return_storage_ptr__,int param_1)

{
  ulonglong *puVar1;
  FProperty *pFVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      puVar4 = (undefined8 *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3);
      goto LAB_141f89313;
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_141f89313:
  if ((this == (FPropertyBagArrayRef *)0xffffffffffffffe0) ||
     (pFVar2 = (this->ValueDesc).CachedProperty, pFVar2 == (FProperty *)0x0)) {
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    *(undefined1 *)&__return_storage_ptr__->Variant = 3;
    return __return_storage_ptr__;
  }
  if (puVar4 == (undefined8 *)0x0) {
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    *(undefined1 *)&__return_storage_ptr__->Variant = 2;
    return __return_storage_ptr__;
  }
  if (((this->ValueDesc).ContainerTypes.NumContainers == '\0') &&
     ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0xd & 1) != 0)) {
    *(undefined8 *)&__return_storage_ptr__->Variant = *puVar4;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
    return __return_storage_ptr__;
  }
  *(undefined1 *)&__return_storage_ptr__->Variant = 1;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueObject @ 141f89670

TValueOrError<UObject_*,EPropertyBagResult> * __thiscall
FPropertyBagArrayRef::GetValueObject
          (FPropertyBagArrayRef *this,
          TValueOrError<UObject_*,EPropertyBagResult> *__return_storage_ptr__,int param_1,
          UClass *param_2)

{
  EPropertyBagPropertyType EVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 uVar6;
  bool bVar7;
  TValueOrError<UObject_*,EPropertyBagResult> *pTVar8;
  ulonglong uVar9;
  FProperty *pFVar10;
  longlong lVar11;
  
  if (param_1 < 0) {
LAB_141f896cc:
    lVar11 = 0;
  }
  else {
    puVar3 = (ulonglong *)this->_padding_;
    if (((int)puVar3[1] <= param_1) || ((int)puVar3[1] == 0)) goto LAB_141f896cc;
    uVar9 = *puVar3;
    if (((this->_padding_ & 1) != 0) && ((uVar9 & 1) != 0)) {
      uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar3;
    }
    lVar11 = (longlong)(int)this->_padding_ * (longlong)param_1 + uVar9;
  }
  if ((this == (FPropertyBagArrayRef *)0xffffffffffffffe0) ||
     (pFVar10 = (this->ValueDesc).CachedProperty, pFVar10 == (FProperty *)0x0)) {
    uVar6 = 3;
  }
  else {
    EVar1 = (this->ValueDesc).ValueType;
    if ((EVar1 == Object) || ((byte)(EVar1 - SoftObject) < 3)) {
      if (lVar11 == 0) {
        uVar6 = 2;
        goto LAB_141f897c8;
      }
      if ((this->ValueDesc).ContainerTypes.NumContainers == '\0') {
        if (((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x1a & 1) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x480,L"CastFieldChecked failed with 0x%016llx"),
           pFVar10 = (FProperty *)0x0, bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TValueOrError<UObject_*,EPropertyBagResult> *)(*pcVar5)();
          return pTVar8;
        }
        if ((pFVar10[1]._padding_ == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ObjectProperty->PropertyClass",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                               ,0x36b,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TValueOrError<UObject_*,EPropertyBagResult> *)(*pcVar5)();
          return pTVar8;
        }
        if (param_2 == (UClass *)0x0) {
LAB_141f897ae:
          lVar11 = (**(code **)(pFVar10->_padding_ + 0x1f8))(pFVar10,lVar11);
          (__return_storage_ptr__->Variant)._padding_ = lVar11;
          (__return_storage_ptr__->Variant).TypeIndex = '\0';
          return __return_storage_ptr__;
        }
        lVar4 = pFVar10[1]._padding_;
        if (lVar4 != 0) {
          iVar2 = (int)param_2->_padding_;
          if ((iVar2 <= *(int *)(lVar4 + 0x38)) &&
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) ==
              &param_2->_padding_)) goto LAB_141f897ae;
        }
      }
    }
    uVar6 = 1;
  }
LAB_141f897c8:
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar6;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueSoftPath @ 141f89c90

TValueOrError<FSoftObjectPath,EPropertyBagResult> * __thiscall
FPropertyBagArrayRef::GetValueSoftPath
          (FPropertyBagArrayRef *this,
          TValueOrError<FSoftObjectPath,EPropertyBagResult> *__return_storage_ptr__,int param_1)

{
  EPropertyBagPropertyType EVar1;
  ulonglong *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  TValueOrError<FSoftObjectPath,EPropertyBagResult> *pTVar6;
  ulonglong uVar7;
  FProperty *pFVar8;
  FProperty *pFVar9;
  FProperty *pFVar10;
  FSoftObjectPath local_28;
  
  pFVar8 = (FProperty *)0x0;
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  pFVar10 = pFVar8;
  if (-1 < param_1) {
    puVar2 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar2[1]) && ((int)puVar2[1] != 0)) {
      uVar7 = *puVar2;
      if (((this->_padding_ & 1) != 0) && ((uVar7 & 1) != 0)) {
        uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)puVar2;
      }
      pFVar10 = (FProperty *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar7);
    }
  }
  if ((this == (FPropertyBagArrayRef *)0xffffffffffffffe0) ||
     (pFVar9 = (this->ValueDesc).CachedProperty, pFVar9 == (FProperty *)0x0)) {
    uVar4 = 3;
  }
  else {
    EVar1 = (this->ValueDesc).ValueType;
    if ((EVar1 == SoftObject) || (EVar1 == SoftClass)) {
      if (pFVar10 == (FProperty *)0x0) {
        uVar4 = 2;
        goto LAB_141f89de7;
      }
      if ((this->ValueDesc).ContainerTypes.NumContainers == '\0') {
        if (((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x1d & 1) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar9 = pFVar8,
           bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TValueOrError<FSoftObjectPath,EPropertyBagResult> *)(*pcVar3)();
          return pTVar6;
        }
        if ((pFVar9[1]._padding_ == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("SoftObjectProperty->PropertyClass",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                               ,0x38c,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TValueOrError<FSoftObjectPath,EPropertyBagResult> *)(*pcVar3)();
          return pTVar6;
        }
        FSoftObjectPath::operator=(&local_28,(FSoftObjectPath *)&pFVar10->_padding_);
        (__return_storage_ptr__->Variant)._padding_ = (longlong)local_28.AssetPath.PackageName;
        (__return_storage_ptr__->Variant)._padding_ = (longlong)local_28.AssetPath.AssetName;
        (__return_storage_ptr__->Variant)._padding_ =
             (longlong)local_28.SubPathString.Data.AllocatorInstance.Data;
        *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_28.SubPathString.Data.ArrayNum;
        *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) =
             local_28.SubPathString.Data.ArrayMax;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
    }
    uVar4 = 1;
  }
LAB_141f89de7:
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar4;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueString @ 141f8a0a0

TValueOrError<FString,EPropertyBagResult> * __thiscall
FPropertyBagArrayRef::GetValueString
          (FPropertyBagArrayRef *this,
          TValueOrError<FString,EPropertyBagResult> *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  FProperty *pFVar3;
  ForAnyElementType _Src;
  ulonglong uVar4;
  FString *pFVar5;
  longlong lVar6;
  FString local_18;
  
  pFVar5 = (FString *)0x0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (-1 < param_1) {
    puVar2 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar2[1]) && ((int)puVar2[1] != 0)) {
      uVar4 = *puVar2;
      if (((this->_padding_ & 1) != 0) && ((uVar4 & 1) != 0)) {
        uVar4 = ((longlong)uVar4 >> 0x18) + (longlong)puVar2;
      }
      pFVar5 = (FString *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar4);
    }
  }
  if ((this == (FPropertyBagArrayRef *)0xffffffffffffffe0) ||
     (pFVar3 = (this->ValueDesc).CachedProperty, pFVar3 == (FProperty *)0x0)) {
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
    return __return_storage_ptr__;
  }
  if (pFVar5 == (FString *)0x0) {
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 2;
    return __return_storage_ptr__;
  }
  if (((this->ValueDesc).ContainerTypes.NumContainers == '\0') &&
     ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0xe & 1) != 0)) {
    ::FString::operator=(&local_18,pFVar5);
    _Src.Data = local_18.Data.AllocatorInstance.Data;
    lVar6 = (longlong)local_18.Data.ArrayNum;
    piVar1 = (int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4);
    (__return_storage_ptr__->Variant)._padding_ = 0;
    *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_18.Data.ArrayNum;
    if (local_18.Data.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                 local_18.Data.ArrayNum,piVar1);
      memcpy((void *)(__return_storage_ptr__->Variant)._padding_,_Src.Data,lVar6 * 2);
    }
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueStruct @ 141f8a4f0

TValueOrError<FStructView,EPropertyBagResult> * __thiscall
FPropertyBagArrayRef::GetValueStruct
          (FPropertyBagArrayRef *this,
          TValueOrError<FStructView,EPropertyBagResult> *__return_storage_ptr__,int param_1,
          UScriptStruct *param_2)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  TValueOrError<FStructView,EPropertyBagResult> *pTVar7;
  ulonglong uVar8;
  FProperty *pFVar9;
  longlong lVar10;
  
  if (param_1 < 0) {
LAB_141f8a54c:
    lVar10 = 0;
  }
  else {
    puVar2 = (ulonglong *)this->_padding_;
    if (((int)puVar2[1] <= param_1) || ((int)puVar2[1] == 0)) goto LAB_141f8a54c;
    uVar8 = *puVar2;
    if (((this->_padding_ & 1) != 0) && ((uVar8 & 1) != 0)) {
      uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)puVar2;
    }
    lVar10 = (longlong)(int)this->_padding_ * (longlong)param_1 + uVar8;
  }
  if ((this == (FPropertyBagArrayRef *)0xffffffffffffffe0) ||
     (pFVar9 = (this->ValueDesc).CachedProperty, pFVar9 == (FProperty *)0x0)) {
    uVar5 = 3;
  }
  else {
    if ((this->ValueDesc).ValueType == Struct) {
      if (lVar10 == 0) {
        uVar5 = 2;
        goto LAB_141f8a644;
      }
      if ((this->ValueDesc).ContainerTypes.NumContainers == '\0') {
        if (((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x14 & 1) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x480,L"CastFieldChecked failed with 0x%016llx"),
           pFVar9 = (FProperty *)0x0, bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TValueOrError<FStructView,EPropertyBagResult> *)(*pcVar4)();
          return pTVar7;
        }
        if ((pFVar9[1]._padding_ == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("StructProperty->Struct",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                               ,0x348,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TValueOrError<FStructView,EPropertyBagResult> *)(*pcVar4)();
          return pTVar7;
        }
        if (param_2 == (UScriptStruct *)0x0) {
LAB_141f8a626:
          (__return_storage_ptr__->Variant)._padding_ = pFVar9[1]._padding_;
          (__return_storage_ptr__->Variant)._padding_ = lVar10;
          (__return_storage_ptr__->Variant).TypeIndex = '\0';
          return __return_storage_ptr__;
        }
        lVar3 = pFVar9[1]._padding_;
        if (lVar3 != 0) {
          iVar1 = (int)param_2->_padding_;
          if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
              &param_2->_padding_)) goto LAB_141f8a626;
        }
      }
    }
    uVar5 = 1;
  }
LAB_141f8a644:
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar5;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueText @ 141f8a8f0

TValueOrError<FText,EPropertyBagResult> * __thiscall
FPropertyBagArrayRef::GetValueText
          (FPropertyBagArrayRef *this,
          TValueOrError<FText,EPropertyBagResult> *__return_storage_ptr__,int param_1)

{
  ulonglong *puVar1;
  FProperty *pFVar2;
  ITextData *pIVar3;
  TRefCountPtr<ITextData> TVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 local_res18 [8];
  FText local_18;
  
  FText::FText(&local_18);
  TVar4.Reference = local_18.TextData.Reference;
  if (param_1 < 0) {
LAB_141f8a94c:
    plVar7 = (longlong *)0x0;
  }
  else {
    puVar1 = (ulonglong *)this->_padding_;
    if (((int)puVar1[1] <= param_1) || ((int)puVar1[1] == 0)) goto LAB_141f8a94c;
    uVar6 = *puVar1;
    if (((this->_padding_ & 1) != 0) && ((uVar6 & 1) != 0)) {
      uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)puVar1;
    }
    plVar7 = (longlong *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar6);
  }
  if ((this == (FPropertyBagArrayRef *)0xffffffffffffffe0) ||
     (pFVar2 = (this->ValueDesc).CachedProperty, pFVar2 == (FProperty *)0x0)) {
    uVar5 = 3;
  }
  else if (plVar7 == (longlong *)0x0) {
    uVar5 = 2;
  }
  else if ((this->ValueDesc).ContainerTypes.NumContainers == '\0') {
    if ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x1e & 1) != 0) {
      pIVar3 = (ITextData *)*plVar7;
      if (local_18.TextData.Reference != pIVar3) {
        local_18.TextData.Reference = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res18);
        }
        if (TVar4.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
        }
      }
      local_18.Flags = *(uint *)(plVar7 + 1);
      (__return_storage_ptr__->Variant)._padding_ = (longlong)local_18.TextData.Reference;
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 8))
                  (local_18.TextData.Reference,local_res18);
      }
      *(uint *)&(__return_storage_ptr__->Variant)._padding_ = local_18.Flags;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      goto LAB_141f8aa11;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar5;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
LAB_141f8aa11:
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetValueUInt32 @ 141f8aee0

TValueOrError<unsigned_int,EPropertyBagResult> __thiscall
FPropertyBagArrayRef::GetValueUInt32(FPropertyBagArrayRef *this,int param_1)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  undefined4 in_register_00000014;
  TVariant<unsigned_int,TValueOrError<unsigned_int,EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_int,EPropertyBagResult>::FEmptyType>
  TVar4;
  void *pvVar5;
  int in_R8D;
  ulong64 local_res8 [4];
  
  TVar4._4_4_ = in_register_00000014;
  TVar4._padding_ = param_1;
  pvVar5 = (void *)0x0;
  local_res8[0] = 0;
  if (-1 < in_R8D) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((in_R8D < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      pvVar5 = (void *)((longlong)(int)this->_padding_ * (longlong)in_R8D + uVar3);
    }
  }
  EVar2 = UE::StructUtils::Private::GetPropertyAsUInt64(&this->ValueDesc,pvVar5,local_res8);
  if (EVar2 != Success) {
    *(EPropertyBagResult *)TVar4 = EVar2;
    *(EPropertyBagResult *)((longlong)TVar4 + 4) = TypeMismatch;
    return (TValueOrError<unsigned_int,EPropertyBagResult>)TVar4;
  }
  *(undefined4 *)TVar4 = (undefined4)local_res8[0];
  *(EPropertyBagResult *)((longlong)TVar4 + 4) = Success;
  return (TValueOrError<unsigned_int,EPropertyBagResult>)TVar4;
}

// GetValueUInt64 @ 141f8b0c0

TValueOrError<unsigned___int64,EPropertyBagResult> * __thiscall
FPropertyBagArrayRef::GetValueUInt64
          (FPropertyBagArrayRef *this,
          TValueOrError<unsigned___int64,EPropertyBagResult> *__return_storage_ptr__,int param_1)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  void *pvVar4;
  ulong64 local_res8 [4];
  
  pvVar4 = (void *)0x0;
  local_res8[0] = 0;
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      pvVar4 = (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3);
    }
  }
  EVar2 = UE::StructUtils::Private::GetPropertyAsUInt64(&this->ValueDesc,pvVar4,local_res8);
  if (EVar2 != Success) {
    *(EPropertyBagResult *)&(__return_storage_ptr__->Variant)._padding_ = EVar2;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Variant)._padding_ = local_res8[0];
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// SetValueBool @ 141fabfd0

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueBool(FPropertyBagArrayRef *this,int param_1,bool param_2)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      EVar2 = UE::StructUtils::Private::SetPropertyFromInt64
                        (&this->ValueDesc,
                         (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3),
                         (ulonglong)param_2);
      return EVar2;
    }
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromInt64
                    (&this->ValueDesc,(void *)0x0,(ulonglong)param_2);
  return EVar2;
}

// SetValueByte @ 141fac110

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueByte(FPropertyBagArrayRef *this,int param_1,uchar param_2)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      EVar2 = UE::StructUtils::Private::SetPropertyFromUInt64
                        (&this->ValueDesc,
                         (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3),
                         (ulonglong)param_2);
      return EVar2;
    }
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromUInt64
                    (&this->ValueDesc,(void *)0x0,(ulonglong)param_2);
  return EVar2;
}

// SetValueClass @ 141fac250

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueClass(FPropertyBagArrayRef *this,int param_1,UClass *param_2)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      EVar2 = UE::StructUtils::Private::SetPropertyValueAsObject
                        (&this->ValueDesc,
                         (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3),
                         (UObject *)param_2);
      return EVar2;
    }
  }
  EVar2 = UE::StructUtils::Private::SetPropertyValueAsObject
                    (&this->ValueDesc,(void *)0x0,(UObject *)param_2);
  return EVar2;
}

// SetValueDouble @ 141fac390

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueDouble(FPropertyBagArrayRef *this,int param_1,double param_2)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      EVar2 = UE::StructUtils::Private::SetPropertyFromDouble
                        (&this->ValueDesc,
                         (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3),
                         param_2);
      return EVar2;
    }
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromDouble(&this->ValueDesc,(void *)0x0,param_2);
  return EVar2;
}

// SetValueEnum @ 141fac4e0

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueEnum
          (FPropertyBagArrayRef *this,int param_1,uchar param_2,UEnum *param_3)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      EVar2 = UE::StructUtils::Private::SetPropertyValueAsEnum
                        (&this->ValueDesc,
                         (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3),
                         param_2,param_3);
      return EVar2;
    }
  }
  EVar2 = UE::StructUtils::Private::SetPropertyValueAsEnum
                    (&this->ValueDesc,(void *)0x0,param_2,param_3);
  return EVar2;
}

// SetValueFloat @ 141fac620

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueFloat(FPropertyBagArrayRef *this,int param_1,float param_2)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      EVar2 = UE::StructUtils::Private::SetPropertyFromDouble
                        (&this->ValueDesc,
                         (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3),
                         (double)param_2);
      return EVar2;
    }
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromDouble
                    (&this->ValueDesc,(void *)0x0,(double)param_2);
  return EVar2;
}

// SetValueInt32 @ 141fac760

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueInt32(FPropertyBagArrayRef *this,int param_1,int param_2)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      EVar2 = UE::StructUtils::Private::SetPropertyFromInt64
                        (&this->ValueDesc,
                         (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3),
                         (longlong)param_2);
      return EVar2;
    }
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromInt64
                    (&this->ValueDesc,(void *)0x0,(longlong)param_2);
  return EVar2;
}

// SetValueInt64 @ 141fac8a0

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueInt64(FPropertyBagArrayRef *this,int param_1,long64 param_2)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      EVar2 = UE::StructUtils::Private::SetPropertyFromInt64
                        (&this->ValueDesc,
                         (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3),
                         param_2);
      return EVar2;
    }
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromInt64(&this->ValueDesc,(void *)0x0,param_2);
  return EVar2;
}

// SetValueName @ 141faca60

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueName(FPropertyBagArrayRef *this,int param_1,FName param_2)

{
  ulonglong *puVar1;
  FProperty *pFVar2;
  ulonglong uVar3;
  FName *pFVar4;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      pFVar4 = (FName *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3);
      goto LAB_141faca9f;
    }
  }
  pFVar4 = (FName *)0x0;
LAB_141faca9f:
  if ((this == (FPropertyBagArrayRef *)0xffffffffffffffe0) ||
     (pFVar2 = (this->ValueDesc).CachedProperty, pFVar2 == (FProperty *)0x0)) {
    return PropertyNotFound;
  }
  if (pFVar4 == (FName *)0x0) {
    return OutOfBounds;
  }
  if (((this->ValueDesc).ContainerTypes.NumContainers == '\0') &&
     ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0xd & 1) != 0)) {
    *pFVar4 = param_2;
    return Success;
  }
  return TypeMismatch;
}

// SetValueObject @ 141facbc0

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueObject(FPropertyBagArrayRef *this,int param_1,UObject *param_2)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      EVar2 = UE::StructUtils::Private::SetPropertyValueAsObject
                        (&this->ValueDesc,
                         (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3),
                         param_2);
      return EVar2;
    }
  }
  EVar2 = UE::StructUtils::Private::SetPropertyValueAsObject(&this->ValueDesc,(void *)0x0,param_2);
  return EVar2;
}

// SetValueSoftPath @ 141facfe0

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueSoftPath
          (FPropertyBagArrayRef *this,int param_1,FSoftObjectPath *param_2)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      EVar2 = UE::StructUtils::Private::SetPropertyValueAsSoftPath
                        (&this->ValueDesc,
                         (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3),
                         param_2,(UObject *)0x0);
      return EVar2;
    }
  }
  EVar2 = UE::StructUtils::Private::SetPropertyValueAsSoftPath
                    (&this->ValueDesc,(void *)0x0,param_2,(UObject *)0x0);
  return EVar2;
}

// SetValueSoftPath @ 141fad040

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueSoftPath(FPropertyBagArrayRef *this,int param_1,UObject *param_2)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  void *pvVar4;
  FSoftObjectPath local_28;
  
  pvVar4 = (void *)0x0;
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,param_2);
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      pvVar4 = (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3);
    }
  }
  EVar2 = UE::StructUtils::Private::SetPropertyValueAsSoftPath
                    (&this->ValueDesc,pvVar4,&local_28,param_2);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return EVar2;
}

// SetValueString @ 141fad280

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueString(FPropertyBagArrayRef *this,int param_1,FString *param_2)

{
  ulonglong *puVar1;
  FProperty *pFVar2;
  ulonglong uVar3;
  FString *this_00;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      this_00 = (FString *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3);
      goto LAB_141fad2c6;
    }
  }
  this_00 = (FString *)0x0;
LAB_141fad2c6:
  if ((this == (FPropertyBagArrayRef *)0xffffffffffffffe0) ||
     (pFVar2 = (this->ValueDesc).CachedProperty, pFVar2 == (FProperty *)0x0)) {
    return PropertyNotFound;
  }
  if (this_00 == (FString *)0x0) {
    return OutOfBounds;
  }
  if (((this->ValueDesc).ContainerTypes.NumContainers == '\0') &&
     ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0xe & 1) != 0)) {
    ::FString::operator=(this_00,param_2);
    return Success;
  }
  return TypeMismatch;
}

// SetValueStruct @ 141fad410

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueStruct
          (FPropertyBagArrayRef *this,int param_1,FConstStructView *param_2)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  void *pvVar4;
  FConstStructView local_18;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      pvVar4 = (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3);
      goto LAB_141fad453;
    }
  }
  pvVar4 = (void *)0x0;
LAB_141fad453:
  local_18.ScriptStruct = param_2->ScriptStruct;
  local_18.StructMemory = param_2->StructMemory;
  EVar2 = UE::StructUtils::Private::SetPropertyValueAsStruct(&this->ValueDesc,pvVar4,&local_18);
  return EVar2;
}

// SetValueText @ 141fad660

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueText(FPropertyBagArrayRef *this,int param_1,FText *param_2)

{
  ulonglong *puVar1;
  FProperty *pFVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar5 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar5 & 1) != 0)) {
        uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)puVar1;
      }
      plVar6 = (longlong *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar5);
      goto LAB_141fad6ab;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_141fad6ab:
  if ((this == (FPropertyBagArrayRef *)0xffffffffffffffe0) ||
     (pFVar2 = (this->ValueDesc).CachedProperty, pFVar2 == (FProperty *)0x0)) {
    return PropertyNotFound;
  }
  if (plVar6 == (longlong *)0x0) {
    return OutOfBounds;
  }
  if (((this->ValueDesc).ContainerTypes.NumContainers == '\0') &&
     ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x1e & 1) != 0)) {
    pIVar3 = (param_2->TextData).Reference;
    pIVar4 = (ITextData *)*plVar6;
    if (pIVar4 != pIVar3) {
      *plVar6 = (longlong)pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res10);
      }
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
      }
    }
    *(uint *)(plVar6 + 1) = param_2->Flags;
    return Success;
  }
  return TypeMismatch;
}

// SetValueUInt32 @ 141fad840

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueUInt32(FPropertyBagArrayRef *this,int param_1,uint param_2)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      EVar2 = UE::StructUtils::Private::SetPropertyFromUInt64
                        (&this->ValueDesc,
                         (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3),
                         (ulonglong)param_2);
      return EVar2;
    }
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromUInt64
                    (&this->ValueDesc,(void *)0x0,(ulonglong)param_2);
  return EVar2;
}

// SetValueUInt64 @ 141fad980

EPropertyBagResult __thiscall
FPropertyBagArrayRef::SetValueUInt64(FPropertyBagArrayRef *this,int param_1,ulong64 param_2)

{
  ulonglong *puVar1;
  EPropertyBagResult EVar2;
  ulonglong uVar3;
  
  if (-1 < param_1) {
    puVar1 = (ulonglong *)this->_padding_;
    if ((param_1 < (int)puVar1[1]) && ((int)puVar1[1] != 0)) {
      uVar3 = *puVar1;
      if (((this->_padding_ & 1) != 0) && ((uVar3 & 1) != 0)) {
        uVar3 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
      }
      EVar2 = UE::StructUtils::Private::SetPropertyFromUInt64
                        (&this->ValueDesc,
                         (void *)((longlong)(int)this->_padding_ * (longlong)param_1 + uVar3),
                         param_2);
      return EVar2;
    }
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromUInt64(&this->ValueDesc,(void *)0x0,param_2);
  return EVar2;
}

