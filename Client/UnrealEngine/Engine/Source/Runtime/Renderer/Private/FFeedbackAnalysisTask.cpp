// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// DoTask @ 1458ea3e0

void __cdecl FFeedbackAnalysisTask::DoTask(FFeedbackAnalysisParameters *param_1)

{
  uint uVar1;
  FUniquePageList *pFVar2;
  uint uVar3;
  TIntPoint<unsigned_int> *pTVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_void___cdecl_FFeedbackAnalysisTask::DoTask(FFeedbackAnalysisParameters&___ptr64)'
                ::__l2::__CpuProfilerEventSpecId261,"FVirtualTextureSystem::FeedbackAnalysisTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
               ,0x105);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_void___cdecl_FFeedbackAnalysisTask::DoTask(FFeedbackAnalysisParameters&___ptr64)'
               ::__l2::__CpuProfilerEventSpecId261);
  }
  pFVar2 = param_1->UniquePageList;
  if (pFVar2->bInitialized == false) {
    memset(pFVar2->HashIndices,0xff,0x8000);
    pFVar2->bInitialized = true;
  }
  pFVar2 = param_1->UniquePageList;
  uVar3 = 0xffffffff;
  pTVar4 = param_1->FeedbackBuffer;
  if (param_1->FeedbackSize != 0) {
    uVar7 = (ulonglong)param_1->FeedbackSize;
    uVar5 = 0;
    do {
      uVar1 = (pTVar4->field0_0x0)._s_0.X;
      uVar6 = (pTVar4->field0_0x0)._s_0.Y;
      if (uVar1 == uVar3) {
        uVar6 = uVar5 + uVar6;
        uVar1 = uVar3;
      }
      else if (uVar3 != 0xffffffff) {
        FUniquePageList::Add(pFVar2,uVar3,uVar5);
      }
      uVar3 = uVar1;
      pTVar4 = pTVar4 + 1;
      uVar7 = uVar7 - 1;
      uVar5 = uVar6;
    } while (uVar7 != 0);
    if (uVar3 != 0xffffffff) {
      FUniquePageList::Add(pFVar2,uVar3,uVar6);
    }
  }
  if (!bVar8) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

