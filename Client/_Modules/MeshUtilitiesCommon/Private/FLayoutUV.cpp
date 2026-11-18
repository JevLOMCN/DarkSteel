// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshUtilitiesCommon
// Functions: 6

// FLayoutUV @ 144351850

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

FLayoutUV * __thiscall FLayoutUV::FLayoutUV(FLayoutUV *this,IMeshView *param_1)

{
  this->MeshView = param_1;
  (this->MeshTexCoords).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshTexCoords).ArrayNum = 0;
  (this->MeshTexCoords).ArrayMax = 0;
  (this->MeshSortedTris).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshSortedTris).ArrayNum = 0;
  (this->MeshSortedTris).ArrayMax = 0;
  (this->MeshCharts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshCharts).ArrayNum = 0;
  (this->MeshCharts).ArrayMax = 0;
  this->PackedTextureResolution = 0;
  this->LayoutVersion = Latest;
  return this;
}

// CommitPackedUVs @ 144353400

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

void __thiscall FLayoutUV::CommitPackedUVs(FLayoutUV *this)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  float fVar16;
  float local_res10;
  float local_res14;
  
  if (this->PackedTextureResolution != 0) {
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1493,"FLayoutUV::CommitPackedUVs",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\LayoutUV.cpp"
                 ,0x5d5);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1493);
    }
    (**(code **)((longlong)*this->MeshView + 0x28))(this->MeshView,(this->MeshTexCoords).ArrayNum);
    fVar5 = __real_3f800000;
    if (0 < (this->MeshCharts).ArrayNum) {
      uVar10 = 0;
      uVar12 = uVar10;
      do {
        uVar9 = (uint)uVar10;
        uVar14 = 0;
        if ((int)uVar9 < (this->MeshCharts).ArrayNum) {
          uVar14 = ~uVar9 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->MeshCharts).AllocatorInstance.Data;
        fVar16 = fVar5 / (float)this->PackedTextureResolution;
        *(float *)(pFVar2 + uVar12 + 0x38) = fVar16 * *(float *)(pFVar2 + uVar12 + 0x38);
        *(float *)(pFVar2 + uVar12 + 0x34) = fVar16 * *(float *)(pFVar2 + uVar12 + 0x34);
        fVar16 = fVar5 / (float)this->PackedTextureResolution;
        *(float *)(pFVar2 + uVar12 + 0x40) = fVar16 * *(float *)(pFVar2 + uVar12 + 0x40);
        *(float *)(pFVar2 + uVar12 + 0x3c) = fVar16 * *(float *)(pFVar2 + uVar12 + 0x3c);
        fVar16 = fVar5 / (float)this->PackedTextureResolution;
        *(float *)(pFVar2 + uVar12 + 0x48) = fVar16 * *(float *)(pFVar2 + uVar12 + 0x48);
        *(float *)(pFVar2 + uVar12 + 0x44) = fVar16 * *(float *)(pFVar2 + uVar12 + 0x44);
        uVar14 = *(uint *)(pFVar2 + uVar12);
        if (uVar14 < *(uint *)(pFVar2 + uVar12 + 4)) {
          do {
            uVar11 = ~uVar14 >> 0x1f;
            uVar7 = 0;
            if ((int)uVar14 < (this->MeshSortedTris).ArrayNum) {
              uVar7 = uVar11;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar13 = (longlong)(int)uVar14;
            uVar7 = *(int *)((this->MeshSortedTris).AllocatorInstance.Data + lVar13 * 4) * 3;
            uVar8 = 0;
            if ((int)uVar7 < (this->MeshTexCoords).ArrayNum) {
              uVar8 = ~uVar7 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (this->MeshTexCoords).AllocatorInstance.Data;
            fVar16 = *(float *)(pFVar3 + (longlong)(int)uVar7 * 8);
            fVar1 = *(float *)(pFVar3 + (longlong)(int)uVar7 * 8 + 4);
            local_res10 = fVar1 * *(float *)(pFVar2 + uVar12 + 0x3c) +
                          fVar16 * *(float *)(pFVar2 + uVar12 + 0x34) +
                          *(float *)(pFVar2 + uVar12 + 0x44);
            local_res14 = fVar1 * *(float *)(pFVar2 + uVar12 + 0x40) +
                          fVar16 * *(float *)(pFVar2 + uVar12 + 0x38) +
                          *(float *)(pFVar2 + uVar12 + 0x48);
            (**(code **)((longlong)*this->MeshView + 0x30))(this->MeshView,uVar7,&local_res10);
            uVar7 = 0;
            if ((int)uVar14 < (this->MeshSortedTris).ArrayNum) {
              uVar7 = uVar11;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar7 = *(int *)((this->MeshSortedTris).AllocatorInstance.Data + lVar13 * 4) * 3 + 1;
            uVar8 = 0;
            if ((int)uVar7 < (this->MeshTexCoords).ArrayNum) {
              uVar8 = ~uVar7 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (this->MeshTexCoords).AllocatorInstance.Data;
            fVar16 = *(float *)(pFVar3 + (longlong)(int)uVar7 * 8);
            fVar1 = *(float *)(pFVar3 + (longlong)(int)uVar7 * 8 + 4);
            local_res10 = fVar1 * *(float *)(pFVar2 + uVar12 + 0x3c) +
                          fVar16 * *(float *)(pFVar2 + uVar12 + 0x34) +
                          *(float *)(pFVar2 + uVar12 + 0x44);
            local_res14 = fVar1 * *(float *)(pFVar2 + uVar12 + 0x40) +
                          fVar16 * *(float *)(pFVar2 + uVar12 + 0x38) +
                          *(float *)(pFVar2 + uVar12 + 0x48);
            (**(code **)((longlong)*this->MeshView + 0x30))(this->MeshView,uVar7,&local_res10);
            uVar7 = 0;
            if ((int)uVar14 < (this->MeshSortedTris).ArrayNum) {
              uVar7 = uVar11;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar7 = *(int *)((this->MeshSortedTris).AllocatorInstance.Data + lVar13 * 4) * 3 + 2;
            uVar11 = 0;
            if ((int)uVar7 < (this->MeshTexCoords).ArrayNum) {
              uVar11 = ~uVar7 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (this->MeshTexCoords).AllocatorInstance.Data;
            fVar16 = *(float *)(pFVar3 + (longlong)(int)uVar7 * 8);
            fVar1 = *(float *)(pFVar3 + (longlong)(int)uVar7 * 8 + 4);
            local_res10 = fVar1 * *(float *)(pFVar2 + uVar12 + 0x3c) +
                          fVar16 * *(float *)(pFVar2 + uVar12 + 0x34) +
                          *(float *)(pFVar2 + uVar12 + 0x44);
            local_res14 = fVar1 * *(float *)(pFVar2 + uVar12 + 0x40) +
                          fVar16 * *(float *)(pFVar2 + uVar12 + 0x38) +
                          *(float *)(pFVar2 + uVar12 + 0x48);
            (**(code **)((longlong)*this->MeshView + 0x30))(this->MeshView,uVar7,&local_res10);
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(pFVar2 + uVar12 + 4));
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar12 = uVar12 + 0x60;
      } while ((int)(uVar9 + 1) < (this->MeshCharts).ArrayNum);
    }
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
  }
  return;
}

// FindBestPacking @ 1443550d0

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

bool __thiscall FLayoutUV::FindBestPacking(FLayoutUV *this,uint param_1)

{
  bool bVar1;
  uint uVar2;
  FChartPacker local_28;
  
  local_28.MeshView = this->MeshView;
  local_28.LayoutVersion = this->LayoutVersion;
  local_28.TotalUVArea = 0.0;
  local_28.TextureResolution = param_1;
  bVar1 = FChartPacker::FindBestPacking
                    (&local_28,&this->MeshTexCoords,&this->MeshSortedTris,&this->MeshCharts);
  uVar2 = 0;
  if (bVar1) {
    uVar2 = param_1;
  }
  this->PackedTextureResolution = uVar2;
  return bVar1;
}

// FindCharts @ 144358f70

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

int __thiscall FLayoutUV::FindCharts(FLayoutUV *this,FOverlappingCorners *param_1)

{
  int iVar1;
  FChartFinder local_18;
  
  local_18.MeshView = this->MeshView;
  local_18.LayoutVersion = this->LayoutVersion;
  local_18.NextMeshChartId = 0;
  iVar1 = FChartFinder::FindCharts
                    (&local_18,param_1,&this->MeshTexCoords,&this->MeshSortedTris,&this->MeshCharts)
  ;
  return iVar1;
}

// LogStats @ 14435a580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FLayoutUV::LogStats(void)

{
  FString local_28 [2];
  
  if (4 < (byte)LogLayoutUV._0_1_) {
    FGenericPlatformTime::PrettyTime
              (local_28,(double)(ulonglong)FindBestPackingCycles *
                        FGenericPlatformTime::SecondsPerCycle64);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLayoutUV);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ResetStats @ 14435c650

void __cdecl FLayoutUV::ResetStats(void)

{
  LOCK();
  FindBestPackingCount = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  FindBestPackingEfficiency = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  FindBestPackingCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  return;
}

