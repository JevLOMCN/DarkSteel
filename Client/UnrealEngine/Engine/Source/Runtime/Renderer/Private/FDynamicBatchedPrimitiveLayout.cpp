// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// InitRHI @ 144ed2340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicBatchedPrimitiveLayout::InitRHI
          (FDynamicBatchedPrimitiveLayout *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIUniformBufferLayout_const_> *pTVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FUniformBufferStaticSlotRegistry *pFVar7;
  FRHIUniformBufferLayout *pFVar8;
  FRHIUniformBufferLayout *this_00;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar9;
  uint uVar10;
  ulonglong uVar11;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  undefined4 local_c8 [4];
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_b8;
  int local_b0 [2];
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_a8;
  undefined8 local_a0;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_98;
  undefined8 local_90;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_88;
  undefined8 local_80;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_78;
  undefined8 local_70;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_68;
  undefined8 local_60;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  byte local_3c;
  longlong local_38 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FDynamicBatchedPrimitiveLayout::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FDynamicBatchedPrimitiveLayout::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FDynamicBatchedPrimitiveLayout::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_virtual_void___cdecl_FDynamicBatchedPrimitiveLayout::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                    ::__l2::BatchedPrimitiveSlotName,"BatchedPrimitive");
    _Init_thread_footer(&`public:_virtual_void___cdecl_FDynamicBatchedPrimitiveLayout::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  this_00 = (FRHIUniformBufferLayout *)0x0;
  local_b8.Packed = 0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
            (2,2,0x1c,(ForAnyElementType *)&local_b8.Frozen,local_b0,local_b0 + 1);
  TVar9 = local_b8;
  if ((local_b8.Packed & 1) != 0) {
    TVar9.UnfrozenPtr =
         (FScriptContainerElement *)((longlong)&local_b8 + ((longlong)local_b8.Packed >> 0x18));
  }
  FGenericPlatformString::Memcpy(TVar9.UnfrozenPtr,L"FBatchedPrimitiveParameters",0x38);
  local_a8.Packed = 0;
  local_a0 = 0;
  local_98.Packed = 0;
  local_90 = 0;
  local_88.Packed = 0;
  local_80 = 0;
  local_78.Packed = 0;
  local_70 = 0;
  local_68.Packed = 0;
  local_60 = 0;
  local_58.Packed = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0x10;
  local_40 = 0x1ffffff;
  local_3c = 0;
  FRHIUniformBufferLayoutInitializer::ComputeHash
            ((FRHIUniformBufferLayoutInitializer *)&local_b8.Frozen);
  uVar11 = local_a8.Packed & 0xff;
  local_3c = local_3c | 9;
  local_c8[0] = CONCAT13(local_c8[0]._3_1_,0x110000);
  TVar9 = local_a8;
  if ((local_a8.Packed & 1) != 0) {
    TVar9.UnfrozenPtr =
         (FScriptContainerElement *)((longlong)&local_a8 + ((longlong)local_a8.Packed >> 0x18));
  }
  if (TVar9.Packed <= local_c8) {
    TVar9 = local_a8;
    if ((local_a8.Packed & 1) != 0) {
      TVar9.UnfrozenPtr =
           (FScriptContainerElement *)((longlong)&local_a8 + ((longlong)local_a8.Packed >> 0x18));
    }
    if ((FScriptContainerElement *)local_c8 < TVar9.UnfrozenPtr + (longlong)local_a0._4_4_ * 4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = local_a8.Packed & 0xff;
    }
  }
  iVar5 = (int)local_a0;
  if ((int)local_a0 == local_a0._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x204,(ForAnyElementType *)&local_a8.Frozen,(int *)((longlong)&local_a0 + 4))
    ;
    uVar11 = local_a8.Packed & 0xff;
  }
  local_a0 = CONCAT44(local_a0._4_4_,iVar5 + 1);
  TVar9 = local_a8;
  if ((uVar11 & 1) != 0) {
    TVar9.UnfrozenPtr =
         (FScriptContainerElement *)((longlong)&local_a8 + ((longlong)local_a8.Packed >> 0x18));
  }
  *(undefined4 *)(TVar9.UnfrozenPtr + (longlong)iVar5 * 4) = local_c8[0];
  pFVar7 = FUniformBufferStaticSlotRegistry::Get();
  FVar3 = `public:_virtual_void___cdecl_FDynamicBatchedPrimitiveLayout::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
          ::__l2::BatchedPrimitiveSlotName;
  iVar5 = (pFVar7->SlotNames).ArrayNum;
  pFVar8 = this_00;
  if (0 < iVar5) {
    do {
      uVar10 = (uint)pFVar8;
      uVar6 = 0;
      if ((int)uVar10 < iVar5) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(FName *)((pFVar7->SlotNames).AllocatorInstance.Data + (longlong)(int)uVar10 * 8) ==
          FVar3) goto LAB_144ed25f2;
      iVar5 = (pFVar7->SlotNames).ArrayNum;
      pFVar8 = (FRHIUniformBufferLayout *)(ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < iVar5);
  }
  pFVar8 = (FRHIUniformBufferLayout *)0xff;
LAB_144ed25f2:
  local_40 = CONCAT13(3,CONCAT12((char)pFVar8,(undefined2)local_40));
  FRHIUniformBufferLayoutInitializer::ComputeHash
            ((FRHIUniformBufferLayoutInitializer *)&local_b8.Frozen);
  if (((int)local_a0 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TVar9 = local_a8;
  if ((local_a8.Packed & 1) != 0) {
    TVar9.UnfrozenPtr =
         (FScriptContainerElement *)((longlong)&local_a8 + ((longlong)local_a8.Packed >> 0x18));
  }
  *(undefined1 *)(TVar9.Packed + 2) = 6;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
                    ::__l2::LLMScope_Name1227,L"RHIMisc/CreateUniformBufferLayout");
    _Init_thread_footer(&`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
             ::__l2::LLMScope_Name1227,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`class_TRefCountPtr<FRHIUniformBufferLayout_const_>___cdecl_RHICreateUniformBufferLayout(FRHIUniformBufferLayoutInitializer_const&___ptr64)'
              ::__l2::LLMScope_Name1227,true);
  pFVar8 = ::operator_new(0x98);
  if ((pFVar8 != (FRHIUniformBufferLayout *)0x0) &&
     (this_00 = FRHIUniformBufferLayout::FRHIUniformBufferLayout
                          (pFVar8,(FRHIUniformBufferLayoutInitializer *)&local_b8.Frozen),
     this_00 != (FRHIUniformBufferLayout *)0x0)) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pTVar1 = &this->LayoutRHI;
  if (pTVar1 != (TRefCountPtr<FRHIUniformBufferLayout_const_> *)local_38) {
    pFVar8 = pTVar1->Reference;
    pTVar1->Reference = this_00;
    this_00 = pFVar8;
  }
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_58.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_68.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_78.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_88.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_98.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_a8.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_b8.Frozen);
  return;
}

// ReleaseRHI @ 144ed27b0

void __thiscall FDynamicBatchedPrimitiveLayout::ReleaseRHI(FDynamicBatchedPrimitiveLayout *this)

{
  FRHIUniformBufferLayout *this_00;
  
  this_00 = (this->LayoutRHI).Reference;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    (this->LayoutRHI).Reference = (FRHIUniformBufferLayout *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

