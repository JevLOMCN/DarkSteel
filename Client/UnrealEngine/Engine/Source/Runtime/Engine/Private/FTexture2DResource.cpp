// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FTexture2DResource @ 1484439b0

FTexture2DResource * __thiscall
FTexture2DResource::FTexture2DResource
          (FTexture2DResource *this,UTexture2D *param_1,FTexture2DResource *param_2)

{
  FRHIResource *this_00;
  FRHIResource *this_01;
  FStreamableRenderResourceState_u_0 local_res8;
  
  local_res8.Data = 0;
  FStreamableTextureResource::FStreamableTextureResource
            ((FStreamableTextureResource *)this,(UTexture *)param_1,
             (FTexturePlatformData *)param_2->_padding_,
             (FStreamableRenderResourceState *)&local_res8._s_0,true);
  this->_padding_ = (longlong)&___7FTexture2DResource__6B_;
  this->ResourceMem = param_1->ResourceMem;
  this->ProxiedResource = param_2;
  (this->MipData).AllocatorInstance.SecondaryData = (ForElementType<void_*>)0x0;
  (this->MipData).ArrayNum = 0;
  (this->MipData).ArrayMax = 0xf;
  (this->MipDataSize).AllocatorInstance.SecondaryData = (ForElementType<__int64>)0x0;
  (this->MipDataSize).ArrayNum = 0;
  (this->MipDataSize).ArrayMax = 0xf;
  this_00 = (FRHIResource *)this->_padding_;
  this_01 = *(FRHIResource **)(param_1->_padding_ + 0x20);
  if (this_00 != this_01) {
    this->_padding_ = (longlong)this_01;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  CacheSamplerStateInitializer(this,param_1);
  return this;
}

// FTexture2DResource @ 148443a90

FTexture2DResource * __thiscall
FTexture2DResource::FTexture2DResource
          (FTexture2DResource *this,UTexture2D *param_1,FStreamableRenderResourceState *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  TArray<void_*,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  int *piVar5;
  TArray<__int64,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *pTVar6;
  byte bVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  FTexturePlatformData *pFVar13;
  ForElementType<__int64> FVar14;
  FTexture2DResource *pFVar15;
  int iVar16;
  ForElementType<void_*> FVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong local_58;
  int iStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  int iStack_40;
  undefined4 uStack_3c;
  
  pFVar13 = UTexture2D::GetPlatformData(param_1);
  FStreamableTextureResource::FStreamableTextureResource
            ((FStreamableTextureResource *)this,(UTexture *)param_1,pFVar13,param_2,true);
  piVar1 = &(this->MipData).ArrayNum;
  this->_padding_ = (longlong)&___7FTexture2DResource__6B_;
  piVar2 = &(this->MipDataSize).ArrayNum;
  piVar3 = &(this->MipDataSize).ArrayMax;
  this->ResourceMem = param_1->ResourceMem;
  pTVar4 = &this->MipData;
  (this->MipData).AllocatorInstance.SecondaryData = (ForElementType<void_*>)0x0;
  piVar5 = &(this->MipData).ArrayMax;
  this->ProxiedResource = (FTexture2DResource *)0x0;
  *piVar1 = 0;
  *piVar5 = 0xf;
  (this->MipDataSize).AllocatorInstance.SecondaryData = (ForElementType<__int64>)0x0;
  *piVar2 = 0;
  *piVar3 = 0xf;
  uVar11 = (uint)*(byte *)((longlong)&this->_padding_ + 3);
  iVar10 = UE::Core::Private::
           ReallocGrow<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                     (8,8,uVar11,&pTVar4->AllocatorInstance,piVar1,piVar5);
  FVar17 = (this->MipData).AllocatorInstance.SecondaryData;
  if (FVar17 == (ForElementType<void_*>)0x0) {
    FVar17 = (ForElementType<void_*>)pTVar4;
  }
  memset((void *)((longlong)FVar17 + (longlong)iVar10 * 8),0,(ulonglong)uVar11 << 3);
  pTVar6 = &this->MipDataSize;
  uVar11 = (uint)*(byte *)((longlong)&this->_padding_ + 3);
  iVar10 = UE::Core::Private::
           ReallocGrow<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                     (8,8,uVar11,&pTVar6->AllocatorInstance,piVar2,piVar3);
  FVar14 = (this->MipDataSize).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<__int64>)0x0) {
    FVar14 = (ForElementType<__int64>)pTVar6;
  }
  memset((void *)((longlong)FVar14 + (longlong)iVar10 * 8),0,(ulonglong)uVar11 << 3);
  bVar7 = *(byte *)((longlong)&this->_padding_ + 4);
  iVar10 = (this->MipDataSize).ArrayNum;
  uVar11 = (uint)*(byte *)((longlong)&this->_padding_ + 6);
  uVar18 = (uint)*(byte *)((longlong)&this->_padding_ + 3);
  iVar19 = uVar18 - uVar11;
  pcVar8 = *(code **)(param_1->_padding_ + 0x3b8);
  FVar14 = (this->MipDataSize).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<__int64>)0x0) {
    FVar14 = (ForElementType<__int64>)pTVar6;
  }
  if (iVar10 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar15 = (FTexture2DResource *)(*pcVar8)();
      return pFVar15;
    }
  }
  iVar12 = iVar10 - iVar19;
  iVar16 = iVar10;
  if (iVar12 < iVar10) {
    iVar16 = iVar12;
  }
  iVar12 = 0;
  if (0 < iVar16) {
    iVar12 = iVar16;
  }
  if (iVar12 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar15 = (FTexture2DResource *)(*pcVar8)();
      return pFVar15;
    }
  }
  FVar17 = (this->MipData).AllocatorInstance.SecondaryData;
  iVar16 = (this->MipData).ArrayNum;
  if (FVar17 == (ForElementType<void_*>)0x0) {
    FVar17 = (ForElementType<void_*>)pTVar4;
  }
  if (iVar16 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar15 = (FTexture2DResource *)(*pcVar8)();
      return pFVar15;
    }
  }
  iVar19 = iVar16 - iVar19;
  iVar20 = iVar16;
  if (iVar19 < iVar16) {
    iVar20 = iVar19;
  }
  iVar19 = 0;
  if (0 < iVar20) {
    iVar19 = iVar20;
  }
  if (iVar19 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar15 = (FTexture2DResource *)(*pcVar8)();
      return pFVar15;
    }
  }
  uStack_4c = uStack_3c;
  iStack_50 = iVar12;
  iStack_40 = iVar19;
  local_48 = (longlong)FVar17 + ((longlong)iVar16 - (longlong)iVar19) * 8;
  local_58 = (longlong)FVar14 + ((longlong)iVar10 - (longlong)iVar12) * 8;
  (*pcVar8)(param_1,(bVar7 - uVar11) + uVar18,&local_48,&local_58);
  CacheSamplerStateInitializer(this,param_1);
  return this;
}

// ~FTexture2DResource @ 1484469a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTexture2DResource::~FTexture2DResource(FTexture2DResource *this)

{
  TArray<void_*,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int iVar2;
  ForElementType<void_*> FVar3;
  ForElementType<__int64> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar9;
  undefined ***pppuVar10;
  ForElementType<void_*> FVar11;
  ForElementType<__int64> FVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  code *local_a8 [2];
  undefined **local_98;
  FTexture2DResourceMem *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FTexture2DResourceMem *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this->_padding_ = (longlong)&___7FTexture2DResource__6B_;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTexture2DResource::~FTexture2DResource'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  uVar14 = 0;
  pFStack_90 = this->ResourceMem;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTexture2DResource::~FTexture2DResource'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_80 = (undefined ***)0x0;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FTexture2DResource::~FTexture2DResource_::__l2::TSTR_DeleteResourceMem66>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_68 = local_98;
    pFStack_60 = pFStack_90;
    local_58 = local_88;
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar9 = (FRenderCommandTag *)
             TRenderCommandTag<`FTexture2DResource::~FTexture2DResource'::__l2::TSTR_DeleteResourceMem66>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar9);
    uVar16 = (ulonglong)local_48;
    if ((2 < uVar16) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar10 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar10 = local_50;
        }
        (*(code *)(*pppuVar10)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar10 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar10 = local_80;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  if (0 < (this->MipData).ArrayNum) {
    pTVar1 = &this->MipData;
    uVar16 = uVar14;
    do {
      iVar2 = (this->MipData).ArrayNum;
      uVar13 = (uint)uVar14;
      uVar15 = ~uVar13 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar13 < iVar2) {
        uVar7 = uVar15;
      }
      if (uVar7 == 0) {
        local_b8 = (longlong)(int)uVar13;
        local_b0 = (longlong)iVar2;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<void_*>)pTVar1;
      if (FVar3 != (ForElementType<void_*>)0x0) {
        FVar11 = FVar3;
      }
      uVar7 = 0;
      if (*(longlong *)(uVar16 + (longlong)FVar11) != 0) {
        iVar2 = (this->MipData).ArrayNum;
        uVar8 = uVar7;
        if ((int)uVar13 < iVar2) {
          uVar8 = uVar15;
        }
        if (uVar8 == 0) {
          local_b8 = (longlong)(int)uVar13;
          local_b0 = (longlong)iVar2;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<void_*>)pTVar1;
        if (FVar3 != (ForElementType<void_*>)0x0) {
          FVar11 = FVar3;
        }
        FMemory::Free(*(void **)(uVar16 + (longlong)FVar11));
      }
      iVar2 = (this->MipData).ArrayNum;
      uVar8 = uVar7;
      if ((int)uVar13 < iVar2) {
        uVar8 = uVar15;
      }
      if (uVar8 == 0) {
        local_b8 = (longlong)(int)uVar13;
        local_b0 = (longlong)iVar2;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<void_*>)pTVar1;
      if (FVar3 != (ForElementType<void_*>)0x0) {
        FVar11 = FVar3;
      }
      *(undefined8 *)(uVar16 + (longlong)FVar11) = 0;
      iVar2 = (this->MipDataSize).ArrayNum;
      if ((int)uVar13 < iVar2) {
        uVar7 = uVar15;
      }
      if (uVar7 == 0) {
        local_b8 = (longlong)(int)uVar13;
        local_b0 = (longlong)iVar2;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar4 = (this->MipDataSize).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<__int64>)&this->MipDataSize;
      if (FVar4 != (ForElementType<__int64>)0x0) {
        FVar12 = FVar4;
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      *(undefined8 *)(uVar16 + (longlong)FVar12) = 0;
      uVar16 = uVar16 + 8;
    } while ((int)(uVar13 + 1) < (this->MipData).ArrayNum);
  }
  FVar4 = (this->MipDataSize).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<__int64>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<void_*>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  return;
}

// CacheSamplerStateInitializer @ 14845a3b0

void __thiscall
FTexture2DResource::CacheSamplerStateInitializer(FTexture2DResource *this,UTexture2D *param_1)

{
  uchar uVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  
  pTVar2 = CVarForceHighestMipOnUITexturesEnabled.Ref;
  uVar6 = 0;
  fVar8 = 0.0;
  if ((this->_padding_ == 0) || ((int)this->_padding_ != 0x10)) goto LAB_14845a41e;
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_14845a401:
    uVar5 = uVar6;
  }
  else {
    bVar3 = IsInGameThread();
    uVar5 = 4;
    if (bVar3) goto LAB_14845a401;
  }
  if (0 < *(int *)((longlong)pTVar2->ShadowedValue + uVar5)) {
    fVar8 = (float)-*(int *)(this->_padding_ + 0x20);
  }
LAB_14845a41e:
  uVar1 = (param_1->AddressX).Value;
  cVar4 = '\0';
  if (uVar1 != '\0') {
    cVar4 = (uVar1 != '\x01') + '\x01';
  }
  *(char *)((longlong)&this->_padding_ + 1) = cVar4;
  uVar1 = (param_1->AddressY).Value;
  if (uVar1 != '\0') {
    uVar6 = (ulonglong)((uVar1 != '\x01') + 1);
  }
  *(char *)((longlong)&this->_padding_ + 2) = (char)uVar6;
  fVar7 = UTexture2D::GetGlobalMipMapLODBias();
  *(float *)((longlong)&this->_padding_ + 4) = fVar7 + fVar8;
  return;
}

// CalculateTightPackedMipSize @ 14845a4b0

uint __cdecl
FTexture2DResource::CalculateTightPackedMipSize
          (int param_1,int param_2,EPixelFormat param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (param_1 + -1 + GPixelFormats[param_3].BlockSizeX) / GPixelFormats[param_3].BlockSizeX;
  uVar2 = (param_2 + -1 + GPixelFormats[param_3].BlockSizeY) / GPixelFormats[param_3].BlockSizeY;
  uVar3 = uVar4;
  uVar5 = uVar2;
  if ((byte)(param_3 - PF_PVRTC2) < 2) {
    uVar3 = 2;
    if (2 < uVar4) {
      uVar3 = uVar4;
    }
    uVar5 = 2;
    if (2 < uVar2) {
      uVar5 = uVar2;
    }
  }
  iVar1 = GPixelFormats[param_3].BlockBytes;
  *param_4 = iVar1 * uVar3;
  return iVar1 * uVar5 * uVar3;
}

// CreatePartiallyResidentTexture @ 14845e180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTexture2DResource::CreatePartiallyResidentTexture
          (FTexture2DResource *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  FRHIResource *this_00;
  ForElementType<void_*> FVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  FName FVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  FRHITextureCreateDesc *pFVar12;
  TRefCountPtr<FRHITexture> TVar13;
  ForElementType<void_*> FVar14;
  wchar_t *pwVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStackY_218 [32];
  FLLMScope local_1e8;
  FLLMScope local_1e4;
  FLLMScope local_1e0 [2];
  undefined1 local_1d8 [40];
  int local_1b0;
  longlong local_1a8 [2];
  uint local_198;
  undefined4 local_190;
  undefined2 local_18c;
  wchar_t *local_188;
  undefined8 local_180;
  uint local_178;
  FNameEntryId local_170;
  undefined2 local_16c;
  FName local_168;
  ulong64 local_160;
  uint local_158;
  FRHITextureDesc local_148;
  wchar_t *local_f8;
  ERHIAccess local_f0;
  ERHITextureInitAction local_ec;
  FResourceBulkDataInterface *local_e8;
  FName local_e0;
  FName local_d8;
  FRHITextureCreateDesc local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  ::FName::ToString((FName *)((longlong)&this->_padding_ + 4),(FString *)(local_1d8 + 0x20));
  bVar2 = *(byte *)((longlong)&this->_padding_ + 3);
  bVar3 = *(byte *)((longlong)&this->_padding_ + 6);
  uVar16 = (uint)bVar2 - (uint)bVar3;
  if ((char)this->_padding_ == '\0') {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("bUsePartiallyResidentMips",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\Texture2DResource.cpp"
                        ,0xae,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pwVar15 = L"";
  if (local_1b0 != 0) {
    pwVar15 = (wchar_t *)local_1d8._32_8_;
  }
  pFVar12 = FRHITextureCreateDesc::Create2D
                      (&local_c8,pwVar15,(int)this->_padding_,
                       *(int *)((longlong)&this->_padding_ + 4),
                       *(EPixelFormat *)((longlong)&this->_padding_ + 4));
  *(undefined1 *)&pFVar12->_padding_ = *(undefined1 *)((longlong)&this->_padding_ + 3);
  pFVar12->_padding_ = this->_padding_ | 0x800000;
  *(undefined4 *)&pFVar12->_padding_ = *(undefined4 *)(this->_padding_ + 0x10);
  pFVar12->ClassName = NAME_FTexture2DResource;
  uVar7 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (pFVar12->OwnerName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (pFVar12->OwnerName).Number = uVar7;
  FRHITextureDesc::FRHITextureDesc(&local_148,(FRHITextureDesc *)pFVar12);
  local_f8 = pFVar12->DebugName;
  local_f0 = pFVar12->InitialState;
  local_ec = pFVar12->InitAction;
  local_e8 = pFVar12->BulkData;
  local_e0 = pFVar12->ClassName;
  local_d8 = pFVar12->OwnerName;
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  TVar13 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_1d8);
  plVar1 = &this->_padding_;
  if ((FRHITexture *)plVar1 != TVar13.Reference) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = (TVar13.Reference)->_padding_;
    (TVar13.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if ((FRHIResource *)local_1d8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1d8._0_8_);
  }
  if ((param_1->PersistentState).bImmediate == '\0') {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsImmediate()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                        ,0x17,L"This operation expects the immediate command list.");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x378))(GDynamicRHI,param_1,*plVar1,uVar16);
  if ((param_1->PersistentState).bImmediate == '\0') {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsImmediate()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                        ,0x17,L"This operation expects the immediate command list.");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x380))(GDynamicRHI,param_1);
  if (this->ResourceMem != (FTexture2DResourceMem *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("ResourceMem == nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\Texture2DResource.cpp"
                        ,0xbd,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((int)uVar16 < (int)(uint)*(byte *)((longlong)&this->_padding_ + 3)) {
    lVar17 = ((ulonglong)bVar2 - (ulonglong)bVar3) * 8;
    do {
      uVar11 = 0;
      if ((int)uVar16 < (this->MipData).ArrayNum) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FVar4 = (this->MipData).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<void_*>)&this->MipData;
      if (FVar4 != (ForElementType<void_*>)0x0) {
        FVar14 = FVar4;
      }
      if (*(longlong *)((longlong)FVar14 + lVar17) != 0) {
        if ((param_1->PersistentState).bImmediate == '\0') {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsImmediate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                              ,0x17,L"This operation expects the immediate command list.");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        lVar5 = this->_padding_;
        FLLMScope::FLLMScope(&local_1e4,Textures,false,None,Default,true);
        FMemScope::FMemScope((FMemScope *)(local_1d8 + 0x10),Textures,true);
        local_1a8[1] = 0;
        local_190 = 1;
        local_18c = 0x100;
        local_1a8[0] = lVar5;
        local_198 = uVar16;
        FLLMScope::FLLMScope(&local_1e8,Textures,false,None,Default,true);
        FMemScope::FMemScope((FMemScope *)(local_1d8 + 8),Textures,true);
        (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,&local_168,param_1,local_1a8);
        FMemScope::~FMemScope((FMemScope *)(local_1d8 + 8));
        FLLMScope::~FLLMScope(&local_1e8);
        uVar11 = local_158;
        uVar9 = local_160;
        FVar8 = local_168;
        FMemScope::~FMemScope((FMemScope *)(local_1d8 + 0x10));
        FLLMScope::~FLLMScope(&local_1e4);
        GetData(this,uVar16,(void *)FVar8,uVar11,uVar9);
        if ((param_1->PersistentState).bImmediate == '\0') {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsImmediate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                              ,0x17,L"This operation expects the immediate command list.");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        local_188 = (wchar_t *)this->_padding_;
        local_180._0_4_ = None;
        local_180._4_4_ = Default;
        local_170.Value = 3;
        local_16c = 0x100;
        local_178 = uVar16;
        FLLMScope::FLLMScope(local_1e0,Textures,false,None,Default,true);
        FMemScope::FMemScope((FMemScope *)(local_1d8 + 0x18),Textures,true);
        (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,param_1);
        FMemScope::~FMemScope((FMemScope *)(local_1d8 + 0x18));
        FLLMScope::~FLLMScope(local_1e0);
      }
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 8;
    } while ((int)uVar16 < (int)(uint)*(byte *)((longlong)&this->_padding_ + 3));
  }
  if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if ((wchar_t *)local_1d8._32_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_1d8._32_8_);
  }
  return;
}

// CreateTexture @ 148460890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTexture2DResource::CreateTexture(FTexture2DResource *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  byte bVar2;
  FRHIResource *this_00;
  ForElementType<void_*> FVar3;
  ForElementType<__int64> FVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  void *pvVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  FTexture2DMipMap *pFVar12;
  FRHITextureCreateDesc *pFVar13;
  TRefCountPtr<FRHITexture> TVar14;
  ForElementType<void_*> FVar15;
  ForElementType<__int64> FVar16;
  wchar_t *pwVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStackY_228 [32];
  uint local_1f8;
  FLLMScope local_1f4;
  FLLMScope local_1f0;
  uint local_1ec;
  int local_1e8;
  undefined1 local_1e0 [48];
  int local_1b0;
  longlong local_1a8 [2];
  uint local_198;
  undefined4 local_190;
  undefined2 local_18c;
  longlong local_188;
  FResourceBulkDataInterface *local_180;
  FNameEntryId local_178;
  FNameEntryId local_170;
  undefined2 local_16c;
  void *local_168;
  ulong64 local_160;
  uint local_158;
  FRHITextureDesc local_148;
  wchar_t *local_f8;
  ERHIAccess local_f0;
  ERHITextureInitAction local_ec;
  FResourceBulkDataInterface *local_e8;
  FName local_e0;
  FName local_d8;
  FRHITextureCreateDesc local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  bVar2 = *(byte *)((longlong)&this->_padding_ + 3);
  local_1f8 = (uint)*(byte *)((longlong)&this->_padding_ + 6);
  uVar20 = bVar2 - local_1f8;
  local_1e0._24_8_ = param_1;
  pFVar12 = FStreamableTextureResource::GetPlatformMip((FStreamableTextureResource *)this,uVar20);
  ::FName::ToString((FName *)((longlong)&this->_padding_ + 4),(FString *)(local_1e0 + 0x28));
  pwVar17 = L"";
  if (local_1b0 != 0) {
    pwVar17 = (wchar_t *)local_1e0._40_8_;
  }
  pFVar13 = FRHITextureCreateDesc::Create2D
                      (&local_c8,pwVar17,(uint)pFVar12->SizeX,(uint)pFVar12->SizeY,
                       *(EPixelFormat *)((longlong)&this->_padding_ + 4));
  *(undefined1 *)&pFVar13->_padding_ = *(undefined1 *)((longlong)&this->_padding_ + 6);
  pFVar13->_padding_ = this->_padding_;
  *(undefined4 *)&pFVar13->_padding_ = *(undefined4 *)(this->_padding_ + 0x10);
  pFVar13->ClassName = NAME_FTexture2DResource;
  uVar7 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (pFVar13->OwnerName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (pFVar13->OwnerName).Number = uVar7;
  FRHITextureDesc::FRHITextureDesc(&local_148,(FRHITextureDesc *)pFVar13);
  local_f8 = pFVar13->DebugName;
  local_f0 = pFVar13->InitialState;
  local_ec = pFVar13->InitAction;
  local_e8 = pFVar13->BulkData;
  local_e0 = pFVar13->ClassName;
  local_d8 = pFVar13->OwnerName;
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  if ((FResourceBulkDataInterface *)this->ResourceMem != (FResourceBulkDataInterface *)0x0) {
    local_ec = BulkData;
    local_e8 = (FResourceBulkDataInterface *)this->ResourceMem;
  }
  TVar14 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_1e0);
  plVar1 = &this->_padding_;
  if ((FRHITexture *)plVar1 != TVar14.Reference) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = (TVar14.Reference)->_padding_;
    (TVar14.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if ((FRHIResource *)local_1e0._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1e0._0_8_);
  }
  if (this->ResourceMem == (FTexture2DResourceMem *)0x0) {
    if (*(char *)((longlong)&this->_padding_ + 6) != '\0') {
      lVar19 = ((ulonglong)bVar2 - (longlong)(int)local_1f8) * 8;
      iVar18 = -uVar20;
      local_1e8 = iVar18;
      do {
        uVar11 = 0;
        if ((int)uVar20 < (this->MipData).ArrayNum) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<void_*>)&this->MipData;
        if (FVar3 != (ForElementType<void_*>)0x0) {
          FVar15 = FVar3;
        }
        if (*(longlong *)(lVar19 + (longlong)FVar15) != 0) {
          if (((param_1->PersistentState).bImmediate == '\0') &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsImmediate()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                                  ,0x17,L"This operation expects the immediate command list."),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar5 = this->_padding_;
          FLLMScope::FLLMScope(&local_1f0,Textures,false,None,Default,true);
          FMemScope::FMemScope((FMemScope *)(local_1e0 + 0x10),Textures,true);
          local_1a8[1] = 0;
          local_1ec = iVar18 + uVar20;
          local_190 = 1;
          local_18c = 0x100;
          local_1a8[0] = lVar5;
          local_198 = local_1ec;
          FLLMScope::FLLMScope(&local_1f4,Textures,false,None,Default,true);
          FMemScope::FMemScope((FMemScope *)(local_1e0 + 8),Textures,true);
          (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,&local_168,param_1,local_1a8);
          FMemScope::~FMemScope((FMemScope *)(local_1e0 + 8));
          FLLMScope::~FLLMScope(&local_1f4);
          uVar11 = local_158;
          uVar9 = local_160;
          pvVar8 = local_168;
          FMemScope::~FMemScope((FMemScope *)(local_1e0 + 0x10));
          FLLMScope::~FLLMScope(&local_1f0);
          GetData(this,uVar20,pvVar8,uVar11,uVar9);
          param_1 = (FRHICommandListBase *)local_1e0._24_8_;
          if ((((FPersistentState *)(local_1e0._24_8_ + 0x1c0))->bImmediate == '\0') &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsImmediate()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                                  ,0x17,L"This operation expects the immediate command list."),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_180 = (FResourceBulkDataInterface *)0x0;
          local_188 = this->_padding_;
          local_178.Value = local_1ec;
          local_170.Value = 3;
          local_16c = 0x100;
          FLLMScope::FLLMScope((FLLMScope *)&local_1f8,Textures,false,None,Default,true);
          FMemScope::FMemScope((FMemScope *)(local_1e0 + 0x20),Textures,true);
          (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,param_1);
          FMemScope::~FMemScope((FMemScope *)(local_1e0 + 0x20));
          FLLMScope::~FLLMScope((FLLMScope *)&local_1f8);
          iVar18 = local_1e8;
        }
        uVar20 = uVar20 + 1;
        lVar19 = lVar19 + 8;
      } while ((int)(iVar18 + uVar20) < (int)(uint)*(byte *)((longlong)&this->_padding_ + 6));
    }
  }
  else {
    uVar20 = (**(code **)((longlong)*this->ResourceMem + 0x28))();
    if ((*(byte *)((longlong)&this->_padding_ + 6) != uVar20) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("State.NumRequestedLODs == ResourceMem->GetNumMips()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\Texture2DResource.cpp"
                            ,0x8d,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar20 = (**(code **)((longlong)*this->ResourceMem + 0x30))();
    if (((pFVar12->SizeX != uVar20) ||
        (uVar20 = (**(code **)((longlong)*this->ResourceMem + 0x38))(), pFVar12->SizeY != uVar20))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("RequestedMip->SizeX == ResourceMem->GetSizeX() && RequestedMip->SizeY == ResourceMem->GetSizeY()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\Texture2DResource.cpp"
                               ,0x8e,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar20 = 0;
    if (0 < (this->MipData).ArrayNum) {
      lVar19 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar20 < (this->MipData).ArrayNum) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar3 = (this->MipData).AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<void_*>)&this->MipData;
        if (FVar3 != (ForElementType<void_*>)0x0) {
          FVar15 = FVar3;
        }
        *(undefined8 *)(lVar19 + (longlong)FVar15) = 0;
        uVar11 = 0;
        if ((int)uVar20 < (this->MipDataSize).ArrayNum) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar4 = (this->MipDataSize).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<__int64>)&this->MipDataSize;
        if (FVar4 != (ForElementType<__int64>)0x0) {
          FVar16 = FVar4;
        }
        uVar20 = uVar20 + 1;
        *(undefined8 *)(lVar19 + (longlong)FVar16) = 0;
        lVar19 = lVar19 + 8;
      } while ((int)uVar20 < (this->MipData).ArrayNum);
    }
  }
  if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if ((wchar_t *)local_1e0._40_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_1e0._40_8_);
  }
  return;
}

// GetData @ 14846b460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTexture2DResource::GetData
          (FTexture2DResource *this,uint param_1,void *param_2,uint param_3,ulong64 param_4)

{
  TArray<void_*,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  byte bVar2;
  EPixelFormat EVar3;
  ushort uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FTexture2DMipMap *pFVar10;
  ForElementType<void_*> FVar11;
  ForElementType<__int64> FVar12;
  uint uVar13;
  ulonglong _Size;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  FString local_60 [2];
  
  lVar15 = (longlong)(int)param_1;
  pFVar10 = FStreamableTextureResource::GetPlatformMip((FStreamableTextureResource *)this,param_1);
  pTVar1 = &this->MipData;
  uVar14 = ~param_1 >> 0x1f;
  uVar8 = 0;
  if ((int)param_1 < (this->MipData).ArrayNum) {
    uVar8 = uVar14;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar11 = (this->MipData).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<void_*>)0x0) {
    FVar11 = (ForElementType<void_*>)pTVar1;
  }
  if ((*(longlong *)((longlong)FVar11 + lVar15 * 8) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipData[MipIndex] != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\Texture2DResource.cpp"
                         ,0x123,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar2 = *(byte *)((longlong)&this->_padding_ + 4);
  uVar16 = (int)((pFVar10->SizeX - 1) + GPixelFormats[bVar2].BlockSizeX) /
           GPixelFormats[bVar2].BlockSizeX;
  uVar8 = (int)((pFVar10->SizeY - 1) + GPixelFormats[bVar2].BlockSizeY) /
          GPixelFormats[bVar2].BlockSizeY;
  if ((bVar2 == 0x1e) || (uVar9 = uVar8, uVar13 = uVar16, bVar2 == 0x1f)) {
    uVar13 = 2;
    if (2 < uVar16) {
      uVar13 = uVar16;
    }
    uVar9 = 2;
    if (2 < uVar8) {
      uVar9 = uVar8;
    }
  }
  iVar5 = GPixelFormats[bVar2].BlockBytes;
  uVar16 = iVar5 * uVar13;
  uVar8 = 0;
  if ((int)param_1 < (this->MipDataSize).ArrayNum) {
    uVar8 = uVar14;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar12 = (this->MipDataSize).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<__int64>)0x0) {
    FVar12 = (ForElementType<__int64>)&this->MipDataSize;
  }
  _Size = *(ulonglong *)((longlong)FVar12 + lVar15 * 8);
  if (5 < (byte)LogTextureUpload._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextureUpload);
  }
  if ((param_4 < _Size) && (_Size = param_4, 2 < (byte)LogTextureUpload._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTextureUpload);
  }
  if (param_3 != 0) {
    if (iVar5 * uVar9 * uVar13 != _Size) {
      ::FName::ToString((FName *)((longlong)&this->_padding_ + 4),local_60);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(int64)EffectiveSize == DataSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\Texture2DResource.cpp"
                         ,0x14e,
                         L"Texture \'%s\', mip %d, has a DataSize [%d] that doesn\'t match calculated size [%d]. Texture size %dx%d, format %d"
                        );
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (param_3 != uVar16) {
      EVar3 = *(EPixelFormat *)((longlong)&this->_padding_ + 4);
      uVar4 = pFVar10->SizeY;
      uVar8 = 0;
      if ((int)param_1 < (this->MipData).ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar11 = (this->MipData).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<void_*>)0x0) {
        FVar11 = (ForElementType<void_*>)pTVar1;
      }
      CopyTextureData2D(*(void **)((longlong)FVar11 + lVar15 * 8),param_2,(uint)uVar4,EVar3,uVar16,
                        param_3);
      goto LAB_14846b896;
    }
  }
  uVar8 = 0;
  if ((int)param_1 < (this->MipData).ArrayNum) {
    uVar8 = uVar14;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar11 = (this->MipData).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<void_*>)0x0) {
    FVar11 = (ForElementType<void_*>)pTVar1;
  }
  memcpy(param_2,*(void **)((longlong)FVar11 + lVar15 * 8),_Size);
LAB_14846b896:
  uVar8 = 0;
  if ((int)param_1 < (this->MipData).ArrayNum) {
    uVar8 = uVar14;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar11 = (this->MipData).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<void_*>)0x0) {
    FVar11 = (ForElementType<void_*>)pTVar1;
  }
  FMemory::Free(*(void **)((longlong)FVar11 + lVar15 * 8));
  uVar8 = 0;
  if ((int)param_1 < (this->MipData).ArrayNum) {
    uVar8 = uVar14;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar11 = (this->MipData).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<void_*>)0x0) {
    FVar11 = (ForElementType<void_*>)pTVar1;
  }
  *(undefined8 *)((longlong)FVar11 + lVar15 * 8) = 0;
  uVar8 = 0;
  if ((int)param_1 < (this->MipDataSize).ArrayNum) {
    uVar8 = uVar14;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar12 = (this->MipDataSize).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<__int64>)0x0) {
    FVar12 = (ForElementType<__int64>)&this->MipDataSize;
  }
  *(undefined8 *)((longlong)FVar12 + lVar15 * 8) = 0;
  return;
}

// GetPlatformMipsSize @ 14846d090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

ulong64 __thiscall FTexture2DResource::GetPlatformMipsSize(FTexture2DResource *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  FRHITextureCreateDesc *pFVar6;
  undefined4 *puVar7;
  IConsoleManager *pIVar8;
  longlong *plVar9;
  TConsoleVariableData<int> *pTVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_2b8 [32];
  TIntPoint<int>_u_0 local_288 [2];
  FRHITextureDesc local_278;
  undefined *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  FRHITextureDesc local_1f8;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  FRHITextureDesc local_158;
  FRHITextureDesc local_108;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  if ((this->_padding_ == 0) || (param_1 == 0)) {
    uVar5 = 0;
  }
  else {
    pTVar10 = (TConsoleVariableData<int> *)0x0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar8 = IConsoleManager::Get();
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0xc0))(pIVar8,L"r.PRT.ReducedMemory",1);
      if (plVar9 != (longlong *)0x0) {
        pTVar10 = (TConsoleVariableData<int> *)(**(code **)(*plVar9 + 0x68))(plVar9);
      }
      CVarReducedMode = pTVar10;
      _Init_thread_footer(&::_TSS0);
    }
    if ((CVarReducedMode == (TConsoleVariableData<int> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CVarReducedMode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\Texture2DResource.cpp"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    if (((char)this->_padding_ == '\0') ||
       ((iVar4 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarReducedMode), iVar4 != 0 &&
        (param_1 <= *(byte *)((longlong)&this->_padding_ + 1))))) {
      CalcMipMapExtent((uint)local_288,(uint)this->_padding_,
                       (EPixelFormat)*(undefined4 *)((longlong)&this->_padding_ + 4),
                       (uint)*(byte *)((longlong)&this->_padding_ + 4));
      local_278.ClearValue._0_8_ = 1;
      local_278.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      local_278.AliasableFormats.ArrayMax = 1;
      local_278.Flags = None;
      local_228 = &u_Temp;
      local_278.Extent.field0_0x0 = local_288[0];
      local_278.Format = *(EPixelFormat *)((longlong)&this->_padding_ + 4);
      local_278.ClearValue.Value._4_8_ = 0;
      local_278.ClearValue.Value.Color[3] = 0.0;
      local_278.ExtData = 0;
      local_278.Depth = 1;
      local_278.ArraySize = 1;
      local_278.NumMips = '\x01';
      local_278.NumSamples = '\x01';
      local_278.Dimension = Texture2D;
      local_278.UAVFormat = PF_Unknown;
      local_278.FastVRAMPercentage = 0xff;
      local_278.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0
      ;
      local_278.AliasableFormats.ArrayNum = 0;
      local_220 = 0;
      local_218 = 0;
      local_210 = 0;
      local_208 = 0;
      FRHITextureDesc::FRHITextureDesc(&local_1f8,&local_278);
      local_1a8 = local_228;
      local_1a0 = (undefined4)local_220;
      local_19c = local_220._4_4_;
      local_198 = local_218;
      local_190 = local_210;
      local_188 = local_208;
      if (local_278.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_278.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      local_1f8.Flags = this->_padding_;
      local_1f8.NumMips = (uchar)param_1;
      local_1f8.ExtData = *(uint *)(this->_padding_ + 0x10);
      FRHITextureDesc::FRHITextureDesc(&local_108,&local_1f8);
      if (local_1f8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_1f8.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      bVar3 = FRHITextureDesc::Validate(&local_108,L"",false);
      if (bVar3) {
        puVar7 = (undefined4 *)
                 (**(code **)(GDynamicRHI->_padding_ + 0x178))(GDynamicRHI,local_168,&local_108,0);
        uVar11 = *puVar7;
        uVar12 = puVar7[1];
        local_158.AliasableFormats.AllocatorInstance.SecondaryData =
             local_108.AliasableFormats.AllocatorInstance.SecondaryData;
      }
      else {
        uVar11 = 0;
        uVar12 = 0;
        local_158.AliasableFormats.AllocatorInstance.SecondaryData =
             local_108.AliasableFormats.AllocatorInstance.SecondaryData;
      }
    }
    else {
      pFVar6 = FRHITextureCreateDesc::Create2D
                         (&local_b8,L"Temp",(int)this->_padding_,
                          *(int *)((longlong)&this->_padding_ + 4),
                          *(EPixelFormat *)((longlong)&this->_padding_ + 4));
      *(undefined1 *)&pFVar6->_padding_ = *(undefined1 *)((longlong)&this->_padding_ + 3);
      pFVar6->_padding_ = this->_padding_ | 0x800000;
      FRHITextureDesc::FRHITextureDesc(&local_158,(FRHITextureDesc *)pFVar6);
      if ((void *)local_b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_b8._padding_);
      }
      bVar1 = *(byte *)((longlong)&this->_padding_ + 3);
      bVar3 = FRHITextureDesc::Validate(&local_158,L"",false);
      if (bVar3) {
        puVar7 = (undefined4 *)
                 (**(code **)(GDynamicRHI->_padding_ + 0x178))
                           (GDynamicRHI,local_178,&local_158,bVar1 - param_1);
        uVar11 = *puVar7;
        uVar12 = puVar7[1];
      }
      else {
        uVar11 = 0;
        uVar12 = 0;
      }
    }
    if (local_158.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_158.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    uVar5 = CONCAT44(uVar12,uVar11);
  }
  return uVar5;
}

// GetTexture2DResource @ 148470ce0

FTexture2DResource * __thiscall FTexture2DResource::GetTexture2DResource(FTexture2DResource *this)

{
  return this;
}

// GetTexture2DResource @ 148470cf0

FTexture2DResource * __thiscall FTexture2DResource::GetTexture2DResource(FTexture2DResource *this)

{
  return this;
}

// InitRHI @ 148476520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FTexture2DResource::InitRHI(FTexture2DResource *this,FRHICommandListBase *param_1)

{
  FRHIResource *pFVar1;
  FRHIResource *pFVar2;
  
  if (this->ProxiedResource != (FTexture2DResource *)0x0) {
    pFVar1 = (FRHIResource *)this->ProxiedResource->_padding_;
    pFVar2 = (FRHIResource *)this->_padding_;
    if (pFVar2 != pFVar1) {
      this->_padding_ = (longlong)pFVar1;
      if (pFVar1 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar1);
      }
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
      }
    }
    FRHICommandListBase::UpdateTextureReference
              (param_1,(FRHITextureReference *)this->_padding_,(FRHITexture *)this->_padding_);
    pFVar1 = (FRHIResource *)this->_padding_;
    pFVar2 = (FRHIResource *)this->ProxiedResource->_padding_;
    if (pFVar1 != pFVar2) {
      this->_padding_ = (longlong)pFVar2;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar2);
      }
      if (pFVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar1);
      }
    }
    pFVar1 = (FRHIResource *)this->_padding_;
    pFVar2 = (FRHIResource *)this->ProxiedResource->_padding_;
    if (pFVar1 != pFVar2) {
      this->_padding_ = (longlong)pFVar2;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar2);
      }
      if (pFVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar1);
      }
    }
    return;
  }
  FStreamableTextureResource::InitRHI((FStreamableTextureResource *)this,param_1);
  return;
}

// IsProxy @ 1484786d0

bool __thiscall FTexture2DResource::IsProxy(FTexture2DResource *this)

{
  return this->ProxiedResource != (FTexture2DResource *)0x0;
}

// WarnRequiresTightPackedMip @ 14849e0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FTexture2DResource::WarnRequiresTightPackedMip
          (int param_1,int param_2,EPixelFormat param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_1 + -1 + GPixelFormats[param_3].BlockSizeX) / GPixelFormats[param_3].BlockSizeX;
  uVar2 = uVar1;
  if (((byte)(param_3 - PF_PVRTC2) < 2) && (uVar2 = 2, 2 < uVar1)) {
    uVar2 = uVar1;
  }
  if (((param_4 != 0) && (param_4 != GPixelFormats[param_3].BlockBytes * uVar2)) &&
     (2 < (byte)LogTexture._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
  }
  return;
}

