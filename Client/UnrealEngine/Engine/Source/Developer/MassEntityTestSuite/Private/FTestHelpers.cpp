// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 34

// TestEqual<UScriptStruct_const_,UScriptStruct> @ 1470ef0f0

bool __cdecl
FTestHelpers::TestEqual<UScriptStruct_const_,UScriptStruct>
          (FString *param_1,UScriptStruct *param_2,UScriptStruct *param_3,
          FAutomationTestBase *param_4)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = FAutomationTestBase::TestEqual
                      (param_4,(wchar_t *)(param_1->Data).AllocatorInstance.Data,(ulong64)param_2,
                       (ulong64)param_3);
    return bVar1;
  }
  bVar1 = FAutomationTestBase::TestEqual(param_4,L"",(ulong64)param_2,(ulong64)param_3);
  return bVar1;
}

// TestEqual<int,int> @ 1470ef130

bool __cdecl
FTestHelpers::TestEqual<int,int>
          (FString *param_1,int param_2,int param_3,FAutomationTestBase *param_4)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = FAutomationTestBase::TestEqual
                      (param_4,(wchar_t *)(param_1->Data).AllocatorInstance.Data,param_2,param_3);
    return bVar1;
  }
  bVar1 = FAutomationTestBase::TestEqual(param_4,L"",param_2,param_3);
  return bVar1;
}

// TestEqual<unsigned_int,unsigned_int> @ 1470ef170

bool __cdecl
FTestHelpers::TestEqual<unsigned_int,unsigned_int>
          (FString *param_1,uint param_2,uint param_3,FAutomationTestBase *param_4)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 != param_3) {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(param_4,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<float,float> @ 1470ef1f0

bool __cdecl
FTestHelpers::TestEqual<float,float>
          (FString *param_1,float param_2,float param_3,FAutomationTestBase *param_4)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FAutomationTestBase::TestEqual(param_4,pwVar2,param_2,param_3,__real_38d1b717);
  return bVar1;
}

// TestEqual<UE::Mass::FArchetypeGroupHandle,UE::Mass::FArchetypeGroupHandle> @ 1470ef230

bool __cdecl
FTestHelpers::TestEqual<UE::Mass::FArchetypeGroupHandle,UE::Mass::FArchetypeGroupHandle>
          (FString *param_1,FArchetypeGroupHandle param_2,FArchetypeGroupHandle param_3,
          FAutomationTestBase *param_4)

{
  code *pcVar1;
  FString local_18;
  
  if ((param_2.GroupType.Identifier.Identifier == param_3.GroupType.Identifier.Identifier) &&
     (param_2.GroupID.ID.ID == param_3.GroupID.ID.ID)) {
    return true;
  }
  pcVar1 = *(code **)(param_4->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(param_4,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<UE::Mass::FArchetypeGroupID,int> @ 1470ef2c0

bool __cdecl
FTestHelpers::TestEqual<UE::Mass::FArchetypeGroupID,int>
          (FString *param_1,FArchetypeGroupID param_2,int param_3,FAutomationTestBase *param_4)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FAutomationTestBase::TestEqual(param_4,pwVar2,param_2.ID,param_3);
  return bVar1;
}

// TestEqual<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet,TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet> @ 1470ef2f0

bool __cdecl
FTestHelpers::
TestEqual<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet,TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet>
          (FString *param_1,FBitSet *param_2,FBitSet *param_3,FAutomationTestBase *param_4)

{
  code *pcVar1;
  bool bVar2;
  FString local_38;
  
  bVar2 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)param_2,
                     (TBitArray<FDefaultBitArrayAllocator> *)param_3,false);
  if (bVar2) {
    bVar2 = true;
  }
  else {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar1)(param_4,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  if (*(void **)&param_2->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x10);
  }
  if (*(void **)&param_3->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x10);
  }
  return bVar2;
}

// TestEqual<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet,TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet> @ 1470ef3c0

bool __cdecl
FTestHelpers::
TestEqual<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet,TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet>
          (FString *param_1,FBitSet *param_2,FBitSet *param_3,FAutomationTestBase *param_4)

{
  code *pcVar1;
  bool bVar2;
  FString local_38;
  
  bVar2 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)param_2,
                     (TBitArray<FDefaultBitArrayAllocator> *)param_3,false);
  if (bVar2) {
    bVar2 = true;
  }
  else {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are not equal.");
    (*pcVar1)(param_4,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  if (*(void **)&param_2->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x10);
  }
  if (*(void **)&param_3->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x10);
  }
  return bVar2;
}

// TestEqual<FConstSharedStruct,FConstSharedStruct> @ 1470ef490

bool __cdecl
FTestHelpers::TestEqual<FConstSharedStruct,FConstSharedStruct>
          (FString *param_1,FConstSharedStruct *param_2,FConstSharedStruct *param_3,
          FAutomationTestBase *param_4)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  bVar2 = FConstSharedStruct::operator==<FConstSharedStruct>(param_2,param_3);
  if (bVar2) {
    bVar2 = true;
  }
  else {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(param_4,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->StructMemoryPtr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->StructMemoryPtr).SharedReferenceCount.ReferenceController);
  return bVar2;
}

// TestEqual<FMassArchetypeHandle,FMassArchetypeHandle> @ 1470ef550

bool __cdecl
FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
          (FString *param_1,FMassArchetypeHandle *param_2,FMassArchetypeHandle *param_3,
          FAutomationTestBase *param_4)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if ((param_2->DataPtr).Object == (param_3->DataPtr).Object) {
    bVar2 = true;
  }
  else {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(param_4,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->DataPtr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->DataPtr).SharedReferenceCount.ReferenceController);
  return bVar2;
}

// TestEqual<FMassEntityHandle,FMassEntityHandle> @ 1470ef600

bool __cdecl
FTestHelpers::TestEqual<FMassEntityHandle,FMassEntityHandle>
          (FString *param_1,FMassEntityHandle param_2,FMassEntityHandle param_3,
          FAutomationTestBase *param_4)

{
  code *pcVar1;
  FString local_18;
  
  if ((param_2.Index == param_3.Index) && (param_2.SerialNumber == param_3.SerialNumber)) {
    return true;
  }
  pcVar1 = *(code **)(param_4->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(param_4,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<FSharedStruct,FSharedStruct> @ 1470ef690

bool __cdecl
FTestHelpers::TestEqual<FSharedStruct,FSharedStruct>
          (FString *param_1,FSharedStruct *param_2,FSharedStruct *param_3,
          FAutomationTestBase *param_4)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  bVar2 = FSharedStruct::operator==<FSharedStruct>(param_2,param_3);
  if (bVar2) {
    bVar2 = true;
  }
  else {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(param_4,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->StructMemoryPtr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->StructMemoryPtr).SharedReferenceCount.ReferenceController);
  return bVar2;
}

// TestEqual<TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>,TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>_> @ 1470ef750

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
FTestHelpers::
TestEqual<TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>,TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>_>
          (FString *param_1,TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *param_2,
          TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *param_3,
          FAutomationTestBase *param_4)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->Object == param_3->Object) {
    bVar2 = true;
  }
  else {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(param_4,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return bVar2;
}

// TestEqual<FName,FName> @ 1470ef800

bool __cdecl
FTestHelpers::TestEqual<FName,FName>
          (FString *param_1,FName param_2,FName param_3,FAutomationTestBase *param_4)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FAutomationTestBase::TestEqual(param_4,pwVar2,param_2,param_3);
  return bVar1;
}

// TestEqual<UMassProcessor,UMassTestProcessorBase> @ 1470ef830

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __cdecl
FTestHelpers::TestEqual<UMassProcessor,UMassTestProcessorBase>
          (FString *param_1,UMassProcessor *param_2,UMassTestProcessorBase *param_3,
          FAutomationTestBase *param_4)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = FAutomationTestBase::TestEqual
                      (param_4,(wchar_t *)(param_1->Data).AllocatorInstance.Data,(ulong64)param_2,
                       (ulong64)param_3);
    return bVar1;
  }
  bVar1 = FAutomationTestBase::TestEqual(param_4,L"",(ulong64)param_2,(ulong64)param_3);
  return bVar1;
}

// TestEqual<UMassTestEngineSubsystem,UMassTestEngineSubsystem_const_> @ 1470ef870

bool __cdecl
FTestHelpers::TestEqual<UMassTestEngineSubsystem,UMassTestEngineSubsystem_const_>
          (FString *param_1,UMassTestEngineSubsystem *param_2,UMassTestEngineSubsystem *param_3,
          FAutomationTestBase *param_4)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = FAutomationTestBase::TestEqual
                      (param_4,(wchar_t *)(param_1->Data).AllocatorInstance.Data,(ulong64)param_2,
                       (ulong64)param_3);
    return bVar1;
  }
  bVar1 = FAutomationTestBase::TestEqual(param_4,L"",(ulong64)param_2,(ulong64)param_3);
  return bVar1;
}

// TestEqual<UMassTestEngineSubsystem,UMassTestEngineSubsystem> @ 1470ef8b0

bool __cdecl
FTestHelpers::TestEqual<UMassTestEngineSubsystem,UMassTestEngineSubsystem>
          (FString *param_1,UMassTestEngineSubsystem *param_2,UMassTestEngineSubsystem *param_3,
          FAutomationTestBase *param_4)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = FAutomationTestBase::TestEqual
                      (param_4,(wchar_t *)(param_1->Data).AllocatorInstance.Data,(ulong64)param_2,
                       (ulong64)param_3);
    return bVar1;
  }
  bVar1 = FAutomationTestBase::TestEqual(param_4,L"",(ulong64)param_2,(ulong64)param_3);
  return bVar1;
}

// TestEqual<UMassTestGameInstanceSubsystem,UMassTestGameInstanceSubsystem_const_> @ 1470ef8f0

bool __cdecl
FTestHelpers::TestEqual<UMassTestGameInstanceSubsystem,UMassTestGameInstanceSubsystem_const_>
          (FString *param_1,UMassTestGameInstanceSubsystem *param_2,
          UMassTestGameInstanceSubsystem *param_3,FAutomationTestBase *param_4)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = FAutomationTestBase::TestEqual
                      (param_4,(wchar_t *)(param_1->Data).AllocatorInstance.Data,(ulong64)param_2,
                       (ulong64)param_3);
    return bVar1;
  }
  bVar1 = FAutomationTestBase::TestEqual(param_4,L"",(ulong64)param_2,(ulong64)param_3);
  return bVar1;
}

// TestEqual<UMassTestGameInstanceSubsystem,UMassTestGameInstanceSubsystem> @ 1470ef930

bool __cdecl
FTestHelpers::TestEqual<UMassTestGameInstanceSubsystem,UMassTestGameInstanceSubsystem>
          (FString *param_1,UMassTestGameInstanceSubsystem *param_2,
          UMassTestGameInstanceSubsystem *param_3,FAutomationTestBase *param_4)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = FAutomationTestBase::TestEqual
                      (param_4,(wchar_t *)(param_1->Data).AllocatorInstance.Data,(ulong64)param_2,
                       (ulong64)param_3);
    return bVar1;
  }
  bVar1 = FAutomationTestBase::TestEqual(param_4,L"",(ulong64)param_2,(ulong64)param_3);
  return bVar1;
}

// TestEqual<UMassTestLocalPlayerSubsystem,UMassTestLocalPlayerSubsystem_const_> @ 1470ef970

bool __cdecl
FTestHelpers::TestEqual<UMassTestLocalPlayerSubsystem,UMassTestLocalPlayerSubsystem_const_>
          (FString *param_1,UMassTestLocalPlayerSubsystem *param_2,
          UMassTestLocalPlayerSubsystem *param_3,FAutomationTestBase *param_4)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = FAutomationTestBase::TestEqual
                      (param_4,(wchar_t *)(param_1->Data).AllocatorInstance.Data,(ulong64)param_2,
                       (ulong64)param_3);
    return bVar1;
  }
  bVar1 = FAutomationTestBase::TestEqual(param_4,L"",(ulong64)param_2,(ulong64)param_3);
  return bVar1;
}

// TestEqual<UMassTestLocalPlayerSubsystem,UMassTestLocalPlayerSubsystem> @ 1470ef9b0

bool __cdecl
FTestHelpers::TestEqual<UMassTestLocalPlayerSubsystem,UMassTestLocalPlayerSubsystem>
          (FString *param_1,UMassTestLocalPlayerSubsystem *param_2,
          UMassTestLocalPlayerSubsystem *param_3,FAutomationTestBase *param_4)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = FAutomationTestBase::TestEqual
                      (param_4,(wchar_t *)(param_1->Data).AllocatorInstance.Data,(ulong64)param_2,
                       (ulong64)param_3);
    return bVar1;
  }
  bVar1 = FAutomationTestBase::TestEqual(param_4,L"",(ulong64)param_2,(ulong64)param_3);
  return bVar1;
}

// TestEqual<UMassTestWorldSubsystem,UMassTestWorldSubsystem_const_> @ 1470ef9f0

bool __cdecl
FTestHelpers::TestEqual<UMassTestWorldSubsystem,UMassTestWorldSubsystem_const_>
          (FString *param_1,UMassTestWorldSubsystem *param_2,UMassTestWorldSubsystem *param_3,
          FAutomationTestBase *param_4)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = FAutomationTestBase::TestEqual
                      (param_4,(wchar_t *)(param_1->Data).AllocatorInstance.Data,(ulong64)param_2,
                       (ulong64)param_3);
    return bVar1;
  }
  bVar1 = FAutomationTestBase::TestEqual(param_4,L"",(ulong64)param_2,(ulong64)param_3);
  return bVar1;
}

// TestEqual<UMassTestWorldSubsystem,UMassTestWorldSubsystem> @ 1470efa30

bool __cdecl
FTestHelpers::TestEqual<UMassTestWorldSubsystem,UMassTestWorldSubsystem>
          (FString *param_1,UMassTestWorldSubsystem *param_2,UMassTestWorldSubsystem *param_3,
          FAutomationTestBase *param_4)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = FAutomationTestBase::TestEqual
                      (param_4,(wchar_t *)(param_1->Data).AllocatorInstance.Data,(ulong64)param_2,
                       (ulong64)param_3);
    return bVar1;
  }
  bVar1 = FAutomationTestBase::TestEqual(param_4,L"",(ulong64)param_2,(ulong64)param_3);
  return bVar1;
}

// TestEqual<enum_FMassProcessorOrderInfo::EDependencyNodeType,enum_FMassProcessorOrderInfo::EDependencyNodeType> @ 1470efa70

bool __cdecl
FTestHelpers::
TestEqual<enum_FMassProcessorOrderInfo::EDependencyNodeType,enum_FMassProcessorOrderInfo::EDependencyNodeType>
          (FString *param_1,EDependencyNodeType param_2,EDependencyNodeType param_3,
          FAutomationTestBase *param_4)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 != param_3) {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(param_4,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<bool,bool> @ 1470efb20

bool __cdecl
FTestHelpers::TestEqual<bool,bool>
          (FString *param_1,bool param_2,bool param_3,FAutomationTestBase *param_4)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 != param_3) {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(param_4,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotEqual<unsigned_int,unsigned_int> @ 1470efba0

bool __cdecl
FTestHelpers::TestNotEqual<unsigned_int,unsigned_int>
          (FString *param_1,uint param_2,uint param_3,FAutomationTestBase *param_4)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == param_3) {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are equal.");
    (*pcVar1)(param_4,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotEqual<UE::Mass::FArchetypeGroupType,UE::Mass::FArchetypeGroupType> @ 1470efc20

bool __cdecl
FTestHelpers::TestNotEqual<UE::Mass::FArchetypeGroupType,UE::Mass::FArchetypeGroupType>
          (FString *param_1,FArchetypeGroupType param_2,FArchetypeGroupType param_3,
          FAutomationTestBase *param_4)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2.Identifier == param_3.Identifier) {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are equal.");
    (*pcVar1)(param_4,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotEqual<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet,TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet> @ 1470efca0

bool __cdecl
FTestHelpers::
TestNotEqual<TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet,TTypeBitSetBuilder<FMassFragment,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet>
          (FString *param_1,FBitSet *param_2,FBitSet *param_3,FAutomationTestBase *param_4)

{
  code *pcVar1;
  bool bVar2;
  FString local_38;
  
  bVar2 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)param_2,
                     (TBitArray<FDefaultBitArrayAllocator> *)param_3,false);
  if (bVar2) {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are equal.");
    (*pcVar1)(param_4,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (*(void **)&param_2->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x10);
  }
  if (*(void **)&param_3->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x10);
  }
  return bVar2;
}

// TestNotEqual<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet,TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet> @ 1470efd70

bool __cdecl
FTestHelpers::
TestNotEqual<TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet,TTypeBitSetBuilder<FMassTag,UScriptStruct,1,FStructTypeBitSet::FBitSetContainer>::FBitSet>
          (FString *param_1,FBitSet *param_2,FBitSet *param_3,FAutomationTestBase *param_4)

{
  code *pcVar1;
  bool bVar2;
  FString local_38;
  
  bVar2 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)param_2,
                     (TBitArray<FDefaultBitArrayAllocator> *)param_3,false);
  if (bVar2) {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_38,L"%s: The two values are equal.");
    (*pcVar1)(param_4,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (*(void **)&param_2->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x10);
  }
  if (*(void **)&param_3->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x10);
  }
  return bVar2;
}

// TestNotEqual<FConstSharedStruct,FConstSharedStruct> @ 1470efe40

bool __cdecl
FTestHelpers::TestNotEqual<FConstSharedStruct,FConstSharedStruct>
          (FString *param_1,FConstSharedStruct *param_2,FConstSharedStruct *param_3,
          FAutomationTestBase *param_4)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  bVar2 = FConstSharedStruct::operator==<FConstSharedStruct>(param_2,param_3);
  if (bVar2) {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are equal.");
    (*pcVar1)(param_4,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->StructMemoryPtr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->StructMemoryPtr).SharedReferenceCount.ReferenceController);
  return bVar2;
}

// TestNotEqual<FMassArchetypeHandle,FMassArchetypeHandle> @ 1470eff00

bool __cdecl
FTestHelpers::TestNotEqual<FMassArchetypeHandle,FMassArchetypeHandle>
          (FString *param_1,FMassArchetypeHandle *param_2,FMassArchetypeHandle *param_3,
          FAutomationTestBase *param_4)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if ((param_2->DataPtr).Object == (param_3->DataPtr).Object) {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are equal.");
    (*pcVar1)(param_4,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->DataPtr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->DataPtr).SharedReferenceCount.ReferenceController);
  return bVar2;
}

// TestNotEqual<FMassEntityHandle,FMassEntityHandle> @ 1470effb0

bool __cdecl
FTestHelpers::TestNotEqual<FMassEntityHandle,FMassEntityHandle>
          (FString *param_1,FMassEntityHandle param_2,FMassEntityHandle param_3,
          FAutomationTestBase *param_4)

{
  code *pcVar1;
  FString local_18;
  
  if ((param_2.Index == param_3.Index) && (param_2.SerialNumber == param_3.SerialNumber)) {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are equal.");
    (*pcVar1)(param_4,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotEqual<FSharedStruct,FSharedStruct> @ 1470f0040

bool __cdecl
FTestHelpers::TestNotEqual<FSharedStruct,FSharedStruct>
          (FString *param_1,FSharedStruct *param_2,FSharedStruct *param_3,
          FAutomationTestBase *param_4)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  bVar2 = FSharedStruct::operator==<FSharedStruct>(param_2,param_3);
  if (bVar2) {
    pcVar1 = *(code **)(param_4->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are equal.");
    (*pcVar1)(param_4,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->StructMemoryPtr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->StructMemoryPtr).SharedReferenceCount.ReferenceController);
  return bVar2;
}

// AddInfo @ 14710f970

void __cdecl FTestHelpers::AddInfo(FString *param_1,FAutomationTestBase *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  pcVar1 = *(code **)(param_2->_padding_ + 0x50);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  (*pcVar1)(param_2,&local_18,0,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

