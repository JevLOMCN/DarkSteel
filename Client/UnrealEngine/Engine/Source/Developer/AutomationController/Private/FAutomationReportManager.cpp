// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 18

// FAutomationReportManager @ 148c53650

FAutomationReportManager * __thiscall
FAutomationReportManager::FAutomationReportManager(FAutomationReportManager *this)

{
  code *pcVar1;
  bool bVar2;
  FAutomationReport *this_00;
  FAutomationReport *pFVar3;
  FAutomationReportManager *pFVar4;
  ForAnyElementType FVar5;
  ForAnyElementType FVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  TRawPtrProxy<FAutomationReport> local_res10;
  FAutomationTestInfo local_d8;
  
  pFVar3 = (FAutomationReport *)0x0;
  (this->ReportRoot).Object = (IAutomationReport *)0x0;
  (this->ReportRoot).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_d8.DisplayName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.DisplayName.Data.ArrayNum = 0;
  local_d8.DisplayName.Data.ArrayMax = 0;
  local_d8.FullTestPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.FullTestPath.Data.ArrayNum = 0;
  local_d8.FullTestPath.Data.ArrayMax = 0;
  local_d8.TestName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.TestName.Data.ArrayNum = 0;
  local_d8.TestName.Data.ArrayMax = 0;
  local_d8.TestTags.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.TestTags.Data.ArrayNum = 0;
  local_d8.TestTags.Data.ArrayMax = 0;
  local_d8.TestParameter.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.TestParameter.Data.ArrayNum = 0;
  local_d8.TestParameter.Data.ArrayMax = 0;
  local_d8.SourceFile.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.SourceFile.Data.ArrayNum = 0;
  local_d8.SourceFile.Data.ArrayMax = 0;
  local_d8.AssetPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.AssetPath.Data.ArrayNum = 0;
  local_d8.AssetPath.Data.ArrayMax = 0;
  local_d8.OpenCommand.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.OpenCommand.Data.ArrayNum = 0;
  local_d8.OpenCommand.Data.ArrayMax = 0;
  local_d8.TestFlags = None;
  local_d8.NumParticipantsRequired = 0;
  local_d8.NumDevicesCurrentlyRunningTest = 0;
  this_00 = ::operator_new(0x238);
  FVar5.Data = (FScriptContainerElement *)pFVar3;
  FVar6.Data = (FScriptContainerElement *)pFVar3;
  FVar7.Data = (FScriptContainerElement *)pFVar3;
  FVar8.Data = (FScriptContainerElement *)pFVar3;
  FVar9.Data = (FScriptContainerElement *)pFVar3;
  FVar10.Data = (FScriptContainerElement *)pFVar3;
  if ((((this_00 != (FAutomationReport *)0x0) &&
       (pFVar3 = FAutomationReport::FAutomationReport(this_00,&local_d8,false),
       FVar5.Data = local_d8.DisplayName.Data.AllocatorInstance.Data,
       FVar6.Data = local_d8.FullTestPath.Data.AllocatorInstance.Data,
       FVar7.Data = local_d8.TestParameter.Data.AllocatorInstance.Data,
       FVar8.Data = local_d8.AssetPath.Data.AllocatorInstance.Data,
       FVar9.Data = local_d8.TestName.Data.AllocatorInstance.Data,
       FVar10.Data = local_d8.TestTags.Data.AllocatorInstance.Data,
       pFVar3 != (FAutomationReport *)0x0)) && (pFVar3->_padding_ != 0)) &&
     (((pFVar3->_padding_ != 0 && (0 < *(int *)(pFVar3->_padding_ + 8))) &&
      (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InObject || !InObject->DoesSharedInstanceExist()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x7a5,L"Trying to share an already-shared object"),
      FVar5.Data = local_d8.DisplayName.Data.AllocatorInstance.Data,
      FVar6.Data = local_d8.FullTestPath.Data.AllocatorInstance.Data,
      FVar7.Data = local_d8.TestParameter.Data.AllocatorInstance.Data,
      FVar8.Data = local_d8.AssetPath.Data.AllocatorInstance.Data,
      FVar9.Data = local_d8.TestName.Data.AllocatorInstance.Data,
      FVar10.Data = local_d8.TestTags.Data.AllocatorInstance.Data, bVar2)))) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FAutomationReportManager *)(*pcVar1)();
    return pFVar4;
  }
  local_res10.Object = pFVar3;
  TSharedPtr<IAutomationReport,1>::operator=<FAutomationReport>(&this->ReportRoot,&local_res10);
  if (local_d8.OpenCommand.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.OpenCommand.Data.AllocatorInstance.Data);
  }
  if ((FAutomationReport *)FVar8.Data != (FAutomationReport *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  if (local_d8.SourceFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.SourceFile.Data.AllocatorInstance.Data);
  }
  if ((FAutomationReport *)FVar7.Data != (FAutomationReport *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  if ((FAutomationReport *)FVar10.Data != (FAutomationReport *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  if ((FAutomationReport *)FVar9.Data != (FAutomationReport *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if ((FAutomationReport *)FVar6.Data != (FAutomationReport *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  if ((FAutomationReport *)FVar5.Data != (FAutomationReport *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return this;
}

// AddResultReport @ 148c56750

/* WARNING: Removing unreachable block (ram,0x000148c57057) */
/* WARNING: Removing unreachable block (ram,0x000148c5718b) */
/* WARNING: Removing unreachable block (ram,0x000148c56f1a) */

void __thiscall
FAutomationReportManager::AddResultReport
          (FAutomationReportManager *this,TSharedPtr<IAutomationReport,1> *param_1,int param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,uint param_4)

{
  EAutomationEventType EVar1;
  FAutomationArtifact *pFVar2;
  code *pcVar3;
  uint uVar4;
  void *_Src;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  UEnum *this_00;
  FString *pFVar11;
  FName *pFVar12;
  FModuleManager *this_01;
  IModuleInterface *pIVar13;
  undefined8 *puVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType this_02;
  ulonglong uVar18;
  FAutomationExecutionEntry *pFVar19;
  uint uVar20;
  undefined1 local_1e8 [4];
  int local_1e4;
  uint local_1e0;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FScriptContainerElement *local_1a8;
  ForAnyElementType local_1a0;
  int local_198;
  int local_194;
  float local_190;
  float local_18c;
  FName local_188 [2];
  byte local_178;
  undefined4 local_174;
  FString local_170;
  ForAnyElementType local_160;
  int local_158;
  int local_154;
  ForAnyElementType local_150;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  void *local_138 [2];
  FString local_128;
  FString local_118;
  FText local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FName local_c8;
  FString local_c0;
  void *local_b0 [2];
  void *local_a0 [2];
  undefined1 local_90 [8];
  TReferenceControllerBase<1> *local_88;
  void *local_80 [2];
  FString local_70;
  FString local_60;
  FString local_50;
  
  if ((param_1->Object == (IAutomationReport *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar6 = (**(code **)(param_1->Object->_padding_ + 0xa0))();
  if ((cVar6 != '\0') && (local_1e4 = 0, 0 < param_2)) {
    uVar20 = param_4 & 0x10000;
    local_1e0 = uVar20;
    do {
      iVar8 = local_1e4;
      if ((param_1->Object == (IAutomationReport *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pbVar10 = (byte *)(**(code **)(param_1->Object->_padding_ + 0x128))
                                  (param_1->Object,iVar8,this->CurrentTestPass);
      local_178 = *pbVar10;
      local_174 = *(undefined4 *)(pbVar10 + 4);
      ::FString::FString(&local_170,(FString *)(pbVar10 + 8));
      local_160.Data = (FScriptContainerElement *)0x0;
      iVar8 = *(int *)(pbVar10 + 0x20);
      pFVar2 = *(FAutomationArtifact **)(pbVar10 + 0x18);
      local_158 = iVar8;
      if (iVar8 == 0) {
        local_154 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,iVar8,0,&local_160,iVar8,&local_154);
        ConstructItems<FAutomationArtifact,FAutomationArtifact,int>(local_160.Data,pFVar2,iVar8);
      }
      local_150.Data = (FScriptContainerElement *)0x0;
      iVar8 = *(int *)(pbVar10 + 0x30);
      pFVar19 = *(FAutomationExecutionEntry **)(pbVar10 + 0x28);
      local_148 = iVar8;
      if (iVar8 == 0) {
        local_144 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,iVar8,0,&local_150,iVar8,&local_144);
        ConstructItems<FAutomationExecutionEntry,FAutomationExecutionEntry,int>
                  (local_150.Data,pFVar19,iVar8);
      }
      local_140 = *(int *)(pbVar10 + 0x38);
      local_13c = *(int *)(pbVar10 + 0x3c);
      if ((uVar20 == 0) && ((param_4 & 2) == 0)) {
        uVar7 = 0x10;
        if (local_13c < 1) {
          uVar7 = 0;
        }
        uVar4 = uVar7 | 4;
        if (local_140 < 1) {
          uVar4 = uVar7;
        }
        uVar7 = uVar4 | 0x100;
        if (local_148 - local_13c == local_140) {
          uVar7 = uVar4;
        }
        if ((param_4 & uVar7) != 0) goto LAB_148c56950;
      }
      else {
LAB_148c56950:
        local_1a8 = (FScriptContainerElement *)0x0;
        if ((param_1->Object == (IAutomationReport *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        cVar6 = (**(code **)(param_1->Object->_padding_ + 0x170))
                          (param_1->Object,&local_190,&local_18c);
        if (cVar6 != '\0') {
          if (local_190 == local_18c) {
            ::FString::PrintfImpl(&local_118,L"%4.4fs");
            local_1a8 = local_118.Data.AllocatorInstance.Data;
            local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_118.Data.ArrayNum = 0;
            local_118.Data.ArrayMax = 0;
          }
          else {
            ::FString::PrintfImpl(&local_128,L"%4.4fs - %4.4fs");
            local_1a8 = local_128.Data.AllocatorInstance.Data;
            local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_128.Data.ArrayNum = 0;
            local_128.Data.ArrayMax = 0;
          }
        }
        uVar18 = (ulonglong)local_178;
        this_00 = StaticEnum<enum_EAutomationState>();
        if ((this_00 == (UEnum *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xd13,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UEnum::GetDisplayNameTextByValue(this_00,&local_108,uVar18);
        pFVar11 = FText::ToString(&local_108);
        local_1a0.Data = (FScriptContainerElement *)0x0;
        local_198 = (pFVar11->Data).ArrayNum;
        lVar16 = (longlong)local_198;
        pFVar17 = (pFVar11->Data).AllocatorInstance.Data;
        if (local_198 == 0) {
          local_194 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_198,0,&local_1a0,local_198,&local_194);
          memcpy(local_1a0.Data,pFVar17,lVar16 * 2);
        }
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
        }
        if ((param_1->Object == (IAutomationReport *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)(param_1->Object->_padding_ + 0x28))(param_1->Object,local_80);
        pFVar12 = ::FName::FName(&local_c8,"AutomationController");
        local_188[0] = *pFVar12;
        this_01 = FModuleManager::Get();
        bVar5 = FModuleManager::IsModuleLoaded(this_01,local_188[0]);
        if (!bVar5) {
          ::FName::ToString(local_188,&local_c0);
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ModuleManager.IsModuleLoaded(ModuleName)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                             ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pIVar13 = FModuleManager::GetModule(this_01,local_188[0]);
        puVar14 = (undefined8 *)(**(code **)((longlong)*pIVar13 + 0x40))(pIVar13,local_90);
        (**(code **)(*(longlong *)*puVar14 + 0xa8))((longlong *)*puVar14,local_a0,local_1e4);
        if ((param_1->Object == (IAutomationReport *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)(param_1->Object->_padding_ + 0x140))(param_1->Object,local_b0,local_1e4);
        ::FString::PrintfImpl((FString *)local_138,L"\"%s\",\"%s\",\"%s\",\"%s\",\"%s\"");
        if (local_b0[0] != (void *)0x0) {
          FMemory::Free(local_b0[0]);
        }
        if (local_a0[0] != (void *)0x0) {
          FMemory::Free(local_a0[0]);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88);
        if (local_80[0] != (void *)0x0) {
          FMemory::Free(local_80[0]);
        }
        pFVar17 = (param_3->AllocatorInstance).Data;
        if (((pFVar17 <= (FScriptContainerElement *)local_138) &&
            ((FScriptContainerElement *)local_138 < pFVar17 + (longlong)param_3->ArrayMax * 0x10))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = param_3->ArrayNum;
        if (iVar8 == param_3->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        _Src = local_138[0];
        param_3->ArrayNum = iVar8 + 1;
        pFVar17 = (param_3->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(FScriptContainerElement **)&pFVar17->field_0x0 = (FScriptContainerElement *)0x0;
        iVar8 = (int)local_138[1];
        *(int *)&pFVar17[8].field_0x0 = iVar8;
        if (iVar8 == 0) {
          *(int *)(pFVar17 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar8,0,(ForAnyElementType *)pFVar17,iVar8,(int *)(pFVar17 + 0xc));
          memcpy(*(FScriptContainerElement **)&pFVar17->field_0x0,_Src,(longlong)iVar8 * 2);
        }
        iVar8 = local_148;
        uVar20 = local_1e0;
        pFVar19 = (FAutomationExecutionEntry *)(local_150.Data + (longlong)local_148 * 0x58);
        this_02.Data = local_150.Data;
        while( true ) {
          if (local_148 != iVar8) {
            local_1e8[0] = 0;
            `TCheckedPointerIterator<FAutomationExecutionEntry_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_1e8);
          }
          if ((FAutomationExecutionEntry *)this_02.Data == pFVar19) break;
          EVar1 = (((FAutomationExecutionEntry *)this_02.Data)->Event).Type;
          if (EVar1 == Info) {
            if ((uVar20 != 0) || ((param_4 >> 8 & 1) != 0)) {
              pFVar11 = FAutomationExecutionEntry::ToString
                                  ((FAutomationExecutionEntry *)this_02.Data,&local_50);
              ::FString::ConcatCF(&local_d8,L"\t,,,,\"",pFVar11);
              ::FString::ConcatFC(&local_1b8,&local_d8,L"\"");
              pFVar17 = (param_3->AllocatorInstance).Data;
              if ((pFVar17 <= (FScriptContainerElement *)&local_1b8) &&
                 (((FScriptContainerElement *)&local_1b8 <
                   pFVar17 + (longlong)param_3->ArrayMax * 0x10 &&
                  (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)))) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar9 = param_3->ArrayNum;
              if (iVar9 == param_3->ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
              }
              lVar16 = (longlong)iVar9;
              param_3->ArrayNum = iVar9 + 1;
              pFVar17 = (param_3->AllocatorInstance).Data;
              *(undefined8 *)(pFVar17 + lVar16 * 0x10) = 0;
              *(FScriptContainerElement **)(pFVar17 + lVar16 * 0x10) =
                   local_1b8.Data.AllocatorInstance.Data;
              *(int *)(pFVar17 + lVar16 * 0x10 + 8) = local_1b8.Data.ArrayNum;
              *(int *)(pFVar17 + lVar16 * 0x10 + 0xc) = local_1b8.Data.ArrayMax;
              local_1b8.Data.ArrayNum = 0;
              local_1b8.Data.ArrayMax = 0;
              local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FVar15.Data = local_50.Data.AllocatorInstance.Data;
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                FVar15.Data = local_50.Data.AllocatorInstance.Data;
              }
              goto LAB_148c571a5;
            }
          }
          else if (EVar1 == Warning) {
            if ((uVar20 != 0) || ((param_4 & 4) != 0)) {
              pFVar11 = FAutomationExecutionEntry::ToString
                                  ((FAutomationExecutionEntry *)this_02.Data,&local_60);
              ::FString::ConcatCF(&local_e8,L"\t,,,,\"",pFVar11);
              ::FString::ConcatFC(&local_1c8,&local_e8,L"\"");
              pFVar17 = (param_3->AllocatorInstance).Data;
              if ((pFVar17 <= (FScriptContainerElement *)&local_1c8) &&
                 (((FScriptContainerElement *)&local_1c8 <
                   pFVar17 + (longlong)param_3->ArrayMax * 0x10 &&
                  (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)))) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar9 = param_3->ArrayNum;
              if (iVar9 == param_3->ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
              }
              lVar16 = (longlong)iVar9;
              param_3->ArrayNum = iVar9 + 1;
              pFVar17 = (param_3->AllocatorInstance).Data;
              *(undefined8 *)(pFVar17 + lVar16 * 0x10) = 0;
              *(FScriptContainerElement **)(pFVar17 + lVar16 * 0x10) =
                   local_1c8.Data.AllocatorInstance.Data;
              *(int *)(pFVar17 + lVar16 * 0x10 + 8) = local_1c8.Data.ArrayNum;
              *(int *)(pFVar17 + lVar16 * 0x10 + 0xc) = local_1c8.Data.ArrayMax;
              local_1c8.Data.ArrayNum = 0;
              local_1c8.Data.ArrayMax = 0;
              local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FVar15.Data = local_60.Data.AllocatorInstance.Data;
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                FVar15.Data = local_60.Data.AllocatorInstance.Data;
              }
              goto LAB_148c571a5;
            }
          }
          else if ((EVar1 == Error) && ((uVar20 != 0 || ((param_4 & 0x10) != 0)))) {
            pFVar11 = FAutomationExecutionEntry::ToString
                                ((FAutomationExecutionEntry *)this_02.Data,&local_70);
            ::FString::ConcatCF(&local_f8,L"\t,,,,\"",pFVar11);
            ::FString::ConcatFC(&local_1d8,&local_f8,L"\"");
            pFVar17 = (param_3->AllocatorInstance).Data;
            if ((pFVar17 <= (FScriptContainerElement *)&local_1d8) &&
               (((FScriptContainerElement *)&local_1d8 <
                 pFVar17 + (longlong)param_3->ArrayMax * 0x10 &&
                (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)))) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar9 = param_3->ArrayNum;
            if (iVar9 == param_3->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            lVar16 = (longlong)iVar9;
            param_3->ArrayNum = iVar9 + 1;
            pFVar17 = (param_3->AllocatorInstance).Data;
            *(undefined8 *)(pFVar17 + lVar16 * 0x10) = 0;
            *(FScriptContainerElement **)(pFVar17 + lVar16 * 0x10) =
                 local_1d8.Data.AllocatorInstance.Data;
            *(int *)(pFVar17 + lVar16 * 0x10 + 8) = local_1d8.Data.ArrayNum;
            *(int *)(pFVar17 + lVar16 * 0x10 + 0xc) = local_1d8.Data.ArrayMax;
            local_1d8.Data.ArrayNum = 0;
            local_1d8.Data.ArrayMax = 0;
            local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FVar15.Data = local_70.Data.AllocatorInstance.Data;
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              FVar15.Data = local_70.Data.AllocatorInstance.Data;
            }
LAB_148c571a5:
            if (FVar15.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar15.Data);
            }
          }
          this_02.Data = this_02.Data + 0x58;
        }
        if (local_138[0] != (void *)0x0) {
          FMemory::Free(local_138[0]);
        }
        if (local_1a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data);
        }
        if (local_1a8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8);
        }
      }
      DestructItems<FAutomationExecutionEntry,int>
                ((FAutomationExecutionEntry *)local_150.Data,local_148);
      if ((FAutomationExecutionEntry *)local_150.Data != (FAutomationExecutionEntry *)0x0) {
        FMemory::Free(local_150.Data);
      }
      DestructItems<FAutomationArtifact,int>((FAutomationArtifact *)local_160.Data,local_158);
      if ((FAutomationArtifact *)local_160.Data != (FAutomationArtifact *)0x0) {
        FMemory::Free(local_160.Data);
      }
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      local_1e4 = local_1e4 + 1;
    } while (local_1e4 < param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ClustersUpdated @ 148c585f0

void __thiscall
FAutomationReportManager::ClustersUpdated(FAutomationReportManager *this,int param_1)

{
  IAutomationReport *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->ReportRoot).Object == (IAutomationReport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->ReportRoot).Object;
                    /* WARNING: Could not recover jumptable at 0x000148c5863d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pIVar1->_padding_ + 0xf0))(pIVar1,param_1);
  return;
}

// Empty @ 148c592f0

void __thiscall FAutomationReportManager::Empty(FAutomationReportManager *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ReportRoot).Object == (IAutomationReport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148c59330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->ReportRoot).Object)->_padding_ + 8))();
  return;
}

// EnsureReportExists @ 148c59f80

TSharedPtr<IAutomationReport,1> * __thiscall
FAutomationReportManager::EnsureReportExists
          (FAutomationReportManager *this,TSharedPtr<IAutomationReport,1> *__return_storage_ptr__,
          FAutomationTestInfo *param_1,int param_2,int param_3)

{
  IAutomationReport *pIVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<IAutomationReport,1> *pTVar4;
  
  if ((this->ReportRoot).Object == (IAutomationReport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IAutomationReport,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->ReportRoot).Object;
  (**(code **)(pIVar1->_padding_ + 0x148))(pIVar1,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// ExportReport @ 148c5b1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FAutomationReportManager::ExportReport(FAutomationReportManager *this,uint param_1,int param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FDateTime this_00;
  FString *pFVar6;
  IFileManager *pIVar7;
  longlong *plVar8;
  size_t sVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  wchar_t *_Str;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStackY_1d8 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_198;
  longlong *local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  TSharedPtr<IAutomationReport,1> local_130;
  FString local_120;
  FString local_108;
  FString local_f8;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  ::FString::FString(&local_140,
                     L"\"GameInstance\",\"Platform\",\"Test Name\",\"Duration\",\"Status\"");
  local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_198.AllocatorInstance,1,&local_198.ArrayMax);
  ConstructItems<FString,FString,int>(local_198.AllocatorInstance.Data,&local_140,1);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  local_130.Object = (this->ReportRoot).Object;
  local_130.SharedReferenceCount.ReferenceController =
       (this->ReportRoot).SharedReferenceCount.ReferenceController;
  if (local_130.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FindLeafReport(this,&local_130,param_2,&local_198,param_1);
  bVar3 = false;
  if (1 < local_198.ArrayNum) {
    this_00 = FDateTime::Now();
    FDateTime::ToString((FDateTime *)this_00.Ticks,&local_108);
    ::FString::PrintfImpl(&local_150,L"Automation%s.csv");
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    pFVar6 = FPaths::AutomationDir(&local_f8);
    FPaths::ConvertRelativePathToFull(&local_160,pFVar6);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_170,L"%s%s");
    pIVar7 = IFileManager::Get();
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_170.Data.ArrayNum != 0) {
      FVar13.Data = local_170.Data.AllocatorInstance.Data;
    }
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,FVar13.Data,0);
    local_188 = plVar8;
    bVar3 = false;
    if (plVar8 != (longlong *)0x0) {
      uVar17 = 0;
      if (0 < local_198.ArrayNum) {
        do {
          uVar5 = 0;
          if ((int)uVar17 < local_198.ArrayNum) {
            uVar5 = ~uVar17 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          ::FString::PrintfImpl(&local_120,L"%s");
          ::FString::ConcatFC(&local_180,&local_120,L"\r\n");
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          iVar11 = local_180.Data.ArrayNum;
          local_68.Data = (FScriptContainerElement *)0x0;
          pcVar2 = *(code **)(*plVar8 + 0x188);
          uVar5 = iVar11 - 1;
          if (iVar11 == 0) {
            uVar5 = 0;
          }
          if (iVar11 == 0) {
            _Str = L"";
LAB_148c5b4af:
            sVar9 = wcslen(_Str);
            local_58 = (int)sVar9;
            uVar14 = local_58 + 1;
            FVar13.Data = (FScriptContainerElement *)0x0;
            if (0x80 < uVar14) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar14,1);
              FVar13.Data = local_68.Data;
            }
            lVar16 = (longlong)(int)uVar14;
            pFVar15 = local_e8;
            if (FVar13.Data != (FScriptContainerElement *)0x0) {
              pFVar15 = FVar13.Data;
            }
            lVar10 = 0;
            bVar3 = false;
            lVar12 = lVar10;
            local_60 = pFVar15;
            if (0 < (int)uVar14) {
              do {
                uVar1 = *(ushort *)((longlong)_Str + lVar12 * 2);
                pFVar15[lVar12] = SUB21(uVar1,0);
                lVar12 = lVar12 + 1;
                bVar3 = (bool)(bVar3 | 0x7f < uVar1);
              } while (lVar12 < lVar16);
              if (bVar3) {
                do {
                  if (0x7f < *(ushort *)((longlong)_Str + lVar10 * 2)) {
                    pFVar15[lVar10] = (FScriptContainerElement)0x3f;
                  }
                  lVar10 = lVar10 + 1;
                } while (lVar10 < lVar16);
              }
            }
            if ((pFVar15 + lVar16 == (FScriptContainerElement *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          else {
            _Str = (wchar_t *)local_180.Data.AllocatorInstance.Data;
            if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            goto LAB_148c5b4af;
            local_60 = (FScriptContainerElement *)0x0;
            local_58 = 0;
          }
          plVar8 = local_188;
          (*pcVar2)(local_188,local_60,(longlong)(int)uVar5);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < local_198.ArrayNum);
      }
      (**(code **)(*plVar8 + 0x210))(plVar8);
      (**(code **)*plVar8)(plVar8,1);
      bVar3 = true;
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FString,int>((FString *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  return bVar3;
}

// FindLeafReport @ 148c5b8c0

void __thiscall
FAutomationReportManager::FindLeafReport
          (FAutomationReportManager *this,TSharedPtr<IAutomationReport,1> *param_1,int param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  TSharedPtr<IAutomationReport,1> local_48;
  TSharedPtr<IAutomationReport,1> local_38;
  
  if ((param_1->Object == (IAutomationReport *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar4 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0xe0))();
  iVar5 = (int)plVar4[1];
  if (iVar5 == 0) {
    local_48.Object = param_1->Object;
    local_48.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    AddResultReport(this,&local_48,param_2,param_3,param_4);
  }
  else {
    uVar6 = 0;
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar5) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_38.Object = *(IAutomationReport **)(*plVar4 + lVar7);
        local_38.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(*plVar4 + 8 + lVar7);
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FindLeafReport(this,&local_38,param_2,param_3,param_4);
        iVar5 = (int)plVar4[1];
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar6 < iVar5);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetEnabledTestNames @ 148c5e640

void __thiscall
FAutomationReportManager::GetEnabledTestNames
          (FAutomationReportManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  IAutomationReport *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((this->ReportRoot).Object == (IAutomationReport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->ReportRoot).Object;
  local_18 = 0;
  local_10 = 0;
  (**(code **)(pIVar1->_padding_ + 0x80))(pIVar1,param_1,&local_18);
  return;
}

// GetEnabledTestReports @ 148c5e8d0

TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> * __thiscall
FAutomationReportManager::GetEnabledTestReports
          (FAutomationReportManager *this,
          TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  IAutomationReport *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((this->ReportRoot).Object == (IAutomationReport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->ReportRoot).Object;
  (**(code **)(pIVar1->_padding_ + 0x158))(pIVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetEnabledTestsNum @ 148c5eab0

int __thiscall FAutomationReportManager::GetEnabledTestsNum(FAutomationReportManager *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->ReportRoot).Object == (IAutomationReport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148c5eaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(((this->ReportRoot).Object)->_padding_ + 0x98))();
  return iVar3;
}

// GetFilteredReports @ 148c5ed60

TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> * __thiscall
FAutomationReportManager::GetFilteredReports(FAutomationReportManager *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->ReportRoot).Object == (IAutomationReport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148c5eda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar3 = (TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> *)
           (**(code **)(((this->ReportRoot).Object)->_padding_ + 0xe0))();
  return pTVar3;
}

// GetFilteredTestNames @ 148c5f3f0

void __thiscall
FAutomationReportManager::GetFilteredTestNames
          (FAutomationReportManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  IAutomationReport *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((this->ReportRoot).Object == (IAutomationReport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->ReportRoot).Object;
  local_18 = 0;
  local_10 = 0;
  (**(code **)(pIVar1->_padding_ + 0x88))(pIVar1,param_1,&local_18);
  return;
}

// GetNextReportToExecute @ 148c5fa90

TSharedPtr<IAutomationReport,1> * __thiscall
FAutomationReportManager::GetNextReportToExecute
          (FAutomationReportManager *this,TSharedPtr<IAutomationReport,1> *__return_storage_ptr__,
          bool *param_1,int param_2,int param_3,int param_4)

{
  IAutomationReport *pIVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<IAutomationReport,1> *pTVar4;
  
  if ((this->ReportRoot).Object == (IAutomationReport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<IAutomationReport,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pIVar1 = (this->ReportRoot).Object;
  (**(code **)(pIVar1->_padding_ + 0x150))
            (pIVar1,__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// ResetForExecution @ 148c69150

void __thiscall
FAutomationReportManager::ResetForExecution(FAutomationReportManager *this,int param_1)

{
  IAutomationReport *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->ReportRoot).Object == (IAutomationReport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->ReportRoot).Object;
                    /* WARNING: Could not recover jumptable at 0x000148c6919d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pIVar1->_padding_ + 0xf8))(pIVar1,param_1);
  return;
}

// SetEnabledTests @ 148c6a080

void __thiscall
FAutomationReportManager::SetEnabledTests
          (FAutomationReportManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  IAutomationReport *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((this->ReportRoot).Object == (IAutomationReport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->ReportRoot).Object;
  local_18 = 0;
  local_10 = 0;
  (**(code **)(pIVar1->_padding_ + 0x90))(pIVar1,param_1,&local_18);
  return;
}

// SetFilter @ 148c6a7a0

void __thiscall
FAutomationReportManager::SetFilter
          (FAutomationReportManager *this,
          TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1> *param_1)

{
  IAutomationReport *pIVar1;
  code *pcVar2;
  bool bVar3;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((this->ReportRoot).Object == (IAutomationReport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->ReportRoot).Object;
  pcVar2 = *(code **)(pIVar1->_padding_ + 0xd8);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(pIVar1,&local_18,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetVisibleTestsEnabled @ 148c6c4a0

void __thiscall
FAutomationReportManager::SetVisibleTestsEnabled(FAutomationReportManager *this,bool param_1)

{
  IAutomationReport *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->ReportRoot).Object == (IAutomationReport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->ReportRoot).Object;
                    /* WARNING: Could not recover jumptable at 0x000148c6c4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pIVar1->_padding_ + 0xb8))(pIVar1,param_1);
  return;
}

// StopRunningTests @ 148c6d7a0

void __thiscall FAutomationReportManager::StopRunningTests(FAutomationReportManager *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ReportRoot).Object == (IAutomationReport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148c6d7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->ReportRoot).Object)->_padding_ + 0x1a8))();
  return;
}

