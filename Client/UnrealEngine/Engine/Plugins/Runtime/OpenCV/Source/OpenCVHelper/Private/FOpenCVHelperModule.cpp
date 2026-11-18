// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVHelper
// Functions: 3

// FOpenCVHelperModule @ 14d36c730

FOpenCVHelperModule * __thiscall FOpenCVHelperModule::FOpenCVHelperModule(FOpenCVHelperModule *this)

{
  this->OpenCvDllHandle = (void *)0x0;
  this->_padding_ = (longlong)&___7FOpenCVHelperModule__6B_;
  return this;
}

// ShutdownModule @ 14d372ba0

void __thiscall FOpenCVHelperModule::ShutdownModule(FOpenCVHelperModule *this)

{
  if (this->OpenCvDllHandle != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(this->OpenCvDllHandle);
    this->OpenCvDllHandle = (void *)0x0;
  }
  return;
}

// StartupModule @ 14d3730e0

void __thiscall FOpenCVHelperModule::StartupModule(FOpenCVHelperModule *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  IPluginManager *pIVar4;
  longlong *plVar5;
  void *pvVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  uint uVar9;
  FString local_68;
  FString local_58;
  void *local_48;
  int local_40;
  wchar_t *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pIVar4 = IPluginManager::Get();
  uStack_30 = 6;
  local_38 = L"OpenCV";
  local_28 = 0x507b6888;
  uStack_24 = 1;
  uStack_20 = 6;
  uStack_1c = uStack_2c;
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x70))(pIVar4,local_18,&local_28);
  if (*plVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(longlong *)*plVar5 + 0x20))((longlong *)*plVar5,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  pvVar6 = local_48;
  local_68.Data.ArrayNum = local_40;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar9 = (0x1b - (uint)(local_40 != 0)) + local_40;
  if (local_40 <= (int)uVar9) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar9,0,(ForAnyElementType *)&local_68,local_40,&local_68.Data.ArrayMax);
    if (local_40 != 0) {
      memcpy(local_68.Data.AllocatorInstance.Data,pvVar6,(longlong)local_40 * 2);
    }
    ::FString::PathAppend(&local_68,L"Binaries/ThirdParty/Win64",0x19);
    iVar2 = local_68.Data.ArrayNum;
    FVar7.Data = local_68.Data.AllocatorInstance.Data;
    lVar8 = (longlong)local_68.Data.ArrayNum;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = local_68.Data.ArrayNum;
    uVar9 = (0x15 - (uint)(local_68.Data.ArrayNum != 0)) + local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum <= (int)uVar9) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar9,0,(ForAnyElementType *)&local_58,local_68.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      if (iVar2 != 0) {
        memcpy(local_58.Data.AllocatorInstance.Data,FVar7.Data,lVar8 * 2);
      }
      ::FString::PathAppend(&local_58,L"opencv_world455.dll",0x13);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar7.Data = local_68.Data.AllocatorInstance.Data;
      }
      FWindowsPlatformProcess::PushDllDirectory((wchar_t *)FVar7.Data);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar7.Data = local_58.Data.AllocatorInstance.Data;
      }
      pvVar6 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar7.Data);
      this->OpenCvDllHandle = pvVar6;
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar7.Data = local_68.Data.AllocatorInstance.Data;
      }
      FWindowsPlatformProcess::PopDllDirectory((wchar_t *)FVar7.Data);
      cv::unreal::SetMallocAndFree(OpenCVHelperModule::UnrealMalloc,OpenCVHelperModule::UnrealFree);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
}

