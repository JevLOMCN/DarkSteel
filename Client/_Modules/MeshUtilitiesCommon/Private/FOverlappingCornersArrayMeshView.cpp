// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshUtilitiesCommon
// Functions: 6

// GetInputTexcoord @ 144359da0

TVector2<float> __thiscall
FOverlappingCornersArrayMeshView::GetInputTexcoord
          (FOverlappingCornersArrayMeshView *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector2<float> TVar3;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar4;
  
  TVar4._s_0.Y = (float)in_register_00000014;
  TVar4._s_0.X = (float)param_1;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\OverlappingCorners.cpp"
                     ,0x17,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
    return (TVector2<float>)TVar3.field0_0x0;
  }
  *(undefined8 *)TVar4 = 0;
  return (TVector2<float>)TVar4;
}

// GetNormal @ 144359df0

TVector<float> * __thiscall
FOverlappingCornersArrayMeshView::GetNormal
          (FOverlappingCornersArrayMeshView *this,TVector<float> *__return_storage_ptr__,
          uint param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector<float> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\OverlappingCorners.cpp"
                     ,0x16,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TVector<float> *)(*pcVar1)();
    return pTVar3;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetNumIndices @ 144359e40

uint __thiscall
FOverlappingCornersArrayMeshView::GetNumIndices(FOverlappingCornersArrayMeshView *this)

{
  return this->Indices->ArrayNum;
}

// GetPosition @ 144359e50

TVector<float> * __thiscall
FOverlappingCornersArrayMeshView::GetPosition
          (FOverlappingCornersArrayMeshView *this,TVector<float> *__return_storage_ptr__,
          uint param_1)

{
  float fVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TVector<float> *pTVar7;
  uint uVar8;
  uint uVar9;
  
  pTVar2 = this->Indices;
  pTVar3 = this->Vertices;
  uVar8 = 0;
  if ((int)param_1 < pTVar2->ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TVector<float> *)(*pcVar5)();
      return pTVar7;
    }
  }
  uVar8 = *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)(int)param_1 * 4);
  uVar9 = 0;
  if ((int)uVar8 < pTVar3->ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TVector<float> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  fVar1 = *(float *)(pFVar4 + (longlong)(int)uVar8 * 0xc + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// InitOutputTexcoords @ 14435a300

void __thiscall
FOverlappingCornersArrayMeshView::InitOutputTexcoords
          (FOverlappingCornersArrayMeshView *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\OverlappingCorners.cpp"
                     ,0x18,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetOutputTexcoord @ 14435cc00

void __thiscall
FOverlappingCornersArrayMeshView::SetOutputTexcoord
          (FOverlappingCornersArrayMeshView *this,uint param_1,TVector2<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Private\\OverlappingCorners.cpp"
                     ,0x19,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

