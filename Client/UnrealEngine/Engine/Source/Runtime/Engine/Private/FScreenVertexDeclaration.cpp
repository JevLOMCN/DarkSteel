// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// InitRHI @ 148504f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FScreenVertexDeclaration::InitRHI(FScreenVertexDeclaration *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIVertexDeclaration> *pTVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  ForElementType<FVertexElement> *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 local_c8 [10];
  uchar auStack_be [6];
  TTypeCompatibleBytes<FVertexElement> local_b8 [2];
  ForElementType<FVertexElement> local_a8;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_1c = 0x11;
  local_c8[2] = '\x02';
  local_c8[3] = '\0';
  local_c8[4] = '\x10';
  local_c8[5] = '\0';
  local_20 = 0;
  local_c8[0] = '\0';
  local_c8[1] = '\0';
  local_c8[6] = '\0';
  local_c8[7] = '\0';
  iVar4 = 0;
  if ((&local_a8 <= (ForElementType<FVertexElement> *)local_c8) && (local_c8 < &local_20)) {
    local_d8 = 8;
    local_f0 = &local_a8;
    local_e0 = 0;
    local_e8 = 0x11;
    local_f8 = local_c8;
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
    iVar4 = local_20;
    if (local_20 == local_1c) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&local_a8,&local_1c);
    }
  }
  local_20 = iVar4 + 1;
  local_c8[8] = '\0';
  local_c8[9] = '\b';
  builtin_memcpy(auStack_be,"\x02\x01\x10",4);
  auStack_be[4] = '\0';
  auStack_be[5] = '\0';
  *(ulonglong *)local_a8.InlineData[iVar4].Pad =
       CONCAT26(local_c8._6_2_,CONCAT42(local_c8._2_4_,local_c8._0_2_));
  if ((&local_a8 <= (ForElementType<FVertexElement> *)(local_c8 + 8)) &&
     (local_c8 + 8 < local_a8.InlineData + local_1c)) {
    local_e0 = (longlong)local_20;
    local_d8 = 8;
    local_f0 = &local_a8;
    local_f8 = local_c8 + 8;
    local_e8 = (longlong)local_1c;
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
  if (local_20 == local_1c) {
    local_20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,&local_a8,&local_1c);
  }
  lVar5 = (longlong)local_20;
  local_20 = local_20 + 1;
  *(ulonglong *)local_a8.InlineData[lVar5].Pad =
       CONCAT26(auStack_be._4_2_,CONCAT42(auStack_be._0_4_,local_c8._8_2_));
  (**(code **)(GDynamicRHI->_padding_ + 0x68))(GDynamicRHI,local_b8,&local_a8);
  pTVar1 = &this->VertexDeclarationRHI;
  if ((TTypeCompatibleBytes<FVertexElement> *)pTVar1 != local_b8) {
    this_00 = (FRHIResource *)pTVar1->Reference;
    pTVar1->Reference = (FRHIVertexDeclaration *)local_b8[0].Pad;
    local_b8[0].Pad[0] = '\0';
    local_b8[0].Pad[1] = '\0';
    local_b8[0].Pad[2] = '\0';
    local_b8[0].Pad[3] = '\0';
    local_b8[0].Pad[4] = '\0';
    local_b8[0].Pad[5] = '\0';
    local_b8[0].Pad[6] = '\0';
    local_b8[0].Pad[7] = '\0';
    if (this_00 == (FRHIResource *)0x0) {
      return;
    }
    FRHIResource::Release(this_00);
  }
  if (local_b8[0].Pad != (uchar  [8])0x0) {
    FRHIResource::Release((FRHIResource *)local_b8[0].Pad);
  }
  return;
}

// ReleaseRHI @ 148505150

void __thiscall FScreenVertexDeclaration::ReleaseRHI(FScreenVertexDeclaration *this)

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

// ~FScreenVertexDeclaration @ 148510fd0

void __thiscall FScreenVertexDeclaration::~FScreenVertexDeclaration(FScreenVertexDeclaration *this)

{
  FRHIResource *this_00;
  
  this->_padding_ = (longlong)&___7FScreenVertexDeclaration__6B_;
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

