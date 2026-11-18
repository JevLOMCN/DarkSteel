// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSSBlueprint
// Functions: 8

// GetTestFlags @ 14de2b3c0

EAutomationTestFlags __thiscall
FDLSSTemporalUpscalerModularFeatureTest::GetTestFlags(FDLSSTemporalUpscalerModularFeatureTest *this)

{
  return ProductFilter|NonNullRHI|ClientContext|EditorContext;
}

// IsStressTest @ 14de2b3d0

bool __thiscall
FDLSSTemporalUpscalerModularFeatureTest::IsStressTest(FDLSSTemporalUpscalerModularFeatureTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14de2b3e0

uint __thiscall
FDLSSTemporalUpscalerModularFeatureTest::GetRequiredDeviceNum
          (FDLSSTemporalUpscalerModularFeatureTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14de2b3f0

FString * __thiscall
FDLSSTemporalUpscalerModularFeatureTest::GetTestSourceFileName
          (FDLSSTemporalUpscalerModularFeatureTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSSBlueprint\\Private\\Tests\\DLSSUpscalerModularFeatureTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14de2b420

int __thiscall
FDLSSTemporalUpscalerModularFeatureTest::GetTestSourceFileLine
          (FDLSSTemporalUpscalerModularFeatureTest *this)

{
  return 0x21;
}

// GetTests @ 14de2b430

/* WARNING: Removing unreachable block (ram,0x00014de2b51d) */
/* WARNING: Removing unreachable block (ram,0x00014de2b5e8) */

void __thiscall
FDLSSTemporalUpscalerModularFeatureTest::GetTests
          (FDLSSTemporalUpscalerModularFeatureTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Nvidia.DLSS.ModularFeature");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14de2b610

bool __thiscall
FDLSSTemporalUpscalerModularFeatureTest::RunTest
          (FDLSSTemporalUpscalerModularFeatureTest *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  UEnum *this_00;
  UEnum *pUVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  IModularFeatures *pIVar11;
  FName *pFVar12;
  longlong lVar13;
  FName *pFVar14;
  FPropertyBagPropertyDesc *pFVar15;
  UPackage *pUVar16;
  FString *pFVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  ForAnyElementType FVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_res20 [8];
  ForAnyElementType local_158;
  int local_150;
  int iStack_14c;
  FScriptContainerElement *local_148;
  UEnum *local_140;
  FString local_138;
  FString local_128;
  TArray<UDLSSMode,TSizedDefaultAllocator<32>_> local_118;
  FString local_108;
  FString local_f8;
  FInstancedStruct local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FString local_60;
  FString local_50;
  
  bVar5 = UDLSSLibrary::IsDLSSEnabled();
  bVar6 = UDLSSLibrary::IsDLSSSupported();
  if (bVar6) {
    UDLSSLibrary::EnableDLSS(false);
  }
  pIVar11 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar11 + 8))(pIVar11);
  pIVar11 = IModularFeatures::Get();
  pFVar12 = ::FName::FName(&local_88,L"UpscalerModularFeature");
  pFVar23 = (FScriptContainerElement *)0x0;
  FVar2 = *pFVar12;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  iStack_14c = 0;
  iVar10 = (**(code **)((longlong)*pIVar11 + 0x18))(pIVar11,FVar2);
  pFVar20 = pFVar23;
  if (0 < iVar10) {
    do {
      lVar13 = (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,FVar2,pFVar20);
      local_148 = (FScriptContainerElement *)(lVar13 + -8);
      if (lVar13 == 0) {
        local_148 = pFVar23;
      }
      if (((local_158.Data <= (FScriptContainerElement *)&local_148) &&
          ((FScriptContainerElement *)&local_148 < local_158.Data + (longlong)iStack_14c * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      if (local_150 == iStack_14c) {
        local_150 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_158,&iStack_14c);
      }
      iVar1 = local_150 + 1;
      uVar19 = (int)pFVar20 + 1;
      *(FScriptContainerElement **)(local_158.Data + (longlong)local_150 * 8) = local_148;
      pFVar20 = (FScriptContainerElement *)(ulonglong)uVar19;
      local_150 = iVar1;
    } while ((int)uVar19 < iVar10);
  }
  pFVar20 = local_158.Data + (longlong)local_150 * 8;
  for (FVar21.Data = local_158.Data; pFVar22 = pFVar23, FVar21.Data != pFVar20;
      FVar21.Data = FVar21.Data + 8) {
                    /* WARNING: Load size is inaccurate */
    pFVar22 = *FVar21.Data;
    if ((pFVar22 != (FScriptContainerElement *)0x0) &&
       (cVar8 = (**(code **)(*(longlong *)pFVar22 + 0x20))(pFVar22), cVar8 != '\0')) {
      pFVar12 = ::FName::FName(&local_80,"DLSS");
      pFVar14 = (FName *)(**(code **)(*(longlong *)pFVar22 + 8))(pFVar22);
      pFVar22 = FVar21.Data;
      if (*pFVar14 == *pFVar12) break;
    }
  }
  bVar6 = UDLSSLibrary::IsDLSSSupported();
  if (!bVar6) {
    if ((pFVar22 == (FScriptContainerElement *)0x0) ||
       (*(FScriptContainerElement **)pFVar22 == (FScriptContainerElement *)0x0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    ::FString::FString(&local_108,"Found \'DLSS\' modular feature when DLSS not supported");
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar21.Data = local_108.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar21.Data,bVar6);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    bVar6 = true;
    goto LAB_14de2bb52;
  }
  if ((pFVar22 == (FScriptContainerElement *)0x0) ||
     (*(FScriptContainerElement **)pFVar22 == (FScriptContainerElement *)0x0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  ::FString::FString(&local_f8,"Found \'DLSS\' modular feature");
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_f8.Data.ArrayNum != 0) {
    FVar21.Data = local_f8.Data.AllocatorInstance.Data;
  }
  bVar6 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar21.Data,bVar6);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    pFVar22 = *(FScriptContainerElement **)pFVar22;
    FInstancedStruct::FInstancedStruct(&local_e8);
    bVar6 = (bool)(**(code **)(*(longlong *)pFVar22 + 0x38))(pFVar22,&local_e8);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"DLSSFeature->GetSettings(PropBag)",bVar6);
    pFVar12 = ::FName::FName(&local_78,"Quality");
    pFVar15 = FInstancedPropertyBag::FindPropertyDescByName
                        ((FInstancedPropertyBag *)&local_e8,*pFVar12);
    if (pFVar15 == (FPropertyBagPropertyDesc *)0x0) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_d8,L"Expected \'%s\' to be not null.");
      (*pcVar3)(this,&local_d8,0);
LAB_14de2b948:
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    else if (pFVar15->ValueType != Enum) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_c8,L"%s: The two values are not equal.");
      (*pcVar3)(this,&local_c8,0);
      local_d8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      goto LAB_14de2b948;
    }
    FInstancedStruct::Reset(&local_e8);
  }
  if (Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton == (UEnum *)0x0) {
    pUVar16 = Z_Construct_UPackage__Script_DLSSBlueprint();
    Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode,(UObject *)pUVar16,L"UDLSSMode");
    if (Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton == (UEnum *)0x0) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_b8,L"Expected \'%s\' to be not null.");
      (*pcVar3)(this,&local_b8,0);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      bVar6 = false;
      goto LAB_14de2bb52;
    }
  }
  this_00 = Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton;
  UDLSSLibrary::GetSupportedDLSSModes(&local_118);
  iVar10 = local_118.ArrayNum;
  pFVar20 = local_118.AllocatorInstance.Data + local_118.ArrayNum;
  FVar21.Data = local_118.AllocatorInstance.Data;
  while( true ) {
    if (local_118.ArrayNum != iVar10) {
      `TCheckedPointerIterator<enum_UDLSSMode,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar21.Data == pFVar20) break;
    if (*FVar21.Data != (FScriptContainerElement)0x0) {
      UEnum::GetNameStringByValue(this_00,&local_98,(ulonglong)(byte)*FVar21.Data);
      pFVar17 = ::FString::FString(&local_60,L"EDLSSUpscalerModularFeatureQuality::");
      ::FString::ConcatFF(&local_128,pFVar17,&local_98);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      local_140 = (UEnum *)0x0;
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar18.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar12 = ::FName::FName(&local_70,(wchar_t *)FVar18.Data);
      FVar2 = *pFVar12;
      pFVar12 = ::FName::FName(&local_68,L"/Script/DLSS");
      UEnum::LookupEnumName(*pFVar12,FVar2,None,&local_140);
      pUVar4 = local_140;
      pFVar17 = ::FString::FString(&local_50,L"enum value ");
      ::FString::ConcatFF(&local_138,pFVar17,&local_128);
      if (pUVar4 == (UEnum *)0x0) {
        pcVar3 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_a8,L"Expected \'%s\' to be not null.");
        (*pcVar3)(this,&local_a8,0);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    FVar21.Data = FVar21.Data + 1;
  }
  bVar6 = true;
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
LAB_14de2bb52:
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  pIVar11 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar11 + 0x10))(pIVar11);
  bVar9 = UDLSSLibrary::IsDLSSSupported();
  if (bVar9) {
    UDLSSLibrary::EnableDLSS(bVar5);
  }
  return bVar6;
}

// GetBeautifiedTestName @ 14de2bbb0

FString * __thiscall
FDLSSTemporalUpscalerModularFeatureTest::GetBeautifiedTestName
          (FDLSSTemporalUpscalerModularFeatureTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Nvidia.DLSS.ModularFeature");
  return __return_storage_ptr__;
}

