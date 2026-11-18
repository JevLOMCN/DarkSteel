// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// RequestScreenshot @ 1484210e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FTraceScreenshot::RequestScreenshot(FString *param_1,bool param_2,FLogCategoryBase *param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FDateTime this;
  FString *pFVar3;
  TIntRect<int>_u_0 local_18;
  
  bVar2 = FMiscTrace::ShouldTraceScreenshot();
  if (bVar2) {
    bSuppressWritingToFile = true;
    if ((param_1->Data).ArrayNum < 2) {
      this = FDateTime::Now();
      pFVar3 = FDateTime::ToString((FDateTime *)this.Ticks,(FString *)&local_18._s_0,
                                   L"Screenshot_%Y%m%d_%H%M%S");
      if (param_1 != pFVar3) {
        pFVar1 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
        (param_1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if ((TIntPoint<int>_u_0)local_18._s_0.Min.field0_0x0 != (TIntPoint<int>_u_0)0x0) {
        FMemory::Free((void *)local_18._s_0.Min.field0_0x0);
      }
    }
    local_18._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_18._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FScreenshotRequest::RequestScreenshot
              (param_1,param_2,false,false,(TIntRect<int> *)&local_18._s_0);
  }
  else if ((Fatal < param_3->CompileTimeVerbosity) && (Fatal < param_3->Verbosity)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,param_3);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Reset @ 148421650

void __cdecl FTraceScreenshot::Reset(void)

{
  bSuppressWritingToFile = false;
  return;
}

// TraceScreenshot @ 1484283b0

void __cdecl
FTraceScreenshot::TraceScreenshot
          (int param_1,int param_2,TArray<FColor,TSizedDefaultAllocator<32>_> *param_3,
          FString *param_4,int param_5)

{
  TraceScreenshotInternal<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,unsigned_char>
            (param_1,param_2,param_3,param_4,param_5,0xff);
  bSuppressWritingToFile = false;
  return;
}

// TraceScreenshot @ 1484283e0

void __cdecl
FTraceScreenshot::TraceScreenshot
          (int param_1,int param_2,TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3,
          FString *param_4,int param_5)

{
  TraceScreenshotInternal<FLinearColor,TArray<FLinearColor,TSizedDefaultAllocator<64>_>,float>
            (param_1,param_2,param_3,param_4,param_5,__real_3f800000);
  bSuppressWritingToFile = false;
  return;
}

