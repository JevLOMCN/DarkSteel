// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Draw @ 147ad15f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDebugRenderSceneProxy::FCircle::Draw
          (FCircle *this,FPrimitiveDrawInterface *param_1,EDrawType param_2,uint param_3,
          FMaterialCache *param_4,int param_5,FMeshElementCollector *param_6)

{
  int iVar1;
  FMaterialRenderProxy *pFVar2;
  float fVar3;
  FLinearColor_u_0 local_58;
  TVector<double> local_48;
  TVector<double> local_30;
  
  UE::Math::TVector<double>::FindBestAxisVectors(&this->Axis,&local_30,&local_48);
  fVar3 = __real_40000000;
  if (param_2 == SolidAndWireMeshes) {
LAB_147ad165c:
    local_58._s_0.R = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
    local_58._s_0.G = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
    local_58._s_0.B = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
    iVar1 = 0xc;
    if (param_2 == SolidAndWireMeshes) {
      iVar1 = 9;
    }
    local_58._s_0.A = (float)(this->Color).field0_0x0._s_0.A * __real_3b808081;
    DrawCircle(param_1,&this->Center,&local_30,&local_48,(FLinearColor *)&local_58._s_0,
               (double)this->Radius,iVar1,'\0',fVar3,0.0,true);
    if (param_2 == SolidAndWireMeshes) goto LAB_147ad1708;
  }
  else if (param_2 == WireMesh) {
    fVar3 = this->Thickness;
    goto LAB_147ad165c;
  }
  if (param_2 != SolidMesh) {
    return;
  }
LAB_147ad1708:
  local_58._s_0.R = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
  local_58._s_0.G = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
  local_58._s_0.B = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
  local_58._s_0.A = (float)(byte)((this->Color).field0_0x0._s_0.A * (char)param_3) * __real_3b808081
  ;
  pFVar2 = FMaterialCache::operator[](param_4,(FLinearColor *)&local_58._s_0);
  iVar1 = 0xc;
  if (param_2 == SolidAndWireMeshes) {
    iVar1 = 9;
  }
  GetDiscMesh(&this->Center,&local_30,&local_48,(double)this->Radius,iVar1,pFVar2,'\0',param_5,
              param_6,(HHitProxy *)0x0);
  return;
}

