// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 5

// StaticStruct @ 14e2ea350

UScriptStruct * __cdecl FDatasmithPostProcessSettingsTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithPostProcessSettingsTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UScriptStruct_FDatasmithPostProcessSettingsTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate,
                         (UObject *)pUVar1,L"DatasmithPostProcessSettingsTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FDatasmithPostProcessSettingsTemplate.OuterSingleton;
}

// FDatasmithPostProcessSettingsTemplate @ 14e2f40e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FDatasmithPostProcessSettingsTemplate * __thiscall
FDatasmithPostProcessSettingsTemplate::FDatasmithPostProcessSettingsTemplate
          (FDatasmithPostProcessSettingsTemplate *this)

{
  double dVar1;
  FPostProcessSettings *pFVar2;
  uint uVar3;
  undefined1 auStack_7a8 [32];
  FPostProcessSettings local_788;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_7a8;
  this->WhiteTemp = 0.0;
  this->VignetteIntensity = 0.0;
  (this->ColorSaturation).field0_0x0._s_0.X = 0.0;
  (this->ColorSaturation).field0_0x0._s_0.Y = 0.0;
  (this->ColorSaturation).field0_0x0._s_0.Z = 0.0;
  (this->ColorSaturation).field0_0x0._s_0.W = 1.0;
  this->CameraISO = 0.0;
  this->CameraShutterSpeed = 0.0;
  this->DepthOfFieldFstop = 0.0;
  pFVar2 = FPostProcessSettings::FPostProcessSettings(&local_788);
  uVar3 = (pFVar2->bOverride_WhiteTemp ^ this->bOverride_WhiteTemp) & 1 ^ *(uint *)this;
  *(uint *)this = uVar3;
  this->WhiteTemp = pFVar2->WhiteTemp;
  uVar3 = ((byte)pFVar2->field_0xd ^ uVar3) & 4 ^ uVar3;
  *(uint *)this = uVar3;
  this->VignetteIntensity = pFVar2->VignetteIntensity;
  uVar3 = (*(byte *)pFVar2 >> 2 ^ uVar3) & 2 ^ uVar3;
  *(uint *)this = uVar3;
  dVar1 = (pFVar2->ColorSaturation).field0_0x0._s_0.Y;
  (this->ColorSaturation).field0_0x0._s_0.X = (pFVar2->ColorSaturation).field0_0x0._s_0.X;
  (this->ColorSaturation).field0_0x0._s_0.Y = dVar1;
  dVar1 = (pFVar2->ColorSaturation).field0_0x0._s_0.W;
  (this->ColorSaturation).field0_0x0._s_0.Z = (pFVar2->ColorSaturation).field0_0x0._s_0.Z;
  (this->ColorSaturation).field0_0x0._s_0.W = dVar1;
  uVar3 = ((uint)(byte)pFVar2->field_0x9 << 3 ^ uVar3) & 8 ^ uVar3;
  *(uint *)this = uVar3;
  (this->AutoExposureMethod).Value = (pFVar2->AutoExposureMethod).Value;
  uVar3 = (byte)pFVar2->field_0x8 >> 3 & 0x1ffffff0 | uVar3 & 0xffffffef;
  *(uint *)this = uVar3;
  this->CameraISO = pFVar2->CameraISO;
  *(uint *)this = ((byte)pFVar2->field_0x8 >> 1 ^ uVar3) & 0x20 ^ uVar3;
  this->CameraShutterSpeed = pFVar2->CameraShutterSpeed;
  this->field_0x4 =
       this->field_0x4 ^
       (pFVar2->bOverride_DepthOfFieldFstop ^ this->bOverride_DepthOfFieldFstop) & 1;
  this->DepthOfFieldFstop = pFVar2->DepthOfFieldFstop;
  if (local_788.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_788.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return this;
}

// Apply @ 14e2f8240

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FDatasmithPostProcessSettingsTemplate::Apply
          (FDatasmithPostProcessSettingsTemplate *this,FPostProcessSettings *param_1,
          FDatasmithPostProcessSettingsTemplate *param_2)

{
  byte bVar1;
  double dVar2;
  byte bVar3;
  uint uVar4;
  
  if ((param_2 == (FDatasmithPostProcessSettingsTemplate *)0x0) ||
     (uVar4 = (uint)(byte)*(undefined1 *)param_1,
     ((((undefined1 *)param_1)->bOverride_WhiteTemp ^ param_2->bOverride_WhiteTemp) & 1) == 0)) {
    bVar3 = (*(char *)this * '\x02' ^ *(byte *)param_1) & 2 ^ *(byte *)param_1;
    *(byte *)param_1 = bVar3;
    uVar4 = (uint)bVar3;
    if (param_2 != (FDatasmithPostProcessSettingsTemplate *)0x0) goto LAB_14e2f826f;
LAB_14e2f827b:
    param_1->WhiteTemp = this->WhiteTemp;
    if (param_2 != (FDatasmithPostProcessSettingsTemplate *)0x0) goto LAB_14e2f8287;
LAB_14e2f8292:
    param_1->field_0xd =
         param_1->field_0xd ^ ((byte)*(undefined4 *)this & 0xfc ^ param_1->field_0xd) & 4;
    if (param_2 != (FDatasmithPostProcessSettingsTemplate *)0x0) goto LAB_14e2f82a6;
LAB_14e2f82b5:
    bVar3 = (byte)uVar4;
    param_1->VignetteIntensity = this->VignetteIntensity;
    if (param_2 != (FDatasmithPostProcessSettingsTemplate *)0x0) goto LAB_14e2f82c4;
LAB_14e2f82d2:
    *(byte *)param_1 = ((char)(*(uint *)this >> 1) << 3 ^ bVar3) & 8 ^ bVar3;
    if (param_2 != (FDatasmithPostProcessSettingsTemplate *)0x0) goto LAB_14e2f82e9;
LAB_14e2f831d:
    dVar2 = (this->ColorSaturation).field0_0x0._s_0.Y;
    (param_1->ColorSaturation).field0_0x0._s_0.X = (this->ColorSaturation).field0_0x0._s_0.X;
    (param_1->ColorSaturation).field0_0x0._s_0.Y = dVar2;
    dVar2 = (this->ColorSaturation).field0_0x0._s_0.W;
    (param_1->ColorSaturation).field0_0x0._s_0.Z = (this->ColorSaturation).field0_0x0._s_0.Z;
    (param_1->ColorSaturation).field0_0x0._s_0.W = dVar2;
    if (param_2 != (FDatasmithPostProcessSettingsTemplate *)0x0) goto LAB_14e2f8334;
LAB_14e2f8345:
    param_1->field_0x9 =
         param_1->field_0x9 ^
         (this->bOverride_AutoExposureMethod ^ param_1->bOverride_AutoExposureMethod) & 1;
    if (param_2 != (FDatasmithPostProcessSettingsTemplate *)0x0) goto LAB_14e2f8359;
LAB_14e2f8363:
    (param_1->AutoExposureMethod).Value = (this->AutoExposureMethod).Value;
    if (param_2 != (FDatasmithPostProcessSettingsTemplate *)0x0) goto LAB_14e2f8370;
  }
  else {
LAB_14e2f826f:
    if (param_2->WhiteTemp == param_1->WhiteTemp) goto LAB_14e2f827b;
LAB_14e2f8287:
    if ((((uint)(byte)param_1->field_0xd ^ *(uint *)param_2) & 4) == 0) goto LAB_14e2f8292;
LAB_14e2f82a6:
    if (param_2->VignetteIntensity == param_1->VignetteIntensity) goto LAB_14e2f82b5;
LAB_14e2f82c4:
    bVar3 = (byte)uVar4;
    if (((uVar4 >> 2 ^ *(uint *)param_2) & 2) == 0) goto LAB_14e2f82d2;
LAB_14e2f82e9:
    if (((((param_2->ColorSaturation).field0_0x0._s_0.X ==
           (param_1->ColorSaturation).field0_0x0._s_0.X) &&
         ((param_2->ColorSaturation).field0_0x0._s_0.Y ==
          (param_1->ColorSaturation).field0_0x0._s_0.Y)) &&
        ((param_2->ColorSaturation).field0_0x0._s_0.Z ==
         (param_1->ColorSaturation).field0_0x0._s_0.Z)) &&
       ((param_2->ColorSaturation).field0_0x0._s_0.W == (param_1->ColorSaturation).field0_0x0._s_0.W
       )) goto LAB_14e2f831d;
LAB_14e2f8334:
    if (((param_2->bOverride_AutoExposureMethod ^ param_1->bOverride_AutoExposureMethod) & 1) == 0)
    goto LAB_14e2f8345;
LAB_14e2f8359:
    if ((param_1->AutoExposureMethod).Value == (param_2->AutoExposureMethod).Value)
    goto LAB_14e2f8363;
LAB_14e2f8370:
    bVar3 = param_1->field_0x8;
    if (param_1->bOverride_CameraISO != param_2->bOverride_CameraISO) goto LAB_14e2f83aa;
  }
  bVar1 = param_1->field_0x8;
  bVar3 = (char)((uint)*(undefined4 *)this >> 4) << 7 | bVar1 & 0x7f;
  param_1->bOverride_CameraISO = ((undefined4 *)this)->bOverride_CameraISO;
LAB_14e2f83aa:
  if ((((((((((param_2 == (FDatasmithPostProcessSettingsTemplate *)0x0) ||
             (param_2->CameraISO == param_1->CameraISO)) &&
            (param_1->CameraISO = this->CameraISO,
            param_2 == (FDatasmithPostProcessSettingsTemplate *)0x0)) ||
           ((((uint)(bVar3 >> 1) ^ *(uint *)param_2) & 0x20) == 0)) &&
          (param_1->field_0x8 = ((char)(*(uint *)this >> 5) << 6 ^ bVar3) & 0x40 ^ bVar3,
          param_2 == (FDatasmithPostProcessSettingsTemplate *)0x0)) ||
         (param_2->CameraShutterSpeed == param_1->CameraShutterSpeed)) &&
        (param_1->CameraShutterSpeed = this->CameraShutterSpeed,
        param_2 == (FDatasmithPostProcessSettingsTemplate *)0x0)) ||
       (((param_1->bOverride_DepthOfFieldFstop ^ param_2->bOverride_DepthOfFieldFstop) & 1) == 0))
      && (param_1->field_0x1a =
               param_1->field_0x1a ^ (this->field_0x4 << 4 ^ param_1->field_0x1a) & 0x10,
         param_2 == (FDatasmithPostProcessSettingsTemplate *)0x0)) ||
     (param_2->DepthOfFieldFstop == param_1->DepthOfFieldFstop)) {
    param_1->DepthOfFieldFstop = this->DepthOfFieldFstop;
  }
  return;
}

// Equals @ 14e2f9130

bool __thiscall
FDatasmithPostProcessSettingsTemplate::Equals
          (FDatasmithPostProcessSettingsTemplate *this,
          FDatasmithPostProcessSettingsTemplate *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)this;
  if (((((undefined4 *)param_1)->bOverride_WhiteTemp ^ ((undefined4 *)this)->bOverride_WhiteTemp) &
      1) == 0) {
    if (((((float)((uint)(this->WhiteTemp - param_1->WhiteTemp) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
         (((uVar2 ^ uVar1) & 4) == 0)) &&
        ((float)((uint)(this->VignetteIntensity - param_1->VignetteIntensity) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
       (((uVar2 ^ uVar1) & 2) == 0)) {
      dVar3 = (this->ColorSaturation).field0_0x0._s_0.X -
              (param_1->ColorSaturation).field0_0x0._s_0.X;
      if (((((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             __real_3f1a36e2e0000000) &&
           (dVar3 = (this->ColorSaturation).field0_0x0._s_0.Y -
                    (param_1->ColorSaturation).field0_0x0._s_0.Y,
           (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3f1a36e2e0000000)) &&
          ((dVar3 = (this->ColorSaturation).field0_0x0._s_0.Z -
                    (param_1->ColorSaturation).field0_0x0._s_0.Z,
           (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3f1a36e2e0000000 &&
           ((dVar3 = (this->ColorSaturation).field0_0x0._s_0.W -
                     (param_1->ColorSaturation).field0_0x0._s_0.W,
            (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000 && (((uVar2 ^ uVar1) & 8) == 0)))))) &&
         (((this->AutoExposureMethod).Value == (param_1->AutoExposureMethod).Value &&
          (((((((uVar2 ^ uVar1) & 0x10) == 0 &&
              ((float)((uint)(this->CameraISO - param_1->CameraISO) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
             (((uVar2 ^ uVar1) & 0x20) == 0)) &&
            (((float)((uint)(this->CameraShutterSpeed - param_1->CameraShutterSpeed) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77 &&
             (((param_1->bOverride_DepthOfFieldFstop ^ this->bOverride_DepthOfFieldFstop) & 1) == 0)
             ))) && ((float)((uint)(this->DepthOfFieldFstop - param_1->DepthOfFieldFstop) &
                            __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)))))) {
        return true;
      }
    }
  }
  return false;
}

// Load @ 14e2fdf70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FDatasmithPostProcessSettingsTemplate::Load
          (FDatasmithPostProcessSettingsTemplate *this,FPostProcessSettings *param_1)

{
  double dVar1;
  uint uVar2;
  
  uVar2 = (param_1->bOverride_WhiteTemp ^ this->bOverride_WhiteTemp) & 1 ^ *(uint *)this;
  *(uint *)this = uVar2;
  this->WhiteTemp = param_1->WhiteTemp;
  uVar2 = ((byte)param_1->field_0xd ^ uVar2) & 4 ^ uVar2;
  *(uint *)this = uVar2;
  this->VignetteIntensity = param_1->VignetteIntensity;
  uVar2 = (*(byte *)param_1 >> 2 ^ uVar2) & 2 ^ uVar2;
  *(uint *)this = uVar2;
  dVar1 = (param_1->ColorSaturation).field0_0x0._s_0.Y;
  (this->ColorSaturation).field0_0x0._s_0.X = (param_1->ColorSaturation).field0_0x0._s_0.X;
  (this->ColorSaturation).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->ColorSaturation).field0_0x0._s_0.W;
  (this->ColorSaturation).field0_0x0._s_0.Z = (param_1->ColorSaturation).field0_0x0._s_0.Z;
  (this->ColorSaturation).field0_0x0._s_0.W = dVar1;
  uVar2 = ((uint)(byte)param_1->field_0x9 << 3 ^ uVar2) & 8 ^ uVar2;
  *(uint *)this = uVar2;
  (this->AutoExposureMethod).Value = (param_1->AutoExposureMethod).Value;
  uVar2 = (byte)param_1->field_0x8 >> 3 & 0x1ffffff0 | uVar2 & 0xffffffef;
  *(uint *)this = uVar2;
  this->CameraISO = param_1->CameraISO;
  *(uint *)this = ((byte)param_1->field_0x8 >> 1 ^ uVar2) & 0x20 ^ uVar2;
  this->CameraShutterSpeed = param_1->CameraShutterSpeed;
  this->field_0x4 =
       this->field_0x4 ^
       (param_1->bOverride_DepthOfFieldFstop ^ this->bOverride_DepthOfFieldFstop) & 1;
  this->DepthOfFieldFstop = param_1->DepthOfFieldFstop;
  return;
}

