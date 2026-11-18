// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 15

// TestNotNull<FMassArchetypeEntityCollection> @ 1470f0100

bool __thiscall
FAutomationTestBase::TestNotNull<FMassArchetypeEntityCollection>
          (FAutomationTestBase *this,FString *param_1,FMassArchetypeEntityCollection *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (FMassArchetypeEntityCollection *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotNull<FMassEntityManager> @ 1470f0180

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FAutomationTestBase::TestNotNull<FMassEntityManager>
          (FAutomationTestBase *this,FString *param_1,FMassEntityManager *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (FMassEntityManager *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotNull<FMassRelationFragment> @ 1470f0200

bool __thiscall
FAutomationTestBase::TestNotNull<FMassRelationFragment>
          (FAutomationTestBase *this,wchar_t *param_1,FMassRelationFragment *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (FMassRelationFragment *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotNull<FTestConstSharedFragment_Int> @ 1470f0270

bool __thiscall
FAutomationTestBase::TestNotNull<FTestConstSharedFragment_Int>
          (FAutomationTestBase *this,FString *param_1,FTestConstSharedFragment_Int *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (FTestConstSharedFragment_Int *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotNull<FTestFragment_Float> @ 1470f02f0

bool __thiscall
FAutomationTestBase::TestNotNull<FTestFragment_Float>
          (FAutomationTestBase *this,FString *param_1,FTestFragment_Float *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (FTestFragment_Float *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotNull<FTestFragment_Float> @ 1470f0370

bool __thiscall
FAutomationTestBase::TestNotNull<FTestFragment_Float>
          (FAutomationTestBase *this,wchar_t *param_1,FTestFragment_Float *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (FTestFragment_Float *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotNull<FTestFragment_Int> @ 1470f03e0

bool __thiscall
FAutomationTestBase::TestNotNull<FTestFragment_Int>
          (FAutomationTestBase *this,FString *param_1,FTestFragment_Int *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (FTestFragment_Int *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotNull<FTestSharedFragment_Float> @ 1470f0460

bool __thiscall
FAutomationTestBase::TestNotNull<FTestSharedFragment_Float>
          (FAutomationTestBase *this,FString *param_1,FTestSharedFragment_Float *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (FTestSharedFragment_Float *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotNull<FTestSharedFragment_Int> @ 1470f04e0

bool __thiscall
FAutomationTestBase::TestNotNull<FTestSharedFragment_Int>
          (FAutomationTestBase *this,FString *param_1,FTestSharedFragment_Int *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (FTestSharedFragment_Int *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotNull<UMassTestEngineSubsystem> @ 1470f0560

bool __thiscall
FAutomationTestBase::TestNotNull<UMassTestEngineSubsystem>
          (FAutomationTestBase *this,wchar_t *param_1,UMassTestEngineSubsystem *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (UMassTestEngineSubsystem *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotNull<UMassTestProcessorBase> @ 1470f05d0

bool __thiscall
FAutomationTestBase::TestNotNull<UMassTestProcessorBase>
          (FAutomationTestBase *this,FString *param_1,UMassTestProcessorBase *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (UMassTestProcessorBase *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotNull<UMassTestWorldSubsystem> @ 1470f0650

bool __thiscall
FAutomationTestBase::TestNotNull<UMassTestWorldSubsystem>
          (FAutomationTestBase *this,wchar_t *param_1,UMassTestWorldSubsystem *param_2)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (UMassTestWorldSubsystem *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestFalse @ 1471ad2e0

bool __thiscall
FAutomationTestBase::TestFalse(FAutomationTestBase *this,FString *param_1,bool param_2)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = TestFalse(this,(wchar_t *)(param_1->Data).AllocatorInstance.Data,param_2);
    return bVar1;
  }
  bVar1 = TestFalse(this,L"",param_2);
  return bVar1;
}

// TestNull @ 1471ad300

bool __thiscall
FAutomationTestBase::TestNull(FAutomationTestBase *this,FString *param_1,void *param_2)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = TestNull(this,(wchar_t *)(param_1->Data).AllocatorInstance.Data,param_2);
    return bVar1;
  }
  bVar1 = TestNull(this,L"",param_2);
  return bVar1;
}

// TestTrue @ 1471b0690

bool __thiscall
FAutomationTestBase::TestTrue(FAutomationTestBase *this,FString *param_1,bool param_2)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = TestTrue(this,(wchar_t *)(param_1->Data).AllocatorInstance.Data,param_2);
    return bVar1;
  }
  bVar1 = TestTrue(this,L"",param_2);
  return bVar1;
}

