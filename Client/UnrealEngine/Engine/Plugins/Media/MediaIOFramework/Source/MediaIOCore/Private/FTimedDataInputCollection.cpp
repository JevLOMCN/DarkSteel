// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 2

// Add @ 14d794420

void __thiscall
FTimedDataInputCollection::Add(FTimedDataInputCollection *this,ITimedDataInputChannel *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ITimedDataInputChannel *local_res10 [3];
  
  if (param_1 != (ITimedDataInputChannel *)0x0) {
    pFVar2 = (this->Channels).AllocatorInstance.Data;
    for (pFVar6 = pFVar2; pFVar6 != pFVar2 + (longlong)(this->Channels).ArrayNum * 8;
        pFVar6 = pFVar6 + 8) {
      if (*(ITimedDataInputChannel **)pFVar6 == param_1) {
        return;
      }
    }
    local_res10[0] = param_1;
    if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
        ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->Channels).ArrayMax * 8))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->Channels).ArrayNum;
    piVar1 = &(this->Channels).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Channels).AllocatorInstance,piVar1);
    }
    (this->Channels).ArrayNum = iVar5 + 1;
    *(ITimedDataInputChannel **)((this->Channels).AllocatorInstance.Data + (longlong)iVar5 * 8) =
         local_res10[0];
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->CollectionChanged);
  }
  return;
}

// Remove @ 14d7ba6b0

void __thiscall
FTimedDataInputCollection::Remove(FTimedDataInputCollection *this,ITimedDataInputChannel *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  pFVar3 = (this->Channels).AllocatorInstance.Data;
  iVar6 = (this->Channels).ArrayNum;
  pFVar9 = pFVar3;
  if (pFVar3 != pFVar3 + (longlong)iVar6 * 8) {
    while (*(ITimedDataInputChannel **)pFVar9 != param_1) {
      pFVar9 = pFVar9 + 8;
      if (pFVar9 == pFVar3 + (longlong)iVar6 * 8) {
        return;
      }
    }
    uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
    if (uVar8 != 0xffffffff) {
      uVar7 = 0;
      if ((int)(uVar8 + 1) <= iVar6) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar2 = (this->Channels).ArrayNum;
      pFVar3 = (this->Channels).AllocatorInstance.Data;
      iVar6 = iVar2 + ~uVar8;
      if (1 < iVar6) {
        iVar6 = 1;
      }
      if (iVar6 != 0) {
        memmove(pFVar3 + (longlong)(int)uVar8 * 8,pFVar3 + (longlong)(iVar2 - iVar6) * 8,
                (longlong)iVar6 << 3);
      }
      piVar1 = &(this->Channels).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->Channels).AllocatorInstance,(this->Channels).ArrayNum,
                 &(this->Channels).ArrayMax);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->CollectionChanged);
    }
  }
  return;
}

