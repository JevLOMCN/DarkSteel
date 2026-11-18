// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// GetTypeHash @ 143b22130

uint __thiscall Chaos::FBoxFloat3::GetTypeHash(FBoxFloat3 *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)&this->MMax;
  uVar3 = *(uint *)&this->MMin;
  uVar4 = uVar4 * 0x40 + *(int *)&(this->MMax).field_0x4 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  uVar4 = uVar4 * 0x40 + *(int *)&(this->MMax).field_0x8 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  uVar3 = uVar3 * 0x40 + *(int *)&(this->MMin).field_0x4 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
  uVar2 = (uVar3 * 0x40 + *(int *)&(this->MMin).field_0x8 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3) -
          uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar1 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xc;
  uVar4 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar3 = (uVar1 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 3;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 << 10;
  return (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xf;
}

// PhiWithNormal @ 143b2a760

double __thiscall
Chaos::FBoxFloat3::PhiWithNormal
          (FBoxFloat3 *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Box.h"
                     ,0x243,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    dVar2 = (double)(*pcVar1)();
    return dVar2;
  }
  return 0.0;
}

// Serialize @ 143b3e7e0

void __thiscall Chaos::FBoxFloat3::Serialize(FBoxFloat3 *this,FArchive *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  FArchive *pFVar4;
  
  FImplicitObject::SerializeImp((FImplicitObject *)this,param_1);
  pFVar4 = operator<<<3>(param_1,&this->MMin);
  operator<<<3>(pFVar4,&this->MMax);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (0x24 < iVar3) {
    plVar1 = &this->_padding_;
    puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      *(undefined4 *)plVar1 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      return;
    }
    if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143b3e88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,4);
      return;
    }
    FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar1);
  }
  return;
}

// Serialize @ 143b3e8b0

void __thiscall Chaos::FBoxFloat3::Serialize(FBoxFloat3 *this,FChaosArchive *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  FArchive *pFVar4;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  pFVar4 = operator<<<3>((FArchive *)param_1,&this->MMin);
  operator<<<3>(pFVar4,&this->MMax);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (0x24 < iVar3) {
    plVar1 = &this->_padding_;
    puVar2 = *(undefined4 **)param_1->_padding_;
    if (puVar2 + 1 <= (undefined4 *)((undefined8 *)param_1->_padding_)[1]) {
      *(undefined4 *)plVar1 = *puVar2;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
      return;
    }
    if ((param_1->_padding_ & 0x10000) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143b3e970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1->_padding_ + 0x188))(param_1,plVar1,4);
      return;
    }
    FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)plVar1);
  }
  return;
}

