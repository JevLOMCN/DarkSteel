// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DumpGPUServices
// Functions: 2

// StartupModule @ 14e2beb80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDumpGPUServices::StartupModule(FDumpGPUServices *this)

{
  ForAnyElementType _Src;
  bool bVar1;
  IDumpGPUUploadServiceProvider *pIVar2;
  IDumpGPUUploadServiceProvider *pIVar3;
  longlong lVar4;
  FString local_28;
  
  if (IDumpGPUUploadServiceProvider::GProvider == (IDumpGPUUploadServiceProvider *)0x0) {
    pIVar3 = (IDumpGPUUploadServiceProvider *)0x0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    FConfigCacheIni::GetString
              (GConfig,L"Rendering.DumpGPUServices",L"UploadURLPattern",&local_28,&GEngineIni);
    bVar1 = ::FString::StartsWith(&local_28,L"http://",7,IgnoreCase);
    if (bVar1) {
      pIVar2 = ::operator_new(0x30);
      _Src.Data = local_28.Data.AllocatorInstance.Data;
      if (pIVar2 != (IDumpGPUUploadServiceProvider *)0x0) {
        *pIVar2 = (IDumpGPUUploadServiceProvider)&___7FDumpGPUHTTPUploadProvider__6B_;
        pIVar2[1] = (IDumpGPUUploadServiceProvider)0x0;
        lVar4 = (longlong)local_28.Data.ArrayNum;
        *(int *)(pIVar2 + 2) = local_28.Data.ArrayNum;
        if (local_28.Data.ArrayNum == 0) {
          *(undefined4 *)&pIVar2[2].field_0x4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)(pIVar2 + 1),
                     local_28.Data.ArrayNum,(int *)&pIVar2[2].field_0x4);
          memcpy(*(FScriptContainerElement **)(pIVar2 + 1),_Src.Data,lVar4 * 2);
        }
        pIVar2[4] = (IDumpGPUUploadServiceProvider)0x0;
        *(undefined4 *)(pIVar2 + 5) = 0;
        *(undefined4 *)&pIVar2[5].field_0x4 = 1;
        pIVar3 = pIVar2;
      }
      this->UploadProvider = pIVar3;
    }
    pIVar3 = this->UploadProvider;
    if ((pIVar3 != (IDumpGPUUploadServiceProvider *)0x0) &&
       (IDumpGPUUploadServiceProvider::GProvider = pIVar3, 3 < (byte)LogDumpGPUServices._0_1_)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDumpGPUServices);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ShutdownModule @ 14e2bed10

void __thiscall FDumpGPUServices::ShutdownModule(FDumpGPUServices *this)

{
  IDumpGPUUploadServiceProvider *pIVar1;
  
  if (this->UploadProvider != (IDumpGPUUploadServiceProvider *)0x0) {
    if (IDumpGPUUploadServiceProvider::GProvider == this->UploadProvider) {
      IDumpGPUUploadServiceProvider::GProvider = (IDumpGPUUploadServiceProvider *)0x0;
    }
    pIVar1 = this->UploadProvider;
    if (pIVar1 != (IDumpGPUUploadServiceProvider *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e2bed3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,1);
      return;
    }
  }
  return;
}

