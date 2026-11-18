// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 9

// StaticClass @ 14e2ea3d0

UClass * __cdecl UDatasmithCineCameraComponentTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithCineCameraComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithCineCameraComponentTemplate,0x90,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithCineCameraComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithCineCameraComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate.InnerSingleton;
}

// UDatasmithCineCameraComponentTemplate @ 14e2f4750

UDatasmithCineCameraComponentTemplate * __thiscall
UDatasmithCineCameraComponentTemplate::UDatasmithCineCameraComponentTemplate
          (UDatasmithCineCameraComponentTemplate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithCineCameraComponentTemplate__6B_;
  (this->FilmbackSettings).SensorWidth = 0.0;
  (this->FilmbackSettings).SensorHeight = 0.0;
  (this->LensSettings).MaxFStop = 0.0;
  (this->FocusSettings).FocusMethod = DoNotOverride;
  *(undefined8 *)&(this->FocusSettings).ManualFocusDistance = 0;
  this->CurrentAperture = 0.0;
  FDatasmithPostProcessSettingsTemplate::FDatasmithPostProcessSettingsTemplate
            (&this->PostProcessSettings);
  return this;
}

// UDatasmithCineCameraComponentTemplate @ 14e2f47a0

UDatasmithCineCameraComponentTemplate * __thiscall
UDatasmithCineCameraComponentTemplate::UDatasmithCineCameraComponentTemplate
          (UDatasmithCineCameraComponentTemplate *this)

{
  UObject::UObject((UObject *)this);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithCineCameraComponentTemplate__6B_;
  (this->FilmbackSettings).SensorWidth = 0.0;
  (this->FilmbackSettings).SensorHeight = 0.0;
  (this->LensSettings).MaxFStop = 0.0;
  (this->FocusSettings).FocusMethod = DoNotOverride;
  *(undefined8 *)&(this->FocusSettings).ManualFocusDistance = 0;
  this->CurrentAperture = 0.0;
  FDatasmithPostProcessSettingsTemplate::FDatasmithPostProcessSettingsTemplate
            (&this->PostProcessSettings);
  return this;
}

// ~UDatasmithCineCameraComponentTemplate @ 14e2f5ee0

void __thiscall
UDatasmithCineCameraComponentTemplate::~UDatasmithCineCameraComponentTemplate
          (UDatasmithCineCameraComponentTemplate *this)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14e2f9800

bool __thiscall
UDatasmithCineCameraComponentTemplate::Equals
          (UDatasmithCineCameraComponentTemplate *this,UDatasmithObjectTemplate *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UDatasmithObjectTemplate *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if ((((float)((uint)(this->CurrentFocalLength -
                          *(float *)((longlong)&param_1[1]._padding_ + 4)) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
          ((((float)((uint)(this->CurrentAperture - *(float *)&param_1[1]._padding_) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77 &&
            ((float)((uint)((this->FilmbackSettings).SensorWidth - *(float *)&param_1[1]._padding_)
                    & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
           ((float)((uint)((this->FilmbackSettings).SensorHeight -
                          *(float *)((longlong)&param_1[1]._padding_ + 4)) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)))) &&
         ((((float)((uint)((this->LensSettings).MaxFStop - *(float *)&param_1[1]._padding_) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77 &&
           ((this->FocusSettings).FocusMethod ==
            *(ECameraFocusMethod *)((longlong)&param_1[1]._padding_ + 4))) &&
          ((float)((uint)((this->FocusSettings).ManualFocusDistance -
                         *(float *)&param_1[1]._padding_) & __xmm_7fffffff7fffffff7fffffff7fffffff)
           <= __real_322bcc77)))) {
        bVar2 = FDatasmithPostProcessSettingsTemplate::Equals
                          (&this->PostProcessSettings,
                           (FDatasmithPostProcessSettingsTemplate *)&param_1[1]._padding_);
        if (bVar2) {
          return true;
        }
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14e2fc180

UClass * __cdecl UDatasmithCineCameraComponentTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithCineCameraComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithCineCameraComponentTemplate,0x90,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithCineCameraComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithCineCameraComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate.InnerSingleton;
}

// Load @ 14e2fe100

void __thiscall
UDatasmithCineCameraComponentTemplate::Load
          (UDatasmithCineCameraComponentTemplate *this,UObject *param_1)

{
  return;
}

// StaticRegisterNativesUDatasmithCineCameraComponentTemplate @ 14e2feca0

void __cdecl
UDatasmithCineCameraComponentTemplate::StaticRegisterNativesUDatasmithCineCameraComponentTemplate
          (void)

{
  return;
}

// UpdateObject @ 14e2ffb30

UObject * __thiscall
UDatasmithCineCameraComponentTemplate::UpdateObject
          (UDatasmithCineCameraComponentTemplate *this,UObject *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}

