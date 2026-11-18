// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 9

// StaticClass @ 14acb3060

UClass * __cdecl UEasyParticleComponent_ScalarParam_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_ScalarParam_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_ScalarParam_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_ScalarParam_Runtime.InnerSingleton
               ,StaticRegisterNativesUEasyParticleComponent_ScalarParam_Runtime,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_ScalarParam_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_ScalarParam_Runtime>,local_res8
               ,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_ScalarParam_Runtime.InnerSingleton;
}

// UEasyParticleComponent_ScalarParam_Runtime @ 14acb72e0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_ScalarParam_Runtime * __thiscall
UEasyParticleComponent_ScalarParam_Runtime::UEasyParticleComponent_ScalarParam_Runtime
          (UEasyParticleComponent_ScalarParam_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_ScalarParam_Runtime__6B_;
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// ~UEasyParticleComponent_ScalarParam_Runtime @ 14acb7d40

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_ScalarParam_Runtime::~UEasyParticleComponent_ScalarParam_Runtime
          (UEasyParticleComponent_ScalarParam_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_ScalarParam_Runtime__6B_;
  UEasyParticleComponentRuntime::~UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this);
  return;
}

// GetPrivateStaticClass @ 14acbaa20

UClass * __cdecl UEasyParticleComponent_ScalarParam_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_ScalarParam_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_ScalarParam_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_ScalarParam_Runtime.InnerSingleton
               ,StaticRegisterNativesUEasyParticleComponent_ScalarParam_Runtime,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_ScalarParam_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_ScalarParam_Runtime>,local_res8
               ,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_ScalarParam_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_ScalarParam_Runtime @ 14acbd690

void __cdecl
UEasyParticleComponent_ScalarParam_Runtime::
StaticRegisterNativesUEasyParticleComponent_ScalarParam_Runtime(void)

{
  return;
}

// UEasyParticleComponent_ScalarParam_Runtime @ 14acc18e0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_ScalarParam_Runtime * __thiscall
UEasyParticleComponent_ScalarParam_Runtime::UEasyParticleComponent_ScalarParam_Runtime
          (UEasyParticleComponent_ScalarParam_Runtime *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_ScalarParam_Runtime__6B_;
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// Init_Implementation @ 14acc5c70

void __thiscall
UEasyParticleComponent_ScalarParam_Runtime::Init_Implementation
          (UEasyParticleComponent_ScalarParam_Runtime *this,FGeometry *param_1)

{
  int iVar1;
  UEasyParticleEmitterAsset *this_00;
  UMaterialInterface *pUVar2;
  UClass *pUVar3;
  UEasyParticleComponent_Basic *pUVar4;
  UObject *pUVar5;
  UMaterialInstanceDynamic *pUVar6;
  longlong lVar7;
  
  lVar7 = this->_padding_;
  if (lVar7 == 0) {
LAB_14acc5ca9:
    lVar7 = 0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UEasyParticleComponent_ScalarParam_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_14acc5ca9;
  }
  if (this->_padding_ == 0) {
    return;
  }
  if (lVar7 == 0) {
    return;
  }
  this_00 = *(UEasyParticleEmitterAsset **)(this->_padding_ + 0x38);
  if (this_00 == (UEasyParticleEmitterAsset *)0x0) {
    return;
  }
  pUVar4 = UEasyParticleEmitterAsset::GetBasicComponent(this_00);
  if (pUVar4 == (UEasyParticleComponent_Basic *)0x0) {
    return;
  }
  pUVar5 = UEasyParticleState::GetBrushObject((UEasyParticleState *)this->_padding_);
  if (pUVar5 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return;
    }
  }
  pUVar2 = (UMaterialInterface *)pUVar4->ResourceObject;
  if (pUVar2 != (UMaterialInterface *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pUVar6 = UMaterialInstanceDynamic::Create(pUVar2,(UObject *)0x0,(FName)0x0);
      goto LAB_14acc5d62;
    }
  }
  pUVar6 = (UMaterialInstanceDynamic *)pUVar4->ResourceObject;
LAB_14acc5d62:
  UEasyParticleState::SetBrush((UEasyParticleState *)this->_padding_,(UObject *)pUVar6);
  return;
}

// Reset_Implementation @ 14acc8ab0

void __thiscall
UEasyParticleComponent_ScalarParam_Runtime::Reset_Implementation
          (UEasyParticleComponent_ScalarParam_Runtime *this)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

// Tick_Implementation @ 14acca3e0

void __thiscall
UEasyParticleComponent_ScalarParam_Runtime::Tick_Implementation
          (UEasyParticleComponent_ScalarParam_Runtime *this,FGeometry *param_1,float param_2)

{
  int iVar1;
  UEasyParticleState *this_00;
  UClass *pUVar2;
  UMaterialInstanceDynamic *this_01;
  FUIParticleFactorParam *pFVar3;
  FName *pFVar4;
  longlong lVar5;
  float fVar6;
  FName local_res8;
  FUIParticleFactorParam local_38;
  
  lVar5 = this->_padding_;
  if (lVar5 != 0) {
    pUVar2 = Z_Construct_UClass_UEasyParticleComponent_ScalarParam_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14acca420;
  }
  lVar5 = 0;
LAB_14acca420:
  this_00 = (UEasyParticleState *)this->_padding_;
  if (((this_00 != (UEasyParticleState *)0x0) && (lVar5 != 0)) &&
     (this_01 = (UMaterialInstanceDynamic *)UEasyParticleState::GetBrushObject(this_00),
     this_01 != (UMaterialInstanceDynamic *)0x0)) {
    pUVar2 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) && (*(longlong *)(lVar5 + 0x50) != 0)) {
      pFVar3 = FUIParticleFactorParam::FUIParticleFactorParam
                         (&local_38,&this->Factor,(UEasyParticleState *)this->_padding_);
      fVar6 = FEasyParticlePropertyFloat::GetValue_Float
                        ((FEasyParticlePropertyFloat *)(lVar5 + 0x58),pFVar3);
      UMaterialInstanceDynamic::SetScalarParameterValue(this_01,*(FName *)(lVar5 + 0x50),fVar6);
      fVar6 = (this_00->CurrentState).Lifetime;
      pFVar4 = ::FName::FName(&local_res8,"LifeSpan");
      UMaterialInstanceDynamic::SetScalarParameterValue(this_01,*pFVar4,fVar6);
    }
  }
  return;
}

