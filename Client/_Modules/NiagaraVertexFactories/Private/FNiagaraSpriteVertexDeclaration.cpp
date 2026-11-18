// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraVertexFactories
// Functions: 4

// FillDeclElements @ 148dcbc50

void __thiscall
FNiagaraSpriteVertexDeclaration::FillDeclElements
          (FNiagaraSpriteVertexDeclaration *this,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uchar local_18;
  uchar uStack_17;
  uchar uStack_16;
  uchar uStack_15;
  uchar uStack_14;
  uchar uStack_13;
  uchar uStack_12;
  uchar uStack_11;
  
  if (*param_2 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraVertexFactories\\Private\\NiagaraSpriteVertexFactory.cpp"
                       ,0x5e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uStack_17 = (uchar)*param_2;
  uStack_12 = '\0';
  uStack_11 = '\0';
  local_18 = '\0';
  uStack_16 = '\x02';
  uStack_15 = '\0';
  uStack_14 = '\b';
  uStack_13 = '\0';
  if ((param_1 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)&stack0xffffffffffffffe8) &&
     (&stack0xffffffffffffffe8 < (param_1->AllocatorInstance).InlineData + param_1->ArrayMax)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  *(ulonglong *)(param_1->AllocatorInstance).InlineData[iVar3].Pad =
       CONCAT26(_uStack_12,CONCAT42(_uStack_16,CONCAT11(uStack_17,local_18)));
  return;
}

// InitRHI @ 148dcbd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraSpriteVertexDeclaration::InitRHI
          (FNiagaraSpriteVertexDeclaration *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  FRHIResource *this_01;
  undefined1 auStack_d8 [32];
  undefined4 local_b8 [4];
  TArray<FVertexElement,TFixedAllocator<17>_> local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a8.ArrayMax = 0x11;
  local_a8.ArrayNum = 0;
  local_b8[0] = 0;
  (**(code **)(this->_padding_ + 0x30))(this,&local_a8,local_b8);
  this_01 = (FRHIResource *)PipelineStateCache::GetOrCreateVertexDeclaration(&local_a8);
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != this_01) {
    (this->VertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)this_01;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  return;
}

// ReleaseRHI @ 148dcbe00

void __thiscall FNiagaraSpriteVertexDeclaration::ReleaseRHI(FNiagaraSpriteVertexDeclaration *this)

{
  FRHIResource *this_00;
  
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->VertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// ~FNiagaraSpriteVertexDeclaration @ 148dcdad0

void __thiscall
FNiagaraSpriteVertexDeclaration::~FNiagaraSpriteVertexDeclaration
          (FNiagaraSpriteVertexDeclaration *this)

{
  FRHIResource *this_00;
  
  this->_padding_ = (longlong)&___7FNiagaraSpriteVertexDeclaration__6B_;
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

