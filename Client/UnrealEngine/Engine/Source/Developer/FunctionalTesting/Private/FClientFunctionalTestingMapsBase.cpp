// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 5

// GetTestOpenCommand @ 148c76040

FString * __thiscall
FClientFunctionalTestingMapsBase::GetTestOpenCommand
          (FClientFunctionalTestingMapsBase *this,FString *__return_storage_ptr__,FString *param_1)

{
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ParseTestMapInfo(param_1,&local_28,&local_18,&local_38);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Automate.OpenMapAndFocusActor %s %s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTestAssetPath @ 148c760f0

FString * __thiscall
FClientFunctionalTestingMapsBase::GetTestAssetPath
          (FClientFunctionalTestingMapsBase *this,FString *__return_storage_ptr__,FString *param_1)

{
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ParseTestMapInfo(param_1,__return_storage_ptr__,&local_18,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTests @ 148c76160

void __thiscall
FClientFunctionalTestingMapsBase::GetTests
          (FClientFunctionalTestingMapsBase *this,
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
  undefined1 local_res8 [8];
  FFunctionalTestInfo *local_58;
  undefined8 local_50;
  FString *local_48;
  undefined8 local_40;
  
  uVar7 = (**(code **)(*(longlong *)this + 8))();
  local_48 = (FString *)0x0;
  local_40 = 0;
  local_58 = (FFunctionalTestInfo *)0x0;
  local_50 = 0;
  pIVar9 = IFunctionalTestingModule::Get();
  (**(code **)((longlong)*pIVar9 + 0x88))(pIVar9,~(byte)(uVar7 >> 1) & 1,&local_58,&local_48);
  this_00 = FAutomationTestFramework::Get();
  iVar5 = (int)local_50;
  pFVar11 = local_58 + (int)local_50;
  pFVar10 = local_58;
  while( true ) {
    if ((int)local_50 != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FFunctionalTestInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
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
  DestructItems<FFunctionalTestInfo,int>(local_58,(int)local_50);
  if (local_58 != (FFunctionalTestInfo *)0x0) {
    FMemory::Free(local_58);
  }
  DestructItems<FString,int>(local_48,(int)local_40);
  if (local_48 != (FString *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// RunTest @ 148c76400

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
FClientFunctionalTestingMapsBase::RunTest(FClientFunctionalTestingMapsBase *this,FString *param_1)

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
  uint local_res18 [2];
  TRawPtrProxy<FStartFTestsOnMap> local_res20;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  TRawPtrProxy<FStartFTestOnMap> local_98;
  TSharedPtr<IAutomationLatentCommand,1> local_90;
  int local_80;
  undefined4 uStack_7c;
  IAutomationLatentCommand *local_78;
  int *piStack_70;
  undefined8 local_68;
  FString local_60;
  TSharedPtr<IAutomationLatentCommand,1> local_50;
  
  pFVar9 = (FStartFTestsOnMap *)0x0;
  local_res18[0] = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  ParseTestMapInfo(param_1,&local_a8,&local_d8,&local_b8);
  pIVar7 = IFunctionalTestingModule::Get();
  (**(code **)((longlong)*pIVar7 + 0x50))(pIVar7);
  FFunctionalTestBase::SetLogErrorAndWarningHandlingToDefault((FFunctionalTestBase *)this);
  pIVar12 = (IAutomationLatentCommand *)(GEngine->WorldList).Array.AllocatorInstance.Data;
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  iVar6 = *piVar1;
  plVar4 = &pIVar12->_padding_;
  local_68 = CONCAT44(uStack_7c,iVar6);
  local_90.Object = pIVar12;
  local_90.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)piVar1;
  local_80 = iVar6;
  piStack_70 = piVar1;
  while( true ) {
    local_78 = pIVar12;
    if (*piVar1 != iVar6) {
      local_res18[0] = local_res18[0] & 0xffffff00;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    pFVar13 = pFVar9;
    if (pIVar12 == (IAutomationLatentCommand *)(plVar4 + iVar6)) goto LAB_148c76539;
    cVar2 = *(char *)pIVar12->_padding_;
    if (((cVar2 == '\x03') || (cVar2 == '\x01')) &&
       (this_00 = *(UWorld **)((char *)pIVar12->_padding_ + 0x2c0), this_00 != (UWorld *)0x0))
    break;
    pIVar12 = (IAutomationLatentCommand *)&pIVar12->_padding_;
  }
  pFVar8 = UWorld::GetMapName(this_00,&local_60);
  pFVar13 = (FStartFTestsOnMap *)&DAT_00000001;
  iVar6 = (pFVar8->Data).ArrayNum;
  if (iVar6 == local_d8.Data.ArrayNum) {
    if (1 < iVar6) {
      iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                         (wchar_t *)local_d8.Data.AllocatorInstance.Data);
      bVar15 = iVar6 == 0;
      goto LAB_148c7652c;
    }
  }
  else {
    bVar15 = local_d8.Data.ArrayNum + iVar6 == 1;
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
     (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if ((bVar15) || (bVar15 = AutomationOpenMap(&local_d8,false), bVar15)) {
    iVar6 = local_b8.Data.ArrayNum;
    lVar14 = (longlong)local_b8.Data.ArrayNum;
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
      local_res20.Object = pFVar9;
      pTVar10 = TSharedPtr<IAutomationLatentCommand,1>::
                TSharedPtr<IAutomationLatentCommand,1><FStartFTestsOnMap>(&local_50,&local_res20);
    }
    else {
      pFVar11 = ::operator_new(0x30);
      if (pFVar11 == (FStartFTestOnMap *)0x0) {
        pFVar11 = (FStartFTestOnMap *)0x0;
      }
      else {
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Data.ArrayNum = iVar6;
        if (iVar6 == 0) {
          local_c8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar6,0,(ForAnyElementType *)&local_c8,iVar6,&local_c8.Data.ArrayMax);
          memcpy(local_c8.Data.AllocatorInstance.Data,local_b8.Data.AllocatorInstance.Data,
                 lVar14 * 2);
        }
        pFVar11->_padding_ = 0;
        pFVar11->_padding_ = (longlong)&___7FStartFTestOnMap__6B_;
        pFVar11->_padding_ = 0;
        pFVar11->_padding_ = 0;
        ::FString::FString(&pFVar11->TestName,&local_c8);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
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
      local_98.Object = pFVar11;
      pTVar10 = TSharedPtr<IAutomationLatentCommand,1>::
                TSharedPtr<IAutomationLatentCommand,1><FStartFTestOnMap>(&local_90,&local_98);
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
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return bVar15;
}

// ParseTestMapInfo @ 148c96a70

void __cdecl
FClientFunctionalTestingMapsBase::ParseTestMapInfo
          (FString *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  void *_Src;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FString *pFVar6;
  int iVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_48,L";",true);
  if (local_48.ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar7 = *(int *)(local_48.AllocatorInstance.Data + 8) + -1;
  if (*(int *)(local_48.AllocatorInstance.Data + 8) == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange(param_2,*(wchar_t **)local_48.AllocatorInstance.Data,iVar7);
  bVar3 = true;
  bVar4 = false;
  if (local_48.ArrayNum < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar7 = *(int *)(local_48.AllocatorInstance.Data + 0x18) + -1;
  if (*(int *)(local_48.AllocatorInstance.Data + 0x18) == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange(param_3,*(wchar_t **)(local_48.AllocatorInstance.Data + 0x10),iVar7);
  if (local_48.ArrayNum < 3) {
    pFVar6 = ::FString::FString(&local_28,L"");
    bVar3 = false;
    bVar4 = true;
  }
  else {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar7 = *(int *)(local_48.AllocatorInstance.Data + 0x28);
    _Src = *(void **)(local_48.AllocatorInstance.Data + 0x20);
    local_38.Data.ArrayNum = iVar7;
    if (iVar7 == 0) {
      pFVar6 = &local_38;
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,(ForAnyElementType *)&local_38,iVar7,&local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar7 * 2);
      pFVar6 = &local_38;
    }
  }
  if (param_4 != pFVar6) {
    pFVar1 = (param_4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_4->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_4->Data).ArrayNum = (pFVar6->Data).ArrayNum;
    (param_4->Data).ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (bVar4) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

