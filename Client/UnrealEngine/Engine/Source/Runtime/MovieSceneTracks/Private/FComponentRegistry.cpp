// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 54

// MakeComponentTypeInfoWithoutComponentOps<UE::Math::TRotator<double>_> @ 1465eb840

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::Math::TRotator<double>_>
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
         (longlong)&___7__TComponentTypeDebugInfo_U__TRotator_N_Math_UE___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct UE::Math::TRotator<double>";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> @ 1465eb920

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>
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
  __return_storage_ptr__->Alignment = '\x04';
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
         &
         ___7__TComponentTypeDebugInfo_U__TWeakObjectPtr_VUMaterialParameterCollection__UFWeakObjectPtr_____MovieScene_UE__6B_
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
       L"struct TWeakObjectPtr<class UMaterialParameterCollection,struct FWeakObjectPtr>";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> @ 1465eba00

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>
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
  __return_storage_ptr__->Alignment = '\x04';
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
         &
         ___7__TComponentTypeDebugInfo_U__TWeakObjectPtr_VUSceneComponent__UFWeakObjectPtr_____MovieScene_UE__6B_
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
       L"struct TWeakObjectPtr<class USceneComponent,struct FWeakObjectPtr>";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FAttachmentComponent> @ 1465ebae0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FAttachmentComponent>
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
         &___7__TComponentTypeDebugInfo_UFAttachmentComponent_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FAttachmentComponent";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> @ 1465ebbc0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x02';
  __return_storage_ptr__->Alignment = '\x01';
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
         ___7__TComponentTypeDebugInfo_UFBoolMetaData_FBoolPropertyTraits_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FBoolPropertyTraits::FBoolMetaData";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FComponentMaterialInfo> @ 1465ebca0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<FComponentMaterialInfo>
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
         (longlong)&___7__TComponentTypeDebugInfo_UFComponentMaterialInfo___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FComponentMaterialInfo";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FConstraintComponentData> @ 1465ebd80

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FConstraintComponentData>
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
         (longlong)&___7__TComponentTypeDebugInfo_UFConstraintComponentData___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FConstraintComponentData";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FDoubleIntermediateVector> @ 1465ebe60

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FDoubleIntermediateVector>
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
         &
         ___7__TComponentTypeDebugInfo_UFDoubleIntermediateVector_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FDoubleIntermediateVector";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FFadeComponentData> @ 1465ebf40

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FFadeComponentData>
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
         &___7__TComponentTypeDebugInfo_UFFadeComponentData_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FFadeComponentData";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FFloatIntermediateVector> @ 1465ec020

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FFloatIntermediateVector>
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
         &___7__TComponentTypeDebugInfo_UFFloatIntermediateVector_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FFloatIntermediateVector";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FIntermediate3DTransform> @ 1465ec100

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FIntermediate3DTransform>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = 'H';
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
         &___7__TComponentTypeDebugInfo_UFIntermediate3DTransform_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FIntermediate3DTransform";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FIntermediateColor> @ 1465ec1e0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FIntermediateColor>
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
         &___7__TComponentTypeDebugInfo_UFIntermediateColor_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FIntermediateColor";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FLevelVisibilityComponentData> @ 1465ec2c0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FLevelVisibilityComponentData>
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
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
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
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = EVar4 >> 3;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar5->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFLevelVisibilityComponentData___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FLevelVisibilityComponentData"
  ;
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FMaterialParameterInfo> @ 1465ec3a0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<FMaterialParameterInfo>
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
         (longlong)&___7__TComponentTypeDebugInfo_UFMaterialParameterInfo___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FMaterialParameterInfo";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FMovieSceneAudioComponentData> @ 1465ec480

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FMovieSceneAudioComponentData>
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
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
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
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = EVar4 >> 3;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar5->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFMovieSceneAudioComponentData___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FMovieSceneAudioComponentData"
  ;
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FMovieSceneAudioInputData> @ 1465ec560

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FMovieSceneAudioInputData>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '`';
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
         (longlong)&___7__TComponentTypeDebugInfo_UFMovieSceneAudioInputData___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FMovieSceneAudioInputData";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FMovieSceneCameraShakeComponentData> @ 1465ec640

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FMovieSceneCameraShakeComponentData>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '@';
  __return_storage_ptr__->Alignment = '\b';
  pFVar6 = (FComponentTypeDebugInfo *)0x0;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = '\0';
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
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
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = EVar4 >> 3;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar5->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFMovieSceneCameraShakeComponentData___MovieScene_UE__6B_;
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
       L"struct FMovieSceneCameraShakeComponentData";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FMovieSceneCameraShakeInstanceData> @ 1465ec720

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FMovieSceneCameraShakeInstanceData>
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
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
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
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = EVar4 >> 3;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar5->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFMovieSceneCameraShakeInstanceData___MovieScene_UE__6B_;
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
       L"struct FMovieSceneCameraShakeInstanceData";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FMovieSceneDataLayerComponentData> @ 1465ec800

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FMovieSceneDataLayerComponentData>
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
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
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
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = EVar4 >> 3;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar5->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFMovieSceneDataLayerComponentData___MovieScene_UE__6B_;
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
       L"struct FMovieSceneDataLayerComponentData";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FMovieSceneObjectBindingID> @ 1465ec8e0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FMovieSceneObjectBindingID>
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
         (longlong)&___7__TComponentTypeDebugInfo_UFMovieSceneObjectBindingID___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FMovieSceneObjectBindingID";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FMovieSceneSkeletalAnimationComponentData> @ 1465ec9c0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FMovieSceneSkeletalAnimationComponentData>
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
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
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
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = EVar4 >> 3;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar5->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5->_padding_ =
         (longlong)
         &
         ___7__TComponentTypeDebugInfo_UFMovieSceneSkeletalAnimationComponentData___MovieScene_UE__6B_
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
       L"struct FMovieSceneSkeletalAnimationComponentData";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata> @ 1465ecaa0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
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
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
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
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = EVar4 >> 3;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar5->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5->_padding_ =
         (longlong)
         &
         ___7__TComponentTypeDebugInfo_UFObjectMetadata_FObjectPropertyTraits_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FObjectPropertyTraits::FObjectMetadata";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FPerlinNoiseParams> @ 1465ecb80

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<FPerlinNoiseParams>
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
         (longlong)&___7__TComponentTypeDebugInfo_UFPerlinNoiseParams___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FPerlinNoiseParams";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FPropertyNotifyComponentData> @ 1465ecc60

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FPropertyNotifyComponentData>
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
         ___7__TComponentTypeDebugInfo_UFPropertyNotifyComponentData_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FPropertyNotifyComponentData";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FName> @ 1465ecd40

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<FName>
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
  __return_storage_ptr__->Alignment = '\x04';
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
    pFVar5->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_VFName___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"class FName";
  return __return_storage_ptr__;
}

// NewComponentType<UE::Math::TRotator<double>_> @ 1465edfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::Math::TRotator<double>_> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::Math::TRotator<double>_>
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
  TComponentTypeID<UE::Math::TRotator<double>_> TVar9;
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
         (longlong)&___7__TComponentTypeDebugInfo_U__TRotator_N_Math_UE___MovieScene_UE__6B_;
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct UE::Math::TRotator<double>";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1465ee106;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &___7__TComplexComponentOps_U__TRotator_N_Math_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_U__TRotator_N_Math_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_1465ee106:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &___7__TDuplicateChildEntityInitializer_U__TRotator_N_Math_UE___MovieScene_UE__6B_;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::Math::TRotator<double>_>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::Math::TRotator<double>_>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::Math::TRotator<double>_>)(*pcVar3)();
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

// NewComponentType<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> @ 1465ee280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> __thiscall
UE::MovieScene::FComponentRegistry::
NewComponentType<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>
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
  TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> TVar9;
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
  local_80 = 0x408;
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
         &
         ___7__TComponentTypeDebugInfo_U__TWeakObjectPtr_VUMaterialParameterCollection__UFWeakObjectPtr_____MovieScene_UE__6B_
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
       L"struct TWeakObjectPtr<class UMaterialParameterCollection,struct FWeakObjectPtr>";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1465ee3c6;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_U__TWeakObjectPtr_VUMaterialParameterCollection__UFWeakObjectPtr_____FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_U__TWeakObjectPtr_VUMaterialParameterCollection__UFWeakObjectPtr_____FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_1465ee3c6:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_U__TWeakObjectPtr_VUMaterialParameterCollection__UFWeakObjectPtr_____MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>)
              (*pcVar3)();
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
      TVar9 = (TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>)
              (*pcVar3)();
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
      TVar9 = (TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>)
              (*pcVar3)();
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

// NewComponentType<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> @ 1465ee540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> __thiscall
UE::MovieScene::FComponentRegistry::
NewComponentType<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>
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
  TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> TVar9;
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
  local_80 = 0x408;
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
         &
         ___7__TComponentTypeDebugInfo_U__TWeakObjectPtr_VUSceneComponent__UFWeakObjectPtr_____MovieScene_UE__6B_
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
       L"struct TWeakObjectPtr<class USceneComponent,struct FWeakObjectPtr>";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1465ee686;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_U__TWeakObjectPtr_VUSceneComponent__UFWeakObjectPtr_____FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_U__TWeakObjectPtr_VUSceneComponent__UFWeakObjectPtr_____FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_1465ee686:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_U__TWeakObjectPtr_VUSceneComponent__UFWeakObjectPtr_____MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>)(*pcVar3)();
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

// NewComponentType<UE::MovieScene::FAttachmentComponent> @ 1465ee800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FAttachmentComponent> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FAttachmentComponent>
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
  local_90 = 0x418;
  local_8e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_8e & 0x86 | 6;
  local_a8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  puStack_98 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x20);
  puVar6 = puStack_98;
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = 0;
    *puVar7 = &
              ___7__TComponentTypeDebugInfo_UFAttachmentComponent_MovieScene_UE___MovieScene_UE__6B_
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
  puStack_98[3] = L"struct UE::MovieScene::FAttachmentComponent";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar9 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_8e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar3 = local_8e & 7;
    pFVar8 = (FComponentTypeDebugInfo *)local_a8._8_8_;
    local_8e = bVar9;
    if (bVar3 == 7) goto LAB_1465ee93e;
    pFVar8 = ::operator_new(8);
    if (pFVar8 == (FComponentTypeDebugInfo *)0x0) goto LAB_1465ee925;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TComplexComponentOps_UFAttachmentComponent_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
    ;
  }
  else {
    local_8e = bVar9;
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 == (FComponentTypeDebugInfo *)0x0) {
LAB_1465ee925:
      pFVar8 = (FComponentTypeDebugInfo *)0x0;
    }
    else {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFAttachmentComponent_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_1465ee93e:
  local_a8._8_8_ = pFVar8;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = &
               ___7__TDuplicateChildEntityInitializer_UFAttachmentComponent_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FAttachmentComponent>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FAttachmentComponent> *)&local_88);
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

// NewComponentType<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> @ 1465eea10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> __thiscall
UE::MovieScene::FComponentRegistry::
NewComponentType<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>
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
  TComponentTypeID<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> TVar9;
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
  local_80 = 0x102;
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
         ___7__TComponentTypeDebugInfo_UFBoolMetaData_FBoolPropertyTraits_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FBoolPropertyTraits::FBoolMetaData";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1465eeb56;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFBoolMetaData_FBoolPropertyTraits_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFBoolMetaData_FBoolPropertyTraits_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_1465eeb56:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFBoolMetaData_FBoolPropertyTraits_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>)(*pcVar3)();
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

// NewComponentType<FComponentMaterialInfo> @ 1465eecd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FComponentMaterialInfo> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FComponentMaterialInfo>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  TComponentTypeID<FComponentMaterialInfo> TVar8;
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
         (longlong)&___7__TComponentTypeDebugInfo_UFComponentMaterialInfo___MovieScene_UE__6B_;
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct FComponentMaterialInfo";
  local_7e = local_7e | 0x40;
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar10 = ::operator_new(8);
    if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFComponentMaterialInfo___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFComponentMaterialInfo___FComponentTypeInfo_MovieScene_UE__6B_
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
               &___7__TDuplicateChildEntityInitializer_UFComponentMaterialInfo___MovieScene_UE__6B_;
    if (((local_38 & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8 = (TComponentTypeID<FComponentMaterialInfo>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FComponentMaterialInfo>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FComponentMaterialInfo>)(*pcVar3)();
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

// NewComponentType<FConstraintComponentData> @ 1465eef80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FConstraintComponentData> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FConstraintComponentData>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  FComponentTypeDebugInfo *pFVar7;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar8;
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
  local_90 = 0x818;
  local_8e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_8e & 0x86 | 6;
  local_a8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  puStack_98 = (undefined8 *)0x0;
  puVar6 = ::operator_new(0x20);
  puVar5 = puStack_98;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = 0;
    *puVar6 = &___7__TComponentTypeDebugInfo_UFConstraintComponentData___MovieScene_UE__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
  }
  if (puStack_98 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puStack_98;
    puStack_98 = puVar6;
    (*(code *)*puVar1)(puVar5,1);
    puVar6 = puStack_98;
  }
  puStack_98 = puVar6;
  ::FString::operator=((FString *)(puStack_98 + 1),(wchar_t *)param_2);
  puStack_98[3] = L"struct FConstraintComponentData";
  local_8e = local_8e | 0x40;
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar7 = ::operator_new(8);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFConstraintComponentData___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1465ef08d;
    }
  }
  else {
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar7->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFConstraintComponentData___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1465ef08d;
    }
  }
  pFVar7 = (FComponentTypeDebugInfo *)0x0;
LAB_1465ef08d:
  uVar4 = local_a8._8_8_;
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    plVar3 = (longlong *)local_a8._8_8_;
    local_a8._8_8_ = pFVar7;
    (**(code **)*plVar3)(uVar4,1);
    pFVar7 = (FComponentTypeDebugInfo *)local_a8._8_8_;
  }
  local_a8._8_8_ = pFVar7;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = &
               ___7__TDuplicateChildEntityInitializer_UFConstraintComponentData___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FConstraintComponentData>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78,
               (TDuplicateChildEntityInitializer<FConstraintComponentData> *)&local_88);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78);
    if ((local_38 & 1) != 0) {
      pTVar8 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78;
      if ((local_38 & 2) == 0) {
        pTVar8 = local_78[0];
      }
      local_38 = local_38 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
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

// NewComponentType<UE::MovieScene::FDoubleIntermediateVector> @ 1465ef170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FDoubleIntermediateVector> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FDoubleIntermediateVector>
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
  TComponentTypeID<UE::MovieScene::FDoubleIntermediateVector> TVar9;
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
         &
         ___7__TComponentTypeDebugInfo_UFDoubleIntermediateVector_MovieScene_UE___MovieScene_UE__6B_
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct UE::MovieScene::FDoubleIntermediateVector";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1465ef2b6;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFDoubleIntermediateVector_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFDoubleIntermediateVector_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_1465ef2b6:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFDoubleIntermediateVector_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FDoubleIntermediateVector>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FDoubleIntermediateVector>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FDoubleIntermediateVector>)(*pcVar3)();
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

// NewComponentType<UE::MovieScene::FFadeComponentData> @ 1465ef430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FFadeComponentData> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FFadeComponentData>
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
  TComponentTypeID<UE::MovieScene::FFadeComponentData> TVar9;
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
  local_80 = 0x414;
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
         &___7__TComponentTypeDebugInfo_UFFadeComponentData_MovieScene_UE___MovieScene_UE__6B_;
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct UE::MovieScene::FFadeComponentData";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1465ef576;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFFadeComponentData_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFFadeComponentData_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_1465ef576:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFFadeComponentData_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FFadeComponentData>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FFadeComponentData>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FFadeComponentData>)(*pcVar3)();
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

// NewComponentType<UE::MovieScene::FFloatIntermediateVector> @ 1465ef6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FFloatIntermediateVector>
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
  TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> TVar9;
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
         &___7__TComponentTypeDebugInfo_UFFloatIntermediateVector_MovieScene_UE___MovieScene_UE__6B_
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct UE::MovieScene::FFloatIntermediateVector";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1465ef836;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFFloatIntermediateVector_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFFloatIntermediateVector_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_1465ef836:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFFloatIntermediateVector_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FFloatIntermediateVector>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FFloatIntermediateVector>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FFloatIntermediateVector>)(*pcVar3)();
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

// NewComponentType<UE::MovieScene::FIntermediate3DTransform> @ 1465ef9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FIntermediate3DTransform>
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
  TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> TVar9;
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
  local_80 = 0x848;
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
         &___7__TComponentTypeDebugInfo_UFIntermediate3DTransform_MovieScene_UE___MovieScene_UE__6B_
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct UE::MovieScene::FIntermediate3DTransform";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1465efaf6;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFIntermediate3DTransform_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFIntermediate3DTransform_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_1465efaf6:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFIntermediate3DTransform_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FIntermediate3DTransform>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FIntermediate3DTransform>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FIntermediate3DTransform>)(*pcVar3)();
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

// NewComponentType<UE::MovieScene::FIntermediateColor> @ 1465efc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FIntermediateColor> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FIntermediateColor>
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
  TComponentTypeID<UE::MovieScene::FIntermediateColor> TVar9;
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
         &___7__TComponentTypeDebugInfo_UFIntermediateColor_MovieScene_UE___MovieScene_UE__6B_;
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct UE::MovieScene::FIntermediateColor";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1465efdb6;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFIntermediateColor_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFIntermediateColor_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_1465efdb6:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFIntermediateColor_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FIntermediateColor>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FIntermediateColor>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FIntermediateColor>)(*pcVar3)();
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

// NewComponentType<FLevelVisibilityComponentData> @ 1465eff30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FLevelVisibilityComponentData> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FLevelVisibilityComponentData>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  TComponentTypeID<FLevelVisibilityComponentData> TVar8;
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
  local_80 = 0x808;
  local_7e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_7e & 0x82 | 2;
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
         &___7__TComponentTypeDebugInfo_UFLevelVisibilityComponentData___MovieScene_UE__6B_;
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct FLevelVisibilityComponentData";
  local_7e = local_7e | 0x40;
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar10 = ::operator_new(8);
    if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFLevelVisibilityComponentData___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFLevelVisibilityComponentData___FComponentTypeInfo_MovieScene_UE__6B_
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
               ___7__TDuplicateChildEntityInitializer_UFLevelVisibilityComponentData___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8 = (TComponentTypeID<FLevelVisibilityComponentData>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FLevelVisibilityComponentData>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FLevelVisibilityComponentData>)(*pcVar3)();
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

// NewComponentType<FMaterialParameterInfo> @ 1465f01e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FMaterialParameterInfo> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FMaterialParameterInfo>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  TComponentTypeID<FMaterialParameterInfo> TVar8;
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
         (longlong)&___7__TComponentTypeDebugInfo_UFMaterialParameterInfo___MovieScene_UE__6B_;
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct FMaterialParameterInfo";
  local_7e = local_7e | 0x40;
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar10 = ::operator_new(8);
    if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMaterialParameterInfo___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFMaterialParameterInfo___FComponentTypeInfo_MovieScene_UE__6B_
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
               &___7__TDuplicateChildEntityInitializer_UFMaterialParameterInfo___MovieScene_UE__6B_;
    if (((local_38 & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8 = (TComponentTypeID<FMaterialParameterInfo>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FMaterialParameterInfo>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FMaterialParameterInfo>)(*pcVar3)();
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

// NewComponentType<FMovieSceneAudioComponentData> @ 1465f0490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FMovieSceneAudioComponentData> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FMovieSceneAudioComponentData>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  TComponentTypeID<FMovieSceneAudioComponentData> TVar8;
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
  local_80 = 0x808;
  local_7e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_7e & 0x82 | 2;
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
         &___7__TComponentTypeDebugInfo_UFMovieSceneAudioComponentData___MovieScene_UE__6B_;
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct FMovieSceneAudioComponentData";
  local_7e = local_7e | 0x40;
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar10 = ::operator_new(8);
    if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMovieSceneAudioComponentData___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFMovieSceneAudioComponentData___FComponentTypeInfo_MovieScene_UE__6B_
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
               ___7__TDuplicateChildEntityInitializer_UFMovieSceneAudioComponentData___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8 = (TComponentTypeID<FMovieSceneAudioComponentData>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FMovieSceneAudioComponentData>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FMovieSceneAudioComponentData>)(*pcVar3)();
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

// NewComponentType<FMovieSceneAudioInputData> @ 1465f0740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FMovieSceneAudioInputData> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FMovieSceneAudioInputData>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  TComponentTypeID<FMovieSceneAudioInputData> TVar8;
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
  local_80 = 0x460;
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
         (longlong)&___7__TComponentTypeDebugInfo_UFMovieSceneAudioInputData___MovieScene_UE__6B_;
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct FMovieSceneAudioInputData";
  local_7e = local_7e | 0x40;
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar10 = ::operator_new(8);
    if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMovieSceneAudioInputData___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFMovieSceneAudioInputData___FComponentTypeInfo_MovieScene_UE__6B_
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
               ___7__TDuplicateChildEntityInitializer_UFMovieSceneAudioInputData___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8 = (TComponentTypeID<FMovieSceneAudioInputData>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FMovieSceneAudioInputData>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FMovieSceneAudioInputData>)(*pcVar3)();
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

// NewComponentType<FMovieSceneCameraShakeComponentData> @ 1465f09f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FMovieSceneCameraShakeComponentData> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FMovieSceneCameraShakeComponentData>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  TComponentTypeID<FMovieSceneCameraShakeComponentData> TVar8;
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
  local_80 = 0x840;
  local_7e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_7e & 0x82 | 2;
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
         &___7__TComponentTypeDebugInfo_UFMovieSceneCameraShakeComponentData___MovieScene_UE__6B_;
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct FMovieSceneCameraShakeComponentData";
  local_7e = local_7e | 0x40;
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar10 = ::operator_new(8);
    if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMovieSceneCameraShakeComponentData___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFMovieSceneCameraShakeComponentData___FComponentTypeInfo_MovieScene_UE__6B_
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
               ___7__TDuplicateChildEntityInitializer_UFMovieSceneCameraShakeComponentData___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8 = (TComponentTypeID<FMovieSceneCameraShakeComponentData>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FMovieSceneCameraShakeComponentData>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FMovieSceneCameraShakeComponentData>)(*pcVar3)();
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

// NewComponentType<FMovieSceneCameraShakeInstanceData> @ 1465f0ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FMovieSceneCameraShakeInstanceData> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FMovieSceneCameraShakeInstanceData>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  TComponentTypeID<FMovieSceneCameraShakeInstanceData> TVar8;
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
  local_80 = 0x820;
  local_7e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_7e & 0x82 | 2;
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
         &___7__TComponentTypeDebugInfo_UFMovieSceneCameraShakeInstanceData___MovieScene_UE__6B_;
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct FMovieSceneCameraShakeInstanceData";
  local_7e = local_7e | 0x40;
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar10 = ::operator_new(8);
    if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMovieSceneCameraShakeInstanceData___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFMovieSceneCameraShakeInstanceData___FComponentTypeInfo_MovieScene_UE__6B_
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
               ___7__TDuplicateChildEntityInitializer_UFMovieSceneCameraShakeInstanceData___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8 = (TComponentTypeID<FMovieSceneCameraShakeInstanceData>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FMovieSceneCameraShakeInstanceData>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FMovieSceneCameraShakeInstanceData>)(*pcVar3)();
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

// NewComponentType<FMovieSceneDataLayerComponentData> @ 1465f0f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FMovieSceneDataLayerComponentData> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FMovieSceneDataLayerComponentData>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  TComponentTypeID<FMovieSceneDataLayerComponentData> TVar8;
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
  local_80 = 0x808;
  local_7e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_7e & 0x82 | 2;
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
         &___7__TComponentTypeDebugInfo_UFMovieSceneDataLayerComponentData___MovieScene_UE__6B_;
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct FMovieSceneDataLayerComponentData";
  local_7e = local_7e | 0x40;
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar10 = ::operator_new(8);
    if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMovieSceneDataLayerComponentData___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFMovieSceneDataLayerComponentData___FComponentTypeInfo_MovieScene_UE__6B_
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
               ___7__TDuplicateChildEntityInitializer_UFMovieSceneDataLayerComponentData___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8 = (TComponentTypeID<FMovieSceneDataLayerComponentData>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FMovieSceneDataLayerComponentData>)(*pcVar3)();
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
      TVar8 = (TComponentTypeID<FMovieSceneDataLayerComponentData>)(*pcVar3)();
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

// NewComponentType<FMovieSceneObjectBindingID> @ 1465f1200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FMovieSceneObjectBindingID> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FMovieSceneObjectBindingID>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  FComponentTypeDebugInfo *pFVar7;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar8;
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
  local_90 = 0x418;
  local_8e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_8e & 0x86 | 6;
  local_a8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  puStack_98 = (undefined8 *)0x0;
  puVar6 = ::operator_new(0x20);
  puVar5 = puStack_98;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = 0;
    *puVar6 = &___7__TComponentTypeDebugInfo_UFMovieSceneObjectBindingID___MovieScene_UE__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
  }
  if (puStack_98 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puStack_98;
    puStack_98 = puVar6;
    (*(code *)*puVar1)(puVar5,1);
    puVar6 = puStack_98;
  }
  puStack_98 = puVar6;
  ::FString::operator=((FString *)(puStack_98 + 1),(wchar_t *)param_2);
  puStack_98[3] = L"struct FMovieSceneObjectBindingID";
  local_8e = local_8e | 0x40;
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar7 = ::operator_new(8);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMovieSceneObjectBindingID___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1465f130d;
    }
  }
  else {
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar7->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFMovieSceneObjectBindingID___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1465f130d;
    }
  }
  pFVar7 = (FComponentTypeDebugInfo *)0x0;
LAB_1465f130d:
  uVar4 = local_a8._8_8_;
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    plVar3 = (longlong *)local_a8._8_8_;
    local_a8._8_8_ = pFVar7;
    (**(code **)*plVar3)(uVar4,1);
    pFVar7 = (FComponentTypeDebugInfo *)local_a8._8_8_;
  }
  local_a8._8_8_ = pFVar7;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = &
               ___7__TDuplicateChildEntityInitializer_UFMovieSceneObjectBindingID___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneObjectBindingID>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78,
               (TDuplicateChildEntityInitializer<FMovieSceneObjectBindingID> *)&local_88);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78);
    if ((local_38 & 1) != 0) {
      pTVar8 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78;
      if ((local_38 & 2) == 0) {
        pTVar8 = local_78[0];
      }
      local_38 = local_38 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
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

// NewComponentType<FMovieSceneSkeletalAnimationComponentData> @ 1465f13f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FMovieSceneSkeletalAnimationComponentData>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  FComponentTypeDebugInfo *pFVar7;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar8;
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
             local_8e & 0x82 | 2;
  local_a8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  puStack_98 = (undefined8 *)0x0;
  puVar6 = ::operator_new(0x20);
  puVar5 = puStack_98;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = 0;
    *puVar6 = &
              ___7__TComponentTypeDebugInfo_UFMovieSceneSkeletalAnimationComponentData___MovieScene_UE__6B_
    ;
    puVar6[2] = 0;
    puVar6[3] = 0;
  }
  if (puStack_98 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puStack_98;
    puStack_98 = puVar6;
    (*(code *)*puVar1)(puVar5,1);
    puVar6 = puStack_98;
  }
  puStack_98 = puVar6;
  ::FString::operator=((FString *)(puStack_98 + 1),(wchar_t *)param_2);
  puStack_98[3] = L"struct FMovieSceneSkeletalAnimationComponentData";
  local_8e = local_8e | 0x40;
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar7 = ::operator_new(8);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMovieSceneSkeletalAnimationComponentData___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1465f14fd;
    }
  }
  else {
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar7->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFMovieSceneSkeletalAnimationComponentData___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1465f14fd;
    }
  }
  pFVar7 = (FComponentTypeDebugInfo *)0x0;
LAB_1465f14fd:
  uVar4 = local_a8._8_8_;
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    plVar3 = (longlong *)local_a8._8_8_;
    local_a8._8_8_ = pFVar7;
    (**(code **)*plVar3)(uVar4,1);
    pFVar7 = (FComponentTypeDebugInfo *)local_a8._8_8_;
  }
  local_a8._8_8_ = pFVar7;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = &
               ___7__TDuplicateChildEntityInitializer_UFMovieSceneSkeletalAnimationComponentData___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneSkeletalAnimationComponentData>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78,
               (TDuplicateChildEntityInitializer<FMovieSceneSkeletalAnimationComponentData> *)
               &local_88);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78);
    if ((local_38 & 1) != 0) {
      pTVar8 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78;
      if ((local_38 & 2) == 0) {
        pTVar8 = local_78[0];
      }
      local_38 = local_38 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
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

// NewComponentType<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata> @ 1465f15e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata> __thiscall
UE::MovieScene::FComponentRegistry::
NewComponentType<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
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
  TComponentTypeID<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata> TVar9;
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
             local_7e & 0x82 | 2;
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
         ___7__TComponentTypeDebugInfo_UFObjectMetadata_FObjectPropertyTraits_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FObjectPropertyTraits::FObjectMetadata";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1465f1726;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFObjectMetadata_FObjectPropertyTraits_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFObjectMetadata_FObjectPropertyTraits_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_1465f1726:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFObjectMetadata_FObjectPropertyTraits_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>)(*pcVar3)();
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

// NewComponentType<FPerlinNoiseParams> @ 1465f18a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FPerlinNoiseParams> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FPerlinNoiseParams>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  FComponentTypeDebugInfo *pFVar7;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar8;
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
  local_90 = 0x818;
  local_8e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_8e & 0x86 | 6;
  local_a8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  puStack_98 = (undefined8 *)0x0;
  puVar6 = ::operator_new(0x20);
  puVar5 = puStack_98;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = 0;
    *puVar6 = &___7__TComponentTypeDebugInfo_UFPerlinNoiseParams___MovieScene_UE__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
  }
  if (puStack_98 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puStack_98;
    puStack_98 = puVar6;
    (*(code *)*puVar1)(puVar5,1);
    puVar6 = puStack_98;
  }
  puStack_98 = puVar6;
  ::FString::operator=((FString *)(puStack_98 + 1),(wchar_t *)param_2);
  puStack_98[3] = L"struct FPerlinNoiseParams";
  local_8e = local_8e | 0x40;
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar7 = ::operator_new(8);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      pFVar7->_padding_ =
           (longlong)
           &___7__TComplexComponentOps_UFPerlinNoiseParams___FComponentTypeInfo_MovieScene_UE__6B_;
      goto LAB_1465f19ad;
    }
  }
  else {
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar7->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFPerlinNoiseParams___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1465f19ad;
    }
  }
  pFVar7 = (FComponentTypeDebugInfo *)0x0;
LAB_1465f19ad:
  uVar4 = local_a8._8_8_;
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    plVar3 = (longlong *)local_a8._8_8_;
    local_a8._8_8_ = pFVar7;
    (**(code **)*plVar3)(uVar4,1);
    pFVar7 = (FComponentTypeDebugInfo *)local_a8._8_8_;
  }
  local_a8._8_8_ = pFVar7;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = &___7__TDuplicateChildEntityInitializer_UFPerlinNoiseParams___MovieScene_UE__6B_;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FPerlinNoiseParams>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78,
               (TDuplicateChildEntityInitializer<FPerlinNoiseParams> *)&local_88);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78);
    if ((local_38 & 1) != 0) {
      pTVar8 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78;
      if ((local_38 & 2) == 0) {
        pTVar8 = local_78[0];
      }
      local_38 = local_38 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
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

// NewComponentType<UE::MovieScene::FPropertyNotifyComponentData> @ 1465f1a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FPropertyNotifyComponentData>
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
  TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData> TVar9;
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
  local_80 = 0x414;
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
         ___7__TComponentTypeDebugInfo_UFPropertyNotifyComponentData_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FPropertyNotifyComponentData";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1465f1bd6;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFPropertyNotifyComponentData_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
           ___7__TComplexComponentOpsCustomRefCollection_UFPropertyNotifyComponentData_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_1465f1bd6:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFPropertyNotifyComponentData_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData>)(*pcVar3)();
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

// NewComponentType<FName> @ 1465f1d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FName> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FName>
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
  TComponentTypeID<FName> TVar9;
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
  local_80 = 0x408;
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
    pFVar10->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_VFName___MovieScene_UE__6B_;
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"class FName";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_1465f1e96;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)&___7__TComplexComponentOps_VFName___FComponentTypeInfo_MovieScene_UE__6B_;
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
           ___7__TComplexComponentOpsCustomRefCollection_VFName___FComponentTypeInfo_MovieScene_UE__6B_
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
LAB_1465f1e96:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &___7__TDuplicateChildEntityInitializer_VFName___MovieScene_UE__6B_;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<FName>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<FName>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<FName>)(*pcVar3)();
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

// NewPropertyType<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_> @ 1465f23f0

void __thiscall
UE::MovieScene::FComponentRegistry::
NewPropertyType<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
          (FComponentRegistry *this,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
          *param_1,wchar_t *param_2)

{
  FComponentTypeID FVar1;
  TComponentTypeID<unsigned_char> TVar2;
  FString *pFVar3;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  ForAnyElementType FVar4;
  wchar_t local_res10 [4];
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,L"Initial ");
  ::FString::ConcatFC(&local_28,pFVar3,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar1 = NewTag(this,local_res10,(EComponentTypeFlags)param_2);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  (param_1->PropertyTag).Value = *(ushort *)CONCAT62(extraout_var,FVar1.Value);
  local_18.Data.ArrayNum._0_1_ = 9;
  TVar2 = NewComponentType<unsigned_char>(this,local_res10,(FNewComponentTypeParams *)FVar4.Data);
  param_1->InitialValue = *(TComponentTypeID<unsigned_char> *)CONCAT62(extraout_var_00,TVar2);
  if ((FNewComponentTypeParams *)local_28.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// NewPropertyType<UE::MovieScene::TPropertyTraits<float,double,1>_> @ 1465f24b0

void __thiscall
UE::MovieScene::FComponentRegistry::
NewPropertyType<UE::MovieScene::TPropertyTraits<float,double,1>_>
          (FComponentRegistry *this,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<float,double,1>_> *param_1,
          wchar_t *param_2)

{
  FComponentTypeID FVar1;
  TComponentTypeID<double> TVar2;
  FString *pFVar3;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  ForAnyElementType FVar4;
  wchar_t local_res10 [4];
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,L"Initial ");
  ::FString::ConcatFC(&local_28,pFVar3,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar1 = NewTag(this,local_res10,(EComponentTypeFlags)param_2);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  (param_1->PropertyTag).Value = *(ushort *)CONCAT62(extraout_var,FVar1.Value);
  local_18.Data.ArrayNum._0_1_ = 9;
  TVar2 = NewComponentType<double>(this,local_res10,(FNewComponentTypeParams *)FVar4.Data);
  param_1->InitialValue = *(TComponentTypeID<double> *)CONCAT62(extraout_var_00,TVar2);
  if ((FNewComponentTypeParams *)local_28.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// NewPropertyType<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_> @ 1465f2570

void __thiscall
UE::MovieScene::FComponentRegistry::
NewPropertyType<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
          (FComponentRegistry *this,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
          *param_1,wchar_t *param_2)

{
  FComponentTypeID FVar1;
  TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> TVar2;
  FString *pFVar3;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  ForAnyElementType FVar4;
  wchar_t local_res10 [4];
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,L"Initial ");
  ::FString::ConcatFC(&local_28,pFVar3,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar1 = NewTag(this,local_res10,(EComponentTypeFlags)param_2);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  (param_1->PropertyTag).Value = *(ushort *)CONCAT62(extraout_var,FVar1.Value);
  local_18.Data.ArrayNum._0_1_ = 9;
  TVar2 = NewComponentType<UE::MovieScene::FIntermediate3DTransform>
                    (this,local_res10,(FNewComponentTypeParams *)FVar4.Data);
  param_1->InitialValue =
       *(TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> *)
        CONCAT62(extraout_var_00,TVar2);
  if ((FNewComponentTypeParams *)local_28.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// NewPropertyType<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_> @ 1465f2630

void __thiscall
UE::MovieScene::FComponentRegistry::
NewPropertyType<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
          (FComponentRegistry *this,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
          *param_1,wchar_t *param_2)

{
  FComponentTypeID FVar1;
  TComponentTypeID<UE::MovieScene::FIntermediateColor> TVar2;
  FString *pFVar3;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  ForAnyElementType FVar4;
  wchar_t local_res10 [4];
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,L"Initial ");
  ::FString::ConcatFC(&local_28,pFVar3,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar1 = NewTag(this,local_res10,(EComponentTypeFlags)param_2);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  (param_1->PropertyTag).Value = *(ushort *)CONCAT62(extraout_var,FVar1.Value);
  local_18.Data.ArrayNum._0_1_ = 9;
  TVar2 = NewComponentType<UE::MovieScene::FIntermediateColor>
                    (this,local_res10,(FNewComponentTypeParams *)FVar4.Data);
  param_1->InitialValue =
       *(TComponentTypeID<UE::MovieScene::FIntermediateColor> *)CONCAT62(extraout_var_00,TVar2);
  if ((FNewComponentTypeParams *)local_28.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

