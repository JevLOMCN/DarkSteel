// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 11

// CreateMaterials @ 14e632420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<GLTF::FMaterialElement_*,TSizedDefaultAllocator<32>_> * __thiscall
GLTF::FMaterialFactoryImpl::CreateMaterials
          (FMaterialFactoryImpl *this,FAsset *param_1,UObject *param_2,EObjectFlags param_3)

{
  int *piVar1;
  float fVar2;
  byte bVar3;
  EAlphaMode EVar4;
  IMaterialElementFactory *pIVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  float fVar14;
  FMaterialElement *pFVar15;
  bool bVar16;
  int iVar17;
  TArray<GLTF::FMaterialElement_*,TSizedDefaultAllocator<32>_> *pTVar18;
  FMaterialExpression *pFVar19;
  FMaterialExpression *pFVar20;
  FMaterialExpressionParameter *pFVar21;
  FMaterialExpression *pFVar22;
  longlong lVar23;
  FTexture *pFVar24;
  FMaterialExpressionTexture *pFVar25;
  FMaterialExpressionParameter *pFVar26;
  FMD5Hash *pFVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  FTextureTransform *pFVar30;
  FMaterialFactoryImpl *this_00;
  FMaterial *pFVar31;
  uint uVar32;
  FMaterialElement *pFVar33;
  FMaterial *this_01;
  undefined1 auStackY_158 [32];
  FMaterialElement *local_108;
  undefined1 local_100 [4];
  EObjectFlags local_fc;
  uint local_f8;
  FMaterialElement *local_f0;
  FMaterialFactoryImpl *local_e8;
  FPBRMapFactory local_e0;
  FAsset *local_b0;
  FMaterial *local_a8;
  UObject *local_a0;
  FMD5Hash local_98;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_fc = param_3;
  local_e8 = this;
  local_b0 = param_1;
  local_a0 = param_2;
  (**(code **)((longlong)*(this->TextureFactory).Ptr + 0x10))();
  pTVar18 = &this->Materials;
  piVar1 = &(this->Materials).ArrayMax;
  (this->Materials).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar18->AllocatorInstance,0,piVar1);
  }
  if ((this->MaterialElementFactory).Ptr != (IMaterialElementFactory *)0x0) {
    uVar32 = (param_1->Materials).ArrayNum + 1;
    if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
    }
    if (*piVar1 < (int)uVar32) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar32,&pTVar18->AllocatorInstance,(this->Materials).ArrayNum,piVar1);
    }
    DestructItems<TTuple<enum_GLTF::EMessageSeverity,FText>,int>
              ((TTuple<GLTF::EMessageSeverity,FText> *)this->_padding_,(int)this->_padding_);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,piVar1);
    }
    uVar32 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar14 = __real_38d1b717;
    local_f8 = (param_1->Materials).ArrayNum;
    uVar28 = (ulonglong)(int)local_f8;
    local_e0.TextureFactory = (this->TextureFactory).Ptr;
    local_e0.CurrentMaterialElement = (FMaterialElement *)0x0;
    local_e0.GroupName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.GroupName.Data.ArrayNum = 0;
    local_e0.GroupName.Data.ArrayMax = 0;
    this_01 = (FMaterial *)(param_1->Materials).AllocatorInstance.Data;
    pFVar31 = this_01 + uVar28;
    this_00 = this;
    local_e0.ParentPackage = param_2;
    local_e0.Flags = param_3;
    local_a8 = pFVar31;
    while( true ) {
      if ((param_1->Materials).ArrayNum != (int)uVar28) {
        local_100[0] = 0;
        `TCheckedPointerIterator<GLTF::FMaterial_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_100);
      }
      if (this_01 == pFVar31) break;
      if ((this_01->Name).Data.ArrayNum < 2) {
        bVar16 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<8988603957609758855>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialFactory.cpp"
                            ,0x87,"!GLTFMaterial.Name.IsEmpty()");
        if (bVar16) {
          pcVar7 = (code *)swi(3);
          pTVar18 = (TArray<GLTF::FMaterialElement_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar18;
        }
      }
      else {
        pIVar5 = (this_00->MaterialElementFactory).Ptr;
        local_108 = (FMaterialElement *)
                    (**(code **)((longlong)*pIVar5 + 8))
                              (pIVar5,(this_01->Name).Data.AllocatorInstance.Data,param_2,param_3);
        (**(code **)(local_108->_padding_ + 0x20))(local_108,this_01->bIsDoubleSided);
        EVar4 = this_01->AlphaMode;
        if (EVar4 == Opaque) {
LAB_14e632641:
          uVar29 = 0;
        }
        else if (EVar4 == Mask) {
          uVar29 = 1;
        }
        else {
          if (EVar4 != Blend) goto LAB_14e632641;
          uVar29 = 2;
        }
        (**(code **)(local_108->_padding_ + 0x10))(local_108,uVar29);
        pFVar33 = (FMaterialElement *)&param_1->Textures;
        local_e0.CurrentMaterialElement = local_108;
        local_f0 = pFVar33;
        HandleShadingModel(this_00,(TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *)pFVar33,
                           this_01,&local_e0,local_108);
        HandleOpacity(this_00,(TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *)pFVar33,this_01,
                      local_108);
        HandleClearCoat(this_00,(TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *)pFVar33,
                        this_01,&local_e0,local_108);
        HandleTransmission(this_00,(TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *)pFVar33,
                           this_01,&local_e0,local_108);
        HandleSheen(this_00,(TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *)pFVar33,this_01,
                    &local_e0,local_108);
        pFVar15 = local_108;
        if (((this_01->bHasIOR != false) && (this_01->ShadingModel != SpecularGlossiness)) &&
           (this_01->bIsUnlitShadingModel == false)) {
          if (this_01->bHasTransmission == false) {
            (**(code **)(local_108->_padding_ + 0x10))(local_108,2);
            (**(code **)(pFVar15->_padding_ + 0x40))(pFVar15,4);
            (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15,this_01->bIsDoubleSided);
          }
          pFVar19 = FMaterialElement::AddMaterialExpression(pFVar15,Generic);
          ::FString::operator=((FString *)(pFVar19 + 1),L"LinearInterpolate");
          pFVar20 = FMaterialElement::AddMaterialExpression(pFVar15,ConstantScalar);
          *(undefined4 *)&pFVar20[3]._padding_ = 0x3f800000;
          pFVar21 = (FMaterialExpressionParameter *)
                    FMaterialElement::AddMaterialExpression(pFVar15,ConstantScalar);
          FMaterialExpressionParameter::SetName(pFVar21,L"IOR");
          *(float *)&pFVar21[1]._padding_ = this_01->IOR;
          pFVar22 = FMaterialElement::AddMaterialExpression(pFVar15,Generic);
          ::FString::operator=((FString *)(pFVar22 + 1),L"Fresnel");
          lVar23 = (**(code **)(pFVar19->_padding_ + 8))(pFVar19,0);
          *(FMaterialExpression **)(lVar23 + 0x10) = pFVar20;
          *(undefined4 *)(lVar23 + 0x18) = 0;
          lVar23 = (**(code **)(pFVar19->_padding_ + 8))(pFVar19,1);
          *(FMaterialExpressionParameter **)(lVar23 + 0x10) = pFVar21;
          *(undefined4 *)(lVar23 + 0x18) = 0;
          lVar23 = (**(code **)(pFVar19->_padding_ + 8))(pFVar19,2);
          *(FMaterialExpression **)(lVar23 + 0x10) = pFVar22;
          *(undefined4 *)(lVar23 + 0x18) = 0;
          (pFVar15->Refraction).Expression = pFVar19;
          (pFVar15->Refraction).OutputIndex = 0;
          pFVar33 = local_f0;
        }
        pFVar15 = local_108;
        if (((this_01->bHasSpecular != false) && (this_01->ShadingModel != SpecularGlossiness)) &&
           (this_01->bIsUnlitShadingModel == false)) {
          pFVar21 = (FMaterialExpressionParameter *)
                    FMaterialElement::AddMaterialExpression(local_108,ConstantScalar);
          FMaterialExpressionParameter::SetName(pFVar21,L"SpecularFactor");
          *(float *)&pFVar21[1]._padding_ = (this_01->Specular).SpecularFactor;
          pFVar30 = &(this_01->Specular).SpecularMap.TextureTransform;
          if ((this_01->Specular).SpecularMap.bHasTextureTransform == false) {
            pFVar30 = (FTextureTransform *)0x0;
          }
          bVar3 = (this_01->Specular).SpecularMap.TexCoord;
          pFVar24 = GLTF::`anonymous_namespace'::GetTexture
                              (&(this_01->Specular).SpecularMap,
                               (TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *)pFVar33);
          pFVar25 = FPBRMapFactory::CreateTextureMap
                              (&local_e0,pFVar24,(uint)bVar3,L"SpecularMap",Color,pFVar30);
          pFVar26 = pFVar21;
          if (pFVar25 != (FMaterialExpressionTexture *)0x0) {
            pFVar26 = (FMaterialExpressionParameter *)
                      FMaterialElement::AddMaterialExpression(pFVar15,Generic);
            ::FString::operator=(&pFVar26->Name,L"Multiply");
            lVar23 = (**(code **)(pFVar26->_padding_ + 8))(pFVar26,0);
            *(FMaterialExpressionParameter **)(lVar23 + 0x10) = pFVar21;
            *(undefined4 *)(lVar23 + 0x18) = 0;
            lVar23 = (**(code **)(pFVar26->_padding_ + 8))(pFVar26,1);
            *(FMaterialExpressionTexture **)(lVar23 + 0x10) = pFVar25;
            *(undefined4 *)(lVar23 + 0x18) = 4;
          }
          (pFVar15->Specular).Expression = (FMaterialExpression *)pFVar26;
          (pFVar15->Specular).OutputIndex = 0;
        }
        HandleOcclusion(local_e8,(TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *)pFVar33,
                        this_01,&local_e0,local_108);
        local_f0 = local_108;
        if (((this_01->Emissive).TextureIndex != -1) &&
           ((((fVar14 < (float)((uint)(this_01->EmissiveFactor).field0_0x0._s_0.X & uVar32) ||
              (fVar14 < (float)((uint)(this_01->EmissiveFactor).field0_0x0._s_0.Y & uVar32))) ||
             (fVar14 < (float)((uint)(this_01->EmissiveFactor).field0_0x0._s_0.Z & uVar32))) &&
            (this_01->bIsUnlitShadingModel == false)))) {
          ::FString::operator=(&local_e0.GroupName,L"Emission");
          pFVar30 = &(this_01->Emissive).TextureTransform;
          bVar3 = (this_01->Emissive).TexCoord;
          if ((this_01->Emissive).bHasTextureTransform == false) {
            pFVar30 = (FTextureTransform *)0x0;
          }
          pFVar24 = GLTF::`anonymous_namespace'::GetTexture
                              (&this_01->Emissive,
                               (TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *)pFVar33);
          FPBRMapFactory::CreateMap<GLTF::FMaterialExpressionColor,UE::Math::TVector<float>_>
                    (&local_e0,pFVar24,(uint)bVar3,&this_01->EmissiveFactor,L"Emissive",L"Color",
                     Color,&local_f0->EmissiveColor,pFVar30);
        }
        ::FString::operator=(&local_e0.GroupName,L"Normal");
        fVar2 = this_01->NormalScale;
        pFVar30 = &(this_01->Normal).TextureTransform;
        if ((this_01->Normal).bHasTextureTransform == false) {
          pFVar30 = (FTextureTransform *)0x0;
        }
        bVar3 = (this_01->Normal).TexCoord;
        pFVar24 = GLTF::`anonymous_namespace'::GetTexture
                            (&this_01->Normal,
                             (TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *)pFVar33);
        FPBRMapFactory::CreateNormalMap(&local_e0,pFVar24,(uint)bVar3,fVar2,pFVar30);
        pFVar27 = FMaterial::GetHash(this_01,&local_98);
        uVar11 = pFVar27->Bytes[0];
        uVar12 = pFVar27->Bytes[1];
        uVar13 = pFVar27->Bytes[2];
        uVar8 = *(undefined4 *)(pFVar27->Bytes + 3);
        uVar9 = *(undefined4 *)(pFVar27->Bytes + 7);
        uVar10 = *(undefined4 *)(pFVar27->Bytes + 0xb);
        (local_108->GLTFMaterialHash).bIsValid = pFVar27->bIsValid;
        (local_108->GLTFMaterialHash).Bytes[0] = uVar11;
        (local_108->GLTFMaterialHash).Bytes[1] = uVar12;
        (local_108->GLTFMaterialHash).Bytes[2] = uVar13;
        *(undefined4 *)((local_108->GLTFMaterialHash).Bytes + 3) = uVar8;
        *(undefined4 *)((local_108->GLTFMaterialHash).Bytes + 7) = uVar9;
        *(undefined4 *)((local_108->GLTFMaterialHash).Bytes + 0xb) = uVar10;
        (local_108->GLTFMaterialHash).Bytes[0xf] = pFVar27->Bytes[0xf];
        (**(code **)(local_108->_padding_ + 0x48))();
        pFVar6 = (pTVar18->AllocatorInstance).Data;
        piVar1 = &(this->Materials).ArrayMax;
        if (((pFVar6 <= (FScriptContainerElement *)&local_108) &&
            ((FScriptContainerElement *)&local_108 < pFVar6 + (longlong)*piVar1 * 8)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          pTVar18 = (TArray<GLTF::FMaterialElement_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar18;
        }
        iVar17 = (this->Materials).ArrayNum;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar18->AllocatorInstance,piVar1);
        }
        (this->Materials).ArrayNum = iVar17 + 1;
        *(FMaterialElement **)((pTVar18->AllocatorInstance).Data + (longlong)iVar17 * 8) = local_108
        ;
        this_00 = local_e8;
        param_1 = local_b0;
        pFVar31 = local_a8;
        param_2 = local_a0;
        param_3 = local_fc;
      }
      uVar28 = (ulonglong)local_f8;
      this_01 = this_01 + 1;
    }
    if (local_e0.GroupName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.GroupName.Data.AllocatorInstance.Data);
    }
  }
  return pTVar18;
}

// HandleClearCoat @ 14e640640

void __thiscall
GLTF::FMaterialFactoryImpl::HandleClearCoat
          (FMaterialFactoryImpl *this,TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *param_1,
          FMaterial *param_2,FPBRMapFactory *param_3,FMaterialElement *param_4)

{
  byte bVar1;
  bool bVar2;
  FMaterialExpressionParameter *pFVar3;
  FMaterialExpressionParameter *this_00;
  FTexture *pFVar4;
  FMaterialExpressionTexture *pFVar5;
  FMaterialExpressionTexture *pFVar6;
  FMaterialExpressionParameter *pFVar7;
  longlong lVar8;
  FMaterialExpression *pFVar9;
  FMaterialExpressionTextureCoordinate *pFVar10;
  FMaterialExpression *pFVar11;
  FTextureTransform *pFVar12;
  
  if (((param_2->bHasClearCoat != false) && (param_2->bIsUnlitShadingModel == false)) &&
     (__real_322bcc77 <
      (float)((uint)(param_2->ClearCoat).ClearCoatFactor & __xmm_7fffffff7fffffff7fffffff7fffffff)))
  {
    (**(code **)(param_4->_padding_ + 0x38))(param_4,2);
    pFVar3 = (FMaterialExpressionParameter *)
             FMaterialElement::AddMaterialExpression(param_4,ConstantScalar);
    *(float *)&pFVar3[1]._padding_ = (param_2->ClearCoat).ClearCoatFactor;
    FMaterialExpressionParameter::SetName(pFVar3,L"ClearCoatFactor");
    this_00 = (FMaterialExpressionParameter *)
              FMaterialElement::AddMaterialExpression(param_4,ConstantScalar);
    *(float *)&this_00[1]._padding_ = (param_2->ClearCoat).Roughness;
    FMaterialExpressionParameter::SetName(this_00,L"ClearCoatRoughnessFactor");
    bVar1 = (param_2->ClearCoat).ClearCoatMap.TexCoord;
    pFVar12 = &(param_2->ClearCoat).ClearCoatMap.TextureTransform;
    if ((param_2->ClearCoat).ClearCoatMap.bHasTextureTransform == false) {
      pFVar12 = (FTextureTransform *)0x0;
    }
    pFVar4 = GLTF::`anonymous_namespace'::GetTexture(&(param_2->ClearCoat).ClearCoatMap,param_1);
    pFVar5 = FPBRMapFactory::CreateTextureMap(param_3,pFVar4,(uint)bVar1,L"ClearCoat",Color,pFVar12)
    ;
    bVar2 = (param_2->ClearCoat).RoughnessMap.bHasTextureTransform;
    bVar1 = (param_2->ClearCoat).RoughnessMap.TexCoord;
    pFVar4 = GLTF::`anonymous_namespace'::GetTexture(&(param_2->ClearCoat).RoughnessMap,param_1);
    pFVar12 = &(param_2->ClearCoat).RoughnessMap.TextureTransform;
    if (bVar2 == false) {
      pFVar12 = (FTextureTransform *)0x0;
    }
    pFVar6 = FPBRMapFactory::CreateTextureMap
                       (param_3,pFVar4,(uint)bVar1,L"ClearCoatRoughness",Color,pFVar12);
    pFVar7 = pFVar3;
    if (pFVar5 != (FMaterialExpressionTexture *)0x0) {
      pFVar7 = (FMaterialExpressionParameter *)
               FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=(&pFVar7->Name,L"Multiply");
      lVar8 = (**(code **)(pFVar7->_padding_ + 8))(pFVar7,0);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(FMaterialExpressionParameter **)(lVar8 + 0x10) = pFVar3;
      lVar8 = (**(code **)(pFVar7->_padding_ + 8))(pFVar7,1);
      *(FMaterialExpressionTexture **)(lVar8 + 0x10) = pFVar5;
      *(undefined4 *)(lVar8 + 0x18) = 1;
    }
    pFVar3 = this_00;
    if (pFVar6 != (FMaterialExpressionTexture *)0x0) {
      pFVar3 = (FMaterialExpressionParameter *)
               FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=(&pFVar3->Name,L"Multiply");
      lVar8 = (**(code **)(pFVar3->_padding_ + 8))(pFVar3,0);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(FMaterialExpressionParameter **)(lVar8 + 0x10) = this_00;
      lVar8 = (**(code **)(pFVar3->_padding_ + 8))(pFVar3,1);
      *(FMaterialExpressionTexture **)(lVar8 + 0x10) = pFVar6;
      *(undefined4 *)(lVar8 + 0x18) = 2;
    }
    (param_4->ClearCoat).Expression = (FMaterialExpression *)pFVar7;
    (param_4->ClearCoatRoughness).Expression = (FMaterialExpression *)pFVar3;
    (param_4->ClearCoat).OutputIndex = 0;
    (param_4->ClearCoatRoughness).OutputIndex = 0;
    bVar1 = (param_2->ClearCoat).NormalMap.TexCoord;
    pFVar12 = &(param_2->ClearCoat).NormalMap.TextureTransform;
    if ((param_2->ClearCoat).NormalMap.bHasTextureTransform == false) {
      pFVar12 = (FTextureTransform *)0x0;
    }
    pFVar4 = GLTF::`anonymous_namespace'::GetTexture(&(param_2->ClearCoat).NormalMap,param_1);
    pFVar5 = FPBRMapFactory::CreateTextureMap
                       (param_3,pFVar4,(uint)bVar1,L"ClearCoatNormal",Normal,pFVar12);
    if (pFVar5 != (FMaterialExpressionTexture *)0x0) {
      pFVar3 = (FMaterialExpressionParameter *)
               FMaterialElement::AddMaterialExpression(param_4,ConstantScalar);
      *(float *)&pFVar3[1]._padding_ = (param_2->ClearCoat).NormalMapUVScale;
      FMaterialExpressionParameter::SetName(pFVar3,L"NormalMapUVScale");
      pFVar9 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar9 + 1),L"Multiply");
      pFVar10 = FMaterialElement::AddMaterialExpression<GLTF::FMaterialExpressionTextureCoordinate>
                          (param_4);
      pFVar10->CoordinateIndex = (uint)(param_2->ClearCoat).NormalMap.TexCoord;
      pFVar11 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar11 + 1),L"ClearCoatNormalCustomOutput");
      lVar8 = (**(code **)(pFVar9->_padding_ + 8))(pFVar9,0);
      *(FMaterialExpressionParameter **)(lVar8 + 0x10) = pFVar3;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      lVar8 = (**(code **)(pFVar9->_padding_ + 8))(pFVar9,1);
      *(FMaterialExpressionTextureCoordinate **)(lVar8 + 0x10) = pFVar10;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      lVar8 = (**(code **)(pFVar5->_padding_ + 8))(pFVar5,0);
      *(FMaterialExpression **)(lVar8 + 0x10) = pFVar9;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      lVar8 = (**(code **)(pFVar11->_padding_ + 8))(pFVar11,0);
      *(FMaterialExpressionTexture **)(lVar8 + 0x10) = pFVar5;
      *(undefined4 *)(lVar8 + 0x18) = 0;
    }
  }
  return;
}

// HandleEmissive @ 14e6409f0

void __thiscall
GLTF::FMaterialFactoryImpl::HandleEmissive
          (FMaterialFactoryImpl *this,TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *param_1,
          FMaterial *param_2,FPBRMapFactory *param_3,FMaterialElement *param_4)

{
  byte bVar1;
  FTexture *pFVar2;
  FTextureTransform *pFVar3;
  
  if ((((param_2->Emissive).TextureIndex != -1) &&
      (((__real_38d1b717 <
         (float)((uint)(param_2->EmissiveFactor).field0_0x0._s_0.X &
                __xmm_7fffffff7fffffff7fffffff7fffffff) ||
        (__real_38d1b717 <
         (float)((uint)(param_2->EmissiveFactor).field0_0x0._s_0.Y &
                __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
       (__real_38d1b717 <
        (float)((uint)(param_2->EmissiveFactor).field0_0x0._s_0.Z &
               __xmm_7fffffff7fffffff7fffffff7fffffff))))) &&
     (param_2->bIsUnlitShadingModel == false)) {
    ::FString::operator=(&param_3->GroupName,L"Emission");
    bVar1 = (param_2->Emissive).TexCoord;
    pFVar3 = &(param_2->Emissive).TextureTransform;
    if ((param_2->Emissive).bHasTextureTransform == false) {
      pFVar3 = (FTextureTransform *)0x0;
    }
    pFVar2 = GLTF::`anonymous_namespace'::GetTexture(&param_2->Emissive,param_1);
    FPBRMapFactory::CreateMap<GLTF::FMaterialExpressionColor,UE::Math::TVector<float>_>
              (param_3,pFVar2,(uint)bVar1,&param_2->EmissiveFactor,L"Emissive",L"Color",Color,
               &param_4->EmissiveColor,pFVar3);
  }
  return;
}

// HandleIOR @ 14e640b30

void __thiscall
GLTF::FMaterialFactoryImpl::HandleIOR
          (FMaterialFactoryImpl *this,TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *param_1,
          FMaterial *param_2,FPBRMapFactory *param_3,FMaterialElement *param_4)

{
  FMaterialExpression *pFVar1;
  FMaterialExpression *pFVar2;
  FMaterialExpressionParameter *this_00;
  FMaterialExpression *pFVar3;
  longlong lVar4;
  
  if (((param_2->bHasIOR != false) && (param_2->ShadingModel != SpecularGlossiness)) &&
     (param_2->bIsUnlitShadingModel == false)) {
    if (param_2->bHasTransmission == false) {
      (**(code **)(param_4->_padding_ + 0x10))(param_4,2);
      (**(code **)(param_4->_padding_ + 0x40))(param_4,4);
      (**(code **)(param_4->_padding_ + 0x20))(param_4,param_2->bIsDoubleSided);
    }
    pFVar1 = FMaterialElement::AddMaterialExpression(param_4,Generic);
    ::FString::operator=((FString *)(pFVar1 + 1),L"LinearInterpolate");
    pFVar2 = FMaterialElement::AddMaterialExpression(param_4,ConstantScalar);
    *(undefined4 *)&pFVar2[3]._padding_ = 0x3f800000;
    this_00 = (FMaterialExpressionParameter *)
              FMaterialElement::AddMaterialExpression(param_4,ConstantScalar);
    FMaterialExpressionParameter::SetName(this_00,L"IOR");
    *(float *)&this_00[1]._padding_ = param_2->IOR;
    pFVar3 = FMaterialElement::AddMaterialExpression(param_4,Generic);
    ::FString::operator=((FString *)(pFVar3 + 1),L"Fresnel");
    lVar4 = (**(code **)(pFVar1->_padding_ + 8))(pFVar1,0);
    *(FMaterialExpression **)(lVar4 + 0x10) = pFVar2;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    lVar4 = (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
    *(FMaterialExpressionParameter **)(lVar4 + 0x10) = this_00;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    lVar4 = (**(code **)(pFVar1->_padding_ + 8))(pFVar1,2);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(FMaterialExpression **)(lVar4 + 0x10) = pFVar3;
    (param_4->Refraction).Expression = pFVar1;
    (param_4->Refraction).OutputIndex = 0;
  }
  return;
}

// HandleNormal @ 14e640cb0

void __thiscall
GLTF::FMaterialFactoryImpl::HandleNormal
          (FMaterialFactoryImpl *this,TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *param_1,
          FMaterial *param_2,FPBRMapFactory *param_3,FMaterialElement *param_4)

{
  float fVar1;
  bool bVar2;
  byte bVar3;
  FTexture *pFVar4;
  FTextureTransform *pFVar5;
  
  ::FString::operator=(&param_3->GroupName,L"Normal");
  fVar1 = param_2->NormalScale;
  bVar2 = (param_2->Normal).bHasTextureTransform;
  bVar3 = (param_2->Normal).TexCoord;
  pFVar4 = GLTF::`anonymous_namespace'::GetTexture(&param_2->Normal,param_1);
  pFVar5 = &(param_2->Normal).TextureTransform;
  if (bVar2 == false) {
    pFVar5 = (FTextureTransform *)0x0;
  }
  FPBRMapFactory::CreateNormalMap(param_3,pFVar4,(uint)bVar3,fVar1,pFVar5);
  return;
}

// HandleOcclusion @ 14e640d60

void __thiscall
GLTF::FMaterialFactoryImpl::HandleOcclusion
          (FMaterialFactoryImpl *this,TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *param_1,
          FMaterial *param_2,FPBRMapFactory *param_3,FMaterialElement *param_4)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FTexture *pFVar5;
  FMaterialExpressionTexture *pFVar6;
  FMaterialExpression *pFVar7;
  FMaterialExpression *pFVar8;
  FMaterialExpressionParameter *this_00;
  longlong lVar9;
  FTextureTransform *pFVar10;
  wchar_t *pwVar11;
  
  ::FString::operator=(&param_3->GroupName,L"Occlusion");
  bVar4 = (param_2->Occlusion).bHasTextureTransform;
  bVar1 = (param_2->Occlusion).TexCoord;
  pFVar5 = GLTF::`anonymous_namespace'::GetTexture(&param_2->Occlusion,param_1);
  pFVar10 = &(param_2->Occlusion).TextureTransform;
  if (bVar4 == false) {
    pFVar10 = (FTextureTransform *)0x0;
  }
  pFVar6 = FPBRMapFactory::CreateTextureMap
                     (param_3,pFVar5,(uint)bVar1,L"Occlusion",Grayscale,pFVar10);
  if (pFVar6 != (FMaterialExpressionTexture *)0x0) {
    pFVar7 = FMaterialElement::AddMaterialExpression(param_4,ConstantScalar);
    *(undefined4 *)&pFVar7[3]._padding_ = 0x3f800000;
    pFVar8 = FMaterialElement::AddMaterialExpression(param_4,Generic);
    ::FString::operator=((FString *)(pFVar8 + 1),L"LinearInterpolate");
    this_00 = (FMaterialExpressionParameter *)
              FMaterialElement::AddMaterialExpression(param_4,ConstantScalar);
    iVar2 = (int)this_00->_padding_;
    if (((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 4)) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_589650665588916151>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialExpressions.cpp"
                         ,0x49,
                         "Type == EMaterialExpressionType::ConstantColor || Type == EMaterialExpressionType::ConstantScalar || Type == EMaterialExpressionType::Texture"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    ::FString::operator=(&this_00->Name,L"Occlusion Strength");
    if ((param_3->GroupName).Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_3->GroupName).Data.AllocatorInstance.Data;
    }
    FMaterialExpressionParameter::SetGroupName(this_00,pwVar11);
    *(float *)&this_00[1]._padding_ = param_2->OcclusionStrength;
    lVar9 = (**(code **)(pFVar8->_padding_ + 8))(pFVar8,0);
    *(FMaterialExpression **)(lVar9 + 0x10) = pFVar7;
    *(undefined4 *)(lVar9 + 0x18) = 0;
    lVar9 = (**(code **)(pFVar8->_padding_ + 8))(pFVar8,1);
    *(FMaterialExpressionTexture **)(lVar9 + 0x10) = pFVar6;
    *(undefined4 *)(lVar9 + 0x18) = 1;
    lVar9 = (**(code **)(pFVar8->_padding_ + 8))(pFVar8,2);
    *(FMaterialExpressionParameter **)(lVar9 + 0x10) = this_00;
    *(undefined4 *)(lVar9 + 0x18) = 0;
    (param_4->AmbientOcclusion).Expression = pFVar8;
    (param_4->AmbientOcclusion).OutputIndex = 0;
  }
  return;
}

// HandleOpacity @ 14e640f30

void __thiscall
GLTF::FMaterialFactoryImpl::HandleOpacity
          (FMaterialFactoryImpl *this,TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *param_1,
          FMaterial *param_2,FMaterialElement *param_3)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMaterialExpressionTexture *pFVar6;
  FText *pFVar7;
  FMaterialExpressionParameter *pFVar8;
  FMaterialExpressionColor *pFVar9;
  FMaterialExpression *pFVar10;
  longlong lVar11;
  FMaterialExpression *pFVar12;
  FString local_48;
  FString local_38;
  FString local_28;
  FText local_18;
  
  if ((param_2->AlphaMode != Opaque) && (param_2->bHasTransmission == false)) {
    ::FString::FString(&local_48,L"BaseColor Map");
    pFVar6 = GLTF::`anonymous_namespace'::FindExpression<GLTF::FMaterialExpressionTexture>
                       (&local_48,param_3);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (param_2->AlphaMode == Mask) {
      ::FString::FString(&local_28,L"BaseColor");
      pFVar9 = GLTF::`anonymous_namespace'::FindExpression<GLTF::FMaterialExpressionColor>
                         (&local_28,param_3);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      pFVar10 = FMaterialElement::AddMaterialExpression(param_3,Generic);
      ::FString::operator=((FString *)(pFVar10 + 1),L"Multiply");
      lVar11 = (**(code **)(pFVar10->_padding_ + 8))(pFVar10,1);
      *(FMaterialExpressionColor **)(lVar11 + 0x10) = pFVar9;
      *(undefined4 *)(lVar11 + 0x18) = 4;
      lVar11 = (**(code **)(pFVar10->_padding_ + 8))(pFVar10,0);
      *(FMaterialExpressionTexture **)(lVar11 + 0x10) = pFVar6;
      *(undefined4 *)(lVar11 + 0x18) = 4;
      pFVar12 = FMaterialElement::AddMaterialExpression(param_3,FunctionCall);
      ::FString::operator=
                ((FString *)(pFVar12 + 1),
                 L"/Engine/Functions/Engine_MaterialFunctions02/SmoothStep.SmoothStep");
      pFVar8 = (FMaterialExpressionParameter *)
               FMaterialElement::AddMaterialExpression(param_3,ConstantScalar);
      FMaterialExpressionParameter::SetName(pFVar8,L"Alpha Cuttof");
      FMaterialExpressionParameter::SetGroupName(pFVar8,L"Opacity");
      *(float *)&pFVar8[1]._padding_ = param_2->AlphaCutoff;
      lVar11 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12,0);
      *(FMaterialExpression **)(lVar11 + 0x10) = pFVar10;
      iVar5 = 0;
      *(undefined4 *)(lVar11 + 0x18) = 0;
      lVar11 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12,1);
      *(FMaterialExpressionParameter **)(lVar11 + 0x10) = pFVar8;
      *(undefined4 *)(lVar11 + 0x18) = 0;
      lVar11 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12,2);
      *(FMaterialExpressionParameter **)(lVar11 + 0x10) = pFVar8;
      *(undefined4 *)(lVar11 + 0x18) = 0;
      (param_3->Opacity).Expression = pFVar12;
    }
    else {
      if (param_2->AlphaMode != Blend) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8988603957609758949>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialFactory.cpp"
                           ,0xe5,"false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar7 = FText::AsLocalizable_Advanced_LocText
                           (&local_18,L"InterchangeGLTFMaterialFactory",L"InvalidAlphaMode",
                            L"AlphaMode Opaque not supported for Opacity");
        piVar1 = (int *)((longlong)&this->_padding_ + 4);
        iVar5 = (int)this->_padding_;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)this,piVar1);
        }
        *(int *)&this->_padding_ = iVar5 + 1;
        lVar2 = this->_padding_;
        lVar11 = (longlong)iVar5 * 3 + 1;
        *(undefined4 *)(lVar2 + -8 + lVar11 * 8) = 1;
        FText::FText((FText *)(lVar2 + lVar11 * 8),pFVar7);
        if (local_18.TextData.Reference == (ITextData *)0x0) {
          return;
        }
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
        return;
      }
      pFVar8 = (FMaterialExpressionParameter *)
               FMaterialElement::AddMaterialExpression(param_3,ConstantScalar);
      FMaterialExpressionParameter::SetName(pFVar8,L"IOR");
      FMaterialExpressionParameter::SetGroupName(pFVar8,L"Opacity");
      *(undefined4 *)&pFVar8[1]._padding_ = 0x3f800000;
      iVar5 = 0;
      (param_3->Refraction).Expression = (FMaterialExpression *)pFVar8;
      (param_3->Refraction).OutputIndex = 0;
      ::FString::FString(&local_38,L"BaseColor");
      pFVar9 = GLTF::`anonymous_namespace'::FindExpression<GLTF::FMaterialExpressionColor>
                         (&local_38,param_3);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (pFVar6 == (FMaterialExpressionTexture *)0x0) {
        iVar5 = 4;
        (param_3->Opacity).Expression = (FMaterialExpression *)pFVar9;
      }
      else {
        pFVar10 = FMaterialElement::AddMaterialExpression(param_3,Generic);
        ::FString::operator=((FString *)(pFVar10 + 1),L"Multiply");
        lVar11 = (**(code **)(pFVar10->_padding_ + 8))(pFVar10,1);
        *(FMaterialExpressionColor **)(lVar11 + 0x10) = pFVar9;
        *(undefined4 *)(lVar11 + 0x18) = 4;
        lVar11 = (**(code **)(pFVar10->_padding_ + 8))(pFVar10,0);
        *(FMaterialExpressionTexture **)(lVar11 + 0x10) = pFVar6;
        *(undefined4 *)(lVar11 + 0x18) = 4;
        (param_3->Opacity).Expression = pFVar10;
      }
    }
    (param_3->Opacity).OutputIndex = iVar5;
  }
  return;
}

// HandleShadingModel @ 14e6412b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
GLTF::FMaterialFactoryImpl::HandleShadingModel
          (FMaterialFactoryImpl *this,TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *param_1,
          FMaterial *param_2,FPBRMapFactory *param_3,FMaterialElement *param_4)

{
  FString *this_00;
  double dVar1;
  double dVar2;
  bool bVar3;
  byte bVar4;
  float fVar5;
  FTexture *pFVar6;
  longlong lVar7;
  FMaterialExpression *pFVar8;
  FMaterialExpression *pFVar9;
  FMaterialExpressionInput *pFVar10;
  longlong lVar11;
  FTextureTransform *pFVar12;
  wchar_t *pwVar13;
  undefined1 auStackY_178 [32];
  uint uVar14;
  ETextureMode EVar15;
  undefined1 local_110 [8];
  float afStack_108 [2];
  undefined8 uStack_100;
  undefined4 auStack_f8 [2];
  longlong alStack_f0 [20];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = &param_3->GroupName;
  ::FString::operator=(this_00,L"GGX");
  pFVar10 = &param_4->BaseColor;
  if (param_2->bIsUnlitShadingModel != false) {
    pFVar10 = &param_4->EmissiveColor;
    (**(code **)(param_4->_padding_ + 0x38))(param_4,4);
  }
  local_50 = 0;
  local_4c = 4;
  if (param_2->ShadingModel == MetallicRoughness) {
    ::FString::operator=(this_00,L"Base Color");
    bVar3 = (param_2->BaseColor).bHasTextureTransform;
    bVar4 = (param_2->BaseColor).TexCoord;
    pFVar6 = GLTF::`anonymous_namespace'::GetTexture(&param_2->BaseColor,param_1);
    pFVar12 = &(param_2->BaseColor).TextureTransform;
    if (bVar3 == false) {
      pFVar12 = (FTextureTransform *)0x0;
    }
    FPBRMapFactory::CreateMap<GLTF::FMaterialExpressionColor,UE::Math::TVector4<float>_>
              (param_3,pFVar6,(uint)bVar4,&param_2->BaseColorFactor,L"BaseColor",(wchar_t *)0x0,
               Color,pFVar10,pFVar12);
    if (param_2->bIsUnlitShadingModel != false) {
      return;
    }
    if (local_50 == local_4c) {
      local_50 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<GLTF::FPBRMapFactory::FMapChannel>_>
                           (0x830,(ForElementType<GLTF::FPBRMapFactory::FMapChannel> *)local_110,
                            &local_4c);
    }
    lVar7 = (longlong)(int)local_50;
    local_50 = local_50 + 1;
    (&uStack_100)[lVar7 * 6] = L"Metallic Factor";
    alStack_f0[lVar7 * 6] = (longlong)&param_4->Metallic;
    *(float *)(local_110 + lVar7 * 0x30) = (param_2->MetallicRoughness).MetallicFactor;
    auStack_f8[lVar7 * 0xc] = 3;
    alStack_f0[lVar7 * 6 + 1] = 0;
    if (local_50 == local_4c) {
      local_50 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<GLTF::FPBRMapFactory::FMapChannel>_>
                           (0x830,(ForElementType<GLTF::FPBRMapFactory::FMapChannel> *)local_110,
                            &local_4c);
    }
    bVar4 = (param_2->MetallicRoughness).Map.TexCoord;
    pFVar12 = &(param_2->MetallicRoughness).Map.TextureTransform;
    lVar7 = (longlong)(int)local_50;
    if ((param_2->MetallicRoughness).Map.bHasTextureTransform == false) {
      pFVar12 = (FTextureTransform *)0x0;
    }
    local_50 = local_50 + 1;
    (&uStack_100)[lVar7 * 6] = L"Roughness Factor";
    alStack_f0[lVar7 * 6] = (longlong)&param_4->Roughness;
    *(float *)(local_110 + lVar7 * 0x30) = (param_2->MetallicRoughness).RoughnessFactor;
    auStack_f8[lVar7 * 0xc] = 2;
    alStack_f0[lVar7 * 6 + 1] = 0;
    uVar14 = local_50;
    pFVar6 = GLTF::`anonymous_namespace'::GetTexture(&(param_2->MetallicRoughness).Map,param_1);
    EVar15 = Grayscale;
    pwVar13 = L"MetallicRoughness";
  }
  else {
    if (param_2->ShadingModel != SpecularGlossiness) {
      return;
    }
    pFVar8 = FMaterialElement::AddMaterialExpression(param_4,FunctionCall);
    ::FString::operator=
              ((FString *)(pFVar8 + 1),
               L"/InterchangeAssets/gltf/SpecGlossToMetalRoughness.SpecGlossToMetalRoughness");
    pFVar10->Expression = pFVar8;
    pFVar10->OutputIndex = 0;
    if (param_2->bIsUnlitShadingModel != false) {
      return;
    }
    (param_4->Metallic).Expression = pFVar8;
    (param_4->Metallic).OutputIndex = 1;
    pFVar9 = FMaterialElement::AddMaterialExpression(param_4,Generic);
    ::FString::operator=((FString *)(pFVar9 + 1),L"OneMinus");
    (param_4->Roughness).Expression = pFVar9;
    (param_4->Roughness).OutputIndex = 0;
    ::FString::operator=(this_00,L"Diffuse Color");
    bVar3 = (param_2->BaseColor).bHasTextureTransform;
    pFVar10 = (FMaterialExpressionInput *)(**(code **)(pFVar8->_padding_ + 8))(pFVar8,1);
    bVar4 = (param_2->BaseColor).TexCoord;
    pFVar6 = GLTF::`anonymous_namespace'::GetTexture(&param_2->BaseColor,param_1);
    pFVar12 = &(param_2->BaseColor).TextureTransform;
    if (bVar3 == false) {
      pFVar12 = (FTextureTransform *)0x0;
    }
    FPBRMapFactory::CreateMap<GLTF::FMaterialExpressionColor,UE::Math::TVector4<float>_>
              (param_3,pFVar6,(uint)bVar4,&param_2->BaseColorFactor,L"Diffuse",L"Color",Color,
               pFVar10,pFVar12);
    lVar7 = (**(code **)(pFVar8->_padding_ + 8))(pFVar8,0);
    if (local_50 == local_4c) {
      local_50 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<GLTF::FPBRMapFactory::FMapChannel>_>
                           (0x830,(ForElementType<GLTF::FPBRMapFactory::FMapChannel> *)local_110,
                            &local_4c);
    }
    dVar1 = (param_2->SpecularGlossiness).SpecularFactor.field0_0x0._s_0.X;
    dVar2 = (param_2->SpecularGlossiness).SpecularFactor.field0_0x0._s_0.Y;
    lVar11 = (longlong)(int)local_50;
    local_50 = local_50 + 1;
    (&uStack_100)[lVar11 * 6] = L"Specular Factor";
    auStack_f8[lVar11 * 0xc] = 6;
    alStack_f0[lVar11 * 6] = lVar7;
    alStack_f0[lVar11 * 6 + 1] = 0;
    *(float *)(local_110 + lVar11 * 0x30) = (float)dVar1;
    dVar1 = (param_2->SpecularGlossiness).SpecularFactor.field0_0x0._s_0.Z;
    *(float *)(local_110 + lVar11 * 0x30 + 4) = (float)dVar2;
    afStack_108[lVar11 * 0xc] = (float)dVar1;
    lVar7 = (**(code **)(pFVar9->_padding_ + 8))(pFVar9,0);
    if (local_50 == local_4c) {
      local_50 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<GLTF::FPBRMapFactory::FMapChannel>_>
                           (0x830,(ForElementType<GLTF::FPBRMapFactory::FMapChannel> *)local_110,
                            &local_4c);
    }
    lVar11 = (longlong)(int)local_50;
    pFVar12 = &(param_2->SpecularGlossiness).Map.TextureTransform;
    if ((param_2->SpecularGlossiness).Map.bHasTextureTransform == false) {
      pFVar12 = (FTextureTransform *)0x0;
    }
    local_50 = local_50 + 1;
    (&uStack_100)[lVar11 * 6] = L"Glossiness Factor";
    fVar5 = (param_2->SpecularGlossiness).GlossinessFactor;
    alStack_f0[lVar11 * 6 + 1] = 0;
    bVar4 = (param_2->SpecularGlossiness).Map.TexCoord;
    *(float *)(local_110 + lVar11 * 0x30) = fVar5;
    auStack_f8[lVar11 * 0xc] = 4;
    alStack_f0[lVar11 * 6] = lVar7;
    uVar14 = local_50;
    pFVar6 = GLTF::`anonymous_namespace'::GetTexture(&(param_2->SpecularGlossiness).Map,param_1);
    EVar15 = Color;
    pwVar13 = L"SpecularGlossiness";
  }
  FPBRMapFactory::CreateMultiMap
            (param_3,pFVar6,(uint)bVar4,pwVar13,(FMapChannel *)local_110,uVar14,EVar15,pFVar12);
  return;
}

// HandleSheen @ 14e641720

void __thiscall
GLTF::FMaterialFactoryImpl::HandleSheen
          (FMaterialFactoryImpl *this,TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *param_1,
          FMaterial *param_2,FPBRMapFactory *param_3,FMaterialElement *param_4)

{
  EMaterialExpressionType EVar1;
  int iVar2;
  FMaterialExpression *pFVar3;
  code *pcVar4;
  bool bVar5;
  FMaterialExpression *pFVar6;
  FMaterialExpression *pFVar7;
  longlong lVar8;
  FMaterialExpression *pFVar9;
  
  if ((param_2->bHasSheen != false) && (param_2->bIsUnlitShadingModel == false)) {
    pFVar6 = FMaterialElement::AddMaterialExpression(param_4,FunctionCall);
    ::FString::operator=
              ((FString *)(pFVar6 + 1),
               L"/Engine/Functions/Engine_MaterialFunctions01/Shading/FuzzyShading.FuzzyShading");
    pFVar7 = FMaterialElement::AddMaterialExpression(param_4,ConstantColor);
    EVar1 = pFVar7->Type;
    if ((EVar1 != ConstantColor) &&
       (((EVar1 != ConstantScalar && (EVar1 != Texture)) &&
        (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_589650665588916151>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialExpressions.cpp"
                            ,0x49,
                            "Type == EMaterialExpressionType::ConstantColor || Type == EMaterialExpressionType::ConstantScalar || Type == EMaterialExpressionType::Texture"
                           ), bVar5)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ::FString::operator=((FString *)(pFVar7 + 1),L"Fuzzyness");
    *(undefined4 *)&pFVar7[3]._padding_ = 0x3f666666;
    *(undefined4 *)((longlong)&pFVar7[3]._padding_ + 4) = 0x3f4ccccd;
    pFVar7[3].Type = 0x40000000;
    *(undefined4 *)&pFVar7[3].field_0xc = 0x3f800000;
    lVar8 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,2);
    *(FMaterialExpression **)(lVar8 + 0x10) = pFVar7;
    *(undefined4 *)(lVar8 + 0x18) = 1;
    lVar8 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,4);
    *(FMaterialExpression **)(lVar8 + 0x10) = pFVar7;
    *(undefined4 *)(lVar8 + 0x18) = 2;
    lVar8 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,3);
    *(FMaterialExpression **)(lVar8 + 0x10) = pFVar7;
    *(undefined4 *)(lVar8 + 0x18) = 3;
    pFVar3 = (param_4->BaseColor).Expression;
    if (pFVar3 != (FMaterialExpression *)0x0) {
      iVar2 = (param_4->BaseColor).OutputIndex;
      lVar8 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,0);
      if (iVar2 != -1) {
        *(FMaterialExpression **)(lVar8 + 0x10) = pFVar3;
        *(int *)(lVar8 + 0x18) = iVar2;
      }
      pFVar9 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar9 + 1),L"LinearInterpolate");
      lVar8 = (**(code **)(pFVar9->_padding_ + 8))(pFVar9,0);
      *(FMaterialExpression **)(lVar8 + 0x10) = pFVar6;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      iVar2 = (param_4->BaseColor).OutputIndex;
      lVar8 = (**(code **)(pFVar9->_padding_ + 8))(pFVar9,1);
      if (iVar2 != -1) {
        *(FMaterialExpression **)(lVar8 + 0x10) = pFVar3;
        *(int *)(lVar8 + 0x18) = iVar2;
      }
      lVar8 = (**(code **)(pFVar9->_padding_ + 8))(pFVar9,2);
      *(FMaterialExpression **)(lVar8 + 0x10) = pFVar7;
      *(undefined4 *)(lVar8 + 0x18) = 4;
      (param_4->BaseColor).Expression = pFVar9;
      (param_4->BaseColor).OutputIndex = 0;
    }
    pFVar7 = (param_4->Normal).Expression;
    if (pFVar7 != (FMaterialExpression *)0x0) {
      iVar2 = (param_4->Normal).OutputIndex;
      lVar8 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,1);
      if (iVar2 != -1) {
        *(FMaterialExpression **)(lVar8 + 0x10) = pFVar7;
        *(int *)(lVar8 + 0x18) = iVar2;
      }
    }
  }
  return;
}

// HandleSpecular @ 14e641940

void __thiscall
GLTF::FMaterialFactoryImpl::HandleSpecular
          (FMaterialFactoryImpl *this,TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *param_1,
          FMaterial *param_2,FPBRMapFactory *param_3,FMaterialElement *param_4)

{
  bool bVar1;
  byte bVar2;
  FMaterialExpressionParameter *this_00;
  FTexture *pFVar3;
  FMaterialExpressionTexture *pFVar4;
  FMaterialExpressionParameter *pFVar5;
  longlong lVar6;
  FTextureTransform *pFVar7;
  
  if (((param_2->bHasSpecular != false) && (param_2->ShadingModel != SpecularGlossiness)) &&
     (param_2->bIsUnlitShadingModel == false)) {
    this_00 = (FMaterialExpressionParameter *)
              FMaterialElement::AddMaterialExpression(param_4,ConstantScalar);
    FMaterialExpressionParameter::SetName(this_00,L"SpecularFactor");
    *(float *)&this_00[1]._padding_ = (param_2->Specular).SpecularFactor;
    bVar1 = (param_2->Specular).SpecularMap.bHasTextureTransform;
    bVar2 = (param_2->Specular).SpecularMap.TexCoord;
    pFVar3 = GLTF::`anonymous_namespace'::GetTexture(&(param_2->Specular).SpecularMap,param_1);
    pFVar7 = &(param_2->Specular).SpecularMap.TextureTransform;
    if (bVar1 == false) {
      pFVar7 = (FTextureTransform *)0x0;
    }
    pFVar4 = FPBRMapFactory::CreateTextureMap
                       (param_3,pFVar3,(uint)bVar2,L"SpecularMap",Color,pFVar7);
    pFVar5 = this_00;
    if (pFVar4 != (FMaterialExpressionTexture *)0x0) {
      pFVar5 = (FMaterialExpressionParameter *)
               FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=(&pFVar5->Name,L"Multiply");
      lVar6 = (**(code **)(pFVar5->_padding_ + 8))(pFVar5,0);
      *(FMaterialExpressionParameter **)(lVar6 + 0x10) = this_00;
      *(undefined4 *)(lVar6 + 0x18) = 0;
      lVar6 = (**(code **)(pFVar5->_padding_ + 8))(pFVar5,1);
      *(FMaterialExpressionTexture **)(lVar6 + 0x10) = pFVar4;
      *(undefined4 *)(lVar6 + 0x18) = 4;
    }
    (param_4->Specular).Expression = (FMaterialExpression *)pFVar5;
    (param_4->Specular).OutputIndex = 0;
  }
  return;
}

// HandleTransmission @ 14e641a90

void __thiscall
GLTF::FMaterialFactoryImpl::HandleTransmission
          (FMaterialFactoryImpl *this,TArray<GLTF::FTexture,TSizedDefaultAllocator<32>_> *param_1,
          FMaterial *param_2,FPBRMapFactory *param_3,FMaterialElement *param_4)

{
  byte bVar1;
  EMaterialExpressionType EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FMaterialExpression *pFVar6;
  FMaterialExpression *pFVar7;
  FTexture *pFVar8;
  FMaterialExpressionTexture *pFVar9;
  FMaterialExpressionTexture *pFVar10;
  FMaterialExpression *pFVar11;
  FMaterialExpression *pFVar12;
  longlong lVar13;
  FMaterialExpressionColor *pFVar14;
  FMaterialExpression *pFVar15;
  FMaterialExpression *pFVar16;
  FMaterialExpression *pFVar17;
  FMaterialExpression *pFVar18;
  FTextureTransform *pFVar19;
  FMaterialExpression *local_res18;
  FString local_88;
  undefined1 local_78 [24];
  FString local_60;
  FString *local_50;
  FMaterialExpression **local_48;
  FString local_40;
  
  if (param_2->bHasTransmission != false) {
    (**(code **)(param_4->_padding_ + 0x10))(param_4,2);
    (**(code **)(param_4->_padding_ + 0x38))(param_4,3);
    (**(code **)(param_4->_padding_ + 0x40))(param_4,5);
    (**(code **)(param_4->_padding_ + 0x20))(param_4,param_2->bIsDoubleSided);
    pFVar6 = FMaterialElement::AddMaterialExpression(param_4,Generic);
    ::FString::operator=((FString *)(pFVar6 + 1),L"ThinTranslucentMaterialOutput");
    pFVar7 = FMaterialElement::AddMaterialExpression(param_4,ConstantScalar);
    *(float *)&pFVar7[3]._padding_ = (param_2->Transmission).TransmissionFactor;
    EVar2 = pFVar7->Type;
    if ((((EVar2 != ConstantColor) && (EVar2 != ConstantScalar)) && (EVar2 != Texture)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_589650665588916151>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialExpressions.cpp"
                           ,0x49,
                           "Type == EMaterialExpressionType::ConstantColor || Type == EMaterialExpressionType::ConstantScalar || Type == EMaterialExpressionType::Texture"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ::FString::operator=((FString *)(pFVar7 + 1),L"TransmissionFactor");
    bVar1 = (param_2->Transmission).TransmissionMap.TexCoord;
    pFVar19 = &(param_2->Transmission).TransmissionMap.TextureTransform;
    if ((param_2->Transmission).TransmissionMap.bHasTextureTransform == false) {
      pFVar19 = (FTextureTransform *)0x0;
    }
    pFVar8 = GLTF::`anonymous_namespace'::GetTexture
                       (&(param_2->Transmission).TransmissionMap,param_1);
    pFVar9 = FPBRMapFactory::CreateTextureMap
                       (param_3,pFVar8,(uint)bVar1,L"Transmission",Color,pFVar19);
    pFVar17 = (param_4->Metallic).Expression;
    pFVar18 = (param_4->Roughness).Expression;
    ::FString::FString(&local_88,L"MetallicRoughness");
    pFVar10 = GLTF::`anonymous_namespace'::FindExpression<GLTF::FMaterialExpressionTexture>
                        (&local_88,param_4);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (pFVar10 != (FMaterialExpressionTexture *)0x0) {
      pFVar11 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar11 + 1),L"Multiply");
      pFVar12 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar12 + 1),L"Multiply");
      lVar13 = (**(code **)(pFVar11->_padding_ + 8))(pFVar11,0);
      *(FMaterialExpressionTexture **)(lVar13 + 0x10) = pFVar10;
      *(undefined4 *)(lVar13 + 0x18) = 3;
      lVar13 = (**(code **)(pFVar11->_padding_ + 8))(pFVar11,1);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar17;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      lVar13 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12,0);
      *(FMaterialExpressionTexture **)(lVar13 + 0x10) = pFVar10;
      *(undefined4 *)(lVar13 + 0x18) = 2;
      lVar13 = (**(code **)(pFVar11->_padding_ + 8))(pFVar11,1);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar18;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      pFVar18 = pFVar12;
      pFVar17 = pFVar11;
    }
    ::FString::FString((FString *)(local_78 + 8),L"BaseColor Map");
    pFVar10 = GLTF::`anonymous_namespace'::FindExpression<GLTF::FMaterialExpressionTexture>
                        ((FString *)(local_78 + 8),param_4);
    if ((float *)local_78._8_8_ != (float *)0x0) {
      FMemory::Free((void *)local_78._8_8_);
    }
    if (param_2->AlphaMode == Mask) {
      ::FString::FString(&local_60,L"BaseColor");
      pFVar14 = GLTF::`anonymous_namespace'::FindExpression<GLTF::FMaterialExpressionColor>
                          (&local_60,param_4);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (pFVar10 == (FMaterialExpressionTexture *)0x0) {
        pFVar10 = (FMaterialExpressionTexture *)
                  FMaterialElement::AddMaterialExpression(param_4,ConstantColor);
        (pFVar10->InputCoordinate).Name.Data =
             (TArray<wchar_t,TSizedDefaultAllocator<32>_>)FLinearColor::White.field0_0x0;
      }
      if (pFVar14 == (FMaterialExpressionColor *)0x0) {
        pFVar14 = (FMaterialExpressionColor *)
                  FMaterialElement::AddMaterialExpression(param_4,ConstantColor);
        (pFVar14->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
      }
      pFVar11 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar11 + 1),L"Multiply");
      lVar13 = (**(code **)(pFVar11->_padding_ + 8))(pFVar11,0);
      *(FMaterialExpressionTexture **)(lVar13 + 0x10) = pFVar10;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      lVar13 = (**(code **)(pFVar11->_padding_ + 8))(pFVar11,1);
      *(FMaterialExpressionColor **)(lVar13 + 0x10) = pFVar14;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      pFVar12 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar12;
      ::FString::operator=((FString *)(pFVar12 + 1),L"Step");
      local_res18 = (FMaterialExpression *)CONCAT44(local_res18._4_4_,0x3eaa7efa);
      ::FString::FString(&local_40,L"ConstX");
      local_50 = &local_40;
      local_48 = &local_res18;
      TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,float_const_&>_>
                ((TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
                  *)(pFVar12 + 8),(TPairInitializer<FString_&&,float_const_&> *)local_78,
                 (bool *)&local_50);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      pFVar15 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar15 + 1),L"OneMinus");
      lVar13 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12,0);
      *(FMaterialExpressionTexture **)(lVar13 + 0x10) = pFVar10;
      *(undefined4 *)(lVar13 + 0x18) = 4;
      lVar13 = (**(code **)(pFVar15->_padding_ + 8))(pFVar15,0);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar12;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      (param_4->Specular).Expression = pFVar12;
      (param_4->Specular).OutputIndex = 0;
      pFVar12 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar12 + 1),L"Multiply");
      lVar13 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12,0);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar15;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      (param_4->Specular).Expression = pFVar15;
      (param_4->Specular).OutputIndex = 0;
      (param_4->Opacity).Expression = pFVar12;
      (param_4->Opacity).OutputIndex = 0;
      pFVar15 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar15 + 1),L"Max");
      pFVar16 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      local_res18 = pFVar16;
      ::FString::operator=((FString *)(pFVar16 + 1),L"Max");
      lVar13 = (**(code **)(pFVar15->_padding_ + 8))(pFVar15,0);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar17;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      lVar13 = (**(code **)(pFVar15->_padding_ + 8))(pFVar15,1);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar18;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      lVar13 = (**(code **)(pFVar16->_padding_ + 8))(pFVar16,1);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar15;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      lVar13 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12,1);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar16;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      if (pFVar9 != (FMaterialExpressionTexture *)0x0) {
        pFVar17 = FMaterialElement::AddMaterialExpression(param_4,Generic);
        ::FString::operator=((FString *)(pFVar17 + 1),L"Multiply");
        lVar13 = (**(code **)(pFVar17->_padding_ + 8))(pFVar17,0);
        *(FMaterialExpressionTexture **)(lVar13 + 0x10) = pFVar9;
        *(undefined4 *)(lVar13 + 0x18) = 1;
        lVar13 = (**(code **)(pFVar17->_padding_ + 8))(pFVar17,1);
        *(FMaterialExpression **)(lVar13 + 0x10) = pFVar7;
        *(undefined4 *)(lVar13 + 0x18) = 0;
        pFVar7 = pFVar17;
      }
      pFVar17 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar17 + 1),L"Multiply");
      pFVar18 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar18 + 1),L"OneMinus");
      pFVar12 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar12 + 1),L"LinearInterpolate");
      lVar13 = (**(code **)(pFVar17->_padding_ + 8))(pFVar17,0);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar7;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      lVar13 = (**(code **)(pFVar18->_padding_ + 8))(pFVar18,0);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar7;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      lVar13 = (**(code **)(pFVar17->_padding_ + 8))(pFVar17,1);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar11;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      lVar13 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12,0);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar17;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      lVar13 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12,2);
      *(FScriptContainerElement **)(lVar13 + 0x10) = local_88.Data.AllocatorInstance.Data;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      lVar13 = (**(code **)(local_res18->_padding_ + 8))(local_res18,0);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar18;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      lVar13 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,0);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar12;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      (param_4->BaseColor).Expression = pFVar11;
      (param_4->BaseColor).OutputIndex = 0;
    }
    else {
      pFVar11 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar11 + 1),L"Multiply");
      lVar13 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,0);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar11;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      pFVar12 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar12 + 1),L"OneMinus");
      pFVar6 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar6 + 1),L"Max");
      pFVar15 = FMaterialElement::AddMaterialExpression(param_4,Generic);
      ::FString::operator=((FString *)(pFVar15 + 1),L"Max");
      lVar13 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,0);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar17;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      lVar13 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,1);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar18;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      lVar13 = (**(code **)(pFVar15->_padding_ + 8))(pFVar15,0);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar12;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      lVar13 = (**(code **)(pFVar15->_padding_ + 8))(pFVar15,1);
      *(FMaterialExpression **)(lVar13 + 0x10) = pFVar6;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      pFVar6 = (param_4->BaseColor).Expression;
      if (pFVar6 != (FMaterialExpression *)0x0) {
        iVar3 = (param_4->BaseColor).OutputIndex;
        lVar13 = (**(code **)(pFVar11->_padding_ + 8))(pFVar11,0);
        if (iVar3 != -1) {
          *(FMaterialExpression **)(lVar13 + 0x10) = pFVar6;
          *(int *)(lVar13 + 0x18) = iVar3;
        }
      }
      if (pFVar9 == (FMaterialExpressionTexture *)0x0) {
        lVar13 = (**(code **)(pFVar11->_padding_ + 8))(pFVar11,1);
        *(FMaterialExpression **)(lVar13 + 0x10) = pFVar7;
        *(undefined4 *)(lVar13 + 0x18) = 0;
        lVar13 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12,0);
        *(FMaterialExpression **)(lVar13 + 0x10) = pFVar7;
      }
      else {
        pFVar6 = FMaterialElement::AddMaterialExpression(param_4,Generic);
        ::FString::operator=((FString *)(pFVar6 + 1),L"Multiply");
        lVar13 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,0);
        *(FMaterialExpression **)(lVar13 + 0x10) = pFVar7;
        *(undefined4 *)(lVar13 + 0x18) = 0;
        lVar13 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,1);
        *(FMaterialExpressionTexture **)(lVar13 + 0x10) = pFVar9;
        *(undefined4 *)(lVar13 + 0x18) = 1;
        lVar13 = (**(code **)(pFVar11->_padding_ + 8))(pFVar11,1);
        *(FMaterialExpression **)(lVar13 + 0x10) = pFVar6;
        *(undefined4 *)(lVar13 + 0x18) = 0;
        lVar13 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12,0);
        *(FMaterialExpression **)(lVar13 + 0x10) = pFVar6;
      }
      *(undefined4 *)(lVar13 + 0x18) = 0;
      (param_4->Opacity).Expression = pFVar15;
      (param_4->Opacity).OutputIndex = 0;
    }
  }
  return;
}

