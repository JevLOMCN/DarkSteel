// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNAbilityRuntime
// Functions: 2

// FWN_AbilityInstanceHandleImpl @ 148db5dd0

FWN_AbilityInstanceHandleImpl * __thiscall
FWN_AbilityInstanceHandleImpl::FWN_AbilityInstanceHandleImpl
          (FWN_AbilityInstanceHandleImpl *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FWN_AbilityInstanceHandleImpl *pFVar4;
  uint uVar5;
  
  this->Handle = -1;
  if (sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum < 1) {
    if (sAbilityInstanceUniqueIDGenerator.NumCreated == 0xffffffff) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumCreated != 0xffffffffui32",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNAbility\\Source\\WNAbilityRuntime\\Public\\WNUniqueIDGenerator.h"
                         ,0x62,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FWN_AbilityInstanceHandleImpl *)(*pcVar2)();
        return pFVar4;
      }
    }
    sAbilityInstanceUniqueIDGenerator.NumCreated = sAbilityInstanceUniqueIDGenerator.NumCreated + 1;
    uVar5 = sAbilityInstanceUniqueIDGenerator.NextID + 1;
    sAbilityInstanceUniqueIDGenerator.NextID = uVar5;
  }
  else {
    uVar1 = sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum - 1;
    uVar5 = *(uint *)(sAbilityInstanceUniqueIDGenerator.FreedIDs.AllocatorInstance.Data +
                     (longlong)(int)uVar1 * 4);
    if (~uVar1 + sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum != 0) {
      memmove(sAbilityInstanceUniqueIDGenerator.FreedIDs.AllocatorInstance.Data +
              (longlong)(int)uVar1 * 4,
              sAbilityInstanceUniqueIDGenerator.FreedIDs.AllocatorInstance.Data +
              (longlong)(int)uVar1 * 4 + 4,
              (longlong)(int)(~uVar1 + sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum) << 2);
    }
    sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum =
         sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&sAbilityInstanceUniqueIDGenerator.FreedIDs.AllocatorInstance,
               sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum,
               &sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayMax);
  }
  this->Handle = CONCAT44(param_1,uVar5);
  return this;
}

// ~FWN_AbilityInstanceHandleImpl @ 148db6710

void __thiscall
FWN_AbilityInstanceHandleImpl::~FWN_AbilityInstanceHandleImpl(FWN_AbilityInstanceHandleImpl *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 local_18 [6];
  
  if (this->Handle != -1) {
    local_18[0] = (undefined4)this->Handle;
    if ((sAbilityInstanceUniqueIDGenerator.FreedIDs.AllocatorInstance.Data <=
         (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        sAbilityInstanceUniqueIDGenerator.FreedIDs.AllocatorInstance.Data +
        (longlong)sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayMax * 4)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum ==
        sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayMax) {
      sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&sAbilityInstanceUniqueIDGenerator.FreedIDs.AllocatorInstance,
                      &sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayMax);
    }
    lVar3 = (longlong)sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum;
    sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum =
         sAbilityInstanceUniqueIDGenerator.FreedIDs.ArrayNum + 1;
    *(undefined4 *)(sAbilityInstanceUniqueIDGenerator.FreedIDs.AllocatorInstance.Data + lVar3 * 4) =
         local_18[0];
  }
  return;
}

