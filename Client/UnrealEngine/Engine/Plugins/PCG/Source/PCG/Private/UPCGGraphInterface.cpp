// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 27

// GetGraphParameter<UE::Math::TQuat<double>_*> @ 149d2a100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::Math::TQuat<double>_*,EPropertyBagResult> * __thiscall
UPCGGraphInterface::GetGraphParameter<UE::Math::TQuat<double>_*>
          (UPCGGraphInterface *this,
          TValueOrError<UE::Math::TQuat<double>_*,EPropertyBagResult> *__return_storage_ptr__,
          FName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FInstancedPropertyBag *this_00;
  TValueOrError<UE::Math::TQuat<double>_*,EPropertyBagResult> *pTVar4;
  UScriptStruct *pUVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  this_00 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)this + 0x2c0))();
  if ((this_00 == (FInstancedPropertyBag *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                         ,0xc3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TValueOrError<UE::Math::TQuat<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar4;
  }
  pUVar5 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
  FInstancedPropertyBag::GetValueStruct(this_00,&local_28,param_1,pUVar5);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TValueOrError<UE::Math::TQuat<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar4;
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
      pTVar4 = (TValueOrError<UE::Math::TQuat<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar4;
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
      pTVar4 = (TValueOrError<UE::Math::TQuat<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar4;
    }
    pUVar5 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar5 != (UScriptStruct *)0x0)) {
      pUVar6 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
      if (pUVar5 == pUVar6) {
LAB_149d2a265:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar5->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_149d2a265;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetGraphParameter<UE::Math::TRotator<double>_*> @ 149d2a410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::Math::TRotator<double>_*,EPropertyBagResult> * __thiscall
UPCGGraphInterface::GetGraphParameter<UE::Math::TRotator<double>_*>
          (UPCGGraphInterface *this,
          TValueOrError<UE::Math::TRotator<double>_*,EPropertyBagResult> *__return_storage_ptr__,
          FName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FInstancedPropertyBag *this_00;
  TValueOrError<UE::Math::TRotator<double>_*,EPropertyBagResult> *pTVar4;
  UScriptStruct *pUVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  this_00 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)this + 0x2c0))();
  if ((this_00 == (FInstancedPropertyBag *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                         ,0xc3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TValueOrError<UE::Math::TRotator<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar4;
  }
  pUVar5 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
  FInstancedPropertyBag::GetValueStruct(this_00,&local_28,param_1,pUVar5);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TValueOrError<UE::Math::TRotator<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar4;
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
      pTVar4 = (TValueOrError<UE::Math::TRotator<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar4;
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
      pTVar4 = (TValueOrError<UE::Math::TRotator<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar4;
    }
    pUVar5 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar5 != (UScriptStruct *)0x0)) {
      pUVar6 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
      if (pUVar5 == pUVar6) {
LAB_149d2a575:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar5->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_149d2a575;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetGraphParameter<UE::Math::TTransform<double>_*> @ 149d2a720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::Math::TTransform<double>_*,EPropertyBagResult> * __thiscall
UPCGGraphInterface::GetGraphParameter<UE::Math::TTransform<double>_*>
          (UPCGGraphInterface *this,
          TValueOrError<UE::Math::TTransform<double>_*,EPropertyBagResult> *__return_storage_ptr__,
          FName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FInstancedPropertyBag *this_00;
  TValueOrError<UE::Math::TTransform<double>_*,EPropertyBagResult> *pTVar4;
  UScriptStruct *pUVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  this_00 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)this + 0x2c0))();
  if ((this_00 == (FInstancedPropertyBag *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                         ,0xc3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TValueOrError<UE::Math::TTransform<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar4;
  }
  pUVar5 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
  FInstancedPropertyBag::GetValueStruct(this_00,&local_28,param_1,pUVar5);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TValueOrError<UE::Math::TTransform<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar4;
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
      pTVar4 = (TValueOrError<UE::Math::TTransform<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar4;
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
      pTVar4 = (TValueOrError<UE::Math::TTransform<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar4;
    }
    pUVar5 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar5 != (UScriptStruct *)0x0)) {
      pUVar6 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
      if (pUVar5 == pUVar6) {
LAB_149d2a885:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar5->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_149d2a885;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetGraphParameter<UE::Math::TVector2<double>_*> @ 149d2aa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::Math::TVector2<double>_*,EPropertyBagResult> * __thiscall
UPCGGraphInterface::GetGraphParameter<UE::Math::TVector2<double>_*>
          (UPCGGraphInterface *this,
          TValueOrError<UE::Math::TVector2<double>_*,EPropertyBagResult> *__return_storage_ptr__,
          FName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FInstancedPropertyBag *this_00;
  TValueOrError<UE::Math::TVector2<double>_*,EPropertyBagResult> *pTVar4;
  UScriptStruct *pUVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  this_00 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)this + 0x2c0))();
  if ((this_00 == (FInstancedPropertyBag *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                         ,0xc3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TValueOrError<UE::Math::TVector2<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar4;
  }
  pUVar5 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
  FInstancedPropertyBag::GetValueStruct(this_00,&local_28,param_1,pUVar5);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TValueOrError<UE::Math::TVector2<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar4;
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
      pTVar4 = (TValueOrError<UE::Math::TVector2<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar4;
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
      pTVar4 = (TValueOrError<UE::Math::TVector2<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar4;
    }
    pUVar5 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar5 != (UScriptStruct *)0x0)) {
      pUVar6 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
      if (pUVar5 == pUVar6) {
LAB_149d2ab95:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar5->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_149d2ab95;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetGraphParameter<UE::Math::TVector4<double>_*> @ 149d2ad40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::Math::TVector4<double>_*,EPropertyBagResult> * __thiscall
UPCGGraphInterface::GetGraphParameter<UE::Math::TVector4<double>_*>
          (UPCGGraphInterface *this,
          TValueOrError<UE::Math::TVector4<double>_*,EPropertyBagResult> *__return_storage_ptr__,
          FName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FInstancedPropertyBag *this_00;
  TValueOrError<UE::Math::TVector4<double>_*,EPropertyBagResult> *pTVar4;
  UScriptStruct *pUVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  this_00 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)this + 0x2c0))();
  if ((this_00 == (FInstancedPropertyBag *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                         ,0xc3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TValueOrError<UE::Math::TVector4<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar4;
  }
  pUVar5 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
  FInstancedPropertyBag::GetValueStruct(this_00,&local_28,param_1,pUVar5);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TValueOrError<UE::Math::TVector4<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar4;
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
      pTVar4 = (TValueOrError<UE::Math::TVector4<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar4;
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
      pTVar4 = (TValueOrError<UE::Math::TVector4<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar4;
    }
    pUVar5 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar5 != (UScriptStruct *)0x0)) {
      pUVar6 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
      if (pUVar5 == pUVar6) {
LAB_149d2aea5:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar5->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_149d2aea5;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetGraphParameter<UE::Math::TVector<double>_*> @ 149d2b050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::Math::TVector<double>_*,EPropertyBagResult> * __thiscall
UPCGGraphInterface::GetGraphParameter<UE::Math::TVector<double>_*>
          (UPCGGraphInterface *this,
          TValueOrError<UE::Math::TVector<double>_*,EPropertyBagResult> *__return_storage_ptr__,
          FName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FInstancedPropertyBag *this_00;
  TValueOrError<UE::Math::TVector<double>_*,EPropertyBagResult> *pTVar4;
  UScriptStruct *pUVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  this_00 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)this + 0x2c0))();
  if ((this_00 == (FInstancedPropertyBag *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                         ,0xc3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TValueOrError<UE::Math::TVector<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar4;
  }
  pUVar5 = TBaseStructure<UE::Math::TVector<double>_>::Get();
  FInstancedPropertyBag::GetValueStruct(this_00,&local_28,param_1,pUVar5);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TValueOrError<UE::Math::TVector<double>_*,EPropertyBagResult> *)(*pcVar2)();
    return pTVar4;
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
      pTVar4 = (TValueOrError<UE::Math::TVector<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar4;
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
      pTVar4 = (TValueOrError<UE::Math::TVector<double>_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar4;
    }
    pUVar5 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar5 != (UScriptStruct *)0x0)) {
      pUVar6 = TBaseStructure<UE::Math::TVector<double>_>::Get();
      if (pUVar5 == pUVar6) {
LAB_149d2b1b5:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = TBaseStructure<UE::Math::TVector<double>_>::Get();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar5->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_149d2b1b5;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// StaticClass @ 149ee0d30

UClass * __cdecl UPCGGraphInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphInterface",
               &Z_Registration_Info_UClass_UPCGGraphInterface.InnerSingleton,
               StaticRegisterNativesUPCGGraphInterface,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGraphInterface>,
               InternalVTableHelperCtorCaller<UPCGGraphInterface>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphInterface.InnerSingleton;
}

// UPCGGraphInterface @ 149eeeee0

UPCGGraphInterface * __thiscall
UPCGGraphInterface::UPCGGraphInterface(UPCGGraphInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPCGGraphInterface__6B_;
  return this;
}

// UPCGGraphInterface @ 149eeef10

UPCGGraphInterface * __thiscall
UPCGGraphInterface::UPCGGraphInterface(UPCGGraphInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPCGGraphInterface__6B_;
  return this;
}

// ~UPCGGraphInterface @ 149ef0010

void __thiscall UPCGGraphInterface::~UPCGGraphInterface(UPCGGraphInterface *this)

{
  *(undefined ***)this = &___7UPCGGraphInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetChangeTypeForGraphParameterChange @ 149eff060

EPCGChangeType __thiscall
UPCGGraphInterface::GetChangeTypeForGraphParameterChange
          (UPCGGraphInterface *this,EPCGGraphParameterEvent param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  EPCGChangeType EVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_1 < None) && ((0x102cU >> (param_1 & 0x1f) & 1) != 0)) {
    return Cosmetic;
  }
  if ((param_2 != (FName)0x0) && (param_1 != RemovedUsed)) {
    lVar4 = (**(code **)(*(longlong *)this + 0x2b8))();
    lVar5 = (**(code **)(*(longlong *)this + 0x2c0))(this);
    if ((lVar4 == 0) || (lVar5 == 0)) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8743732770959785594>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                         ,0x186,"Graph && UserParameters");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      return None;
    }
  }
  return Settings;
}

// GetGraph @ 149f00680

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall UPCGGraphInterface::GetGraph(UPCGGraphInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h",
             0x78,L"Pure virtual not implemented (%s)");
  return (UPCGGraph *)0x0;
}

// GetGraph @ 149f006b0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall UPCGGraphInterface::GetGraph(UPCGGraphInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h",
             0x79,L"Pure virtual not implemented (%s)");
  return (UPCGGraph *)0x0;
}

// GetMutableUserParametersStruct @ 149f02420

FInstancedPropertyBag * __thiscall
UPCGGraphInterface::GetMutableUserParametersStruct(UPCGGraphInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h",
             0x103,L"Pure virtual not implemented (%s)");
  return (FInstancedPropertyBag *)0x0;
}

// GetPrivateStaticClass @ 149f04790

UClass * __cdecl UPCGGraphInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphInterface",
               &Z_Registration_Info_UClass_UPCGGraphInterface.InnerSingleton,
               StaticRegisterNativesUPCGGraphInterface,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGraphInterface>,
               InternalVTableHelperCtorCaller<UPCGGraphInterface>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphInterface.InnerSingleton;
}

// GetUserParametersStruct @ 149f06690

FInstancedPropertyBag * __thiscall
UPCGGraphInterface::GetUserParametersStruct(UPCGGraphInterface *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h",
             0x7b,L"Pure virtual not implemented (%s)");
  return (FInstancedPropertyBag *)0x0;
}

// IsEquivalent @ 149f07b70

bool __thiscall
UPCGGraphInterface::IsEquivalent(UPCGGraphInterface *this,UPCGGraphInterface *param_1)

{
  FPropertyBagPropertyDesc *pFVar1;
  FPropertyBagPropertyDesc *this_00;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  FInstancedPropertyBag *this_01;
  FInstancedPropertyBag *this_02;
  UPropertyBag *pUVar14;
  UPropertyBag *pUVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  
  if (this != param_1) {
    if (param_1 == (UPCGGraphInterface *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1);
    }
    lVar13 = (**(code **)(*(longlong *)this + 0x2b0))(this);
    if (lVar13 != lVar12) {
      return false;
    }
    if ((lVar13 != 0) || (lVar12 != 0)) {
      this_01 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2c0))(param_1);
      this_02 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)this + 0x2c0))(this);
      if (((this_01 == (FInstancedPropertyBag *)0x0) || (this_02 == (FInstancedPropertyBag *)0x0))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("OtherParameters && ThisParameters",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                                ,0x117,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar9 = FInstancedPropertyBag::GetNumPropertiesInBag(this_02);
      iVar10 = FInstancedPropertyBag::GetNumPropertiesInBag(this_01);
      if (iVar9 != iVar10) {
        return false;
      }
      pUVar14 = FInstancedPropertyBag::GetPropertyBagStruct(this_01);
      pUVar15 = FInstancedPropertyBag::GetPropertyBagStruct(this_02);
      if ((pUVar15 == (UPropertyBag *)0x0) || (pUVar14 == (UPropertyBag *)0x0)) {
        return pUVar15 == pUVar14;
      }
      pFVar2 = (pUVar14->PropertyDescs).AllocatorInstance.Data;
      iVar9 = (pUVar14->PropertyDescs).ArrayNum;
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar10 = (pUVar15->PropertyDescs).ArrayNum;
      pFVar3 = (pUVar15->PropertyDescs).AllocatorInstance.Data;
      if ((iVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((iVar9 != iVar10) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("OtherParametersDescs.Num() == ThisParametersDescs.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                             ,0x12a,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar17 = 0;
      if (0 < iVar10) {
        pFVar16 = pFVar2 + 0x30;
        lVar12 = (longlong)pFVar3 - (longlong)pFVar2;
        do {
          uVar11 = 0;
          if ((int)uVar17 < iVar10) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          uVar11 = 0;
          if ((int)uVar17 < iVar9) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          this_00 = (FPropertyBagPropertyDesc *)(pFVar16 + lVar12 + -0x30);
          if (this_00 == (FPropertyBagPropertyDesc *)0x0) {
            return false;
          }
          pFVar1 = (FPropertyBagPropertyDesc *)(pFVar16 + -0x30);
          if (pFVar1 == (FPropertyBagPropertyDesc *)0x0) {
            return false;
          }
          bVar6 = FPropertyBagPropertyDesc::CompatibleType(this_00,pFVar1);
          if (!bVar6) {
            return false;
          }
          if ((this_02->Value).StructMemory == (uchar *)0x0) {
            return false;
          }
          if ((this_02->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
            return false;
          }
          if ((this_01->Value).StructMemory == (uchar *)0x0) {
            return false;
          }
          if ((this_01->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
            return false;
          }
          if (*(longlong *)(pFVar16 + lVar12) == 0) {
            return false;
          }
          if (*(longlong *)pFVar16 == 0) {
            return false;
          }
          bVar6 = FPropertyBagPropertyDesc::CompatibleType(this_00,pFVar1);
          if (!bVar6) {
            return false;
          }
          plVar4 = *(longlong **)(pFVar16 + lVar12);
          cVar8 = (**(code **)(*plVar4 + 0xb8))
                            (plVar4,(this_02->Value).StructMemory +
                                    *(int *)((longlong)plVar4 + 0x44),
                             (this_01->Value).StructMemory + *(int *)(*(longlong *)pFVar16 + 0x44),0
                            );
          if (cVar8 == '\0') {
            return false;
          }
          uVar17 = uVar17 + 1;
          pFVar16 = pFVar16 + 0x40;
        } while ((int)uVar17 < iVar10);
      }
    }
  }
  return true;
}

// IsGraphParameterOverridden @ 149f07f80

bool __thiscall
UPCGGraphInterface::IsGraphParameterOverridden(UPCGGraphInterface *this,FName param_1)

{
  return false;
}

// IsInstance @ 149f07fc0

bool __thiscall UPCGGraphInterface::IsInstance(UPCGGraphInterface *this)

{
  UPCGGraphInterface *pUVar1;
  
  pUVar1 = (UPCGGraphInterface *)(**(code **)(*(longlong *)this + 0x2b0))();
  return this != pUVar1;
}

// OnGraphParametersChanged @ 149f09b00

void __thiscall
UPCGGraphInterface::OnGraphParametersChanged
          (UPCGGraphInterface *this,EPCGGraphParameterEvent param_1,FName param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h",
             0x100,L"Pure virtual not implemented (%s)");
  return;
}

// SetGraphParameter @ 149f12050

EPropertyBagResult __thiscall
UPCGGraphInterface::SetGraphParameter
          (UPCGGraphInterface *this,FName param_1,ulong64 param_2,UEnum *param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *pFVar4;
  ulong64 local_res18;
  
  local_res18 = param_2;
  pFVar4 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)this + 0x2e0))();
  if (pFVar4 == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EVar3 = FPCGGraphParameterExtension::SetGraphParameter(pFVar4,param_1,&local_res18,param_3);
  if (EVar3 == Success) {
    (**(code **)(*(longlong *)this + 0x2d8))(this,8,param_1);
  }
  return EVar3;
}

// StaticRegisterNativesUPCGGraphInterface @ 149f140b0

void __cdecl UPCGGraphInterface::StaticRegisterNativesUPCGGraphInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UPCGGraphInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateArrayGraphParameter @ 149f14e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UPCGGraphInterface::UpdateArrayGraphParameter
          (UPCGGraphInterface *this,FName param_1,
          TFunctionRef<bool___cdecl(FPropertyBagArrayRef_&)> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  FInstancedPropertyBag *this_00;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)this + 0x2e0))();
  if ((this_00 == (FInstancedPropertyBag *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                         ,0xdc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FInstancedPropertyBag::GetMutableArrayRef(this_00,&local_88,param_1);
  uVar5 = (ulonglong)local_88.Variant.TypeIndex;
  if ((2 < uVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FPropertyBagArrayRef,EPropertyBagResult>::FWrapErrorType,FPropertyBagArrayRef,TValueOrError<class_FPropertyBagArrayRef,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FPropertyBagArrayRef,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    uVar5 = (ulonglong)local_88.Variant.TypeIndex;
    if ((2 < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FPropertyBagArrayRef,EPropertyBagResult>::FWrapErrorType,FPropertyBagArrayRef,TValueOrError<class_FPropertyBagArrayRef,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FPropertyBagArrayRef,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5 + 4) != '\0') {
      if ((local_88.Variant.TypeIndex != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_88);
      if (cVar4 != '\0') {
        (**(code **)(*(longlong *)this + 0x2d8))(this,8,param_1);
        return true;
      }
    }
  }
  return false;
}

// UpdateSetGraphParameter @ 149f152e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UPCGGraphInterface::UpdateSetGraphParameter
          (UPCGGraphInterface *this,FName param_1,
          TFunctionRef<bool___cdecl(FPropertyBagSetRef_&)> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  FInstancedPropertyBag *this_00;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  TValueOrError<FPropertyBagSetRef,EPropertyBagResult> local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this_00 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)this + 0x2e0))();
  if ((this_00 == (FInstancedPropertyBag *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                         ,0xee,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FInstancedPropertyBag::GetMutableSetRef(this_00,&local_98,param_1);
  uVar5 = (ulonglong)local_98.Variant.TypeIndex;
  if ((2 < uVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FPropertyBagSetRef,EPropertyBagResult>::FWrapErrorType,FPropertyBagSetRef,TValueOrError<class_FPropertyBagSetRef,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FPropertyBagSetRef,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    uVar5 = (ulonglong)local_98.Variant.TypeIndex;
    if ((2 < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FPropertyBagSetRef,EPropertyBagResult>::FWrapErrorType,FPropertyBagSetRef,TValueOrError<class_FPropertyBagSetRef,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FPropertyBagSetRef,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5 + 4) != '\0') {
      if ((local_98.Variant.TypeIndex != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_98);
      if (cVar4 != '\0') {
        (**(code **)(*(longlong *)this + 0x2d8))(this,8,param_1);
        return true;
      }
    }
  }
  return false;
}

// execGetConstPCGGraph @ 149f182a0

void __cdecl
UPCGGraphInterface::execGetConstPCGGraph(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetMutablePCGGraph @ 149f188d0

void __cdecl
UPCGGraphInterface::execGetMutablePCGGraph(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b8))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// SetGraphParameter<double> @ 14a016690

EPropertyBagResult __thiscall
UPCGGraphInterface::SetGraphParameter<double>
          (UPCGGraphInterface *this,FName param_1,double *param_2)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *pFVar4;
  
  pFVar4 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)this + 0x2e0))();
  if (pFVar4 == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EVar3 = FPCGGraphParameterExtension::SetGraphParameter<double>(pFVar4,param_1,param_2);
  if (EVar3 == Success) {
    (**(code **)(*(longlong *)this + 0x2d8))(this,8,param_1);
  }
  return EVar3;
}

