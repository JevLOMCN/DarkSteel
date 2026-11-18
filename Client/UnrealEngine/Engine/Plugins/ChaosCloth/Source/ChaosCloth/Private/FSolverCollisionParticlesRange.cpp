// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 1

// GetR @ 14dbff370

TArrayView<Chaos::TRotation<float,3>,int> * __thiscall
Chaos::Softs::FSolverCollisionParticlesRange::GetR
          (FSolverCollisionParticlesRange *this,
          TArrayView<Chaos::TRotation<float,3>,int> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<Chaos::TRotation<float,3>,int> *pTVar5;
  
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TRotation<float,3>,int> *)(*pcVar3)();
    return pTVar5;
  }
  lVar2 = *(longlong *)&this->field_0x8;
  if (((*(int *)&this->field_0x10 < 0) ||
      (*(int *)(lVar2 + 0x50) < *(int *)&this->field_0x10 + *(int *)&this->field_0x14)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset + RangeSize <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x52,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TRotation<float,3>,int> *)(*pcVar3)();
    return pTVar5;
  }
  __return_storage_ptr__->DataPtr =
       (TRotation<float,3> *)
       ((longlong)*(int *)&this->field_0x10 * 0x10 + *(longlong *)(lVar2 + 0x48));
  iVar1 = *(int *)&this->field_0x14;
  __return_storage_ptr__->ArrayNum = iVar1;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TRotation<float,3>,int> *)(*pcVar3)();
    return pTVar5;
  }
  return __return_storage_ptr__;
}

