// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 2

// ~IProjectManager @ 141e0fa50

void __thiscall IProjectManager::~IProjectManager(IProjectManager *this)

{
  *this = (IProjectManager)&___7IProjectManager__6B_;
  return;
}

// Get @ 141e21ad0

/* WARNING: Enum "Type": Some values do not have unique names */

IProjectManager * __cdecl IProjectManager::Get(void)

{
  bool bVar1;
  FScopedBootTiming local_28;
  
  if (ProjectManager == (FProjectManager *)0x0) {
    bVar1 = -1 < CpuChannel->Enabled;
    if (bVar1) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId542,"new FProjectManager",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\ProjectManager.cpp"
                 ,0x21e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId542);
    }
    FScopedBootTiming::FScopedBootTiming(&local_28,"new FProjectManager");
    ProjectManager = ::operator_new(0x80);
    if (ProjectManager == (FProjectManager *)0x0) {
      ProjectManager = (FProjectManager *)0x0;
    }
    else {
      *(undefined8 *)&(ProjectManager->OnTargetPlatformsForCurrentProjectChangedEvent).field_0x18 =
           2;
      ProjectManager->_padding_ = (longlong)&___7FProjectManager__6B_;
      (ProjectManager->CurrentProject).Object = (FProjectDescriptor *)0x0;
      (ProjectManager->CurrentProject).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (ProjectManager->CurrentProjectModuleContextInfos).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (ProjectManager->CurrentProjectModuleContextInfos).ArrayNum = 0;
      (ProjectManager->CurrentProjectModuleContextInfos).ArrayMax = 0;
      ProjectManager->bIsCurrentProjectDirty = false;
      *(undefined8 *)&ProjectManager->OnTargetPlatformsForCurrentProjectChangedEvent = 0;
      *(undefined8 *)&(ProjectManager->OnTargetPlatformsForCurrentProjectChangedEvent).field_0x8 = 0
      ;
      *(undefined8 *)&(ProjectManager->OnTargetPlatformsForCurrentProjectChangedEvent).field_0x10 =
           0;
      *(undefined8 *)&ProjectManager->OnLoadingPhaseCompleteEvent = 0;
      *(undefined8 *)&(ProjectManager->OnLoadingPhaseCompleteEvent).field_0x8 = 0;
      *(undefined8 *)&(ProjectManager->OnLoadingPhaseCompleteEvent).field_0x10 = 0;
      (ProjectManager->SuppressProjectFileWriteList).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (ProjectManager->SuppressProjectFileWriteList).ArrayNum = 0;
      (ProjectManager->SuppressProjectFileWriteList).ArrayMax = 0;
      *(undefined8 *)&(ProjectManager->OnLoadingPhaseCompleteEvent).field_0x18 = 2;
    }
    FScopedBootTiming::~FScopedBootTiming(&local_28);
    if (bVar1) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return (IProjectManager *)ProjectManager;
}

