// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// operator[] @ 1470f9bf0

FStructArrayView * __thiscall
FMassGenericPayloadViewSlice::operator[]
          (FMassGenericPayloadViewSlice *this,FStructArrayView *__return_storage_ptr__,int param_1)

{
  int iVar1;
  int iVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FStructArrayView *pFVar7;
  void *pvVar8;
  
  uVar6 = 0;
  if (param_1 < (this->Source).Content.ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FStructArrayView *)(*pcVar4)();
    return pFVar7;
  }
  iVar1 = this->Count;
  iVar2 = this->StartIndex;
  pFVar7 = (this->Source).Content.DataPtr + param_1;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                         ,0x61,L"Invalid index (%d)"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FStructArrayView *)(*pcVar4)();
    return pFVar7;
  }
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                         ,0x62,L"Invalid count (%d)"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FStructArrayView *)(*pcVar4)();
    return pFVar7;
  }
  if ((pFVar7->ArrayNum < iVar1 + iVar2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index + InNum <= ArrayNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                         ,99,L"Range (index: %d, count: %d) lies outside the view of %d elements"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FStructArrayView *)(*pcVar4)();
    return pFVar7;
  }
  uVar6 = pFVar7->ElementSize;
  pvVar8 = FStructArrayView::GetDataAt(pFVar7,iVar2);
  pUVar3 = pFVar7->ScriptStruct;
  __return_storage_ptr__->ScriptStruct = pUVar3;
  __return_storage_ptr__->DataPtr = pvVar8;
  __return_storage_ptr__->ElementSize = uVar6;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (pvVar8 == (void *)0x0) {
    if ((((pUVar3 != (UScriptStruct *)0x0) || (uVar6 != 0)) || (iVar1 != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(InData != nullptr) || ((InScriptStruct == nullptr) && (InElementSize == 0) && (InCount == 0))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                           ,0x2d,L""), bVar5)) goto code_r0x0001470f9d91;
  }
  else if ((((pUVar3 == (UScriptStruct *)0x0) || (uVar6 == 0)) || (iVar1 < 0)) &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(InData == nullptr) || ((InScriptStruct != nullptr) && (InElementSize > 0) && (InCount >= 0))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                              ,0x2c,L""), bVar5)) {
code_r0x0001470f9d91:
    pcVar4 = (code *)swi(3);
    pFVar7 = (FStructArrayView *)(*pcVar4)();
    return pFVar7;
  }
  return __return_storage_ptr__;
}

