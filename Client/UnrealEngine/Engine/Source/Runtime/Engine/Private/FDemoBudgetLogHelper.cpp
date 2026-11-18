// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// NewFrame @ 147afa010

/* WARNING: Removing unreachable block (ram,0x000147afa1b1) */
/* WARNING: Removing unreachable block (ram,0x000147afa140) */
/* WARNING: Removing unreachable block (ram,0x000147afa279) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDemoBudgetLogHelper::NewFrame(FDemoBudgetLogHelper *this)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  LARGE_INTEGER local_res8;
  ForAnyElementType local_48;
  undefined8 local_40;
  FString local_38;
  
  if (this->FirstWarningTime != 0.0) {
    this->NumFrames = this->NumFrames + 1;
    this->bOverBudgetThisFrame = false;
    QueryPerformanceCounter(&local_res8);
    if ((double)DemoNetDriverRecordingPrivate::WarningTimeInterval <
        ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - this->FirstWarningTime) {
      if (4 < (byte)LogDemo._0_1_) {
        local_48.Data = (FScriptContainerElement *)0x0;
        local_40 = 0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,5,&local_48,0,(int *)((longlong)&local_40 + 4));
        ::FString::PrintfImpl(&local_38,L"%s: Recorded Frames: %d, Frames Over Budget: %d");
        iVar2 = (int)local_40;
        if ((int)local_40 == local_40._4_4_) {
          iVar2 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_48,(int *)((longlong)&local_40 + 4));
        }
        lVar4 = (longlong)iVar2;
        *(undefined8 *)(local_48.Data + lVar4 * 0x10) = 0;
        *(FScriptContainerElement **)(local_48.Data + lVar4 * 0x10) =
             local_38.Data.AllocatorInstance.Data;
        *(int *)(local_48.Data + lVar4 * 0x10 + 8) = local_38.Data.ArrayNum;
        *(int *)(local_48.Data + lVar4 * 0x10 + 0xc) = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_40._0_4_ = iVar2 + 1;
        ::FString::PrintfImpl(&local_38,L"Total number of over budget frames in category %d: %d");
        if ((int)local_40 == local_40._4_4_) {
          local_40._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_48,(int *)((longlong)&local_40 + 4));
        }
        iVar2 = (int)local_40 + 1;
        lVar4 = (longlong)(int)local_40;
        *(undefined8 *)(local_48.Data + lVar4 * 0x10) = 0;
        *(FScriptContainerElement **)(local_48.Data + lVar4 * 0x10) =
             local_38.Data.AllocatorInstance.Data;
        *(int *)(local_48.Data + lVar4 * 0x10 + 8) = local_38.Data.ArrayNum;
        *(int *)(local_48.Data + lVar4 * 0x10 + 0xc) = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_40._0_4_ = iVar2;
        if (0 < this->NumFramesOverBudgetByCategory[0]) {
          if (iVar2 == local_40._4_4_) {
            iVar2 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_48,(int *)((longlong)&local_40 + 4));
          }
          local_40._0_4_ = iVar2 + 1;
          lVar4 = (longlong)iVar2;
          *(undefined8 *)(local_48.Data + lVar4 * 0x10) = 0;
          *(FScriptContainerElement **)(local_48.Data + lVar4 * 0x10) =
               this->LogSamplesByBudget[0].Data.AllocatorInstance.Data;
          this->LogSamplesByBudget[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(local_48.Data + lVar4 * 0x10 + 8) = this->LogSamplesByBudget[0].Data.ArrayNum;
          *(int *)(local_48.Data + lVar4 * 0x10 + 0xc) = this->LogSamplesByBudget[0].Data.ArrayMax;
          this->LogSamplesByBudget[0].Data.ArrayNum = 0;
          this->LogSamplesByBudget[0].Data.ArrayMax = 0;
        }
        ::FString::PrintfImpl(&local_38,L"Total number of over budget frames in category %d: %d");
        if ((int)local_40 == local_40._4_4_) {
          local_40._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_48,(int *)((longlong)&local_40 + 4));
        }
        iVar2 = (int)local_40 + 1;
        lVar4 = (longlong)(int)local_40;
        local_40 = CONCAT44(local_40._4_4_,iVar2);
        *(undefined8 *)(local_48.Data + lVar4 * 0x10) = 0;
        *(FScriptContainerElement **)(local_48.Data + lVar4 * 0x10) =
             local_38.Data.AllocatorInstance.Data;
        *(int *)(local_48.Data + lVar4 * 0x10 + 8) = local_38.Data.ArrayNum;
        *(int *)(local_48.Data + lVar4 * 0x10 + 0xc) = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (0 < this->NumFramesOverBudgetByCategory[1]) {
          if (iVar2 == local_40._4_4_) {
            iVar2 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_48,(int *)((longlong)&local_40 + 4));
          }
          lVar4 = (longlong)iVar2;
          local_40 = CONCAT44(local_40._4_4_,iVar2 + 1);
          *(undefined8 *)(local_48.Data + lVar4 * 0x10) = 0;
          *(FScriptContainerElement **)(local_48.Data + lVar4 * 0x10) =
               this->LogSamplesByBudget[1].Data.AllocatorInstance.Data;
          this->LogSamplesByBudget[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(local_48.Data + lVar4 * 0x10 + 8) = this->LogSamplesByBudget[1].Data.ArrayNum;
          *(int *)(local_48.Data + lVar4 * 0x10 + 0xc) = this->LogSamplesByBudget[1].Data.ArrayMax;
          this->LogSamplesByBudget[1].Data.ArrayNum = 0;
          this->LogSamplesByBudget[1].Data.ArrayMax = 0;
        }
        if (4 < (byte)LogDemo._0_1_) {
          iVar2 = (int)local_40;
          uVar3 = (ulonglong)(int)local_40;
          bVar1 = true;
          pFVar7 = local_48.Data + uVar3 * 0x10;
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_38.Data.ArrayNum = 0;
          local_38.Data.ArrayMax = 0;
          FVar5.Data = local_48.Data;
          while( true ) {
            if ((int)uVar3 != iVar2) {
              `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_res8);
            }
            if (FVar5.Data == pFVar7) break;
            if (bVar1) {
              bVar1 = false;
            }
            else {
              ::FString::AppendChars(&local_38,L"\n",1);
            }
            iVar6 = *(int *)(FVar5.Data + 8) + -1;
            if (*(int *)(FVar5.Data + 8) == 0) {
              iVar6 = 0;
            }
            ::FString::AppendChars(&local_38,*(wchar_t **)FVar5.Data,iVar6);
            uVar3 = local_40 & 0xffffffff;
            FVar5.Data = FVar5.Data + 0x10;
          }
          UE::Logging::Private::BasicLog<5>
                    (&`public:_void___cdecl_FDemoBudgetLogHelper::NewFrame(void)___ptr64'::__l17::
                      LOG_Static,(FLogCategoryBase *)&LogDemo);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        DestructItems<FString,int>((FString *)local_48.Data,(int)local_40);
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data);
        }
      }
      ResetCounters(this);
    }
  }
  return;
}

// ResetCounters @ 147b0d5f0

void __thiscall FDemoBudgetLogHelper::ResetCounters(FDemoBudgetLogHelper *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 local_18 [2];
  
  pFVar1 = this->LogSamplesByBudget;
  this->NumFrames = 0;
  this->NumFramesOverBudget = 0;
  this->FirstWarningTime = 0.0;
  this->NumFramesOverBudgetByCategory[0] = 0;
  if (pFVar1 != (FString *)local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this->LogSamplesByBudget[0].Data.ArrayNum = 0;
    this->LogSamplesByBudget[0].Data.ArrayMax = 0;
  }
  pFVar1 = this->LogSamplesByBudget + 1;
  this->NumFramesOverBudgetByCategory[1] = 0;
  if (pFVar1 != (FString *)local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this->LogSamplesByBudget[1].Data.ArrayNum = 0;
    this->LogSamplesByBudget[1].Data.ArrayMax = 0;
  }
  return;
}

