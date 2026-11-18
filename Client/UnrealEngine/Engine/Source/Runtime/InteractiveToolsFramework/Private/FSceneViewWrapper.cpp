// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 10

// GetDPIScale @ 1496a0b60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

double __thiscall UE::GizmoRenderingUtil::FSceneViewWrapper::GetDPIScale(FSceneViewWrapper *this)

{
  return __real_3ff0000000000000;
}

// GetProjectionMatrix @ 1496a7a50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TMatrix<double> * __thiscall
UE::GizmoRenderingUtil::FSceneViewWrapper::GetProjectionMatrix(FSceneViewWrapper *this)

{
  return &(this->View->ViewMatrices).ProjectionMatrix;
}

// GetUnscaledViewRect @ 1496a92f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TIntRect<int> * __thiscall
UE::GizmoRenderingUtil::FSceneViewWrapper::GetUnscaledViewRect(FSceneViewWrapper *this)

{
  return &this->View->UnscaledViewRect;
}

// GetViewDirection @ 1496aa9f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UE::GizmoRenderingUtil::FSceneViewWrapper::GetViewDirection
          (FSceneViewWrapper *this,TVector<double> *__return_storage_ptr__)

{
  FSceneView *pFVar1;
  
  pFVar1 = this->View;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pFVar1->ViewMatrices).ViewMatrix.M[0][2];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (pFVar1->ViewMatrices).ViewMatrix.M[1][2];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (pFVar1->ViewMatrices).ViewMatrix.M[2][2];
  return __return_storage_ptr__;
}

// GetViewLocation @ 1496aada0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UE::GizmoRenderingUtil::FSceneViewWrapper::GetViewLocation
          (FSceneViewWrapper *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  FSceneView *pFVar2;
  double dVar3;
  
  pFVar2 = this->View;
  dVar3 = (pFVar2->ViewLocation).field0_0x0._s_0.Y;
  dVar1 = (pFVar2->ViewLocation).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pFVar2->ViewLocation).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetViewMatrix @ 1496aae00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TMatrix<double> * __thiscall
UE::GizmoRenderingUtil::FSceneViewWrapper::GetViewMatrix(FSceneViewWrapper *this)

{
  return &(this->View->ViewMatrices).ViewMatrix;
}

// GetViewRight @ 1496aafc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UE::GizmoRenderingUtil::FSceneViewWrapper::GetViewRight
          (FSceneViewWrapper *this,TVector<double> *__return_storage_ptr__)

{
  FSceneView *pFVar1;
  
  pFVar1 = this->View;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pFVar1->ViewMatrices).ViewMatrix.M[0][0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (pFVar1->ViewMatrices).ViewMatrix.M[1][0];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (pFVar1->ViewMatrices).ViewMatrix.M[2][0];
  return __return_storage_ptr__;
}

// GetViewUp @ 1496ab020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UE::GizmoRenderingUtil::FSceneViewWrapper::GetViewUp
          (FSceneViewWrapper *this,TVector<double> *__return_storage_ptr__)

{
  FSceneView *pFVar1;
  
  pFVar1 = this->View;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pFVar1->ViewMatrices).ViewMatrix.M[0][1];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (pFVar1->ViewMatrices).ViewMatrix.M[1][1];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (pFVar1->ViewMatrices).ViewMatrix.M[2][1];
  return __return_storage_ptr__;
}

// IsPerspectiveProjection @ 1496ae360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::GizmoRenderingUtil::FSceneViewWrapper::IsPerspectiveProjection(FSceneViewWrapper *this)

{
  double *pdVar1;
  
  pdVar1 = (this->View->ViewMatrices).ProjectionMatrix.M[3] + 3;
  return *pdVar1 <= __real_3ff0000000000000 && __real_3ff0000000000000 != *pdVar1;
}

// WorldToScreen @ 1496c5f60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector4<double> * __thiscall
UE::GizmoRenderingUtil::FSceneViewWrapper::WorldToScreen
          (FSceneViewWrapper *this,TVector4<double> *__return_storage_ptr__,TVector<double> *param_1
          )

{
  FSceneView::WorldToScreen(this->View,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

