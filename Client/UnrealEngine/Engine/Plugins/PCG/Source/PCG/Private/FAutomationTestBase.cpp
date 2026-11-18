// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// TestEqual<UE::Math::TQuat<double>_> @ 149ff0980

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TQuat<double>_>
          (FAutomationTestBase *this,wchar_t *param_1,TQuat<double> *param_2,TQuat<double> *param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 in_EAX;
  int iVar4;
  undefined4 in_R10D;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  FString local_18;
  
  lVar6 = -(ulonglong)(param_2->W != param_3->W);
  lVar7 = -(ulonglong)(param_2->Y != param_3->Y);
  auVar2._8_4_ = (int)lVar6;
  auVar2._0_8_ = -(ulonglong)(param_2->Z != param_3->Z);
  auVar2._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  uVar5 = movmskpd(in_R10D,auVar2);
  auVar3._8_4_ = (int)lVar7;
  auVar3._0_8_ = -(ulonglong)(param_2->X != param_3->X);
  auVar3._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
  iVar4 = movmskpd(in_EAX,auVar3);
  if ((uVar5 & 0x3fffffff) != 0 || iVar4 != 0) {
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

// TestEqual<UE::Math::TVector2<double>_> @ 149ff0a10

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TVector2<double>_>
          (FAutomationTestBase *this,wchar_t *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((param_3->field0_0x0)._s_0.X == (param_2->field0_0x0)._s_0.X) &&
     ((param_3->field0_0x0)._s_0.Y == (param_2->field0_0x0)._s_0.Y)) {
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

// TestEqual<FSoftObjectPath> @ 149ff0a90

bool __thiscall
FAutomationTestBase::TestEqual<FSoftObjectPath>
          (FAutomationTestBase *this,wchar_t *param_1,FSoftObjectPath *param_2,
          FSoftObjectPath *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  bVar2 = FSoftObjectPath::operator==(param_2,param_3);
  if (!bVar2) {
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

