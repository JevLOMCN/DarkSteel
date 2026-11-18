// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// AffectsPrimitive @ 144c2ad20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall
FLightSceneInfoCompact::AffectsPrimitive
          (FLightSceneInfoCompact *this,TBoxSphereBounds<double,double> *param_1,
          FPrimitiveSceneProxy *param_2)

{
  double dVar1;
  FLightSceneProxy *pFVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  char cVar6;
  undefined4 in_EAX;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (this->LightType != 0) {
    dVar5 = (this->BoundingSphereVector).ZW.m128d_f64[1];
    dVar1 = param_1->SphereRadius;
    dVar10 = (this->BoundingSphereVector).XY.m128d_f64[0] - (param_1->Origin).field0_0x0._s_0.X;
    dVar11 = (this->BoundingSphereVector).XY.m128d_f64[1] - (param_1->Origin).field0_0x0._s_0.Y;
    dVar12 = (this->BoundingSphereVector).ZW.m128d_f64[0] - (param_1->Origin).field0_0x0._s_0.Z;
    dVar10 = dVar12 * dVar12 + dVar10 * dVar10 + dVar11 * dVar11;
    lVar9 = -(ulonglong)((dVar5 + dVar1) * (dVar5 + dVar1) < dVar10);
    auVar4._8_4_ = (int)lVar9;
    auVar4._0_8_ = -(ulonglong)((dVar5 + dVar1) * (dVar5 + dVar1) < dVar10);
    auVar4._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    uVar8 = movmskpd((int)this,auVar4);
    lVar9 = -(ulonglong)((dVar5 + dVar1) * (dVar5 + dVar1) < dVar10);
    auVar3._8_4_ = (int)lVar9;
    auVar3._0_8_ = -(ulonglong)((dVar5 + dVar1) * (dVar5 + dVar1) < dVar10);
    auVar3._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    iVar7 = movmskpd(in_EAX,auVar3);
    if ((uVar8 & 0x3fffffff) != 0 || iVar7 != 0) {
      return false;
    }
  }
  cVar6 = (**(code **)(this->LightSceneInfo->Proxy->_padding_ + 8))();
  if ((cVar6 != '\0') &&
     ((pFVar2 = this->LightSceneInfo->Proxy, pFVar2->bCastShadowsFromCinematicObjectsOnly == '\0' ||
      (param_2->bCastCinematicShadow != '\0')))) {
    return (param_2->LightingChannelMask & pFVar2->LightingChannelMask) != 0;
  }
  return false;
}

// Init @ 144c51590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall FLightSceneInfoCompact::Init(FLightSceneInfoCompact *this,FLightSceneInfo *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  this->LightSceneInfo = param_1;
  (**(code **)(param_1->Proxy->_padding_ + 0x10))(param_1->Proxy,&local_28);
  if (dStack_10 <= 0.0) {
    dStack_10 = __real_47efffffe0000000;
  }
  (this->BoundingSphereVector).XY.m128d_f64[0] = local_28;
  (this->BoundingSphereVector).XY.m128d_f64[1] = dStack_20;
  (this->BoundingSphereVector).ZW.m128d_f64[0] = local_18;
  (this->BoundingSphereVector).ZW.m128d_f64[1] = dStack_10;
  uVar1 = *(undefined8 *)((longlong)&(param_1->Proxy->Color).field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&(param_1->Proxy->Color).field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar1;
  uVar2 = ((uint)param_1->Proxy->LightType ^ this->LightType) & 3 ^ *(uint *)&this->field_0x38;
  *(uint *)&this->field_0x38 = uVar2;
  uVar2 = ((byte)param_1->Proxy->field_0x1d8 >> 2 ^ uVar2) & 4 ^ uVar2;
  *(uint *)&this->field_0x38 = uVar2;
  uVar2 = ((byte)param_1->Proxy->field_0x1d8 >> 2 ^ uVar2) & 8 ^ uVar2;
  *(uint *)&this->field_0x38 = uVar2;
  uVar2 = ((uint)(byte)param_1->Proxy->field_0x1d8 << 2 ^ uVar2) & 0x10 ^ uVar2;
  *(uint *)&this->field_0x38 = uVar2;
  uVar2 = ((uint)(byte)param_1->Proxy->field_0x1db << 5 ^ uVar2) & 0x20 ^ uVar2;
  *(uint *)&this->field_0x38 = uVar2;
  uVar2 = ((uint)(byte)param_1->Proxy->field_0x1db << 5 ^ uVar2) & 0x40 ^ uVar2;
  *(uint *)&this->field_0x38 = uVar2;
  uVar2 = ((uint)(byte)param_1->Proxy->field_0x1d8 << 6 ^ uVar2) & 0x80 ^ uVar2;
  *(uint *)&this->field_0x38 = uVar2;
  (this->CastRaytracedShadow).Value = (param_1->Proxy->CastRaytracedShadow).Value;
  *(uint *)&this->field_0x38 =
       ((uint)(byte)param_1->Proxy->field_0x1dc << 7 ^ uVar2) & 0x100 ^ uVar2;
  (this->MegaLightsShadowMethod).Value = (param_1->Proxy->MegaLightsShadowMethod).Value;
  return;
}

