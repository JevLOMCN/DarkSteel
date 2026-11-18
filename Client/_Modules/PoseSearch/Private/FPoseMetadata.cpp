// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// FPoseMetadata @ 14a8e0ad0

FPoseMetadata * __thiscall
UE::PoseSearch::FPoseMetadata::FPoseMetadata
          (FPoseMetadata *this,uint param_1,uint param_2,bool param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  FPoseMetadata *pFVar3;
  
  this->bBlockTransition = false;
  this->field_0x8 = this->field_0x8 | param_3;
  *(uint *)&this->field_0x4 = *(uint *)&this->field_0x4 ^ (this->AssetIndex ^ param_2) & 0xfffff;
  *(uint *)this = *(uint *)this ^ (this->ValueOffset ^ param_1) & 0x7ffffff;
  (this->CostAddend).Encoded = 0;
  FGenericPlatformMath::StoreHalf(&(this->CostAddend).Encoded,param_4);
  if (0x7ffffff < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InValueOffset < (1 << ValueOffsetNumBits)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                       ,0x28,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPoseMetadata *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (0xfffff < param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAssetIndex < (1 << AssetIndexNumBits)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                       ,0x29,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPoseMetadata *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

