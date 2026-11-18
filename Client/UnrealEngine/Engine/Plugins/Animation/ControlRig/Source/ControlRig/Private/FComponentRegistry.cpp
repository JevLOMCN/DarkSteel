// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 10

// MakeComponentTypeInfoWithoutComponentOps<FMovieSceneControlRigSpaceChannel_const_*> @ 14a3a50e0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FMovieSceneControlRigSpaceChannel_const_*>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\b';
  __return_storage_ptr__->Alignment = '\b';
  pFVar6 = (FComponentTypeDebugInfo *)0x0;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\x01';
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
  __return_storage_ptr__->bIsZeroConstructType = '\x01';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = EVar4;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\x01';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\x01';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = EVar4 >> 3;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar5->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_PEBUFMovieSceneControlRigSpaceChannel___MovieScene_UE__6B_;
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
       L"const struct FMovieSceneControlRigSpaceChannel*";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FAccumulatedControlEntryIndex> @ 14a3a51c0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FAccumulatedControlEntryIndex>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x06';
  __return_storage_ptr__->Alignment = '\x02';
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
         ___7__TComponentTypeDebugInfo_UFAccumulatedControlEntryIndex_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FAccumulatedControlEntryIndex";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FBaseControlRigEvalData> @ 14a3a52a0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FBaseControlRigEvalData>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x18';
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
         &___7__TComponentTypeDebugInfo_UFBaseControlRigEvalData_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FBaseControlRigEvalData";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FControlRigSourceData> @ 14a3a5380

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FControlRigSourceData>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\b';
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
         &___7__TComponentTypeDebugInfo_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FControlRigSourceData";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FMovieSceneControlRigSpaceBaseKey> @ 14a3a5460

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FMovieSceneControlRigSpaceBaseKey>
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
         &___7__TComponentTypeDebugInfo_UFMovieSceneControlRigSpaceBaseKey___MovieScene_UE__6B_;
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
       L"struct FMovieSceneControlRigSpaceBaseKey";
  return __return_storage_ptr__;
}

// NewComponentType<FMovieSceneControlRigSpaceChannel_const_*> @ 14a3a6250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FMovieSceneControlRigSpaceChannel_const_*> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FMovieSceneControlRigSpaceChannel_const_*>
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
  TComponentTypeID<FMovieSceneControlRigSpaceChannel_const_*> TVar9;
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
  local_80 = 0x808;
  local_7e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_7e & 0x87 | 7;
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
         &___7__TComponentTypeDebugInfo_PEBUFMovieSceneControlRigSpaceChannel___MovieScene_UE__6B_;
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"const struct FMovieSceneControlRigSpaceChannel*";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_14a3a6396;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_PEBUFMovieSceneControlRigSpaceChannel___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_PEBUFMovieSceneControlRigSpaceChannel___FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_14a3a6396:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_PEBUFMovieSceneControlRigSpaceChannel___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<FMovieSceneControlRigSpaceChannel_const_*>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<FMovieSceneControlRigSpaceChannel_const_*>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<FMovieSceneControlRigSpaceChannel_const_*>)(*pcVar3)();
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

// NewComponentType<UE::MovieScene::FAccumulatedControlEntryIndex> @ 14a3a6510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FAccumulatedControlEntryIndex> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FAccumulatedControlEntryIndex>
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
  TComponentTypeID<UE::MovieScene::FAccumulatedControlEntryIndex> TVar9;
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
  local_80 = 0x206;
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
         ___7__TComponentTypeDebugInfo_UFAccumulatedControlEntryIndex_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FAccumulatedControlEntryIndex";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_14a3a6656;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFAccumulatedControlEntryIndex_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFAccumulatedControlEntryIndex_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_14a3a6656:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFAccumulatedControlEntryIndex_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FAccumulatedControlEntryIndex>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FAccumulatedControlEntryIndex>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FAccumulatedControlEntryIndex>)(*pcVar3)();
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

// NewComponentType<UE::MovieScene::FBaseControlRigEvalData> @ 14a3a67d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FBaseControlRigEvalData>
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
  TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData> TVar9;
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
  local_80 = 0x818;
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
         &___7__TComponentTypeDebugInfo_UFBaseControlRigEvalData_MovieScene_UE___MovieScene_UE__6B_;
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct UE::MovieScene::FBaseControlRigEvalData";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_14a3a6916;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFBaseControlRigEvalData_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFBaseControlRigEvalData_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_14a3a6916:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFBaseControlRigEvalData_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData>)(*pcVar3)();
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

// NewComponentType<UE::MovieScene::FControlRigSourceData> @ 14a3a6a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FControlRigSourceData> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FControlRigSourceData>
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
  local_90 = 0x808;
  local_8e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_8e & 0x86 | 6;
  local_a8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  puStack_98 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x20);
  puVar6 = puStack_98;
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = 0;
    *puVar7 = &
              ___7__TComponentTypeDebugInfo_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__6B_
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
  puStack_98[3] = L"struct UE::MovieScene::FControlRigSourceData";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar9 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_8e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar3 = local_8e & 7;
    pFVar8 = (FComponentTypeDebugInfo *)local_a8._8_8_;
    local_8e = bVar9;
    if (bVar3 == 7) goto LAB_14a3a6bce;
    pFVar8 = ::operator_new(8);
    if (pFVar8 == (FComponentTypeDebugInfo *)0x0) goto LAB_14a3a6bb5;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TComplexComponentOps_UFControlRigSourceData_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
    ;
  }
  else {
    local_8e = bVar9;
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 == (FComponentTypeDebugInfo *)0x0) {
LAB_14a3a6bb5:
      pFVar8 = (FComponentTypeDebugInfo *)0x0;
    }
    else {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFControlRigSourceData_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_14a3a6bce:
  local_a8._8_8_ = pFVar8;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = &
               ___7__TDuplicateChildEntityInitializer_UFControlRigSourceData_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FControlRigSourceData>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FControlRigSourceData> *)&local_88)
    ;
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

// NewComponentType<FMovieSceneControlRigSpaceBaseKey> @ 14a3a6ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FMovieSceneControlRigSpaceBaseKey> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FMovieSceneControlRigSpaceBaseKey>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  TComponentTypeID<FMovieSceneControlRigSpaceBaseKey> TVar8;
  FComponentTypeDebugInfo *pFVar9;
  FComponentTypeDebugInfo *pFVar10;
  FComponentTypeDebugInfo *pFVar11;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar12;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar13;
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
  local_80 = 0x410;
  local_7e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_7e & 0x86 | 6;
  local_98._8_8_ = (FComponentTypeDebugInfo *)0x0;
  puStack_88 = (undefined8 *)0x0;
  pFVar9 = ::operator_new(0x20);
  puVar6 = puStack_88;
  pFVar11 = (FComponentTypeDebugInfo *)0x0;
  pFVar10 = pFVar11;
  if (pFVar9 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar9->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFMovieSceneControlRigSpaceBaseKey___MovieScene_UE__6B_;
    (pFVar9->DebugName).Data.ArrayNum = 0;
    (pFVar9->DebugName).Data.ArrayMax = 0;
    pFVar9->DebugTypeName = (wchar_t *)0x0;
    pFVar10 = pFVar9;
  }
  if (puStack_88 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puStack_88;
    puStack_88 = &pFVar10->_padding_;
    (*(code *)*puVar1)(puVar6,1);
    pFVar10 = (FComponentTypeDebugInfo *)puStack_88;
  }
  puStack_88 = &pFVar10->_padding_;
  ::FString::operator=((FString *)((longlong)puStack_88 + 8),(wchar_t *)param_2);
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct FMovieSceneControlRigSpaceBaseKey";
  local_7e = local_7e | 0x40;
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar10 = ::operator_new(8);
    if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMovieSceneControlRigSpaceBaseKey___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar11 = pFVar10;
    }
  }
  else {
    pFVar10 = ::operator_new(0x10);
    if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar10->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFMovieSceneControlRigSpaceBaseKey___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar11 = pFVar10;
    }
  }
  uVar5 = local_98._8_8_;
  if ((FComponentTypeDebugInfo *)local_98._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    plVar4 = (longlong *)local_98._8_8_;
    local_98._8_8_ = pFVar11;
    (**(code **)*plVar4)(uVar5,1);
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
  }
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFMovieSceneControlRigSpaceBaseKey___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8 = (TComponentTypeID<FMovieSceneControlRigSpaceBaseKey>)(*pcVar3)();
      return TVar8;
    }
    pTVar13 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
    if ((local_38 & 2) == 0) {
      pTVar13 = local_78;
    }
    if (((local_38 & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8 = (TComponentTypeID<FMovieSceneControlRigSpaceBaseKey>)(*pcVar3)();
      return TVar8;
    }
    pTVar12 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
    if ((local_38 & 2) == 0) {
      pTVar12 = local_78;
    }
    if ((pTVar13 != pTVar12) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8 = (TComponentTypeID<FMovieSceneControlRigSpaceBaseKey>)(*pcVar3)();
      return TVar8;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78);
    if ((local_38 & 1) != 0) {
      pTVar13 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
      if ((local_38 & 2) == 0) {
        pTVar13 = local_78;
      }
      local_38 = local_38 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar13->Data).Pad)->Data).Pad)(pTVar13,0);
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

