// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// operator[] @ 1497e3af0

int * __thiscall
TPCGValueRange<int,TStridedView<int,int>_>::operator[]
          (TPCGValueRange<int,TStridedView<int,int>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  iVar5 = param_1 % (this->ElementView).NumElements;
  if (param_1 == iVar5) {
    return (int *)((longlong)(this->ElementView).BytesBetweenElements * (longlong)iVar5 +
                  (longlong)(this->ElementView).FirstElementPtr);
  }
  return &this->StubValue;
}

// operator[] @ 1497e3b90

float * __thiscall
TPCGValueRange<float,TStridedView<float,int>_>::operator[]
          (TPCGValueRange<float,TStridedView<float,int>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  iVar5 = param_1 % (this->ElementView).NumElements;
  if (param_1 == iVar5) {
    return (float *)((longlong)(this->ElementView).BytesBetweenElements * (longlong)iVar5 +
                    (longlong)(this->ElementView).FirstElementPtr);
  }
  return &this->StubValue;
}

// operator[] @ 1497e3c30

TTransform<double> * __thiscall
TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>::
operator[](TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  int iVar5;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  iVar5 = param_1 % (this->ElementView).NumElements;
  if (param_1 == iVar5) {
    return (TTransform<double> *)
           ((longlong)(((this->ElementView).FirstElementPtr)->Rotation).XY.m128d_f64 +
           (longlong)(this->ElementView).BytesBetweenElements * (longlong)iVar5);
  }
  return &this->StubValue;
}

// operator[] @ 1497e3cd0

TVector4<double> * __thiscall
TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>::operator[]
          (TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector4<double> *pTVar4;
  int iVar5;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector4<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  iVar5 = param_1 % (this->ElementView).NumElements;
  if (param_1 == iVar5) {
    return (TVector4<double> *)
           ((longlong)&((this->ElementView).FirstElementPtr)->field0_0x0 +
           (longlong)(this->ElementView).BytesBetweenElements * (longlong)iVar5);
  }
  return &this->StubValue;
}

// operator[] @ 1497e3d70

TVector<double> * __thiscall
TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>::operator[]
          (TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double> *pTVar4;
  int iVar5;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  iVar5 = param_1 % (this->ElementView).NumElements;
  if (param_1 == iVar5) {
    return (TVector<double> *)
           ((longlong)&((this->ElementView).FirstElementPtr)->field0_0x0 +
           (longlong)(this->ElementView).BytesBetweenElements * (longlong)iVar5);
  }
  return &this->StubValue;
}

// operator[] @ 1497e3e10

long64 * __thiscall
TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
          (TPCGValueRange<__int64,TStridedView<__int64,int>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 *plVar4;
  int iVar5;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      plVar4 = (long64 *)(*pcVar1)();
      return plVar4;
    }
  }
  iVar5 = param_1 % (this->ElementView).NumElements;
  if (param_1 == iVar5) {
    return (long64 *)
           ((longlong)(this->ElementView).BytesBetweenElements * (longlong)iVar5 +
           (longlong)(this->ElementView).FirstElementPtr);
  }
  return &this->StubValue;
}

// GetElement @ 149813c20

int * __thiscall
TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
          (TPCGValueRange<int_const_,TStridedView<int_const_,int>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  return (int *)((longlong)(param_1 % (this->ElementView).NumElements) *
                 (longlong)(this->ElementView).BytesBetweenElements +
                (longlong)(this->ElementView).FirstElementPtr);
}

// GetElement @ 149813ca0

float * __thiscall
TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
          (TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)((longlong)(param_1 % (this->ElementView).NumElements) *
                   (longlong)(this->ElementView).BytesBetweenElements +
                  (longlong)(this->ElementView).FirstElementPtr);
}

// GetElement @ 149813d20

TTransform<double> * __thiscall
TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
::GetElement(TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
             *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TTransform<double> *)
         ((longlong)(((this->ElementView).FirstElementPtr)->Rotation).XY.m128d_f64 +
         (longlong)(param_1 % (this->ElementView).NumElements) *
         (longlong)(this->ElementView).BytesBetweenElements);
}

// GetElement @ 149813da0

TVector4<double> * __thiscall
TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
::GetElement(TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
             *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector4<double> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector4<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector4<double> *)
         ((longlong)&((this->ElementView).FirstElementPtr)->field0_0x0 +
         (longlong)(param_1 % (this->ElementView).NumElements) *
         (longlong)(this->ElementView).BytesBetweenElements);
}

// GetElement @ 149813e20

TVector<double> * __thiscall
TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
::GetElement(TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
             *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double> *)
         ((longlong)&((this->ElementView).FirstElementPtr)->field0_0x0 +
         (longlong)(param_1 % (this->ElementView).NumElements) *
         (longlong)(this->ElementView).BytesBetweenElements);
}

// GetElement @ 149813ea0

long64 * __thiscall
TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
          (TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 *plVar4;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      plVar4 = (long64 *)(*pcVar1)();
      return plVar4;
    }
  }
  return (long64 *)
         ((longlong)(param_1 % (this->ElementView).NumElements) *
          (longlong)(this->ElementView).BytesBetweenElements +
         (longlong)(this->ElementView).FirstElementPtr);
}

