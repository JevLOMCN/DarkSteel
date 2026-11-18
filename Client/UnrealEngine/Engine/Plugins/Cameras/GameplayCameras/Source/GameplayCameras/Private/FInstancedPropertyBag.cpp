// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// GetValueStruct<FFloatCameraParameter> @ 14d650790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FFloatCameraParameter_*,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueStruct<FFloatCameraParameter>
          (FInstancedPropertyBag *this,
          TValueOrError<FFloatCameraParameter_*,EPropertyBagResult> *__return_storage_ptr__,
          FName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  TValueOrError<FFloatCameraParameter_*,EPropertyBagResult> *pTVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pUVar4 = FFloatCameraParameter::StaticStruct();
  GetValueStruct(this,&local_28,param_1,pUVar4);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TValueOrError<FFloatCameraParameter_*,EPropertyBagResult> *)(*pcVar2)();
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
      pTVar5 = (TValueOrError<FFloatCameraParameter_*,EPropertyBagResult> *)(*pcVar2)();
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
      pTVar5 = (TValueOrError<FFloatCameraParameter_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    pUVar4 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar4 != (UScriptStruct *)0x0)) {
      pUVar6 = FFloatCameraParameter::StaticStruct();
      if (pUVar4 == pUVar6) {
LAB_14d6508c1:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = FFloatCameraParameter::StaticStruct();
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
        if (bVar3) goto LAB_14d6508c1;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueStruct<FVector3dCameraParameter> @ 14d650900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FVector3dCameraParameter_*,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueStruct<FVector3dCameraParameter>
          (FInstancedPropertyBag *this,
          TValueOrError<FVector3dCameraParameter_*,EPropertyBagResult> *__return_storage_ptr__,
          FName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  TValueOrError<FVector3dCameraParameter_*,EPropertyBagResult> *pTVar5;
  UScriptStruct *pUVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pUVar4 = FVector3dCameraParameter::StaticStruct();
  GetValueStruct(this,&local_28,param_1,pUVar4);
  uVar7 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TValueOrError<FVector3dCameraParameter_*,EPropertyBagResult> *)(*pcVar2)();
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
      pTVar5 = (TValueOrError<FVector3dCameraParameter_*,EPropertyBagResult> *)(*pcVar2)();
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
      pTVar5 = (TValueOrError<FVector3dCameraParameter_*,EPropertyBagResult> *)(*pcVar2)();
      return pTVar5;
    }
    pUVar4 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if ((local_28.Variant._padding_ != 0) && (pUVar4 != (UScriptStruct *)0x0)) {
      pUVar6 = FVector3dCameraParameter::StaticStruct();
      if (pUVar4 == pUVar6) {
LAB_14d650a31:
        (__return_storage_ptr__->Variant)._padding_ = local_28.Variant._padding_;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      pUVar6 = FVector3dCameraParameter::StaticStruct();
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
        if (bVar3) goto LAB_14d650a31;
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

