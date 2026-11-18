// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FVolumetricLightmapDataLayer @ 14834c200

FVolumetricLightmapDataLayer * __thiscall
FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer
          (FVolumetricLightmapDataLayer *this,FVolumetricLightmapDataLayer *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FRHITexture *this_00;
  FRHIUnorderedAccessView *this_01;
  
  pTVar1 = &this->Data;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FVolumetricLightmapDataLayer__6B_;
  iVar3 = (param_1->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  this->DataSize = param_1->DataSize;
  this->Format = param_1->Format;
  (this->Texture).Reference = (FRHITexture *)0x0;
  this_00 = (param_1->Texture).Reference;
  (this->Texture).Reference = this_00;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
  this_01 = (param_1->UAV).Reference;
  (this->UAV).Reference = this_01;
  if (this_01 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  this->bNeedsCPUAccess = param_1->bNeedsCPUAccess;
  return this;
}

// FVolumetricLightmapDataLayer @ 14834c2e0

FVolumetricLightmapDataLayer * __thiscall
FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer(FVolumetricLightmapDataLayer *this)

{
  this->_padding_ = (longlong)&___7FVolumetricLightmapDataLayer__6B_;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  this->DataSize = 0;
  this->Format = PF_Unknown;
  (this->Texture).Reference = (FRHITexture *)0x0;
  (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
  this->bNeedsCPUAccess = false;
  return this;
}

// ~FVolumetricLightmapDataLayer @ 14834dc80

void __thiscall
FVolumetricLightmapDataLayer::~FVolumetricLightmapDataLayer(FVolumetricLightmapDataLayer *this)

{
  FRHIUnorderedAccessView *this_00;
  FRHITexture *this_01;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->UAV).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->Texture).Reference;
  if (this_01 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FResourceBulkDataInterface__6B_;
  return;
}

// operator= @ 14834ea40

FVolumetricLightmapDataLayer * __thiscall
FVolumetricLightmapDataLayer::operator=
          (FVolumetricLightmapDataLayer *this,FVolumetricLightmapDataLayer *param_1)

{
  FRHITexture *this_00;
  FRHITexture *this_01;
  FRHIUnorderedAccessView *this_02;
  FRHIUnorderedAccessView *this_03;
  
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(&this->Data,&param_1->Data);
  this->DataSize = param_1->DataSize;
  this->Format = param_1->Format;
  this_00 = (param_1->Texture).Reference;
  this_01 = (this->Texture).Reference;
  if (this_01 != this_00) {
    (this->Texture).Reference = this_00;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  this_02 = (param_1->UAV).Reference;
  this_03 = (this->UAV).Reference;
  if (this_03 != this_02) {
    (this->UAV).Reference = this_02;
    if (this_02 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_02);
    }
    if (this_03 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_03);
    }
  }
  this->bNeedsCPUAccess = param_1->bNeedsCPUAccess;
  return this;
}

// CreateTargetTexture @ 148369800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVolumetricLightmapDataLayer::CreateTargetTexture
          (FVolumetricLightmapDataLayer *this,FRHICommandListBase *param_1,TIntVector3<int> *param_2
          )

{
  TRefCountPtr<FRHITexture> *pTVar1;
  FRHITexture *this_00;
  TRefCountPtr<FRHITexture> TVar2;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [40];
  longlong local_1a0;
  longlong local_198;
  undefined4 local_190;
  int local_18c;
  undefined4 local_188;
  longlong local_184;
  undefined2 local_17c;
  undefined4 local_17a;
  undefined1 local_176;
  EPixelFormat local_175;
  undefined2 local_174;
  FResourceBulkDataInterface *local_168;
  FNameEntryId local_160;
  uint local_15c;
  FName local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  FRHITextureDesc local_128;
  FName local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FRHITextureDesc local_a8;
  FName local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_1c8._16_8_ = *(undefined8 *)&param_2->field0_0x0;
  local_17c = (undefined2)(param_2->field0_0x0)._s_0.Z;
  local_18c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_1c8._32_8_ = 0;
  local_1a0 = 1;
  local_158 = (FName)0x1518bfa40;
  local_1c8._0_4_ = local_1c8._16_4_;
  local_1c8._4_4_ = (undefined4)((ulonglong)local_1c8._16_8_ >> 0x20);
  local_175 = this->Format;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_17a = 0x1010001;
  local_176 = 2;
  local_174 = 0xff00;
  local_168 = (FResourceBulkDataInterface *)0x0;
  local_160.Value = 0;
  local_15c = 1;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_184 = local_1c8._16_8_;
  FRHITextureDesc::FRHITextureDesc(&local_128,(FRHITextureDesc *)(local_1c8 + 0x20));
  local_d8 = local_158;
  local_d0 = (undefined4)local_150;
  local_cc = local_150._4_4_;
  local_c8 = local_148;
  local_c0 = local_140;
  local_b8 = local_138;
  if (local_168 != (FResourceBulkDataInterface *)0x0) {
    FMemory::Free(local_168);
  }
  local_128.Flags = UAV|ShaderResource;
  FLazyName::Resolve(&VolumetricLightmapDataLayerName);
  local_c0 = CONCAT44(local_1c8._4_4_,local_1c8._0_4_);
  FRHITextureDesc::FRHITextureDesc(&local_a8,&local_128);
  local_58 = local_d8;
  local_50 = local_d0;
  local_4c = local_cc;
  local_48 = local_c8;
  local_40 = local_c0;
  local_38 = local_b8;
  if (local_128.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_128.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  TVar2 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_1c8);
  pTVar1 = &this->Texture;
  if ((FRHITexture *)pTVar1 != TVar2.Reference) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)(TVar2.Reference)->_padding_;
    (TVar2.Reference)->_padding_ = 0;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if ((FRHIResource *)CONCAT44(local_1c8._4_4_,local_1c8._0_4_) != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)CONCAT44(local_1c8._4_4_,local_1c8._0_4_));
  }
  if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return;
}

// CreateTargetTexture @ 148369a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVolumetricLightmapDataLayer::CreateTargetTexture
          (FVolumetricLightmapDataLayer *this,TIntVector3<int> *param_1)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TIntVector3<int>_u_0 local_18;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  iVar2 = (param_1->field0_0x0)._s_0.Z;
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
  local_18._0_8_ = uVar1;
  local_18._s_0.Z = iVar2;
  CreateTargetTexture(this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                      (TIntVector3<int> *)&local_18._s_0);
  return;
}

// CreateTexture @ 148369a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVolumetricLightmapDataLayer::CreateTexture
          (FVolumetricLightmapDataLayer *this,FRHICommandListBase *param_1,TIntVector3<int> *param_2
          )

{
  TRefCountPtr<FRHITexture> *pTVar1;
  FRHITexture *this_00;
  TRefCountPtr<FRHITexture> TVar2;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [40];
  longlong local_1a0;
  longlong local_198;
  undefined4 local_190;
  int local_18c;
  undefined4 local_188;
  longlong local_184;
  undefined2 local_17c;
  undefined4 local_17a;
  undefined1 local_176;
  EPixelFormat local_175;
  undefined2 local_174;
  FResourceBulkDataInterface *local_168;
  FNameEntryId local_160;
  uint local_15c;
  FName local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  FRHITextureDesc local_128;
  FName local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  FVolumetricLightmapDataLayer *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FRHITextureDesc local_a8;
  FName local_58;
  undefined4 local_50;
  undefined4 local_4c;
  FVolumetricLightmapDataLayer *local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_1c8._16_8_ = *(undefined8 *)&param_2->field0_0x0;
  local_1c8._32_8_ = 0;
  local_18c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_17c = (undefined2)(param_2->field0_0x0)._s_0.Z;
  local_1a0 = 1;
  local_158 = (FName)0x1518bfa40;
  local_1c8._0_4_ = local_1c8._16_4_;
  local_1c8._4_4_ = (undefined4)((ulonglong)local_1c8._16_8_ >> 0x20);
  local_175 = this->Format;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_17a = 0x1010001;
  local_176 = 2;
  local_174 = 0xff00;
  local_168 = (FResourceBulkDataInterface *)0x0;
  local_160.Value = 0;
  local_15c = 1;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_184 = local_1c8._16_8_;
  FRHITextureDesc::FRHITextureDesc(&local_128,(FRHITextureDesc *)(local_1c8 + 0x20));
  local_d8 = local_158;
  local_d0 = (undefined4)local_150;
  local_cc = local_150._4_4_;
  local_c8 = (FVolumetricLightmapDataLayer *)local_148;
  local_c0 = local_140;
  local_b8 = local_138;
  if (local_168 != (FResourceBulkDataInterface *)0x0) {
    FMemory::Free(local_168);
  }
  local_128.Flags = UAV|ShaderResource;
  local_cc = 1;
  local_c8 = this;
  FLazyName::Resolve(&VolumetricLightmapDataLayerName);
  local_c0 = CONCAT44(local_1c8._4_4_,local_1c8._0_4_);
  FRHITextureDesc::FRHITextureDesc(&local_a8,&local_128);
  local_58 = local_d8;
  local_50 = local_d0;
  local_4c = local_cc;
  local_48 = local_c8;
  local_40 = local_c0;
  local_38 = local_b8;
  if (local_128.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_128.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  TVar2 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_1c8);
  pTVar1 = &this->Texture;
  if ((FRHITexture *)pTVar1 != TVar2.Reference) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)(TVar2.Reference)->_padding_;
    (TVar2.Reference)->_padding_ = 0;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if ((FRHIResource *)CONCAT44(local_1c8._4_4_,local_1c8._0_4_) != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)CONCAT44(local_1c8._4_4_,local_1c8._0_4_));
  }
  if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return;
}

// CreateTexture @ 148369cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVolumetricLightmapDataLayer::CreateTexture
          (FVolumetricLightmapDataLayer *this,TIntVector3<int> *param_1)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TIntVector3<int>_u_0 local_18;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  iVar2 = (param_1->field0_0x0)._s_0.Z;
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
  local_18._0_8_ = uVar1;
  local_18._s_0.Z = iVar2;
  CreateTexture(this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                (TIntVector3<int> *)&local_18._s_0);
  return;
}

// CreateUAV @ 148369fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVolumetricLightmapDataLayer::CreateUAV
          (FVolumetricLightmapDataLayer *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar1;
  char cVar2;
  FRHITexture *pFVar3;
  FRHIUnorderedAccessView *this_00;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  TRefCountPtr<FRHIUnorderedAccessView> local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (((this->Texture).Reference == (FRHITexture *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmap.cpp"
                         ,0x3a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Texture).Reference;
  uStack_18 = 0;
  local_20 = &DAT_100000003;
  if ((pFVar3 == (FRHITexture *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xc0b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar7 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
  cVar2 = *(char *)(lVar7 + 0x32);
  if (cVar2 == '\0') {
    bVar6 = local_20._2_1_ & 0x9f | 0x10;
  }
  else if (cVar2 == '\x01') {
    bVar6 = local_20._2_1_ & 0xaf | 0x20;
  }
  else if (cVar2 == '\x02') {
    bVar6 = local_20._2_1_ & 0xdf | 0x50;
  }
  else if (cVar2 == '\x03') {
    bVar6 = local_20._2_1_ & 0xbf | 0x30;
  }
  else {
    if (cVar2 != '\x04') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xbfb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14836a0e9;
    }
    bVar6 = local_20._2_1_ & 0xcf | 0x40;
  }
  local_20._0_3_ = CONCAT12(bVar6,(undefined2)local_20);
LAB_14836a0e9:
  pFVar3 = (this->Texture).Reference;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name997,L"RHIMisc/CreateUnorderedAccessView");
    _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name997,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name997,true);
  lVar7 = (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3);
  if ((lVar7 != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture->GetTextureReference() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x3e6,
                         L"Creating an unordered access view of an FRHITextureReference is not supported."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x1b8))(GDynamicRHI,&local_28,param_1,pFVar3,&local_20);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pTVar1 = &this->UAV;
  if (pTVar1 != &local_28) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = local_28.Reference;
    local_28.Reference = (FRHIUnorderedAccessView *)0x0;
    if (this_00 == (FRHIUnorderedAccessView *)0x0) {
      return;
    }
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (local_28.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_28.Reference);
  }
  return;
}

// Discard @ 14836b4a0

void __thiscall FVolumetricLightmapDataLayer::Discard(FVolumetricLightmapDataLayer *this)

{
  int *piVar1;
  
  if (this->bNeedsCPUAccess == false) {
    piVar1 = &(this->Data).ArrayMax;
    (this->Data).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->Data).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// GetResourceBulkData @ 1483876e0

void * __thiscall
FVolumetricLightmapDataLayer::GetResourceBulkData(FVolumetricLightmapDataLayer *this)

{
  return (this->Data).AllocatorInstance.Data;
}

// GetResourceBulkDataSize @ 1483876f0

uint __thiscall
FVolumetricLightmapDataLayer::GetResourceBulkDataSize(FVolumetricLightmapDataLayer *this)

{
  return (this->Data).ArrayNum;
}

