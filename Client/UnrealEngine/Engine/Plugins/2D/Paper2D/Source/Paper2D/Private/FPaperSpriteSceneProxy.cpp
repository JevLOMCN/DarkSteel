// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 3

// FPaperSpriteSceneProxy @ 14ace9380

FPaperSpriteSceneProxy * __thiscall
FPaperSpriteSceneProxy::FPaperSpriteSceneProxy
          (FPaperSpriteSceneProxy *this,UPaperSpriteComponent *param_1)

{
  UBodySetup *pUVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  
  FPaperRenderSceneProxy_SpriteBase::FPaperRenderSceneProxy_SpriteBase
            ((FPaperRenderSceneProxy_SpriteBase *)this,(UMeshComponent *)param_1);
  this->_padding_ = (longlong)&___7FPaperSpriteSceneProxy__6B_;
  pUVar1 = (UBodySetup *)(**(code **)(param_1->_padding_ + 0x800))(param_1);
  this->BodySetup = pUVar1;
  if (*(char *)((longlong)&param_1->_padding_ + 3) == '\0') {
    local_18 = FLinearColor::sRGBToLinearTable[0];
    fStack_14 = FLinearColor::sRGBToLinearTable[0xff];
  }
  else {
    if ((param_1->_padding_ & 1) != 0) {
      local_18 = FLinearColor::sRGBToLinearTable[0];
      fStack_10 = FLinearColor::sRGBToLinearTable[0x80];
      fStack_14 = FLinearColor::sRGBToLinearTable[0xff];
      goto LAB_14ace9410;
    }
    local_18 = FLinearColor::sRGBToLinearTable[0xff];
    fStack_14 = FLinearColor::sRGBToLinearTable[0];
  }
  fStack_10 = FLinearColor::sRGBToLinearTable[0xff];
LAB_14ace9410:
  this->_padding_ = CONCAT44(fStack_14,local_18);
  this->_padding_ = CONCAT44(0x3f800000,fStack_10);
  return this;
}

// GetDynamicMeshElements @ 14acf9e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPaperSpriteSceneProxy::GetDynamicMeshElements
          (FPaperSpriteSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  TObjectPtr<UMaterial> TVar4;
  UBodySetup *pUVar5;
  longlong lVar6;
  double dVar7;
  FName FVar8;
  bool bVar9;
  FNameEntryId FVar10;
  TObjectPtr<UMaterial>_u_0 *pTVar11;
  FColoredMaterialRenderProxy *pFVar12;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar13;
  FLinearColor *this_00;
  uint uVar14;
  undefined1 auStackY_148 [32];
  FColor local_f8;
  FLinearColor_u_0 local_e0;
  undefined1 local_d0 [4];
  FLinearColor_u_0 local_cc;
  FLinearColor local_bc;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((((this->BodySetup != (UBodySetup *)0x0) && ((param_2->EngineShowFlags).Collision != 0)) &&
      (bVar9 = AllowDebugViewmodes(), bVar9)) &&
     ((dVar7 = UE::Math::TMatrix<double>::Determinant((TMatrix<double> *)&this->_padding_),
      __real_3e45798ee0000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) &&
      (uVar14 = 0, 0 < param_1->ArrayNum)))) {
    do {
      if ((param_3 >> (uVar14 & 0x1f) & 1) != 0) {
        if ((param_2->EngineShowFlags).Lighting == 0) {
          pTVar11 = &(GEngine->ShadedLevelColorationUnlitMaterial).field0_0x0;
        }
        else {
          pTVar11 = &(GEngine->ShadedLevelColorationLitMaterial).field0_0x0;
        }
        TVar4.field0_0x0 = (TObjectPtr<UMaterial>_u_0)pTVar11->DebugPtr;
        pFVar12 = ::operator_new(0xe0);
        if (pFVar12 == (FColoredMaterialRenderProxy *)0x0) {
          pFVar12 = (FColoredMaterialRenderProxy *)0x0;
        }
        else {
          FVar10 = FNameEntryId::FromValidEName((EName)local_d0);
          local_cc._s_0.R = (float)*(undefined4 *)&this->_padding_;
          local_cc._s_0.G = *(float *)((longlong)&this->_padding_ + 4);
          local_cc._s_0.B = (float)*(undefined4 *)&this->_padding_;
          local_cc._s_0.A = *(float *)((longlong)&this->_padding_ + 4);
          uVar3 = *(uint *)CONCAT44(extraout_var,FVar10.Value);
          pFVar13 = (FMaterialRenderProxy *)
                    (**(code **)(*(longlong *)TVar4.field0_0x0 + 0x310))(TVar4.field0_0x0);
          FVar8.Number = 0;
          FVar8.ComparisonIndex.Value = uVar3;
          pFVar12 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                              (pFVar12,pFVar13,(FLinearColor *)&local_cc._s_0,FVar8);
        }
        FMeshElementCollector::RegisterOneFrameMaterialProxy
                  (param_4,(FMaterialRenderProxy *)pFVar12);
        UE::Math::TTransform<double>::SetFromMatrix(&local_a8,(TMatrix<double> *)&this->_padding_);
        bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
        bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
        pUVar5 = this->BodySetup;
        lVar6 = this->_padding_;
        if ((((char)bVar2 < '\0') || ((bVar2 & 0x10) != 0)) ||
           (((bVar2 & 3) == 3 || ((bVar2 & 0x60) != 0)))) {
          bVar9 = true;
        }
        else {
          bVar9 = false;
        }
        local_e0._s_0.R = FLinearColor::sRGBToLinearTable[0xdc];
        local_e0._s_0.B = FLinearColor::sRGBToLinearTable[0xdf];
        local_e0._s_0.G = FLinearColor::sRGBToLinearTable[0x95];
        local_e0._s_0.A = 1.0;
        this_00 = GetSelectionColor(&local_bc,(FLinearColor *)&local_e0._s_0,
                                    (param_2->EngineShowFlags).Collision != 0 || (bVar1 & 6) != 0,
                                    (bool)(bVar1 >> 4 & 1),true);
        FLinearColor::ToFColorSRGB(this_00);
        FKAggregateGeom::GetAggGeom
                  (&pUVar5->AggGeom,&local_a8,local_f8,(FMaterialRenderProxy *)pFVar12,lVar6 == 0,
                   false,bVar9,uVar14,param_4);
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < param_1->ArrayNum);
  }
  FPaperRenderSceneProxy::GetDynamicMeshElements
            ((FPaperRenderSceneProxy *)this,param_1,param_2,param_3,param_4);
  return;
}

// GetTypeHash @ 14ad01d90

ulong64 __thiscall FPaperSpriteSceneProxy::GetTypeHash(FPaperSpriteSceneProxy *this)

{
  return 0x1552d0eb0;
}

