// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 5

// ~FIndexedCurve @ 145eda180

void __thiscall FIndexedCurve::~FIndexedCurve(FIndexedCurve *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FIndexedCurve__6B_;
  pFVar1 = (this->KeyHandlesToIndices).KeyHandles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x48 = 0;
  pvVar2 = *(void **)&(this->KeyHandlesToIndices).KeyHandlesToIndices.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyHandlesToIndices);
  return;
}

// Duplicate @ 145ee04a0

FIndexedCurve * __thiscall FIndexedCurve::Duplicate(FIndexedCurve *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\IndexedCurve.h"
             ,0x32,L"Pure virtual not implemented (%s)");
  return (FIndexedCurve *)0x0;
}

// GetKeyTime @ 145ee3c80

float __thiscall FIndexedCurve::GetKeyTime(FIndexedCurve *this,FKeyHandle param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\IndexedCurve.h"
             ,0x2f,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetNumKeys @ 145ee4100

int __thiscall FIndexedCurve::GetNumKeys(FIndexedCurve *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\IndexedCurve.h"
             ,0x29,L"Pure virtual not implemented (%s)");
  return 0;
}

// SetKeyTime @ 145eeb650

void __thiscall FIndexedCurve::SetKeyTime(FIndexedCurve *this,FKeyHandle param_1,float param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves\\IndexedCurve.h"
             ,0x2c,L"Pure virtual not implemented (%s)");
  return;
}

