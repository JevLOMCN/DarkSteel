// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Draw @ 147ad17f0

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
FDebugRenderSceneProxy::FCone::Draw
          (FCone *this,FPrimitiveDrawInterface *param_1,EDrawType param_2,uint param_3,
          FMaterialCache *param_4,int param_5,FMeshElementCollector *param_6,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_7)

{
  int iVar1;
  FMaterialRenderProxy *pFVar2;
  int iVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  FLinearColor_u_0 local_38;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  
  if (param_2 - WireMesh < 2) {
    local_38._s_0.R = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
    _local_28 = (FScriptContainerElement *)0x0;
    local_20 = 0.0;
    fStack_1c = 0.0;
    local_38._s_0.G = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
    local_38._s_0.B = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
    iVar1 = 0;
    if (param_2 == SolidAndWireMeshes) {
      iVar1 = 2;
    }
    iVar3 = 0x10;
    if (param_2 == SolidAndWireMeshes) {
      iVar3 = 9;
    }
    local_38._s_0.A = (float)(this->Color).field0_0x0._s_0.A * __real_3b808081;
    pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&local_28;
    if (param_7 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar4 = param_7;
    }
    DrawWireCone(param_1,pTVar4,&this->ConeToWorld,__real_3ff0000000000000,(double)this->Angle2,
                 iVar3,(FLinearColor *)&local_38._s_0,'\0',(float)iVar1,0.0,true);
    if ((FScriptContainerElement *)_local_28 != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)_local_28);
    }
    if (param_2 == SolidAndWireMeshes) goto LAB_147ad192c;
  }
  if (param_2 != SolidMesh) {
    return;
  }
LAB_147ad192c:
  fStack_24 = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
  local_28 = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
  fStack_1c = (float)(byte)((this->Color).field0_0x0._s_0.A * (char)param_3) * __real_3b808081;
  local_20 = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
  pFVar2 = FMaterialCache::operator[](param_4,(FLinearColor *)&local_28);
  uVar5 = 0x10;
  if (param_2 == SolidAndWireMeshes) {
    uVar5 = 9;
  }
  GetConeMesh(&this->ConeToWorld,this->Angle1,this->Angle2,uVar5,pFVar2,'\0',param_5,param_6,
              (HHitProxy *)0x0);
  return;
}

