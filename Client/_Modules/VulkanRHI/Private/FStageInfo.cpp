// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// FStageInfo @ 145b00360

FStageInfo * __thiscall FVulkanDescriptorSetsLayoutInfo::FStageInfo::FStageInfo(FStageInfo *this)

{
  (this->Types).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).ArrayNum = 0;
  (this->Types).ArrayMax = 0;
  this->PackedGlobalsSize = 0;
  this->NumBoundUniformBuffers = 0;
  this->NumImageInfos = 0;
  this->NumBufferInfos = 0;
  this->NumAccelerationStructures = 0;
  return this;
}

// ~FStageInfo @ 145b05060

void __thiscall FVulkanDescriptorSetsLayoutInfo::FStageInfo::~FStageInfo(FStageInfo *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Types).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// FStageInfo @ 145b44780

FStageInfo * __thiscall
FVulkanDescriptorSetsLayoutInfo::FStageInfo::FStageInfo(FStageInfo *this,FStageInfo *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Types).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Types).ArrayMax;
  iVar2 = (param_1->Types).ArrayNum;
  _Src = (param_1->Types).AllocatorInstance.Data;
  (this->Types).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Types).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  }
  this->PackedGlobalsSize = param_1->PackedGlobalsSize;
  this->NumBoundUniformBuffers = param_1->NumBoundUniformBuffers;
  this->NumImageInfos = param_1->NumImageInfos;
  this->NumBufferInfos = param_1->NumBufferInfos;
  this->NumAccelerationStructures = param_1->NumAccelerationStructures;
  return this;
}

