// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// FScreenPassTexture @ 1450b0960

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTexture * __thiscall FScreenPassTexture::FScreenPassTexture(FScreenPassTexture *this)

{
  this->Texture = (FRDGTexture *)0x0;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  return this;
}

// FScreenPassTexture @ 145195690

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTexture * __thiscall
FScreenPassTexture::FScreenPassTexture(FScreenPassTexture *this,FScreenPassTexture *param_1)

{
  this->Texture = param_1->Texture;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  return this;
}

// FScreenPassTexture @ 1451956b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTexture * __thiscall
FScreenPassTexture::FScreenPassTexture(FScreenPassTexture *this,FScreenPassTexture *param_1)

{
  this->Texture = param_1->Texture;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  return this;
}

// FScreenPassTexture @ 1451956d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTexture * __thiscall
FScreenPassTexture::FScreenPassTexture(FScreenPassTexture *this,FScreenPassTextureSlice *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScreenPassTexture *pFVar5;
  int iVar6;
  FRDGTexture *pFVar7;
  
  if (param_1->TextureSRV == (FRDGTextureSRV *)0x0) {
    pFVar7 = (FRDGTexture *)0x0;
  }
  else {
    pFVar7 = (param_1->TextureSRV->Desc).Texture;
  }
  this->Texture = pFVar7;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  if ((this->Texture != (FRDGTexture *)0x0) &&
     ((cVar1 = (this->Texture->Desc).field_0x32, cVar1 == '\x01' || (cVar1 == '\x04')))) {
    if (*(short *)((longlong)&(param_1->TextureSRV->Desc)._padding_ + 4) != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScreenTexture.TextureSRV->Desc.FirstArraySlice == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                         ,0x6b,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FScreenPassTexture *)(*pcVar3)();
        return pFVar5;
      }
    }
    if (*(short *)((longlong)&(param_1->TextureSRV->Desc)._padding_ + 6) != 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScreenTexture.TextureSRV->Desc.NumArraySlices == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                         ,0x6c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FScreenPassTexture *)(*pcVar3)();
        return pFVar5;
      }
    }
  }
  pFVar7 = this->Texture;
  if (pFVar7 != (FRDGTexture *)0x0) {
    iVar6 = *(int *)((longlong)&(this->ViewRect).field0_0x0 + 8);
    iVar2 = (pFVar7->VisualizeTextureExtent).field0_0x0._s_0.X;
    if (iVar6 < iVar2) {
      iVar6 = iVar2;
    }
    iVar2 = (pFVar7->VisualizeTextureExtent).field0_0x0._s_0.Y;
    (pFVar7->VisualizeTextureExtent).field0_0x0._s_0.X = iVar6;
    iVar6 = *(int *)((longlong)&(this->ViewRect).field0_0x0 + 0xc);
    if (iVar6 < iVar2) {
      iVar6 = iVar2;
    }
    (pFVar7->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar6;
  }
  return this;
}

// FScreenPassTexture @ 1451957c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTexture * __thiscall
FScreenPassTexture::FScreenPassTexture
          (FScreenPassTexture *this,FRDGTexture *param_1,TIntRect<int> *param_2)

{
  int iVar1;
  TIntPoint<int>_u_0_s_0 TVar2;
  FRDGTexture *pFVar3;
  int iVar4;
  
  this->Texture = param_1;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (param_2->field0_0x0)._s_0.Min.field0_0x0;
  TVar2 = (param_2->field0_0x0)._s_0.Max.field0_0x0._s_0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0._s_0 = TVar2;
  pFVar3 = this->Texture;
  if (pFVar3 != (FRDGTexture *)0x0) {
    iVar1 = (pFVar3->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar4 = TVar2.X;
    if (iVar4 < iVar1) {
      iVar4 = iVar1;
    }
    iVar1 = (pFVar3->VisualizeTextureExtent).field0_0x0._s_0.Y;
    (pFVar3->VisualizeTextureExtent).field0_0x0._s_0.X = iVar4;
    iVar4 = *(int *)((longlong)&(this->ViewRect).field0_0x0 + 0xc);
    if (iVar4 < iVar1) {
      iVar4 = iVar1;
    }
    (pFVar3->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar4;
  }
  return this;
}

// operator= @ 1451966f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTexture * __thiscall
FScreenPassTexture::operator=(FScreenPassTexture *this,FScreenPassTexture *param_1)

{
  this->Texture = param_1->Texture;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  return this;
}

// operator= @ 145196710

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTexture * __thiscall
FScreenPassTexture::operator=(FScreenPassTexture *this,FScreenPassTexture *param_1)

{
  this->Texture = param_1->Texture;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  return this;
}

// operator== @ 145196820

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FScreenPassTexture::operator==(FScreenPassTexture *this,FScreenPassTexture *param_1)

{
  if ((((this->Texture == param_1->Texture) &&
       (*(int *)&(this->ViewRect).field0_0x0 == *(int *)&(param_1->ViewRect).field0_0x0)) &&
      (*(int *)((longlong)&(this->ViewRect).field0_0x0 + 4) ==
       *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 4))) &&
     ((*(int *)((longlong)&(this->ViewRect).field0_0x0 + 8) ==
       *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 8) &&
      (*(int *)((longlong)&(this->ViewRect).field0_0x0 + 0xc) ==
       *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 0xc))))) {
    return true;
  }
  return false;
}

// IsValid @ 1451e2b80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FScreenPassTexture::IsValid(FScreenPassTexture *this)

{
  if ((this->Texture != (FRDGTexture *)0x0) &&
     ((*(int *)((longlong)&(this->ViewRect).field0_0x0 + 8) != *(int *)&(this->ViewRect).field0_0x0
      || (*(int *)((longlong)&(this->ViewRect).field0_0x0 + 0xc) !=
          *(int *)((longlong)&(this->ViewRect).field0_0x0 + 4))))) {
    return true;
  }
  return false;
}

// CopyFromSlice @ 14552f550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScreenPassTexture * __cdecl
FScreenPassTexture::CopyFromSlice
          (FScreenPassTexture *__return_storage_ptr__,FRDGBuilder *param_1,
          FScreenPassTextureSlice *param_2,FScreenPassTexture *param_3)

{
  char cVar1;
  int iVar2;
  FRDGTextureSRV *pFVar3;
  FRDGTexture *pFVar4;
  TIntPoint<int>_u_0 TVar5;
  TIntPoint<int>_u_0_s_0 TVar6;
  code *pcVar7;
  bool bVar8;
  FScreenPassTexture *pFVar9;
  FRDGTexture *pFVar10;
  int iVar11;
  undefined1 auStack_128 [32];
  int local_108;
  int iStack_104;
  TIntVector3<int>_u_0 local_f8;
  TIntPoint<int>_u_0 local_ec;
  undefined4 local_e4;
  int local_e0;
  int iStack_dc;
  undefined4 local_d8;
  uint local_d4;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  uint local_c0;
  TIntRect<int>_u_0 local_b8;
  undefined1 local_a8 [64];
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_128;
  pFVar3 = param_2->TextureSRV;
  if (pFVar3 == (FRDGTextureSRV *)0x0) {
    __return_storage_ptr__->Texture = param_3->Texture;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
         (param_3->ViewRect).field0_0x0._s_0.Min.field0_0x0;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
         (param_3->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  }
  else {
    pFVar4 = (pFVar3->Desc).Texture;
    cVar1 = (pFVar4->Desc).field_0x32;
    if (cVar1 == '\0') {
      if ((param_3->Texture == (FRDGTexture *)0x0) ||
         ((*(int *)((longlong)&(param_3->ViewRect).field0_0x0 + 8) ==
           *(int *)&(param_3->ViewRect).field0_0x0 &&
          (*(int *)((longlong)&(param_3->ViewRect).field0_0x0 + 0xc) ==
           *(int *)((longlong)&(param_3->ViewRect).field0_0x0 + 4))))) {
        local_b8._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
        local_b8._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
        FScreenPassTexture(__return_storage_ptr__,pFVar4,(TIntRect<int> *)&local_b8._s_0);
        return __return_storage_ptr__;
      }
    }
    else if (((cVar1 != '\x01') && (cVar1 != '\x04')) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("InputTexture->Desc.IsTexture2D() || InputTexture->Desc.IsTextureArray()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScreenPass.cpp"
                                ,0x4f,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FScreenPassTexture *)(*pcVar7)();
      return pFVar9;
    }
    pFVar10 = param_3->Texture;
    if (pFVar10 == (FRDGTexture *)0x0) {
      local_a8[0x32] = (pFVar4->Desc).field_0x32;
      local_a8._8_8_ = *(undefined8 *)&(pFVar4->Desc).field_0x8;
      local_a8._16_8_ = *(undefined8 *)&(pFVar4->Desc).field_0x10;
      local_a8._0_8_ = *(undefined8 *)&pFVar4->Desc;
      local_a8[0x33] = (pFVar4->Desc).field_0x33;
      local_a8[0x34] = (pFVar4->Desc).field_0x34;
      local_a8._36_8_ = *(undefined8 *)&(pFVar4->Desc).field_0x24;
      local_a8._44_2_ = *(undefined2 *)&(pFVar4->Desc).field_0x2c;
      local_a8._46_2_ = *(undefined2 *)&(pFVar4->Desc).field_0x2e;
      local_a8[0x30] = (pFVar4->Desc).field_0x30;
      local_a8[0x31] = (pFVar4->Desc).field_0x31;
      local_a8._24_4_ = *(undefined4 *)&(pFVar4->Desc).field_0x18;
      local_a8._32_4_ = *(undefined4 *)&(pFVar4->Desc).field_0x20;
      local_a8[0x35] = (pFVar4->Desc).field_0x35;
      local_a8._28_4_ = *(undefined4 *)&(pFVar4->Desc).field_0x1c;
      local_5c = 1;
      local_68 = (void *)0x0;
      local_60 = 0;
      TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
                (local_a8 + 0x38,
                 (TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                 &(pFVar4->Desc).field_0x38);
      local_a8[0x32] = 0;
      local_a8._0_8_ = local_a8._0_8_ | 1;
      local_a8._46_2_ = 1;
      pFVar10 = FRDGBuilder::CreateTexture
                          (param_1,(FRDGTextureDesc *)local_a8,L"CopyToScreenPassTexture2D",None);
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
    }
    local_e0 = *(int *)&(param_2->ViewRect).field0_0x0;
    iStack_dc = *(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 4);
    local_ec = (param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
    local_d0 = 0;
    local_cc = 1;
    local_c4 = 0;
    local_d4 = (uint)*(ushort *)((longlong)&(pFVar3->Desc)._padding_ + 4);
    local_c0 = (uint)(byte)(pFVar4->Desc).field_0x30;
    local_108 = *(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 8) - local_e0;
    iStack_104 = *(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 0xc) - iStack_dc;
    local_f8._0_8_ = CONCAT44(iStack_104,local_108);
    local_f8._s_0.Z = 1;
    local_d8 = 0;
    local_e4 = 0;
    AddCopyTexturePass(param_1,pFVar4,pFVar10,(FRHICopyTextureInfo *)&local_f8._s_0);
    TVar5 = (param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
    TVar6 = (param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0._s_0;
    __return_storage_ptr__->Texture = pFVar10;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Min.field0_0x0 = TVar5;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Max.field0_0x0._s_0 = TVar6;
    pFVar4 = __return_storage_ptr__->Texture;
    if (pFVar4 != (FRDGTexture *)0x0) {
      iVar2 = (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.X;
      iVar11 = TVar6.X;
      if (iVar11 < iVar2) {
        iVar11 = iVar2;
      }
      iVar2 = (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.Y;
      (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.X = iVar11;
      iVar11 = *(int *)((longlong)&(__return_storage_ptr__->ViewRect).field0_0x0 + 0xc);
      if (iVar11 < iVar2) {
        iVar11 = iVar2;
      }
      (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar11;
    }
  }
  return __return_storage_ptr__;
}

