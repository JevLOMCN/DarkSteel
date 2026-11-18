// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// SetPackedGlobalParameter @ 145af44f0

void __thiscall
FPackedUniformBuffers::SetPackedGlobalParameter
          (FPackedUniformBuffers *this,uint param_1,uint param_2,void *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  
  if (((uint)(this->PackedUniformBuffers).ArrayNum < param_1 + param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ByteOffset + NumBytes <= (uint32)PackedUniformBuffers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                         ,0x448,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((((param_1 | param_2) & 3) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(NumBytes & 3) == 0 && (ByteOffset & 3) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                         ,0x449,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = (this->PackedUniformBuffers).AllocatorInstance.Data + param_1;
  bVar5 = false;
  piVar1 = (int *)((longlong)param_3 + ((ulonglong)param_2 & 0xfffffffc));
  if (param_3 != piVar1) {
    do {
      iVar2 = *(int *)param_3;
      iVar3 = *(int *)pFVar6;
      *(int *)pFVar6 = iVar2;
      param_3 = (void *)((longlong)param_3 + 4);
      bVar5 = (bool)(bVar5 | iVar3 != iVar2);
      pFVar6 = pFVar6 + 4;
    } while (param_3 != piVar1);
    if (bVar5) {
      *param_4 = 1;
    }
  }
  return;
}

// FPackedUniformBuffers @ 145b44590

FPackedUniformBuffers * __thiscall
FPackedUniformBuffers::FPackedUniformBuffers(FPackedUniformBuffers *this)

{
  (this->PackedUniformBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackedUniformBuffers).ArrayNum = 0;
  (this->PackedUniformBuffers).ArrayMax = 0;
  return this;
}

// ~FPackedUniformBuffers @ 145b4cd00

void __thiscall FPackedUniformBuffers::~FPackedUniformBuffers(FPackedUniformBuffers *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->PackedUniformBuffers).AllocatorInstance.Data;
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

// Init @ 145b6b870

void __thiscall
FPackedUniformBuffers::Init(FPackedUniformBuffers *this,FVulkanShaderHeader *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->PackedGlobalsSize == 0) {
    *param_2 = 0;
    return;
  }
  if ((this->PackedUniformBuffers).ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PackedUniformBuffers.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                       ,0x43c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_1->PackedGlobalsSize,(ForAnyElementType *)this,
             &(this->PackedUniformBuffers).ArrayNum,&(this->PackedUniformBuffers).ArrayMax);
  *param_2 = 1;
  return;
}

