// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 7

// ~TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> @ 143369440

void __thiscall
UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>::
~TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>
          (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *this)

{
  *this = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)
          &___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// Apply @ 143387590

bool __thiscall
UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>::Apply
          (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,bool param_2)

{
  return false;
}

// SaveInitialTriangle @ 1433c7120

void __thiscall
UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>::SaveInitialTriangle
          (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,int param_2)

{
  return;
}

// SaveInitialVertex @ 1433c7130

void __thiscall
UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>::SaveInitialVertex
          (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,int param_2)

{
  return;
}

// StoreAllFinalTriangles @ 1433d8000

void __thiscall
UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>::StoreAllFinalTriangles
          (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// StoreAllFinalVertices @ 1433d8010

void __thiscall
UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>::StoreAllFinalVertices
          (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5825938462020206637>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicAttribute.h"
                     ,0x2d,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// StoreAllFinalVertices @ 1433d8050

void __thiscall
UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>::StoreAllFinalVertices
          (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  return;
}

