// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// GetConstSharedFragmentPtr<FTestConstSharedFragment_Int> @ 1470debd0

FTestConstSharedFragment_Int * __cdecl
FMassEntityTest::GetConstSharedFragmentPtr<FTestConstSharedFragment_Int>
          (FMassArchetypeSharedFragmentValues *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  longlong lVar5;
  FTestConstSharedFragment_Int *pFVar6;
  FConstSharedStruct local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar4,
                         L"TestConstSharedFragment_Int");
  }
  FMassArchetypeSharedFragmentValues::GetConstSharedFragmentStruct
            (param_1,&local_18,
             Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton);
  if (local_18.StructMemoryPtr.Object != (FStructSharedMemory *)0x0) {
    pUVar2 = ((local_18.StructMemoryPtr.Object)->ScriptStruct).field0_0x0.DebugPtr;
    lVar5 = (longlong)*(short *)((longlong)&pUVar2->_padding_ + 4);
    pFVar6 = (FTestConstSharedFragment_Int *)
             ((longlong)&((local_18.StructMemoryPtr.Object)->ScriptStruct).field0_0x0 + lVar5 + 7 &
             -lVar5);
    if (((pFVar6 != (FTestConstSharedFragment_Int *)0x0) &&
        (local_18.StructMemoryPtr.Object != (FStructSharedMemory *)0x0)) &&
       (pUVar2 != (UScriptStruct *)0x0)) {
      if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                             (UObject *)pUVar4,L"TestConstSharedFragment_Int");
      }
      if (pUVar2 == Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)
      goto LAB_1470dece9;
      if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                             (UObject *)pUVar4,L"TestConstSharedFragment_Int");
        if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_1470dece7;
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->
                   _padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->
           _padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_1470dece9;
    }
  }
LAB_1470dece7:
  pFVar6 = (FTestConstSharedFragment_Int *)0x0;
LAB_1470dece9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  return pFVar6;
}

// GetConstSharedFragmentPtr<FTestSharedFragment_Int> @ 1470ded10

FTestSharedFragment_Int * __cdecl
FMassEntityTest::GetConstSharedFragmentPtr<FTestSharedFragment_Int>
          (FMassArchetypeSharedFragmentValues *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  longlong lVar5;
  FTestSharedFragment_Int *pFVar6;
  FConstSharedStruct local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar4,
                         L"TestSharedFragment_Int");
  }
  FMassArchetypeSharedFragmentValues::GetConstSharedFragmentStruct
            (param_1,&local_18,
             Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton);
  if (local_18.StructMemoryPtr.Object != (FStructSharedMemory *)0x0) {
    pUVar2 = ((local_18.StructMemoryPtr.Object)->ScriptStruct).field0_0x0.DebugPtr;
    lVar5 = (longlong)*(short *)((longlong)&pUVar2->_padding_ + 4);
    pFVar6 = (FTestSharedFragment_Int *)
             ((longlong)&((local_18.StructMemoryPtr.Object)->ScriptStruct).field0_0x0 + lVar5 + 7 &
             -lVar5);
    if (((pFVar6 != (FTestSharedFragment_Int *)0x0) &&
        (local_18.StructMemoryPtr.Object != (FStructSharedMemory *)0x0)) &&
       (pUVar2 != (UScriptStruct *)0x0)) {
      if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar4,
                             L"TestSharedFragment_Int");
      }
      if (pUVar2 == Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)
      goto LAB_1470dee29;
      if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar4,
                             L"TestSharedFragment_Int");
        if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_1470dee27;
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->
                   _padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_1470dee29;
    }
  }
LAB_1470dee27:
  pFVar6 = (FTestSharedFragment_Int *)0x0;
LAB_1470dee29:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  return pFVar6;
}

// GetMutableSharedFragmentPtr<FTestConstSharedFragment_Int> @ 1470e0de0

FTestConstSharedFragment_Int * __cdecl
FMassEntityTest::GetMutableSharedFragmentPtr<FTestConstSharedFragment_Int>
          (FMassArchetypeSharedFragmentValues *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  longlong lVar5;
  FTestConstSharedFragment_Int *pFVar6;
  FSharedStruct local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar4,
                         L"TestConstSharedFragment_Int");
  }
  FMassArchetypeSharedFragmentValues::GetSharedFragmentStruct
            (param_1,&local_18,
             Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton);
  if (local_18.StructMemoryPtr.Object != (FStructSharedMemory *)0x0) {
    pUVar2 = ((local_18.StructMemoryPtr.Object)->ScriptStruct).field0_0x0.DebugPtr;
    lVar5 = (longlong)*(short *)((longlong)&pUVar2->_padding_ + 4);
    pFVar6 = (FTestConstSharedFragment_Int *)
             ((longlong)&((local_18.StructMemoryPtr.Object)->ScriptStruct).field0_0x0 + lVar5 + 7 &
             -lVar5);
    if (((pFVar6 != (FTestConstSharedFragment_Int *)0x0) &&
        (local_18.StructMemoryPtr.Object != (FStructSharedMemory *)0x0)) &&
       (pUVar2 != (UScriptStruct *)0x0)) {
      if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                             (UObject *)pUVar4,L"TestConstSharedFragment_Int");
      }
      if (pUVar2 == Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)
      goto LAB_1470e0ef9;
      if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                             (UObject *)pUVar4,L"TestConstSharedFragment_Int");
        if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_1470e0ef7;
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->
                   _padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->
           _padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_1470e0ef9;
    }
  }
LAB_1470e0ef7:
  pFVar6 = (FTestConstSharedFragment_Int *)0x0;
LAB_1470e0ef9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  return pFVar6;
}

// GetMutableSharedFragmentPtr<FTestSharedFragment_Int> @ 1470e0f20

/* WARNING: Removing unreachable block (ram,0x0001470e0f9e) */

FTestSharedFragment_Int * __cdecl
FMassEntityTest::GetMutableSharedFragmentPtr<FTestSharedFragment_Int>
          (FMassArchetypeSharedFragmentValues *param_1)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  longlong lVar3;
  FTestSharedFragment_Int *pFVar4;
  void *pvVar5;
  FSharedStruct local_18;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar2,
                         L"TestSharedFragment_Int");
  }
  FMassArchetypeSharedFragmentValues::GetSharedFragmentStruct
            (param_1,&local_18,
             Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton);
  if (local_18.StructMemoryPtr.Object != (FStructSharedMemory *)0x0) {
    pUVar1 = ((local_18.StructMemoryPtr.Object)->ScriptStruct).field0_0x0.DebugPtr;
    lVar3 = (longlong)*(short *)((longlong)&pUVar1->_padding_ + 4);
    pvVar5 = (void *)((longlong)&((local_18.StructMemoryPtr.Object)->ScriptStruct).field0_0x0 +
                      lVar3 + 7 & -lVar3);
    if (((pvVar5 != (void *)0x0) && (local_18.StructMemoryPtr.Object != (FStructSharedMemory *)0x0))
       && (pUVar1 != (UScriptStruct *)0x0)) {
      pFVar4 = UE::StructUtils::GetStructPtr<FTestSharedFragment_Int>(pUVar1,pvVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController);
      return pFVar4;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  return (FTestSharedFragment_Int *)0x0;
}

