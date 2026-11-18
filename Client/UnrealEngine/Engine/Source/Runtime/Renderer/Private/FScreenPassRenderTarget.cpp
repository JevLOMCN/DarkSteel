// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// GetRenderTargetBinding @ 144816510

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRenderTargetBinding * __thiscall
FScreenPassRenderTarget::GetRenderTargetBinding
          (FScreenPassRenderTarget *this,FRenderTargetBinding *__return_storage_ptr__)

{
  ERenderTargetLoadAction EVar1;
  code *pcVar2;
  bool bVar3;
  FRenderTargetBinding *pFVar4;
  
  EVar1 = this->LoadAction;
  __return_storage_ptr__->Texture = (FRDGTexture *)this->_padding_;
  __return_storage_ptr__->LoadAction = EVar1;
  __return_storage_ptr__->ResolveTexture = (FRDGTexture *)0x0;
  __return_storage_ptr__->MipIndex = '\0';
  __return_storage_ptr__->ArraySlice = -1;
  bVar3 = FRenderTargetBinding::Validate(__return_storage_ptr__);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Validate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x216,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRenderTargetBinding *)(*pcVar2)();
      return pFVar4;
    }
  }
  return __return_storage_ptr__;
}

// FScreenPassRenderTarget @ 145295da0

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassRenderTarget * __thiscall
FScreenPassRenderTarget::FScreenPassRenderTarget
          (FScreenPassRenderTarget *this,FScreenPassTexture *param_1,ERenderTargetLoadAction param_2
          )

{
  this->_padding_ = (longlong)param_1->Texture;
  this->_padding_ = (longlong)(param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  this->_padding_ = (longlong)(param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  this->LoadAction = param_2;
  return this;
}

// operator= @ 145296a60

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

FScreenPassRenderTarget * __thiscall
FScreenPassRenderTarget::operator=(FScreenPassRenderTarget *this,FScreenPassRenderTarget *param_1)

{
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->LoadAction = param_1->LoadAction;
  return this;
}

// CreateFromInput @ 14552f830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScreenPassRenderTarget * __cdecl
FScreenPassRenderTarget::CreateFromInput
          (FScreenPassRenderTarget *__return_storage_ptr__,FRDGBuilder *param_1,FRDGTexture *param_2
          ,TIntPoint<int> param_3,ERenderTargetLoadAction param_4,wchar_t *param_5)

{
  code *pcVar1;
  bool bVar2;
  FScreenPassRenderTarget *pFVar3;
  FRDGTexture *pFVar4;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [49];
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  ForElementType<EPixelFormat> local_60;
  undefined4 local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (param_2 == (FRDGTexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScreenPass.cpp"
                       ,0x92,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FScreenPassRenderTarget *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_66 = (param_2->Desc).field_0x32;
  local_98._8_8_ = *(undefined8 *)&(param_2->Desc).field_0x8;
  local_98._16_8_ = *(undefined8 *)&(param_2->Desc).field_0x10;
  local_98._0_8_ = *(undefined8 *)&param_2->Desc;
  local_65 = (param_2->Desc).field_0x33;
  local_64 = (param_2->Desc).field_0x34;
  local_98._36_8_ = *(undefined8 *)&(param_2->Desc).field_0x24;
  local_98._44_2_ = *(undefined2 *)&(param_2->Desc).field_0x2c;
  local_98._46_2_ = *(undefined2 *)&(param_2->Desc).field_0x2e;
  local_98[0x30] = (param_2->Desc).field_0x30;
  local_67 = (param_2->Desc).field_0x31;
  local_98._24_4_ = *(undefined4 *)&(param_2->Desc).field_0x18;
  local_98._32_4_ = *(undefined4 *)&(param_2->Desc).field_0x20;
  local_63 = (param_2->Desc).field_0x35;
  local_98._28_4_ = *(undefined4 *)&(param_2->Desc).field_0x1c;
  local_60.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_50 = 0;
  local_4c = 1;
  TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&local_60,
             (TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
             &(param_2->Desc).field_0x38);
  local_67 = 1;
  local_98._0_8_ = local_98._0_8_ & 0xfffffffff7fdeffd | 1;
  local_50 = 0;
  if (local_4c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
              (1,1,0,&local_60,0,&local_4c);
  }
  local_98._0_8_ = local_98._0_8_ & 0xfffffffffffbffff;
  local_98._36_8_ = param_3.field0_0x0;
  pFVar4 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_98,param_5,None);
  __return_storage_ptr__->_padding_ = (longlong)pFVar4;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  if (pFVar4 != (FRDGTexture *)0x0) {
    __return_storage_ptr__->_padding_ = *(longlong *)&(pFVar4->Desc).field_0x24;
  }
  __return_storage_ptr__->LoadAction = param_4;
  if (local_60.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_60.SecondaryData);
  }
  return __return_storage_ptr__;
}

// CreateFromInput @ 14552fa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScreenPassRenderTarget * __cdecl
FScreenPassRenderTarget::CreateFromInput
          (FScreenPassRenderTarget *__return_storage_ptr__,FRDGBuilder *param_1,
          FScreenPassTexture *param_2,ERenderTargetLoadAction param_3,wchar_t *param_4)

{
  TIntPoint<int>_u_0 TVar1;
  TIntPoint<int>_u_0_s_0 TVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FScreenPassRenderTarget *pFVar6;
  FRDGTexture *pFVar7;
  int iVar8;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [64];
  void *local_58;
  undefined4 local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (((param_2->Texture == (FRDGTexture *)0x0) ||
      ((*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 8) ==
        *(int *)&(param_2->ViewRect).field0_0x0 &&
       (*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 0xc) ==
        *(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 4))))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Input.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScreenPass.cpp"
                         ,0x83,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FScreenPassRenderTarget *)(*pcVar4)();
    return pFVar6;
  }
  pFVar7 = param_2->Texture;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 1;
  local_98[0x32] = (pFVar7->Desc).field_0x32;
  local_98._0_8_ = *(undefined8 *)&pFVar7->Desc;
  local_98[0x33] = (pFVar7->Desc).field_0x33;
  local_98[0x34] = (pFVar7->Desc).field_0x34;
  local_98._36_8_ = *(undefined8 *)&(pFVar7->Desc).field_0x24;
  local_98._44_2_ = *(undefined2 *)&(pFVar7->Desc).field_0x2c;
  local_98._46_2_ = *(undefined2 *)&(pFVar7->Desc).field_0x2e;
  local_98[0x30] = (pFVar7->Desc).field_0x30;
  local_98[0x31] = (pFVar7->Desc).field_0x31;
  local_98._8_8_ = *(undefined8 *)&(pFVar7->Desc).field_0x8;
  local_98._16_8_ = *(undefined8 *)&(pFVar7->Desc).field_0x10;
  local_98._24_4_ = *(undefined4 *)&(pFVar7->Desc).field_0x18;
  local_98._32_4_ = *(undefined4 *)&(pFVar7->Desc).field_0x20;
  local_98[0x35] = (pFVar7->Desc).field_0x35;
  local_98._28_4_ = *(undefined4 *)&(pFVar7->Desc).field_0x1c;
  TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
            (local_98 + 0x38,
             (TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
             &(pFVar7->Desc).field_0x38);
  local_98[0x31] = 1;
  local_98._0_8_ = local_98._0_8_ & 0xfffffffff7fdeffd | 1;
  local_50 = 0;
  if (local_4c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
              (1,1,0,(ForElementType<EPixelFormat> *)(local_98 + 0x38),0,&local_4c);
  }
  TVar1 = (param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  TVar2 = (param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0._s_0;
  pFVar7 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_98,param_4,None);
  __return_storage_ptr__->_padding_ = (longlong)pFVar7;
  __return_storage_ptr__->_padding_ = (longlong)TVar1;
  __return_storage_ptr__->_padding_ = (longlong)TVar2;
  lVar3 = __return_storage_ptr__->_padding_;
  if (lVar3 != 0) {
    iVar8 = TVar2.X;
    if (iVar8 < *(int *)(lVar3 + 0x150)) {
      iVar8 = *(int *)(lVar3 + 0x150);
    }
    *(int *)(lVar3 + 0x150) = iVar8;
    iVar8 = *(int *)((longlong)&__return_storage_ptr__->_padding_ + 4);
    if (iVar8 < *(int *)(lVar3 + 0x154)) {
      iVar8 = *(int *)(lVar3 + 0x154);
    }
    *(int *)(lVar3 + 0x154) = iVar8;
  }
  __return_storage_ptr__->LoadAction = param_3;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return __return_storage_ptr__;
}

// CreateViewFamilyOutput @ 145530d00

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FScreenPassRenderTarget * __cdecl
FScreenPassRenderTarget::CreateViewFamilyOutput
          (FScreenPassRenderTarget *__return_storage_ptr__,FRDGTexture *param_1,FViewInfo *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScreenPassRenderTarget *pFVar7;
  ERenderTargetLoadAction EVar8;
  int local_28;
  int local_20;
  int iStack_1c;
  
  if (param_1 == (FRDGTexture *)0x0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x19 = 0;
    *(undefined2 *)&__return_storage_ptr__->field_0x1d = 0;
    __return_storage_ptr__->field_0x1f = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->LoadAction = ENoAction;
    return __return_storage_ptr__;
  }
  lVar6 = 0x1c30;
  if (*(int *)((longlong)&param_2->_padding_ + 4) != 2) {
    lVar6 = 0x380;
  }
  lVar1 = param_2->_padding_;
  EVar8 = ENoAction;
  lVar2 = *(longlong *)((longlong)&param_2->_padding_ + lVar6);
  lVar6 = *(longlong *)((longlong)&param_2->_padding_ + lVar6);
  local_28 = (int)lVar2;
  local_20 = (int)lVar6;
  iStack_1c = (int)((ulonglong)lVar6 >> 0x20);
  if (*(int *)(lVar1 + 0x10) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FScreenPassRenderTarget *)(*pcVar3)();
      return pFVar7;
    }
  }
  if (((FViewInfo *)**(longlong **)(lVar1 + 8) == param_2) &&
     (*(char *)(param_2->_padding_ + 0xc0) == '\0')) {
    if ((((local_28 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
         (iVar5 = (int)((ulonglong)lVar2 >> 0x20),
         iVar5 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) ||
        (local_20 - local_28 != *(int *)&(param_1->Desc).field_0x24)) ||
       (iStack_1c - iVar5 != *(int *)&(param_1->Desc).field_0x28)) {
      EVar8 = EClear;
    }
  }
  else {
    EVar8 = ELoad;
  }
  __return_storage_ptr__->_padding_ = (longlong)param_1;
  __return_storage_ptr__->_padding_ = lVar2;
  __return_storage_ptr__->_padding_ = lVar6;
  lVar6 = __return_storage_ptr__->_padding_;
  if (lVar6 != 0) {
    if (local_20 < *(int *)(lVar6 + 0x150)) {
      local_20 = *(int *)(lVar6 + 0x150);
    }
    *(int *)(lVar6 + 0x150) = local_20;
    iVar5 = *(int *)((longlong)&__return_storage_ptr__->_padding_ + 4);
    if (iVar5 < *(int *)(lVar6 + 0x154)) {
      iVar5 = *(int *)(lVar6 + 0x154);
    }
    *(int *)(lVar6 + 0x154) = iVar5;
  }
  __return_storage_ptr__->LoadAction = EVar8;
  return __return_storage_ptr__;
}

// FScreenPassRenderTarget @ 1456dc9d0

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassRenderTarget * __thiscall
FScreenPassRenderTarget::FScreenPassRenderTarget
          (FScreenPassRenderTarget *this,FRDGTexture *param_1,TIntRect<int> *param_2,
          ERenderTargetLoadAction param_3)

{
  TIntPoint<int>_u_0 TVar1;
  TIntPoint<int>_u_0_s_0 TVar2;
  longlong lVar3;
  int iVar4;
  
  TVar1 = (param_2->field0_0x0)._s_0.Min.field0_0x0;
  TVar2 = (param_2->field0_0x0)._s_0.Max.field0_0x0._s_0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)TVar1;
  this->_padding_ = (longlong)TVar2;
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    iVar4 = TVar2.X;
    if (iVar4 < *(int *)(lVar3 + 0x150)) {
      iVar4 = *(int *)(lVar3 + 0x150);
    }
    *(int *)(lVar3 + 0x150) = iVar4;
    iVar4 = *(int *)((longlong)&this->_padding_ + 4);
    if (iVar4 < *(int *)(lVar3 + 0x154)) {
      iVar4 = *(int *)(lVar3 + 0x154);
    }
    *(int *)(lVar3 + 0x154) = iVar4;
  }
  this->LoadAction = param_3;
  return this;
}

