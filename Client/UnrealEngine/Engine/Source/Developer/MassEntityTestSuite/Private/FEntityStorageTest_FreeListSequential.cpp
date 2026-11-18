// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// FEntityStorageTest_FreeListSequential @ 1470f3a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FEntityStorageTest_FreeListSequential * __thiscall
FMassEntityStorageTest::FEntityStorageTest_FreeListSequential::FEntityStorageTest_FreeListSequential
          (FEntityStorageTest_FreeListSequential *this)

{
  initializer_list<FMassEntityStorageTest::EEntityManagerMode> *piVar1;
  TArray<FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  initializer_list<FMassEntityStorageTest::EEntityManagerMode> *piVar4;
  undefined1 auStack_88 [32];
  initializer_list<FMassEntityStorageTest::EEntityManagerMode> local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  EEntityManagerMode local_38 [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  FEntityStorageTestBase::FEntityStorageTestBase((FEntityStorageTestBase *)this);
  *(undefined ***)this = &___7FEntityStorageTest_FreeListBase_FMassEntityStorageTest__6B_;
  *(undefined ***)this = &___7FEntityStorageTest_FreeListSequential_FMassEntityStorageTest__6B_;
  local_38[0] = Sequential;
  local_38[1] = 0;
  local_38[2] = 0;
  piVar1 = std::initializer_list<enum_FMassEntityStorageTest::EEntityManagerMode>::
           initializer_list<enum_FMassEntityStorageTest::EEntityManagerMode>
                     (local_48,local_38,local_38 + 3);
  piVar4 = &local_68;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar1->_First;
    piVar1 = (initializer_list<FMassEntityStorageTest::EEntityManagerMode> *)
             ((longlong)&piVar1->_First + 1);
    piVar4 = (initializer_list<FMassEntityStorageTest::EEntityManagerMode> *)
             ((longlong)&piVar4->_First + 1);
  }
  pTVar2 = TArray<enum_FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_>::
           TArray<enum_FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_>
                     (local_58,&local_68);
  TArray<enum_FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_>::operator=
            (&this->field_0x38,pTVar2);
  TArray<enum_FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_>::
  ~TArray<enum_FMassEntityStorageTest::EEntityManagerMode,TSizedDefaultAllocator<32>_>(local_58);
  return this;
}

