// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 10

// StaticStruct @ 14cfcbe50

UScriptStruct * __cdecl FAppleARKitCamera::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAppleARKitCamera.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleARKit();
    Z_Registration_Info_UScriptStruct_FAppleARKitCamera.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAppleARKitCamera,(UObject *)pUVar1,
                         L"AppleARKitCamera");
  }
  return Z_Registration_Info_UScriptStruct_FAppleARKitCamera.OuterSingleton;
}

// GetAspectRatio @ 14cfd5a60

float __thiscall FAppleARKitCamera::GetAspectRatio(FAppleARKitCamera *this)

{
  return (float)((this->ImageResolution).field0_0x0._s_0.X /
                (this->ImageResolution).field0_0x0._s_0.Y);
}

// GetHorizontalFieldOfView @ 14cfd6a30

float __thiscall FAppleARKitCamera::GetHorizontalFieldOfView(FAppleARKitCamera *this)

{
  double dVar1;
  
  dVar1 = (this->FocalLength).field0_0x0._s_0.X;
  if (0.0 < dVar1) {
    dVar1 = atan(((this->ImageResolution).field0_0x0._s_0.X * __real_3fe0000000000000) / dVar1);
    return (float)(dVar1 * __real_405ca5dc1a63c1f8);
  }
  return 0.0;
}

// GetHorizontalFieldOfViewForScreen @ 14cfd6a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall
FAppleARKitCamera::GetHorizontalFieldOfViewForScreen
          (FAppleARKitCamera *this,EAppleARKitBackgroundFitMode param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  TVector2<double>_u_0 local_18;
  
  UGameViewportClient::GetViewportSize
            ((GEngine->GameViewport).field0_0x0.DebugPtr,(TVector2<double> *)&local_18._s_0);
  dVar2 = (this->FocalLength).field0_0x0._s_0.X;
  fVar3 = 0.0;
  if (0.0 < dVar2) {
    dVar1 = (this->ImageResolution).field0_0x0._s_0.X;
    fVar3 = (float)local_18._s_0.X / (float)local_18._s_0.Y;
    fVar4 = (float)(dVar1 / (this->ImageResolution).field0_0x0._s_0.Y);
    if (((((float)((uint)(fVar3 - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
           __real_322bcc77) || (param_1 == Fit)) || (param_1 != Fill)) || (fVar4 < fVar3)) {
      dVar1 = dVar1 * __real_3fe0000000000000;
    }
    else {
      dVar1 = (double)((float)((double)fVar3 * (this->ImageResolution).field0_0x0._s_0.Y) *
                      __real_3f000000);
    }
    dVar2 = atan(dVar1 / dVar2);
    fVar3 = (float)(dVar2 * __real_405ca5dc1a63c1f8);
  }
  return fVar3;
}

// GetHorizontalFieldOfViewForScreen @ 14cfd6b70

float __thiscall
FAppleARKitCamera::GetHorizontalFieldOfViewForScreen
          (FAppleARKitCamera *this,EAppleARKitBackgroundFitMode param_1,float param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  dVar3 = (this->FocalLength).field0_0x0._s_0.X;
  fVar4 = 0.0;
  if (0.0 < dVar3) {
    dVar2 = (this->ImageResolution).field0_0x0._s_0.X;
    dVar1 = (this->ImageResolution).field0_0x0._s_0.Y;
    fVar5 = param_2 / param_3;
    fVar4 = (float)(dVar2 / dVar1);
    if (((((float)((uint)(fVar5 - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
           __real_322bcc77) || (param_1 == Fit)) || (param_1 != Fill)) || (fVar4 < fVar5)) {
      dVar2 = dVar2 * __real_3fe0000000000000;
    }
    else {
      dVar2 = (double)((float)((double)fVar5 * dVar1) * __real_3f000000);
    }
    dVar3 = atan(dVar2 / dVar3);
    fVar4 = (float)(dVar3 * __real_405ca5dc1a63c1f8);
  }
  return fVar4;
}

// GetImageCoordinateForScreenPosition @ 14cfd6c30

TVector2<double> * __thiscall
FAppleARKitCamera::GetImageCoordinateForScreenPosition
          (FAppleARKitCamera *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1,EAppleARKitBackgroundFitMode param_2,float param_3,float param_4
          )

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (float)((this->ImageResolution).field0_0x0._s_0.X /
                 (this->ImageResolution).field0_0x0._s_0.Y);
  if (param_3 < param_4) {
    fVar4 = __real_3f800000 / fVar4;
  }
  if (__real_322bcc77 <
      (float)((uint)(param_3 / param_4 - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    if (param_2 == Fill) {
      if (fVar4 < param_3 / param_4) {
        fVar3 = (param_3 / fVar4 - param_4) * __real_3f000000;
        (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 / (double)param_3;
        (__return_storage_ptr__->field0_0x0)._s_0.Y =
             ((double)fVar3 + dVar2) / (double)(param_3 / fVar4);
        return __return_storage_ptr__;
      }
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           ((double)((fVar4 * param_4 - param_3) * __real_3f000000) + dVar1) /
           (double)(fVar4 * param_4);
    }
    else {
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 / (double)param_3;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 / (double)param_4;
    return __return_storage_ptr__;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X / (double)param_3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 / (double)param_4;
  return __return_storage_ptr__;
}

// GetVerticalFieldOfView @ 14cfd8c10

float __thiscall FAppleARKitCamera::GetVerticalFieldOfView(FAppleARKitCamera *this)

{
  double dVar1;
  
  dVar1 = (this->FocalLength).field0_0x0._s_0.Y;
  if (0.0 < dVar1) {
    dVar1 = atan(((this->ImageResolution).field0_0x0._s_0.Y * __real_3fe0000000000000) / dVar1);
    return (float)(dVar1 * __real_405ca5dc1a63c1f8);
  }
  return 0.0;
}

// GetVerticalFieldOfViewForScreen @ 14cfd8c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall
FAppleARKitCamera::GetVerticalFieldOfViewForScreen
          (FAppleARKitCamera *this,EAppleARKitBackgroundFitMode param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  TVector2<double>_u_0 local_18;
  
  UGameViewportClient::GetViewportSize
            ((GEngine->GameViewport).field0_0x0.DebugPtr,(TVector2<double> *)&local_18._s_0);
  dVar2 = (this->FocalLength).field0_0x0._s_0.Y;
  fVar3 = 0.0;
  if (0.0 < dVar2) {
    dVar1 = (this->ImageResolution).field0_0x0._s_0.Y;
    fVar3 = (float)local_18._s_0.X / (float)local_18._s_0.Y;
    fVar4 = __real_3f800000 / (float)((this->ImageResolution).field0_0x0._s_0.X / dVar1);
    if (((((float)((uint)(fVar3 - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
           __real_322bcc77) || (param_1 == Fit)) || (param_1 != Fill)) || (fVar4 < fVar3)) {
      dVar1 = dVar1 * __real_3fe0000000000000;
    }
    else {
      dVar1 = (double)((float)((double)fVar3 * (this->ImageResolution).field0_0x0._s_0.X) *
                      __real_3f000000);
    }
    dVar2 = atan(dVar1 / dVar2);
    fVar3 = (float)(dVar2 * __real_405ca5dc1a63c1f8);
  }
  return fVar3;
}

// GetVerticalFieldOfViewForScreen @ 14cfd8d60

float __thiscall
FAppleARKitCamera::GetVerticalFieldOfViewForScreen
          (FAppleARKitCamera *this,EAppleARKitBackgroundFitMode param_1,float param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  dVar3 = (this->FocalLength).field0_0x0._s_0.Y;
  fVar4 = 0.0;
  if (0.0 < dVar3) {
    dVar2 = (this->ImageResolution).field0_0x0._s_0.Y;
    dVar1 = (this->ImageResolution).field0_0x0._s_0.X;
    fVar5 = param_2 / param_3;
    fVar4 = __real_3f800000 / (float)(dVar1 / dVar2);
    if (((((float)((uint)(fVar5 - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
           __real_322bcc77) || (param_1 == Fit)) || (param_1 != Fill)) || (fVar4 < fVar5)) {
      dVar2 = dVar2 * __real_3fe0000000000000;
    }
    else {
      dVar2 = (double)((float)((double)fVar5 * dVar1) * __real_3f000000);
    }
    dVar3 = atan(dVar2 / dVar3);
    fVar4 = (float)(dVar3 * __real_405ca5dc1a63c1f8);
  }
  return fVar4;
}

// GetViewProjectionMatrix @ 14cfd8e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAppleARKitCamera::GetViewProjectionMatrix
          (FAppleARKitCamera *this,EDeviceScreenOrientation param_1,
          FSceneViewProjectionData *param_2)

{
  float fVar1;
  double dVar2;
  TVector2<double>_u_0 local_18;
  
  UGameViewportClient::GetViewportSize
            ((GEngine->GameViewport).field0_0x0.DebugPtr,(TVector2<double> *)&local_18._s_0);
  if ((byte)(param_1 - Portrait) < 2) {
    fVar1 = GetVerticalFieldOfViewForScreen(this,Fill);
  }
  else {
    fVar1 = GetHorizontalFieldOfViewForScreen(this,Fill);
  }
  dVar2 = tan((double)(fVar1 * __real_3c0efa35));
  dVar2 = __real_3ff0000000000000 / dVar2;
  (param_2->ProjectionMatrix).M[0][0] = dVar2;
  (param_2->ProjectionMatrix).M[0][1] = 0.0;
  (param_2->ProjectionMatrix).M[0][2] = 0.0;
  (param_2->ProjectionMatrix).M[0][3] = 0.0;
  (param_2->ProjectionMatrix).M[1][0] = 0.0;
  (param_2->ProjectionMatrix).M[1][1] = (dVar2 * local_18._s_0.X) / local_18._s_0.Y;
  (param_2->ProjectionMatrix).M[1][2] = 0.0;
  (param_2->ProjectionMatrix).M[1][3] = 0.0;
  (param_2->ProjectionMatrix).M[2][0] = 0.0;
  (param_2->ProjectionMatrix).M[2][1] = 0.0;
  (param_2->ProjectionMatrix).M[2][2] = 0.0;
  (param_2->ProjectionMatrix).M[2][3] = 1.0;
  (param_2->ProjectionMatrix).M[3][0] = 0.0;
  (param_2->ProjectionMatrix).M[3][1] = 0.0;
  (param_2->ProjectionMatrix).M[3][2] = 10.0;
  (param_2->ProjectionMatrix).M[3][3] = 0.0;
  return;
}

