// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FHitProxyMap @ 148907890

FHitProxyMap * __thiscall FViewport::FHitProxyMap::FHitProxyMap(FHitProxyMap *this)

{
  this->_padding_ = (longlong)&___7FHitProxyConsumer__6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRenderTarget__6B_;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__FHitProxyConsumer__;
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  (this->HitProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitProxies).ArrayNum = 0;
  (this->HitProxies).ArrayMax = 0;
  (this->HitProxyCPUTexture).Reference = (FRHITexture *)0x0;
  return this;
}

// ~FHitProxyMap @ 14890e000

void __thiscall FViewport::FHitProxyMap::~FHitProxyMap(FHitProxyMap *this)

{
  FRHITexture *this_00;
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FHitProxyConsumer__;
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  this_00 = (this->HitProxyCPUTexture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  DestructItems<TRefCountPtr<HHitProxy>,int>
            ((TRefCountPtr<HHitProxy> *)(this->HitProxies).AllocatorInstance.Data,
             (this->HitProxies).ArrayNum);
  pFVar1 = (this->HitProxies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&___7FRenderTarget__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  return;
}

// AddHitProxy @ 148916ba0

void __thiscall FViewport::FHitProxyMap::AddHitProxy(FHitProxyMap *this,HHitProxy *param_1)

{
  TArray<TRefCountPtr<HHitProxy>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  HHitProxy *local_18 [2];
  
  pTVar1 = &this->HitProxies;
  if (param_1 != (HHitProxy *)0x0) {
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_18[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->HitProxies).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->HitProxies).ArrayNum;
  piVar2 = &(this->HitProxies).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->HitProxies).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 8) = 0;
  *(HHitProxy **)(pFVar3 + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddReferencedObjects @ 148917960

void __thiscall
FViewport::FHitProxyMap::AddReferencedObjects(FHitProxyMap *this,FReferenceCollector *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = (int)this->_padding_;
  uVar5 = 0;
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < iVar7) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(lVar6 + this->_padding_);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
      }
      iVar7 = (int)this->_padding_;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar7);
  }
  return;
}

// GetReferencerName @ 14895c210

FString * __thiscall
FViewport::FHitProxyMap::GetReferencerName(FHitProxyMap *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FViewport::FHitProxyMap");
  return __return_storage_ptr__;
}

// GetSizeXY @ 14895ce10

TIntPoint<int> __thiscall FViewport::FHitProxyMap::GetSizeXY(FHitProxyMap *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(int *)in_RDX = (int)this->_padding_;
  *(undefined4 *)((longlong)in_RDX + 4) = *(undefined4 *)((longlong)&this->_padding_ + 4);
  return (TIntPoint<int>)in_RDX;
}

// Init @ 148961e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FViewport::FHitProxyMap::Init(FHitProxyMap *this,uint param_1,uint param_2)

{
  longlong *plVar1;
  TRefCountPtr<FRHITexture> *pTVar2;
  FRHIResource *this_00;
  FRHITexture *this_01;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_258 [32];
  undefined1 local_238 [16];
  uint local_228;
  uint uStack_224;
  uint local_220;
  uint uStack_21c;
  FRHITextureDesc local_218;
  FName local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  FRHITextureDesc local_198;
  wchar_t *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  FRHITextureDesc local_118;
  wchar_t *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  FRHITextureDesc local_98;
  FName local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_258;
  this->SizeX = param_1;
  this->SizeY = param_2;
  local_198.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_198.ExtData = 0;
  local_148 = L"HitProxyTexture";
  local_198.Extent.field0_0x0._s_0.Y = param_2;
  local_198.Extent.field0_0x0._s_0.X = param_1;
  local_198.ClearValue.Value.Color[3] = FClearValueBinding::White.Value.Color[3];
  local_198.Depth = 1;
  local_198.ArraySize = 1;
  local_198.NumMips = '\x01';
  local_198.NumSamples = '\x01';
  local_198.Dimension = Texture2D;
  local_198.Format = PF_B8G8R8A8;
  local_198.UAVFormat = PF_Unknown;
  local_198.FastVRAMPercentage = 0xff;
  local_198.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_198.AliasableFormats.ArrayNum = 0;
  local_198.AliasableFormats.ArrayMax = 1;
  local_140 = 0x70;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_198.Flags = ShaderResource|RenderTargetable;
  local_198.ClearValue._0_8_ = FClearValueBinding::White._0_8_;
  local_198.ClearValue.Value._4_8_ = FClearValueBinding::White.Value._4_8_;
  local_228 = param_1;
  uStack_224 = param_2;
  FRHITextureDesc::FRHITextureDesc(&local_118,&local_198);
  local_c8 = local_148;
  local_c0 = (undefined4)local_140;
  local_bc = local_140._4_4_;
  local_b8 = local_138;
  local_b0 = local_130;
  local_a8 = local_128;
  if (local_198.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_198.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRHICommandListBase::CreateTexture
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (FRHITextureCreateDesc *)local_238);
  plVar1 = &this->_padding_;
  if (plVar1 == (longlong *)local_238) {
LAB_148962003:
    if ((FRHIResource *)local_238._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_238._0_8_);
    }
  }
  else {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = local_238._0_8_;
    local_238._0_8_ = (FRHIResource *)0x0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
      goto LAB_148962003;
    }
  }
  if (local_118.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_118.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_218.ClearValue._0_8_ = 1;
  local_218.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_218.ClearValue.Value._4_8_ = 0;
  local_1c8 = (FName)0x151bdd030;
  local_220 = this->SizeX;
  uStack_21c = this->SizeY;
  local_218.Extent.field0_0x0._0_4_ = this->SizeX;
  local_218.Extent.field0_0x0._4_4_ = this->SizeY;
  local_218.ClearValue.Value.Color[3] = 0.0;
  local_218.ExtData = 0;
  local_218.Depth = 1;
  local_218.ArraySize = 1;
  local_218.NumMips = '\x01';
  local_218.NumSamples = '\x01';
  local_218.Dimension = Texture2D;
  local_218.Format = PF_B8G8R8A8;
  local_218.UAVFormat = PF_Unknown;
  local_218.FastVRAMPercentage = 0xff;
  local_218.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_218.AliasableFormats.ArrayNum = 0;
  local_218.AliasableFormats.ArrayMax = 1;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_218.Flags = CPUReadback;
  FRHITextureDesc::FRHITextureDesc(&local_98,&local_218);
  local_48 = local_1c8;
  local_40 = (undefined4)local_1c0;
  local_3c = local_1c0._4_4_;
  local_38 = local_1b8;
  local_30 = local_1b0;
  local_28 = local_1a8;
  if (local_218.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_218.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRHICommandListBase::CreateTexture
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (FRHITextureCreateDesc *)(local_238 + 8));
  pTVar2 = &this->HitProxyCPUTexture;
  if (pTVar2 != (TRefCountPtr<FRHITexture> *)(local_238 + 8)) {
    this_01 = pTVar2->Reference;
    pTVar2->Reference = (FRHITexture *)local_238._8_8_;
    local_238._8_8_ = (FRHITexture *)0x0;
    if (this_01 == (FRHITexture *)0x0) goto LAB_14896217d;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  if ((FRHITexture *)local_238._8_8_ != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_238._8_8_);
  }
LAB_14896217d:
  if (local_98.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_98.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return;
}

// Invalidate @ 1489660a0

void __thiscall FViewport::FHitProxyMap::Invalidate(FHitProxyMap *this)

{
  int *piVar1;
  
  DestructItems<TRefCountPtr<HHitProxy>,int>
            ((TRefCountPtr<HHitProxy> *)(this->HitProxies).AllocatorInstance.Data,
             (this->HitProxies).ArrayNum);
  piVar1 = &(this->HitProxies).ArrayMax;
  (this->HitProxies).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->HitProxies).AllocatorInstance,0,piVar1);
  }
  return;
}

// Release @ 1489777c0

void __thiscall FViewport::FHitProxyMap::Release(FHitProxyMap *this)

{
  FRHITexture *this_00;
  FRHIResource *this_01;
  
  this_00 = (this->HitProxyCPUTexture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->HitProxyCPUTexture).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (FRHIResource *)this->_padding_;
  if (this_01 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_01);
    return;
  }
  return;
}

