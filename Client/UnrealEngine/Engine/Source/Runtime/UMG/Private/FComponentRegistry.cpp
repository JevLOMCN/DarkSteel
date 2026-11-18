// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 8

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FIntermediateMargin> @ 1468f7eb0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FIntermediateMargin>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = ' ';
  __return_storage_ptr__->Alignment = '\b';
  pFVar6 = (FComponentTypeDebugInfo *)0x0;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = '\0';
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  (__return_storage_ptr__->ComplexComponentOps).Ptr = (IComplexComponentOps *)0x0;
  (__return_storage_ptr__->DebugInfo).Ptr = (FComponentTypeDebugInfo *)0x0;
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = EVar4;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = EVar4 >> 3;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar5->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFIntermediateMargin_MovieScene_UE___MovieScene_UE__6B_;
    (pFVar5->DebugName).Data.ArrayNum = 0;
    (pFVar5->DebugName).Data.ArrayMax = 0;
    pFVar5->DebugTypeName = (wchar_t *)0x0;
    pFVar6 = pFVar5;
  }
  pFVar5 = (__return_storage_ptr__->DebugInfo).Ptr;
  (__return_storage_ptr__->DebugInfo).Ptr = pFVar6;
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  ::FString::operator=(&((__return_storage_ptr__->DebugInfo).Ptr)->DebugName,param_1);
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName =
       L"struct UE::MovieScene::FIntermediateMargin";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FIntermediateWidgetTransform> @ 1468f7f90

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FIntermediateWidgetTransform>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '8';
  __return_storage_ptr__->Alignment = '\b';
  pFVar6 = (FComponentTypeDebugInfo *)0x0;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = '\0';
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  (__return_storage_ptr__->ComplexComponentOps).Ptr = (IComplexComponentOps *)0x0;
  (__return_storage_ptr__->DebugInfo).Ptr = (FComponentTypeDebugInfo *)0x0;
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = EVar4;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = EVar4 >> 3;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar5->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5->_padding_ =
         (longlong)
         &
         ___7__TComponentTypeDebugInfo_UFIntermediateWidgetTransform_MovieScene_UE___MovieScene_UE__6B_
    ;
    (pFVar5->DebugName).Data.ArrayNum = 0;
    (pFVar5->DebugName).Data.ArrayMax = 0;
    pFVar5->DebugTypeName = (wchar_t *)0x0;
    pFVar6 = pFVar5;
  }
  pFVar5 = (__return_storage_ptr__->DebugInfo).Ptr;
  (__return_storage_ptr__->DebugInfo).Ptr = pFVar6;
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  ::FString::operator=(&((__return_storage_ptr__->DebugInfo).Ptr)->DebugName,param_1);
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName =
       L"struct UE::MovieScene::FIntermediateWidgetTransform";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FWidgetMaterialPath> @ 1468f8070

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FWidgetMaterialPath>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = ' ';
  __return_storage_ptr__->Alignment = '\b';
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = '\0';
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\0';
  pFVar6 = (FComponentTypeDebugInfo *)0x0;
  (__return_storage_ptr__->ComplexComponentOps).Ptr = (IComplexComponentOps *)0x0;
  (__return_storage_ptr__->DebugInfo).Ptr = (FComponentTypeDebugInfo *)0x0;
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = EVar4;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\0';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\0';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = EVar4 >> 3;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\0';
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar5->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFWidgetMaterialPath_MovieScene_UE___MovieScene_UE__6B_;
    (pFVar5->DebugName).Data.ArrayNum = 0;
    (pFVar5->DebugName).Data.ArrayMax = 0;
    pFVar5->DebugTypeName = (wchar_t *)0x0;
    pFVar6 = pFVar5;
  }
  pFVar5 = (__return_storage_ptr__->DebugInfo).Ptr;
  (__return_storage_ptr__->DebugInfo).Ptr = pFVar6;
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  ::FString::operator=(&((__return_storage_ptr__->DebugInfo).Ptr)->DebugName,param_1);
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName =
       L"struct UE::MovieScene::FWidgetMaterialPath";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FWidgetMaterialHandle> @ 1468f8150

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<FWidgetMaterialHandle>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x10';
  __return_storage_ptr__->Alignment = '\b';
  pFVar6 = (FComponentTypeDebugInfo *)0x0;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = '\0';
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  (__return_storage_ptr__->ComplexComponentOps).Ptr = (IComplexComponentOps *)0x0;
  (__return_storage_ptr__->DebugInfo).Ptr = (FComponentTypeDebugInfo *)0x0;
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = EVar4;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = EVar4 >> 3;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar5->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5->_padding_ =
         (longlong)&___7__TComponentTypeDebugInfo_VFWidgetMaterialHandle___MovieScene_UE__6B_;
    (pFVar5->DebugName).Data.ArrayNum = 0;
    (pFVar5->DebugName).Data.ArrayMax = 0;
    pFVar5->DebugTypeName = (wchar_t *)0x0;
    pFVar6 = pFVar5;
  }
  pFVar5 = (__return_storage_ptr__->DebugInfo).Ptr;
  (__return_storage_ptr__->DebugInfo).Ptr = pFVar6;
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  ::FString::operator=(&((__return_storage_ptr__->DebugInfo).Ptr)->DebugName,param_1);
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"class FWidgetMaterialHandle";
  return __return_storage_ptr__;
}

// NewComponentType<UE::MovieScene::FIntermediateMargin> @ 1468f82f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FIntermediateMargin> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FIntermediateMargin>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  TComponentTypeID<UE::MovieScene::FIntermediateMargin> TVar9;
  FComponentTypeDebugInfo *pFVar10;
  FComponentTypeDebugInfo *pFVar11;
  FComponentTypeDebugInfo *pFVar12;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar13;
  byte bVar14;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar15;
  longlong *in_R9;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined8 *puStack_88;
  undefined2 local_80;
  byte local_7e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_78;
  wchar_t local_70;
  wchar_t local_6e;
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_80 = 0x820;
  local_7e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_7e & 0x86 | 6;
  local_98._8_8_ = (FComponentTypeDebugInfo *)0x0;
  puStack_88 = (undefined8 *)0x0;
  pFVar10 = ::operator_new(0x20);
  puVar7 = puStack_88;
  pFVar12 = (FComponentTypeDebugInfo *)0x0;
  pFVar11 = pFVar12;
  if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar10->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar10->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFIntermediateMargin_MovieScene_UE___MovieScene_UE__6B_;
    (pFVar10->DebugName).Data.ArrayNum = 0;
    (pFVar10->DebugName).Data.ArrayMax = 0;
    pFVar10->DebugTypeName = (wchar_t *)0x0;
    pFVar11 = pFVar10;
  }
  if (puStack_88 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puStack_88;
    puStack_88 = &pFVar11->_padding_;
    (*(code *)*puVar1)(puVar7,1);
    pFVar11 = (FComponentTypeDebugInfo *)puStack_88;
  }
  puStack_88 = &pFVar11->_padding_;
  ::FString::operator=((FString *)((longlong)puStack_88 + 8),(wchar_t *)param_2);
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct UE::MovieScene::FIntermediateMargin";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1468f8436;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFIntermediateMargin_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar12 = pFVar11;
    }
  }
  else {
    local_7e = bVar14;
    pFVar11 = ::operator_new(0x10);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar11->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFIntermediateMargin_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar12 = pFVar11;
    }
  }
  uVar6 = local_98._8_8_;
  pFVar11 = pFVar12;
  if ((FComponentTypeDebugInfo *)local_98._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    plVar5 = (longlong *)local_98._8_8_;
    local_98._8_8_ = pFVar12;
    (**(code **)*plVar5)(uVar6,1);
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
  }
LAB_1468f8436:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFIntermediateMargin_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FIntermediateMargin>)(*pcVar3)();
      return TVar9;
    }
    pTVar15 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
    if ((local_38 & 2) == 0) {
      pTVar15 = local_78;
    }
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FIntermediateMargin>)(*pcVar3)();
      return TVar9;
    }
    pTVar13 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
    if ((local_38 & 2) == 0) {
      pTVar13 = local_78;
    }
    if ((pTVar15 != pTVar13) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FIntermediateMargin>)(*pcVar3)();
      return TVar9;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78);
    if ((local_38 & 1) != 0) {
      pTVar15 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
      if ((local_38 & 2) == 0) {
        pTVar15 = local_78;
      }
      local_38 = local_38 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar15->Data).Pad)->Data).Pad)(pTVar15,0);
      if ((local_38 & 2) == 0) {
        FMemory::Free(local_78);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)puStack_88 != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*puStack_88)(puStack_88,1);
  }
  if ((FComponentTypeDebugInfo *)local_98._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_98._8_8_)(local_98._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FIntermediateWidgetTransform> @ 1468f85b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FIntermediateWidgetTransform>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform> TVar9;
  FComponentTypeDebugInfo *pFVar10;
  FComponentTypeDebugInfo *pFVar11;
  FComponentTypeDebugInfo *pFVar12;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar13;
  byte bVar14;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar15;
  longlong *in_R9;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined8 *puStack_88;
  undefined2 local_80;
  byte local_7e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_78;
  wchar_t local_70;
  wchar_t local_6e;
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_80 = 0x838;
  local_7e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_7e & 0x86 | 6;
  local_98._8_8_ = (FComponentTypeDebugInfo *)0x0;
  puStack_88 = (undefined8 *)0x0;
  pFVar10 = ::operator_new(0x20);
  puVar7 = puStack_88;
  pFVar12 = (FComponentTypeDebugInfo *)0x0;
  pFVar11 = pFVar12;
  if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar10->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar10->_padding_ =
         (longlong)
         &
         ___7__TComponentTypeDebugInfo_UFIntermediateWidgetTransform_MovieScene_UE___MovieScene_UE__6B_
    ;
    (pFVar10->DebugName).Data.ArrayNum = 0;
    (pFVar10->DebugName).Data.ArrayMax = 0;
    pFVar10->DebugTypeName = (wchar_t *)0x0;
    pFVar11 = pFVar10;
  }
  if (puStack_88 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puStack_88;
    puStack_88 = &pFVar11->_padding_;
    (*(code *)*puVar1)(puVar7,1);
    pFVar11 = (FComponentTypeDebugInfo *)puStack_88;
  }
  puStack_88 = &pFVar11->_padding_;
  ::FString::operator=((FString *)((longlong)puStack_88 + 8),(wchar_t *)param_2);
  *(wchar_t **)((longlong)puStack_88 + 0x18) =
       L"struct UE::MovieScene::FIntermediateWidgetTransform";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1468f86f6;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFIntermediateWidgetTransform_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar12 = pFVar11;
    }
  }
  else {
    local_7e = bVar14;
    pFVar11 = ::operator_new(0x10);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar11->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFIntermediateWidgetTransform_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar12 = pFVar11;
    }
  }
  uVar6 = local_98._8_8_;
  pFVar11 = pFVar12;
  if ((FComponentTypeDebugInfo *)local_98._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    plVar5 = (longlong *)local_98._8_8_;
    local_98._8_8_ = pFVar12;
    (**(code **)*plVar5)(uVar6,1);
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
  }
LAB_1468f86f6:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFIntermediateWidgetTransform_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform>)(*pcVar3)();
      return TVar9;
    }
    pTVar15 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
    if ((local_38 & 2) == 0) {
      pTVar15 = local_78;
    }
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform>)(*pcVar3)();
      return TVar9;
    }
    pTVar13 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
    if ((local_38 & 2) == 0) {
      pTVar13 = local_78;
    }
    if ((pTVar15 != pTVar13) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform>)(*pcVar3)();
      return TVar9;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78);
    if ((local_38 & 1) != 0) {
      pTVar15 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
      if ((local_38 & 2) == 0) {
        pTVar15 = local_78;
      }
      local_38 = local_38 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar15->Data).Pad)->Data).Pad)(pTVar15,0);
      if ((local_38 & 2) == 0) {
        FMemory::Free(local_78);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)puStack_88 != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*puStack_88)(puStack_88,1);
  }
  if ((FComponentTypeDebugInfo *)local_98._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_98._8_8_)(local_98._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FWidgetMaterialPath> @ 1468f8870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FWidgetMaterialPath> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FWidgetMaterialPath>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  TComponentTypeID<UE::MovieScene::FWidgetMaterialPath> TVar9;
  FComponentTypeDebugInfo *pFVar10;
  FComponentTypeDebugInfo *pFVar11;
  FComponentTypeDebugInfo *pFVar12;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar13;
  byte bVar14;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar15;
  longlong *in_R9;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined8 *puStack_88;
  undefined2 local_80;
  byte local_7e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_78;
  wchar_t local_70;
  wchar_t local_6e;
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_80 = 0x820;
  local_7e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_7e & 0x80;
  local_98._8_8_ = (FComponentTypeDebugInfo *)0x0;
  puStack_88 = (undefined8 *)0x0;
  pFVar10 = ::operator_new(0x20);
  puVar7 = puStack_88;
  pFVar12 = (FComponentTypeDebugInfo *)0x0;
  pFVar11 = pFVar12;
  if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar10->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar10->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFWidgetMaterialPath_MovieScene_UE___MovieScene_UE__6B_;
    (pFVar10->DebugName).Data.ArrayNum = 0;
    (pFVar10->DebugName).Data.ArrayMax = 0;
    pFVar10->DebugTypeName = (wchar_t *)0x0;
    pFVar11 = pFVar10;
  }
  if (puStack_88 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puStack_88;
    puStack_88 = &pFVar11->_padding_;
    (*(code *)*puVar1)(puVar7,1);
    pFVar11 = (FComponentTypeDebugInfo *)puStack_88;
  }
  puStack_88 = &pFVar11->_padding_;
  ::FString::operator=((FString *)((longlong)puStack_88 + 8),(wchar_t *)param_2);
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct UE::MovieScene::FWidgetMaterialPath";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1468f89b3;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFWidgetMaterialPath_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar12 = pFVar11;
    }
  }
  else {
    local_7e = bVar14;
    pFVar11 = ::operator_new(0x10);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar11->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFWidgetMaterialPath_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar12 = pFVar11;
    }
  }
  uVar6 = local_98._8_8_;
  pFVar11 = pFVar12;
  if ((FComponentTypeDebugInfo *)local_98._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    plVar5 = (longlong *)local_98._8_8_;
    local_98._8_8_ = pFVar12;
    (**(code **)*plVar5)(uVar6,1);
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
  }
LAB_1468f89b3:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFWidgetMaterialPath_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FWidgetMaterialPath>)(*pcVar3)();
      return TVar9;
    }
    pTVar15 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
    if ((local_38 & 2) == 0) {
      pTVar15 = local_78;
    }
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FWidgetMaterialPath>)(*pcVar3)();
      return TVar9;
    }
    pTVar13 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
    if ((local_38 & 2) == 0) {
      pTVar13 = local_78;
    }
    if ((pTVar15 != pTVar13) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FWidgetMaterialPath>)(*pcVar3)();
      return TVar9;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78);
    if ((local_38 & 1) != 0) {
      pTVar15 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
      if ((local_38 & 2) == 0) {
        pTVar15 = local_78;
      }
      local_38 = local_38 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar15->Data).Pad)->Data).Pad)(pTVar15,0);
      if ((local_38 & 2) == 0) {
        FMemory::Free(local_78);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)puStack_88 != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*puStack_88)(puStack_88,1);
  }
  if ((FComponentTypeDebugInfo *)local_98._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_98._8_8_)(local_98._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<FWidgetMaterialHandle> @ 1468f8b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FWidgetMaterialHandle> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FWidgetMaterialHandle>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  TComponentTypeID<FWidgetMaterialHandle> TVar9;
  FComponentTypeDebugInfo *pFVar10;
  FComponentTypeDebugInfo *pFVar11;
  FComponentTypeDebugInfo *pFVar12;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar13;
  byte bVar14;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar15;
  longlong *in_R9;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined8 *puStack_88;
  undefined2 local_80;
  byte local_7e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_78;
  wchar_t local_70;
  wchar_t local_6e;
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_80 = 0x810;
  local_7e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_7e & 0x86 | 6;
  local_98._8_8_ = (FComponentTypeDebugInfo *)0x0;
  puStack_88 = (undefined8 *)0x0;
  pFVar10 = ::operator_new(0x20);
  puVar7 = puStack_88;
  pFVar12 = (FComponentTypeDebugInfo *)0x0;
  pFVar11 = pFVar12;
  if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar10->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar10->_padding_ =
         (longlong)&___7__TComponentTypeDebugInfo_VFWidgetMaterialHandle___MovieScene_UE__6B_;
    (pFVar10->DebugName).Data.ArrayNum = 0;
    (pFVar10->DebugName).Data.ArrayMax = 0;
    pFVar10->DebugTypeName = (wchar_t *)0x0;
    pFVar11 = pFVar10;
  }
  if (puStack_88 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puStack_88;
    puStack_88 = &pFVar11->_padding_;
    (*(code *)*puVar1)(puVar7,1);
    pFVar11 = (FComponentTypeDebugInfo *)puStack_88;
  }
  puStack_88 = &pFVar11->_padding_;
  ::FString::operator=((FString *)((longlong)puStack_88 + 8),(wchar_t *)param_2);
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"class FWidgetMaterialHandle";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1468f8c76;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_VFWidgetMaterialHandle___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar12 = pFVar11;
    }
  }
  else {
    local_7e = bVar14;
    pFVar11 = ::operator_new(0x10);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar11->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_VFWidgetMaterialHandle___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar12 = pFVar11;
    }
  }
  uVar6 = local_98._8_8_;
  pFVar11 = pFVar12;
  if ((FComponentTypeDebugInfo *)local_98._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    plVar5 = (longlong *)local_98._8_8_;
    local_98._8_8_ = pFVar12;
    (**(code **)*plVar5)(uVar6,1);
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
  }
LAB_1468f8c76:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &___7__TDuplicateChildEntityInitializer_VFWidgetMaterialHandle___MovieScene_UE__6B_;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<FWidgetMaterialHandle>)(*pcVar3)();
      return TVar9;
    }
    pTVar15 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
    if ((local_38 & 2) == 0) {
      pTVar15 = local_78;
    }
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<FWidgetMaterialHandle>)(*pcVar3)();
      return TVar9;
    }
    pTVar13 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
    if ((local_38 & 2) == 0) {
      pTVar13 = local_78;
    }
    if ((pTVar15 != pTVar13) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<FWidgetMaterialHandle>)(*pcVar3)();
      return TVar9;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78);
    if ((local_38 & 1) != 0) {
      pTVar15 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
      if ((local_38 & 2) == 0) {
        pTVar15 = local_78;
      }
      local_38 = local_38 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar15->Data).Pad)->Data).Pad)(pTVar15,0);
      if ((local_38 & 2) == 0) {
        FMemory::Free(local_78);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)puStack_88 != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*puStack_88)(puStack_88,1);
  }
  if ((FComponentTypeDebugInfo *)local_98._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_98._8_8_)(local_98._8_8_,1);
  }
  return SUB82(param_1,0);
}

