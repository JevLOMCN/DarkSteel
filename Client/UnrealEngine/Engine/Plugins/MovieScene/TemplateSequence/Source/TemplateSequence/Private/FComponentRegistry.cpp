// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 4

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FTemplateSequenceComponentData> @ 14ac6ceb0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FTemplateSequenceComponentData>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x14';
  __return_storage_ptr__->Alignment = '\x04';
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
         ___7__TComponentTypeDebugInfo_UFTemplateSequenceComponentData_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FTemplateSequenceComponentData";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> @ 14ac6cf90

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = ',';
  __return_storage_ptr__->Alignment = '\x04';
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
         ___7__TComponentTypeDebugInfo_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FTemplateSequencePropertyScaleComponentData";
  return __return_storage_ptr__;
}

// NewComponentType<UE::MovieScene::FTemplateSequenceComponentData> @ 14ac6d080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FTemplateSequenceComponentData> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FTemplateSequenceComponentData>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FComponentTypeDebugInfo *pFVar8;
  byte bVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined8 *puStack_98;
  undefined2 local_90;
  byte local_8e;
  undefined **local_88;
  wchar_t local_80;
  wchar_t local_7e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_78 [8];
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_90 = 0x414;
  local_8e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_8e & 0x86 | 6;
  local_a8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  puStack_98 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x20);
  puVar6 = puStack_98;
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = 0;
    *puVar7 = &
              ___7__TComponentTypeDebugInfo_UFTemplateSequenceComponentData_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar7[2] = 0;
    puVar7[3] = 0;
  }
  if (puStack_98 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puStack_98;
    puStack_98 = puVar7;
    (*(code *)*puVar1)(puVar6,1);
    puVar7 = puStack_98;
  }
  puStack_98 = puVar7;
  ::FString::operator=((FString *)(puStack_98 + 1),(wchar_t *)param_2);
  puStack_98[3] = L"struct UE::MovieScene::FTemplateSequenceComponentData";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar9 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_8e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar3 = local_8e & 7;
    pFVar8 = (FComponentTypeDebugInfo *)local_a8._8_8_;
    local_8e = bVar9;
    if (bVar3 == 7) goto LAB_14ac6d1be;
    pFVar8 = ::operator_new(8);
    if (pFVar8 == (FComponentTypeDebugInfo *)0x0) goto LAB_14ac6d1a5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TComplexComponentOps_UFTemplateSequenceComponentData_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
    ;
  }
  else {
    local_8e = bVar9;
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 == (FComponentTypeDebugInfo *)0x0) {
LAB_14ac6d1a5:
      pFVar8 = (FComponentTypeDebugInfo *)0x0;
    }
    else {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFTemplateSequenceComponentData_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
    }
  }
  uVar5 = local_a8._8_8_;
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    plVar4 = (longlong *)local_a8._8_8_;
    local_a8._8_8_ = pFVar8;
    (**(code **)*plVar4)(uVar5,1);
    pFVar8 = (FComponentTypeDebugInfo *)local_a8._8_8_;
  }
LAB_14ac6d1be:
  local_a8._8_8_ = pFVar8;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = &
               ___7__TDuplicateChildEntityInitializer_UFTemplateSequenceComponentData_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequenceComponentData>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequenceComponentData> *)
               &local_88);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78);
    if ((local_38 & 1) != 0) {
      pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78;
      if ((local_38 & 2) == 0) {
        pTVar10 = local_78[0];
      }
      local_38 = local_38 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar10->Data).Pad)->Data).Pad)(pTVar10,0);
      if ((local_38 & 2) == 0) {
        FMemory::Free(local_78[0]);
      }
    }
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)(puStack_98,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> @ 14ac6d290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> __thiscall
UE::MovieScene::FComponentRegistry::
NewComponentType<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FComponentTypeDebugInfo *pFVar8;
  byte bVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined8 *puStack_98;
  undefined2 local_90;
  byte local_8e;
  undefined **local_88;
  wchar_t local_80;
  wchar_t local_7e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_78 [8];
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_90 = 0x42c;
  local_8e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_8e & 0x86 | 6;
  local_a8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  puStack_98 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x20);
  puVar6 = puStack_98;
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = 0;
    *puVar7 = &
              ___7__TComponentTypeDebugInfo_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar7[2] = 0;
    puVar7[3] = 0;
  }
  if (puStack_98 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puStack_98;
    puStack_98 = puVar7;
    (*(code *)*puVar1)(puVar6,1);
    puVar7 = puStack_98;
  }
  puStack_98 = puVar7;
  ::FString::operator=((FString *)(puStack_98 + 1),(wchar_t *)param_2);
  puStack_98[3] = L"struct UE::MovieScene::FTemplateSequencePropertyScaleComponentData";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar9 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_8e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar3 = local_8e & 7;
    pFVar8 = (FComponentTypeDebugInfo *)local_a8._8_8_;
    local_8e = bVar9;
    if (bVar3 == 7) goto LAB_14ac6d3ce;
    pFVar8 = ::operator_new(8);
    if (pFVar8 == (FComponentTypeDebugInfo *)0x0) goto LAB_14ac6d3b5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TComplexComponentOps_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
    ;
  }
  else {
    local_8e = bVar9;
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 == (FComponentTypeDebugInfo *)0x0) {
LAB_14ac6d3b5:
      pFVar8 = (FComponentTypeDebugInfo *)0x0;
    }
    else {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
    }
  }
  uVar5 = local_a8._8_8_;
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    plVar4 = (longlong *)local_a8._8_8_;
    local_a8._8_8_ = pFVar8;
    (**(code **)*plVar4)(uVar5,1);
    pFVar8 = (FComponentTypeDebugInfo *)local_a8._8_8_;
  }
LAB_14ac6d3ce:
  local_a8._8_8_ = pFVar8;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = &
               ___7__TDuplicateChildEntityInitializer_UFTemplateSequencePropertyScaleComponentData_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
                *)&local_88);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78);
    if ((local_38 & 1) != 0) {
      pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78;
      if ((local_38 & 2) == 0) {
        pTVar10 = local_78[0];
      }
      local_38 = local_38 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar10->Data).Pad)->Data).Pad)(pTVar10,0);
      if ((local_38 & 2) == 0) {
        FMemory::Free(local_78[0]);
      }
    }
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)(puStack_98,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

