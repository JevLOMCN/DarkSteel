// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 9

// StaticClass @ 14e2ebf10

UClass * __cdecl UDatasmithLightComponentTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithLightComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithLightComponentTemplate,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithLightComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithLightComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.InnerSingleton;
}

// UDatasmithLightComponentTemplate @ 14e2f4d30

UDatasmithLightComponentTemplate * __thiscall
UDatasmithLightComponentTemplate::UDatasmithLightComponentTemplate
          (UDatasmithLightComponentTemplate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithLightComponentTemplate__6B_;
  (this->LightFunctionMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->IESTexture).field0_0x0.DebugPtr = (UTextureLightProfile *)0x0;
  return this;
}

// UDatasmithLightComponentTemplate @ 14e2f4d70

UDatasmithLightComponentTemplate * __thiscall
UDatasmithLightComponentTemplate::UDatasmithLightComponentTemplate
          (UDatasmithLightComponentTemplate *this)

{
  UObject::UObject((UObject *)this);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithLightComponentTemplate__6B_;
  (this->LightFunctionMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->IESTexture).field0_0x0.DebugPtr = (UTextureLightProfile *)0x0;
  return this;
}

// ~UDatasmithLightComponentTemplate @ 14e2f6150

void __thiscall
UDatasmithLightComponentTemplate::~UDatasmithLightComponentTemplate
          (UDatasmithLightComponentTemplate *this)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14e2f9a00

bool __thiscall
UDatasmithLightComponentTemplate::Equals
          (UDatasmithLightComponentTemplate *this,UDatasmithObjectTemplate *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  UClass *pUVar4;
  
  if (param_1 != (UDatasmithObjectTemplate *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_)) && ((((byte)param_1[1]._padding_ ^ this->bVisible) & 1) == 0)) {
      if ((float)((uint)(this->Intensity - *(float *)&param_1[1]._padding_) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
        uVar2 = *(uint *)((longlong)&param_1[1]._padding_ + 4);
        uVar3 = *(undefined4 *)&this->field_0x34;
        if ((((((uVar2 ^ ZPULL(uVar3,0,1)) & 1) == 0) &&
             ((float)((uint)((this->LightColor).field0_0x0._s_0.R -
                            *(float *)((longlong)&param_1[1]._padding_ + 4)) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717)) &&
            (((float)((uint)((this->LightColor).field0_0x0._s_0.G - *(float *)&param_1[1]._padding_)
                     & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717 &&
             (((float)((uint)((this->LightColor).field0_0x0._s_0.B -
                             *(float *)((longlong)&param_1[1]._padding_ + 4)) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717 &&
              ((float)((uint)((this->LightColor).field0_0x0._s_0.A - *(float *)&param_1[1]._padding_
                             ) & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717)))))) &&
           (((this->LightFunctionMaterial).field0_0x0.DebugPtr ==
             *(UMaterialInterface **)&param_1[1].bIsActorTemplate &&
            ((((((uVar2 ^ uVar3) & 2) == 0 &&
               ((float)((uint)(this->Temperature - *(float *)((longlong)&param_1[1]._padding_ + 4))
                       & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
              (((uVar2 ^ uVar3) & 4) == 0)) &&
             ((float)((uint)(this->IESBrightnessScale - *(float *)&param_1[1]._padding_) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)))))) {
          return true;
        }
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14e2fc9b0

UClass * __cdecl UDatasmithLightComponentTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithLightComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithLightComponentTemplate,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithLightComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithLightComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.InnerSingleton;
}

// Load @ 14e2fe130

void __thiscall
UDatasmithLightComponentTemplate::Load(UDatasmithLightComponentTemplate *this,UObject *param_1)

{
  return;
}

// StaticRegisterNativesUDatasmithLightComponentTemplate @ 14e2fed80

void __cdecl
UDatasmithLightComponentTemplate::StaticRegisterNativesUDatasmithLightComponentTemplate(void)

{
  return;
}

// UpdateObject @ 14e2ffc50

UObject * __thiscall
UDatasmithLightComponentTemplate::UpdateObject
          (UDatasmithLightComponentTemplate *this,UObject *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_ULightComponent_NoRegister();
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

