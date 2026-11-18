// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetTileRange @ 148740a60

void __thiscall
UE::SVT::FPageTopology::GetTileRange
          (FPageTopology *this,uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_1 + param_2;
  uVar6 = 0xffffffff;
  uVar5 = 0;
  uVar4 = 0;
  if (param_1 < uVar7) {
    do {
      if (((int)param_1 < 0) || ((this->PackedPageTableCoords).ArrayNum <= (int)param_1)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidPageIndex(PageIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                           ,0xf4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar5 = 0;
      if ((int)param_1 < (this->TileIndices).ArrayNum) {
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
      uVar1 = *(uint *)((this->TileIndices).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
      if (uVar1 < uVar6) {
        uVar6 = uVar1;
      }
      uVar5 = uVar4;
      if (uVar4 < uVar1) {
        uVar5 = uVar1;
      }
      param_1 = param_1 + 1;
      uVar4 = uVar5;
    } while (param_1 < uVar7);
    if (uVar6 <= uVar5) {
      uVar4 = (uVar5 - uVar6) + 1;
      goto LAB_148740b4b;
    }
  }
  uVar4 = 0;
LAB_148740b4b:
  if (uVar5 < uVar6) {
    uVar6 = 0;
  }
  *param_3 = uVar6;
  *param_4 = uVar4;
  return;
}

// Reset @ 1487547e0

void __thiscall UE::SVT::FPageTopology::Reset(FPageTopology *this)

{
  (this->MipInfo).ArrayNum = 0;
  if ((this->MipInfo).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,&(this->MipInfo).ArrayMax);
  }
  (this->PackedPageTableCoords).ArrayNum = 0;
  if ((this->PackedPageTableCoords).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PackedPageTableCoords).AllocatorInstance,0,
               &(this->PackedPageTableCoords).ArrayMax);
  }
  (this->TileIndices).ArrayNum = 0;
  if ((this->TileIndices).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TileIndices).AllocatorInstance,0,&(this->TileIndices).ArrayMax);
  }
  (this->ParentIndices).ArrayNum = 0;
  if ((this->ParentIndices).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ParentIndices).AllocatorInstance,0,&(this->ParentIndices).ArrayMax);
  }
  return;
}

// Serialize @ 148756b30

void __thiscall UE::SVT::FPageTopology::Serialize(FPageTopology *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<UE::SVT::FPageTopology::FMip,TSizedDefaultAllocator<32>_>
            (param_1,&this->MipInfo);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&this->PackedPageTableCoords);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&this->TileIndices);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&this->ParentIndices);
  return;
}

