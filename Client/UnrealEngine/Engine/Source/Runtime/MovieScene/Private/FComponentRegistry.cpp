// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 98

// MakeComponentTypeInfoWithoutComponentOps<unsigned_char> @ 14607e380

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<unsigned_char>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x01';
  __return_storage_ptr__->Alignment = '\x01';
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
    pFVar5->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_E_MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"unsigned char";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<short> @ 14607e460

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<short>
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
  __return_storage_ptr__->Alignment = '\x02';
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
    pFVar5->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_F_MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"short";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<unsigned_short> @ 14607e540

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<unsigned_short>
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
  __return_storage_ptr__->Alignment = '\x02';
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
    pFVar5->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_G_MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"unsigned short";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<int> @ 14607e620

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<int>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x04';
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
    pFVar5->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_H_MovieScene_UE__6B_;
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
       `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<int>(void)'::__l2::Result.Array;
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<double> @ 14607e700

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<double>
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
    pFVar5->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_N_MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"double";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UObject_*_(__cdecl*)(UObject_*)> @ 14607e7e0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UObject_*_(__cdecl*)(UObject_*)>
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
         (longlong)&___7__TComponentTypeDebugInfo_P6APEAVUObject__PEAV1__Z_MovieScene_UE__6B_;
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
       L"class UObject*(__cdecl *)(class UObject *)";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UObject_*> @ 14607e8c0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<UObject_*>
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
    pFVar5->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_PEAVUObject___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"class UObject*";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<TObjectPtr<UMovieSceneCondition_const_>_> @ 14607e9a0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<TObjectPtr<UMovieSceneCondition_const_>_>
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
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
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
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\x01';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\x01';
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
         ___7__TComponentTypeDebugInfo_U__TObjectPtr___CBVUMovieSceneCondition_____MovieScene_UE__6B_
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
       L"struct TObjectPtr<class UMovieSceneCondition const >";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::Interpolation::FCachedInterpolation> @ 14607ea80

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::Interpolation::FCachedInterpolation>
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
         ___7__TComponentTypeDebugInfo_UFCachedInterpolation_Interpolation_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::Interpolation::FCachedInterpolation";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FCustomPropertyIndex> @ 14607eb60

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FCustomPropertyIndex>
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
         &___7__TComponentTypeDebugInfo_UFCustomPropertyIndex_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FCustomPropertyIndex";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FEasingComponentData> @ 14607ec40

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<FEasingComponentData>
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
         (longlong)&___7__TComponentTypeDebugInfo_UFEasingComponentData___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FEasingComponentData";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FEntityGroupID> @ 14607ed20

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FEntityGroupID>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\f';
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
         (longlong)&___7__TComponentTypeDebugInfo_UFEntityGroupID_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FEntityGroupID";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FEvaluationHookFlags> @ 14607ee00

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FEvaluationHookFlags>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x01';
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
         &___7__TComponentTypeDebugInfo_UFEvaluationHookFlags_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FEvaluationHookFlags";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FFrameTime> @ 14607eee0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<FFrameTime>
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
    pFVar5->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_UFFrameTime___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FFrameTime";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FGuid> @ 14607efc0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<FGuid>
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
    pFVar5->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_UFGuid___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FGuid";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FHierarchicalBlendTarget> @ 14607f0a0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FHierarchicalBlendTarget>
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
         &___7__TComponentTypeDebugInfo_UFHierarchicalBlendTarget_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FHierarchicalBlendTarget";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FInitialValueIndex> @ 14607f180

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FInitialValueIndex>
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
         &___7__TComponentTypeDebugInfo_UFInitialValueIndex_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FInitialValueIndex";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FInstanceHandle> @ 14607f260

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FInstanceHandle>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x04';
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
         &___7__TComponentTypeDebugInfo_UFInstanceHandle_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FInstanceHandle";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FInterrogationInstance> @ 14607f340

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FInterrogationInstance>
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
         &___7__TComponentTypeDebugInfo_UFInterrogationInstance_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FInterrogationInstance";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FInterrogationKey> @ 14607f420

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FInterrogationKey>
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
         &___7__TComponentTypeDebugInfo_UFInterrogationKey_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FInterrogationKey";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> @ 14607f500

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x01';
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
         ___7__TComponentTypeDebugInfo_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FMovieSceneBindingLifetimeComponentData";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FMovieSceneBlendChannelID> @ 14607f5e0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FMovieSceneBlendChannelID>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x04';
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
         (longlong)&___7__TComponentTypeDebugInfo_UFMovieSceneBlendChannelID___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FMovieSceneBlendChannelID";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FMovieSceneEntityID> @ 14607f6c0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FMovieSceneEntityID>
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
         &___7__TComponentTypeDebugInfo_UFMovieSceneEntityID_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FMovieSceneEntityID";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FMovieSceneEvaluationHookComponent> @ 14607f7a0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FMovieSceneEvaluationHookComponent>
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
         &___7__TComponentTypeDebugInfo_UFMovieSceneEvaluationHookComponent___MovieScene_UE__6B_;
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
       L"struct FMovieSceneEvaluationHookComponent";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FMovieScenePropertyBinding> @ 14607f880

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FMovieScenePropertyBinding>
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
         (longlong)&___7__TComponentTypeDebugInfo_UFMovieScenePropertyBinding___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FMovieScenePropertyBinding";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FMovieSceneSequenceID> @ 14607f960

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<FMovieSceneSequenceID>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x04';
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
         (longlong)&___7__TComponentTypeDebugInfo_UFMovieSceneSequenceID___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FMovieSceneSequenceID";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FMovieSceneTrackInstanceComponent> @ 14607fa40

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FMovieSceneTrackInstanceComponent>
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
         &___7__TComponentTypeDebugInfo_UFMovieSceneTrackInstanceComponent___MovieScene_UE__6B_;
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
       L"struct FMovieSceneTrackInstanceComponent";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FObjectComponent> @ 14607fb20

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FObjectComponent>
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
         &___7__TComponentTypeDebugInfo_UFObjectComponent_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FObjectComponent";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FObjectKey> @ 14607fc00

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<FObjectKey>
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
    pFVar5->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_UFObjectKey___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FObjectKey";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FRootInstanceHandle> @ 14607fce0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FRootInstanceHandle>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x04';
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
         &___7__TComponentTypeDebugInfo_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FRootInstanceHandle";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceBoolChannel> @ 14607fdc0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceBoolChannel>
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
         &___7__TComponentTypeDebugInfo_UFSourceBoolChannel_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FSourceBoolChannel";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceByteChannel> @ 14607fea0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceByteChannel>
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
         &___7__TComponentTypeDebugInfo_UFSourceByteChannel_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FSourceByteChannel";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceDoubleChannel> @ 14607ff80

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceDoubleChannel>
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
         &___7__TComponentTypeDebugInfo_UFSourceDoubleChannel_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FSourceDoubleChannel";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceFloatChannel> @ 146080060

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceFloatChannel>
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
         &___7__TComponentTypeDebugInfo_UFSourceFloatChannel_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FSourceFloatChannel";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceIntegerChannel> @ 146080140

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceIntegerChannel>
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
         &___7__TComponentTypeDebugInfo_UFSourceIntegerChannel_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FSourceIntegerChannel";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceObjectPathChannel> @ 146080220

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceObjectPathChannel>
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
         &___7__TComponentTypeDebugInfo_UFSourceObjectPathChannel_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FSourceObjectPathChannel";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceStringChannel> @ 146080300

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceStringChannel>
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
         &___7__TComponentTypeDebugInfo_UFSourceStringChannel_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FSourceStringChannel";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceTextChannel> @ 1460803e0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FSourceTextChannel>
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
         &___7__TComponentTypeDebugInfo_UFSourceTextChannel_MovieScene_UE___MovieScene_UE__6B_;
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
       L"struct UE::MovieScene::FSourceTextChannel";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FTrackInstanceInputComponent> @ 1460804c0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<FTrackInstanceInputComponent>
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
         (longlong)&___7__TComponentTypeDebugInfo_UFTrackInstanceInputComponent___MovieScene_UE__6B_
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FTrackInstanceInputComponent";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FVariantPropertyTypeIndex> @ 1460805a0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<UE::MovieScene::FVariantPropertyTypeIndex>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x01';
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
         ___7__TComponentTypeDebugInfo_UFVariantPropertyTypeIndex_MovieScene_UE___MovieScene_UE__6B_
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
       L"struct UE::MovieScene::FVariantPropertyTypeIndex";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<TSharedPtr<FTrackInstancePropertyBindings,1>_> @ 146080680

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<TSharedPtr<FTrackInstancePropertyBindings,1>_>
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
  __return_storage_ptr__->bIsZeroConstructType = '\x01';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = '\0';
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\0';
  (__return_storage_ptr__->ComplexComponentOps).Ptr = (IComplexComponentOps *)0x0;
  (__return_storage_ptr__->DebugInfo).Ptr = (FComponentTypeDebugInfo *)0x0;
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\x01';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = EVar4;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\0';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\x01';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\0';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\x01';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = EVar4 >> 3;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\0';
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar5->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5->_padding_ =
         (longlong)
         &
         ___7__TComponentTypeDebugInfo_V__TSharedPtr_VFTrackInstancePropertyBindings___00___MovieScene_UE__6B_
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
       L"class TSharedPtr<class FTrackInstancePropertyBindings,1>";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<TSubclassOf<UMovieSceneBlenderSystem>_> @ 146080760

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::
MakeComponentTypeInfoWithoutComponentOps<TSubclassOf<UMovieSceneBlenderSystem>_>
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
         ___7__TComponentTypeDebugInfo_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__6B_
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
       L"class TSubclassOf<class UMovieSceneBlenderSystem>";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FString> @ 146080840

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<FString>
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
  __return_storage_ptr__->bIsZeroConstructType = '\x01';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = '\0';
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\0';
  (__return_storage_ptr__->ComplexComponentOps).Ptr = (IComplexComponentOps *)0x0;
  (__return_storage_ptr__->DebugInfo).Ptr = (FComponentTypeDebugInfo *)0x0;
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\x01';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = EVar4;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\0';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\x01';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\0';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\x01';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = EVar4 >> 3;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\0';
  __return_storage_ptr__->bIsTriviallyDestructable = '\0';
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar5->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_VFString___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"class FString";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<FText> @ 146080920

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<FText>
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
    pFVar5->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_VFText___MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"class FText";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<__int64> @ 146080a00

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<__int64>
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
    pFVar5->_padding_ = (longlong)&___7__TComponentTypeDebugInfo__J_MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"__int64";
  return __return_storage_ptr__;
}

// MakeComponentTypeInfoWithoutComponentOps<bool> @ 146080ae0

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<bool>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x01';
  __return_storage_ptr__->Alignment = '\x01';
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
    pFVar5->_padding_ = (longlong)&___7__TComponentTypeDebugInfo__N_MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"bool";
  return __return_storage_ptr__;
}

// NewComponentType<unsigned_char> @ 146081e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<unsigned_char> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<unsigned_char>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  FComponentTypeDebugInfo *pFVar4;
  FComponentTypeDebugInfo *pFVar5;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar6;
  longlong *in_R9;
  FComponentTypeDebugInfo *pFVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x101;
  pFVar7 = (FComponentTypeDebugInfo *)0x0;
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  pFVar4 = ::operator_new(0x20);
  pFVar5 = pFVar7;
  if (pFVar4 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar4->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->DebugName).Data.ArrayNum = 0;
    (pFVar4->DebugName).Data.ArrayMax = 0;
    pFVar4->DebugTypeName = (wchar_t *)0x0;
    pFVar4->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_E_MovieScene_UE__6B_;
    pFVar5 = pFVar4;
  }
  local_b8._16_8_ = pFVar5;
  ::FString::operator=(&pFVar5->DebugName,(wchar_t *)param_2);
  pFVar5->DebugTypeName = L"unsigned char";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 7;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x47;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    if ((bVar3 != 7) &&
       (pFVar5 = ::operator_new(8), local_b8._8_8_ = pFVar7,
       pFVar5 != (FComponentTypeDebugInfo *)0x0)) {
      pFVar5->_padding_ =
           (longlong)&___7__TComplexComponentOps_E_FComponentTypeInfo_MovieScene_UE__6B_;
      local_b8._8_8_ = pFVar5;
    }
  }
  else {
    pFVar5 = ::operator_new(0x10);
    local_b8._8_8_ = pFVar7;
    if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar5->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar5->_padding_ =
           (longlong)
           &___7__TComplexComponentOpsCustomRefCollection_E_FComponentTypeInfo_MovieScene_UE__6B_;
      local_b8._8_8_ = pFVar5;
    }
  }
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &___7__TDuplicateChildEntityInitializer_E_MovieScene_UE__6B_;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<unsigned_char>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<unsigned_char> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar6 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar6 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar6->Data).Pad)->Data).Pad)(pTVar6,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_b8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<short> @ 146082000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<short> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<short>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  FComponentTypeDebugInfo *pFVar4;
  FComponentTypeDebugInfo *pFVar5;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar6;
  longlong *in_R9;
  FComponentTypeDebugInfo *pFVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x202;
  pFVar7 = (FComponentTypeDebugInfo *)0x0;
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  pFVar4 = ::operator_new(0x20);
  pFVar5 = pFVar7;
  if (pFVar4 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar4->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->DebugName).Data.ArrayNum = 0;
    (pFVar4->DebugName).Data.ArrayMax = 0;
    pFVar4->DebugTypeName = (wchar_t *)0x0;
    pFVar4->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_F_MovieScene_UE__6B_;
    pFVar5 = pFVar4;
  }
  local_b8._16_8_ = pFVar5;
  ::FString::operator=(&pFVar5->DebugName,(wchar_t *)param_2);
  pFVar5->DebugTypeName = L"short";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 7;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x47;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    if ((bVar3 != 7) &&
       (pFVar5 = ::operator_new(8), local_b8._8_8_ = pFVar7,
       pFVar5 != (FComponentTypeDebugInfo *)0x0)) {
      pFVar5->_padding_ =
           (longlong)&___7__TComplexComponentOps_F_FComponentTypeInfo_MovieScene_UE__6B_;
      local_b8._8_8_ = pFVar5;
    }
  }
  else {
    pFVar5 = ::operator_new(0x10);
    local_b8._8_8_ = pFVar7;
    if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar5->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar5->_padding_ =
           (longlong)
           &___7__TComplexComponentOpsCustomRefCollection_F_FComponentTypeInfo_MovieScene_UE__6B_;
      local_b8._8_8_ = pFVar5;
    }
  }
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &___7__TDuplicateChildEntityInitializer_F_MovieScene_UE__6B_;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<short>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<short> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar6 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar6 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar6->Data).Pad)->Data).Pad)(pTVar6,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_b8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<unsigned_short> @ 1460821e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<unsigned_short> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<unsigned_short>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  FComponentTypeDebugInfo *pFVar4;
  FComponentTypeDebugInfo *pFVar5;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar6;
  longlong *in_R9;
  FComponentTypeDebugInfo *pFVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x202;
  pFVar7 = (FComponentTypeDebugInfo *)0x0;
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  pFVar4 = ::operator_new(0x20);
  pFVar5 = pFVar7;
  if (pFVar4 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar4->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->DebugName).Data.ArrayNum = 0;
    (pFVar4->DebugName).Data.ArrayMax = 0;
    pFVar4->DebugTypeName = (wchar_t *)0x0;
    pFVar4->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_G_MovieScene_UE__6B_;
    pFVar5 = pFVar4;
  }
  local_b8._16_8_ = pFVar5;
  ::FString::operator=(&pFVar5->DebugName,(wchar_t *)param_2);
  pFVar5->DebugTypeName = L"unsigned short";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 7;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x47;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    if ((bVar3 != 7) &&
       (pFVar5 = ::operator_new(8), local_b8._8_8_ = pFVar7,
       pFVar5 != (FComponentTypeDebugInfo *)0x0)) {
      pFVar5->_padding_ =
           (longlong)&___7__TComplexComponentOps_G_FComponentTypeInfo_MovieScene_UE__6B_;
      local_b8._8_8_ = pFVar5;
    }
  }
  else {
    pFVar5 = ::operator_new(0x10);
    local_b8._8_8_ = pFVar7;
    if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar5->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar5->_padding_ =
           (longlong)
           &___7__TComplexComponentOpsCustomRefCollection_G_FComponentTypeInfo_MovieScene_UE__6B_;
      local_b8._8_8_ = pFVar5;
    }
  }
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &___7__TDuplicateChildEntityInitializer_G_MovieScene_UE__6B_;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<unsigned_short>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<unsigned_short> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar6 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar6 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar6->Data).Pad)->Data).Pad)(pTVar6,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_b8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<int> @ 1460823c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<int> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<int>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  FComponentTypeDebugInfo *pFVar4;
  FComponentTypeDebugInfo *pFVar5;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar6;
  longlong *in_R9;
  FComponentTypeDebugInfo *pFVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x404;
  pFVar7 = (FComponentTypeDebugInfo *)0x0;
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  pFVar4 = ::operator_new(0x20);
  pFVar5 = pFVar7;
  if (pFVar4 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar4->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->DebugName).Data.ArrayNum = 0;
    (pFVar4->DebugName).Data.ArrayMax = 0;
    pFVar4->DebugTypeName = (wchar_t *)0x0;
    pFVar4->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_H_MovieScene_UE__6B_;
    pFVar5 = pFVar4;
  }
  local_b8._16_8_ = pFVar5;
  ::FString::operator=(&pFVar5->DebugName,(wchar_t *)param_2);
  pFVar5->DebugTypeName =
       `wchar_t_const*___ptr64___cdecl_GetGeneratedTypeName<int>(void)'::__l2::Result.Array;
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 7;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x47;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    if ((bVar3 != 7) &&
       (pFVar5 = ::operator_new(8), local_b8._8_8_ = pFVar7,
       pFVar5 != (FComponentTypeDebugInfo *)0x0)) {
      pFVar5->_padding_ =
           (longlong)&___7__TComplexComponentOps_H_FComponentTypeInfo_MovieScene_UE__6B_;
      local_b8._8_8_ = pFVar5;
    }
  }
  else {
    pFVar5 = ::operator_new(0x10);
    local_b8._8_8_ = pFVar7;
    if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar5->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar5->_padding_ =
           (longlong)
           &___7__TComplexComponentOpsCustomRefCollection_H_FComponentTypeInfo_MovieScene_UE__6B_;
      local_b8._8_8_ = pFVar5;
    }
  }
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &___7__TDuplicateChildEntityInitializer_H_MovieScene_UE__6B_;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<int>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<int> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar6 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar6 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar6->Data).Pad)->Data).Pad)(pTVar6,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_b8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<double> @ 1460825a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<double> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<double>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  FComponentTypeDebugInfo *pFVar4;
  FComponentTypeDebugInfo *pFVar5;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar6;
  longlong *in_R9;
  FComponentTypeDebugInfo *pFVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x808;
  pFVar7 = (FComponentTypeDebugInfo *)0x0;
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  pFVar4 = ::operator_new(0x20);
  pFVar5 = pFVar7;
  if (pFVar4 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar4->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->DebugName).Data.ArrayNum = 0;
    (pFVar4->DebugName).Data.ArrayMax = 0;
    pFVar4->DebugTypeName = (wchar_t *)0x0;
    pFVar4->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_N_MovieScene_UE__6B_;
    pFVar5 = pFVar4;
  }
  local_b8._16_8_ = pFVar5;
  ::FString::operator=(&pFVar5->DebugName,(wchar_t *)param_2);
  pFVar5->DebugTypeName = L"double";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 7;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x47;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    if ((bVar3 != 7) &&
       (pFVar5 = ::operator_new(8), local_b8._8_8_ = pFVar7,
       pFVar5 != (FComponentTypeDebugInfo *)0x0)) {
      pFVar5->_padding_ =
           (longlong)&___7__TComplexComponentOps_N_FComponentTypeInfo_MovieScene_UE__6B_;
      local_b8._8_8_ = pFVar5;
    }
  }
  else {
    pFVar5 = ::operator_new(0x10);
    local_b8._8_8_ = pFVar7;
    if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar5->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar5->_padding_ =
           (longlong)
           &___7__TComplexComponentOpsCustomRefCollection_N_FComponentTypeInfo_MovieScene_UE__6B_;
      local_b8._8_8_ = pFVar5;
    }
  }
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &___7__TDuplicateChildEntityInitializer_N_MovieScene_UE__6B_;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<double>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<double> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar6 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar6 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar6->Data).Pad)->Data).Pad)(pTVar6,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_b8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UObject_*_(__cdecl*)(UObject_*)> @ 146082780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UObject_*_(__cdecl*)(UObject_*)>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)> TVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  longlong *in_R9;
  FComponentTypeDebugInfo *pFVar11;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x808;
  pFVar11 = (FComponentTypeDebugInfo *)0x0;
  local_a8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  pFVar7 = ::operator_new(0x20);
  pFVar8 = pFVar11;
  if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar7->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DebugName).Data.ArrayNum = 0;
    (pFVar7->DebugName).Data.ArrayMax = 0;
    pFVar7->DebugTypeName = (wchar_t *)0x0;
    pFVar7->_padding_ =
         (longlong)&___7__TComponentTypeDebugInfo_P6APEAVUObject__PEAV1__Z_MovieScene_UE__6B_;
    pFVar8 = pFVar7;
  }
  local_a8._16_8_ = pFVar8;
  ::FString::operator=(&pFVar8->DebugName,(wchar_t *)param_2);
  pFVar8->DebugTypeName = L"class UObject*(__cdecl *)(class UObject *)";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar4 = 7;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar4 = 0x47;
  }
  local_8e = bVar4 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    if ((bVar4 != 7) &&
       (pFVar8 = ::operator_new(8), local_a8._8_8_ = pFVar11,
       pFVar8 != (FComponentTypeDebugInfo *)0x0)) {
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_P6APEAVUObject__PEAV1__Z_FComponentTypeInfo_MovieScene_UE__6B_
      ;
      local_a8._8_8_ = pFVar8;
    }
  }
  else {
    pFVar8 = ::operator_new(0x10);
    local_a8._8_8_ = pFVar11;
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_P6APEAVUObject__PEAV1__Z_FComponentTypeInfo_MovieScene_UE__6B_
      ;
      local_a8._8_8_ = pFVar8;
    }
  }
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &___7__TDuplicateChildEntityInitializer_P6APEAVUObject__PEAV1__Z_MovieScene_UE__6B_;
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)>)(*pcVar3)();
      return TVar6;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)>)(*pcVar3)();
      return TVar6;
    }
    pTVar9 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar9 = local_88;
    }
    if ((pTVar10 != pTVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)>)(*pcVar3)();
      return TVar6;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar10 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar10->Data).Pad)->Data).Pad)(pTVar10,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<TObjectPtr<UMovieSceneCondition_const_>_> @ 146082a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<TObjectPtr<UMovieSceneCondition_const_>_> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<TObjectPtr<UMovieSceneCondition_const_>_>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TComponentTypeID<TObjectPtr<UMovieSceneCondition_const_>_> TVar5;
  FComponentTypeDebugInfo *pFVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x808;
  pFVar6 = ::operator_new(0x20);
  pFVar8 = (FComponentTypeDebugInfo *)0x0;
  pFVar7 = pFVar8;
  if (pFVar6 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar6->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->DebugName).Data.ArrayNum = 0;
    (pFVar6->DebugName).Data.ArrayMax = 0;
    pFVar6->DebugTypeName = (wchar_t *)0x0;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TComponentTypeDebugInfo_U__TObjectPtr___CBVUMovieSceneCondition_____MovieScene_UE__6B_
    ;
    pFVar7 = pFVar6;
  }
  local_a8._16_8_ = pFVar7;
  ::FString::operator=(&pFVar7->DebugName,(wchar_t *)param_2);
  local_8e = ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80 | 0x43;
  pFVar7->DebugTypeName = L"struct TObjectPtr<class UMovieSceneCondition const >";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar7 = ::operator_new(8);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_U__TObjectPtr___CBVUMovieSceneCondition_____FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar8 = pFVar7;
    }
  }
  else {
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar7->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_U__TObjectPtr___CBVUMovieSceneCondition_____FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar8 = pFVar7;
    }
  }
  local_a8._8_8_ = pFVar8;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_U__TObjectPtr___CBVUMovieSceneCondition_____MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<TObjectPtr<UMovieSceneCondition_const_>_>)(*pcVar3)();
      return TVar5;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<TObjectPtr<UMovieSceneCondition_const_>_>)(*pcVar3)();
      return TVar5;
    }
    pTVar9 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar9 = local_88;
    }
    if ((pTVar10 != pTVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<TObjectPtr<UMovieSceneCondition_const_>_>)(*pcVar3)();
      return TVar5;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar10 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar10->Data).Pad)->Data).Pad)(pTVar10,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::Interpolation::FCachedInterpolation> @ 146082c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation> __thiscall
UE::MovieScene::FComponentRegistry::
NewComponentType<UE::MovieScene::Interpolation::FCachedInterpolation>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation> TVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  FComponentTypeDebugInfo *pFVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar11;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x860;
  pFVar7 = ::operator_new(0x20);
  pFVar9 = (FComponentTypeDebugInfo *)0x0;
  pFVar8 = pFVar9;
  if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar7->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DebugName).Data.ArrayNum = 0;
    (pFVar7->DebugName).Data.ArrayMax = 0;
    pFVar7->DebugTypeName = (wchar_t *)0x0;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TComponentTypeDebugInfo_UFCachedInterpolation_Interpolation_MovieScene_UE___MovieScene_UE__6B_
    ;
    pFVar8 = pFVar7;
  }
  local_a8._16_8_ = pFVar8;
  ::FString::operator=(&pFVar8->DebugName,(wchar_t *)param_2);
  pFVar8->DebugTypeName = L"struct UE::MovieScene::Interpolation::FCachedInterpolation";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar4 = 2;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar4 = 0x42;
  }
  local_8e = bVar4 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar8 = ::operator_new(8);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFCachedInterpolation_Interpolation_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  else {
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFCachedInterpolation_Interpolation_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  local_a8._8_8_ = pFVar9;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFCachedInterpolation_Interpolation_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation>)(*pcVar3)();
      return TVar6;
    }
    pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar11 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation>)(*pcVar3)();
      return TVar6;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if ((pTVar11 != pTVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation>)(*pcVar3)();
      return TVar6;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar11 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar11->Data).Pad)->Data).Pad)(pTVar11,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FCustomPropertyIndex> @ 146082f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FCustomPropertyIndex> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FCustomPropertyIndex>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  TComponentTypeID<UE::MovieScene::FCustomPropertyIndex> TVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  FComponentTypeDebugInfo *pFVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar11;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x202;
  pFVar7 = ::operator_new(0x20);
  pFVar9 = (FComponentTypeDebugInfo *)0x0;
  pFVar8 = pFVar9;
  if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar7->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DebugName).Data.ArrayNum = 0;
    (pFVar7->DebugName).Data.ArrayMax = 0;
    pFVar7->DebugTypeName = (wchar_t *)0x0;
    pFVar7->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFCustomPropertyIndex_MovieScene_UE___MovieScene_UE__6B_;
    pFVar8 = pFVar7;
  }
  local_a8._16_8_ = pFVar8;
  ::FString::operator=(&pFVar8->DebugName,(wchar_t *)param_2);
  pFVar8->DebugTypeName = L"struct UE::MovieScene::FCustomPropertyIndex";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar4 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar4 = 0x46;
  }
  local_8e = bVar4 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar8 = ::operator_new(8);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFCustomPropertyIndex_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  else {
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFCustomPropertyIndex_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  local_a8._8_8_ = pFVar9;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFCustomPropertyIndex_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FCustomPropertyIndex>)(*pcVar3)();
      return TVar6;
    }
    pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar11 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FCustomPropertyIndex>)(*pcVar3)();
      return TVar6;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if ((pTVar11 != pTVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FCustomPropertyIndex>)(*pcVar3)();
      return TVar6;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar11 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar11->Data).Pad)->Data).Pad)(pTVar11,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<FEasingComponentData> @ 1460831d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FEasingComponentData> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FEasingComponentData>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar4;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x808;
  puVar3 = ::operator_new(0x20);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &___7__TComponentTypeDebugInfo_UFEasingComponentData___MovieScene_UE__6B_;
  }
  local_b8._16_8_ = puVar3;
  ::FString::operator=((FString *)(puVar3 + 1),(wchar_t *)param_2);
  local_9e = ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80 | 0x42;
  puVar3[3] = L"struct FEasingComponentData";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &___7__TComplexComponentOps_UFEasingComponentData___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1460832c8;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFEasingComponentData___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1460832c8;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_1460832c8:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &___7__TDuplicateChildEntityInitializer_UFEasingComponentData___MovieScene_UE__6B_;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FEasingComponentData>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<FEasingComponentData> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar4 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar4 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar4->Data).Pad)->Data).Pad)(pTVar4,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FEntityGroupID> @ 1460833a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FEntityGroupID> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FEntityGroupID>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  TComponentTypeID<UE::MovieScene::FEntityGroupID> TVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  FComponentTypeDebugInfo *pFVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar11;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x40c;
  pFVar7 = ::operator_new(0x20);
  pFVar9 = (FComponentTypeDebugInfo *)0x0;
  pFVar8 = pFVar9;
  if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar7->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DebugName).Data.ArrayNum = 0;
    (pFVar7->DebugName).Data.ArrayMax = 0;
    pFVar7->DebugTypeName = (wchar_t *)0x0;
    pFVar7->_padding_ =
         (longlong)&___7__TComponentTypeDebugInfo_UFEntityGroupID_MovieScene_UE___MovieScene_UE__6B_
    ;
    pFVar8 = pFVar7;
  }
  local_a8._16_8_ = pFVar8;
  ::FString::operator=(&pFVar8->DebugName,(wchar_t *)param_2);
  pFVar8->DebugTypeName = L"struct UE::MovieScene::FEntityGroupID";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar4 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar4 = 0x46;
  }
  local_8e = bVar4 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar8 = ::operator_new(8);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFEntityGroupID_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  else {
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFEntityGroupID_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  local_a8._8_8_ = pFVar9;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFEntityGroupID_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FEntityGroupID>)(*pcVar3)();
      return TVar6;
    }
    pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar11 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FEntityGroupID>)(*pcVar3)();
      return TVar6;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if ((pTVar11 != pTVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FEntityGroupID>)(*pcVar3)();
      return TVar6;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar11 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar11->Data).Pad)->Data).Pad)(pTVar11,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FEvaluationHookFlags> @ 146083640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FEvaluationHookFlags> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FEvaluationHookFlags>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  TComponentTypeID<UE::MovieScene::FEvaluationHookFlags> TVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  FComponentTypeDebugInfo *pFVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar11;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x101;
  pFVar7 = ::operator_new(0x20);
  pFVar9 = (FComponentTypeDebugInfo *)0x0;
  pFVar8 = pFVar9;
  if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar7->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DebugName).Data.ArrayNum = 0;
    (pFVar7->DebugName).Data.ArrayMax = 0;
    pFVar7->DebugTypeName = (wchar_t *)0x0;
    pFVar7->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFEvaluationHookFlags_MovieScene_UE___MovieScene_UE__6B_;
    pFVar8 = pFVar7;
  }
  local_a8._16_8_ = pFVar8;
  ::FString::operator=(&pFVar8->DebugName,(wchar_t *)param_2);
  pFVar8->DebugTypeName = L"struct UE::MovieScene::FEvaluationHookFlags";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar4 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar4 = 0x46;
  }
  local_8e = bVar4 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar8 = ::operator_new(8);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFEvaluationHookFlags_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  else {
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFEvaluationHookFlags_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  local_a8._8_8_ = pFVar9;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFEvaluationHookFlags_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FEvaluationHookFlags>)(*pcVar3)();
      return TVar6;
    }
    pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar11 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FEvaluationHookFlags>)(*pcVar3)();
      return TVar6;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if ((pTVar11 != pTVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FEvaluationHookFlags>)(*pcVar3)();
      return TVar6;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar11 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar11->Data).Pad)->Data).Pad)(pTVar11,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<FFrameTime> @ 1460838e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FFrameTime> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FFrameTime>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  undefined8 *puVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x408;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &___7__TComponentTypeDebugInfo_UFFrameTime___MovieScene_UE__6B_;
  }
  local_b8._16_8_ = puVar4;
  ::FString::operator=((FString *)(puVar4 + 1),(wchar_t *)param_2);
  puVar4[3] = L"struct FFrameTime";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x46;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)&___7__TComplexComponentOps_UFFrameTime___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1460839e8;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFFrameTime___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1460839e8;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_1460839e8:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &___7__TDuplicateChildEntityInitializer_UFFrameTime___MovieScene_UE__6B_;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FFrameTime>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<FFrameTime> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar5 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<FGuid> @ 146083ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FGuid> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FGuid>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  TComponentTypeID<FGuid> TVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  FComponentTypeDebugInfo *pFVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar11;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x410;
  pFVar7 = ::operator_new(0x20);
  pFVar9 = (FComponentTypeDebugInfo *)0x0;
  pFVar8 = pFVar9;
  if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar7->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DebugName).Data.ArrayNum = 0;
    (pFVar7->DebugName).Data.ArrayMax = 0;
    pFVar7->DebugTypeName = (wchar_t *)0x0;
    pFVar7->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_UFGuid___MovieScene_UE__6B_;
    pFVar8 = pFVar7;
  }
  local_a8._16_8_ = pFVar8;
  ::FString::operator=(&pFVar8->DebugName,(wchar_t *)param_2);
  pFVar8->DebugTypeName = L"struct FGuid";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar4 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar4 = 0x46;
  }
  local_8e = bVar4 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar8 = ::operator_new(8);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      pFVar8->_padding_ =
           (longlong)&___7__TComplexComponentOps_UFGuid___FComponentTypeInfo_MovieScene_UE__6B_;
      pFVar9 = pFVar8;
    }
  }
  else {
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFGuid___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  local_a8._8_8_ = pFVar9;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &___7__TDuplicateChildEntityInitializer_UFGuid___MovieScene_UE__6B_;
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<FGuid>)(*pcVar3)();
      return TVar6;
    }
    pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar11 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<FGuid>)(*pcVar3)();
      return TVar6;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if ((pTVar11 != pTVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<FGuid>)(*pcVar3)();
      return TVar6;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar11 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar11->Data).Pad)->Data).Pad)(pTVar11,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FHierarchicalBlendTarget> @ 146083d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FHierarchicalBlendTarget>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget> TVar5;
  FComponentTypeDebugInfo *pFVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x810;
  pFVar6 = ::operator_new(0x20);
  pFVar8 = (FComponentTypeDebugInfo *)0x0;
  pFVar7 = pFVar8;
  if (pFVar6 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar6->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->DebugName).Data.ArrayNum = 0;
    (pFVar6->DebugName).Data.ArrayMax = 0;
    pFVar6->DebugTypeName = (wchar_t *)0x0;
    pFVar6->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFHierarchicalBlendTarget_MovieScene_UE___MovieScene_UE__6B_
    ;
    pFVar7 = pFVar6;
  }
  local_a8._16_8_ = pFVar7;
  ::FString::operator=(&pFVar7->DebugName,(wchar_t *)param_2);
  pFVar7->DebugTypeName = L"struct UE::MovieScene::FHierarchicalBlendTarget";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  local_8e = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U |
             ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar7 = ::operator_new(8);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFHierarchicalBlendTarget_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar8 = pFVar7;
    }
  }
  else {
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar7->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFHierarchicalBlendTarget_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar8 = pFVar7;
    }
  }
  local_a8._8_8_ = pFVar8;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFHierarchicalBlendTarget_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget>)(*pcVar3)();
      return TVar5;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget>)(*pcVar3)();
      return TVar5;
    }
    pTVar9 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar9 = local_88;
    }
    if ((pTVar10 != pTVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget>)(*pcVar3)();
      return TVar5;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar10 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar10->Data).Pad)->Data).Pad)(pTVar10,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FInitialValueIndex> @ 146084000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FInitialValueIndex> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FInitialValueIndex>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  TComponentTypeID<UE::MovieScene::FInitialValueIndex> TVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  FComponentTypeDebugInfo *pFVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar11;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x202;
  pFVar7 = ::operator_new(0x20);
  pFVar9 = (FComponentTypeDebugInfo *)0x0;
  pFVar8 = pFVar9;
  if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar7->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DebugName).Data.ArrayNum = 0;
    (pFVar7->DebugName).Data.ArrayMax = 0;
    pFVar7->DebugTypeName = (wchar_t *)0x0;
    pFVar7->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFInitialValueIndex_MovieScene_UE___MovieScene_UE__6B_;
    pFVar8 = pFVar7;
  }
  local_a8._16_8_ = pFVar8;
  ::FString::operator=(&pFVar8->DebugName,(wchar_t *)param_2);
  pFVar8->DebugTypeName = L"struct UE::MovieScene::FInitialValueIndex";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar4 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar4 = 0x46;
  }
  local_8e = bVar4 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar8 = ::operator_new(8);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFInitialValueIndex_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  else {
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFInitialValueIndex_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  local_a8._8_8_ = pFVar9;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFInitialValueIndex_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FInitialValueIndex>)(*pcVar3)();
      return TVar6;
    }
    pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar11 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FInitialValueIndex>)(*pcVar3)();
      return TVar6;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if ((pTVar11 != pTVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FInitialValueIndex>)(*pcVar3)();
      return TVar6;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar11 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar11->Data).Pad)->Data).Pad)(pTVar11,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FInstanceHandle> @ 1460842a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FInstanceHandle> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FInstanceHandle>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  undefined8 *puVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x204;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &___7__TComponentTypeDebugInfo_UFInstanceHandle_MovieScene_UE___MovieScene_UE__6B_;
  }
  local_b8._16_8_ = puVar4;
  ::FString::operator=((FString *)(puVar4 + 1),(wchar_t *)param_2);
  puVar4[3] = L"struct UE::MovieScene::FInstanceHandle";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x46;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFInstanceHandle_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1460843a8;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFInstanceHandle_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1460843a8;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_1460843a8:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &
               ___7__TDuplicateChildEntityInitializer_UFInstanceHandle_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FInstanceHandle>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FInstanceHandle> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar5 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FInterrogationInstance> @ 146084480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FInterrogationInstance> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FInterrogationInstance>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  TComponentTypeID<UE::MovieScene::FInterrogationInstance> TVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  FComponentTypeDebugInfo *pFVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar11;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x808;
  pFVar7 = ::operator_new(0x20);
  pFVar9 = (FComponentTypeDebugInfo *)0x0;
  pFVar8 = pFVar9;
  if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar7->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DebugName).Data.ArrayNum = 0;
    (pFVar7->DebugName).Data.ArrayMax = 0;
    pFVar7->DebugTypeName = (wchar_t *)0x0;
    pFVar7->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFInterrogationInstance_MovieScene_UE___MovieScene_UE__6B_;
    pFVar8 = pFVar7;
  }
  local_a8._16_8_ = pFVar8;
  ::FString::operator=(&pFVar8->DebugName,(wchar_t *)param_2);
  pFVar8->DebugTypeName = L"struct UE::MovieScene::FInterrogationInstance";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar4 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar4 = 0x46;
  }
  local_8e = bVar4 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar8 = ::operator_new(8);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFInterrogationInstance_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  else {
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFInterrogationInstance_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  local_a8._8_8_ = pFVar9;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFInterrogationInstance_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FInterrogationInstance>)(*pcVar3)();
      return TVar6;
    }
    pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar11 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FInterrogationInstance>)(*pcVar3)();
      return TVar6;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if ((pTVar11 != pTVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FInterrogationInstance>)(*pcVar3)();
      return TVar6;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar11 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar11->Data).Pad)->Data).Pad)(pTVar11,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FInterrogationKey> @ 146084720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FInterrogationKey> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FInterrogationKey>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> TVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  FComponentTypeDebugInfo *pFVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar11;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x408;
  pFVar7 = ::operator_new(0x20);
  pFVar9 = (FComponentTypeDebugInfo *)0x0;
  pFVar8 = pFVar9;
  if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar7->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DebugName).Data.ArrayNum = 0;
    (pFVar7->DebugName).Data.ArrayMax = 0;
    pFVar7->DebugTypeName = (wchar_t *)0x0;
    pFVar7->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFInterrogationKey_MovieScene_UE___MovieScene_UE__6B_;
    pFVar8 = pFVar7;
  }
  local_a8._16_8_ = pFVar8;
  ::FString::operator=(&pFVar8->DebugName,(wchar_t *)param_2);
  pFVar8->DebugTypeName = L"struct UE::MovieScene::FInterrogationKey";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar4 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar4 = 0x46;
  }
  local_8e = bVar4 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar8 = ::operator_new(8);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFInterrogationKey_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  else {
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFInterrogationKey_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  local_a8._8_8_ = pFVar9;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFInterrogationKey_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FInterrogationKey>)(*pcVar3)();
      return TVar6;
    }
    pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar11 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FInterrogationKey>)(*pcVar3)();
      return TVar6;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if ((pTVar11 != pTVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FInterrogationKey>)(*pcVar3)();
      return TVar6;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar11 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar11->Data).Pad)->Data).Pad)(pTVar11,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> @ 1460849c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> __thiscall
UE::MovieScene::FComponentRegistry::
NewComponentType<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  undefined8 *puVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x101;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &
              ___7__TComponentTypeDebugInfo_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___MovieScene_UE__6B_
    ;
  }
  local_b8._16_8_ = puVar4;
  ::FString::operator=((FString *)(puVar4 + 1),(wchar_t *)param_2);
  puVar4[3] = L"struct UE::MovieScene::FMovieSceneBindingLifetimeComponentData";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x46;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146084ac8;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146084ac8;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_146084ac8:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &
               ___7__TDuplicateChildEntityInitializer_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>
                *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar5 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<FMovieSceneBlendChannelID> @ 146084ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FMovieSceneBlendChannelID> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FMovieSceneBlendChannelID>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  TComponentTypeID<FMovieSceneBlendChannelID> TVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  FComponentTypeDebugInfo *pFVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar11;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x204;
  pFVar7 = ::operator_new(0x20);
  pFVar9 = (FComponentTypeDebugInfo *)0x0;
  pFVar8 = pFVar9;
  if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar7->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DebugName).Data.ArrayNum = 0;
    (pFVar7->DebugName).Data.ArrayMax = 0;
    pFVar7->DebugTypeName = (wchar_t *)0x0;
    pFVar7->_padding_ =
         (longlong)&___7__TComponentTypeDebugInfo_UFMovieSceneBlendChannelID___MovieScene_UE__6B_;
    pFVar8 = pFVar7;
  }
  local_a8._16_8_ = pFVar8;
  ::FString::operator=(&pFVar8->DebugName,(wchar_t *)param_2);
  pFVar8->DebugTypeName = L"struct FMovieSceneBlendChannelID";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar4 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar4 = 0x46;
  }
  local_8e = bVar4 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar8 = ::operator_new(8);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMovieSceneBlendChannelID___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  else {
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFMovieSceneBlendChannelID___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  local_a8._8_8_ = pFVar9;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFMovieSceneBlendChannelID___MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<FMovieSceneBlendChannelID>)(*pcVar3)();
      return TVar6;
    }
    pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar11 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<FMovieSceneBlendChannelID>)(*pcVar3)();
      return TVar6;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if ((pTVar11 != pTVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<FMovieSceneBlendChannelID>)(*pcVar3)();
      return TVar6;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar11 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar11->Data).Pad)->Data).Pad)(pTVar11,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FMovieSceneEntityID> @ 146084e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FMovieSceneEntityID> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FMovieSceneEntityID>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  TComponentTypeID<UE::MovieScene::FMovieSceneEntityID> TVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  FComponentTypeDebugInfo *pFVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar11;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x202;
  pFVar7 = ::operator_new(0x20);
  pFVar9 = (FComponentTypeDebugInfo *)0x0;
  pFVar8 = pFVar9;
  if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar7->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DebugName).Data.ArrayNum = 0;
    (pFVar7->DebugName).Data.ArrayMax = 0;
    pFVar7->DebugTypeName = (wchar_t *)0x0;
    pFVar7->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFMovieSceneEntityID_MovieScene_UE___MovieScene_UE__6B_;
    pFVar8 = pFVar7;
  }
  local_a8._16_8_ = pFVar8;
  ::FString::operator=(&pFVar8->DebugName,(wchar_t *)param_2);
  pFVar8->DebugTypeName = L"struct UE::MovieScene::FMovieSceneEntityID";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar4 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar4 = 0x46;
  }
  local_8e = bVar4 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar8 = ::operator_new(8);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMovieSceneEntityID_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  else {
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFMovieSceneEntityID_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  local_a8._8_8_ = pFVar9;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFMovieSceneEntityID_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FMovieSceneEntityID>)(*pcVar3)();
      return TVar6;
    }
    pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar11 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FMovieSceneEntityID>)(*pcVar3)();
      return TVar6;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if ((pTVar11 != pTVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FMovieSceneEntityID>)(*pcVar3)();
      return TVar6;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar11 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar11->Data).Pad)->Data).Pad)(pTVar11,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<FMovieSceneEvaluationHookComponent> @ 1460850e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FMovieSceneEvaluationHookComponent> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FMovieSceneEvaluationHookComponent>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TComponentTypeID<FMovieSceneEvaluationHookComponent> TVar5;
  FComponentTypeDebugInfo *pFVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x820;
  pFVar6 = ::operator_new(0x20);
  pFVar8 = (FComponentTypeDebugInfo *)0x0;
  pFVar7 = pFVar8;
  if (pFVar6 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar6->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->DebugName).Data.ArrayNum = 0;
    (pFVar6->DebugName).Data.ArrayMax = 0;
    pFVar6->DebugTypeName = (wchar_t *)0x0;
    pFVar6->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFMovieSceneEvaluationHookComponent___MovieScene_UE__6B_;
    pFVar7 = pFVar6;
  }
  local_a8._16_8_ = pFVar7;
  ::FString::operator=(&pFVar7->DebugName,(wchar_t *)param_2);
  local_8e = ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80 | 0x42;
  pFVar7->DebugTypeName = L"struct FMovieSceneEvaluationHookComponent";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar7 = ::operator_new(8);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMovieSceneEvaluationHookComponent___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar8 = pFVar7;
    }
  }
  else {
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar7->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFMovieSceneEvaluationHookComponent___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar8 = pFVar7;
    }
  }
  local_a8._8_8_ = pFVar8;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFMovieSceneEvaluationHookComponent___MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<FMovieSceneEvaluationHookComponent>)(*pcVar3)();
      return TVar5;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<FMovieSceneEvaluationHookComponent>)(*pcVar3)();
      return TVar5;
    }
    pTVar9 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar9 = local_88;
    }
    if ((pTVar10 != pTVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<FMovieSceneEvaluationHookComponent>)(*pcVar3)();
      return TVar5;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar10 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar10->Data).Pad)->Data).Pad)(pTVar10,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<FMovieScenePropertyBinding> @ 146085370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FMovieScenePropertyBinding> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FMovieScenePropertyBinding>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar4;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x414;
  puVar3 = ::operator_new(0x20);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &___7__TComponentTypeDebugInfo_UFMovieScenePropertyBinding___MovieScene_UE__6B_;
  }
  local_b8._16_8_ = puVar3;
  ::FString::operator=((FString *)(puVar3 + 1),(wchar_t *)param_2);
  local_9e = ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80 | 0x46;
  puVar3[3] = L"struct FMovieScenePropertyBinding";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMovieScenePropertyBinding___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146085468;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFMovieScenePropertyBinding___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146085468;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_146085468:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &
               ___7__TDuplicateChildEntityInitializer_UFMovieScenePropertyBinding___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieScenePropertyBinding>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<FMovieScenePropertyBinding> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar4 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar4 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar4->Data).Pad)->Data).Pad)(pTVar4,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<FMovieSceneSequenceID> @ 146085540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FMovieSceneSequenceID> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FMovieSceneSequenceID>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar4;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x404;
  puVar3 = ::operator_new(0x20);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &___7__TComponentTypeDebugInfo_UFMovieSceneSequenceID___MovieScene_UE__6B_;
  }
  local_b8._16_8_ = puVar3;
  ::FString::operator=((FString *)(puVar3 + 1),(wchar_t *)param_2);
  local_9e = ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80 | 0x46;
  puVar3[3] = L"struct FMovieSceneSequenceID";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMovieSceneSequenceID___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146085638;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFMovieSceneSequenceID___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146085638;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_146085638:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &___7__TDuplicateChildEntityInitializer_UFMovieSceneSequenceID___MovieScene_UE__6B_;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneSequenceID>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<FMovieSceneSequenceID> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar4 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar4 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar4->Data).Pad)->Data).Pad)(pTVar4,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<FMovieSceneTrackInstanceComponent> @ 146085710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FMovieSceneTrackInstanceComponent> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FMovieSceneTrackInstanceComponent>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TComponentTypeID<FMovieSceneTrackInstanceComponent> TVar5;
  FComponentTypeDebugInfo *pFVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x810;
  pFVar6 = ::operator_new(0x20);
  pFVar8 = (FComponentTypeDebugInfo *)0x0;
  pFVar7 = pFVar8;
  if (pFVar6 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar6->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->DebugName).Data.ArrayNum = 0;
    (pFVar6->DebugName).Data.ArrayMax = 0;
    pFVar6->DebugTypeName = (wchar_t *)0x0;
    pFVar6->_padding_ =
         (longlong)
         &___7__TComponentTypeDebugInfo_UFMovieSceneTrackInstanceComponent___MovieScene_UE__6B_;
    pFVar7 = pFVar6;
  }
  local_a8._16_8_ = pFVar7;
  ::FString::operator=(&pFVar7->DebugName,(wchar_t *)param_2);
  local_8e = ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80 | 0x42;
  pFVar7->DebugTypeName = L"struct FMovieSceneTrackInstanceComponent";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar7 = ::operator_new(8);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFMovieSceneTrackInstanceComponent___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar8 = pFVar7;
    }
  }
  else {
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar7->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFMovieSceneTrackInstanceComponent___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar8 = pFVar7;
    }
  }
  local_a8._8_8_ = pFVar8;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFMovieSceneTrackInstanceComponent___MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<FMovieSceneTrackInstanceComponent>)(*pcVar3)();
      return TVar5;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<FMovieSceneTrackInstanceComponent>)(*pcVar3)();
      return TVar5;
    }
    pTVar9 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar9 = local_88;
    }
    if ((pTVar10 != pTVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<FMovieSceneTrackInstanceComponent>)(*pcVar3)();
      return TVar5;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar10 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar10->Data).Pad)->Data).Pad)(pTVar10,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FObjectComponent> @ 1460859a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FObjectComponent> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FObjectComponent>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar4;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x810;
  puVar3 = ::operator_new(0x20);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &___7__TComponentTypeDebugInfo_UFObjectComponent_MovieScene_UE___MovieScene_UE__6B_;
  }
  local_b8._16_8_ = puVar3;
  ::FString::operator=((FString *)(puVar3 + 1),(wchar_t *)param_2);
  local_9e = ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80 | 0x42;
  puVar3[3] = L"struct UE::MovieScene::FObjectComponent";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFObjectComponent_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146085a98;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFObjectComponent_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146085a98;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_146085a98:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &
               ___7__TDuplicateChildEntityInitializer_UFObjectComponent_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FObjectComponent>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FObjectComponent> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar4 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar4 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar4->Data).Pad)->Data).Pad)(pTVar4,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<FObjectKey> @ 146085b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FObjectKey> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FObjectKey>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TComponentTypeID<FObjectKey> TVar5;
  FComponentTypeDebugInfo *pFVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x408;
  pFVar6 = ::operator_new(0x20);
  pFVar8 = (FComponentTypeDebugInfo *)0x0;
  pFVar7 = pFVar8;
  if (pFVar6 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar6->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->DebugName).Data.ArrayNum = 0;
    (pFVar6->DebugName).Data.ArrayMax = 0;
    pFVar6->DebugTypeName = (wchar_t *)0x0;
    pFVar6->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_UFObjectKey___MovieScene_UE__6B_;
    pFVar7 = pFVar6;
  }
  local_a8._16_8_ = pFVar7;
  ::FString::operator=(&pFVar7->DebugName,(wchar_t *)param_2);
  local_8e = ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80 | 0x46;
  pFVar7->DebugTypeName = L"struct FObjectKey";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar7 = ::operator_new(8);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      pFVar7->_padding_ =
           (longlong)&___7__TComplexComponentOps_UFObjectKey___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar8 = pFVar7;
    }
  }
  else {
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar7->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFObjectKey___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar8 = pFVar7;
    }
  }
  local_a8._8_8_ = pFVar8;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &___7__TDuplicateChildEntityInitializer_UFObjectKey___MovieScene_UE__6B_;
    if (((local_48 & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<FObjectKey>)(*pcVar3)();
      return TVar5;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<FObjectKey>)(*pcVar3)();
      return TVar5;
    }
    pTVar9 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar9 = local_88;
    }
    if ((pTVar10 != pTVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<FObjectKey>)(*pcVar3)();
      return TVar5;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar10 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar10->Data).Pad)->Data).Pad)(pTVar10,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FRootInstanceHandle> @ 146085e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FRootInstanceHandle> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FRootInstanceHandle>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  undefined8 *puVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x204;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &___7__TComponentTypeDebugInfo_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__6B_
    ;
  }
  local_b8._16_8_ = puVar4;
  ::FString::operator=((FString *)(puVar4 + 1),(wchar_t *)param_2);
  puVar4[3] = L"struct UE::MovieScene::FRootInstanceHandle";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x46;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFRootInstanceHandle_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146085f08;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFRootInstanceHandle_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146085f08;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_146085f08:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &
               ___7__TDuplicateChildEntityInitializer_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FRootInstanceHandle>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FRootInstanceHandle> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar5 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FSourceBoolChannel> @ 146085fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FSourceBoolChannel> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FSourceBoolChannel>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  undefined8 *puVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x808;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &___7__TComponentTypeDebugInfo_UFSourceBoolChannel_MovieScene_UE___MovieScene_UE__6B_;
  }
  local_b8._16_8_ = puVar4;
  ::FString::operator=((FString *)(puVar4 + 1),(wchar_t *)param_2);
  puVar4[3] = L"struct UE::MovieScene::FSourceBoolChannel";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x46;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFSourceBoolChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1460860e8;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFSourceBoolChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1460860e8;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_1460860e8:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &
               ___7__TDuplicateChildEntityInitializer_UFSourceBoolChannel_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceBoolChannel>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceBoolChannel> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar5 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FSourceByteChannel> @ 1460861c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FSourceByteChannel> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FSourceByteChannel>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  undefined8 *puVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x808;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &___7__TComponentTypeDebugInfo_UFSourceByteChannel_MovieScene_UE___MovieScene_UE__6B_;
  }
  local_b8._16_8_ = puVar4;
  ::FString::operator=((FString *)(puVar4 + 1),(wchar_t *)param_2);
  puVar4[3] = L"struct UE::MovieScene::FSourceByteChannel";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x46;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFSourceByteChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1460862c8;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFSourceByteChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1460862c8;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_1460862c8:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &
               ___7__TDuplicateChildEntityInitializer_UFSourceByteChannel_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceByteChannel>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceByteChannel> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar5 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FSourceDoubleChannel> @ 1460863a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  undefined8 *puVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x808;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &
              ___7__TComponentTypeDebugInfo_UFSourceDoubleChannel_MovieScene_UE___MovieScene_UE__6B_
    ;
  }
  local_b8._16_8_ = puVar4;
  ::FString::operator=((FString *)(puVar4 + 1),(wchar_t *)param_2);
  puVar4[3] = L"struct UE::MovieScene::FSourceDoubleChannel";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x46;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFSourceDoubleChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1460864a8;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFSourceDoubleChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_1460864a8;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_1460864a8:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &
               ___7__TDuplicateChildEntityInitializer_UFSourceDoubleChannel_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceDoubleChannel>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceDoubleChannel> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar5 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FSourceFloatChannel> @ 146086580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FSourceFloatChannel> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FSourceFloatChannel>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  undefined8 *puVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x808;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &___7__TComponentTypeDebugInfo_UFSourceFloatChannel_MovieScene_UE___MovieScene_UE__6B_
    ;
  }
  local_b8._16_8_ = puVar4;
  ::FString::operator=((FString *)(puVar4 + 1),(wchar_t *)param_2);
  puVar4[3] = L"struct UE::MovieScene::FSourceFloatChannel";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x46;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFSourceFloatChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146086688;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFSourceFloatChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146086688;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_146086688:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &
               ___7__TDuplicateChildEntityInitializer_UFSourceFloatChannel_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceFloatChannel>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceFloatChannel> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar5 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FSourceIntegerChannel> @ 146086760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FSourceIntegerChannel> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FSourceIntegerChannel>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  undefined8 *puVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x808;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &
              ___7__TComponentTypeDebugInfo_UFSourceIntegerChannel_MovieScene_UE___MovieScene_UE__6B_
    ;
  }
  local_b8._16_8_ = puVar4;
  ::FString::operator=((FString *)(puVar4 + 1),(wchar_t *)param_2);
  puVar4[3] = L"struct UE::MovieScene::FSourceIntegerChannel";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x46;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFSourceIntegerChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146086868;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFSourceIntegerChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146086868;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_146086868:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &
               ___7__TDuplicateChildEntityInitializer_UFSourceIntegerChannel_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceIntegerChannel>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceIntegerChannel> *)&local_98)
    ;
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar5 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FSourceObjectPathChannel> @ 146086940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FSourceObjectPathChannel> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FSourceObjectPathChannel>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  undefined8 *puVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x808;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &
              ___7__TComponentTypeDebugInfo_UFSourceObjectPathChannel_MovieScene_UE___MovieScene_UE__6B_
    ;
  }
  local_b8._16_8_ = puVar4;
  ::FString::operator=((FString *)(puVar4 + 1),(wchar_t *)param_2);
  puVar4[3] = L"struct UE::MovieScene::FSourceObjectPathChannel";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x46;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFSourceObjectPathChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146086a48;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFSourceObjectPathChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146086a48;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_146086a48:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &
               ___7__TDuplicateChildEntityInitializer_UFSourceObjectPathChannel_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceObjectPathChannel>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceObjectPathChannel> *)
               &local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar5 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FSourceStringChannel> @ 146086b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FSourceStringChannel> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FSourceStringChannel>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  undefined8 *puVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x808;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &
              ___7__TComponentTypeDebugInfo_UFSourceStringChannel_MovieScene_UE___MovieScene_UE__6B_
    ;
  }
  local_b8._16_8_ = puVar4;
  ::FString::operator=((FString *)(puVar4 + 1),(wchar_t *)param_2);
  puVar4[3] = L"struct UE::MovieScene::FSourceStringChannel";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x46;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFSourceStringChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146086c28;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFSourceStringChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146086c28;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_146086c28:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &
               ___7__TDuplicateChildEntityInitializer_UFSourceStringChannel_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceStringChannel>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceStringChannel> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar5 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FSourceTextChannel> @ 146086d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FSourceTextChannel> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FSourceTextChannel>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  undefined8 *puVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x808;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &___7__TComponentTypeDebugInfo_UFSourceTextChannel_MovieScene_UE___MovieScene_UE__6B_;
  }
  local_b8._16_8_ = puVar4;
  ::FString::operator=((FString *)(puVar4 + 1),(wchar_t *)param_2);
  puVar4[3] = L"struct UE::MovieScene::FSourceTextChannel";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x46;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFSourceTextChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146086e08;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFSourceTextChannel_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146086e08;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_146086e08:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &
               ___7__TDuplicateChildEntityInitializer_UFSourceTextChannel_MovieScene_UE___MovieScene_UE__6B_
    ;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceTextChannel>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceTextChannel> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar5 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<FTrackInstanceInputComponent> @ 146086ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FTrackInstanceInputComponent> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FTrackInstanceInputComponent>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TComponentTypeID<FTrackInstanceInputComponent> TVar5;
  FComponentTypeDebugInfo *pFVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x810;
  pFVar6 = ::operator_new(0x20);
  pFVar8 = (FComponentTypeDebugInfo *)0x0;
  pFVar7 = pFVar8;
  if (pFVar6 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar6->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->DebugName).Data.ArrayNum = 0;
    (pFVar6->DebugName).Data.ArrayMax = 0;
    pFVar6->DebugTypeName = (wchar_t *)0x0;
    pFVar6->_padding_ =
         (longlong)&___7__TComponentTypeDebugInfo_UFTrackInstanceInputComponent___MovieScene_UE__6B_
    ;
    pFVar7 = pFVar6;
  }
  local_a8._16_8_ = pFVar7;
  ::FString::operator=(&pFVar7->DebugName,(wchar_t *)param_2);
  local_8e = ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80 | 0x42;
  pFVar7->DebugTypeName = L"struct FTrackInstanceInputComponent";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar7 = ::operator_new(8);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFTrackInstanceInputComponent___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar8 = pFVar7;
    }
  }
  else {
    pFVar7 = ::operator_new(0x10);
    if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar7->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFTrackInstanceInputComponent___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar8 = pFVar7;
    }
  }
  local_a8._8_8_ = pFVar8;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFTrackInstanceInputComponent___MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<FTrackInstanceInputComponent>)(*pcVar3)();
      return TVar5;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<FTrackInstanceInputComponent>)(*pcVar3)();
      return TVar5;
    }
    pTVar9 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar9 = local_88;
    }
    if ((pTVar10 != pTVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TComponentTypeID<FTrackInstanceInputComponent>)(*pcVar3)();
      return TVar5;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar10 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar10->Data).Pad)->Data).Pad)(pTVar10,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<UE::MovieScene::FVariantPropertyTypeIndex> @ 146087170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<UE::MovieScene::FVariantPropertyTypeIndex>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex> TVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  FComponentTypeDebugInfo *pFVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar11;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x101;
  pFVar7 = ::operator_new(0x20);
  pFVar9 = (FComponentTypeDebugInfo *)0x0;
  pFVar8 = pFVar9;
  if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar7->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DebugName).Data.ArrayNum = 0;
    (pFVar7->DebugName).Data.ArrayMax = 0;
    pFVar7->DebugTypeName = (wchar_t *)0x0;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TComponentTypeDebugInfo_UFVariantPropertyTypeIndex_MovieScene_UE___MovieScene_UE__6B_
    ;
    pFVar8 = pFVar7;
  }
  local_a8._16_8_ = pFVar8;
  ::FString::operator=(&pFVar8->DebugName,(wchar_t *)param_2);
  pFVar8->DebugTypeName = L"struct UE::MovieScene::FVariantPropertyTypeIndex";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar4 = 6;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar4 = 0x46;
  }
  local_8e = bVar4 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar8 = ::operator_new(8);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_UFVariantPropertyTypeIndex_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  else {
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFVariantPropertyTypeIndex_MovieScene_UE___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  local_a8._8_8_ = pFVar9;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_UFVariantPropertyTypeIndex_MovieScene_UE___MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex>)(*pcVar3)();
      return TVar6;
    }
    pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar11 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex>)(*pcVar3)();
      return TVar6;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if ((pTVar11 != pTVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex>)(*pcVar3)();
      return TVar6;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar11 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar11->Data).Pad)->Data).Pad)(pTVar11,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<TSharedPtr<FTrackInstancePropertyBindings,1>_> @ 146087410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<TSharedPtr<FTrackInstancePropertyBindings,1>_>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> TVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  FComponentTypeDebugInfo *pFVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar11;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x810;
  pFVar7 = ::operator_new(0x20);
  pFVar9 = (FComponentTypeDebugInfo *)0x0;
  pFVar8 = pFVar9;
  if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar7->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DebugName).Data.ArrayNum = 0;
    (pFVar7->DebugName).Data.ArrayMax = 0;
    pFVar7->DebugTypeName = (wchar_t *)0x0;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TComponentTypeDebugInfo_V__TSharedPtr_VFTrackInstancePropertyBindings___00___MovieScene_UE__6B_
    ;
    pFVar8 = pFVar7;
  }
  local_a8._16_8_ = pFVar8;
  ::FString::operator=(&pFVar8->DebugName,(wchar_t *)param_2);
  pFVar8->DebugTypeName = L"class TSharedPtr<class FTrackInstancePropertyBindings,1>";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar4 = 1;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar4 = 0x41;
  }
  local_8e = bVar4 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar8 = ::operator_new(8);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_V__TSharedPtr_VFTrackInstancePropertyBindings___00___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  else {
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_V__TSharedPtr_VFTrackInstancePropertyBindings___00___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  local_a8._8_8_ = pFVar9;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_V__TSharedPtr_VFTrackInstancePropertyBindings___00___MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_>)(*pcVar3)();
      return TVar6;
    }
    pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar11 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_>)(*pcVar3)();
      return TVar6;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if ((pTVar11 != pTVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_>)(*pcVar3)();
      return TVar6;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar11 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar11->Data).Pad)->Data).Pad)(pTVar11,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<TSubclassOf<UMovieSceneBlenderSystem>_> @ 1460876b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<TSubclassOf<UMovieSceneBlenderSystem>_>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> TVar6;
  FComponentTypeDebugInfo *pFVar7;
  FComponentTypeDebugInfo *pFVar8;
  FComponentTypeDebugInfo *pFVar9;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar10;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar11;
  longlong *in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_90 = 0x808;
  pFVar7 = ::operator_new(0x20);
  pFVar9 = (FComponentTypeDebugInfo *)0x0;
  pFVar8 = pFVar9;
  if (pFVar7 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar7->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DebugName).Data.ArrayNum = 0;
    (pFVar7->DebugName).Data.ArrayMax = 0;
    pFVar7->DebugTypeName = (wchar_t *)0x0;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TComponentTypeDebugInfo_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__6B_
    ;
    pFVar8 = pFVar7;
  }
  local_a8._16_8_ = pFVar8;
  ::FString::operator=(&pFVar8->DebugName,(wchar_t *)param_2);
  pFVar8->DebugTypeName = L"class TSubclassOf<class UMovieSceneBlenderSystem>";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar4 = 2;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar4 = 0x42;
  }
  local_8e = bVar4 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar8 = ::operator_new(8);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOps_V__TSubclassOf_VUMovieSceneBlenderSystem_____FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  else {
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar8->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_V__TSubclassOf_VUMovieSceneBlenderSystem_____FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar9 = pFVar8;
    }
  }
  local_a8._8_8_ = pFVar9;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &
               ___7__TDuplicateChildEntityInitializer_V__TSubclassOf_VUMovieSceneBlenderSystem_____MovieScene_UE__6B_
    ;
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_>)(*pcVar3)();
      return TVar6;
    }
    pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar11 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_>)(*pcVar3)();
      return TVar6;
    }
    pTVar10 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar10 = local_88;
    }
    if ((pTVar11 != pTVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_>)(*pcVar3)();
      return TVar6;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar11 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar11 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar11->Data).Pad)->Data).Pad)(pTVar11,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_a8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<FString> @ 146087950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FString> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FString>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  undefined8 *puVar4;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar5;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x810;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &___7__TComponentTypeDebugInfo_VFString___MovieScene_UE__6B_;
  }
  local_b8._16_8_ = puVar4;
  ::FString::operator=((FString *)(puVar4 + 1),(wchar_t *)param_2);
  puVar4[3] = L"class FString";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 1;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x41;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)&___7__TComplexComponentOps_VFString___FComponentTypeInfo_MovieScene_UE__6B_;
      goto LAB_146087a58;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_VFString___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146087a58;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_146087a58:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &___7__TDuplicateChildEntityInitializer_VFString___MovieScene_UE__6B_;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FString>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<FString> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar5 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar5 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<FText> @ 146087b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FText> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FText>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar4;
  longlong *in_R9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x810;
  puVar3 = ::operator_new(0x20);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &___7__TComponentTypeDebugInfo_VFText___MovieScene_UE__6B_;
  }
  local_b8._16_8_ = puVar3;
  ::FString::operator=((FString *)(puVar3 + 1),(wchar_t *)param_2);
  puVar3[3] = L"class FText";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  local_9e = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U |
             ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    local_b8._8_8_ = ::operator_new(8);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)&___7__TComplexComponentOps_VFText___FComponentTypeInfo_MovieScene_UE__6B_;
      goto LAB_146087c32;
    }
  }
  else {
    local_b8._8_8_ = ::operator_new(0x10);
    if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
      (((FComponentTypeDebugInfo *)local_b8._8_8_)->DebugName).Data.AllocatorInstance.Data = pFVar2;
      ((FComponentTypeDebugInfo *)local_b8._8_8_)->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_VFText___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      goto LAB_146087c32;
    }
  }
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
LAB_146087c32:
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &___7__TDuplicateChildEntityInitializer_VFText___MovieScene_UE__6B_;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FText>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<FText> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar4 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar4 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar4->Data).Pad)->Data).Pad)(pTVar4,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<__int64> @ 146087d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<__int64> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<__int64>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  FComponentTypeDebugInfo *pFVar4;
  FComponentTypeDebugInfo *pFVar5;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar6;
  longlong *in_R9;
  FComponentTypeDebugInfo *pFVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x808;
  pFVar7 = (FComponentTypeDebugInfo *)0x0;
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  pFVar4 = ::operator_new(0x20);
  pFVar5 = pFVar7;
  if (pFVar4 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar4->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->DebugName).Data.ArrayNum = 0;
    (pFVar4->DebugName).Data.ArrayMax = 0;
    pFVar4->DebugTypeName = (wchar_t *)0x0;
    pFVar4->_padding_ = (longlong)&___7__TComponentTypeDebugInfo__J_MovieScene_UE__6B_;
    pFVar5 = pFVar4;
  }
  local_b8._16_8_ = pFVar5;
  ::FString::operator=(&pFVar5->DebugName,(wchar_t *)param_2);
  pFVar5->DebugTypeName = L"__int64";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 7;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x47;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    if ((bVar3 != 7) &&
       (pFVar5 = ::operator_new(8), local_b8._8_8_ = pFVar7,
       pFVar5 != (FComponentTypeDebugInfo *)0x0)) {
      pFVar5->_padding_ =
           (longlong)&___7__TComplexComponentOps__J_FComponentTypeInfo_MovieScene_UE__6B_;
      local_b8._8_8_ = pFVar5;
    }
  }
  else {
    pFVar5 = ::operator_new(0x10);
    local_b8._8_8_ = pFVar7;
    if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar5->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar5->_padding_ =
           (longlong)
           &___7__TComplexComponentOpsCustomRefCollection__J_FComponentTypeInfo_MovieScene_UE__6B_;
      local_b8._8_8_ = pFVar5;
    }
  }
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &___7__TDuplicateChildEntityInitializer__J_MovieScene_UE__6B_;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<__int64>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<__int64> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar6 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar6 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar6->Data).Pad)->Data).Pad)(pTVar6,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_b8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentType<bool> @ 146087ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<bool> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<bool>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  FComponentTypeDebugInfo *pFVar4;
  FComponentTypeDebugInfo *pFVar5;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar6;
  longlong *in_R9;
  FComponentTypeDebugInfo *pFVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  undefined2 local_a0;
  byte local_9e;
  undefined **local_98;
  wchar_t local_90;
  wchar_t local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(in_R9 + 1);
  local_a0 = 0x101;
  pFVar7 = (FComponentTypeDebugInfo *)0x0;
  local_b8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  pFVar4 = ::operator_new(0x20);
  pFVar5 = pFVar7;
  if (pFVar4 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar4->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->DebugName).Data.ArrayNum = 0;
    (pFVar4->DebugName).Data.ArrayMax = 0;
    pFVar4->DebugTypeName = (wchar_t *)0x0;
    pFVar4->_padding_ = (longlong)&___7__TComponentTypeDebugInfo__N_MovieScene_UE__6B_;
    pFVar5 = pFVar4;
  }
  local_b8._16_8_ = pFVar5;
  ::FString::operator=(&pFVar5->DebugName,(wchar_t *)param_2);
  pFVar5->DebugTypeName = L"bool";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar3 = 7;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    bVar3 = 0x47;
  }
  local_9e = bVar3 | ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_9e & 0x80;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    if ((bVar3 != 7) &&
       (pFVar5 = ::operator_new(8), local_b8._8_8_ = pFVar7,
       pFVar5 != (FComponentTypeDebugInfo *)0x0)) {
      pFVar5->_padding_ =
           (longlong)&___7__TComplexComponentOps__N_FComponentTypeInfo_MovieScene_UE__6B_;
      local_b8._8_8_ = pFVar5;
    }
  }
  else {
    pFVar5 = ::operator_new(0x10);
    local_b8._8_8_ = pFVar7;
    if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar5->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar5->_padding_ =
           (longlong)
           &___7__TComplexComponentOpsCustomRefCollection__N_FComponentTypeInfo_MovieScene_UE__6B_;
      local_b8._8_8_ = pFVar5;
    }
  }
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_b8);
  *param_1 = local_b8._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_90 = local_b8._0_2_;
    local_8e = local_b8._0_2_;
    local_98 = &___7__TDuplicateChildEntityInitializer__N_MovieScene_UE__6B_;
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
    TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<bool>,void>
              ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88,
               (TDuplicateChildEntityInitializer<bool> *)&local_98);
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88);
    if ((local_48 & 1) != 0) {
      pTVar6 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_88;
      if ((local_48 & 2) == 0) {
        pTVar6 = local_88[0];
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar6->Data).Pad)->Data).Pad)(pTVar6,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)local_b8._16_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._16_8_)(local_b8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_b8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_b8._8_8_)(local_b8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// NewComponentTypeNoAddReferencedObjects<UObject_*> @ 1460880c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<UObject_*> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentTypeNoAddReferencedObjects<UObject_*>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TComponentTypeID<UObject_*> TVar4;
  undefined8 *puVar5;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar6;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar7;
  undefined8 *puVar8;
  longlong in_R9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined2 local_90;
  byte local_8e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_88;
  wchar_t local_80;
  wchar_t local_7e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(in_R9 + 8);
  local_90 = 0x808;
  puVar8 = (undefined8 *)0x0;
  local_a8._8_8_ = (FComponentTypeDebugInfo *)0x0;
  puVar5 = ::operator_new(0x20);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = &___7__TComponentTypeDebugInfo_PEAVUObject___MovieScene_UE__6B_;
    puVar8 = puVar5;
  }
  local_a8._16_8_ = puVar8;
  ::FString::operator=((FString *)(puVar8 + 1),(wchar_t *)param_2);
  puVar8[3] = L"class UObject*";
  local_8e = ((bVar1 & 1) * '\x02' | bVar1 & 0xc) << 2 | local_8e & 0x87 | 7;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_a8);
  *param_1 = local_a8._0_2_;
  if ((*(byte *)(in_R9 + 8) & 2) != 0) {
    local_48 = local_48 | 3;
    local_80 = local_a8._0_2_;
    local_7e = local_a8._0_2_;
    local_88 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &___7__TDuplicateChildEntityInitializer_PEAVUObject___MovieScene_UE__6B_;
    if (((local_48 & 1) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar4 = (TComponentTypeID<UObject_*>)(*pcVar2)();
      return TVar4;
    }
    pTVar7 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar7 = local_88;
    }
    if (((local_48 & 1) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar4 = (TComponentTypeID<UObject_*>)(*pcVar2)();
      return TVar4;
    }
    pTVar6 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
    if ((local_48 & 2) == 0) {
      pTVar6 = local_88;
    }
    if ((pTVar7 != pTVar6) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar4 = (TComponentTypeID<UObject_*>)(*pcVar2)();
      return TVar4;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88);
    if ((local_48 & 1) != 0) {
      pTVar7 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_88;
      if ((local_48 & 2) == 0) {
        pTVar7 = local_88;
      }
      local_48 = local_48 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar7->Data).Pad)->Data).Pad)(pTVar7,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_88);
      }
    }
  }
  if ((undefined8 *)local_a8._16_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_a8._16_8_)(local_a8._16_8_,1);
  }
  if ((FComponentTypeDebugInfo *)local_a8._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_a8._8_8_)(local_a8._8_8_,1);
  }
  return SUB82(param_1,0);
}

// GetComponentTypeChecked @ 1460c9590

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::GetComponentTypeChecked
          (FComponentRegistry *this,FComponentTypeID param_1)

{
  code *pcVar1;
  bool bVar2;
  FComponentTypeInfo *pFVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1.Value;
  if ((int)uVar5 < *(int *)&(this->ComponentTypes).field_0x28) {
    if (*(int *)&(this->ComponentTypes).field_0x28 <= (int)uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FComponentTypeInfo *)(*pcVar1)();
        return pFVar3;
      }
    }
    puVar4 = *(undefined1 **)&(this->ComponentTypes).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ComponentTypes).field_0x10;
    }
    if ((*(uint *)(puVar4 + (ulonglong)(param_1.Value >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0)
    goto LAB_1460c962e;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentTypes.IsValidIndex(ComponentTypeID.BitIndex())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneComponentRegistry.cpp"
                     ,0x50,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FComponentTypeInfo *)(*pcVar1)();
    return pFVar3;
  }
LAB_1460c962e:
  return (FComponentTypeInfo *)
         (*(longlong *)&this->ComponentTypes + (ulonglong)param_1.Value * 0x18);
}

// NewComponentTypeInternal @ 1460da1c0

FComponentTypeID __thiscall
UE::MovieScene::FComponentRegistry::NewComponentTypeInternal
          (FComponentRegistry *this,FComponentTypeInfo *param_1)

{
  TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator> *this_00;
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  byte bVar9;
  FComponentTypeID FVar10;
  undefined8 *in_R8;
  FSparseArrayAllocationInfo local_28;
  
  this_00 = &this->ComponentTypes;
  if (0x17e < *(int *)&(this->ComponentTypes).field_0x8 - *(int *)&(this->ComponentTypes).field_0x34
     ) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComponentTypes.Num() < MaximumNumComponentsSupported-1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneComponentRegistry.cpp"
                       ,0x2a,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FComponentTypeID)uVar7;
    }
  }
  iVar3 = *(int *)&(this->ComponentTypes).field_0x34;
  bVar1 = *(byte *)((longlong)in_R8 + 0x12);
  cVar2 = *(char *)(in_R8 + 2);
  if (iVar3 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this_00,
                       (int *)&(this->ComponentTypes).field_0x8,
                       (int *)&(this->ComponentTypes).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ComponentTypes).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->ComponentTypes).field_0x30;
    iVar3 = iVar3 + -1;
    iVar4 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar8 * 0x18);
    *(int *)&(this->ComponentTypes).field_0x30 = iVar4;
    *(int *)&(this->ComponentTypes).field_0x34 = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)this_00,&local_28,iVar8);
  if (local_28.Pointer != (undefined8 *)0x0) {
    *(undefined8 *)local_28.Pointer = *in_R8;
    *in_R8 = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = in_R8[1];
    in_R8[1] = 0;
    *(undefined1 *)((longlong)local_28.Pointer + 0x10) = *(undefined1 *)(in_R8 + 2);
    *(undefined1 *)((longlong)local_28.Pointer + 0x11) = *(undefined1 *)((longlong)in_R8 + 0x11);
    bVar9 = (*(byte *)((longlong)local_28.Pointer + 0x12) ^ *(byte *)((longlong)in_R8 + 0x12)) & 1 ^
            *(byte *)((longlong)local_28.Pointer + 0x12);
    *(byte *)((longlong)local_28.Pointer + 0x12) = bVar9;
    bVar9 = (bVar9 ^ *(byte *)((longlong)in_R8 + 0x12)) & 2 ^ bVar9;
    *(byte *)((longlong)local_28.Pointer + 0x12) = bVar9;
    bVar9 = (bVar9 ^ *(byte *)((longlong)in_R8 + 0x12)) & 4 ^ bVar9;
    *(byte *)((longlong)local_28.Pointer + 0x12) = bVar9;
    bVar9 = (bVar9 ^ *(byte *)((longlong)in_R8 + 0x12)) & 8 ^ bVar9;
    *(byte *)((longlong)local_28.Pointer + 0x12) = bVar9;
    bVar9 = (bVar9 ^ *(byte *)((longlong)in_R8 + 0x12)) & 0x10 ^ bVar9;
    *(byte *)((longlong)local_28.Pointer + 0x12) = bVar9;
    bVar9 = (bVar9 ^ *(byte *)((longlong)in_R8 + 0x12)) & 0x20 ^ bVar9;
    *(byte *)((longlong)local_28.Pointer + 0x12) = bVar9;
    *(byte *)((longlong)local_28.Pointer + 0x12) =
         (bVar9 ^ *(byte *)((longlong)in_R8 + 0x12)) & 0x40 ^ bVar9;
  }
  if ((local_28.Index & 0xffff0000U) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(BitIndex & 0xFFFF0000) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                       ,0xba,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FComponentTypeID)uVar7;
    }
  }
  FVar10.Value = (ushort)local_28.Index;
  if ((bVar1 & 8) != 0) {
    FComponentMask::Set(&this->PreservationMask,FVar10);
  }
  if ((bVar1 & 0x10) != 0) {
    FComponentMask::Set(&this->CopyAndMigrationMask,FVar10);
  }
  if ((bVar1 & 0x20) != 0) {
    FComponentMask::Set(&this->MigrationMask,FVar10);
    FComponentMask::Set(&this->CopyAndMigrationMask,FVar10);
  }
  if (cVar2 != '\0') {
    FComponentMask::Set(&this->NonTagComponentMask,FVar10);
  }
  if ((local_28.Index & 0xffff0000U) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(BitIndex & 0xFFFF0000) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                       ,0xba,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FComponentTypeID)uVar7;
    }
  }
  *(ushort *)&(param_1->ComplexComponentOps).Ptr = FVar10.Value;
  return (FComponentTypeID)(ushort)param_1;
}

// NewTag @ 1460da440

/* WARNING: Removing unreachable block (ram,0x0001460da554) */

FComponentTypeID __thiscall
UE::MovieScene::FComponentRegistry::NewTag
          (FComponentRegistry *this,wchar_t *param_1,EComponentTypeFlags param_2)

{
  undefined8 *puVar1;
  FComponentTypeID *pFVar2;
  undefined8 *puVar3;
  undefined7 in_register_00000081;
  byte in_R9B;
  FComponentTypeID local_res10 [8];
  FComponentTypeID local_res20 [4];
  
  puVar3 = (undefined8 *)0x0;
  puVar1 = ::operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar3 = puVar1;
  }
  ::FString::operator=((FString *)(puVar3 + 1),(wchar_t *)CONCAT71(in_register_00000081,param_2));
  puVar3[3] = L"TAG";
  NewComponentTypeInternal(this,(FComponentTypeInfo *)param_1);
  if ((in_R9B & 2) != 0) {
    local_res10[0].Value = *param_1;
    local_res20[0].Value = local_res10[0].Value;
    pFVar2 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
             ::FindPair(&(this->Factories).ParentToChildComponentTypes,local_res10,local_res20);
    if (pFVar2 == (FComponentTypeID *)0x0) {
      TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
      ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
                ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                  *)&(this->Factories).ParentToChildComponentTypes,local_res10,local_res20);
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  return (FComponentTypeID)(ushort)param_1;
}

// MakeComponentTypeInfoWithoutComponentOps<float> @ 146285a30

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<float>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = '\x04';
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
    pFVar5->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_M_MovieScene_UE__6B_;
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
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"float";
  return __return_storage_ptr__;
}

// NewComponentType<float> @ 146285c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<float> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<float>
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
  TComponentTypeID<float> TVar9;
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
  local_80 = 0x404;
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
    pFVar10->_padding_ = (longlong)&___7__TComponentTypeDebugInfo_M_MovieScene_UE__6B_;
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
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"float";
  pFVar2 = (FScriptContainerElement *)*in_R9;
  bVar14 = -(pFVar2 != (FScriptContainerElement *)0x0) & 0x40U | local_7e & 0xbf;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    bVar4 = local_7e & 7;
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
    local_7e = bVar14;
    if (bVar4 == 7) goto LAB_146285dd6;
    pFVar11 = ::operator_new(8);
    if (pFVar11 != (FComponentTypeDebugInfo *)0x0) {
      pFVar11->_padding_ =
           (longlong)&___7__TComplexComponentOps_M_FComponentTypeInfo_MovieScene_UE__6B_;
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
           &___7__TComplexComponentOpsCustomRefCollection_M_FComponentTypeInfo_MovieScene_UE__6B_;
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
LAB_146285dd6:
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &___7__TDuplicateChildEntityInitializer_M_MovieScene_UE__6B_;
    if (((local_38 & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      TVar9 = (TComponentTypeID<float>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<float>)(*pcVar3)();
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
      TVar9 = (TComponentTypeID<float>)(*pcVar3)();
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

// FComponentRegistry @ 146299220

FComponentRegistry * __thiscall
UE::MovieScene::FComponentRegistry::FComponentRegistry(FComponentRegistry *this)

{
  (this->Factories).ChildInitializers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Factories).ChildInitializers.ArrayNum = 0;
  (this->Factories).ChildInitializers.ArrayMax = 0;
  *(undefined8 *)&(this->Factories).ParentToChildComponentTypes = 0;
  *(undefined8 *)&(this->Factories).ParentToChildComponentTypes.field_0x8 = 0;
  *(undefined8 *)&(this->Factories).ParentToChildComponentTypes.field_0x20 = 0;
  *(undefined4 *)&(this->Factories).ParentToChildComponentTypes.field_0x28 = 0;
  *(undefined4 *)&(this->Factories).ParentToChildComponentTypes.field_0x2c = 0x80;
  *(undefined4 *)&(this->Factories).ParentToChildComponentTypes.field_0x34 = 0;
  *(undefined4 *)&(this->Factories).ParentToChildComponentTypes.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Factories).ParentToChildComponentTypes.field_0x40 = 0;
  *(undefined4 *)&(this->Factories).ParentToChildComponentTypes.field_0x48 = 0;
  *(undefined8 *)&(this->Factories).MutualInclusivityGraph.SimpleIncludes = 0;
  *(undefined8 *)&(this->Factories).MutualInclusivityGraph.SimpleIncludes.field_0x8 = 0;
  *(undefined8 *)&(this->Factories).MutualInclusivityGraph.SimpleIncludes.field_0x20 = 0;
  *(undefined4 *)&(this->Factories).MutualInclusivityGraph.SimpleIncludes.field_0x28 = 0;
  *(undefined4 *)&(this->Factories).MutualInclusivityGraph.SimpleIncludes.field_0x2c = 0x80;
  *(undefined4 *)&(this->Factories).MutualInclusivityGraph.SimpleIncludes.field_0x34 = 0;
  *(undefined4 *)&(this->Factories).MutualInclusivityGraph.SimpleIncludes.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Factories).MutualInclusivityGraph.SimpleIncludes.field_0x40 = 0;
  *(undefined4 *)&(this->Factories).MutualInclusivityGraph.SimpleIncludes.field_0x48 = 0;
  *(undefined8 *)&(this->Factories).MutualInclusivityGraph.ComplexIncludes = 0;
  *(undefined8 *)&(this->Factories).MutualInclusivityGraph.ComplexIncludes.field_0x8 = 0;
  *(undefined8 *)&(this->Factories).MutualInclusivityGraph.ComplexIncludes.field_0x20 = 0;
  *(undefined4 *)&(this->Factories).MutualInclusivityGraph.ComplexIncludes.field_0x28 = 0;
  *(undefined4 *)&(this->Factories).MutualInclusivityGraph.ComplexIncludes.field_0x2c = 0x80;
  *(undefined4 *)&(this->Factories).MutualInclusivityGraph.ComplexIncludes.field_0x34 = 0;
  *(undefined4 *)&(this->Factories).MutualInclusivityGraph.ComplexIncludes.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Factories).MutualInclusivityGraph.ComplexIncludes.field_0x40 = 0;
  *(undefined4 *)&(this->Factories).MutualInclusivityGraph.ComplexIncludes.field_0x48 = 0;
  (this->Factories).MutualInclusivityGraph.CommandBuffer.Commands.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Factories).MutualInclusivityGraph.CommandBuffer.Commands.ArrayNum = 0;
  (this->Factories).MutualInclusivityGraph.CommandBuffer.Commands.ArrayMax = 0;
  (this->Factories).MutualInclusivityGraph.bCommandBufferInvalidated = false;
  *(undefined8 *)&this->ComponentTypes = 0;
  *(undefined8 *)&(this->ComponentTypes).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentTypes).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentTypes).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentTypes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentTypes).field_0x34 = 0;
  *(undefined4 *)&(this->ComponentTypes).field_0x30 = 0xffffffff;
  *(undefined8 *)&this->ComponentStructs = 0;
  *(undefined8 *)&(this->ComponentStructs).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentStructs).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentStructs).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentStructs).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentStructs).field_0x34 = 0;
  *(undefined4 *)&(this->ComponentStructs).field_0x30 = 0xffffffff;
  (this->NonTagComponentMask).Bits.NumBits = 0;
  (this->PreservationMask).Bits.NumBits = 0;
  (this->MigrationMask).Bits.NumBits = 0;
  (this->CopyAndMigrationMask).Bits.NumBits = 0;
  (this->NonTagComponentMask).Bits.MaxBits = 0x180;
  (this->PreservationMask).Bits.MaxBits = 0x180;
  (this->MigrationMask).Bits.MaxBits = 0x180;
  (this->CopyAndMigrationMask).Bits.MaxBits = 0x180;
  return this;
}

