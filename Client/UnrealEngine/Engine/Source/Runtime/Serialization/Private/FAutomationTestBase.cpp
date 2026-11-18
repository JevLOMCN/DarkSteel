// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 10

// TestEqual<unsigned_char> @ 148b962d0

bool __thiscall
FAutomationTestBase::TestEqual<unsigned_char>
          (FAutomationTestBase *this,wchar_t *param_1,uchar *param_2,uchar *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_2 != *param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<UE::Math::TBox2<double>_> @ 148b96340

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TBox2<double>_>
          (FAutomationTestBase *this,wchar_t *param_1,TBox2<double> *param_2,TBox2<double> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((((param_3->Min).field0_0x0._s_0.X == (param_2->Min).field0_0x0._s_0.X) &&
       ((param_3->Min).field0_0x0._s_0.Y == (param_2->Min).field0_0x0._s_0.Y)) &&
      ((param_3->Max).field0_0x0._s_0.X == (param_2->Max).field0_0x0._s_0.X)) &&
     ((param_3->Max).field0_0x0._s_0.Y == (param_2->Max).field0_0x0._s_0.Y)) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<UE::Math::TBox<double>_> @ 148b963e0

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TBox<double>_>
          (FAutomationTestBase *this,wchar_t *param_1,TBox<double> *param_2,TBox<double> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2->IsValid == '\0') {
    if (param_3->IsValid == '\0') {
      return true;
    }
  }
  else if ((((param_3->IsValid != '\0') &&
            ((param_3->Min).field0_0x0._s_0.X == (param_2->Min).field0_0x0._s_0.X)) &&
           ((param_3->Min).field0_0x0._s_0.Y == (param_2->Min).field0_0x0._s_0.Y)) &&
          ((((param_3->Min).field0_0x0._s_0.Z == (param_2->Min).field0_0x0._s_0.Z &&
            ((param_3->Max).field0_0x0._s_0.X == (param_2->Max).field0_0x0._s_0.X)) &&
           (((param_3->Max).field0_0x0._s_0.Y == (param_2->Max).field0_0x0._s_0.Y &&
            ((param_3->Max).field0_0x0._s_0.Z == (param_2->Max).field0_0x0._s_0.Z)))))) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<UE::Math::TBoxSphereBounds<double,double>_> @ 148b964c0

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TBoxSphereBounds<double,double>_>
          (FAutomationTestBase *this,wchar_t *param_1,TBoxSphereBounds<double,double> *param_2,
          TBoxSphereBounds<double,double> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((((param_3->Origin).field0_0x0._s_0.X == (param_2->Origin).field0_0x0._s_0.X) &&
       ((param_3->Origin).field0_0x0._s_0.Y == (param_2->Origin).field0_0x0._s_0.Y)) &&
      ((param_3->Origin).field0_0x0._s_0.Z == (param_2->Origin).field0_0x0._s_0.Z)) &&
     ((((param_3->BoxExtent).field0_0x0._s_0.X == (param_2->BoxExtent).field0_0x0._s_0.X &&
       ((param_3->BoxExtent).field0_0x0._s_0.Y == (param_2->BoxExtent).field0_0x0._s_0.Y)) &&
      (((param_3->BoxExtent).field0_0x0._s_0.Z == (param_2->BoxExtent).field0_0x0._s_0.Z &&
       (param_3->SphereRadius == param_2->SphereRadius)))))) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<TOptional<FName>_> @ 148b96580

bool __thiscall
FAutomationTestBase::TestEqual<TOptional<FName>_>
          (FAutomationTestBase *this,wchar_t *param_1,TOptional<FName> *param_2,
          TOptional<FName> *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FString local_18;
  
  uVar1 = (param_2->field0_0x0).TypedValue.ComparisonIndex.Value;
  if ((uVar1 != 0xffffffff) ==
      ((param_3->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff)) {
    if (uVar1 == 0xffffffff) {
      bVar3 = false;
    }
    else {
      bVar3 = *(FName *)&param_2->field0_0x0 != *(FName *)&param_3->field0_0x0;
    }
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    pcVar2 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<TOptional<FString>_> @ 148b96620

bool __thiscall
FAutomationTestBase::TestEqual<TOptional<FString>_>
          (FAutomationTestBase *this,wchar_t *param_1,TOptional<FString> *param_2,
          TOptional<FString> *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FString local_18;
  
  iVar3 = *(int *)((longlong)&param_2->field0_0x0 + 0xc);
  if ((iVar3 != -1) != (*(int *)((longlong)&param_3->field0_0x0 + 0xc) != -1)) {
    bVar4 = true;
    goto LAB_148b96689;
  }
  if (iVar3 != -1) {
    iVar3 = *(int *)((longlong)&param_2->field0_0x0 + 8);
    iVar1 = *(int *)((longlong)&param_3->field0_0x0 + 8);
    if (iVar3 != iVar1) {
      bVar4 = iVar3 + iVar1 != 1;
      goto LAB_148b96689;
    }
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_3->field0_0x0).TypedValue.Data.AllocatorInstance.Data);
      bVar4 = iVar3 != 0;
      goto LAB_148b96689;
    }
  }
  bVar4 = false;
LAB_148b96689:
  if (bVar4) {
    pcVar2 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<UE::Math::TPlane<double>_> @ 148b966f0

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TPlane<double>_>
          (FAutomationTestBase *this,wchar_t *param_1,TPlane<double> *param_2,
          TPlane<double> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((((double)param_3->_padding_ == (double)param_2->_padding_) &&
       ((double)param_3->_padding_ == (double)param_2->_padding_)) &&
      ((double)param_3->_padding_ == (double)param_2->_padding_)) && (param_3->W == param_2->W)) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<UE::Math::TVector4<double>_> @ 148b96790

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TVector4<double>_>
          (FAutomationTestBase *this,wchar_t *param_1,TVector4<double> *param_2,
          TVector4<double> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((((param_3->field0_0x0)._s_0.X == (param_2->field0_0x0)._s_0.X) &&
       ((param_3->field0_0x0)._s_0.Y == (param_2->field0_0x0)._s_0.Y)) &&
      ((param_3->field0_0x0)._s_0.Z == (param_2->field0_0x0)._s_0.Z)) &&
     ((param_3->field0_0x0)._s_0.W == (param_2->field0_0x0)._s_0.W)) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestNotEqual<unsigned_char> @ 148b96830

bool __thiscall
FAutomationTestBase::TestNotEqual<unsigned_char>
          (FAutomationTestBase *this,wchar_t *param_1,uchar *param_2,uchar *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_2 == *param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotEqual<UE::Math::TVector<double>_> @ 148b968a0

bool __thiscall
FAutomationTestBase::TestNotEqual<UE::Math::TVector<double>_>
          (FAutomationTestBase *this,wchar_t *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if ((((param_3->field0_0x0)._s_0.X == (param_2->field0_0x0)._s_0.X) &&
      ((param_3->field0_0x0)._s_0.Y == (param_2->field0_0x0)._s_0.Y)) &&
     ((param_3->field0_0x0)._s_0.Z == (param_2->field0_0x0)._s_0.Z)) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

