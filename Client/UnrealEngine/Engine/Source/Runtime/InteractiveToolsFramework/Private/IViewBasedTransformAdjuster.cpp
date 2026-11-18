// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 4

// ~IViewBasedTransformAdjuster @ 149689440

void __thiscall
UE::GizmoRenderingUtil::IViewBasedTransformAdjuster::~IViewBasedTransformAdjuster
          (IViewBasedTransformAdjuster *this)

{
  *this = (IViewBasedTransformAdjuster)&___7IViewBasedTransformAdjuster_GizmoRenderingUtil_UE__6B_;
  return;
}

// GetAdjustedComponentToWorld_RenderThread @ 1496a00c0

TTransform<double> * __thiscall
UE::GizmoRenderingUtil::IViewBasedTransformAdjuster::GetAdjustedComponentToWorld_RenderThread
          (IViewBasedTransformAdjuster *this,TTransform<double> *__return_storage_ptr__,
          ISceneViewInterface *param_1,TTransform<double> *param_2)

{
  (**(code **)((longlong)*this + 8))();
  return __return_storage_ptr__;
}

// GetViewIndependentBounds @ 1496aad70

TBoxSphereBounds<double,double> * __thiscall
UE::GizmoRenderingUtil::IViewBasedTransformAdjuster::GetViewIndependentBounds
          (IViewBasedTransformAdjuster *this,TBoxSphereBounds<double,double> *__return_storage_ptr__
          ,TTransform<double> *param_1,TBoxSphereBounds<double,double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (param_2->Origin).field0_0x0._s_0.Y;
  dVar2 = (param_2->Origin).field0_0x0._s_0.Z;
  dVar3 = (param_2->BoxExtent).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  dVar4 = (param_2->BoxExtent).field0_0x0._s_0.Y;
  dVar5 = (param_2->BoxExtent).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar3;
  dVar1 = param_2->SphereRadius;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar4;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar5;
  __return_storage_ptr__->SphereRadius = dVar1;
  return __return_storage_ptr__;
}

// UpdateWorldLocalState @ 1496c5b40

void __thiscall
UE::GizmoRenderingUtil::IViewBasedTransformAdjuster::UpdateWorldLocalState
          (IViewBasedTransformAdjuster *this,bool param_1)

{
  return;
}

