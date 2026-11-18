// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraUIRenderer
// Functions: 15

// StaticClass @ 14d28df60

UClass * __cdecl UNiagaraUIComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraUIComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraUIRenderer",L"NiagaraUIComponent",
               &Z_Registration_Info_UClass_UNiagaraUIComponent.InnerSingleton,
               StaticRegisterNativesUNiagaraUIComponent,0x810,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraUIComponent>,
               InternalVTableHelperCtorCaller<UNiagaraUIComponent>,local_res8,
               UNiagaraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraUIComponent.InnerSingleton;
}

// UNiagaraUIComponent @ 14d2928f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraUIComponent * __thiscall
UNiagaraUIComponent::UNiagaraUIComponent(UNiagaraUIComponent *this,FVTableHelper *param_1)

{
  UNiagaraComponent::UNiagaraComponent((UNiagaraComponent *)this,param_1);
  this->AutoActivateParticle = false;
  this->HasSetTransform = false;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// UNiagaraUIComponent @ 14d292960

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraUIComponent * __thiscall
UNiagaraUIComponent::UNiagaraUIComponent(UNiagaraUIComponent *this,FObjectInitializer *param_1)

{
  UNiagaraComponent::UNiagaraComponent((UNiagaraComponent *)this,param_1);
  this->AutoActivateParticle = false;
  this->HasSetTransform = false;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// ~UNiagaraUIComponent @ 14d292d60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraUIComponent::~UNiagaraUIComponent(UNiagaraUIComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UNiagaraComponent::~UNiagaraComponent((UNiagaraComponent *)this);
  return;
}

// operator() @ 14d292ec0

void __thiscall
`UNiagaraUIComponent::AddRibbonRendererData'::__l2::<lambda_7>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *pFVar2;
  undefined8 *puVar3;
  FNiagaraDataSetReaderFloat<FLinearColor> *pFVar4;
  float *pfVar5;
  FNiagaraDataSetReaderFloat<float> *pFVar6;
  double *pdVar7;
  FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> *this_00;
  code *pcVar8;
  TVector2<float>_u_0 TVar9;
  TVector2<float>_u_0 TVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  uint uVar17;
  TVector2<float>_u_0 TVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  undefined4 uVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  FColor_u_0 local_res18;
  float fStack_344;
  float local_340;
  float fStack_33c;
  int local_338;
  undefined4 local_330;
  float local_320;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  int local_2f4;
  float local_2f0 [2];
  longlong local_2e8;
  undefined1 local_2e0 [12];
  undefined1 local_2d4 [12];
  undefined1 local_2c8 [12];
  float local_2bc;
  undefined4 uStack_2b8;
  float local_2b4;
  undefined4 uStack_2b0;
  float local_2ac;
  float fStack_2a8;
  float local_2a4;
  float fStack_2a0;
  float local_29c;
  undefined4 uStack_298;
  float local_294;
  undefined4 uStack_290;
  FSlateVertex *local_288;
  longlong local_280;
  longlong local_278;
  ulonglong local_270;
  longlong local_268;
  TVector2<float>_u_0 local_260;
  undefined4 local_258;
  uint uStack_254;
  float local_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float local_240;
  uint uStack_23c;
  FLinearColor_u_0 local_238;
  FLinearColor_u_0 local_228;
  undefined8 local_218;
  undefined8 local_210;
  FLinearColor_u_0 local_208;
  FLinearColor_u_0 local_1f8;
  FNiagaraPosition local_1e8;
  uint *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  TVector4<float>_u_0 local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  FSlateBrush local_188;
  
  iVar1 = param_1->ArrayNum;
  if (1 < iVar1) {
    local_2f4 = iVar1;
    FSlateBrush::FSlateBrush(&local_188);
    SNiagaraUISystemWidget::AddRenderData
              ((SNiagaraUISystemWidget *)**(undefined8 **)((longlong)this + 8),&local_288,&local_1d8
               ,*(UMaterialInterface **)(**(longlong **)this + 0xa0),iVar1 * 2,iVar1 * 6 + -6);
    if ((param_1->ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar22 = *(int *)(param_1->AllocatorInstance).Data;
    pFVar2 = (FNiagaraDataSetReaderFloat<FNiagaraPosition> *)
             **(undefined8 **)((longlong)this + 0x10);
    if ((pFVar2->bIsValid == false) || (pFVar2->NumInstances <= iVar22)) {
      uVar32 = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar34 = (undefined4)
               ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_2e0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_2e0._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get(pFVar2,(FNiagaraPosition *)local_2e0,iVar22)
      ;
      uVar32 = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar34 = (undefined4)
               ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    }
    uVar16 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fVar38 = 0.0;
    local_320 = (float)local_2e0._0_8_;
    fVar23 = local_320;
    fVar39 = 0.0;
    fStack_344 = (float)(local_2e0._8_4_ ^ __xmm_80000000800000008000000080000000);
    fVar37 = **(float **)((longlong)this + 0x18);
    fVar36 = fVar37 * fStack_344;
    if (**(char **)((longlong)this + 0x20) == '\0') {
      fVar35 = local_320 * fVar37 + **(float **)((longlong)this + 0x38);
      fVar36 = fVar36 + (*(float **)((longlong)this + 0x38))[1];
    }
    else {
      fVar30 = (float)**(double **)((longlong)this + 0x28) * local_320 * fVar37;
      fVar36 = (float)(*(double **)((longlong)this + 0x28))[2] * fVar36;
      FMath::SinCos<float>
                (&local_30c,&local_310,
                 *(float *)(*(longlong *)((longlong)this + 0x30) + 0x804) * __real_bc8efa35);
      fVar35 = (local_310 * fVar30 - local_30c * fVar36) + **(float **)((longlong)this + 0x38) +
               (float)**(double **)((longlong)this + 0x40) * fVar37;
      fVar36 = (local_30c * fVar30 - (float)(*(double **)((longlong)this + 0x40))[2] * fVar37) +
               local_310 * fVar36 + (*(float **)((longlong)this + 0x38))[1];
    }
    uVar31 = __xmm_80000000800000008000000080000000;
    uVar21 = 1;
    if (param_1->ArrayNum < 2) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar32 = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar34 = (undefined4)
               ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      uVar16 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
    iVar20 = *(int *)((param_1->AllocatorInstance).Data + 4);
    pFVar2 = (FNiagaraDataSetReaderFloat<FNiagaraPosition> *)
             **(undefined8 **)((longlong)this + 0x10);
    if ((pFVar2->bIsValid == false) || (pFVar2->NumInstances <= iVar20)) {
      local_2d4._4_4_ = uVar34;
      local_2d4._0_4_ = uVar32;
      local_2d4._8_4_ = uVar16;
    }
    else {
      FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get(pFVar2,(FNiagaraPosition *)local_2d4,iVar20)
      ;
    }
    fVar25 = __real_3f800000;
    local_320 = (float)local_2d4._0_8_;
    puVar3 = *(undefined8 **)((longlong)this + 0x48);
    fVar23 = local_320 - fVar23;
    fVar30 = (float)(local_2d4._8_4_ ^ uVar31);
    fStack_344 = fVar30 - fStack_344;
    pFVar4 = (FNiagaraDataSetReaderFloat<FLinearColor> *)*puVar3;
    fVar37 = SQRT(fVar23 * fVar23 + fStack_344 * fStack_344);
    fVar24 = __real_3f800000 / fVar37;
    fVar23 = fVar23 * fVar24;
    fStack_344 = fStack_344 * fVar24;
    if ((pFVar4->bIsValid == false) || (pFVar4->NumInstances <= iVar22)) {
      local_208._s_0.R = (float)FLinearColor::White.field0_0x0._0_4_;
      local_238 = FLinearColor::White.field0_0x0;
    }
    else {
      FNiagaraDataSetReaderFloat<FLinearColor>::Get(pFVar4,(FLinearColor *)&local_238._s_0,iVar22);
      local_208._s_0.R = local_238._s_0.R;
    }
    pfVar5 = (float *)puVar3[1];
    local_208._s_0.A = local_238._s_0.A * pfVar5[3];
    local_208._s_0.B = local_238._s_0.B * pfVar5[2];
    local_208._s_0.G = local_238._s_0.G * pfVar5[1];
    local_208._s_0.R = local_208._s_0.R * *pfVar5;
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_208._s_0);
    pFVar6 = (FNiagaraDataSetReaderFloat<float> *)**(undefined8 **)((longlong)this + 0x50);
    if ((pFVar6->bIsValid != false) && (iVar22 < pFVar6->NumInstances)) {
      fVar25 = FNiagaraDataSetReaderFloat<float>::Get(pFVar6,iVar22);
    }
    fVar25 = fVar25 * **(float **)((longlong)this + 0x18);
    FMath::SinCos<float>(local_2f0,&local_308,__real_3fc90fdb);
    uVar31 = __xmm_80000000800000008000000080000000;
    local_270 = 2;
    local_338 = 1;
    local_280 = 0x58;
    local_2e8 = 2;
    local_278 = 8;
    local_268 = 0x84;
    fVar26 = (local_308 * fVar23 - fStack_344 * local_2f0[0]) * fVar25 * __real_3f000000;
    fVar25 = (fStack_344 * local_308 + local_2f0[0] * fVar23) * fVar25 * __real_3f000000;
    local_1d0 = CONCAT44(fVar25,fVar26);
    fVar27 = (float)((uint)fVar25 ^ __xmm_80000000800000008000000080000000);
    fVar24 = (float)((uint)fVar26 ^ __xmm_80000000800000008000000080000000);
    local_1c8 = CONCAT44(fVar27,fVar24);
    TVar9._s_0.Y = fVar25 + fVar36;
    TVar9._s_0.X = fVar26 + fVar35;
    (local_288->Position).field0_0x0 = TVar9;
    (local_288->Color).field0_0x0 = local_res18;
    local_288->TexCoords[0] = 0.0;
    local_288->TexCoords[1] = 1.0;
    fVar25 = __real_3f800000;
    TVar10._s_0.Y = fVar36 + fVar27;
    TVar10._s_0.X = fVar35 + fVar24;
    local_288[1].Position.field0_0x0 = TVar10;
    local_288[1].Color.field0_0x0 = local_res18;
    local_288[1].TexCoords[0] = 0.0;
    local_288[1].TexCoords[1] = 0.0;
    lVar19 = (longlong)iVar1;
    do {
      lVar11 = local_2e8;
      uVar17 = (uint)local_270;
      if (uVar17 == (uint)lVar19) {
        iVar22 = -1;
        TVar18 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      }
      else {
        uVar13 = 0;
        if ((int)uVar17 < param_1->ArrayNum) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar22 = *(int *)((param_1->AllocatorInstance).Data + lVar11 * 4);
        pFVar2 = (FNiagaraDataSetReaderFloat<FNiagaraPosition> *)
                 **(undefined8 **)((longlong)this + 0x10);
        if ((pFVar2->bIsValid == false) || (pFVar2->NumInstances <= iVar22)) {
          local_2c8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_2c8._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                    (pFVar2,(FNiagaraPosition *)local_2c8,iVar22);
        }
        uStack_254 = local_2c8._8_4_ ^ uVar31;
        local_1e8._0_4_ = SUB84(local_2c8._0_8_,0);
        local_258 = local_1e8._0_4_;
        TVar18._s_0.Y = (float)uStack_254;
        TVar18._s_0.X = (float)local_1e8._0_4_;
        lVar19 = (longlong)iVar1;
        local_1e8._0_8_ = local_2c8._0_8_;
      }
      local_340 = TVar18._s_0.X;
      fStack_33c = TVar18._s_0.Y;
      fVar36 = fVar23;
      fVar35 = fStack_344;
      if (local_2e8 != lVar19) {
        local_250 = local_340 - local_320;
        fStack_24c = fStack_33c - fVar30;
        fVar36 = local_250;
        fVar35 = fStack_24c;
      }
      pFVar6 = (FNiagaraDataSetReaderFloat<float> *)**(undefined8 **)((longlong)this + 0x50);
      fVar26 = SQRT(fVar36 * fVar36 + fVar35 * fVar35);
      fVar24 = fVar25;
      if ((pFVar6->bIsValid != false) && (iVar20 < pFVar6->NumInstances)) {
        fVar24 = FNiagaraDataSetReaderFloat<float>::Get(pFVar6,iVar20);
      }
      puVar3 = *(undefined8 **)((longlong)this + 0x48);
      pFVar4 = (FNiagaraDataSetReaderFloat<FLinearColor> *)*puVar3;
      fVar24 = fVar24 * **(float **)((longlong)this + 0x18);
      if ((pFVar4->bIsValid == false) || (pFVar4->NumInstances <= iVar20)) {
        local_1f8._s_0.R = (float)FLinearColor::White.field0_0x0._0_4_;
        local_228 = FLinearColor::White.field0_0x0;
      }
      else {
        FNiagaraDataSetReaderFloat<FLinearColor>::Get(pFVar4,(FLinearColor *)&local_228._s_0,iVar20)
        ;
        local_1f8._s_0.R = local_228._s_0.R;
      }
      pfVar5 = (float *)puVar3[1];
      local_1f8._s_0.A = local_228._s_0.A * pfVar5[3];
      local_1f8._s_0.B = local_228._s_0.B * pfVar5[2];
      local_1f8._s_0.G = local_228._s_0.G * pfVar5[1];
      local_1f8._s_0.R = local_1f8._s_0.R * *pfVar5;
      FLinearColor::ToFColorSRGB((FLinearColor *)&local_1f8._s_0);
      pfVar5 = *(float **)((longlong)this + 0x18);
      fVar27 = fVar25 / fVar26;
      fVar35 = fVar35 * fVar27;
      fVar36 = fVar36 * fVar27;
      fStack_344 = fVar35 + fStack_344;
      fVar23 = fVar36 + fVar23;
      fVar27 = fStack_344 * fStack_344 + fVar23 * fVar23;
      if (fVar27 <= __real_322bcc77) {
        fVar23 = 0.0;
        fStack_344 = 0.0;
      }
      else {
        fVar27 = __real_3f800000 / SQRT(fVar27);
        fVar23 = fVar23 * fVar27;
        fStack_344 = fStack_344 * fVar27;
      }
      FMath::SinCos<float>(&local_300,&local_304,__real_3fc90fdb);
      fVar27 = *pfVar5;
      fVar28 = (local_304 * fVar23 - local_300 * fStack_344) * fVar24 * __real_3f000000;
      fVar24 = (local_300 * fVar23 + local_304 * fStack_344) * fVar24 * __real_3f000000;
      local_1a8 = CONCAT44(fVar24,fVar28);
      uStack_23c = (uint)fVar24 ^ __xmm_80000000800000008000000080000000;
      fVar23 = (float)((uint)fVar28 ^ __xmm_80000000800000008000000080000000);
      local_1a0 = CONCAT44(uStack_23c,fVar23);
      local_248 = fVar28;
      fStack_244 = fVar24;
      local_240 = fVar23;
      if (**(char **)((longlong)this + 0x20) == '\0') {
        fVar33 = local_320 * fVar27 + **(float **)((longlong)this + 0x38);
        fVar30 = fVar30 * fVar27 + (*(float **)((longlong)this + 0x38))[1];
      }
      else {
        pdVar7 = *(double **)((longlong)this + 0x28);
        FMath::SinCos<float>
                  (&local_2f8,&local_2fc,
                   *(float *)(*(longlong *)((longlong)this + 0x30) + 0x804) * __real_bc8efa35);
        fVar30 = (float)pdVar7[2] * fVar30 * fVar27;
        fVar29 = (float)*pdVar7 * local_320 * fVar27;
        fVar33 = (fVar29 * local_2fc - fVar30 * local_2f8) + **(float **)((longlong)this + 0x38) +
                 (float)**(double **)((longlong)this + 0x40) * fVar27;
        fVar30 = ((*(float **)((longlong)this + 0x38))[1] -
                 (float)(*(double **)((longlong)this + 0x40))[2] * fVar27) +
                 fVar30 * local_2fc + fVar29 * local_2f8;
      }
      iVar20 = (int)uVar21;
      lVar19 = **(longlong **)this;
      if (*(char *)(lVar19 + 200) == '\x02') {
        fVar39 = fVar37 / *(float *)(lVar19 + 0xcc) + fVar39;
      }
      else {
        fVar39 = (float)iVar20 / ((float)iVar1 - fVar25);
      }
      uStack_2b8 = 0x3f800000;
      local_198 = CONCAT44(0x3f800000,fVar39);
      uStack_2b0 = 0;
      local_190 = (ulonglong)(uint)fVar39;
      local_2bc = fVar39;
      local_2b4 = fVar39;
      if (*(char *)(**(longlong **)((longlong)this + 0x58) + 10) == '\0') {
        if (*(char *)(lVar19 + 0xf0) == '\x02') {
          fVar38 = fVar37 / *(float *)(lVar19 + 0xf4) + fVar38;
        }
        else {
          fVar38 = (float)iVar20 / ((float)iVar1 - fVar25);
        }
        uStack_298 = 0x3f800000;
        uVar14 = CONCAT44(0x3f800000,fVar38);
        uStack_290 = 0;
        uVar15 = ZEXT48((uint)fVar38);
        local_29c = fVar38;
        local_294 = fVar38;
      }
      else {
        this_00 = (FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> *)
                  **(undefined8 **)((longlong)this + 0x60);
        if ((this_00->bIsValid == false) || (this_00->NumInstances <= iVar20)) {
          local_1b8._0_8_ = 0;
          local_1b8._8_8_ = 0;
        }
        else {
          FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_>::Get
                    (this_00,(TVector4<float> *)&local_1b8._s_0,iVar20);
        }
        local_2ac = local_1b8._s_0.X;
        fStack_2a8 = local_1b8._s_0.Y;
        local_2a4 = local_1b8._s_0.X;
        fStack_2a0 = local_1b8._s_0.Y;
        uVar14 = local_1b8._0_8_;
        uVar15 = local_1b8._0_8_;
      }
      uVar21 = local_270 & 0xffffffff;
      uVar17 = (int)local_270 + 1;
      local_270 = (ulonglong)uVar17;
      *(ulonglong *)((longlong)local_288->PixelSize + local_280 + -0x10) =
           CONCAT44(fVar24 + fVar30,fVar28 + fVar33);
      *(undefined4 *)((longlong)local_288->PixelSize + local_280 + -8) = local_330;
      *(float *)((longlong)local_288->TexCoords + local_280) = fVar39;
      *(undefined4 *)((longlong)local_288->TexCoords + local_280 + 4) = local_198._4_4_;
      *(int *)((longlong)local_288->TexCoords + local_280 + 8) = (int)uVar14;
      local_218._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
      *(undefined4 *)((longlong)local_288->TexCoords + local_280 + 0xc) = local_218._4_4_;
      lVar19 = (longlong)local_2f4;
      *(ulonglong *)((longlong)local_288->PixelSize + local_268 + -0x10) =
           CONCAT44(fVar30 + local_1a0._4_4_,fVar33 + fVar23);
      local_268 = local_268 + 0x58;
      *(undefined4 *)((longlong)local_288[1].PixelSize + local_280 + -8) = local_330;
      *(float *)((longlong)local_288[1].TexCoords + local_280) = fVar39;
      *(undefined4 *)((longlong)local_288[1].TexCoords + local_280 + 4) = local_190._4_4_;
      local_2e8 = local_2e8 + 1;
      local_210._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
      *(int *)((longlong)local_288[1].TexCoords + local_280 + 8) = (int)uVar15;
      *(undefined4 *)((longlong)local_288[1].TexCoords + local_280 + 0xc) = local_210._4_4_;
      local_280 = local_280 + 0x58;
      *(int *)(local_278 + -8 + (longlong)local_1d8) = local_338 + -1;
      iVar20 = local_338 + 1;
      *(int *)(local_278 + -4 + (longlong)local_1d8) = local_338;
      *(int *)(local_278 + (longlong)local_1d8) = iVar20;
      *(int *)(local_278 + 4 + (longlong)local_1d8) = local_338;
      local_338 = local_338 + 2;
      *(int *)(local_278 + 8 + (longlong)local_1d8) = iVar20;
      *(int *)(local_278 + 0xc + (longlong)local_1d8) = local_338;
      local_278 = local_278 + 0x18;
      uVar31 = __xmm_80000000800000008000000080000000;
      local_320 = local_340;
      fVar23 = fVar36;
      iVar20 = iVar22;
      fVar37 = fVar26;
      fVar30 = fStack_33c;
      local_260 = TVar18;
      local_218 = uVar14;
      local_210 = uVar15;
      fStack_344 = fVar35;
    } while ((int)uVar17 <= local_2f4);
    local_188._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  }
  return;
}

// AddRibbonRendererData @ 14d294820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraUIComponent::AddRibbonRendererData
          (UNiagaraUIComponent *this,SNiagaraUISystemWidget *param_1,
          TSharedRef<FNiagaraEmitterInstance_const_,1> *param_2,
          UNiagaraRibbonRendererProperties *param_3,FNiagaraUIRenderProperties *param_4,
          FNiagaraWidgetProperties *param_5)

{
  FNiagaraEmitterInstance *pFVar1;
  FNiagaraDataSet *pFVar2;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  UNiagaraRibbonRendererProperties *pUVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_GenerateRibbonData> FVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNiagaraTypeDefinition *pFVar19;
  FVersionedNiagaraEmitterData *pFVar20;
  FScriptContainerElement *pFVar21;
  ulonglong uVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  ForAnyElementType FVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  FNameEntryId FVar31;
  FName FVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  int *piVar35;
  ForElementType<unsigned_int> FVar36;
  uint uVar37;
  bool bVar38;
  SNiagaraUISystemWidget *local_res10 [3];
  undefined1 auStackY_428 [32];
  FIdentityFunctor local_3c6;
  FIdentityFunctor local_3c5;
  undefined1 local_3c4 [4];
  int local_3c0;
  uint local_3bc;
  TArray<int,TSizedDefaultAllocator<32>_> local_3b8;
  UNiagaraRibbonRendererProperties *local_3a8;
  undefined1 local_3a0 [4];
  uint local_39c;
  uint local_398;
  uint local_394;
  FColor_u_0 local_390;
  int local_38c;
  uint local_388;
  uint uStack_384;
  TSharedRef<FNiagaraEmitterInstance_const_,1> *local_380;
  undefined1 local_378 [4];
  uint local_374;
  FScriptContainerElement *local_370;
  uint local_368;
  uint uStack_364;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_360;
  undefined4 local_358;
  uint uStack_354;
  uint uStack_350;
  undefined4 uStack_34c;
  FName local_348;
  FScriptContainerElement *local_340;
  int local_338;
  uint local_334;
  FNiagaraDataSetReaderFloat<float> local_330;
  FName local_320;
  FName local_310;
  FNiagaraTypeDefinitionHandle local_308;
  FName local_304;
  FNiagaraTypeDefinitionHandle local_2fc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2f8;
  FIdentityFunctor *local_2d8;
  FIdentityFunctor **local_2d0;
  FNiagaraDataSetReaderFloat<float> *local_2c8;
  undefined1 *local_2c0;
  int *local_2b8;
  int local_2b0;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *local_2a8;
  FNiagaraDataSetReaderFloat<float> *local_2a0;
  FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> *local_298;
  FNiagaraDataSetReaderFloat<float> *local_290;
  FStatMessage local_288;
  longlong *local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_270;
  undefined1 *local_250;
  LARGE_INTEGER local_248;
  longlong *local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_238;
  undefined8 uStack_218;
  FNiagaraDataSetReaderFloat<FLinearColor> *local_210;
  FLinearColor *local_208;
  longlong *local_200;
  longlong lStack_1f8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  int local_1d8;
  undefined4 uStack_1d4;
  UNiagaraRibbonRendererProperties **local_1c8;
  SNiagaraUISystemWidget **local_1c0;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> **local_1b8;
  FNiagaraUIRenderProperties *local_1b0;
  FIdentityFunctor *local_1a8;
  undefined8 *local_1a0;
  UNiagaraUIComponent *local_198;
  TVector2<float> *local_190;
  undefined8 *local_188;
  FNiagaraDataSetReaderFloat<FLinearColor> **local_180;
  FNiagaraDataSetReaderFloat<float> **local_178;
  FNiagaraWidgetProperties **local_170;
  FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> **local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  FName local_128;
  FNiagaraDataSetReaderFloat<float> local_120;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_110;
  FNiagaraDataSetReaderFloat<FLinearColor> local_f0;
  FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> local_c8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_428;
  bVar38 = -1 < CpuChannel->Enabled;
  local_res10[0] = param_1;
  local_3a8 = param_3;
  local_380 = param_2;
  if (bVar38) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId403,"UNiagaraUIComponent::AddRibbonRendererData",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NiagaraUIRenderer\\Source\\NiagaraUIRenderer\\Private\\NiagaraUIComponent.cpp"
               ,0x193);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId403);
  }
  uVar27 = 0;
  FVar18 = StatPtr_STAT_GenerateRibbonData;
  if (StatPtr_STAT_GenerateRibbonData == (FThreadSafeStaticStat<FStat_STAT_GenerateRibbonData>)0x0)
  {
    pFVar17 = ::FName::FName(&local_128,"STAT_GenerateRibbonData");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_GenerateRibbonData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GenerateRibbonData,*pFVar17,
                        L"Generate Ribbon Data","STATGROUP_NiagaraUI","STATCAT_Advanced",
                        L"NiagaraUI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar18;
  bVar5 = false;
  bVar7 = false;
  local_320.ComparisonIndex.Value = 0;
  local_320.Number = 0;
  bVar14 = false;
  bVar8 = false;
  FVar31 = FVar32.ComparisonIndex.Value;
  uVar15 = FVar32.Number;
  if ((FVar31.Value == 0) && (uVar15 == 0)) {
LAB_14d2949df:
    bVar6 = false;
    FVar32 = local_320;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_390.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_390._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar5 = false;
      bVar7 = true;
      bVar14 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_348.ComparisonIndex.Value = FVar31.Value;
        local_348.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_348,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NiagaraUIRenderer\\Source\\NiagaraUIRenderer\\Private\\NiagaraUIComponent.cpp"
                   ,0x194);
        bVar5 = true;
        bVar7 = true;
        bVar14 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d2949df;
    local_388 = FVar31.Value;
    uStack_384 = uVar15;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar6 = true;
    bVar14 = bVar5;
    bVar8 = bVar7;
  }
  local_140 = *(undefined8 *)&this->field_0x148;
  uStack_138 = *(undefined8 *)&this->field_0x150;
  pFVar1 = param_2->Object;
  local_130 = *(undefined8 *)&this->field_0x158;
  local_158 = *(undefined8 *)&this->field_0x178;
  uStack_150 = *(undefined8 *)&this->field_0x180;
  local_148 = *(undefined8 *)&this->field_0x188;
  if ((pFVar1->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParticleDataSet",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                          ,0x3a,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = pFVar1->ParticleDataSet;
  if (pFVar2->CurrentData == (FNiagaraDataBuffer *)0x0) {
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar6) && (FVar32 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_288.NameAndInfo.Index = FVar32.ComparisonIndex.Value;
        local_288.NameAndInfo.Number = FVar32.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_248);
        local_288.StatData.Pad[4] = '\0';
        local_288.StatData.Pad[5] = '\0';
        local_288.StatData.Pad[6] = '\0';
        local_288.StatData.Pad[7] = '\0';
        local_288.StatData.Pad[0] = local_248.s.LowPart._0_1_;
        local_288.StatData.Pad[1] = local_248.s.LowPart._1_1_;
        local_288.StatData.Pad[2] = local_248.s.LowPart._2_1_;
        local_288.StatData.Pad[3] = local_248.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_288);
        piVar35 = &this_00->ScopeCount;
        *piVar35 = *piVar35 + -1;
        if (*piVar35 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    if (bVar38) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    goto LAB_14d295781;
  }
  local_398 = pFVar2->CurrentData->NumInstances;
  if ((int)local_398 < 2) {
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar6) {
      FThreadStats::AddMessage(FVar32,CycleScopeEnd);
    }
    if (bVar38) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    goto LAB_14d295781;
  }
  FNiagaraDataSetAccessorFloat<float>::GetReader
            ((FNiagaraDataSetAccessorFloat<float> *)&local_3a8->RibbonLinkOrderFloatAccessor,
             &local_330,pFVar2);
  pFVar3 = pFVar2->CurrentData;
  bVar13 = false;
  local_378[0] = 0;
  local_374 = 0;
  local_370 = (FScriptContainerElement *)0x0;
  if ((pFVar3 != (FNiagaraDataBuffer *)0x0) &&
     (local_3a8->RibbonLinkOrderInt32Accessor != (FNiagaraDataSetAccessor<int>)0xffffffff)) {
    bVar13 = true;
    local_378[0] = 1;
    local_370 = (pFVar3->Int32Data).AllocatorInstance.Data +
                (int)local_3a8->RibbonLinkOrderInt32Accessor * pFVar3->Int32Stride;
    local_374 = pFVar3->NumInstances;
  }
  if ((local_330.bIsValid != false) || (bVar13)) {
LAB_14d294c2d:
    FNiagaraDataSetAccessorFloat<FNiagaraPosition>::GetReader
              ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)&local_3a8->PositionDataSetAccessor
               ,&local_110,pFVar2);
    pUVar9 = local_3a8;
    pFVar19 = FNiagaraTypeDefinitionHandle::Resolve
                        (&(local_3a8->ColorBinding).ParamMapVariable.TypeDefHandle);
    local_310 = (pUVar9->ColorBinding).DataSetName;
    local_308.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_308,pFVar19);
    FNiagaraDataSetAccessorFloat<FLinearColor>::CreateReader(&local_f0,pFVar2,local_310);
    FNiagaraDataSetAccessorFloat<float>::GetReader
              ((FNiagaraDataSetAccessorFloat<float> *)&local_3a8->SizeDataSetAccessor,&local_120,
               pFVar2);
    pUVar9 = local_3a8;
    pFVar19 = FNiagaraTypeDefinitionHandle::Resolve
                        (&(local_3a8->DynamicMaterialBinding).ParamMapVariable.TypeDefHandle);
    local_304 = (pUVar9->DynamicMaterialBinding).DataSetName;
    local_2fc.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_2fc,pFVar19);
    FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_>::CreateReader
              (&local_c8,pFVar2,local_304);
    pFVar3 = pFVar2->CurrentData;
    local_394 = 0;
    local_39c = 0;
    iVar16 = *(int *)&(local_3a8->RibbonFullIDDataSetAccessor).field_0x8;
    local_340 = (FScriptContainerElement *)0x0;
    if (iVar16 != -1 && pFVar3 != (FNiagaraDataBuffer *)0x0) {
      local_340 = (pFVar3->Int32Data).AllocatorInstance.Data + iVar16 * pFVar3->Int32Stride;
      local_394 = pFVar3->NumInstances;
      local_39c = pFVar3->FloatStride >> 2;
    }
    local_2a8 = &local_110;
    local_210 = &local_f0;
    local_208 = &param_4->Tint;
    local_2a0 = &local_120;
    local_298 = &local_c8;
    pFVar20 = FVersionedNiagaraEmitter::GetEmitterData(&local_380->Object->VersionedEmitter);
    pFVar10 = local_340;
    uVar30 = local_394;
    uVar25 = local_398;
    uVar15 = local_39c;
    local_1b0 = param_4;
    local_3c6 = (FIdentityFunctor)pFVar20->bLocalSpace;
    local_1c8 = &local_3a8;
    local_1c0 = local_res10;
    local_1b8 = &local_2a8;
    local_1a8 = &local_3c6;
    local_1a0 = &local_158;
    local_190 = &param_4->ParentTopLeft;
    local_188 = &local_140;
    local_180 = &local_210;
    local_178 = &local_2a0;
    local_170 = &param_5;
    local_168 = &local_298;
    local_198 = this;
    bVar5 = bVar14;
    bVar7 = bVar8;
    if (iVar16 != -1 && pFVar3 != (FNiagaraDataBuffer *)0x0) {
      local_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0;
      local_98._8_8_ = 0;
      local_78 = (ForElementType<unsigned_int>)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = -1;
      local_64 = 0;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      local_3bc = 0;
      uVar34 = uVar27;
      do {
        iVar16 = (int)uVar34;
        if (((int)uVar30 < iVar16) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("bIsValid && Index <= NumInstances",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                                ,0x235,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_338 = *(int *)(pFVar10 + (longlong)iVar16 * 4);
        local_334 = *(uint *)(pFVar10 + (longlong)(int)(iVar16 + uVar15) * 4);
        uVar29 = local_338 - local_334 ^ local_334 >> 0xd;
        uVar24 = (-0x61c88647 - uVar29) - local_334 ^ uVar29 << 8;
        uVar37 = (local_334 - uVar24) - uVar29 ^ uVar24 >> 0xd;
        uVar29 = (uVar29 - uVar37) - uVar24 ^ uVar37 >> 0xc;
        uVar24 = (uVar24 - uVar29) - uVar37 ^ uVar29 << 0x10;
        uVar37 = (uVar37 - uVar24) - uVar29 ^ uVar24 >> 5;
        uVar29 = (uVar29 - uVar37) - uVar24 ^ uVar37 >> 3;
        uVar24 = (uVar24 - uVar29) - uVar37 ^ uVar29 << 10;
        uVar24 = (uVar37 - uVar24) - uVar29 ^ uVar24 >> 0xf;
        if (local_98._8_4_ != local_64) {
          FVar26.Data = (FScriptContainerElement *)local_60;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FVar26.Data = local_58.Data;
          }
          iVar16 = *(int *)((longlong)FVar26.Data + (ulonglong)(local_50 - 1 & uVar24) * 4);
          while (iVar16 != -1) {
            pFVar21 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar16 * 0x20);
            if ((*(int *)&pFVar21->field_0x0 == local_338) && (*(uint *)(pFVar21 + 4) == local_334))
            {
              if ((iVar16 != -1) && (pFVar21 != (FScriptContainerElement *)0x0)) goto LAB_14d295136;
              break;
            }
            iVar16 = *(int *)(pFVar21 + 0x18);
          }
        }
        local_2b8 = &local_338;
        TSet<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FNiagaraID_&&>_>
                  ((TSet<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)local_98,(uint)&local_38c,(TKeyInitializer<FNiagaraID_&&> *)(ulonglong)uVar24,
                   (bool *)&local_2b8);
        pFVar21 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_38c * 0x20);
LAB_14d295136:
        if (((*(uint **)(pFVar21 + 8) <= &local_3bc) &&
            (&local_3bc < *(uint **)(pFVar21 + 8) + *(int *)(pFVar21 + 0x14))) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar16 = *(int *)(pFVar21 + 0x10);
        if (iVar16 == *(int *)(pFVar21 + 0x14)) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)(pFVar21 + 8),(int *)(pFVar21 + 0x14));
        }
        *(int *)(pFVar21 + 0x10) = iVar16 + 1;
                    /* WARNING: Load size is inaccurate */
        *(uint *)(pFVar21[8] + (longlong)iVar16 * 4) = local_3bc;
        local_3bc = local_3bc + 1;
        uVar34 = (ulonglong)local_3bc;
      } while ((int)local_3bc < (int)uVar25);
      local_2d8 = &local_3c5;
      local_2d0 = &local_2d8;
      if (0 < local_98._8_4_ - local_64) {
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Compact((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98);
        uVar12 = local_98._0_8_;
        iVar16 = local_98._8_4_ - local_64;
        if ((iVar16 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        AlgoImpl::
        IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>_>
                  ((TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)uVar12,iVar16,
                   local_3c5,
                   (FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>
                    *)&local_2d0);
      }
      uVar15 = local_50;
      uVar34 = (ulonglong)local_50;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar15 != 0) {
        uVar25 = uVar15;
        if (uVar15 < 2) {
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            uVar25 = 0;
            goto LAB_14d2952ab;
          }
        }
        else {
LAB_14d2952ab:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar25,4)
          ;
        }
        if (0 < (int)uVar15) {
          uVar33 = uVar27;
          do {
            FVar26.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar26.Data = local_58.Data;
            }
            uVar22 = (longlong)(int)uVar15 - 1U & uVar33;
            uVar33 = uVar33 + 1;
            *(undefined4 *)((longlong)FVar26.Data + uVar22 * 4) = 0xffffffff;
            uVar34 = uVar34 - 1;
          } while (uVar34 != 0);
        }
      }
      if (local_50 != 0) {
        uStack_364 = 1;
        local_368 = 0;
        pTStack_360 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        uStack_354 = 0;
        uStack_350 = 0;
        if (local_70 != 0) {
          FVar36 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar36 = local_78;
          }
          uVar15 = *(uint *)FVar36;
          uVar34 = uVar27;
          while (uVar15 == 0) {
            uStack_350 = (int)uVar34 + 0x20;
            uVar34 = (ulonglong)uStack_350;
            iVar16 = (int)uVar27;
            local_368 = iVar16 + 1;
            uVar27 = (ulonglong)local_368;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_368)
            goto LAB_14d2953ba;
            uVar15 = ((uint *)((longlong)FVar36 + 4))[iVar16];
          }
          uStack_364 = -uVar15 & uVar15;
          uVar27 = (ulonglong)uStack_364 * 2 + 1;
          lVar28 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          local_2b0 = (int)lVar28;
          uStack_354 = (uStack_350 - 1) + local_2b0;
          uVar27 = (ulonglong)uStack_354;
          if ((int)local_70 < (int)uStack_354) {
LAB_14d2953ba:
            uVar27 = (ulonglong)local_70;
            uStack_354 = local_70;
          }
        }
        local_358 = 0xffffffff;
        local_278 = (longlong *)local_98;
        local_270._padding_ = CONCAT44(uStack_364,local_368);
        local_270.CurrentBitIndex = uStack_354;
        local_270.UnvisitedBitMask = 0xffffffff;
        local_270._28_4_ = uStack_34c;
        local_270.BaseBitIndex = uStack_350;
        local_270.Array = pTStack_360;
        if ((int)uVar27 < (int)local_70) {
          do {
            piVar35 = (int *)((longlong)(int)uVar27 * 0x20 + *local_278);
            uVar15 = piVar35[1];
            uVar30 = *piVar35 - uVar15 ^ uVar15 >> 0xd;
            uVar25 = (-0x61c88647 - uVar30) - uVar15 ^ uVar30 << 8;
            uVar24 = (uVar15 - uVar25) - uVar30 ^ uVar25 >> 0xd;
            uVar30 = (uVar30 - uVar24) - uVar25 ^ uVar24 >> 0xc;
            uVar15 = (uVar25 - uVar30) - uVar24 ^ uVar30 << 0x10;
            uVar24 = (uVar24 - uVar15) - uVar30 ^ uVar15 >> 5;
            uVar25 = (uVar30 - uVar24) - uVar15 ^ uVar24 >> 3;
            uVar15 = (uVar15 - uVar25) - uVar24 ^ uVar25 << 10;
            uVar15 = ((uVar24 - uVar15) - uVar25 ^ uVar15 >> 0xf) & local_50 - 1;
            piVar35[7] = uVar15;
            FVar26.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar26.Data = local_58.Data;
            }
            uVar34 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar15;
            piVar35[6] = *(int *)((longlong)FVar26.Data + uVar34 * 4);
            *(int *)((longlong)FVar26.Data + uVar34 * 4) = (int)uVar27;
            local_270.UnvisitedBitMask = local_270.UnvisitedBitMask & ~local_270._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_270);
            uVar27 = (ulonglong)(uint)local_270.CurrentBitIndex;
          } while (local_270.CurrentBitIndex < (local_270.Array)->NumBits);
        }
      }
      local_2f8._padding_._0_4_ = 0;
      local_2f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      local_2f8._padding_._4_4_ = 1;
      local_2f8.UnvisitedBitMask = 0xffffffff;
      local_2f8.CurrentBitIndex = 0;
      local_2f8.BaseBitIndex = 0;
      if (local_70 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2f8);
      }
      uVar25 = local_70;
      TStack_238._padding_ = CONCAT44(local_2f8._padding_._4_4_,(undefined4)local_2f8._padding_);
      local_240 = (longlong *)local_98;
      TStack_238.CurrentBitIndex = local_2f8.CurrentBitIndex;
      TStack_238.UnvisitedBitMask = local_2f8.UnvisitedBitMask;
      TStack_238._28_4_ = local_2f8._28_4_;
      TStack_238.BaseBitIndex = local_2f8.BaseBitIndex;
      local_1d8 = local_98._8_4_ - local_64;
      uVar15 = local_70 & 0xffffffe0;
      pTStack_1f0 = local_2f8.Array;
      iVar16 = (int)local_70 >> 5;
      bVar23 = (byte)local_70;
      uStack_218 = CONCAT44(uStack_1d4,local_1d8);
      TStack_238.Array = local_2f8.Array;
      local_200 = local_240;
      lStack_1f8 = TStack_238._padding_;
      uStack_1e8 = TStack_238._16_8_;
      uStack_1e0 = TStack_238._24_8_;
      if (((int)local_70 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar25 != local_70) {
        FVar36 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar36 = local_78;
        }
        uVar25 = -1 << (bVar23 & 0x1f) & *(uint *)((longlong)FVar36 + (longlong)iVar16 * 4);
        while (uVar25 == 0) {
          lVar28 = (longlong)iVar16;
          uVar15 = uVar15 + 0x20;
          iVar16 = iVar16 + 1;
          uVar25 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_14d295641;
          uVar25 = ((uint *)((longlong)FVar36 + 4))[lVar28];
        }
        uVar27 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
        lVar28 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        local_388 = (uint)lVar28;
        uVar25 = (local_388 - 1) + uVar15;
        if ((int)local_70 < (int)uVar25) {
          uVar25 = local_70;
        }
      }
LAB_14d295641:
      while( true ) {
        plVar11 = local_240;
        if ((int)local_240[1] - *(int *)((longlong)local_240 + 0x34) != (int)uStack_218) {
          `TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3a0);
        }
        if (((TStack_238.CurrentBitIndex == uVar25) &&
            (TStack_238.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
           (plVar11 == (longlong *)local_98)) break;
        lVar28 = *plVar11 + (longlong)TStack_238.CurrentBitIndex * 0x20;
        if (local_330.bIsValid == false) {
          local_2c0 = local_378;
          AlgoImpl::
          IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__UNiagaraUIComponent::AddRibbonRendererData_::__l2::<lambda_2>::operator()_::__l7::<lambda_2>_>_>
                    (*(int **)(lVar28 + 8),*(int *)(lVar28 + 0x10),local_3c5,
                     (<lambda_2> *)&local_2c0);
        }
        else {
          local_2c8 = &local_330;
          AlgoImpl::
          IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__UNiagaraUIComponent::AddRibbonRendererData_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>_>_>
                    (*(int **)(lVar28 + 8),*(int *)(lVar28 + 0x10),local_3c5,
                     (<lambda_1> *)&local_2c8);
        }
        `UNiagaraUIComponent::AddRibbonRendererData'::__l2::<lambda_7>::operator()
                  (&local_1c8,(TArray<int,TSizedDefaultAllocator<32>_> *)(lVar28 + 8));
        TStack_238.UnvisitedBitMask = TStack_238.UnvisitedBitMask & ~TStack_238._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_238);
      }
      local_50 = 0;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_58.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
    }
    else {
      local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b8.ArrayNum = 0;
      local_3b8.ArrayMax = 0;
      local_3c0 = 0;
      do {
        uVar15 = (uint)uVar27;
        if (((local_3b8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3c0) &&
            ((FScriptContainerElement *)&local_3c0 <
             local_3b8.AllocatorInstance.Data + (longlong)local_3b8.ArrayMax * 4)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), uVar15 = local_3b8.ArrayNum, bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar15 == local_3b8.ArrayMax) {
          uVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_3b8.AllocatorInstance,&local_3b8.ArrayMax);
        }
        local_3b8.ArrayNum = uVar15 + 1;
        *(int *)(local_3b8.AllocatorInstance.Data + (longlong)(int)uVar15 * 4) = local_3c0;
        uVar27 = (ulonglong)(uint)local_3b8.ArrayNum;
        local_3c0 = local_3c0 + 1;
      } while (local_3c0 < (int)uVar25);
      if (local_330.bIsValid == false) {
        local_250 = local_378;
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__UNiagaraUIComponent::AddRibbonRendererData_::__l2::<lambda_2>::operator()_::__l7::<lambda_2>_>_>
                  ((int *)local_3b8.AllocatorInstance.Data,local_3b8.ArrayNum,local_3c6,
                   (<lambda_2> *)&local_250);
      }
      else {
        local_290 = &local_330;
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__UNiagaraUIComponent::AddRibbonRendererData_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>_>_>
                  ((int *)local_3b8.AllocatorInstance.Data,local_3b8.ArrayNum,local_3c6,
                   (<lambda_1> *)&local_290);
      }
      `UNiagaraUIComponent::AddRibbonRendererData'::__l2::<lambda_7>::operator()
                (&local_1c8,&local_3b8);
      if (local_3b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_3c4[0] = 0;
    bVar13 = `UNiagaraUIComponent::AddRibbonRendererData'::__l7::<lambda_1>::operator()(local_3c4);
    if (bVar13) goto LAB_14d294c2d;
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  param_2 = local_380;
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
    param_2 = local_380;
  }
LAB_14d295781:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddSpriteRendererData @ 14d2957c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraUIComponent::AddSpriteRendererData
          (UNiagaraUIComponent *this,SNiagaraUISystemWidget *param_1,
          TSharedRef<FNiagaraEmitterInstance_const_,1> *param_2,
          UNiagaraSpriteRendererProperties *param_3,FNiagaraUIRenderProperties *param_4,
          FNiagaraWidgetProperties *param_5)

{
  int *piVar1;
  ushort uVar2;
  FNiagaraEmitterInstance *pFVar3;
  FNiagaraDataSet *pFVar4;
  FNiagaraDataBuffer *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  TVector2<float>_u_0 TVar12;
  uint uVar13;
  FName FVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_GenerateSpriteData> FVar22;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar23;
  FVersionedNiagaraEmitterData *pFVar24;
  FNiagaraTypeDefinition *pFVar25;
  uint uVar26;
  FStatMessage *pFVar27;
  int iVar28;
  FName FVar29;
  int iVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  FLinearColor_u_0 FVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  double dVar42;
  double dVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  uint uVar53;
  undefined8 local_4c0;
  FColor_u_0 local_4b0;
  float local_4ac;
  float local_4a8;
  float local_4a4;
  FName local_4a0;
  TSharedRef<FNiagaraEmitterInstance_const_,1> *local_498;
  uint local_490;
  float local_48c;
  FNiagaraDataSetReaderFloat<float> local_488;
  FNiagaraDataSetReaderFloat<float> local_478;
  FNiagaraDataSetAccessorFloat<UE::Math::TVector2<float>_> local_468;
  FNiagaraDataSetAccessorFloat<float> local_460;
  FNiagaraDataSetAccessorFloat<float> local_458;
  undefined8 local_450;
  char local_448;
  char local_447;
  uint local_444;
  FScriptContainerElement *local_440;
  FName FStack_438;
  FColor_u_0 local_430;
  float local_42c;
  float local_428;
  FNiagaraDataSetAccessorFloat<FNiagaraPosition> local_424;
  undefined1 local_41c [12];
  float local_410;
  float local_40c;
  float local_408;
  TVector<float>_u_0 local_400;
  TVector<float>_u_0 local_3f0;
  FName local_3e0;
  FColor_u_0 *local_3d8;
  uint *local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  FName local_3b8;
  FLinearColor_u_0 local_3b0;
  FName local_3a0;
  FNiagaraTypeDefinitionHandle local_398;
  FName local_394;
  FNiagaraTypeDefinitionHandle local_38c;
  FName local_388;
  FNiagaraTypeDefinitionHandle local_380;
  FName local_37c;
  FNiagaraTypeDefinitionHandle local_374;
  FName local_370;
  FNiagaraTypeDefinitionHandle local_368;
  FName local_364;
  FNiagaraTypeDefinitionHandle local_35c;
  FName local_358;
  FName local_348;
  FNiagaraTypeDefinitionHandle local_340;
  FName local_33c;
  FNiagaraTypeDefinitionHandle local_334;
  FLinearColor_u_0 local_330;
  LARGE_INTEGER local_320;
  LARGE_INTEGER local_318;
  uint *local_310;
  FSlateVertex *local_308;
  double local_300;
  float local_2f8 [4];
  double local_2e8;
  double local_2e0;
  FStatMessage local_2d8;
  FStatMessage local_2c8;
  TVector4<float>_u_0 local_2b8;
  float local_2a8;
  float fStack_2a4;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_298;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double local_250;
  undefined8 uStack_248;
  double local_240;
  double local_238;
  FName local_230;
  double local_228;
  double dStack_220;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_218;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_1f8;
  FNiagaraDataSetReaderFloat<FLinearColor> local_1d8;
  FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> local_1b0;
  FSlateBrush local_188;
  
  bVar31 = -1 < CpuChannel->Enabled;
  local_498 = param_2;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId171,"UNiagaraUIComponent::AddSpriteRendererData",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NiagaraUIRenderer\\Source\\NiagaraUIRenderer\\Private\\NiagaraUIComponent.cpp"
               ,0xab);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId171);
  }
  iVar30 = 0;
  FVar22 = StatPtr_STAT_GenerateSpriteData;
  if (StatPtr_STAT_GenerateSpriteData == (FThreadSafeStaticStat<FStat_STAT_GenerateSpriteData>)0x0)
  {
    pFVar21 = ::FName::FName(&local_230,"STAT_GenerateSpriteData");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_GenerateSpriteData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GenerateSpriteData,*pFVar21,
                        L"Generate Sprite Data","STATGROUP_NiagaraUI","STATCAT_Advanced",
                        L"NiagaraUI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar22;
  local_358.ComparisonIndex.Value = 0;
  local_358.Number = 0;
  bVar9 = false;
  bVar11 = false;
  if ((FVar29.ComparisonIndex.Value.Value == 0) && (FVar29.Number == 0)) {
LAB_14d295973:
    bVar10 = false;
    local_3b8 = local_358;
    FVar29 = local_358;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_430.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_430._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3e0.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
        local_3e0.Number = FVar29.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_3e0,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NiagaraUIRenderer\\Source\\NiagaraUIRenderer\\Private\\NiagaraUIComponent.cpp"
                   ,0xac);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d295973;
    local_4a0 = FVar29;
    local_3b8 = FVar29;
    FThreadStats::AddMessage(FVar29,CycleScopeStart);
    bVar10 = true;
  }
  local_250 = *(double *)&this->field_0x148;
  uStack_248 = *(undefined8 *)&this->field_0x150;
  local_240 = *(double *)&this->field_0x158;
  local_268 = *(double *)&this->field_0x178;
  uStack_260 = *(undefined8 *)&this->field_0x180;
  pFVar3 = local_498->Object;
  local_258 = *(double *)&this->field_0x188;
  local_4a4 = this->WidgetRotationAngle * __real_3c8efa35;
  if ((pFVar3->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParticleDataSet",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                          ,0x3a,L""), bVar18)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = pFVar3->ParticleDataSet;
  if (pFVar4->CurrentData == (FNiagaraDataBuffer *)0x0) {
    if (bVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((!bVar10) || (FVar29 == (FName)0x0)) ||
       ((FThreadStats::bPrimaryDisableForever != false || (FThreadStats::TlsSlot == 0xffffffff))))
    goto LAB_14d296b85;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar23 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar23);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_14d296b85;
    local_2d8.NameAndInfo.Number = FVar29.Number & 0xffff6fff | 0x6000;
    local_2d8.NameAndInfo.Index.Value = FVar29.ComparisonIndex.Value.Value;
    QueryPerformanceCounter(&local_320);
    local_2d8.StatData.Pad[4] = '\0';
    local_2d8.StatData.Pad[5] = '\0';
    local_2d8.StatData.Pad[6] = '\0';
    local_2d8.StatData.Pad[7] = '\0';
    local_2d8.StatData.Pad[0] = local_320.s.LowPart._0_1_;
    local_2d8.StatData.Pad[1] = local_320.s.LowPart._1_1_;
    local_2d8.StatData.Pad[2] = local_320.s.LowPart._2_1_;
    local_2d8.StatData.Pad[3] = local_320.s.LowPart._3_1_;
    pFVar27 = &local_2d8;
  }
  else {
    uVar26 = pFVar4->CurrentData->NumInstances;
    if (0 < (int)uVar26) {
      pFVar24 = FVersionedNiagaraEmitter::GetEmitterData(&local_498->Object->VersionedEmitter);
      fVar32 = __real_3f800000;
      uVar49 = SUB84(__real_3ff0000000000000,0);
      uVar50 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      bVar18 = pFVar24->bLocalSpace;
      local_228 = (param_3->SubImageSize).field0_0x0._s_0.X;
      local_278 = (param_3->SubImageSize).field0_0x0._s_0.Y;
      local_300 = __real_3ff0000000000000 / local_228;
      fVar45 = __real_3f800000 / param_5->FakeDepthScaleDistance;
      local_2e0 = local_300 * UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X;
      local_2e8 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y / local_278;
      local_48c = fVar45;
      dStack_270 = local_278;
      dStack_220 = local_278;
      pFVar25 = FNiagaraTypeDefinitionHandle::Resolve
                          (&(param_3->PositionBinding).ParamMapVariable.TypeDefHandle);
      local_348 = (param_3->PositionBinding).DataSetName;
      local_340.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_340,pFVar25);
      FVar14 = local_348;
      local_424.bIsFloat = true;
      local_424.ComponentIndex = -1;
      if (((pFVar4->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompiledData.Get() != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x169,L""), bVar19)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FNiagaraDataSetAccessorFloat<FNiagaraPosition>::Init
                (&local_424,(pFVar4->CompiledData).StructPtr,FVar14);
      FNiagaraDataSetAccessorFloat<FNiagaraPosition>::GetReader(&local_424,&local_298,pFVar4);
      pFVar25 = FNiagaraTypeDefinitionHandle::Resolve
                          (&(param_3->ColorBinding).ParamMapVariable.TypeDefHandle);
      local_364 = (param_3->ColorBinding).DataSetName;
      local_35c.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_35c,pFVar25);
      FNiagaraDataSetAccessorFloat<FLinearColor>::CreateReader(&local_1d8,pFVar4,local_364);
      pFVar25 = FNiagaraTypeDefinitionHandle::Resolve
                          (&(param_3->VelocityBinding).ParamMapVariable.TypeDefHandle);
      local_33c = (param_3->VelocityBinding).DataSetName;
      local_334.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_334,pFVar25);
      FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::CreateReader
                (&local_1f8,pFVar4,local_33c);
      pFVar25 = FNiagaraTypeDefinitionHandle::Resolve
                          (&(param_3->SpriteAlignmentBinding).ParamMapVariable.TypeDefHandle);
      local_3a0 = (param_3->SpriteAlignmentBinding).DataSetName;
      local_398.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_398,pFVar25);
      FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::CreateReader
                (&local_218,pFVar4,local_3a0);
      pFVar25 = FNiagaraTypeDefinitionHandle::Resolve
                          (&(param_3->SpriteSizeBinding).ParamMapVariable.TypeDefHandle);
      local_394 = (param_3->SpriteSizeBinding).DataSetName;
      local_38c.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_38c,pFVar25);
      FVar14 = local_394;
      local_468.bIsFloat = true;
      local_468.ComponentIndex = -1;
      if (((pFVar4->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompiledData.Get() != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x169,L""), bVar19)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FNiagaraDataSetAccessorFloat<UE::Math::TVector2<float>_>::Init
                (&local_468,(pFVar4->CompiledData).StructPtr,FVar14);
      bVar19 = local_468.bIsFloat;
      pFVar5 = pFVar4->CurrentData;
      local_448 = '\0';
      local_447 = local_468.bIsFloat;
      local_444 = 0;
      local_440 = (FScriptContainerElement *)0x0;
      FStack_438.ComparisonIndex.Value = 0;
      FStack_438.Number = 0;
      if ((pFVar5 != (FNiagaraDataBuffer *)0x0) && (local_468.ComponentIndex != -1)) {
        local_448 = '\x01';
        if (local_468.bIsFloat == false) {
          local_440 = (pFVar5->HalfData).AllocatorInstance.Data +
                      local_468.ComponentIndex * pFVar5->HalfStride;
          FStack_438 = (FName)((ulonglong)((local_468.ComponentIndex + 1) * pFVar5->HalfStride) +
                              (longlong)(pFVar5->HalfData).AllocatorInstance.Data);
        }
        else {
          local_440 = (pFVar5->FloatData).AllocatorInstance.Data +
                      local_468.ComponentIndex * pFVar5->FloatStride;
          FStack_438 = (FName)((ulonglong)((local_468.ComponentIndex + 1) * pFVar5->FloatStride) +
                              (longlong)(pFVar5->FloatData).AllocatorInstance.Data);
        }
        local_444 = pFVar5->NumInstances;
      }
      pFVar25 = FNiagaraTypeDefinitionHandle::Resolve
                          (&(param_3->SpriteRotationBinding).ParamMapVariable.TypeDefHandle);
      local_388 = (param_3->SpriteRotationBinding).DataSetName;
      local_380.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_380,pFVar25);
      FVar14 = local_388;
      local_460.bIsFloat = true;
      local_460.ComponentIndex = -1;
      if (((pFVar4->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompiledData.Get() != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x169,L""), bVar20)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FNiagaraDataSetAccessorFloat<float>::Init(&local_460,(pFVar4->CompiledData).StructPtr,FVar14);
      pFVar5 = pFVar4->CurrentData;
      local_478.bIsValid = false;
      local_478.bIsFloat = local_460.bIsFloat;
      local_478.NumInstances = 0;
      local_478.ComponentData[0] = (uchar *)0x0;
      if ((pFVar5 != (FNiagaraDataBuffer *)0x0) && (local_460.ComponentIndex != -1)) {
        local_478.bIsValid = true;
        if (local_460.bIsFloat == false) {
          local_478.ComponentData[0] =
               (uchar *)((pFVar5->HalfData).AllocatorInstance.Data +
                        local_460.ComponentIndex * pFVar5->HalfStride);
        }
        else {
          local_478.ComponentData[0] =
               (uchar *)((pFVar5->FloatData).AllocatorInstance.Data +
                        local_460.ComponentIndex * pFVar5->FloatStride);
        }
        local_478.NumInstances = pFVar5->NumInstances;
      }
      pFVar25 = FNiagaraTypeDefinitionHandle::Resolve
                          (&(param_3->SubImageIndexBinding).ParamMapVariable.TypeDefHandle);
      local_37c = (param_3->SubImageIndexBinding).DataSetName;
      local_374.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_374,pFVar25);
      FVar14 = local_37c;
      local_458.bIsFloat = true;
      local_458.ComponentIndex = -1;
      if (((pFVar4->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompiledData.Get() != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x169,L""), bVar20)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FNiagaraDataSetAccessorFloat<float>::Init(&local_458,(pFVar4->CompiledData).StructPtr,FVar14);
      pFVar5 = pFVar4->CurrentData;
      local_488.bIsValid = false;
      local_488.bIsFloat = local_458.bIsFloat;
      local_488.NumInstances = 0;
      local_488.ComponentData[0] = (uchar *)0x0;
      if ((pFVar5 != (FNiagaraDataBuffer *)0x0) && (local_458.ComponentIndex != -1)) {
        local_488.bIsValid = true;
        if (local_458.bIsFloat == false) {
          local_488.ComponentData[0] =
               (uchar *)((pFVar5->HalfData).AllocatorInstance.Data +
                        local_458.ComponentIndex * pFVar5->HalfStride);
        }
        else {
          local_488.ComponentData[0] =
               (uchar *)((pFVar5->FloatData).AllocatorInstance.Data +
                        local_458.ComponentIndex * pFVar5->FloatStride);
        }
        local_488.NumInstances = pFVar5->NumInstances;
      }
      pFVar25 = FNiagaraTypeDefinitionHandle::Resolve
                          (&(param_3->DynamicMaterialBinding).ParamMapVariable.TypeDefHandle);
      local_370 = (param_3->DynamicMaterialBinding).DataSetName;
      local_368.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_368,pFVar25);
      FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_>::CreateReader
                (&local_1b0,pFVar4,local_370);
      FSlateBrush::FSlateBrush(&local_188);
      SNiagaraUISystemWidget::AddRenderData
                (param_1,&local_308,&local_310,(param_3->Material).field0_0x0.DebugPtr,uVar26 * 4,
                 uVar26 * 6);
      uVar13 = local_444;
      local_3c8 = (longlong)(int)uVar26;
      if (0 < (int)uVar26) {
        local_3d0 = local_310 + 2;
        local_3d8 = &local_308[1].Color.field0_0x0;
        local_3c0 = (longlong)local_440 - (longlong)FStack_438;
        local_490 = 1;
        local_4a0 = FStack_438;
        FVar29 = FStack_438;
        fVar46 = __real_bf800000;
        fVar47 = __real_b8800000;
        do {
          dVar8 = (double)CONCAT44(uVar50,uVar49);
          local_2a8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          fStack_2a4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          if ((local_298.bIsValid == false) || (local_298.NumInstances <= iVar30)) {
            local_41c._4_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
            local_41c._0_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
            local_41c._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          }
          else {
            FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                      (&local_298,(FNiagaraPosition *)local_41c,iVar30);
            fVar47 = __real_b8800000;
          }
          fVar33 = param_4->ScaleFactor;
          local_2f8[0] = (float)local_41c._0_8_;
          fVar51 = (float)((uint)((float)local_41c._8_4_ * fVar33) ^
                          __xmm_80000000800000008000000080000000);
          if ((local_448 == '\0') || ((int)uVar13 <= iVar30)) {
            local_450 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
            TVar12._s_0 = local_450;
            local_450._4_4_ = UE::Math::TVector2<float>::UnitVector.field0_0x0._4_4_;
            fVar47 = local_450._4_4_;
            local_450 = TVar12._s_0;
LAB_14d296390:
            fVar52 = (float)(undefined4)local_450;
          }
          else {
            if (bVar19 == false) {
              uVar26 = (*(ushort *)(local_3c0 + (longlong)FVar29) & 0x7fff) * 0x2000;
              fVar52 = (float)(uVar26 + 0x38000000);
              if ((uVar26 & 0xf800000) == 0xf800000) {
                fVar52 = (float)(uVar26 + 0x70000000);
              }
              else if ((uVar26 & 0xf800000) == 0) {
                fVar52 = (float)(uVar26 + 0x38800000) + fVar47;
              }
              uVar2 = *(ushort *)FVar29;
              local_450._0_4_ =
                   (*(ushort *)(local_3c0 + (longlong)FVar29) & 0x8000) << 0x10 | (uint)fVar52;
              uVar26 = (uVar2 & 0x7fff) * 0x2000;
              fVar52 = (float)(uVar26 + 0x38000000);
              if ((uVar26 & 0xf800000) == 0xf800000) {
                fVar47 = (float)((uVar2 & 0x8000) << 0x10 | uVar26 + 0x70000000);
              }
              else {
                if ((uVar26 & 0xf800000) == 0) {
                  fVar52 = (float)(uVar26 + 0x38800000) + fVar47;
                }
                fVar47 = (float)((uVar2 & 0x8000) << 0x10 | (uint)fVar52);
              }
              goto LAB_14d296390;
            }
            fVar47 = *(float *)local_4a0;
            fVar52 = *(float *)(local_3c0 + (longlong)local_4a0);
          }
          fVar47 = fVar33 * fVar47;
          fVar52 = fVar33 * fVar52;
          local_2f8._0_8_ = local_41c._0_8_;
          if (bVar18 == false) {
            fVar48 = local_2f8[0] * fVar33 + (param_4->ParentTopLeft).field0_0x0._s_0.X;
            fVar51 = fVar51 + (param_4->ParentTopLeft).field0_0x0._s_0.Y;
          }
          else {
            fVar46 = (float)local_268;
            fVar48 = (float)local_258;
            fVar45 = fVar46 * local_2f8[0] * fVar33;
            fVar51 = fVar48 * fVar51;
            FMath::SinCos<float>(&local_428,&local_42c,this->WidgetRotationAngle * __real_bc8efa35);
            fVar47 = fVar48 * fVar47;
            fVar48 = (local_42c * fVar45 - local_428 * fVar51) +
                     (param_4->ParentTopLeft).field0_0x0._s_0.X + (float)local_250 * fVar33;
            fVar52 = fVar46 * fVar52;
            fVar51 = local_42c * fVar51 + local_428 * fVar45 +
                     ((param_4->ParentTopLeft).field0_0x0._s_0.Y - (float)local_240 * fVar33);
            fVar45 = local_48c;
            fVar46 = __real_bf800000;
          }
          fVar33 = 0.0;
          if (param_5->FakeDepthScale != false) {
            fVar15 = (float)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            fVar16 = (float)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            fVar17 = (float)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            if ((local_298.bIsValid != false) && (iVar30 < local_298.NumInstances)) {
              FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                        (&local_298,(FNiagaraPosition *)&local_410,iVar30);
              fVar15 = local_410;
              fVar16 = local_40c;
              fVar17 = local_408;
            }
            local_408 = fVar17;
            local_40c = fVar16;
            local_410 = fVar15;
            fVar45 = (param_5->FakeDepthScaleDistance - local_40c) * fVar45;
            fVar52 = fVar52 * fVar45;
            fVar47 = fVar47 * fVar45;
          }
          fVar52 = fVar52 * __real_3f000000;
          if ((local_1d8.bIsValid == false) || (local_1d8.NumInstances <= iVar30)) {
            local_3b0 = FLinearColor::White.field0_0x0;
            FVar35 = FLinearColor::White.field0_0x0;
          }
          else {
            FNiagaraDataSetReaderFloat<FLinearColor>::Get
                      (&local_1d8,(FLinearColor *)&local_3b0._s_0,iVar30);
            FVar35 = (FLinearColor_u_0)ZEXT416((uint)local_3b0._s_0.R);
          }
          local_330._s_0.R = FVar35._s_0.R * (param_4->Tint).field0_0x0._s_0.R;
          local_330._s_0.B = local_3b0._s_0.B * (param_4->Tint).field0_0x0._s_0.B;
          local_330._s_0.G = local_3b0._s_0.G * (param_4->Tint).field0_0x0._s_0.G;
          local_330._s_0.A = local_3b0._s_0.A * (param_4->Tint).field0_0x0._s_0.A;
          FLinearColor::ToFColorSRGB((FLinearColor *)&local_330._s_0);
          if (param_3->Alignment == VelocityAligned) {
            if ((local_1f8.bIsValid == false) || (local_1f8.NumInstances <= iVar30)) {
              local_3f0._0_8_ =
                   CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                            UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
              local_3f0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            }
            else {
              FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                        (&local_1f8,(TVector<float> *)&local_3f0._s_0,iVar30);
            }
            uVar44 = local_3f0._s_0.X;
            uVar41 = local_3f0._s_0.Z;
LAB_14d2966ab:
            dVar43 = (double)(float)uVar44;
            dVar42 = (double)(float)uVar41;
            dVar37 = dVar43 * dVar43 + dVar42 * dVar42;
            if (dVar37 <= __real_3e45798ee0000000) {
              dVar42 = 0.0;
            }
            else {
              local_238 = (double)CONCAT44(uVar50,uVar49) / SQRT(dVar37);
              dVar42 = dVar42 * local_238;
            }
            local_4ac = (float)dVar42;
            fVar45 = fVar46;
            if (0.0 <= dVar43) {
              fVar45 = fVar32;
            }
            if (bVar18 != false) {
              if ((fVar46 <= local_4ac) && (fVar46 = local_4ac, fVar32 <= local_4ac)) {
                fVar46 = fVar32;
              }
              fVar32 = acosf(fVar46);
              fVar32 = fVar32 * fVar45 - local_4a4;
              goto LAB_14d296731;
            }
            local_4a8 = SQRT(fVar32 - local_4ac * local_4ac) * fVar45;
          }
          else {
            if (param_3->Alignment == CustomAlignment) {
              if ((local_218.bIsValid == false) || (local_218.NumInstances <= iVar30)) {
                local_400._0_8_ =
                     CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                              UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
                local_400._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                uVar44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
                uVar41 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              }
              else {
                FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                          (&local_218,(TVector<float> *)&local_400._s_0,iVar30);
                uVar44 = local_400._s_0.X;
                uVar41 = local_400._s_0.Z;
              }
              goto LAB_14d2966ab;
            }
            if ((local_478.bIsValid == false) || (local_478.NumInstances <= iVar30)) {
              fVar32 = 0.0;
            }
            else {
              fVar32 = FNiagaraDataSetReaderFloat<float>::Get(&local_478,iVar30);
            }
            if (bVar18 != false) {
              fVar32 = fVar32 - this->WidgetRotationAngle;
            }
            fVar32 = fVar32 * __real_3c8efa35;
LAB_14d296731:
            FMath::SinCos<float>(&local_4a8,&local_4ac,fVar32);
          }
          dVar42 = local_228;
          dVar37 = local_278;
          if ((local_228 == (double)CONCAT44(uVar50,uVar49)) &&
             (local_278 == (double)CONCAT44(uVar50,uVar49))) {
            fVar45 = 0.0;
            dVar37 = dVar8;
          }
          else {
            if ((local_488.bIsValid == false) || (local_488.NumInstances <= iVar30)) {
              fVar32 = 0.0;
            }
            else {
              fVar32 = FNiagaraDataSetReaderFloat<float>::Get(&local_488,iVar30);
            }
            auVar36._0_8_ = (double)fVar32 * local_300;
            auVar36._8_8_ = 0;
            auVar36 = roundpd(auVar36,auVar36,1);
            iVar28 = (int)auVar36._0_8_ % (int)dVar37;
            fVar45 = (float)((double)((int)fVar32 % (int)dVar42) * local_2e0);
            fVar33 = (float)((double)iVar28 * local_2e8);
            dVar8 = (double)(float)((double)((int)fVar32 % (int)dVar42 + 1) * local_2e0);
            dVar37 = (double)(float)((double)(iVar28 + 1) * local_2e8);
          }
          if ((local_1b0.bIsValid == false) || (local_1b0.NumInstances <= iVar30)) {
            local_2b8._0_8_ = 0;
            local_2b8._8_8_ = 0;
          }
          else {
            FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_>::Get
                      (&local_1b0,(TVector4<float> *)&local_2b8._s_0,iVar30);
          }
          dVar38 = (double)(float)((uint)fVar52 ^ __xmm_80000000800000008000000080000000);
          dVar34 = (double)local_4ac;
          dVar43 = (double)(fVar47 * __real_bf000000) * dVar34;
          dVar40 = (double)local_4a8;
          dVar42 = (double)fVar52;
          uVar26 = (uint)__xmm_80000000000000008000000000000000;
          uVar53 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          dVar39 = (double)(fVar47 * __real_bf000000) * dVar40;
          dVar7 = dVar40 * dVar38 + dVar43;
          dVar38 = dVar34 * dVar38 - dVar39;
          dVar39 = dVar42 * dVar34 - dVar39;
          dVar43 = dVar42 * dVar40 + dVar43;
          local_4c0 = CONCAT44((float)dVar7 + fVar51,(float)dVar38 + fVar48);
          *(undefined8 *)(local_3d8 + -0xd) = local_4c0;
          local_3d8[-0xb] = local_4b0;
          local_3d8[-0x13].Bits = (uint)fVar45;
          local_3d8[-0x12].Bits = (uint)fVar33;
          local_3d8[-0x11].Bits = (uint)local_2b8._s_0.X;
          local_3d8[-0x10].Bits = (uint)local_2b8._s_0.Y;
          local_4c0 = CONCAT44((float)dVar43 + fVar51,(float)dVar39 + fVar48);
          *(undefined8 *)(local_3d8 + -2) = local_4c0;
          *local_3d8 = local_4b0;
          local_3d8[-8] = (FColor_u_0)(float)dVar8;
          local_3d8[-7].Bits = (uint)fVar33;
          local_3d8[-6].Bits = (uint)local_2b8._s_0.X;
          local_3d8[-5].Bits = (uint)local_2b8._s_0.Y;
          local_4c0 = CONCAT44((float)(double)CONCAT44((uint)((ulonglong)dVar43 >> 0x20) ^ uVar53,
                                                       SUB84(dVar43,0) ^ uVar26) + fVar51,
                               (float)(double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) ^ uVar53,
                                                       SUB84(dVar39,0) ^ uVar26) + fVar48);
          *(undefined8 *)(local_3d8 + 9) = local_4c0;
          local_3d8[0xb] = local_4b0;
          local_3d8[3].Bits = (uint)fVar45;
          local_3d8[4] = (FColor_u_0)(float)dVar37;
          local_3d8[5].Bits = (uint)local_2b8._s_0.X;
          local_3d8[6].Bits = (uint)local_2b8._s_0.Y;
          fVar47 = __real_b8800000;
          fVar32 = __real_3f800000;
          iVar30 = iVar30 + 1;
          FVar29 = (FName)((longlong)FVar29 + 2);
          uVar49 = SUB84(__real_3ff0000000000000,0);
          uVar50 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          local_4a0 = (FName)((longlong)local_4a0 + 4);
          local_4c0 = CONCAT44((float)(double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar53,
                                                       SUB84(dVar7,0) ^ uVar26) + fVar51,
                               (float)(double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) ^ uVar53,
                                                       SUB84(dVar38,0) ^ uVar26) + fVar48);
          *(undefined8 *)(local_3d8 + 0x14) = local_4c0;
          local_3d8[0x16] = local_4b0;
          local_3d8[0xe] = (FColor_u_0)(float)dVar8;
          local_3d8[0xf] = (FColor_u_0)(float)dVar37;
          local_3d8[0x10].Bits = (uint)local_2b8._s_0.X;
          local_3d8[0x11].Bits = (uint)local_2b8._s_0.Y;
          fVar46 = __real_bf800000;
          local_3d8 = local_3d8 + 0x2c;
          local_3d0[-2] = local_490 - 1;
          local_3d0[-1] = local_490;
          *local_3d0 = local_490 + 1;
          local_3d0[1] = local_490 + 1;
          uVar26 = local_490 + 2;
          local_3d0[2] = local_490;
          local_490 = local_490 + 4;
          local_3d0[3] = uVar26;
          local_3d0 = local_3d0 + 6;
          local_3c8 = local_3c8 + -1;
          fVar45 = local_48c;
        } while (local_3c8 != 0);
        local_3c8 = 0;
        FVar29 = local_3b8;
      }
      local_188._padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar10) {
        FThreadStats::AddMessage(FVar29,CycleScopeEnd);
      }
      goto LAB_14d296b85;
    }
    if (bVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) || (FVar29 == (FName)0x0)) || (FThreadStats::bPrimaryDisableForever != false))
       || (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_14d296b85;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar23 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar23);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_14d296b85;
    local_2c8.NameAndInfo.Number = FVar29.Number & 0xffff6fff | 0x6000;
    local_2c8.NameAndInfo.Index.Value = FVar29.ComparisonIndex.Value.Value;
    QueryPerformanceCounter(&local_318);
    local_2c8.StatData.Pad[4] = '\0';
    local_2c8.StatData.Pad[5] = '\0';
    local_2c8.StatData.Pad[6] = '\0';
    local_2c8.StatData.Pad[7] = '\0';
    local_2c8.StatData.Pad[0] = local_318.s.LowPart._0_1_;
    local_2c8.StatData.Pad[1] = local_318.s.LowPart._1_1_;
    local_2c8.StatData.Pad[2] = local_318.s.LowPart._2_1_;
    local_2c8.StatData.Pad[3] = local_318.s.LowPart._3_1_;
    pFVar27 = &local_2c8;
  }
  FThreadStats::AddStatMessage(this_00,pFVar27);
  piVar1 = &this_00->ScopeCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
LAB_14d296b85:
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_498->SharedReferenceCount).ReferenceController);
  return;
}

// GetPrivateStaticClass @ 14d297810

UClass * __cdecl UNiagaraUIComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraUIComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraUIRenderer",L"NiagaraUIComponent",
               &Z_Registration_Info_UClass_UNiagaraUIComponent.InnerSingleton,
               StaticRegisterNativesUNiagaraUIComponent,0x810,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraUIComponent>,
               InternalVTableHelperCtorCaller<UNiagaraUIComponent>,local_res8,
               UNiagaraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraUIComponent.InnerSingleton;
}

// RenderUI @ 14d298df0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraUIComponent::RenderUI
          (UNiagaraUIComponent *this,SNiagaraUISystemWidget *param_1,
          FNiagaraUIRenderProperties *param_2,FNiagaraWidgetProperties *param_3)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraEmitterInstance *pFVar3;
  UNiagaraRendererProperties *pUVar4;
  code *pcVar5;
  UNiagaraSpriteRendererProperties *pUVar6;
  UNiagaraSpriteRendererProperties *pUVar7;
  TObjectPtr<UNiagaraEmitter>_u_0 TVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  FVersionedNiagaraEmitterData *pFVar12;
  UClass *pUVar13;
  FRenderData *pFVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  longlong *plVar20;
  ForAnyElementType FVar21;
  bool bVar22;
  FIdentityFunctor local_res8;
  undefined1 local_147 [7];
  ForAnyElementType local_140;
  undefined8 local_138;
  undefined1 local_130 [8];
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  longlong *local_118;
  FNiagaraRendererEntry local_110;
  longlong *local_e0;
  UNiagaraSpriteRendererProperties *local_d8;
  FNiagaraEmitterInstance *local_d0;
  TReferenceControllerBase<1> *local_c8;
  TObjectPtr<UNiagaraEmitter>_u_0 local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  TObjectPtr<UNiagaraEmitter>_u_0 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  TSharedRef<FNiagaraEmitterInstance_const_,1> local_90;
  TSharedRef<FNiagaraEmitterInstance_const_,1> local_80;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId85,"UNiagaraUIComponent::RenderUI",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NiagaraUIRenderer\\Source\\NiagaraUIRenderer\\Private\\NiagaraUIComponent.cpp"
               ,0x55);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId85);
  }
  pFVar14 = (FRenderData *)param_1->_padding_;
  if ((FRenderData *)param_1->_padding_ == (FRenderData *)0x0) {
    pFVar14 = (FRenderData *)&param_1->_padding_;
  }
  DestructItems<SMeshWidget::FRenderData,int>(pFVar14,(int)param_1->_padding_);
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<SMeshWidget::FRenderData>_>
              (0x50,8,0,(ForElementType<SMeshWidget::FRenderData> *)&param_1->_padding_,0,piVar1);
  }
  if ((this->field_0x9a & 0x10) != 0) {
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x650;
    lVar17 = *(longlong *)&this->field_0x648;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (lVar17 != 0) {
      pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x650;
      lVar17 = *(longlong *)&this->field_0x648;
      local_140.Data = (FScriptContainerElement *)0x0;
      local_138 = 0;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((lVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar17 = *(longlong *)(lVar17 + 0x30);
      iVar16 = *(int *)(lVar17 + 0x130);
      plVar20 = *(longlong **)(lVar17 + 0x128);
      local_118 = plVar20;
      if ((iVar16 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      plVar19 = plVar20 + (longlong)iVar16 * 2;
      local_e0 = plVar19;
      if (plVar20 != plVar19) {
        do {
          pTVar2 = (TReferenceControllerBase<1> *)plVar20[1];
          pFVar3 = (FNiagaraEmitterInstance *)*plVar20;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pFVar3->ExecutionState != Disabled) {
            local_a8 = (TObjectPtr<UNiagaraEmitter>_u_0)
                       (pFVar3->VersionedEmitter).Emitter.field0_0x0.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_a8.DebugPtr != (UNiagaraEmitter *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_a8.DebugPtr);
            }
            local_a0._0_4_ = (pFVar3->VersionedEmitter).Version.A;
            local_a0._4_4_ = (pFVar3->VersionedEmitter).Version.B;
            uStack_98._0_4_ = (pFVar3->VersionedEmitter).Version.C;
            uStack_98._4_4_ = (pFVar3->VersionedEmitter).Version.D;
            if (local_a8.DebugPtr != (UNiagaraEmitter *)0x0) {
              pFVar12 = FVersionedNiagaraEmitter::GetEmitterData
                                  ((FVersionedNiagaraEmitter *)&local_a8.ObjectPtr);
              local_128.Data = (FScriptContainerElement *)0x0;
              local_120 = (pFVar12->RendererProperties).ArrayNum;
              lVar17 = (longlong)local_120;
              pFVar15 = (pFVar12->RendererProperties).AllocatorInstance.Data;
              if (local_120 == 0) {
                local_11c = 0;
                iVar16 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,local_120,0,&local_128,local_120,&local_11c);
                memcpy(local_128.Data,pFVar15,lVar17 << 3);
                iVar16 = local_120;
              }
              pFVar15 = local_128.Data + (longlong)iVar16 * 8;
              FVar21.Data = local_128.Data;
              iVar11 = iVar16;
              while( true ) {
                if (iVar11 != iVar16) {
                  local_147[0] = 0;
                  `TCheckedPointerIterator<UNiagaraRendererProperties_*,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_147);
                }
                TVar8 = local_a8;
                if (FVar21.Data == pFVar15) break;
                pUVar4 = *(UNiagaraRendererProperties **)FVar21.Data;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_a8.DebugPtr != (UNiagaraEmitter *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_a8.DebugPtr);
                }
                local_70 = (uint)local_a0;
                uStack_6c = local_a0._4_4_;
                uStack_68 = (uint)uStack_98;
                uStack_64 = uStack_98._4_4_;
                local_58 = (uint)local_a0;
                uStack_54 = local_a0._4_4_;
                uStack_50 = (uint)uStack_98;
                uStack_4c = uStack_98._4_4_;
                if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar2->SharedReferenceCount =
                       (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                  UNLOCK();
                  LOCK();
                  pTVar2->SharedReferenceCount =
                       (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_110.Emitter.Emitter.field0_0x0.DebugPtr = TVar8;
                local_110.RendererProperties = pUVar4;
                local_110.EmitterInstance.Object = pFVar3;
                local_110.EmitterInstance.SharedReferenceCount.ReferenceController = pTVar2;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (TVar8.DebugPtr != (UNiagaraEmitter *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
                }
                local_110.Emitter.Version.A = local_70;
                local_110.Emitter.Version.B = uStack_6c;
                local_110.Emitter.Version.C = uStack_68;
                local_110.Emitter.Version.D = uStack_64;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar2);
                if (((local_140.Data <= &local_110) &&
                    (&local_110 <
                     (FNiagaraRendererEntry *)(local_140.Data + (longlong)local_138._4_4_ * 0x30)))
                   && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar11 = (int)local_138;
                if ((int)local_138 == local_138._4_4_) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x830,&local_140,(int *)((longlong)&local_138 + 4));
                }
                local_138 = CONCAT44(local_138._4_4_,iVar11 + 1);
                pFVar18 = local_140.Data + (longlong)iVar11 * 0x30;
                *(UNiagaraRendererProperties **)&pFVar18->field_0x0 = local_110.RendererProperties;
                *(FNiagaraEmitterInstance **)(pFVar18 + 8) = local_110.EmitterInstance.Object;
                *(TReferenceControllerBase<1> **)(pFVar18 + 0x10) =
                     local_110.EmitterInstance.SharedReferenceCount.ReferenceController;
                if (local_110.EmitterInstance.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_110.EmitterInstance.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_110.EmitterInstance.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                *(TObjectPtr<UNiagaraEmitter>_u_0 *)(pFVar18 + 0x18) =
                     (UNiagaraEmitter *)local_110.Emitter.Emitter.field0_0x0;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_110.Emitter.Emitter.field0_0x0.DebugPtr !=
                    (TObjectPtr<UNiagaraEmitter>_u_0)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_110.Emitter.Emitter.field0_0x0);
                }
                *(ulonglong *)(pFVar18 + 0x20) =
                     CONCAT44(local_110.Emitter.Version.B,local_110.Emitter.Version.A);
                *(ulonglong *)(pFVar18 + 0x28) =
                     CONCAT44(local_110.Emitter.Version.D,local_110.Emitter.Version.C);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_110.EmitterInstance.SharedReferenceCount.ReferenceController);
                FVar21.Data = FVar21.Data + 8;
                iVar11 = local_120;
              }
              plVar19 = local_e0;
              plVar20 = local_118;
              if (local_128.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data);
                plVar19 = local_e0;
                plVar20 = local_118;
              }
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          plVar20 = plVar20 + 2;
          local_118 = plVar20;
        } while (plVar20 != plVar19);
      }
      local_res8 = SUB81(this,0);
      AlgoImpl::
      IntroSortInternal<FNiagaraRendererEntry,int,FIdentityFunctor,_UNiagaraUIComponent::RenderUI_::__l2::<lambda_1>_>
                ((FNiagaraRendererEntry *)local_140.Data,(int)local_138,local_res8,
                 (<lambda_1>)local_res8);
      iVar16 = (int)local_138;
      pFVar15 = local_140.Data + 0x20;
      pFVar18 = local_140.Data + (longlong)(int)local_138 * 0x30;
      while( true ) {
        if ((int)local_138 != iVar16) {
          `TCheckedPointerIterator<FNiagaraRendererEntry,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_130);
        }
        if (pFVar15 + -0x20 == pFVar18) break;
        local_d0 = *(FNiagaraEmitterInstance **)(pFVar15 + -0x18);
        local_d8 = *(UNiagaraSpriteRendererProperties **)&pFVar15[-0x20].field_0x0;
        local_c8 = *(TReferenceControllerBase<1> **)(pFVar15 + -0x10);
        if (local_c8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_c8->SharedReferenceCount = (atomic<int>)((int)local_c8->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_c0 = (TObjectPtr<UNiagaraEmitter>_u_0)
                   ((TObjectPtr<UNiagaraEmitter>_u_0 *)(pFVar15 + -8))->DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_c0.DebugPtr != (UNiagaraEmitter *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_c0.DebugPtr);
        }
        local_b8 = *(undefined4 *)pFVar15;
        uStack_b4 = *(uint *)(pFVar15 + 4);
        uStack_b0 = *(uint *)(pFVar15 + 8);
        uStack_ac = *(uint *)(pFVar15 + 0xc);
        if ((local_d8 == (UNiagaraSpriteRendererProperties *)0x0) ||
           (cVar10 = (**(code **)(local_d8->_padding_ + 0x318))(), cVar10 == '\0')) {
LAB_14d29946a:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c8);
          pFVar15 = pFVar15 + 0x30;
        }
        else {
          pcVar5 = *(code **)(local_d8->_padding_ + 0x2e8);
          pFVar12 = FVersionedNiagaraEmitter::GetEmitterData
                              ((FVersionedNiagaraEmitter *)&local_c0.ObjectPtr);
          cVar10 = (*pcVar5)(local_d8,pFVar12->SimTarget);
          if ((cVar10 == '\0') ||
             ((pFVar12 = FVersionedNiagaraEmitter::GetEmitterData
                                   ((FVersionedNiagaraEmitter *)&local_c0.ObjectPtr),
              pUVar6 = local_d8, pFVar12->SimTarget != CPUSim ||
              (local_d8 == (UNiagaraSpriteRendererProperties *)0x0)))) goto LAB_14d29946a;
          pUVar13 = Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister();
          pUVar7 = local_d8;
          lVar17 = pUVar6->_padding_;
          iVar11 = (int)pUVar13->_padding_;
          if ((*(int *)(lVar17 + 0x38) < iVar11) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar11 * 8) !=
              &pUVar13->_padding_)) {
            if (local_d8 != (UNiagaraSpriteRendererProperties *)0x0) {
              pUVar13 = Z_Construct_UClass_UNiagaraRibbonRendererProperties_NoRegister();
              lVar17 = pUVar7->_padding_;
              iVar11 = (int)pUVar13->_padding_;
              if ((iVar11 <= *(int *)(lVar17 + 0x38)) &&
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar11 * 8)
                  == &pUVar13->_padding_)) {
                local_80.Object = local_d0;
                local_80.SharedReferenceCount.ReferenceController = local_c8;
                if (local_c8 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_c8->SharedReferenceCount =
                       (atomic<int>)((int)local_c8->SharedReferenceCount + 1);
                  UNLOCK();
                }
                AddRibbonRendererData
                          (this,param_1,&local_80,(UNiagaraRibbonRendererProperties *)pUVar7,param_2
                           ,param_3);
              }
            }
            goto LAB_14d29946a;
          }
          local_90.Object = local_d0;
          local_90.SharedReferenceCount.ReferenceController = local_c8;
          if (local_c8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_c8->SharedReferenceCount = (atomic<int>)((int)local_c8->SharedReferenceCount + 1);
            UNLOCK();
          }
          AddSpriteRendererData(this,param_1,&local_90,pUVar6,param_2,param_3);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c8);
          pFVar15 = pFVar15 + 0x30;
        }
      }
      DestructItems<FNiagaraRendererEntry,int>
                ((FNiagaraRendererEntry *)local_140.Data,(int)local_138);
      if ((FNiagaraRendererEntry *)local_140.Data != (FNiagaraRendererEntry *)0x0) {
        FMemory::Free(local_140.Data);
      }
    }
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RequestActivateSystem @ 14d2994f0

void __thiscall UNiagaraUIComponent::RequestActivateSystem(UNiagaraUIComponent *this,bool param_1)

{
  if (this->HasSetTransform != false) {
                    /* WARNING: Could not recover jumptable at 0x00014d2994fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x2b8))();
    return;
  }
  this->AutoActivateParticle = true;
  return;
}

// RequestDeactivateSystem @ 14d299520

void __thiscall UNiagaraUIComponent::RequestDeactivateSystem(UNiagaraUIComponent *this)

{
  (**(code **)(*(longlong *)this + 0x2c0))();
  this->AutoActivateParticle = false;
  return;
}

// SetAutoActivateParticle @ 14d2995d0

void __thiscall UNiagaraUIComponent::SetAutoActivateParticle(UNiagaraUIComponent *this,bool param_1)

{
  this->AutoActivateParticle = param_1;
  return;
}

// SetTransformationForUIRendering @ 14d2998e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraUIComponent::SetTransformationForUIRendering
          (UNiagaraUIComponent *this,TVector2<double> *param_1,TVector2<float> param_2,float param_3
          )

{
  undefined8 uVar1;
  TQuat<double> *pTVar2;
  float local_res18;
  float fStackX_1c;
  undefined1 auStack_e8 [32];
  TRotator<double> local_b8;
  TQuat<double> local_98;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  this->WidgetRotationAngle = param_3;
  local_b8.Pitch = (double)param_3;
  local_b8.Yaw = 0.0;
  local_b8.Roll = 0.0;
  pTVar2 = UE::Math::TRotator<double>::Quaternion(&local_b8,&local_98);
  local_res18 = param_2.field0_0x0._0_4_;
  local_78.Rotation.ZW.m128d_f64[0] = pTVar2->Z;
  local_78.Rotation.ZW.m128d_f64[1] = pTVar2->W;
  local_78.Rotation.XY.m128d_f64[0] = pTVar2->X;
  local_78.Rotation.XY.m128d_f64[1] = pTVar2->Y;
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  local_78.Translation.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  local_78.Translation.XY.m128d_f64[1] = 0.0;
  local_78.Translation.ZW.m128d_f64[0] =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
  local_78.Translation.ZW.m128d_f64[1] = 0.0;
  fStackX_1c = param_2.field0_0x0._4_4_;
  local_78.Scale3D.ZW.m128d_f64[0] = (double)fStackX_1c;
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ = (int)__real_3ff0000000000000;
  local_78.Scale3D.XY.m128d_f64[0] = (double)local_res18;
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[1] = 0.0;
  USceneComponent::SetRelativeTransform
            ((USceneComponent *)this,&local_78,false,(FHitResult *)0x0,None);
  if (this->AutoActivateParticle == false) {
    this->HasSetTransform = true;
  }
  else {
    if ((this->field_0x9a & 0x10) == 0) {
      (**(code **)(*(longlong *)this + 0xaf0))(this,0);
    }
    this->AutoActivateParticle = false;
    this->HasSetTransform = true;
  }
  return;
}

// StaticRegisterNativesUNiagaraUIComponent @ 14d299cc0

void __cdecl UNiagaraUIComponent::StaticRegisterNativesUNiagaraUIComponent(void)

{
  return;
}

// operator() @ 15057a6a0

bool __thiscall
`UNiagaraUIComponent::AddRibbonRendererData'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1991425620457816509>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1991425620457816509>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

