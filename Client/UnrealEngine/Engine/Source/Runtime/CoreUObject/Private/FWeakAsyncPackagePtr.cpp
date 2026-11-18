// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FWeakAsyncPackagePtr @ 141ed3fe0

FWeakAsyncPackagePtr * __thiscall
FWeakAsyncPackagePtr::FWeakAsyncPackagePtr(FWeakAsyncPackagePtr *this,FAsyncPackage *param_1)

{
  (this->PackageName).ComparisonIndex = 0;
  (this->PackageName).Number = 0;
  this->SerialNumber = 0;
  if (param_1 != (FAsyncPackage *)0x0) {
    this->PackageName = (param_1->Desc).Name;
    this->SerialNumber = param_1->SerialNumber;
  }
  return this;
}

// GetPackage @ 141efa0c0

FAsyncPackage * __thiscall FWeakAsyncPackagePtr::GetPackage(FWeakAsyncPackagePtr *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FAsyncPackage *pFVar4;
  TTuple<FName,FAsyncPackage_*> *pTVar5;
  
  if ((FAsyncLoadingThread::Instance == (FAsyncLoadingThread *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Instance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoadingThread.h"
                         ,0x178,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FAsyncPackage *)(*pcVar2)();
    return pFVar4;
  }
  iVar1 = this->SerialNumber;
  if ((((this->PackageName != (FName)0x0) && (iVar1 != 0)) &&
      (pTVar5 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                        *)&FAsyncLoadingThread::Instance->AsyncPackageNameLookup,this->PackageName),
      pTVar5 != (TTuple<FName,FAsyncPackage_*> *)0x0)) &&
     ((pFVar4 = *(FAsyncPackage **)&pTVar5->field_0x8, pFVar4 != (FAsyncPackage *)0x0 &&
      (pFVar4->SerialNumber == iVar1)))) {
    return pFVar4;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,0x414,L"");
  if (!bVar3) {
    return (FAsyncPackage *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FAsyncPackage *)(*pcVar2)();
  return pFVar4;
}

