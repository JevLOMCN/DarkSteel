// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 4

// FRHITextureInitializer @ 145cd10c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHITextureInitializer * __thiscall
FRHITextureInitializer::FRHITextureInitializer
          (FRHITextureInitializer *this,FRHICommandListBase *param_1,FRHITexture *param_2,
          void *param_3,ulong64 param_4,
          TUniqueFunction<TRefCountPtr<FRHITexture>___cdecl(FRHICommandListBase_&)> *param_5,
          TUniqueFunction<FRHITextureSubresourceInitializer___cdecl(FRHITextureInitializer::FSubresourceIndex)>
          *param_6)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  
  *(undefined8 *)&this->FinalizeCallback = *(undefined8 *)param_5;
  *(undefined8 *)&(this->FinalizeCallback).field_0x28 = *(undefined8 *)&param_5->field_0x28;
  *(undefined8 *)&param_5->field_0x28 = 0;
  uVar5 = *(undefined8 *)&param_5->field_0x18;
  *(undefined8 *)&(this->FinalizeCallback).field_0x10 = *(undefined8 *)&param_5->field_0x10;
  *(undefined8 *)&(this->FinalizeCallback).field_0x18 = uVar5;
  *(undefined8 *)&(this->FinalizeCallback).field_0x20 = *(undefined8 *)&param_5->field_0x20;
  if (*(longlong *)&this->FinalizeCallback != 0) {
    *(undefined8 *)param_5 = 0;
  }
  *(undefined8 *)&this->GetSubresourceCallback = *(undefined8 *)param_6;
  *(undefined8 *)&(this->GetSubresourceCallback).field_0x28 = *(undefined8 *)&param_6->field_0x28;
  *(undefined8 *)&param_6->field_0x28 = 0;
  uVar2 = *(undefined4 *)&param_6->field_0x14;
  uVar3 = *(undefined4 *)&param_6->field_0x18;
  uVar4 = *(undefined4 *)&param_6->field_0x1c;
  *(undefined4 *)&(this->GetSubresourceCallback).field_0x10 = *(undefined4 *)&param_6->field_0x10;
  *(undefined4 *)&(this->GetSubresourceCallback).field_0x14 = uVar2;
  *(undefined4 *)&(this->GetSubresourceCallback).field_0x18 = uVar3;
  *(undefined4 *)&(this->GetSubresourceCallback).field_0x1c = uVar4;
  *(undefined8 *)&(this->GetSubresourceCallback).field_0x20 = *(undefined8 *)&param_6->field_0x20;
  if (*(longlong *)&this->GetSubresourceCallback != 0) {
    *(undefined8 *)param_6 = 0;
  }
  this->WritableSize = param_4;
  this->CommandList = param_1;
  this->Texture = param_2;
  this->WritableData = param_3;
  lVar7 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  piVar1 = &(param_1->PendingTextureUploads).ArrayMax;
  (this->Desc).Extent.field0_0x0 = *(TIntPoint<int>_u_0 *)(lVar7 + 0x24);
  (this->Desc).Depth = *(ushort *)(lVar7 + 0x2c);
  (this->Desc).ArraySize = *(ushort *)(lVar7 + 0x2e);
  (this->Desc).Dimension = *(ETextureDimension *)(lVar7 + 0x32);
  (this->Desc).Format = *(EPixelFormat *)(lVar7 + 0x33);
  iVar6 = (param_1->PendingTextureUploads).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_1->PendingTextureUploads).AllocatorInstance,piVar1);
  }
  (param_1->PendingTextureUploads).ArrayNum = iVar6 + 1;
  *(FRHITexture **)((param_1->PendingTextureUploads).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       param_2;
  return this;
}

// Finalize @ 145cdb760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall FRHITextureInitializer::Finalize(FRHITextureInitializer *this)

{
  ERHIPipeline EVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FRHICommandListBase *this_00;
  FRHICommandListBase *pFVar4;
  longlong *plVar5;
  FRHIResource *this_01;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  TRefCountPtr<FRHITexture> TVar10;
  byte *pbVar11;
  TEventRef<unsigned_int> TVar12;
  undefined8 uVar13;
  FWriteBuffer *pFVar14;
  longlong *plVar15;
  ELLMTag EVar16;
  FRHITexture *in_RDX;
  ELLMTag EVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 auStackY_178 [32];
  undefined4 local_144;
  FRHIResource *local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128 [2];
  longlong local_118;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined8 local_e2;
  undefined2 local_da;
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_98;
  longlong local_80;
  FMemScope local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  undefined4 *local_58 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  puVar19 = (undefined1 *)0x0;
  local_144 = 0;
  in_RDX->_padding_ = 0;
  if (*(longlong *)&this->FinalizeCallback == 0) {
    return (TRefCountPtr<FRHITexture>)in_RDX;
  }
  if ((this->Texture == (FRHITexture *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHITextureInitializer.cpp"
                         ,0x1a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    TVar10.Reference = (FRHITexture *)(*pcVar7)();
    return (TRefCountPtr<FRHITexture>)TVar10.Reference;
  }
  pbVar11 = (byte *)(**(code **)(this->Texture->_padding_ + 0x20))();
  EVar17 = Textures;
  EVar16 = Textures;
  if ((*pbVar11 & 5) != 0) {
    EVar16 = RenderTargets;
  }
  FLLMScope::FLLMScope((FLLMScope *)&local_144,EVar16,false,None,Default,true);
  pbVar11 = (byte *)(**(code **)(this->Texture->_padding_ + 0x20))();
  if ((*pbVar11 & 5) != 0) {
    EVar17 = RenderTargets;
  }
  FMemScope::FMemScope(&local_78,EVar17,true);
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_138 = 0;
    TVar12 = (TEventRef<unsigned_int>)&local_138;
  }
  else {
    local_98 = this->Texture->_padding_;
    TVar12 = FStringTrace::GetNameRef(&local_70);
  }
  uVar13 = *(undefined8 *)TVar12;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    TVar12 = (TEventRef<unsigned_int>)&local_130;
    local_130 = 0;
    puVar18 = local_d8;
  }
  else {
    local_e2 = 0;
    local_da = 0;
    local_108 = 0;
    local_100 = 0;
    local_fc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_118 = 0;
    local_110 = 1;
    local_f8 = 0;
    local_f4 = 1;
    local_f0 = 1;
    local_ec = 0x10001;
    local_e8 = 0x101;
    local_e4 = 0xff00;
    local_d8 = (undefined1 *)0x0;
    local_d0 = 0;
    local_cc = 1;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    FLazyName::Resolve((FLazyName *)
                       &`public:_class_FName___cdecl_FRHITextureCreateDesc::GetTraceClassName(void)const___ptr64'
                        ::__l2::FRHITextureName);
    TVar12 = FStringTrace::GetNameRef(&local_68);
    puVar18 = puVar19;
    puVar19 = &DAT_00000001;
  }
  uVar2 = *(undefined8 *)TVar12;
  if ((puVar19 != (undefined1 *)0x0) && (puVar18 != (undefined1 *)0x0)) {
    FMemory::Free(puVar18);
  }
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_128[0] = 0;
    TVar12 = (TEventRef<unsigned_int>)local_128;
  }
  else {
    local_80 = this->Texture->_padding_;
    TVar12 = FStringTrace::GetNameRef(&local_60);
  }
  uVar3 = *(undefined8 *)TVar12;
  bVar8 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)local_58);
    bVar8 = true;
    *local_58[0] = (int)uVar13;
    local_58[0][1] = (int)uVar2;
    local_58[0][2] = (int)uVar3;
    *(undefined8 *)((longlong)local_58[1] + 0x28) = *(undefined8 *)((longlong)local_58[1] + 0x20);
  }
  this_00 = this->CommandList;
  EVar1 = this_00->ActivePipelines;
  if (((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    TVar10.Reference = (FRHITexture *)(*pcVar7)();
    return (TRefCountPtr<FRHITexture>)TVar10.Reference;
  }
  bVar9 = this_00->ActivePipelines == None;
  if (bVar9) {
    FRHICommandListBase::SwitchPipeline(this_00,Graphics);
  }
  pFVar4 = this->CommandList;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->FinalizeCallback);
  plVar5 = *(longlong **)&(this->FinalizeCallback).field_0x28;
  pcVar7 = *(code **)&this->FinalizeCallback;
  plVar15 = (longlong *)&(this->FinalizeCallback).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar15 = plVar5;
  }
  uVar13 = (**(code **)(*plVar15 + 8))();
  (*pcVar7)(&local_140,uVar13,pFVar4);
  if (in_RDX != (FRHITexture *)&local_140) {
    this_01 = (FRHIResource *)in_RDX->_padding_;
    in_RDX->_padding_ = (longlong)local_140;
    local_140 = (FRHIResource *)0x0;
    if (this_01 == (FRHIResource *)0x0) goto LAB_145cdbabd;
    FRHIResource::Release(this_01);
  }
  if (local_140 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_140);
  }
LAB_145cdbabd:
  FRHICommandListBase::RemovePendingTextureUpload(this->CommandList,this->Texture);
  Reset(this);
  if (bVar9) {
    FRHICommandListBase::SwitchPipeline(this_00,None);
  }
  if (bVar8) {
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar6 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar14 = *(FWriteBuffer **)(lVar6 + 0x20);
    if ((int)pFVar14 - *(int *)&pFVar14->Cursor < 1) {
      pFVar14 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar14->Cursor = '\n';
    pFVar14->Cursor = pFVar14->Cursor + 1;
    pFVar14->Committed = pFVar14->Cursor;
  }
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope((FLLMScope *)&local_144);
  return (TRefCountPtr<FRHITexture>)in_RDX;
}

// RemovePendingTextureUpload @ 145cef840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHITextureInitializer::RemovePendingTextureUpload(FRHITextureInitializer *this)

{
  FRHICommandListBase::RemovePendingTextureUpload(this->CommandList,this->Texture);
  return;
}

// Reset @ 145cf0870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHITextureInitializer::Reset(FRHITextureInitializer *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_78 [48];
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_48 = *(longlong *)&this->FinalizeCallback;
  uVar6 = *(undefined8 *)&(this->FinalizeCallback).field_0x8;
  uVar1 = *(undefined4 *)&(this->FinalizeCallback).field_0x10;
  uVar2 = *(undefined4 *)&(this->FinalizeCallback).field_0x14;
  uVar3 = *(undefined4 *)&(this->FinalizeCallback).field_0x18;
  uVar4 = *(undefined4 *)&(this->FinalizeCallback).field_0x1c;
  uVar5 = *(undefined8 *)&(this->FinalizeCallback).field_0x20;
  plStack_20 = *(longlong **)&(this->FinalizeCallback).field_0x28;
  *(undefined8 *)&this->FinalizeCallback = 0;
  *(undefined8 *)&(this->FinalizeCallback).field_0x8 = uStack_40;
  *(undefined4 *)&(this->FinalizeCallback).field_0x10 = local_38;
  *(undefined4 *)&(this->FinalizeCallback).field_0x14 = uStack_34;
  *(undefined4 *)&(this->FinalizeCallback).field_0x18 = uStack_30;
  *(undefined4 *)&(this->FinalizeCallback).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->FinalizeCallback).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->FinalizeCallback).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->FinalizeCallback).field_0x28 = 0;
  *(undefined4 *)&(this->FinalizeCallback).field_0x2c = 0;
  local_38 = uVar1;
  uStack_34 = uVar2;
  uStack_30 = uVar3;
  uStack_2c = uVar4;
  local_28 = uVar5;
  uStack_40 = uVar6;
  if (local_48 != 0) {
    plVar7 = (longlong *)&local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar7 = plStack_20;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  local_48 = *(longlong *)&this->GetSubresourceCallback;
  uVar6 = *(undefined8 *)&(this->GetSubresourceCallback).field_0x8;
  uVar1 = *(undefined4 *)&(this->GetSubresourceCallback).field_0x10;
  uVar2 = *(undefined4 *)&(this->GetSubresourceCallback).field_0x14;
  uVar3 = *(undefined4 *)&(this->GetSubresourceCallback).field_0x18;
  uVar4 = *(undefined4 *)&(this->GetSubresourceCallback).field_0x1c;
  uVar5 = *(undefined8 *)&(this->GetSubresourceCallback).field_0x20;
  plStack_20 = *(longlong **)&(this->GetSubresourceCallback).field_0x28;
  *(undefined8 *)&this->GetSubresourceCallback = 0;
  *(undefined8 *)&(this->GetSubresourceCallback).field_0x8 = uStack_40;
  *(undefined4 *)&(this->GetSubresourceCallback).field_0x10 = local_38;
  *(undefined4 *)&(this->GetSubresourceCallback).field_0x14 = uStack_34;
  *(undefined4 *)&(this->GetSubresourceCallback).field_0x18 = uStack_30;
  *(undefined4 *)&(this->GetSubresourceCallback).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->GetSubresourceCallback).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->GetSubresourceCallback).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->GetSubresourceCallback).field_0x28 = 0;
  *(undefined4 *)&(this->GetSubresourceCallback).field_0x2c = 0;
  local_38 = uVar1;
  uStack_34 = uVar2;
  uStack_30 = uVar3;
  uStack_2c = uVar4;
  local_28 = uVar5;
  if (local_48 != 0) {
    plVar7 = (longlong *)&local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar7 = plStack_20;
    }
    uStack_40 = uVar6;
    (**(code **)(*plVar7 + 0x10))();
  }
  this->CommandList = (FRHICommandListBase *)0x0;
  this->Texture = (FRHITexture *)0x0;
  (this->Desc).Extent.field0_0x0 = (TIntPoint<int>_u_0)&DAT_100000001;
  (this->Desc).Depth = 1;
  (this->Desc).ArraySize = 1;
  (this->Desc).Dimension = Texture2D;
  (this->Desc).Format = PF_Unknown;
  *(undefined2 *)&(this->Desc).field_0xe = 0;
  this->WritableData = (void *)0x0;
  this->WritableSize = 0;
  return;
}

