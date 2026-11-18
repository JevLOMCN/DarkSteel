// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 4

// FStageBoundUniformBuffers @ 145cd1a20

FStageBoundUniformBuffers * __thiscall
RHIValidation::FStageBoundUniformBuffers::FStageBoundUniformBuffers(FStageBoundUniformBuffers *this)

{
  int *piVar1;
  
  piVar1 = &(this->Buffers).ArrayMax;
  (this->Buffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffers).ArrayNum = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x20,(ForAnyElementType *)this,0,piVar1);
  return this;
}

// ~FStageBoundUniformBuffers @ 145cd2b70

void __thiscall
RHIValidation::FStageBoundUniformBuffers::~FStageBoundUniformBuffers
          (FStageBoundUniformBuffers *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Buffers).AllocatorInstance.Data;
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

// Bind @ 145cd7120

void __thiscall
RHIValidation::FStageBoundUniformBuffers::Bind
          (FStageBoundUniformBuffers *this,uint param_1,FRHIUniformBuffer *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = &(this->Buffers).ArrayNum;
  if ((uint)*piVar1 <= param_1) {
    iVar6 = (param_1 - *piVar1) + 1;
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar6,(ForAnyElementType *)this,piVar1,&(this->Buffers).ArrayMax);
    memset((this->Buffers).AllocatorInstance.Data + (longlong)iVar4 * 8,0,(longlong)iVar6 << 3);
  }
  uVar5 = 0;
  if ((int)param_1 < *piVar1) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(FRHIUniformBuffer **)((this->Buffers).AllocatorInstance.Data + (longlong)(int)param_1 * 8) =
       param_2;
  return;
}

// Reset @ 145cf09a0

void __thiscall RHIValidation::FStageBoundUniformBuffers::Reset(FStageBoundUniformBuffers *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (this->Buffers).ArrayNum;
  piVar1 = &(this->Buffers).ArrayNum;
  if (iVar2 < 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,-iVar2,(ForAnyElementType *)this,piVar1,&(this->Buffers).ArrayMax);
    memset((this->Buffers).AllocatorInstance.Data + (longlong)iVar3 * 8,0,(longlong)-iVar2 << 3);
    return;
  }
  if (0 < iVar2) {
    *piVar1 = *piVar1 - iVar2;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)this,*piVar1,&(this->Buffers).ArrayMax);
  }
  return;
}

