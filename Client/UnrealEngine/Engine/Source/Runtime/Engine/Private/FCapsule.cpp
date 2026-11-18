// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Draw @ 147ad12c0

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
FDebugRenderSceneProxy::FCapsule::Draw
          (FCapsule *this,FPrimitiveDrawInterface *param_1,EDrawType param_2,uint param_3,
          FMaterialCache *param_4,int param_5,FMeshElementCollector *param_6)

{
  TVector<double> *pTVar1;
  double dVar2;
  int iVar3;
  FMaterialRenderProxy *pFVar4;
  int iVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  FLinearColor_u_0 local_68;
  undefined1 local_58 [8];
  float local_50;
  float fStack_4c;
  undefined8 local_48;
  
  pTVar1 = &this->Z;
  if (param_2 - WireMesh < 2) {
    fVar8 = this->HalfHeight - this->Radius;
    dVar2 = (double)this->Radius;
    if (fVar8 <= __real_3f800000) {
      fVar8 = __real_3f800000;
    }
    dVar11 = (double)(fVar8 + fVar8);
    dVar9 = dVar11 * (this->Z).field0_0x0._s_0.Y;
    dVar6 = dVar11 * (pTVar1->field0_0x0)._s_0.X;
    dVar11 = dVar11 * (this->Z).field0_0x0._s_0.Z;
    auVar7._0_8_ = dVar6 * dVar6;
    auVar7._8_8_ = 0;
    auVar10._0_8_ = dVar9 * dVar9 + auVar7._0_8_ + dVar11 * dVar11;
    auVar10._8_8_ = 0;
    auVar7 = sqrtpd(auVar7,auVar10);
    dVar6 = (double)(float)(auVar7._0_8_ * __real_3fe0000000000000) + dVar2;
    _local_50 = dVar6 * (this->Z).field0_0x0._s_0.Y + (this->Base).field0_0x0._s_0.Y;
    local_58 = (undefined1  [8])
               (dVar6 * (pTVar1->field0_0x0)._s_0.X + (this->Base).field0_0x0._s_0.X);
    local_48 = dVar6 * (this->Z).field0_0x0._s_0.Z + (this->Base).field0_0x0._s_0.Z;
    local_68._s_0.R = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
    local_68._s_0.G = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
    local_68._s_0.B = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
    iVar5 = 0;
    if (param_2 == SolidAndWireMeshes) {
      iVar5 = 2;
    }
    iVar3 = 0x10;
    local_68._s_0.A = (float)(this->Color).field0_0x0._s_0.A * __real_3b808081;
    if (param_2 == SolidAndWireMeshes) {
      iVar3 = 9;
    }
    DrawWireCapsule(param_1,(TVector<double> *)local_58,&this->X,&this->Y,pTVar1,
                    (FLinearColor *)&local_68._s_0,dVar2,(double)this->HalfHeight,iVar3,'\0',
                    (float)iVar5,0.0,true);
    if (param_2 == SolidAndWireMeshes) goto LAB_147ad1484;
  }
  if (param_2 != SolidMesh) {
    return;
  }
LAB_147ad1484:
  local_68._s_0.R = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
  local_68._s_0.G = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
  local_68._s_0.B = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
  local_68._s_0.A = (float)(byte)((this->Color).field0_0x0._s_0.A * (char)param_3) * __real_3b808081
  ;
  pFVar4 = FMaterialCache::operator[](param_4,(FLinearColor *)&local_68._s_0);
  local_58._4_4_ = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
  local_58._0_4_ = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
  iVar5 = 0x10;
  if (param_2 == SolidAndWireMeshes) {
    iVar5 = 9;
  }
  fStack_4c = (float)(this->Color).field0_0x0._s_0.A * __real_3b808081;
  local_50 = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
  GetCapsuleMesh(&this->Base,&this->X,&this->Y,pTVar1,(FLinearColor *)local_58,(double)this->Radius,
                 (double)this->HalfHeight,iVar5,pFVar4,'\0',false,param_5,param_6,(HHitProxy *)0x0);
  return;
}

