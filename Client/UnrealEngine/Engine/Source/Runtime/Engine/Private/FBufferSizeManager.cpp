// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FBufferSizeManager @ 147fa39d0

FBufferSizeManager * __thiscall
Nanite::FReadbackManager::FBufferSizeManager::FBufferSizeManager(FBufferSizeManager *this)

{
  float fVar1;
  
  fVar1 = (float)GNaniteStreamingGPURequestsBufferMinSize;
  this->OverBudgetCounter = 0;
  this->UnderBudgetCounter = 0;
  this->CurrentSize = fVar1;
  return this;
}

// GetSize @ 147fd6f30

uint __thiscall Nanite::FReadbackManager::FBufferSizeManager::GetSize(FBufferSizeManager *this)

{
  return (uint)(longlong)this->CurrentSize;
}

// Update @ 147ffcd70

void __thiscall
Nanite::FReadbackManager::FBufferSizeManager::Update(FBufferSizeManager *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = this->CurrentSize;
  fVar6 = fVar8 * __real_3f000000;
  fVar7 = (float)((longlong)((float)param_1 * __real_3fa00000) & 0xffffffff);
  uVar1 = 0;
  if (fVar7 <= fVar8) {
    uVar3 = 0;
  }
  else {
    uVar3 = this->OverBudgetCounter + 1;
  }
  this->OverBudgetCounter = uVar3;
  if ((float)param_1 < fVar6) {
    uVar1 = this->UnderBudgetCounter + 1;
  }
  this->UnderBudgetCounter = uVar1;
  if (uVar3 < 2) {
    if (uVar1 < 0x1e) goto LAB_147ffcdee;
    fVar7 = fVar8 * __real_3f7ae148;
  }
  else if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  this->CurrentSize = fVar7;
  fVar8 = fVar7;
LAB_147ffcdee:
  iVar4 = 0x100000;
  if (GNaniteStreamingGPURequestsBufferMinSize < 0x100000) {
    iVar4 = GNaniteStreamingGPURequestsBufferMinSize;
  }
  iVar5 = 0x1000;
  if (0x1000 < iVar4) {
    iVar5 = iVar4;
  }
  iVar4 = 0x100000;
  if (GNaniteStreamingGPURequestsBufferMaxSize < 0x100000) {
    iVar4 = GNaniteStreamingGPURequestsBufferMaxSize;
  }
  iVar2 = iVar5;
  if (iVar5 < iVar4) {
    iVar2 = iVar4;
  }
  fVar7 = (float)iVar2;
  if (fVar8 <= (float)iVar2) {
    fVar7 = fVar8;
  }
  if (fVar7 <= (float)iVar5) {
    fVar7 = (float)iVar5;
  }
  this->CurrentSize = fVar7;
  return;
}

