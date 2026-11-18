// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 6

// Assign @ 14c8bb8b0

void __thiscall UE::Geometry::TDenseGrid3<int>::Assign(TDenseGrid3<int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = (this->Buffer).ArrayNum;
  uVar4 = 0;
  if (0 < iVar6) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar6) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = uVar4 + 1;
      *(int *)((this->Buffer).AllocatorInstance.Data + lVar5) = param_1;
      lVar5 = lVar5 + 4;
      iVar6 = (this->Buffer).ArrayNum;
    } while ((int)uVar4 < iVar6);
  }
  return;
}

// Assign @ 14c8bb960

void __thiscall UE::Geometry::TDenseGrid3<float>::Assign(TDenseGrid3<float> *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Buffer).ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = uVar5 + 1;
      *(float *)((this->Buffer).AllocatorInstance.Data + lVar6) = param_1;
      lVar6 = lVar6 + 4;
      iVar4 = (this->Buffer).ArrayNum;
    } while ((int)uVar5 < iVar4);
  }
  return;
}

// At @ 14c8bc2a0

int * __thiscall
UE::Geometry::TDenseGrid3<int>::At(TDenseGrid3<int> *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = (param_2 + param_3 * (this->Dimensions).field0_0x0._s_0.Y) *
          (this->Dimensions).field0_0x0._s_0.X + param_1;
  uVar3 = 0;
  if ((int)uVar5 < (this->Buffer).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  return (int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
}

// At @ 14c8bc330

float * __thiscall
UE::Geometry::TDenseGrid3<float>::At(TDenseGrid3<float> *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  
  uVar5 = (param_2 + param_3 * (this->Dimensions).field0_0x0._s_0.Y) *
          (this->Dimensions).field0_0x0._s_0.X + param_1;
  uVar3 = 0;
  if ((int)uVar5 < (this->Buffer).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
}

// Resize @ 14c914cd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDenseGrid3<int>::Resize
          (TDenseGrid3<int> *this,int param_1,int param_2,int param_3,EAllowShrinking param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (0x7ffffffe < (longlong)param_1 * (longlong)param_2 * (longlong)param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(int64)DimX * (int64)DimY * (int64)DimZ < 2147483647",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\DenseGrid3.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->Buffer,param_1 * param_2 * param_3,param_4);
  (this->Dimensions).field0_0x0._s_0.X = param_1;
  (this->Dimensions).field0_0x0._s_0.Y = param_2;
  (this->Dimensions).field0_0x0._s_0.Z = param_3;
  return;
}

// Resize @ 14c914d70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDenseGrid3<float>::Resize
          (TDenseGrid3<float> *this,int param_1,int param_2,int param_3,EAllowShrinking param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (0x7ffffffe < (longlong)param_1 * (longlong)param_2 * (longlong)param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(int64)DimX * (int64)DimY * (int64)DimZ < 2147483647",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\DenseGrid3.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->Buffer,param_1 * param_2 * param_3,param_4);
  (this->Dimensions).field0_0x0._s_0.X = param_1;
  (this->Dimensions).field0_0x0._s_0.Y = param_2;
  (this->Dimensions).field0_0x0._s_0.Z = param_3;
  return;
}

