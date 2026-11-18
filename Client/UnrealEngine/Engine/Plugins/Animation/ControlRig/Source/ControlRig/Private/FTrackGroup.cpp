// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// FTrackGroup @ 14a3b8ab0

FTrackGroup * __thiscall
`FSampleTrackContainer::MergeTypedTracks'::__l2::FTrackGroup::FTrackGroup
          (void *this,TSharedPtr<FSampleTrackBase,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FTrackGroup *pFVar6;
  undefined8 *puVar7;
  
  if (param_1->Object == (FSampleTrackBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTrackGroup *)(*pcVar2)();
      return pFVar6;
    }
  }
  uVar4 = (**(code **)(param_1->Object->_padding_ + 8))();
  *(undefined1 *)this = uVar4;
  if (param_1->Object == (FSampleTrackBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTrackGroup *)(*pcVar2)();
      return pFVar6;
    }
  }
  *(UScriptStruct **)((longlong)this + 8) = param_1->Object->ScriptStruct;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x1c) = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,(ForAnyElementType *)((longlong)this + 0x10),
                     (int *)((longlong)this + 0x1c));
  puVar7 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)this + 0x10));
  *(int *)((longlong)this + 0x18) = iVar5 + 1;
  *puVar7 = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  puVar7[1] = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

