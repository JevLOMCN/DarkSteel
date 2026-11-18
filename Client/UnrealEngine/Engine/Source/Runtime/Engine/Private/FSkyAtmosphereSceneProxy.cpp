// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FSkyAtmosphereSceneProxy @ 1479a3d30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSkyAtmosphereSceneProxy * __thiscall
FSkyAtmosphereSceneProxy::FSkyAtmosphereSceneProxy
          (FSkyAtmosphereSceneProxy *this,FSkyAtmosphereDynamicState *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  this->bStaticLightingBuilt = false;
  FAtmosphereSetup::FAtmosphereSetup(&this->AtmosphereSetup,param_1);
  this->bHoldout = param_1->bHoldout;
  this->bRenderInMainPass = param_1->bRenderInMainPass != '\0';
  uVar1 = *(undefined8 *)((longlong)&(param_1->SkyLuminanceFactor).field0_0x0 + 8);
  *(undefined8 *)&(this->SkyLuminanceFactor).field0_0x0 =
       *(undefined8 *)&(param_1->SkyLuminanceFactor).field0_0x0;
  *(undefined8 *)((longlong)&(this->SkyLuminanceFactor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 8);
  *(undefined8 *)&(this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 =
       *(undefined8 *)&(param_1->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0;
  *(undefined8 *)((longlong)&(this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 8) = uVar1;
  this->AerialPespectiveViewDistanceScale = param_1->AerialPespectiveViewDistanceScale;
  this->HeightFogContribution = param_1->HeightFogContribution;
  this->AerialPerspectiveStartDepthKm = param_1->AerialPerspectiveStartDepth;
  this->TraceSampleCountScale = param_1->TraceSampleCountScale;
  this->OverrideAtmosphericLight[0] = (bool)((param_1->OverrideAtmosphericLight).EnabledMask & 1);
  dVar2 = (param_1->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.Y;
  this->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.X =
       (param_1->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.X;
  this->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.Y = dVar2;
  this->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.Z =
       (param_1->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.Z;
  this->OverrideAtmosphericLight[1] =
       (bool)((param_1->OverrideAtmosphericLight).EnabledMask >> 1 & 1);
  dVar2 = (param_1->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.Y;
  this->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.X =
       (param_1->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.X;
  this->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.Y = dVar2;
  this->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.Z =
       (param_1->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.Z;
  return this;
}

// FSkyAtmosphereSceneProxy @ 1479a3e30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSkyAtmosphereSceneProxy * __thiscall
FSkyAtmosphereSceneProxy::FSkyAtmosphereSceneProxy
          (FSkyAtmosphereSceneProxy *this,USkyAtmosphereComponent *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  this->bStaticLightingBuilt = false;
  FAtmosphereSetup::FAtmosphereSetup(&this->AtmosphereSetup,param_1);
  this->bHoldout = param_1->bHoldout;
  this->bRenderInMainPass = param_1->bRenderInMainPass != '\0';
  uVar1 = *(undefined8 *)((longlong)&(param_1->SkyLuminanceFactor).field0_0x0 + 8);
  *(undefined8 *)&(this->SkyLuminanceFactor).field0_0x0 =
       *(undefined8 *)&(param_1->SkyLuminanceFactor).field0_0x0;
  *(undefined8 *)((longlong)&(this->SkyLuminanceFactor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 8);
  *(undefined8 *)&(this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 =
       *(undefined8 *)&(param_1->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0;
  *(undefined8 *)((longlong)&(this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 8) = uVar1;
  this->AerialPespectiveViewDistanceScale = param_1->AerialPespectiveViewDistanceScale;
  this->HeightFogContribution = param_1->HeightFogContribution;
  this->AerialPerspectiveStartDepthKm = param_1->AerialPerspectiveStartDepth;
  this->TraceSampleCountScale = param_1->TraceSampleCountScale;
  *(undefined2 *)this->OverrideAtmosphericLight = *(undefined2 *)param_1->OverrideAtmosphericLight;
  dVar2 = param_1->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.Y;
  this->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.X =
       param_1->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.X;
  this->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.Y = dVar2;
  dVar2 = param_1->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.X;
  this->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.Z =
       param_1->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.Z;
  this->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.X = dVar2;
  dVar2 = param_1->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.Z;
  this->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.Y =
       param_1->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.Y;
  this->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.Z = dVar2;
  return this;
}

// ~FSkyAtmosphereSceneProxy @ 1479a8e10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSkyAtmosphereSceneProxy::~FSkyAtmosphereSceneProxy(FSkyAtmosphereSceneProxy *this)

{
  return;
}

// GetAtmosphereLightDirection @ 1479c40c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FSkyAtmosphereSceneProxy::GetAtmosphereLightDirection
          (FSkyAtmosphereSceneProxy *this,TVector<double> *__return_storage_ptr__,int param_1,
          TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  if (this->OverrideAtmosphericLight[param_1] != false) {
    dVar2 = this->OverrideAtmosphericLightDirection[param_1].field0_0x0._s_0.Y;
    dVar1 = this->OverrideAtmosphericLightDirection[param_1].field0_0x0._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         this->OverrideAtmosphericLightDirection[param_1].field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

