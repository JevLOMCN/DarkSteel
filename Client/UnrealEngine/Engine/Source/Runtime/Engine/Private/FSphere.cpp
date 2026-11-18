// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Draw @ 147ad1e60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDebugRenderSceneProxy::FSphere::Draw
          (FSphere *this,FPrimitiveDrawInterface *param_1,EDrawType param_2,uint param_3,
          FMaterialCache *param_4,int param_5,FMeshElementCollector *param_6)

{
  int iVar1;
  FMaterialRenderProxy *pFVar2;
  FLinearColor_u_0 local_38;
  TVector<double>_u_0 local_28;
  
  if (param_2 - WireMesh < 2) {
    local_38._s_0.A = 1.0;
    local_38._s_0.R = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
    local_38._s_0.G = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
    local_38._s_0.B = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
    iVar1 = 0;
    if (param_2 == SolidAndWireMeshes) {
      iVar1 = 2;
    }
    DrawWireSphere(param_1,&this->Location,(FLinearColor *)&local_38._s_0,(double)this->Radius,0x14,
                   '\0',(float)iVar1,0.0,true);
    if (param_2 == SolidAndWireMeshes) goto LAB_147ad1f32;
  }
  if (param_2 != SolidMesh) {
    return;
  }
LAB_147ad1f32:
  local_38._s_0.R = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
  local_38._s_0.G = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
  local_38._s_0.B = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
  local_38._s_0.A = (float)(byte)((this->Color).field0_0x0._s_0.A * (char)param_3) * __real_3b808081
  ;
  pFVar2 = FMaterialCache::operator[](param_4,(FLinearColor *)&local_38._s_0);
  local_28._s_0.X = (double)this->Radius;
  local_28._s_0.Y = local_28._s_0.X;
  local_28._s_0.Z = local_28._s_0.X;
  GetSphereMesh(&this->Location,(TVector<double> *)&local_28._s_0,0x14,7,pFVar2,'\0',false,param_5,
                param_6);
  return;
}

