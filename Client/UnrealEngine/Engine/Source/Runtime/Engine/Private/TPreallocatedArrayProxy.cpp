// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator[] @ 1481611c0

int * __thiscall
TPreallocatedArrayProxy<int>::operator[](TPreallocatedArrayProxy<int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  
  if ((((byte)~(byte)((uint)param_1 >> 0x18) >> 7 &
       (param_1 < this->ArrayMax || this->ArrayMax == 0 && param_1 == 0)) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & ((Index < ArrayMax) | ((Index == 0) & (ArrayMax == 0)))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                         ,0x36c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    piVar3 = (int *)(*pcVar1)();
    return piVar3;
  }
  return this->Array + param_1;
}

// operator[] @ 148161240

TVector<float> * __thiscall
TPreallocatedArrayProxy<UE::Math::TVector<float>_>::operator[]
          (TPreallocatedArrayProxy<UE::Math::TVector<float>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector<float> *pTVar3;
  
  if ((((byte)~(byte)((uint)param_1 >> 0x18) >> 7 &
       (param_1 < this->ArrayMax || this->ArrayMax == 0 && param_1 == 0)) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & ((Index < ArrayMax) | ((Index == 0) & (ArrayMax == 0)))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                         ,0x36c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TVector<float> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Array + param_1;
}

