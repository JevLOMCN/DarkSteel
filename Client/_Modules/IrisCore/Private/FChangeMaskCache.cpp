// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// AddSubObjectOwnerDirty @ 1442b5a90

FCachedInfo * __thiscall
UE::Net::Private::FChangeMaskCache::AddSubObjectOwnerDirty(FChangeMaskCache *this,uint param_1)

{
  int *piVar1;
  ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo> FVar2;
  code *pcVar3;
  FCachedInfo FVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo> FVar7;
  FCachedInfo *pFVar8;
  uint local_18;
  uint uStack_14;
  
  FVar2 = (this->Indices).AllocatorInstance.SecondaryData;
  uStack_14 = uStack_14 & 0xfd000000 | 0x1000000;
  FVar7 = (ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)this;
  if (FVar2 != (ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)0x0) {
    FVar7 = FVar2;
  }
  local_18 = param_1;
  if ((ulonglong)FVar7 <= &local_18) {
    FVar7 = (ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)this;
    if (FVar2 != (ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)0x0) {
      FVar7 = FVar2;
    }
    if ((&local_18 < (uint *)((longlong)FVar7 + (longlong)(this->Indices).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FCachedInfo *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar6 = (this->Indices).ArrayNum;
  piVar1 = &(this->Indices).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>_>
                      (0x408,(ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo> *)this
                       ,piVar1);
  }
  (this->Indices).ArrayNum = iVar6 + 1;
  FVar2 = (this->Indices).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)0x0) {
    this = (FChangeMaskCache *)FVar2;
  }
  FVar4._4_4_ = uStack_14;
  FVar4.InternalIndex = local_18;
  pFVar8 = (FCachedInfo *)((longlong)this + (longlong)iVar6 * 8);
  *pFVar8 = FVar4;
  return pFVar8;
}

