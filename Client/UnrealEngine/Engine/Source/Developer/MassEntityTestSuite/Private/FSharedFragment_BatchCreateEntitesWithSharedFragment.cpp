// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// InstantTest @ 147122760

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::
FSharedFragment_BatchCreateEntitesWithSharedFragment<FConstSharedStruct,FTestConstSharedFragment_Int>
::InstantTest(FSharedFragment_BatchCreateEntitesWithSharedFragment<FConstSharedStruct,FTestConstSharedFragment_Int>
              *this)

{
  int iVar1;
  int iVar2;
  FMassEntityManager *pFVar3;
  FAutomationTestBase *pFVar4;
  FMassEntityHandle FVar5;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar6;
  code *pcVar7;
  FMassEntityHandle *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  UPackage *pUVar11;
  UScriptStruct *pUVar12;
  UScriptStruct *pUVar13;
  FConstSharedStruct *pFVar14;
  longlong lVar15;
  FTestConstSharedFragment_Int *pFVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  int iVar21;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar22;
  void *pvVar23;
  undefined1 local_res8 [8];
  uint local_res10;
  FMassEntityHandle *local_res18;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_108;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_f8;
  FConstStructView local_e8;
  FMassArchetypeHandle local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if ((*(longlong *)&this->field_0x50 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  iVar21 = (int)ROUND((float)*(int *)(*(longlong *)&this->field_0x50 + 0x2a8) * __real_4019999a -
                      __real_3f000000) >> 1;
  FSharedFragmentBase::CreateEntities<FConstSharedStruct,FTestConstSharedFragment_Int>
            ((FSharedFragmentBase *)this,&local_108,iVar21,0x3ff);
  FSharedFragmentBase::CreateEntities<FConstSharedStruct,FTestConstSharedFragment_Int>
            ((FSharedFragmentBase *)this,&local_f8,1,0x3f);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pFVar3 = *(FMassEntityManager **)&this->field_0x28;
  if ((local_108.ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  FMassEntityManager::GetArchetypeForEntityUnsafe
            (pFVar3,&local_d8,*(FMassEntityHandle *)local_108.AllocatorInstance.Data);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
  if ((local_d8.DataPtr.Object == (FMassArchetypeData *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  iVar1 = *(int *)&((local_d8.DataPtr.Object)->EntityMap).field_0x8;
  iVar2 = *(int *)&((local_d8.DataPtr.Object)->EntityMap).field_0x34;
  ::FString::FString(&local_b8,"All the entities should end up in the same archetype");
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar20.Data = local_b8.Data.AllocatorInstance.Data;
  }
  bVar9 = FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar20.Data,iVar1 - iVar2,iVar21 + 1);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (bVar9) {
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
    if ((local_d8.DataPtr.Object == (FMassArchetypeData *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArchetypeHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                           ,0x1ff,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    iVar21 = ((local_d8.DataPtr.Object)->Chunks).ArrayNum;
    ::FString::FString(&local_a8,
                       "The total number of chunks in the resulting archetype should match expectations"
                      );
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar20.Data = local_a8.Data.AllocatorInstance.Data;
    }
    bVar9 = FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar20.Data,iVar21,3);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      uVar17 = (ulonglong)local_108.ArrayNum;
      local_res10 = local_108.ArrayNum;
      local_res18 = (FMassEntityHandle *)(local_108.AllocatorInstance.Data + uVar17 * 8);
      uVar19 = uVar17;
      FVar20.Data = local_108.AllocatorInstance.Data;
      while( true ) {
        pFVar8 = local_res18;
        if ((int)uVar17 != (int)uVar19) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if ((FMassEntityHandle *)FVar20.Data == pFVar8) break;
        FVar5 = *(FMassEntityHandle *)FVar20.Data;
        if ((*(longlong *)&this->field_0x28 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar3 = *(FMassEntityManager **)&this->field_0x28;
        if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_MassEntityTestSuite();
          pUVar12 = GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                                    (UObject *)pUVar11,L"TestConstSharedFragment_Int");
          Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton = pUVar12;
          if (pUVar12 != (UScriptStruct *)0x0) goto LAB_147122a94;
LAB_147122ad9:
          ::FString::FString(&local_c8,L"None");
LAB_147122aea:
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("UE::Mass::IsA<FMassConstSharedFragment>(ConstSharedFragmentType)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                             ,0x262,
                             L"GetConstSharedFragmentDataStruct called with an invalid fragment type \'%s\'"
                            );
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
        }
        else {
LAB_147122a94:
          pUVar12 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
          pUVar13 = FMassConstSharedFragment::StaticStruct();
          if (pUVar13 == (UScriptStruct *)0x0) {
LAB_147122ac7:
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar12,&local_c8,(UObject *)0x0);
            goto LAB_147122aea;
          }
          iVar21 = (int)pUVar13->_padding_;
          if (((int)pUVar12->_padding_ < iVar21) ||
             ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar21 * 8) !=
              &pUVar13->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (!bVar9) {
            if (pUVar12 == (UScriptStruct *)0x0) goto LAB_147122ad9;
            goto LAB_147122ac7;
          }
        }
        pFVar14 = FMassEntityManager::InternalGetConstSharedFragmentPtr(pFVar3,FVar5,pUVar12);
        if (pFVar14 == (FConstSharedStruct *)0x0) {
          TVar22.DebugPtr = (UScriptStruct *)0x0;
          pvVar23 = (void *)0x0;
        }
        else {
          pTVar6 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar14->StructMemoryPtr).Object;
          if (pTVar6 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
            pvVar23 = (void *)0x0;
            TVar22.DebugPtr = (UScriptStruct *)0x0;
          }
          else {
            TVar22 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar6->DebugPtr;
            lVar15 = (longlong)*(short *)((longlong)&(TVar22.DebugPtr)->_padding_ + 4);
            pvVar23 = (void *)(lVar15 + 7 + (longlong)pTVar6 & -lVar15);
          }
        }
        if ((*(longlong *)&this->field_0x20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TestRunner",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                               ,0x46,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
        if ((pvVar23 == (void *)0x0) || (TVar22.DebugPtr == (UScriptStruct *)0x0)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        ::FString::FString(&local_98,"SharedFragment for entity type A should be valid");
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_98.Data.ArrayNum != 0) {
          FVar18.Data = local_98.Data.AllocatorInstance.Data;
        }
        bVar9 = FAutomationTestBase::TestTrue(pFVar4,(wchar_t *)FVar18.Data,bVar9);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (!bVar9) goto LAB_147122f34;
        if ((*(longlong *)&this->field_0x20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TestRunner",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                               ,0x46,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
        if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_MassEntityTestSuite();
          Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                               (UObject *)pUVar11,L"TestConstSharedFragment_Int");
        }
        pUVar12 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
        ::FString::FString(&local_88,"SharedFragment for entity type A  should be of expected type")
        ;
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar18.Data = local_88.Data.AllocatorInstance.Data;
        }
        bVar9 = FAutomationTestBase::TestEqual
                          (pFVar4,(wchar_t *)FVar18.Data,(ulong64)TVar22,(ulong64)pUVar12);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (!bVar9) goto LAB_147122f34;
        if ((*(longlong *)&this->field_0x20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TestRunner",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                               ,0x46,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
        pFVar16 = UE::StructUtils::GetStructRef<FTestConstSharedFragment_Int_const_>
                            (TVar22.DebugPtr,pvVar23);
        iVar21 = pFVar16->Value;
        ::FString::FString(&local_78,
                           "SharedFragment\'s value for entity type A should match the expected value"
                          );
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar18.Data = local_78.Data.AllocatorInstance.Data;
        }
        bVar9 = FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar18.Data,iVar21,0x3ff);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (!bVar9) goto LAB_147122f34;
        uVar17 = local_108._8_8_ & 0xffffffff;
        FVar20.Data = FVar20.Data + 8;
        uVar19 = (ulonglong)local_res10;
      }
      if ((local_f8.ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      FSharedFragmentBase::GetSharedFragmentView<FConstSharedStruct,FTestConstSharedFragment_Int>
                ((FSharedFragmentBase *)this,&local_e8,
                 *(FMassEntityHandle *)local_f8.AllocatorInstance.Data);
      if ((*(longlong *)&this->field_0x20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
      if ((local_e8.StructMemory == (uchar *)0x0) || (local_e8.ScriptStruct == (UScriptStruct *)0x0)
         ) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      ::FString::FString(&local_68,"SharedFragment for entity type B should be valid");
      FVar20.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar20.Data = local_68.Data.AllocatorInstance.Data;
      }
      bVar9 = FAutomationTestBase::TestTrue(pFVar4,(wchar_t *)FVar20.Data,bVar9);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        if ((*(longlong *)&this->field_0x20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TestRunner",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                               ,0x46,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
        if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_MassEntityTestSuite();
          Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                               (UObject *)pUVar11,L"TestConstSharedFragment_Int");
        }
        pUVar12 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
        ::FString::FString(&local_58,"SharedFragment for entity type B  should be of expected type")
        ;
        FVar20.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar20.Data = local_58.Data.AllocatorInstance.Data;
        }
        bVar9 = FAutomationTestBase::TestEqual
                          (pFVar4,(wchar_t *)FVar20.Data,(ulong64)local_e8.ScriptStruct,
                           (ulong64)pUVar12);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          if ((*(longlong *)&this->field_0x20 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("TestRunner",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                                 ,0x46,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
          pFVar16 = UE::StructUtils::GetStructRef<FTestConstSharedFragment_Int_const_>
                              (local_e8.ScriptStruct,local_e8.StructMemory);
          iVar21 = pFVar16->Value;
          ::FString::FString(&local_48,
                             "SharedFragment\'s value for entity type B should match the expected value"
                            );
          FVar20.Data = (FScriptContainerElement *)L"";
          if (local_48.Data.ArrayNum != 0) {
            FVar20.Data = local_48.Data.AllocatorInstance.Data;
          }
          bVar9 = FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar20.Data,iVar21,0x3f);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            bVar9 = true;
            goto LAB_147122f3b;
          }
        }
      }
    }
  }
LAB_147122f34:
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar9 = false;
LAB_147122f3b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.DataPtr.SharedReferenceCount.ReferenceController);
  if ((FMassEntityHandle *)local_f8.AllocatorInstance.Data != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  if ((FMassEntityHandle *)local_108.AllocatorInstance.Data != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return bVar9;
}

// InstantTest @ 147122fb0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::
FSharedFragment_BatchCreateEntitesWithSharedFragment<FSharedStruct,FTestSharedFragment_Int>::
InstantTest(FSharedFragment_BatchCreateEntitesWithSharedFragment<FSharedStruct,FTestSharedFragment_Int>
            *this)

{
  int iVar1;
  int iVar2;
  FMassEntityManager *pFVar3;
  FAutomationTestBase *pFVar4;
  FMassEntityHandle FVar5;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar6;
  code *pcVar7;
  FMassEntityHandle *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  UPackage *pUVar11;
  UScriptStruct *pUVar12;
  UScriptStruct *pUVar13;
  FSharedStruct *pFVar14;
  longlong lVar15;
  FTestSharedFragment_Int *pFVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  int iVar21;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar22;
  void *pvVar23;
  undefined1 local_res8 [8];
  uint local_res10;
  FMassEntityHandle *local_res18;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_108;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_f8;
  FConstStructView local_e8;
  FMassArchetypeHandle local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if ((*(longlong *)&this->field_0x50 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  iVar21 = (int)ROUND((float)*(int *)(*(longlong *)&this->field_0x50 + 0x2a8) * __real_4019999a -
                      __real_3f000000) >> 1;
  FSharedFragmentBase::CreateEntities<FSharedStruct,FTestSharedFragment_Int>
            ((FSharedFragmentBase *)this,&local_108,iVar21,0x3ff);
  FSharedFragmentBase::CreateEntities<FSharedStruct,FTestSharedFragment_Int>
            ((FSharedFragmentBase *)this,&local_f8,1,0x3f);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pFVar3 = *(FMassEntityManager **)&this->field_0x28;
  if ((local_108.ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  FMassEntityManager::GetArchetypeForEntityUnsafe
            (pFVar3,&local_d8,*(FMassEntityHandle *)local_108.AllocatorInstance.Data);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
  if ((local_d8.DataPtr.Object == (FMassArchetypeData *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  iVar1 = *(int *)&((local_d8.DataPtr.Object)->EntityMap).field_0x8;
  iVar2 = *(int *)&((local_d8.DataPtr.Object)->EntityMap).field_0x34;
  ::FString::FString(&local_b8,"All the entities should end up in the same archetype");
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar20.Data = local_b8.Data.AllocatorInstance.Data;
  }
  bVar9 = FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar20.Data,iVar1 - iVar2,iVar21 + 1);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (bVar9) {
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
    if ((local_d8.DataPtr.Object == (FMassArchetypeData *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArchetypeHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                           ,0x1ff,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    iVar21 = ((local_d8.DataPtr.Object)->Chunks).ArrayNum;
    ::FString::FString(&local_a8,
                       "The total number of chunks in the resulting archetype should match expectations"
                      );
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar20.Data = local_a8.Data.AllocatorInstance.Data;
    }
    bVar9 = FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar20.Data,iVar21,3);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      uVar17 = (ulonglong)local_108.ArrayNum;
      local_res10 = local_108.ArrayNum;
      local_res18 = (FMassEntityHandle *)(local_108.AllocatorInstance.Data + uVar17 * 8);
      uVar19 = uVar17;
      FVar20.Data = local_108.AllocatorInstance.Data;
      while( true ) {
        pFVar8 = local_res18;
        if ((int)uVar17 != (int)uVar19) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if ((FMassEntityHandle *)FVar20.Data == pFVar8) break;
        FVar5 = *(FMassEntityHandle *)FVar20.Data;
        if ((*(longlong *)&this->field_0x28 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar3 = *(FMassEntityManager **)&this->field_0x28;
        if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_MassEntityTestSuite();
          pUVar12 = GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,
                                    (UObject *)pUVar11,L"TestSharedFragment_Int");
          Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton = pUVar12;
          if (pUVar12 != (UScriptStruct *)0x0) goto LAB_1471232e4;
LAB_147123329:
          ::FString::FString(&local_c8,L"None");
LAB_14712333a:
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("UE::Mass::IsA<FMassSharedFragment>(SharedFragmentType)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                             ,0x287,
                             L"GetSharedFragmentDataStruct called with an invalid fragment type \'%s\'"
                            );
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
        }
        else {
LAB_1471232e4:
          pUVar12 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
          pUVar13 = FMassSharedFragment::StaticStruct();
          if (pUVar13 == (UScriptStruct *)0x0) {
LAB_147123317:
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar12,&local_c8,(UObject *)0x0);
            goto LAB_14712333a;
          }
          iVar21 = (int)pUVar13->_padding_;
          if (((int)pUVar12->_padding_ < iVar21) ||
             ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar21 * 8) !=
              &pUVar13->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (!bVar9) {
            if (pUVar12 == (UScriptStruct *)0x0) goto LAB_147123329;
            goto LAB_147123317;
          }
        }
        pFVar14 = FMassEntityManager::InternalGetSharedFragmentPtr(pFVar3,FVar5,pUVar12);
        if (pFVar14 == (FSharedStruct *)0x0) {
          TVar22.DebugPtr = (UScriptStruct *)0x0;
          pvVar23 = (void *)0x0;
        }
        else {
          pTVar6 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar14->StructMemoryPtr).Object;
          if (pTVar6 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
            pvVar23 = (void *)0x0;
            TVar22.DebugPtr = (UScriptStruct *)0x0;
          }
          else {
            TVar22 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar6->DebugPtr;
            lVar15 = (longlong)*(short *)((longlong)&(TVar22.DebugPtr)->_padding_ + 4);
            pvVar23 = (void *)(lVar15 + 7 + (longlong)pTVar6 & -lVar15);
          }
        }
        if ((*(longlong *)&this->field_0x20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TestRunner",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                               ,0x46,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
        if ((pvVar23 == (void *)0x0) || (TVar22.DebugPtr == (UScriptStruct *)0x0)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        ::FString::FString(&local_98,"SharedFragment for entity type A should be valid");
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_98.Data.ArrayNum != 0) {
          FVar18.Data = local_98.Data.AllocatorInstance.Data;
        }
        bVar9 = FAutomationTestBase::TestTrue(pFVar4,(wchar_t *)FVar18.Data,bVar9);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (!bVar9) goto LAB_147123784;
        if ((*(longlong *)&this->field_0x20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TestRunner",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                               ,0x46,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
        if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_MassEntityTestSuite();
          Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar11,
                               L"TestSharedFragment_Int");
        }
        pUVar12 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
        ::FString::FString(&local_88,"SharedFragment for entity type A  should be of expected type")
        ;
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar18.Data = local_88.Data.AllocatorInstance.Data;
        }
        bVar9 = FAutomationTestBase::TestEqual
                          (pFVar4,(wchar_t *)FVar18.Data,(ulong64)TVar22,(ulong64)pUVar12);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (!bVar9) goto LAB_147123784;
        if ((*(longlong *)&this->field_0x20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TestRunner",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                               ,0x46,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
        pFVar16 = UE::StructUtils::GetStructRef<FTestSharedFragment_Int_const_>
                            (TVar22.DebugPtr,pvVar23);
        iVar21 = pFVar16->Value;
        ::FString::FString(&local_78,
                           "SharedFragment\'s value for entity type A should match the expected value"
                          );
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar18.Data = local_78.Data.AllocatorInstance.Data;
        }
        bVar9 = FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar18.Data,iVar21,0x3ff);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (!bVar9) goto LAB_147123784;
        uVar17 = local_108._8_8_ & 0xffffffff;
        FVar20.Data = FVar20.Data + 8;
        uVar19 = (ulonglong)local_res10;
      }
      if ((local_f8.ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      FSharedFragmentBase::GetSharedFragmentView<FSharedStruct,FTestSharedFragment_Int>
                ((FSharedFragmentBase *)this,&local_e8,
                 *(FMassEntityHandle *)local_f8.AllocatorInstance.Data);
      if ((*(longlong *)&this->field_0x20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
      if ((local_e8.StructMemory == (uchar *)0x0) || (local_e8.ScriptStruct == (UScriptStruct *)0x0)
         ) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      ::FString::FString(&local_68,"SharedFragment for entity type B should be valid");
      FVar20.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar20.Data = local_68.Data.AllocatorInstance.Data;
      }
      bVar9 = FAutomationTestBase::TestTrue(pFVar4,(wchar_t *)FVar20.Data,bVar9);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        if ((*(longlong *)&this->field_0x20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TestRunner",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                               ,0x46,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
        if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_MassEntityTestSuite();
          Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar11,
                               L"TestSharedFragment_Int");
        }
        pUVar12 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
        ::FString::FString(&local_58,"SharedFragment for entity type B  should be of expected type")
        ;
        FVar20.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar20.Data = local_58.Data.AllocatorInstance.Data;
        }
        bVar9 = FAutomationTestBase::TestEqual
                          (pFVar4,(wchar_t *)FVar20.Data,(ulong64)local_e8.ScriptStruct,
                           (ulong64)pUVar12);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          if ((*(longlong *)&this->field_0x20 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("TestRunner",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                                 ,0x46,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
          pFVar16 = UE::StructUtils::GetStructRef<FTestSharedFragment_Int_const_>
                              (local_e8.ScriptStruct,local_e8.StructMemory);
          iVar21 = pFVar16->Value;
          ::FString::FString(&local_48,
                             "SharedFragment\'s value for entity type B should match the expected value"
                            );
          FVar20.Data = (FScriptContainerElement *)L"";
          if (local_48.Data.ArrayNum != 0) {
            FVar20.Data = local_48.Data.AllocatorInstance.Data;
          }
          bVar9 = FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar20.Data,iVar21,0x3f);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            bVar9 = true;
            goto LAB_14712378b;
          }
        }
      }
    }
  }
LAB_147123784:
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar9 = false;
LAB_14712378b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.DataPtr.SharedReferenceCount.ReferenceController);
  if ((FMassEntityHandle *)local_f8.AllocatorInstance.Data != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  if ((FMassEntityHandle *)local_108.AllocatorInstance.Data != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return bVar9;
}

