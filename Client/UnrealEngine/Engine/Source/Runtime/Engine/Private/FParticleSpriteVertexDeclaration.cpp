// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FillDeclElements @ 1481b9f70

void __thiscall
FParticleSpriteVertexDeclaration::FillDeclElements
          (FParticleSpriteVertexDeclaration *this,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined1 local_48 [9];
  uchar uStack_3f;
  uchar auStack_3e [4];
  ushort uStack_3a;
  undefined1 local_38 [9];
  uchar uStack_2f;
  uchar auStack_2e [4];
  ushort uStack_2a;
  undefined1 local_28 [9];
  uchar auStack_1f [3];
  ushort uStack_1c;
  ushort uStack_1a;
  
  if (*param_2 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                       ,0x93,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48[0] = '\0';
  uVar4._0_1_ = 'H';
  uVar4._1_1_ = '\0';
  uVar6._0_1_ = '\b';
  uVar6._1_1_ = '\0';
  if (this->bInstanced == false) {
    uVar6 = uVar4;
  }
  local_48[2] = '\x02';
  local_48[3] = '\x04';
  local_48[1] = (uchar)*param_2;
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48._4_2_ = uVar6;
  if ((param_1 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_48) &&
     (local_48 < (param_1->AllocatorInstance).InlineData + param_1->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  piVar1 = &param_1->ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_1->AllocatorInstance,piVar1);
  }
  param_1->ArrayNum = iVar5 + 1;
  *(ulonglong *)(param_1->AllocatorInstance).InlineData[iVar5].Pad =
       CONCAT26(local_48._6_2_,
                CONCAT24(local_48._4_2_,CONCAT22(local_48._2_2_,CONCAT11(local_48[1],local_48[0]))))
  ;
  *param_2 = *param_2 + 8;
  uStack_3f = (uchar)*param_2;
  if (this->bInstanced != false) {
    *param_2 = 0;
    uStack_3f = '\0';
    uVar6._0_1_ = '@';
    uVar6._1_1_ = '\0';
  }
  local_48[8] = this->bInstanced != false;
  uStack_3a = (ushort)this->bInstanced;
  auStack_3e[0] = '\x04';
  auStack_3e[1] = '\0';
  auStack_3e._2_2_ = uVar6;
  if ((param_1 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_48 + 8)) &&
     (local_48 + 8 < (param_1->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_1->AllocatorInstance,piVar1);
  }
  local_38[2] = '\x04';
  local_38[3] = '\x01';
  param_1->ArrayNum = iVar5 + 1;
  *(ulonglong *)(param_1->AllocatorInstance).InlineData[iVar5].Pad =
       CONCAT26(uStack_3a,
                CONCAT24(auStack_3e._2_2_,CONCAT22(auStack_3e._0_2_,CONCAT11(uStack_3f,local_48[8]))
                        ));
  iVar5 = *param_2;
  *param_2 = iVar5 + 0x10;
  local_38[0] = this->bInstanced != false;
  local_38._6_2_ = ZEXT12(this->bInstanced);
  local_38[1] = (uchar)(iVar5 + 0x10);
  local_38._4_2_ = uVar6;
  if ((param_1 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_38) &&
     (local_38 < (param_1->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_1->AllocatorInstance,piVar1);
  }
  auStack_2e[0] = '\x04';
  auStack_2e[1] = '\x02';
  param_1->ArrayNum = iVar5 + 1;
  *(ulonglong *)(param_1->AllocatorInstance).InlineData[iVar5].Pad =
       CONCAT26(local_38._6_2_,
                CONCAT24(local_38._4_2_,CONCAT22(local_38._2_2_,CONCAT11(local_38[1],local_38[0]))))
  ;
  iVar5 = *param_2;
  *param_2 = iVar5 + 0x10;
  local_38[8] = this->bInstanced != false;
  uStack_2a = (ushort)this->bInstanced;
  uStack_2f = (uchar)(iVar5 + 0x10);
  auStack_2e._2_2_ = uVar6;
  if ((param_1 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_38 + 8)) &&
     (local_38 + 8 < (param_1->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_1->AllocatorInstance,piVar1);
  }
  local_28[2] = '\x04';
  local_28[3] = '\x03';
  param_1->ArrayNum = iVar5 + 1;
  *(ulonglong *)(param_1->AllocatorInstance).InlineData[iVar5].Pad =
       CONCAT26(uStack_2a,
                CONCAT24(auStack_2e._2_2_,CONCAT22(auStack_2e._0_2_,CONCAT11(uStack_2f,local_38[8]))
                        ));
  iVar5 = *param_2;
  *param_2 = iVar5 + 0x10;
  local_28[0] = this->bInstanced != false;
  local_28._6_2_ = ZEXT12(this->bInstanced);
  local_28[1] = (uchar)(iVar5 + 0x10);
  local_28._4_2_ = uVar6;
  if ((param_1 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_28) &&
     (local_28 < (param_1->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_1->AllocatorInstance,piVar1);
  }
  auStack_1f[0] = '\0';
  auStack_1f[1] = '\x04';
  param_1->ArrayNum = iVar5 + 1;
  auStack_1f[2] = '\x05';
  *(ulonglong *)(param_1->AllocatorInstance).InlineData[iVar5].Pad =
       CONCAT26(local_28._6_2_,
                CONCAT24(local_28._4_2_,CONCAT22(local_28._2_2_,CONCAT11(local_28[1],local_28[0]))))
  ;
  *param_2 = 0;
  uStack_1a = (ushort)this->bInstanced;
  local_28[8] = (this->bInstanced != false) + '\x01';
  uStack_1c = -(ushort)(this->bUsesDynamicParameter != false) & 0x10;
  if ((param_1 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_28 + 8)) &&
     (local_28 + 8 < (param_1->AllocatorInstance).InlineData + *piVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_1->AllocatorInstance,piVar1);
  }
  param_1->ArrayNum = iVar5 + 1;
  *(ulonglong *)(param_1->AllocatorInstance).InlineData[iVar5].Pad =
       CONCAT26(uStack_1a,
                CONCAT24(uStack_1c,CONCAT13(auStack_1f[2],CONCAT21(auStack_1f._0_2_,local_28[8]))));
  *param_2 = *param_2 + 0x10;
  return;
}

// InitRHI @ 1481ba490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParticleSpriteVertexDeclaration::InitRHI
          (FParticleSpriteVertexDeclaration *this,FRHICommandListBase *param_1)

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

// ReleaseRHI @ 1481ba530

void __thiscall FParticleSpriteVertexDeclaration::ReleaseRHI(FParticleSpriteVertexDeclaration *this)

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

// ~FParticleSpriteVertexDeclaration @ 1481c9320

void __thiscall
FParticleSpriteVertexDeclaration::~FParticleSpriteVertexDeclaration
          (FParticleSpriteVertexDeclaration *this)

{
  FRHIResource *this_00;
  
  this->_padding_ = (longlong)&___7FParticleSpriteVertexDeclaration__6B_;
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

