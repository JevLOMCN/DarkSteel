// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 7

// ~IGeometryCollectionExternalRenderInterface @ 1463a5a00

void __thiscall
IGeometryCollectionExternalRenderInterface::~IGeometryCollectionExternalRenderInterface
          (IGeometryCollectionExternalRenderInterface *this)

{
  *this = (IGeometryCollectionExternalRenderInterface)
          &___7IGeometryCollectionExternalRenderInterface__6B_;
  return;
}

// CanEverUseNativeFallback @ 1463ae350

bool __thiscall
IGeometryCollectionExternalRenderInterface::CanEverUseNativeFallback
          (IGeometryCollectionExternalRenderInterface *this)

{
  return false;
}

// ShouldUseNativeFallback @ 1463c9ad0

bool __thiscall
IGeometryCollectionExternalRenderInterface::ShouldUseNativeFallback
          (IGeometryCollectionExternalRenderInterface *this,uint param_1)

{
  return false;
}

// UpdateRootTransforms @ 1463cf6a0

void __thiscall
IGeometryCollectionExternalRenderInterface::UpdateRootTransforms
          (IGeometryCollectionExternalRenderInterface *this,UGeometryCollection *param_1,
          TTransform<double> *param_2,TArrayView<UE::Math::TTransform<float>_const_,int> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Public\\GeometryCollection\\GeometryCollectionExternalRenderInterface.h"
                     ,0x3a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// UpdateState @ 1463cfaa0

void __thiscall
IGeometryCollectionExternalRenderInterface::UpdateState
          (IGeometryCollectionExternalRenderInterface *this,UGeometryCollection *param_1,
          TTransform<double> *param_2,bool param_3,bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001463cfab2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x38))();
  return;
}

// UpdateTransforms @ 1463cfcd0

void __thiscall
IGeometryCollectionExternalRenderInterface::UpdateTransforms
          (IGeometryCollectionExternalRenderInterface *this,UGeometryCollection *param_1,
          TArrayView<UE::Math::TMatrix<double>_const_,int> *param_2)

{
  return;
}

// _getUObject @ 1463d14e0

UObject * __thiscall
IGeometryCollectionExternalRenderInterface::_getUObject
          (IGeometryCollectionExternalRenderInterface *this)

{
  return (UObject *)0x0;
}

