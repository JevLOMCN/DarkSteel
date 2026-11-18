// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FFineGrainedPerformanceTracker @ 1476e77a0

FFineGrainedPerformanceTracker * __thiscall
FFineGrainedPerformanceTracker::FFineGrainedPerformanceTracker
          (FFineGrainedPerformanceTracker *this,FDateTime *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  (this->GameThreadFrameTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameThreadFrameTimes).ArrayNum = 0;
  (this->GPUFrameTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->GameThreadFrameTimes).ArrayMax;
  (this->GPUFrameTimes).ArrayNum = 0;
  piVar4 = &(this->RenderThreadFrameTimes).ArrayMax;
  (this->GPUFrameTimes).ArrayMax = 0;
  piVar2 = &(this->FrameTimes).ArrayMax;
  (this->RenderThreadFrameTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->ActiveModes).ArrayMax;
  (this->RenderThreadFrameTimes).ArrayNum = 0;
  *piVar4 = 0;
  *piVar1 = 0;
  (this->FrameTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameTimes).ArrayNum = 0;
  *piVar2 = 0;
  (this->ActiveModes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveModes).ArrayNum = 0;
  *piVar3 = 0;
  (this->DynamicResolutionScreenPercentages).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DynamicResolutionScreenPercentages).ArrayNum = 0;
  (this->DynamicResolutionScreenPercentages).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FFineGrainedPerformanceTracker__6B_;
  (this->CaptureStartTime).Ticks = param_1->Ticks;
  this->CurrentModeContext = 0;
  (this->RenderThreadFrameTimes).ArrayNum = 0;
  if (*piVar4 < 18000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,18000,&(this->RenderThreadFrameTimes).AllocatorInstance,0,piVar4);
  }
  piVar4 = &(this->GPUFrameTimes).ArrayMax;
  (this->GPUFrameTimes).ArrayNum = 0;
  if (*piVar4 < 18000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,18000,&(this->GPUFrameTimes).AllocatorInstance,0,piVar4);
  }
  (this->GameThreadFrameTimes).ArrayNum = 0;
  if (*piVar1 < 18000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,18000,&(this->GameThreadFrameTimes).AllocatorInstance,0,piVar1);
  }
  (this->FrameTimes).ArrayNum = 0;
  if (*piVar2 < 18000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,18000,&(this->FrameTimes).AllocatorInstance,0,piVar2);
  }
  (this->ActiveModes).ArrayNum = 0;
  if (*piVar3 < 18000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,18000,&(this->ActiveModes).AllocatorInstance,0,piVar3);
  }
  return this;
}

// DumpFrameTimesToStatsLog @ 147702d80

void __thiscall
FFineGrainedPerformanceTracker::DumpFrameTimesToStatsLog
          (FFineGrainedPerformanceTracker *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  IFileManager *pIVar6;
  FArchive *this_00;
  wchar_t *pwVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  TArray<float,TSizedDefaultAllocator<32>_> local_d8;
  TArray<float,TSizedDefaultAllocator<32>_> local_c8;
  TArray<float,TSizedDefaultAllocator<32>_> local_b8;
  TArray<float,TSizedDefaultAllocator<32>_> local_a8;
  TArray<float,TSizedDefaultAllocator<32>_> local_98 [7];
  
  pIVar6 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  this_00 = (FArchive *)(**(code **)((longlong)*pIVar6 + 0x28))(pIVar6,pwVar7,0);
  if (this_00 != (FArchive *)0x0) {
    FArchive::LogfImpl(this_00,L"Percentile,Frame (ms), GT (ms), RT (ms), GPU (ms),DynRes,Context");
    local_98[0].ArrayNum = (this->FrameTimes).ArrayNum;
    lVar10 = (longlong)local_98[0].ArrayNum;
    uVar9 = 0;
    pFVar1 = (this->FrameTimes).AllocatorInstance.Data;
    local_98[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_98[0].ArrayNum == 0) {
      local_98[0].ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_98[0].ArrayNum,0,&local_98[0].AllocatorInstance,local_98[0].ArrayNum,
                 &local_98[0].ArrayMax);
      memcpy(local_98[0].AllocatorInstance.Data,pFVar1,lVar10 << 2);
    }
    local_a8.ArrayNum = (this->GameThreadFrameTimes).ArrayNum;
    lVar10 = (longlong)local_a8.ArrayNum;
    pFVar1 = (this->GameThreadFrameTimes).AllocatorInstance.Data;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_a8.ArrayNum == 0) {
      local_a8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_a8.ArrayNum,0,&local_a8.AllocatorInstance,local_a8.ArrayNum,
                 &local_a8.ArrayMax);
      memcpy(local_a8.AllocatorInstance.Data,pFVar1,lVar10 << 2);
    }
    local_b8.ArrayNum = (this->RenderThreadFrameTimes).ArrayNum;
    lVar10 = (longlong)local_b8.ArrayNum;
    pFVar1 = (this->RenderThreadFrameTimes).AllocatorInstance.Data;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_b8.ArrayNum == 0) {
      local_b8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_b8.ArrayNum,0,&local_b8.AllocatorInstance,local_b8.ArrayNum,
                 &local_b8.ArrayMax);
      memcpy(local_b8.AllocatorInstance.Data,pFVar1,lVar10 << 2);
    }
    local_c8.ArrayNum = (this->GPUFrameTimes).ArrayNum;
    lVar10 = (longlong)local_c8.ArrayNum;
    pFVar1 = (this->GPUFrameTimes).AllocatorInstance.Data;
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_c8.ArrayNum == 0) {
      local_c8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_c8.ArrayNum,0,&local_c8.AllocatorInstance,local_c8.ArrayNum,
                 &local_c8.ArrayMax);
      memcpy(local_c8.AllocatorInstance.Data,pFVar1,lVar10 << 2);
    }
    local_d8.ArrayNum = (this->DynamicResolutionScreenPercentages).ArrayNum;
    lVar10 = (longlong)local_d8.ArrayNum;
    pFVar1 = (this->DynamicResolutionScreenPercentages).AllocatorInstance.Data;
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_d8.ArrayNum == 0) {
      local_d8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_d8.ArrayNum,0,&local_d8.AllocatorInstance,local_d8.ArrayNum,
                 &local_d8.ArrayMax);
      memcpy(local_d8.AllocatorInstance.Data,pFVar1,lVar10 << 2);
    }
    iVar8 = 0x19;
    do {
      GetPercentileValue(&local_d8,iVar8);
      GetPercentileValue(&local_c8,iVar8);
      GetPercentileValue(&local_b8,iVar8);
      GetPercentileValue(&local_a8,iVar8);
      GetPercentileValue(local_98,iVar8);
      FArchive::LogfImpl(this_00,L"%d,%.2f,%.2f,%.2f,%.2f,%.2f,%d");
      iVar8 = iVar8 + 0x19;
    } while (iVar8 < 0x4c);
    FArchive::LogfImpl(this_00,L"Time (sec),Frame (ms), GT (ms), RT (ms), GPU (ms),DynRes,Context");
    if (0 < (this->FrameTimes).ArrayNum) {
      do {
        uVar11 = ~uVar9 >> 0x1f;
        uVar4 = 0;
        uVar5 = uVar4;
        if ((int)uVar9 < (this->ActiveModes).ArrayNum) {
          uVar5 = uVar11;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar5 = uVar4;
        if ((int)uVar9 < (this->DynamicResolutionScreenPercentages).ArrayNum) {
          uVar5 = uVar11;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar5 = uVar4;
        if ((int)uVar9 < (this->GPUFrameTimes).ArrayNum) {
          uVar5 = uVar11;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((int)uVar9 < (this->RenderThreadFrameTimes).ArrayNum) {
          uVar4 = uVar11;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar4 = 0;
        uVar5 = uVar4;
        if ((int)uVar9 < (this->GameThreadFrameTimes).ArrayNum) {
          uVar5 = uVar11;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar5 = uVar4;
        if ((int)uVar9 < (this->FrameTimes).ArrayNum) {
          uVar5 = uVar11;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FArchive::LogfImpl(this_00,L"%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%d");
        if ((int)uVar9 < (this->FrameTimes).ArrayNum) {
          uVar4 = uVar11;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (this->FrameTimes).ArrayNum);
    }
    (*(code *)**(undefined8 **)this_00)(this_00,1);
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (local_98[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].AllocatorInstance.Data);
    }
  }
  return;
}

// GetPercentileValue @ 1477093b0

float __cdecl
FFineGrainedPerformanceTracker::GetPercentileValue
          (TArray<float,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  uint local_res8;
  int local_res18;
  longlong local_90;
  longlong local_88;
  
  local_res8 = param_1->ArrayNum - 1;
  local_res18 = 0;
  if ((int)local_res8 < 0) {
    return __real_bf800000;
  }
  local_90 = (longlong)(int)local_res8;
  uVar5 = (int)(local_res8 * param_2) / 100;
  uVar16 = 0;
  if (local_res8 != 0) {
    local_88 = 0;
    do {
      uVar9 = ~local_res8 >> 0x1f;
      uVar7 = 0;
      uVar13 = uVar7;
      if ((int)local_res8 < param_1->ArrayNum) {
        uVar13 = uVar9;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        fVar19 = (float)(*pcVar4)();
        return fVar19;
      }
      lVar10 = (longlong)(int)local_res8;
      fVar19 = *(float *)((param_1->AllocatorInstance).Data + lVar10 * 4);
      lVar18 = local_88 + -1;
      uVar13 = local_res18 - 1;
      uVar15 = local_res8;
      while( true ) {
        do {
          uVar12 = uVar13;
          lVar17 = lVar18;
          uVar13 = uVar12 + 1;
          lVar18 = lVar17 + 1;
          uVar11 = ~uVar13 >> 0x1f;
          uVar8 = uVar7;
          if ((int)uVar13 < param_1->ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar19 = (float)(*pcVar4)();
            return fVar19;
          }
          pFVar1 = (param_1->AllocatorInstance).Data + lVar18 * 4;
        } while (*(float *)pFVar1 <= fVar19 && fVar19 != *(float *)pFVar1);
        do {
          uVar14 = -uVar15;
          uVar15 = uVar15 - 1;
          uVar14 = uVar14 >> 0x1f;
          lVar10 = lVar10 + -1;
          uVar8 = uVar7;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            fVar19 = (float)(*pcVar4)();
            return fVar19;
          }
        } while ((fVar19 < *(float *)((param_1->AllocatorInstance).Data + lVar10 * 4)) &&
                (lVar10 != local_88));
        if ((int)uVar15 <= (int)uVar13) break;
        uVar8 = uVar7;
        if ((int)uVar13 < param_1->ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar19 = (float)(*pcVar4)();
          return fVar19;
        }
        uVar2 = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar18 * 4);
        uVar8 = uVar7;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar19 = (float)(*pcVar4)();
          return fVar19;
        }
        uVar3 = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar10 * 4);
        uVar8 = uVar7;
        if ((int)uVar13 < param_1->ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar19 = (float)(*pcVar4)();
          return fVar19;
        }
        *(undefined4 *)((param_1->AllocatorInstance).Data + lVar18 * 4) = uVar3;
        uVar8 = uVar16;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar19 = (float)(*pcVar4)();
          return fVar19;
        }
        *(undefined4 *)((param_1->AllocatorInstance).Data + lVar10 * 4) = uVar2;
      }
      uVar15 = uVar16;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar15 = uVar11;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        fVar19 = (float)(*pcVar4)();
        return fVar19;
      }
      uVar2 = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar18 * 4);
      uVar15 = uVar7;
      if ((int)local_res8 < param_1->ArrayNum) {
        uVar15 = uVar9;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        fVar19 = (float)(*pcVar4)();
        return fVar19;
      }
      uVar3 = *(undefined4 *)((param_1->AllocatorInstance).Data + local_90 * 4);
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        fVar19 = (float)(*pcVar4)();
        return fVar19;
      }
      *(undefined4 *)((param_1->AllocatorInstance).Data + lVar18 * 4) = uVar3;
      uVar13 = uVar16;
      if ((int)local_res8 < param_1->ArrayNum) {
        uVar13 = uVar9;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        fVar19 = (float)(*pcVar4)();
        return fVar19;
      }
      *(undefined4 *)((param_1->AllocatorInstance).Data + local_90 * 4) = uVar2;
      if (lVar18 <= (int)uVar5) {
        if ((int)uVar5 <= lVar18) break;
        local_res18 = uVar12 + 2;
        local_88 = lVar17 + 2;
        uVar12 = local_res8;
        lVar17 = local_90;
      }
      local_90 = lVar17;
      local_res8 = uVar12;
    } while (local_90 != local_88);
  }
  if ((int)uVar5 < param_1->ArrayNum) {
    uVar16 = ~uVar5 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    fVar19 = (float)(*pcVar4)();
    return fVar19;
  }
  return *(float *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 4);
}

// Presize @ 147721a40

void __thiscall
FFineGrainedPerformanceTracker::Presize(FFineGrainedPerformanceTracker *this,int param_1)

{
  if (-1 < param_1) {
    (this->RenderThreadFrameTimes).ArrayNum = 0;
    if ((this->RenderThreadFrameTimes).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->RenderThreadFrameTimes).AllocatorInstance,0,
                 &(this->RenderThreadFrameTimes).ArrayMax);
    }
    (this->GPUFrameTimes).ArrayNum = 0;
    if ((this->GPUFrameTimes).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->GPUFrameTimes).AllocatorInstance,0,
                 &(this->GPUFrameTimes).ArrayMax);
    }
    (this->GameThreadFrameTimes).ArrayNum = 0;
    if ((this->GameThreadFrameTimes).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->GameThreadFrameTimes).AllocatorInstance,0,
                 &(this->GameThreadFrameTimes).ArrayMax);
    }
    (this->FrameTimes).ArrayNum = 0;
    if ((this->FrameTimes).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->FrameTimes).AllocatorInstance,0,&(this->FrameTimes).ArrayMax);
    }
    (this->ActiveModes).ArrayNum = 0;
    if ((this->ActiveModes).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->ActiveModes).AllocatorInstance,0,&(this->ActiveModes).ArrayMax)
      ;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ProcessFrame @ 147721e10

void __thiscall
FFineGrainedPerformanceTracker::ProcessFrame
          (FFineGrainedPerformanceTracker *this,FFrameData *param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [4];
  
  pFVar3 = (this->GameThreadFrameTimes).AllocatorInstance.Data;
  local_28 = (float)param_1->GameThreadTimeSeconds;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(this->GameThreadFrameTimes).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->GameThreadFrameTimes).ArrayNum;
  piVar1 = &(this->GameThreadFrameTimes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->GameThreadFrameTimes).AllocatorInstance,piVar1);
  }
  (this->GameThreadFrameTimes).ArrayNum = iVar6 + 1;
  *(float *)((this->GameThreadFrameTimes).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_28;
  pFVar3 = (this->RenderThreadFrameTimes).AllocatorInstance.Data;
  local_24 = (float)param_1->RenderThreadTimeSeconds;
  if ((pFVar3 <= (FScriptContainerElement *)&local_24) &&
     ((FScriptContainerElement *)&local_24 <
      pFVar3 + (longlong)(this->RenderThreadFrameTimes).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->RenderThreadFrameTimes).ArrayNum;
  piVar1 = &(this->RenderThreadFrameTimes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->RenderThreadFrameTimes).AllocatorInstance,piVar1);
  }
  (this->RenderThreadFrameTimes).ArrayNum = iVar6 + 1;
  *(float *)((this->RenderThreadFrameTimes).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_24
  ;
  pFVar3 = (this->GPUFrameTimes).AllocatorInstance.Data;
  local_20 = (float)param_1->GPUTimeSeconds;
  if ((pFVar3 <= (FScriptContainerElement *)&local_20) &&
     ((FScriptContainerElement *)&local_20 < pFVar3 + (longlong)(this->GPUFrameTimes).ArrayMax * 4))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->GPUFrameTimes).ArrayNum;
  piVar1 = &(this->GPUFrameTimes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->GPUFrameTimes).AllocatorInstance,piVar1);
  }
  (this->GPUFrameTimes).ArrayNum = iVar6 + 1;
  *(float *)((this->GPUFrameTimes).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_20;
  pFVar3 = (this->FrameTimes).AllocatorInstance.Data;
  local_1c = (float)param_1->DeltaSeconds;
  if ((pFVar3 <= (FScriptContainerElement *)&local_1c) &&
     ((FScriptContainerElement *)&local_1c < pFVar3 + (longlong)(this->FrameTimes).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->FrameTimes).ArrayNum;
  piVar1 = &(this->FrameTimes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->FrameTimes).AllocatorInstance,piVar1);
  }
  (this->FrameTimes).ArrayNum = iVar6 + 1;
  piVar1 = &this->CurrentModeContext;
  *(float *)((this->FrameTimes).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_1c;
  pFVar3 = (this->ActiveModes).AllocatorInstance.Data;
  if ((pFVar3 <= piVar1) && (piVar1 < pFVar3 + (longlong)(this->ActiveModes).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ActiveModes).ArrayNum;
  piVar2 = &(this->ActiveModes).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->ActiveModes).AllocatorInstance,piVar2);
  }
  (this->ActiveModes).ArrayNum = iVar6 + 1;
  *(int *)((this->ActiveModes).AllocatorInstance.Data + (longlong)iVar6 * 4) = *piVar1;
  pFVar3 = (this->DynamicResolutionScreenPercentages).AllocatorInstance.Data;
  local_18[0] = (float)param_1->DynamicResolutionScreenPercentage;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(this->DynamicResolutionScreenPercentages).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->DynamicResolutionScreenPercentages).ArrayNum;
  piVar1 = &(this->DynamicResolutionScreenPercentages).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->DynamicResolutionScreenPercentages).AllocatorInstance,piVar1);
  }
  (this->DynamicResolutionScreenPercentages).ArrayNum = iVar6 + 1;
  *(float *)((this->DynamicResolutionScreenPercentages).AllocatorInstance.Data + (longlong)iVar6 * 4
            ) = local_18[0];
  return;
}

// StartCharting @ 14772af80

void __thiscall FFineGrainedPerformanceTracker::StartCharting(FFineGrainedPerformanceTracker *this)

{
  return;
}

// StopCharting @ 14772cc20

void __thiscall FFineGrainedPerformanceTracker::StopCharting(FFineGrainedPerformanceTracker *this)

{
  return;
}

