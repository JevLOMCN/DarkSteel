// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1472eeae0

UScriptStruct * __cdecl FMaterialInstanceBasePropertyOverrides::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialInstanceBasePropertyOverrides.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialInstanceBasePropertyOverrides.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides,
                         (UObject *)pUVar1,L"MaterialInstanceBasePropertyOverrides");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialInstanceBasePropertyOverrides.OuterSingleton;
}

// FMaterialInstanceBasePropertyOverrides @ 147f648c0

FMaterialInstanceBasePropertyOverrides * __thiscall
FMaterialInstanceBasePropertyOverrides::FMaterialInstanceBasePropertyOverrides
          (FMaterialInstanceBasePropertyOverrides *this)

{
  *(undefined4 *)this = 0;
  (this->ShadingModel).Value = '\x01';
  this->OpacityMaskClipValue = 0.333333;
  (this->DisplacementScaling).Magnitude = 4.0;
  (this->DisplacementScaling).Center = 0.5;
  (this->DisplacementFadeRange).StartSizePixels = 4.0;
  *(undefined8 *)&(this->DisplacementFadeRange).EndSizePixels = 0x3f800000;
  return this;
}

// operator== @ 147f6a7b0

bool __thiscall
FMaterialInstanceBasePropertyOverrides::operator==
          (FMaterialInstanceBasePropertyOverrides *this,
          FMaterialInstanceBasePropertyOverrides *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)this;
  uVar2 = *(undefined1 *)param_1;
  if ((((((((undefined1 *)this)->bOverride_OpacityMaskClipValue ^
          ((undefined1 *)param_1)->bOverride_OpacityMaskClipValue) & 1) == 0) &&
       (((uVar2 ^ uVar1) & 2) == 0)) && (((uVar2 ^ uVar1) & 4) == 0)) &&
     (((((uVar2 ^ uVar1) & 8) == 0 && (((uVar2 ^ uVar1) & 0x10) == 0)) &&
      ((((uVar2 ^ uVar1) & 0x20) == 0 &&
       ((((uVar2 ^ uVar1) & 0x40) == 0 && (-1 < (char)(uVar2 ^ uVar1))))))))) {
    uVar1 = param_1->field_0x1;
    uVar2 = this->field_0x1;
    if (((((this->bOverride_bHasPixelAnimation ^ param_1->bOverride_bHasPixelAnimation) & 1) == 0)
        && ((((((uVar1 ^ uVar2) & 2) == 0 && (((uVar1 ^ uVar2) & 4) == 0)) &&
             (((uVar1 ^ uVar2) & 8) == 0)) &&
            ((((uVar1 ^ uVar2) & 0x10) == 0 && (((uVar1 ^ uVar2) & 0x20) == 0)))))) &&
       ((((((uVar1 ^ uVar2) & 0x40) == 0 &&
          ((param_1->OpacityMaskClipValue == this->OpacityMaskClipValue &&
           ((this->BlendMode).Value == (param_1->BlendMode).Value)))) &&
         (-1 < (char)(uVar1 ^ uVar2))) &&
        ((this->ShadingModel).Value == (param_1->ShadingModel).Value)))) {
      uVar1 = this->field_0x2;
      uVar2 = param_1->field_0x2;
      if (((((((this->bIsThinSurface ^ param_1->bIsThinSurface) & 1) == 0) &&
            (((uVar2 ^ uVar1) & 2) == 0)) && (((uVar2 ^ uVar1) & 4) == 0)) &&
          ((((uVar2 ^ uVar1) & 8) == 0 && (((uVar2 ^ uVar1) & 0x10) == 0)))) &&
         (((uVar2 ^ uVar1) & 0x20) == 0)) {
        if (((((float)((uint)((this->DisplacementScaling).Magnitude -
                             (param_1->DisplacementScaling).Magnitude) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
             ((float)((uint)((this->DisplacementScaling).Center -
                            (param_1->DisplacementScaling).Center) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
            ((((uVar2 ^ uVar1) & 0x40) == 0 &&
             ((((float)((uint)((this->DisplacementFadeRange).StartSizePixels -
                              (param_1->DisplacementFadeRange).StartSizePixels) &
                       __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77 &&
               ((float)((uint)((this->DisplacementFadeRange).EndSizePixels -
                              (param_1->DisplacementFadeRange).EndSizePixels) &
                       __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
              (-1 < (char)(uVar2 ^ uVar1))))))) &&
           (param_1->MaxWorldPositionOffsetDisplacement == this->MaxWorldPositionOffsetDisplacement)
           ) {
          return true;
        }
      }
    }
  }
  return false;
}

// operator!= @ 147f6aad0

bool __thiscall
FMaterialInstanceBasePropertyOverrides::operator!=
          (FMaterialInstanceBasePropertyOverrides *this,
          FMaterialInstanceBasePropertyOverrides *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

