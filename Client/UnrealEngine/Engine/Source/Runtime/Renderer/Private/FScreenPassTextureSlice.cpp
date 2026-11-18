// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// FScreenPassTextureSlice @ 145127550

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTextureSlice * __thiscall
FScreenPassTextureSlice::FScreenPassTextureSlice(FScreenPassTextureSlice *this)

{
  this->TextureSRV = (FRDGTextureSRV *)0x0;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  return this;
}

// FScreenPassTextureSlice @ 145195830

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTextureSlice * __thiscall
FScreenPassTextureSlice::FScreenPassTextureSlice
          (FScreenPassTextureSlice *this,FScreenPassTextureSlice *param_1)

{
  this->TextureSRV = param_1->TextureSRV;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  return this;
}

// FScreenPassTextureSlice @ 145195850

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTextureSlice * __thiscall
FScreenPassTextureSlice::FScreenPassTextureSlice
          (FScreenPassTextureSlice *this,FScreenPassTextureSlice *param_1)

{
  this->TextureSRV = param_1->TextureSRV;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  return this;
}

// operator= @ 145196730

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTextureSlice * __thiscall
FScreenPassTextureSlice::operator=(FScreenPassTextureSlice *this,FScreenPassTextureSlice *param_1)

{
  this->TextureSRV = param_1->TextureSRV;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  return this;
}

// operator= @ 145196750

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTextureSlice * __thiscall
FScreenPassTextureSlice::operator=(FScreenPassTextureSlice *this,FScreenPassTextureSlice *param_1)

{
  this->TextureSRV = param_1->TextureSRV;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  return this;
}

// IsValid @ 1451e2bb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FScreenPassTextureSlice::IsValid(FScreenPassTextureSlice *this)

{
  if ((this->TextureSRV != (FRDGTextureSRV *)0x0) &&
     ((*(int *)((longlong)&(this->ViewRect).field0_0x0 + 8) != *(int *)&(this->ViewRect).field0_0x0
      || (*(int *)((longlong)&(this->ViewRect).field0_0x0 + 0xc) !=
          *(int *)((longlong)&(this->ViewRect).field0_0x0 + 4))))) {
    return true;
  }
  return false;
}

// FScreenPassTextureSlice @ 145295dd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTextureSlice * __thiscall
FScreenPassTextureSlice::FScreenPassTextureSlice
          (FScreenPassTextureSlice *this,FRDGTextureSRV *param_1,TIntRect<int> *param_2)

{
  char cVar1;
  FRDGTextureSRV *pFVar2;
  code *pcVar3;
  bool bVar4;
  FScreenPassTextureSlice *pFVar5;
  
  this->TextureSRV = param_1;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (param_2->field0_0x0)._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (param_2->field0_0x0)._s_0.Max.field0_0x0;
  pFVar2 = this->TextureSRV;
  if ((pFVar2 != (FRDGTextureSRV *)0x0) &&
     (((cVar1 = (((pFVar2->Desc).Texture)->Desc).field_0x32, cVar1 == '\x01' || (cVar1 == '\x04'))
      && (*(short *)((longlong)&(pFVar2->Desc)._padding_ + 6) == 0)))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TextureSRV->Desc.NumArraySlices > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                       ,0x87,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FScreenPassTextureSlice *)(*pcVar3)();
      return pFVar5;
    }
  }
  return this;
}

// CreateFromScreenPassTexture @ 14552fc50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScreenPassTextureSlice * __cdecl
FScreenPassTextureSlice::CreateFromScreenPassTexture
          (FScreenPassTextureSlice *__return_storage_ptr__,FRDGBuilder *param_1,
          FScreenPassTexture *param_2)

{
  int *piVar1;
  char cVar2;
  FRDGTexture *pFVar3;
  int iVar4;
  FRDGTextureSRV *pFVar5;
  TIntRect<int>_u_0 local_38;
  FRDGTextureSRVDesc local_28;
  
  local_28.Texture = param_2->Texture;
  if ((local_28.Texture != (FRDGTexture *)0x0) && ((*(byte *)&(local_28.Texture)->Desc & 8) != 0)) {
    local_38._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
    local_38._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
    local_28._padding_._4_4_ = 0;
    local_28._padding_._0_1_ = 0;
    local_28._padding_._2_1_ = 0;
    local_28._padding_._0_2_ = 0;
    local_28._padding_._3_1_ = 0;
    local_28._padding_._2_1_ = ((local_28.Texture)->Desc).field_0x30;
    cVar2 = ((local_28.Texture)->Desc).field_0x32;
    if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
      local_28._padding_._4_4_ = (uint)*(ushort *)&((local_28.Texture)->Desc).field_0x2e << 0x10;
    }
    FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_28);
    pFVar3 = local_28.Texture;
    pFVar5 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
    pFVar5 = FRDGTextureSRV::FRDGTextureSRV(pFVar5,(wchar_t *)pFVar3->_padding_,&local_28);
    piVar1 = &(param_1->Views).Array.ArrayMax;
    iVar4 = (param_1->Views).Array.ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                        (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar1);
    }
    (param_1->Views).Array.ArrayNum = iVar4 + 1;
    (param_1->Views).Array.AllocatorInstance.Data[iVar4] = (FRDGView *)pFVar5;
    *(int *)((longlong)&pFVar5->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
    FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar5);
    FScreenPassTextureSlice(__return_storage_ptr__,pFVar5,(TIntRect<int> *)&local_38._s_0);
    return __return_storage_ptr__;
  }
  local_38._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  local_38._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  FScreenPassTextureSlice
            (__return_storage_ptr__,(FRDGTextureSRV *)0x0,(TIntRect<int> *)&local_38._s_0);
  return __return_storage_ptr__;
}

