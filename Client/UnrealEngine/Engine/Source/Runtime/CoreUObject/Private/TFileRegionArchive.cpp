// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// PopFileRegionType @ 142105d00

void __thiscall
TFileRegionArchive<FLargeMemoryWriter>::PopFileRegionType
          (TFileRegionArchive<FLargeMemoryWriter> *this)

{
  int *piVar1;
  FFileRegion *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ulong64 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  TArray<FFileRegion,TSizedDefaultAllocator<32>_> *pTVar10;
  uint7 uStack_17;
  
  lVar9 = (**(code **)(this->_padding_ + 0x28))();
  pFVar2 = &this->CurrentRegion;
  (this->CurrentRegion).Length = lVar9 - pFVar2->Offset;
  pTVar10 = &this->FileRegions;
  pFVar3 = (pTVar10->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)(this->FileRegions).ArrayMax * 0x18)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->FileRegions).ArrayNum;
  piVar1 = &(this->FileRegions).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar10->AllocatorInstance,piVar1);
  }
  (this->FileRegions).ArrayNum = iVar8 + 1;
  uVar6 = (this->CurrentRegion).Length;
  pFVar4 = (pTVar10->AllocatorInstance).Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(ulong64 *)pFVar3 = pFVar2->Offset;
  *(ulong64 *)(pFVar3 + 8) = uVar6;
  *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) =
       *(undefined8 *)&(this->CurrentRegion).Type;
  pFVar2->Offset = 0;
  (this->CurrentRegion).Length = 0;
  *(ulonglong *)&(this->CurrentRegion).Type = (ulonglong)uStack_17 << 8;
  return;
}

// PushFileRegionType @ 142107da0

void __thiscall
TFileRegionArchive<FLargeMemoryWriter>::PushFileRegionType
          (TFileRegionArchive<FLargeMemoryWriter> *this,EFileRegionType param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if ((this->CurrentRegion).Offset != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentRegion.Offset == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\Serialization\\FileRegionArchive.h"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = (**(code **)(this->_padding_ + 0x28))(this);
  (this->CurrentRegion).Offset = uVar3;
  (this->CurrentRegion).Type = param_1;
  return;
}

