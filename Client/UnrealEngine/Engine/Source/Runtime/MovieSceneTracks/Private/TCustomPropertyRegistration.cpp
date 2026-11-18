// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 14

// Add @ 146633f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
::Add(TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
      *this,UClass *param_1,FName param_2,_func___cdecl_FIntermediateColor_UObject_ptr *param_3,
     _func___cdecl_void_UObject_ptr_FIntermediateColor_ptr *param_4)

{
  TArray<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>
  FVar8;
  undefined1 auStack_88 [32];
  UClass **local_68;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>
  local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  UClass *local_38;
  FName FStack_30;
  undefined2 local_28;
  undefined6 uStack_26;
  _func___cdecl_FIntermediateColor_UObject_ptr *p_Stack_20;
  _func___cdecl_void_UObject_ptr_FIntermediateColor_ptr *local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar1 = &this->CustomAccessors;
  FVar8 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  local_28 = 0xffff;
  if (FVar8 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>
                )0x0) {
    FVar8 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>
             )pTVar1;
  }
  local_18 = param_4;
  local_38 = param_1;
  FStack_30 = param_2;
  p_Stack_20 = param_3;
  if (((ulonglong)FVar8 <= &local_38) &&
     (lVar7 = (longlong)(this->CustomAccessors).ArrayMax,
     &local_38 < (UClass **)((longlong)FVar8 + lVar7 * 0x28))) {
    local_50 = (longlong)(this->CustomAccessors).ArrayNum;
    local_48 = 0x28;
    local_68 = &local_38;
    local_60 = FVar8;
    local_58 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->CustomAccessors).ArrayNum;
  piVar2 = &(this->CustomAccessors).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>_>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar7 = (longlong)iVar6;
  (this->CustomAccessors).ArrayNum = iVar6 + 1;
  FVar8 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>
                )0x0) {
    FVar8 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>
             )pTVar1;
  }
  puVar3 = (undefined8 *)((longlong)FVar8 + lVar7 * 0x28);
  *puVar3 = local_38;
  *(FName *)(puVar3 + 1) = FStack_30;
  *(ulonglong *)((uchar *)((longlong)FVar8 + 0x10) + lVar7 * 0x28) = CONCAT62(uStack_26,local_28);
  *(_func___cdecl_FIntermediateColor_UObject_ptr **)
   ((uchar *)((longlong)FVar8 + 0x10) + lVar7 * 0x28 + 8) = p_Stack_20;
  *(_func___cdecl_void_UObject_ptr_FIntermediateColor_ptr **)
   ((uchar *)((longlong)FVar8 + 0x20) + lVar7 * 0x28) = local_18;
  return;
}

// Add @ 1466340a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,8>::Add
          (TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,8>
           *this,UClass *param_1,FName param_2,_func___cdecl_uchar_UObject_ptr *param_3,
          _func___cdecl_void_UObject_ptr_uchar *param_4)

{
  TArray<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
  FVar8;
  undefined1 auStack_88 [32];
  UClass **local_68;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
  local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  UClass *local_38;
  FName FStack_30;
  undefined2 local_28;
  undefined6 uStack_26;
  _func___cdecl_uchar_UObject_ptr *p_Stack_20;
  _func___cdecl_void_UObject_ptr_uchar *local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar1 = &this->CustomAccessors;
  FVar8 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  local_28 = 0xffff;
  if (FVar8 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
                )0x0) {
    FVar8 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
             )pTVar1;
  }
  local_18 = param_4;
  local_38 = param_1;
  FStack_30 = param_2;
  p_Stack_20 = param_3;
  if (((ulonglong)FVar8 <= &local_38) &&
     (lVar7 = (longlong)(this->CustomAccessors).ArrayMax,
     &local_38 < (UClass **)((longlong)FVar8 + lVar7 * 0x28))) {
    local_50 = (longlong)(this->CustomAccessors).ArrayNum;
    local_48 = 0x28;
    local_68 = &local_38;
    local_60 = FVar8;
    local_58 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->CustomAccessors).ArrayNum;
  piVar2 = &(this->CustomAccessors).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>_>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar7 = (longlong)iVar6;
  (this->CustomAccessors).ArrayNum = iVar6 + 1;
  FVar8 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
                )0x0) {
    FVar8 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
             )pTVar1;
  }
  puVar3 = (undefined8 *)((longlong)FVar8 + lVar7 * 0x28);
  *puVar3 = local_38;
  *(FName *)(puVar3 + 1) = FStack_30;
  *(ulonglong *)((uchar *)((longlong)FVar8 + 0x10) + lVar7 * 0x28) = CONCAT62(uStack_26,local_28);
  *(_func___cdecl_uchar_UObject_ptr **)((uchar *)((longlong)FVar8 + 0x10) + lVar7 * 0x28 + 8) =
       p_Stack_20;
  *(_func___cdecl_void_UObject_ptr_uchar **)((uchar *)((longlong)FVar8 + 0x20) + lVar7 * 0x28) =
       local_18;
  return;
}

// Add @ 1466341d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
          (TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8> *this,UClass *param_1
          ,FName param_2,_func___cdecl_float_UObject_ptr *param_3,
          _func___cdecl_void_UObject_ptr_float *param_4)

{
  TArray<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
  FVar8;
  undefined1 auStack_88 [32];
  UClass **local_68;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
  local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  UClass *local_38;
  FName FStack_30;
  undefined2 local_28;
  undefined6 uStack_26;
  _func___cdecl_float_UObject_ptr *p_Stack_20;
  _func___cdecl_void_UObject_ptr_float *local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar1 = &this->CustomAccessors;
  FVar8 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  local_28 = 0xffff;
  if (FVar8 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
                )0x0) {
    FVar8 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
             )pTVar1;
  }
  local_18 = param_4;
  local_38 = param_1;
  FStack_30 = param_2;
  p_Stack_20 = param_3;
  if (((ulonglong)FVar8 <= &local_38) &&
     (lVar7 = (longlong)(this->CustomAccessors).ArrayMax,
     &local_38 < (UClass **)((longlong)FVar8 + lVar7 * 0x28))) {
    local_50 = (longlong)(this->CustomAccessors).ArrayNum;
    local_48 = 0x28;
    local_68 = &local_38;
    local_60 = FVar8;
    local_58 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->CustomAccessors).ArrayNum;
  piVar2 = &(this->CustomAccessors).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>_>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar7 = (longlong)iVar6;
  (this->CustomAccessors).ArrayNum = iVar6 + 1;
  FVar8 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
                )0x0) {
    FVar8 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
             )pTVar1;
  }
  puVar3 = (undefined8 *)((longlong)FVar8 + lVar7 * 0x28);
  *puVar3 = local_38;
  *(FName *)(puVar3 + 1) = FStack_30;
  *(ulonglong *)((uchar *)((longlong)FVar8 + 0x10) + lVar7 * 0x28) = CONCAT62(uStack_26,local_28);
  *(_func___cdecl_float_UObject_ptr **)((uchar *)((longlong)FVar8 + 0x10) + lVar7 * 0x28 + 8) =
       p_Stack_20;
  *(_func___cdecl_void_UObject_ptr_float **)((uchar *)((longlong)FVar8 + 0x20) + lVar7 * 0x28) =
       local_18;
  return;
}

// GetAccessors @ 146688760

FCustomAccessorView * __thiscall
UE::MovieScene::
TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,8>::
GetAccessors(TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,8>
             *this,FCustomAccessorView *__return_storage_ptr__)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>_>
  FVar1;
  
  FVar1 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->Stride = 0x28;
  if (FVar1 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>_>
                )0x0) {
    FVar1 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>_>
             )&this->CustomAccessors;
  }
  __return_storage_ptr__->Base = (uchar *)FVar1;
  __return_storage_ptr__->ViewNum = (this->CustomAccessors).ArrayNum;
  return __return_storage_ptr__;
}

// GetAccessors @ 146688790

FCustomAccessorView * __thiscall
UE::MovieScene::
TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,8>
::GetAccessors(TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,8>
               *this,FCustomAccessorView *__return_storage_ptr__)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>_>
  FVar1;
  
  FVar1 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->Stride = 0x28;
  if (FVar1 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>_>
                )0x0) {
    FVar1 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>_>
             )&this->CustomAccessors;
  }
  __return_storage_ptr__->Base = (uchar *)FVar1;
  __return_storage_ptr__->ViewNum = (this->CustomAccessors).ArrayNum;
  return __return_storage_ptr__;
}

// GetAccessors @ 1466887c0

FCustomAccessorView * __thiscall
UE::MovieScene::
TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,8>
::GetAccessors(TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,8>
               *this,FCustomAccessorView *__return_storage_ptr__)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>_>
  FVar1;
  
  FVar1 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->Stride = 0x28;
  if (FVar1 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>_>
                )0x0) {
    FVar1 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>_>
             )&this->CustomAccessors;
  }
  __return_storage_ptr__->Base = (uchar *)FVar1;
  __return_storage_ptr__->ViewNum = (this->CustomAccessors).ArrayNum;
  return __return_storage_ptr__;
}

// GetAccessors @ 1466887f0

FCustomAccessorView * __thiscall
UE::MovieScene::
TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,8>
::GetAccessors(TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,8>
               *this,FCustomAccessorView *__return_storage_ptr__)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>_>
  FVar1;
  
  FVar1 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->Stride = 0x28;
  if (FVar1 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>_>
                )0x0) {
    FVar1 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>_>
             )&this->CustomAccessors;
  }
  __return_storage_ptr__->Base = (uchar *)FVar1;
  __return_storage_ptr__->ViewNum = (this->CustomAccessors).ArrayNum;
  return __return_storage_ptr__;
}

// GetAccessors @ 146688820

FCustomAccessorView * __thiscall
UE::MovieScene::
TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
::GetAccessors(TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
               *this,FCustomAccessorView *__return_storage_ptr__)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>
  FVar1;
  
  FVar1 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->Stride = 0x28;
  if (FVar1 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>
                )0x0) {
    FVar1 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>
             )&this->CustomAccessors;
  }
  __return_storage_ptr__->Base = (uchar *)FVar1;
  __return_storage_ptr__->ViewNum = (this->CustomAccessors).ArrayNum;
  return __return_storage_ptr__;
}

// GetAccessors @ 146688850

FCustomAccessorView * __thiscall
UE::MovieScene::
TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,8>
::GetAccessors(TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,8>
               *this,FCustomAccessorView *__return_storage_ptr__)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>_>
  FVar1;
  
  FVar1 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->Stride = 0x28;
  if (FVar1 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>_>
                )0x0) {
    FVar1 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>_>
             )&this->CustomAccessors;
  }
  __return_storage_ptr__->Base = (uchar *)FVar1;
  __return_storage_ptr__->ViewNum = (this->CustomAccessors).ArrayNum;
  return __return_storage_ptr__;
}

// GetAccessors @ 146688880

FCustomAccessorView * __thiscall
UE::MovieScene::
TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,8>::
GetAccessors(TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,8>
             *this,FCustomAccessorView *__return_storage_ptr__)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
  FVar1;
  
  FVar1 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->Stride = 0x28;
  if (FVar1 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
                )0x0) {
    FVar1 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
             )&this->CustomAccessors;
  }
  __return_storage_ptr__->Base = (uchar *)FVar1;
  __return_storage_ptr__->ViewNum = (this->CustomAccessors).ArrayNum;
  return __return_storage_ptr__;
}

// GetAccessors @ 1466888b0

FCustomAccessorView * __thiscall
UE::MovieScene::
TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,1>
::GetAccessors(TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,1>
               *this,FCustomAccessorView *__return_storage_ptr__)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
  FVar1;
  
  FVar1 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->Stride = 0x28;
  if (FVar1 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                )0x0) {
    FVar1 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
             )&this->CustomAccessors;
  }
  __return_storage_ptr__->Base = (uchar *)FVar1;
  __return_storage_ptr__->ViewNum = (this->CustomAccessors).ArrayNum;
  return __return_storage_ptr__;
}

// GetAccessors @ 1466888e0

FCustomAccessorView * __thiscall
UE::MovieScene::TCustomPropertyRegistration<UE::MovieScene::FBoolPropertyTraits,8>::GetAccessors
          (TCustomPropertyRegistration<UE::MovieScene::FBoolPropertyTraits,8> *this,
          FCustomAccessorView *__return_storage_ptr__)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>
  FVar1;
  
  FVar1 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->Stride = 0x28;
  if (FVar1 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>
                )0x0) {
    FVar1 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>
             )&this->CustomAccessors;
  }
  __return_storage_ptr__->Base = (uchar *)FVar1;
  __return_storage_ptr__->ViewNum = (this->CustomAccessors).ArrayNum;
  return __return_storage_ptr__;
}

// GetAccessors @ 146688910

FCustomAccessorView * __thiscall
UE::MovieScene::TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::GetAccessors
          (TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8> *this,
          FCustomAccessorView *__return_storage_ptr__)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
  FVar1;
  
  FVar1 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->Stride = 0x28;
  if (FVar1 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
                )0x0) {
    FVar1 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
             )&this->CustomAccessors;
  }
  __return_storage_ptr__->Base = (uchar *)FVar1;
  __return_storage_ptr__->ViewNum = (this->CustomAccessors).ArrayNum;
  return __return_storage_ptr__;
}

// GetAccessors @ 146688940

FCustomAccessorView * __thiscall
UE::MovieScene::TCustomPropertyRegistration<UE::MovieScene::FObjectPropertyTraits,8>::GetAccessors
          (TCustomPropertyRegistration<UE::MovieScene::FObjectPropertyTraits,8> *this,
          FCustomAccessorView *__return_storage_ptr__)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FObjectPropertyTraits>_>
  FVar1;
  
  FVar1 = (this->CustomAccessors).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->Stride = 0x28;
  if (FVar1 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FObjectPropertyTraits>_>
                )0x0) {
    FVar1 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FObjectPropertyTraits>_>
             )&this->CustomAccessors;
  }
  __return_storage_ptr__->Base = (uchar *)FVar1;
  __return_storage_ptr__->ViewNum = (this->CustomAccessors).ArrayNum;
  return __return_storage_ptr__;
}

