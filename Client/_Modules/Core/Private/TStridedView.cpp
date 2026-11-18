// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// TStridedView<UE::Math::TVector<double>_const_,int><UE::Math::TVector<double>_> @ 141bce870

TStridedView<UE::Math::TVector<double>_const_,int> * __thiscall
TStridedView<UE::Math::TVector<double>_const_,int>::
TStridedView<UE::Math::TVector<double>_const_,int><UE::Math::TVector<double>_>
          (TStridedView<UE::Math::TVector<double>_const_,int> *this,int param_1,
          TVector<double> *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<UE::Math::TVector<double>_const_,int> *pTVar3;
  
  this->FirstElementPtr = param_2;
  this->BytesBetweenElements = param_1;
  this->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector<double>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (this->BytesBetweenElements < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector<double>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->BytesBetweenElements & 7) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector<double>_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TStridedView<UE::Math::TVector<double>,int><UE::Math::TVector<double>_> @ 141bce920

TStridedView<UE::Math::TVector<double>,int> * __thiscall
TStridedView<UE::Math::TVector<double>,int>::
TStridedView<UE::Math::TVector<double>,int><UE::Math::TVector<double>_>
          (TStridedView<UE::Math::TVector<double>,int> *this,int param_1,TVector<double> *param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<UE::Math::TVector<double>,int> *pTVar3;
  
  this->FirstElementPtr = param_2;
  this->BytesBetweenElements = param_1;
  this->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector<double>,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (this->BytesBetweenElements < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector<double>,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->BytesBetweenElements & 7) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::Math::TVector<double>,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TStridedView<UE::StridedViewTest::FMyStruct,int><UE::StridedViewTest::FMyStruct> @ 141bce9d0

TStridedView<UE::StridedViewTest::FMyStruct,int> * __thiscall
TStridedView<UE::StridedViewTest::FMyStruct,int>::
TStridedView<UE::StridedViewTest::FMyStruct,int><UE::StridedViewTest::FMyStruct>
          (TStridedView<UE::StridedViewTest::FMyStruct,int> *this,int param_1,FMyStruct *param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  TStridedView<UE::StridedViewTest::FMyStruct,int> *pTVar3;
  
  this->FirstElementPtr = param_2;
  this->BytesBetweenElements = param_1;
  this->NumElements = param_3;
  if (param_3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::StridedViewTest::FMyStruct,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (this->BytesBetweenElements < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::StridedViewTest::FMyStruct,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->BytesBetweenElements & 7) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStridedView<UE::StridedViewTest::FMyStruct,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// GetElementPtr @ 141c01690

FMyStruct * __thiscall
TStridedView<UE::StridedViewTest::FMyStruct_const_,int>::GetElementPtr
          (TStridedView<UE::StridedViewTest::FMyStruct_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMyStruct *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x96,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMyStruct *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMyStruct *)
         ((longlong)&this->FirstElementPtr->SomeData +
         (longlong)this->BytesBetweenElements * (longlong)param_1);
}

// GetElementPtr @ 141c01710

TVector<double> * __thiscall
TStridedView<UE::Math::TVector<double>,int>::GetElementPtr
          (TStridedView<UE::Math::TVector<double>,int> *this,int param_1)

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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x96,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double> *)
         ((longlong)&this->FirstElementPtr->field0_0x0 +
         (longlong)this->BytesBetweenElements * (longlong)param_1);
}

// GetElementPtr @ 141c01790

FMyStruct * __thiscall
TStridedView<UE::StridedViewTest::FMyStruct,int>::GetElementPtr
          (TStridedView<UE::StridedViewTest::FMyStruct,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMyStruct *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->NumElements) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x96,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMyStruct *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMyStruct *)
         ((longlong)&this->FirstElementPtr->SomeData +
         (longlong)this->BytesBetweenElements * (longlong)param_1);
}

