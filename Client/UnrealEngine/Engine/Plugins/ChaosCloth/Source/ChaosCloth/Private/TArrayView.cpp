// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 5

// TArrayView<FMeshToMeshVertData_const_,int><TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>_const_&,TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>_> @ 14db7ac60

TArrayView<FMeshToMeshVertData_const_,int> * __thiscall
TArrayView<FMeshToMeshVertData_const_,int>::
TArrayView<FMeshToMeshVertData_const_,int><TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>_const_&,TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FMeshToMeshVertData_const_,int> *this,
          TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMeshToMeshVertData_const_,int> *pTVar4;
  
  this->DataPtr = (FMeshToMeshVertData *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FMeshToMeshVertData_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14dba0bc0

FClothVertBoneData * __thiscall
TArrayView<FClothVertBoneData_const_,int>::operator[]
          (TArrayView<FClothVertBoneData_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FClothVertBoneData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FClothVertBoneData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14dba0c40

TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> * __thiscall
TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>::operator[]
          (TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)>,int>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float)> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14dba0cc0

TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)> *
__thiscall
TArrayView<TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode)>,int>
::operator[](void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>
  *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 8)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TFunction<void___cdecl(Chaos::Softs::FSolverParticlesRange_&,float,Chaos::Softs::ESolverMode)>
          *)((longlong)param_1 * 0x30 + *(longlong *)this);
}

// operator[] @ 14dba0d40

TVector<float,3> * __thiscall
TArrayView<Chaos::TVector<float,3>,int>::operator[]
          (TArrayView<Chaos::TVector<float,3>,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

