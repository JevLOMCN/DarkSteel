// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// IsFilterActive @ 14a8c0b70

bool __thiscall
UE::PoseSearch::FSearchFilters::FNonSelectableIdxFilter::IsFilterActive
          (FNonSelectableIdxFilter *this)

{
  return (this->NonSelectableIdx).ArrayNum != 0;
}

// IsFilterValid @ 14a8c0bc0

bool __thiscall
UE::PoseSearch::FSearchFilters::FNonSelectableIdxFilter::IsFilterValid
          (FNonSelectableIdxFilter *this,TArrayView<float_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,int param_3,FPoseMetadata *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = (this->NonSelectableIdx).ArrayNum;
  iVar5 = 0;
  piVar3 = (this->NonSelectableIdx).DataPtr;
  uVar6 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar6 >> 1) + iVar5;
      if (piVar3[iVar1] < param_3) {
        iVar5 = iVar1 + (uVar6 & 1);
      }
      uVar4 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar4 != 0);
  }
  if (((int)uVar2 <= iVar5) || (param_3 < piVar3[iVar5])) {
    iVar5 = -1;
  }
  return iVar5 == -1;
}

