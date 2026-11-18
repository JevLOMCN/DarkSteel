// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Draw @ 147ad2020

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
FDebugRenderSceneProxy::FWireCylinder::Draw
          (FWireCylinder *this,FPrimitiveDrawInterface *param_1,EDrawType param_2,uint param_3,
          FMaterialCache *param_4,int param_5,FMeshElementCollector *param_6)

{
  TVector<double> *this_00;
  int iVar1;
  FMaterialRenderProxy *pFVar2;
  int iVar3;
  FLinearColor_u_0 local_68;
  TVector<double> local_58;
  TVector<double> local_40;
  
  this_00 = &this->Direction;
  UE::Math::TVector<double>::FindBestAxisVectors(this_00,&local_40,&local_58);
  if (param_2 - WireMesh < 2) {
    local_68._s_0.R = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
    local_68._s_0.G = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
    local_68._s_0.B = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
    iVar3 = 0;
    if (param_2 == SolidAndWireMeshes) {
      iVar3 = 2;
    }
    local_68._s_0.A = (float)(this->Color).field0_0x0._s_0.A * __real_3b808081;
    iVar1 = 0x10;
    if (param_2 == SolidAndWireMeshes) {
      iVar1 = 9;
    }
    DrawWireCylinder(param_1,&this->Base,&local_40,&local_58,this_00,(FLinearColor *)&local_68._s_0,
                     (double)this->Radius,(double)this->HalfHeight,iVar1,'\0',(float)iVar3,0.0,true)
    ;
    if (param_2 == SolidAndWireMeshes) goto LAB_147ad214f;
  }
  if (param_2 != SolidMesh) {
    return;
  }
LAB_147ad214f:
  local_68._s_0.R = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
  local_68._s_0.G = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
  local_68._s_0.B = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
  local_68._s_0.A = (float)(byte)((this->Color).field0_0x0._s_0.A * (char)param_3) * __real_3b808081
  ;
  pFVar2 = FMaterialCache::operator[](param_4,(FLinearColor *)&local_68._s_0);
  iVar3 = 0x10;
  if (param_2 == SolidAndWireMeshes) {
    iVar3 = 9;
  }
  GetCylinderMesh(&this->Base,&local_40,&local_58,this_00,(double)this->Radius,
                  (double)this->HalfHeight,iVar3,pFVar2,'\0',param_5,param_6,(HHitProxy *)0x0);
  return;
}

