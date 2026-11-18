// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ~IPCGPropertyChain @ 1498913b0

void __thiscall IPCGPropertyChain::~IPCGPropertyChain(IPCGPropertyChain *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->PropertyChain).AllocatorInstance.Data;
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

// IPCGPropertyChain @ 149e35e20

IPCGPropertyChain * __thiscall
IPCGPropertyChain::IPCGPropertyChain
          (IPCGPropertyChain *this,FProperty *param_1,
          TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  IPCGPropertyChain *pIVar5;
  uint uVar6;
  FProperty *local_res10 [3];
  
  (this->PropertyChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7IPCGPropertyChain__6B_;
  (this->PropertyChain).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PropertyChain).ArrayNum = param_2->ArrayNum;
  (this->PropertyChain).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  iVar4 = (this->PropertyChain).ArrayNum;
  local_res10[0] = param_1;
  if (iVar4 != 0) {
    uVar6 = 0;
    if ((int)(iVar4 - 1U) < iVar4) {
      uVar6 = ~(iVar4 - 1U) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pIVar5 = (IPCGPropertyChain *)(*pcVar2)();
      return pIVar5;
    }
    if (*(FProperty **)
         ((this->PropertyChain).AllocatorInstance.Data +
         (longlong)(this->PropertyChain).ArrayNum * 8 + -8) == local_res10[0]) {
      return this;
    }
  }
  pFVar1 = (this->PropertyChain).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 <
       pFVar1 + (longlong)(this->PropertyChain).ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pIVar5 = (IPCGPropertyChain *)(*pcVar2)();
    return pIVar5;
  }
  iVar4 = (this->PropertyChain).ArrayNum;
  if (iVar4 == (this->PropertyChain).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->PropertyChain).AllocatorInstance,
                       &(this->PropertyChain).ArrayMax);
  }
  (this->PropertyChain).ArrayNum = iVar4 + 1;
  *(FProperty **)((this->PropertyChain).AllocatorInstance.Data + (longlong)iVar4 * 8) =
       local_res10[0];
  return this;
}

// GetTopPropertyStruct @ 149e6ae00

UStruct * __thiscall IPCGPropertyChain::GetTopPropertyStruct(IPCGPropertyChain *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UStruct *pUVar4;
  
  iVar1 = (this->PropertyChain).ArrayNum;
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UStruct *)(*pcVar2)();
        return pUVar4;
      }
    }
    if (*(longlong *)(this->PropertyChain).AllocatorInstance.Data != 0) {
      if ((this->PropertyChain).ArrayNum < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar4 = (UStruct *)(*pcVar2)();
          return pUVar4;
        }
      }
      pUVar4 = FField::GetOwnerStruct(*(FField **)(this->PropertyChain).AllocatorInstance.Data);
      return pUVar4;
    }
  }
  return (UStruct *)0x0;
}

