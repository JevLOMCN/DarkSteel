// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 8

// GetTestFlags @ 148c76e60

EAutomationTestFlags __thiscall
FClientFunctionalTestingMapsEditor::GetTestFlags(FClientFunctionalTestingMapsEditor *this)

{
  return ProductFilter|EditorContext;
}

// IsStressTest @ 148c76e70

bool __thiscall
FClientFunctionalTestingMapsEditor::IsStressTest(FClientFunctionalTestingMapsEditor *this)

{
  return true;
}

// GetRequiredDeviceNum @ 148c76e80

uint __thiscall
FClientFunctionalTestingMapsEditor::GetRequiredDeviceNum(FClientFunctionalTestingMapsEditor *this)

{
  return 1;
}

// GetTestSourceFileName @ 148c76e90

FString * __thiscall
FClientFunctionalTestingMapsEditor::GetTestSourceFileName
          (FClientFunctionalTestingMapsEditor *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\Tests\\ClientFuncTestPerforming.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148c76ec0

int __thiscall
FClientFunctionalTestingMapsEditor::GetTestSourceFileLine(FClientFunctionalTestingMapsEditor *this)

{
  return 0xac;
}

// GetTests @ 148c76ed0

void __thiscall
FClientFunctionalTestingMapsEditor::GetTests
          (FClientFunctionalTestingMapsEditor *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  FFunctionalTestInfo *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  IFunctionalTestingModule *pIVar9;
  FAutomationTestFramework *this_00;
  FFunctionalTestInfo *pFVar10;
  FFunctionalTestInfo *pFVar11;
  undefined1 auStackX_8 [8];
  FFunctionalTestInfo *pFStack_58;
  undefined8 uStack_50;
  FString *pFStack_48;
  undefined8 uStack_40;
  
  uVar7 = (**(code **)(*(longlong *)this + 8))();
  pFStack_48 = (FString *)0x0;
  uStack_40 = 0;
  pFStack_58 = (FFunctionalTestInfo *)0x0;
  uStack_50 = 0;
  pIVar9 = IFunctionalTestingModule::Get();
  (**(code **)((longlong)*pIVar9 + 0x88))(pIVar9,~(byte)(uVar7 >> 1) & 1,&pFStack_58,&pFStack_48);
  this_00 = FAutomationTestFramework::Get();
  iVar5 = (int)uStack_50;
  pFVar11 = pFStack_58 + (int)uStack_50;
  pFVar10 = pFStack_58;
  while( true ) {
    if ((int)uStack_50 != iVar5) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<FFunctionalTestInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (pFVar10 == pFVar11) break;
    pFVar2 = (FFunctionalTestInfo *)(param_1->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar10) &&
       (pFVar10 < (FFunctionalTestInfo *)(&pFVar2->BeautifiedName + param_1->ArrayMax))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == param_1->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar8;
    }
    param_1->ArrayNum = iVar8 + 1;
    ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10),
                       &pFVar10->BeautifiedName);
    pFVar3 = (param_2->AllocatorInstance).Data;
    pFVar1 = &pFVar10->TestCommand;
    if ((pFVar3 <= pFVar1) && (pFVar1 < pFVar3 + (longlong)param_2->ArrayMax * 0x10)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar8 + 1;
    ::FString::FString((FString *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10),
                       pFVar1);
    if (1 < (pFVar10->TestTags).Data.ArrayNum) {
      FAutomationTestFramework::RegisterComplexAutomationTestTags
                (this_00,(FAutomationTestBase *)this,&pFVar10->BeautifiedName,&pFVar10->TestTags);
    }
    pFVar10 = pFVar10 + 1;
  }
  DestructItems<FFunctionalTestInfo,int>(pFStack_58,(int)uStack_50);
  if (pFStack_58 != (FFunctionalTestInfo *)0x0) {
    FMemory::Free(pFStack_58);
  }
  DestructItems<FString,int>(pFStack_48,(int)uStack_40);
  if (pFStack_48 != (FString *)0x0) {
    FMemory::Free(pFStack_48);
  }
  return;
}

// RunTest @ 148c76ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FClientFunctionalTestingMapsEditor::RunTest
          (FClientFunctionalTestingMapsEditor *this,FString *param_1)

{
  int *piVar1;
  char cVar2;
  UWorld *this_00;
  code *pcVar3;
  longlong *plVar4;
  undefined1 uVar5;
  int iVar6;
  IFunctionalTestingModule *pIVar7;
  FString *pFVar8;
  FAutomationTestFramework *this_01;
  FStartFTestsOnMap *pFVar9;
  TSharedPtr<IAutomationLatentCommand,1> *pTVar10;
  FStartFTestOnMap *pFVar11;
  IAutomationLatentCommand *pIVar12;
  FStartFTestsOnMap *pFVar13;
  longlong lVar14;
  bool bVar15;
  uint auStackX_18 [2];
  TRawPtrProxy<FStartFTestsOnMap> TStackX_20;
  FString FStack_d8;
  FString FStack_c8;
  FString FStack_b8;
  FString FStack_a8;
  TRawPtrProxy<FStartFTestOnMap> TStack_98;
  TSharedPtr<IAutomationLatentCommand,1> TStack_90;
  int iStack_80;
  undefined4 uStack_7c;
  IAutomationLatentCommand *pIStack_78;
  int *piStack_70;
  undefined8 uStack_68;
  FString FStack_60;
  TSharedPtr<IAutomationLatentCommand,1> TStack_50;
  
  pFVar9 = (FStartFTestsOnMap *)0x0;
  auStackX_18[0] = 0;
  FStack_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.Data.ArrayNum = 0;
  FStack_a8.Data.ArrayMax = 0;
  FStack_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_d8.Data.ArrayNum = 0;
  FStack_d8.Data.ArrayMax = 0;
  FStack_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_b8.Data.ArrayNum = 0;
  FStack_b8.Data.ArrayMax = 0;
  FClientFunctionalTestingMapsBase::ParseTestMapInfo(param_1,&FStack_a8,&FStack_d8,&FStack_b8);
  pIVar7 = IFunctionalTestingModule::Get();
  (**(code **)((longlong)*pIVar7 + 0x50))(pIVar7);
  FFunctionalTestBase::SetLogErrorAndWarningHandlingToDefault((FFunctionalTestBase *)this);
  pIVar12 = (IAutomationLatentCommand *)(GEngine->WorldList).Array.AllocatorInstance.Data;
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  iVar6 = *piVar1;
  plVar4 = &pIVar12->_padding_;
  uStack_68 = CONCAT44(uStack_7c,iVar6);
  TStack_90.Object = pIVar12;
  TStack_90.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)piVar1;
  iStack_80 = iVar6;
  piStack_70 = piVar1;
  while( true ) {
    pIStack_78 = pIVar12;
    if (*piVar1 != iVar6) {
      auStackX_18[0] = auStackX_18[0] & 0xffffff00;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_18);
    }
    pFVar13 = pFVar9;
    if (pIVar12 == (IAutomationLatentCommand *)(plVar4 + iVar6)) goto LAB_148c76539;
    cVar2 = *(char *)pIVar12->_padding_;
    if (((cVar2 == '\x03') || (cVar2 == '\x01')) &&
       (this_00 = *(UWorld **)((char *)pIVar12->_padding_ + 0x2c0), this_00 != (UWorld *)0x0))
    break;
    pIVar12 = (IAutomationLatentCommand *)&pIVar12->_padding_;
  }
  pFVar8 = UWorld::GetMapName(this_00,&FStack_60);
  pFVar13 = (FStartFTestsOnMap *)&DAT_00000001;
  iVar6 = (pFVar8->Data).ArrayNum;
  if (iVar6 == FStack_d8.Data.ArrayNum) {
    if (1 < iVar6) {
      iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                         (wchar_t *)FStack_d8.Data.AllocatorInstance.Data);
      bVar15 = iVar6 == 0;
      goto LAB_148c7652c;
    }
  }
  else {
    bVar15 = FStack_d8.Data.ArrayNum + iVar6 == 1;
LAB_148c7652c:
    if (!bVar15) {
LAB_148c76539:
      bVar15 = false;
      goto LAB_148c7653b;
    }
  }
  bVar15 = true;
LAB_148c7653b:
  if ((pFVar13 != (FStartFTestsOnMap *)0x0) &&
     (FStack_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FStack_60.Data.AllocatorInstance.Data);
  }
  if ((bVar15) || (bVar15 = AutomationOpenMap(&FStack_d8,false), bVar15)) {
    iVar6 = FStack_b8.Data.ArrayNum;
    lVar14 = (longlong)FStack_b8.Data.ArrayNum;
    this_01 = FAutomationTestFramework::Get();
    if (iVar6 < 2) {
      pFVar13 = ::operator_new(0x20);
      if (pFVar13 != (FStartFTestsOnMap *)0x0) {
        *(undefined8 *)&pFVar13->field_0x8 = 0;
        *(undefined ***)pFVar13 = &___7FStartFTestsOnMap__6B_;
        *(undefined8 *)&pFVar13->field_0x10 = 0;
        *(undefined8 *)&pFVar13->field_0x18 = 0;
        pFVar9 = pFVar13;
      }
      TStackX_20.Object = pFVar9;
      pTVar10 = TSharedPtr<IAutomationLatentCommand,1>::
                TSharedPtr<IAutomationLatentCommand,1><FStartFTestsOnMap>(&TStack_50,&TStackX_20);
    }
    else {
      pFVar11 = ::operator_new(0x30);
      if (pFVar11 == (FStartFTestOnMap *)0x0) {
        pFVar11 = (FStartFTestOnMap *)0x0;
      }
      else {
        FStack_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_c8.Data.ArrayNum = iVar6;
        if (iVar6 == 0) {
          FStack_c8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar6,0,(ForAnyElementType *)&FStack_c8,iVar6,&FStack_c8.Data.ArrayMax);
          memcpy(FStack_c8.Data.AllocatorInstance.Data,FStack_b8.Data.AllocatorInstance.Data,
                 lVar14 * 2);
        }
        pFVar11->_padding_ = 0;
        pFVar11->_padding_ = (longlong)&___7FStartFTestOnMap__6B_;
        pFVar11->_padding_ = 0;
        pFVar11->_padding_ = 0;
        ::FString::FString(&pFVar11->TestName,&FStack_c8);
        if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
        }
        if ((((pFVar11->_padding_ != 0) && (pFVar11->_padding_ != 0)) &&
            (0 < *(int *)(pFVar11->_padding_ + 8))) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("!InObject || !InObject->DoesSharedInstanceExist()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x7a5,L"Trying to share an already-shared object"), bVar15)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      TStack_98.Object = pFVar11;
      pTVar10 = TSharedPtr<IAutomationLatentCommand,1>::
                TSharedPtr<IAutomationLatentCommand,1><FStartFTestOnMap>(&TStack_90,&TStack_98);
    }
    FAutomationTestFramework::EnqueueLatentCommand(this_01,pTVar10);
    bVar15 = true;
  }
  else {
    if (1 < (byte)LogFunctionalTest._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_bool___cdecl_FClientFunctionalTestingMapsBase::RunTest(FString_const&___ptr64)___ptr64'
                  ::__l16::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    }
    bVar15 = false;
  }
  if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
  }
  if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
  }
  if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
  }
  return bVar15;
}

// GetBeautifiedTestName @ 148c76ef0

FString * __thiscall
FClientFunctionalTestingMapsEditor::GetBeautifiedTestName
          (FClientFunctionalTestingMapsEditor *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Project.Functional Tests");
  return __return_storage_ptr__;
}

