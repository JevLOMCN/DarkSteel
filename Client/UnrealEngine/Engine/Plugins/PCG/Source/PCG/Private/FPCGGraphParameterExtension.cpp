// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 44

// GetGraphParameter<unsigned_char> @ 149d29ed0

TValueOrError<unsigned_char,EPropertyBagResult> __cdecl
FPCGGraphParameterExtension::GetGraphParameter<unsigned_char>
          (FInstancedPropertyBag *param_1,FName param_2)

{
  FInstancedPropertyBag::GetValueByte((FInstancedPropertyBag *)param_2,(FName)param_1);
  return (TValueOrError<unsigned_char,EPropertyBagResult>)SUB82(param_1,0);
}

// GetGraphParameter<int> @ 149d29f00

TValueOrError<int,EPropertyBagResult> __cdecl
FPCGGraphParameterExtension::GetGraphParameter<int>(FInstancedPropertyBag *param_1,FName param_2)

{
  FInstancedPropertyBag::GetValueInt32((FInstancedPropertyBag *)param_2,(FName)param_1);
  return (TValueOrError<int,EPropertyBagResult>)
         (TVariant<int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,EPropertyBagResult>::FEmptyType>
          )param_1;
}

// GetGraphParameter<float> @ 149d29f30

TValueOrError<float,EPropertyBagResult> __cdecl
FPCGGraphParameterExtension::GetGraphParameter<float>(FInstancedPropertyBag *param_1,FName param_2)

{
  FInstancedPropertyBag::GetValueFloat((FInstancedPropertyBag *)param_2,(FName)param_1);
  return (TValueOrError<float,EPropertyBagResult>)
         (TVariant<float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,EPropertyBagResult>::FEmptyType>
          )param_1;
}

// GetGraphParameter<double> @ 149d29f60

TValueOrError<double,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<double>
          (TValueOrError<double,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  FInstancedPropertyBag::GetValueDouble(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetGraphParameter<UE::Math::TQuat<double>_*> @ 149d29f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::Math::TQuat<double>_*,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<UE::Math::TQuat<double>_*>
          (TValueOrError<UE::Math::TQuat<double>_*,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  TValueOrError<UE::Math::TQuat<double>_*,EPropertyBagResult> *pTVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pUVar4 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
  FInstancedPropertyBag::GetValueStruct(param_1,&local_28,param_2,pUVar4);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TValueOrError<UE::Math::TQuat<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7 + 4) == '\0') {
    if ((local_28.Variant.TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<UE::Math::TQuat<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ =
         (undefined1)local_28.Variant._padding_;
  }
  else {
    if ((local_28.Variant.TypeIndex != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<UE::Math::TQuat<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    pUVar4 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar4 != (UScriptStruct *)0x0)) {
      pUVar6 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
      if (pUVar4 == pUVar6) {
LAB_149d2a0c1:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_149d2a0c1;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetGraphParameter<UE::Math::TRotator<double>_*> @ 149d2a2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::Math::TRotator<double>_*,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<UE::Math::TRotator<double>_*>
          (TValueOrError<UE::Math::TRotator<double>_*,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  TValueOrError<UE::Math::TRotator<double>_*,EPropertyBagResult> *pTVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pUVar4 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
  FInstancedPropertyBag::GetValueStruct(param_1,&local_28,param_2,pUVar4);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TValueOrError<UE::Math::TRotator<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7 + 4) == '\0') {
    if ((local_28.Variant.TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<UE::Math::TRotator<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ =
         (undefined1)local_28.Variant._padding_;
  }
  else {
    if ((local_28.Variant.TypeIndex != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<UE::Math::TRotator<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    pUVar4 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar4 != (UScriptStruct *)0x0)) {
      pUVar6 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
      if (pUVar4 == pUVar6) {
LAB_149d2a3d1:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_149d2a3d1;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetGraphParameter<UE::Math::TTransform<double>_*> @ 149d2a5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::Math::TTransform<double>_*,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<UE::Math::TTransform<double>_*>
          (TValueOrError<UE::Math::TTransform<double>_*,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  TValueOrError<UE::Math::TTransform<double>_*,EPropertyBagResult> *pTVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pUVar4 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
  FInstancedPropertyBag::GetValueStruct(param_1,&local_28,param_2,pUVar4);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TValueOrError<UE::Math::TTransform<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7 + 4) == '\0') {
    if ((local_28.Variant.TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<UE::Math::TTransform<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ =
         (undefined1)local_28.Variant._padding_;
  }
  else {
    if ((local_28.Variant.TypeIndex != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<UE::Math::TTransform<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    pUVar4 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar4 != (UScriptStruct *)0x0)) {
      pUVar6 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
      if (pUVar4 == pUVar6) {
LAB_149d2a6e1:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_149d2a6e1;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetGraphParameter<UE::Math::TVector2<double>_*> @ 149d2a8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::Math::TVector2<double>_*,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<UE::Math::TVector2<double>_*>
          (TValueOrError<UE::Math::TVector2<double>_*,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  TValueOrError<UE::Math::TVector2<double>_*,EPropertyBagResult> *pTVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pUVar4 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
  FInstancedPropertyBag::GetValueStruct(param_1,&local_28,param_2,pUVar4);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TValueOrError<UE::Math::TVector2<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7 + 4) == '\0') {
    if ((local_28.Variant.TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<UE::Math::TVector2<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ =
         (undefined1)local_28.Variant._padding_;
  }
  else {
    if ((local_28.Variant.TypeIndex != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<UE::Math::TVector2<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    pUVar4 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar4 != (UScriptStruct *)0x0)) {
      pUVar6 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
      if (pUVar4 == pUVar6) {
LAB_149d2a9f1:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_149d2a9f1;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetGraphParameter<UE::Math::TVector4<double>_*> @ 149d2abd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::Math::TVector4<double>_*,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<UE::Math::TVector4<double>_*>
          (TValueOrError<UE::Math::TVector4<double>_*,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  TValueOrError<UE::Math::TVector4<double>_*,EPropertyBagResult> *pTVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pUVar4 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
  FInstancedPropertyBag::GetValueStruct(param_1,&local_28,param_2,pUVar4);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TValueOrError<UE::Math::TVector4<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7 + 4) == '\0') {
    if ((local_28.Variant.TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<UE::Math::TVector4<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ =
         (undefined1)local_28.Variant._padding_;
  }
  else {
    if ((local_28.Variant.TypeIndex != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<UE::Math::TVector4<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    pUVar4 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar4 != (UScriptStruct *)0x0)) {
      pUVar6 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
      if (pUVar4 == pUVar6) {
LAB_149d2ad01:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_149d2ad01;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetGraphParameter<UE::Math::TVector<double>_*> @ 149d2aee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::Math::TVector<double>_*,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<UE::Math::TVector<double>_*>
          (TValueOrError<UE::Math::TVector<double>_*,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  TValueOrError<UE::Math::TVector<double>_*,EPropertyBagResult> *pTVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pUVar4 = TBaseStructure<UE::Math::TVector<double>_>::Get();
  FInstancedPropertyBag::GetValueStruct(param_1,&local_28,param_2,pUVar4);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TValueOrError<UE::Math::TVector<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7 + 4) == '\0') {
    if ((local_28.Variant.TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<UE::Math::TVector<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ =
         (undefined1)local_28.Variant._padding_;
  }
  else {
    if ((local_28.Variant.TypeIndex != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<UE::Math::TVector<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    pUVar4 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar4 != (UScriptStruct *)0x0)) {
      pUVar6 = TBaseStructure<UE::Math::TVector<double>_>::Get();
      if (pUVar4 == pUVar6) {
LAB_149d2b011:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = TBaseStructure<UE::Math::TVector<double>_>::Get();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_149d2b011;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetGraphParameter<FSoftClassPath_*> @ 149d2b1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FSoftClassPath_*,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<FSoftClassPath_*>
          (TValueOrError<FSoftClassPath_*,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  TValueOrError<FSoftClassPath_*,EPropertyBagResult> *pTVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pUVar4 = FSoftClassPath::StaticStruct();
  FInstancedPropertyBag::GetValueStruct(param_1,&local_28,param_2,pUVar4);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TValueOrError<FSoftClassPath_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7 + 4) == '\0') {
    if ((local_28.Variant.TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<FSoftClassPath_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ =
         (undefined1)local_28.Variant._padding_;
  }
  else {
    if ((local_28.Variant.TypeIndex != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<FSoftClassPath_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    pUVar4 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar4 != (UScriptStruct *)0x0)) {
      pUVar6 = FSoftClassPath::StaticStruct();
      if (pUVar4 == pUVar6) {
LAB_149d2b321:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = FSoftClassPath::StaticStruct();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_149d2b321;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetGraphParameter<FSoftObjectPath_*> @ 149d2b360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FSoftObjectPath_*,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<FSoftObjectPath_*>
          (TValueOrError<FSoftObjectPath_*,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  TValueOrError<FSoftObjectPath_*,EPropertyBagResult> *pTVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pUVar4 = FSoftObjectPath::StaticStruct();
  FInstancedPropertyBag::GetValueStruct(param_1,&local_28,param_2,pUVar4);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TValueOrError<FSoftObjectPath_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7 + 4) == '\0') {
    if ((local_28.Variant.TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<FSoftObjectPath_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ =
         (undefined1)local_28.Variant._padding_;
  }
  else {
    if ((local_28.Variant.TypeIndex != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<FSoftObjectPath_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    pUVar4 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar4 != (UScriptStruct *)0x0)) {
      pUVar6 = FSoftObjectPath::StaticStruct();
      if (pUVar4 == pUVar6) {
LAB_149d2b491:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = FSoftObjectPath::StaticStruct();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_149d2b491;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetGraphParameter<UClass_*> @ 149d2b4d0

TValueOrError<UClass_*,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<UClass_*>
          (TValueOrError<UClass_*,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  FInstancedPropertyBag::GetValueClass(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetGraphParameter<UObject_*> @ 149d2b500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UObject_*,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<UObject_*>
          (TValueOrError<UObject_*,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  TValueOrError<UObject_*,EPropertyBagResult> *pTVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  TValueOrError<UObject_*,EPropertyBagResult> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  pUVar3 = Z_Construct_UClass_UObject_NoRegister();
  FInstancedPropertyBag::GetValueObject(param_1,&local_28,param_2,pUVar3);
  uVar5 = (ulonglong)local_28.Variant.TypeIndex;
  if ((2 < uVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TValueOrError<UObject_*,EPropertyBagResult> *)(*pcVar1)();
    return pTVar4;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    if ((local_28.Variant.TypeIndex != 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TValueOrError<UObject_*,EPropertyBagResult> *)(*pcVar1)();
      return pTVar4;
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ =
         (undefined1)local_28.Variant._padding_;
  }
  else {
    if ((local_28.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TValueOrError<UObject_*,EPropertyBagResult> *)(*pcVar1)();
      return pTVar4;
    }
    if (CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_) == 0) {
      (__return_storage_ptr__->Variant)._padding_ = 0;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
    if ((local_28.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TValueOrError<UObject_*,EPropertyBagResult> *)(*pcVar1)();
      return pTVar4;
    }
    if (CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_) != 0) {
      (__return_storage_ptr__->Variant)._padding_ =
           CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetGraphParameter<TSoftObjectPtr<UObject>_> @ 149d2b670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<TSoftObjectPtr<UObject>,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<TSoftObjectPtr<UObject>_>
          (TValueOrError<TSoftObjectPtr<UObject>,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  TValueOrError<TSoftObjectPtr<UObject>,EPropertyBagResult> *pTVar7;
  FSoftObjectPath *pFVar8;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  FSoftObjectPath local_90;
  FSoftObjectPath local_70;
  TValueOrError<FSoftObjectPath,EPropertyBagResult> local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FInstancedPropertyBag::GetValueSoftPath(param_1,&local_50,param_2);
  uVar9 = (ulonglong)local_50.Variant.TypeIndex;
  if (2 < uVar9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TValueOrError<TSoftObjectPtr<UObject>,EPropertyBagResult> *)(*pcVar2)();
      return pTVar7;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,unsigned_char,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar9 + 4) == '\0') {
    if (local_50.Variant.TypeIndex != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TValueOrError<TSoftObjectPtr<UObject>,EPropertyBagResult> *)(*pcVar2)();
        return pTVar7;
      }
    }
    pFVar8 = FSoftObjectPath::FSoftObjectPath(&local_70,(FSoftObjectPath *)&local_50);
    local_98 = 0;
    FSoftObjectPath::FSoftObjectPath(&local_90,pFVar8);
    pFVar1 = (pFVar8->SubPathString).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    FVar3.Data = local_90.SubPathString.Data.AllocatorInstance.Data;
    iVar4 = local_90.SubPathString.Data.ArrayNum;
    iVar5 = local_90.SubPathString.Data.ArrayMax;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
    (__return_storage_ptr__->Variant)._padding_ = local_98;
    local_90.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.SubPathString.Data.ArrayNum = 0;
    local_90.SubPathString.Data.ArrayMax = 0;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_90.AssetPath.PackageName;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_90.AssetPath.AssetName;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)FVar3.Data;
    *(int *)&(__return_storage_ptr__->Variant)._padding_ = iVar4;
    *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = iVar5;
    if (2 < local_50.Variant.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TValueOrError<TSoftObjectPtr<UObject>,EPropertyBagResult> *)(*pcVar2)();
        return pTVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSoftObjectPath,TValueOrError<FSoftObjectPath,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FSoftObjectPath,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.Variant.TypeIndex])(&local_50);
  }
  else {
    if (local_50.Variant.TypeIndex != 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TValueOrError<TSoftObjectPtr<UObject>,EPropertyBagResult> *)(*pcVar2)();
        return pTVar7;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ =
         (undefined1)local_50.Variant._padding_;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (2 < local_50.Variant.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TValueOrError<TSoftObjectPtr<UObject>,EPropertyBagResult> *)(*pcVar2)();
        return pTVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSoftObjectPath,TValueOrError<FSoftObjectPath,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FSoftObjectPath,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.Variant.TypeIndex])(&local_50);
  }
  return __return_storage_ptr__;
}

// GetGraphParameter<FSoftClassPath> @ 149d2b880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FSoftClassPath,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<FSoftClassPath>
          (TValueOrError<FSoftClassPath,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TValueOrError<FSoftClassPath,EPropertyBagResult> *pTVar4;
  FString *pFVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  FString local_48;
  TValueOrError<FSoftObjectPath,EPropertyBagResult> local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  FInstancedPropertyBag::GetValueSoftPath(param_1,&local_38,param_2);
  uVar6 = (ulonglong)local_38.Variant.TypeIndex;
  if (2 < uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TValueOrError<FSoftClassPath,EPropertyBagResult> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,unsigned_char,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar6 + 4) == '\0') {
    if (local_38.Variant.TypeIndex != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TValueOrError<FSoftClassPath,EPropertyBagResult> *)(*pcVar2)();
        return pTVar4;
      }
    }
    pFVar5 = FSoftObjectPath::ToString((FSoftObjectPath *)&local_38,&local_48);
    (__return_storage_ptr__->Variant)._padding_ = 0;
    (__return_storage_ptr__->Variant)._padding_ = 0;
    (__return_storage_ptr__->Variant)._padding_ = 0;
    (__return_storage_ptr__->Variant)._padding_ = 0;
    local_68 = (pFVar5->Data).AllocatorInstance.Data;
    iVar1 = (pFVar5->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_58._12_4_ = uStack_5c;
    local_58.Size = iStack_60;
    local_58.DataPtr = (wchar_t *)local_68;
    FSoftObjectPath::SetPath((FSoftObjectPath *)__return_storage_ptr__,&local_58);
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (2 < local_38.Variant.TypeIndex) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TValueOrError<FSoftClassPath,EPropertyBagResult> *)(*pcVar2)();
        return pTVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSoftObjectPath,TValueOrError<FSoftObjectPath,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FSoftObjectPath,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
  }
  else {
    if (local_38.Variant.TypeIndex != 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TValueOrError<FSoftClassPath,EPropertyBagResult> *)(*pcVar2)();
        return pTVar4;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ =
         (undefined1)local_38.Variant._padding_;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (2 < local_38.Variant.TypeIndex) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TValueOrError<FSoftClassPath,EPropertyBagResult> *)(*pcVar2)();
        return pTVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSoftObjectPath,TValueOrError<FSoftObjectPath,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FSoftObjectPath,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
  }
  return __return_storage_ptr__;
}

// GetGraphParameter<FSoftObjectPath> @ 149d2ba70

TValueOrError<FSoftObjectPath,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<FSoftObjectPath>
          (TValueOrError<FSoftObjectPath,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  FInstancedPropertyBag::GetValueSoftPath(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetGraphParameter<TSoftClassPtr<UObject>_> @ 149d2baa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<TSoftClassPtr<UObject>,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<TSoftClassPtr<UObject>_>
          (TValueOrError<TSoftClassPtr<UObject>,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  TValueOrError<TSoftClassPtr<UObject>,EPropertyBagResult> *pTVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  FSoftObjectPath local_60;
  TValueOrError<FSoftObjectPath,EPropertyBagResult> local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  FInstancedPropertyBag::GetValueSoftPath(param_1,&local_40,param_2);
  uVar6 = (ulonglong)local_40.Variant.TypeIndex;
  if (2 < uVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TValueOrError<TSoftClassPtr<UObject>,EPropertyBagResult> *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,unsigned_char,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar6 + 4) == '\0') {
    if (local_40.Variant.TypeIndex != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TValueOrError<TSoftClassPtr<UObject>,EPropertyBagResult> *)(*pcVar1)();
        return pTVar5;
      }
    }
    local_68 = 0;
    FSoftObjectPath::FSoftObjectPath(&local_60,(FSoftObjectPath *)&local_40);
    iVar2 = local_60.SubPathString.Data.ArrayNum;
    iVar3 = local_60.SubPathString.Data.ArrayMax;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
    (__return_storage_ptr__->Variant)._padding_ = local_68;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_60.AssetPath.PackageName;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_60.AssetPath.AssetName;
    (__return_storage_ptr__->Variant)._padding_ =
         (longlong)local_60.SubPathString.Data.AllocatorInstance.Data;
    local_60.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.SubPathString.Data.ArrayNum = 0;
    local_60.SubPathString.Data.ArrayMax = 0;
    *(int *)&(__return_storage_ptr__->Variant)._padding_ = iVar2;
    *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = iVar3;
    if (2 < local_40.Variant.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TValueOrError<TSoftClassPtr<UObject>,EPropertyBagResult> *)(*pcVar1)();
        return pTVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSoftObjectPath,TValueOrError<FSoftObjectPath,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FSoftObjectPath,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Variant.TypeIndex])(&local_40);
  }
  else {
    if (local_40.Variant.TypeIndex != 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TValueOrError<TSoftClassPtr<UObject>,EPropertyBagResult> *)(*pcVar1)();
        return pTVar5;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ =
         (undefined1)local_40.Variant._padding_;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (2 < local_40.Variant.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TValueOrError<TSoftClassPtr<UObject>,EPropertyBagResult> *)(*pcVar1)();
        return pTVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSoftObjectPath,TValueOrError<FSoftObjectPath,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FSoftObjectPath,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Variant.TypeIndex])(&local_40);
  }
  return __return_storage_ptr__;
}

// GetGraphParameter<FName> @ 149d2bc80

TValueOrError<FName,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<FName>
          (TValueOrError<FName,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  FInstancedPropertyBag::GetValueName(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetGraphParameter<FString> @ 149d2bcb0

TValueOrError<FString,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<FString>
          (TValueOrError<FString,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  FInstancedPropertyBag::GetValueString(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetGraphParameter<__int64> @ 149d2bce0

TValueOrError<__int64,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter<__int64>
          (TValueOrError<__int64,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2)

{
  FInstancedPropertyBag::GetValueInt64(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetGraphParameter<bool> @ 149d2bd10

TValueOrError<bool,EPropertyBagResult> __cdecl
FPCGGraphParameterExtension::GetGraphParameter<bool>(FInstancedPropertyBag *param_1,FName param_2)

{
  FInstancedPropertyBag::GetValueBool((FInstancedPropertyBag *)param_2,(FName)param_1);
  return (TValueOrError<bool,EPropertyBagResult>)SUB82(param_1,0);
}

// SetGraphParameter<unsigned_char> @ 149d2f700

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<unsigned_char>
          (FInstancedPropertyBag *param_1,FName param_2,uchar *param_3)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueByte(param_1,param_2,*param_3);
  return EVar1;
}

// SetGraphParameter<int> @ 149d2f710

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<int>
          (FInstancedPropertyBag *param_1,FName param_2,int *param_3)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueInt32(param_1,param_2,*param_3);
  return EVar1;
}

// SetGraphParameter<float> @ 149d2f720

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<float>
          (FInstancedPropertyBag *param_1,FName param_2,float *param_3)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueFloat(param_1,param_2,*param_3);
  return EVar1;
}

// SetGraphParameter<double> @ 149d2f730

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<double>
          (FInstancedPropertyBag *param_1,FName param_2,double *param_3)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueDouble(param_1,param_2,*param_3);
  return EVar1;
}

// SetGraphParameter<UClass_*> @ 149d2f740

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<UClass_*>
          (FInstancedPropertyBag *param_1,FName param_2,UClass **param_3)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueClass(param_1,param_2,*param_3);
  return EVar1;
}

// SetGraphParameter<UObject_*> @ 149d2f750

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<UObject_*>
          (FInstancedPropertyBag *param_1,FName param_2,UObject **param_3)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueObject(param_1,param_2,*param_3);
  return EVar1;
}

// SetGraphParameter<UE::Math::TQuat<double>_> @ 149d2f760

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<UE::Math::TQuat<double>_>
          (FInstancedPropertyBag *param_1,FName param_2,TQuat<double> *param_3)

{
  EPropertyBagResult EVar1;
  FConstStructView local_18;
  
  local_18.ScriptStruct = TBaseStructure<UE::Math::TQuat<double>_>::Get();
  local_18.StructMemory = (uchar *)param_3;
  EVar1 = FInstancedPropertyBag::SetValueStruct(param_1,param_2,&local_18);
  return EVar1;
}

// SetGraphParameter<UE::Math::TRotator<double>_> @ 149d2f7b0

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<UE::Math::TRotator<double>_>
          (FInstancedPropertyBag *param_1,FName param_2,TRotator<double> *param_3)

{
  EPropertyBagResult EVar1;
  FConstStructView local_18;
  
  local_18.ScriptStruct = TBaseStructure<UE::Math::TRotator<double>_>::Get();
  local_18.StructMemory = (uchar *)param_3;
  EVar1 = FInstancedPropertyBag::SetValueStruct(param_1,param_2,&local_18);
  return EVar1;
}

// SetGraphParameter<TSoftObjectPtr<UObject>_> @ 149d2f800

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<TSoftObjectPtr<UObject>_>
          (FInstancedPropertyBag *param_1,FName param_2,TSoftObjectPtr<UObject> *param_3)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueSoftPath
                    (param_1,param_2,(FSoftObjectPath *)&(param_3->SoftObjectPtr).field_0x8);
  return EVar1;
}

// SetGraphParameter<UE::Math::TTransform<double>_> @ 149d2f810

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<UE::Math::TTransform<double>_>
          (FInstancedPropertyBag *param_1,FName param_2,TTransform<double> *param_3)

{
  EPropertyBagResult EVar1;
  FConstStructView local_18;
  
  local_18.ScriptStruct = TBaseStructure<UE::Math::TTransform<double>_>::Get();
  local_18.StructMemory = (uchar *)param_3;
  EVar1 = FInstancedPropertyBag::SetValueStruct(param_1,param_2,&local_18);
  return EVar1;
}

// SetGraphParameter<UE::Math::TVector2<double>_> @ 149d2f860

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<UE::Math::TVector2<double>_>
          (FInstancedPropertyBag *param_1,FName param_2,TVector2<double> *param_3)

{
  EPropertyBagResult EVar1;
  FConstStructView local_18;
  
  local_18.ScriptStruct = TBaseStructure<UE::Math::TVector2<double>_>::Get();
  local_18.StructMemory = (uchar *)param_3;
  EVar1 = FInstancedPropertyBag::SetValueStruct(param_1,param_2,&local_18);
  return EVar1;
}

// SetGraphParameter<UE::Math::TVector4<double>_> @ 149d2f8b0

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<UE::Math::TVector4<double>_>
          (FInstancedPropertyBag *param_1,FName param_2,TVector4<double> *param_3)

{
  EPropertyBagResult EVar1;
  FConstStructView local_18;
  
  local_18.ScriptStruct = TBaseStructure<UE::Math::TVector4<double>_>::Get();
  local_18.StructMemory = (uchar *)param_3;
  EVar1 = FInstancedPropertyBag::SetValueStruct(param_1,param_2,&local_18);
  return EVar1;
}

// SetGraphParameter<UE::Math::TVector<double>_> @ 149d2f900

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<UE::Math::TVector<double>_>
          (FInstancedPropertyBag *param_1,FName param_2,TVector<double> *param_3)

{
  EPropertyBagResult EVar1;
  FConstStructView local_18;
  
  local_18.ScriptStruct = TBaseStructure<UE::Math::TVector<double>_>::Get();
  local_18.StructMemory = (uchar *)param_3;
  EVar1 = FInstancedPropertyBag::SetValueStruct(param_1,param_2,&local_18);
  return EVar1;
}

// SetGraphParameter<FSoftClassPath> @ 149d2f950

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<FSoftClassPath>
          (FInstancedPropertyBag *param_1,FName param_2,FSoftClassPath *param_3)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  
  pFVar2 = FInstancedPropertyBag::FindPropertyDescByName(param_1,param_2);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (param_1->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((param_1->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::SetPropertyValueAsSoftPath
                    (pFVar2,puVar3,(FSoftObjectPath *)param_3,(UObject *)0x0);
  return EVar1;
}

// SetGraphParameter<FSoftObjectPath> @ 149d2f960

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<FSoftObjectPath>
          (FInstancedPropertyBag *param_1,FName param_2,FSoftObjectPath *param_3)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  
  pFVar2 = FInstancedPropertyBag::FindPropertyDescByName(param_1,param_2);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (param_1->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((param_1->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::SetPropertyValueAsSoftPath(pFVar2,puVar3,param_3,(UObject *)0x0)
  ;
  return EVar1;
}

// SetGraphParameter<TSoftClassPtr<UObject>_> @ 149d2f970

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<TSoftClassPtr<UObject>_>
          (FInstancedPropertyBag *param_1,FName param_2,TSoftClassPtr<UObject> *param_3)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueSoftPath
                    (param_1,param_2,(FSoftObjectPath *)&(param_3->SoftObjectPtr).field_0x8);
  return EVar1;
}

// SetGraphParameter<FName> @ 149d2f980

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<FName>
          (FInstancedPropertyBag *param_1,FName param_2,FName *param_3)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueName(param_1,param_2,*param_3);
  return EVar1;
}

// SetGraphParameter<FString> @ 149d2f990

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<FString>
          (FInstancedPropertyBag *param_1,FName param_2,FString *param_3)

{
  uchar *puVar1;
  FPropertyBagPropertyDesc *pFVar2;
  FString *this;
  
  pFVar2 = FInstancedPropertyBag::FindPropertyDescByName(param_1,param_2);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar1 = (param_1->Value).StructMemory, puVar1 == (uchar *)0x0)) ||
     ((param_1->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    this = (FString *)0x0;
    if (pFVar2 == (FPropertyBagPropertyDesc *)0x0) {
      return PropertyNotFound;
    }
  }
  else {
    this = (FString *)(puVar1 + pFVar2->CachedProperty->Offset_Internal);
  }
  if (pFVar2->CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  if (this == (FString *)0x0) {
    return OutOfBounds;
  }
  if (((pFVar2->ContainerTypes).NumContainers == '\0') &&
     ((*(uint *)(pFVar2->CachedProperty->_padding_ + 0x18) >> 0xe & 1) != 0)) {
    ::FString::operator=(this,param_3);
    return Success;
  }
  return TypeMismatch;
}

// SetGraphParameter<__int64> @ 149d2f9a0

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<__int64>
          (FInstancedPropertyBag *param_1,FName param_2,long64 *param_3)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueInt64(param_1,param_2,*param_3);
  return EVar1;
}

// SetGraphParameter<bool> @ 149d2f9b0

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter<bool>
          (FInstancedPropertyBag *param_1,FName param_2,bool *param_3)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueBool(param_1,param_2,*param_3);
  return EVar1;
}

// GetGraphParameter @ 149d50180

TValueOrError<unsigned___int64,EPropertyBagResult> * __cdecl
FPCGGraphParameterExtension::GetGraphParameter
          (TValueOrError<unsigned___int64,EPropertyBagResult> *__return_storage_ptr__,
          FInstancedPropertyBag *param_1,FName param_2,UEnum *param_3)

{
  code *pcVar1;
  bool bVar2;
  TValueOrError<unsigned_char,EPropertyBagResult> TVar3;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  TValueOrError<unsigned___int64,EPropertyBagResult> *pTVar5;
  ulonglong uVar6;
  byte local_res20;
  byte local_res21;
  undefined1 local_18 [2];
  undefined1 local_16 [14];
  longlong lVar4;
  
  if (param_3 == (UEnum *)0x0) {
    TVar3 = FInstancedPropertyBag::GetValueByte(param_1,(FName)local_16);
    lVar4 = CONCAT62(extraout_var_00,TVar3.Variant);
  }
  else {
    TVar3 = FInstancedPropertyBag::GetValueEnum(param_1,(FName)local_18,(UEnum *)param_2);
    lVar4 = CONCAT62(extraout_var,TVar3.Variant);
  }
  local_res21 = *(byte *)(lVar4 + 1);
  uVar6 = (ulonglong)local_res21;
  if ((2 < local_res21) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TValueOrError<unsigned___int64,EPropertyBagResult> *)(*pcVar1)();
    return pTVar5;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<unsigned_char,TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[uVar6])(&local_res20,lVar4);
  uVar6 = (ulonglong)local_res21;
  if ((2 < local_res21) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TValueOrError<unsigned___int64,EPropertyBagResult> *)(*pcVar1)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,unsigned_char,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar6) == '\0') {
    if ((local_res21 != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TValueOrError<unsigned___int64,EPropertyBagResult> *)(*pcVar1)();
      return pTVar5;
    }
    (__return_storage_ptr__->Variant)._padding_ = (ulonglong)local_res20;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
  }
  else {
    if ((local_res21 != 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TValueOrError<unsigned___int64,EPropertyBagResult> *)(*pcVar1)();
      return pTVar5;
    }
    *(byte *)&(__return_storage_ptr__->Variant)._padding_ = local_res20;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  }
  return __return_storage_ptr__;
}

// SetGraphParameter @ 149d63550

EPropertyBagResult __cdecl
FPCGGraphParameterExtension::SetGraphParameter
          (FInstancedPropertyBag *param_1,FName param_2,ulong64 *param_3,UEnum *param_4)

{
  ulong64 uVar1;
  EPropertyBagResult EVar2;
  FPropertyBagPropertyDesc *pFVar3;
  uchar *puVar4;
  
  uVar1 = *param_3;
  if (param_4 == (UEnum *)0x0) {
    EVar2 = FInstancedPropertyBag::SetValueByte(param_1,param_2,(uchar)uVar1);
    return EVar2;
  }
  pFVar3 = FInstancedPropertyBag::FindPropertyDescByName(param_1,param_2);
  if (((pFVar3 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar4 = (param_1->Value).StructMemory, puVar4 == (uchar *)0x0)) ||
     ((param_1->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar4 = (uchar *)0x0;
  }
  else {
    puVar4 = puVar4 + pFVar3->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::SetPropertyValueAsEnum(pFVar3,puVar4,(uchar)uVar1,param_4);
  return EVar2;
}

