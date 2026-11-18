// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetNumBufferedFrames @ 1454a78d0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __cdecl FOcclusionQueryHelpers::GetNumBufferedFrames(Type param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  int iVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  int iVar9;
  TConsoleVariableData<int> *pTVar10;
  
  pTVar10 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar6 = IConsoleManager::Get();
    plVar7 = (longlong *)
             (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.NumBufferedOcclusionQueries",1);
    pTVar8 = pTVar10;
    if (plVar7 != (longlong *)0x0) {
      pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
    }
    NumBufferedQueriesVar = pTVar8;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar3 = CVarMobileEnableOcclusionExtraFrame.Ref;
  EVar1 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
  iVar5 = 0;
  if (((1 < (int)param_1) && (EVar1 != SP_VULKAN_SM5_ANDROID)) && (EVar1 != SP_METAL_MRT))
  goto LAB_1454a7a96;
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_1454a795b:
    pTVar8 = pTVar10;
  }
  else {
    bVar4 = IsInGameThread();
    pTVar8 = (TConsoleVariableData<int> *)&DAT_00000001;
    if (bVar4) goto LAB_1454a795b;
  }
  if (pTVar3->ShadowedValue[(longlong)pTVar8->ShadowedValue] != false) {
    iVar5 = 1;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,199,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].Language != LANGUAGE_Vulkan) {
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid(Platform)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                             ,0xbb,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].Language != LANGUAGE_Metal) {
        if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid(Platform)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                               ,0xc1,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        if (((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].Language != LANGUAGE_OpenGL) &&
            (EVar1 != SP_VULKAN_SM5_ANDROID)) && (EVar1 != SP_METAL_MRT)) {
          if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0)
             && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid(Platform)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                    ,0x2a4,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bNeedsExtraMobileFrames == 0)
          goto LAB_1454a7a96;
        }
      }
    }
    if (GIsRunningRHIInSeparateThread_InternalUseOnly != false) {
      iVar5 = 2;
    }
  }
LAB_1454a7a96:
  pTVar8 = NumBufferedQueriesVar;
  bVar4 = IsInParallelGameThread();
  if ((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) {
    pTVar10 = (TConsoleVariableData<int> *)&DAT_00000004;
  }
  iVar5 = *(int *)((longlong)pTVar8->ShadowedValue + (longlong)pTVar10->ShadowedValue) + iVar5;
  iVar9 = 4;
  if (iVar5 < 4) {
    iVar9 = iVar5;
  }
  iVar5 = 1;
  if (1 < iVar9) {
    iVar5 = iVar9;
  }
  return iVar5;
}

