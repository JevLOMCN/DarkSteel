// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FStaticMeshSectionAreaWeightedTriangleSamplerBuffer @ 148712060

FStaticMeshSectionAreaWeightedTriangleSamplerBuffer * __thiscall
FStaticMeshSectionAreaWeightedTriangleSamplerBuffer::
FStaticMeshSectionAreaWeightedTriangleSamplerBuffer
          (FStaticMeshSectionAreaWeightedTriangleSamplerBuffer *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FStaticMeshSectionAreaWeightedTriangleSamplerBuffer__6B_;
  (this->BufferSectionTriangleRHI).Reference = (FRHIBuffer *)0x0;
  (this->BufferSectionTriangleSRV).Reference = (FRHIShaderResourceView *)0x0;
  this->Samplers =
       (TArray<FStaticMeshSectionAreaWeightedTriangleSampler,TMemoryImageAllocator<0>_> *)0x0;
  return this;
}

// ~FStaticMeshSectionAreaWeightedTriangleSamplerBuffer @ 1487147b0

void __thiscall
FStaticMeshSectionAreaWeightedTriangleSamplerBuffer::
~FStaticMeshSectionAreaWeightedTriangleSamplerBuffer
          (FStaticMeshSectionAreaWeightedTriangleSamplerBuffer *this)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this->_padding_ = (longlong)&___7FStaticMeshSectionAreaWeightedTriangleSamplerBuffer__6B_;
  this_00 = (this->BufferSectionTriangleSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->BufferSectionTriangleRHI).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// GetFriendlyName @ 14873c1e0

FString * __thiscall
FStaticMeshSectionAreaWeightedTriangleSamplerBuffer::GetFriendlyName
          (FStaticMeshSectionAreaWeightedTriangleSamplerBuffer *this,FString *__return_storage_ptr__
          )

{
  ::FString::FString(__return_storage_ptr__,L"FStaticMeshSectionAreaWeightedTriangleSamplerBuffer");
  return __return_storage_ptr__;
}

// InitRHI @ 148746040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148746306) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffeb8 : 0x00014874630a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshSectionAreaWeightedTriangleSamplerBuffer::InitRHI
          (FStaticMeshSectionAreaWeightedTriangleSamplerBuffer *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  ERHIPipeline EVar3;
  int iVar4;
  TArray<FStaticMeshSectionAreaWeightedTriangleSampler,TMemoryImageAllocator<0>_> *pTVar5;
  FRHIBuffer *pFVar6;
  FRHIShaderResourceView *this_00;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  TRefCountPtr<FRHIBuffer> TVar12;
  ForAnyElementType FVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStackY_218 [32];
  uint local_1e8;
  FLLMScope local_1e4;
  TRefCountPtr<FRHIShaderResourceView> local_1e0;
  uint local_1d8;
  uint local_1d4;
  FStaticMeshSectionAreaWeightedTriangleSamplerBuffer *local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  uint local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  int iStack_1b4;
  wchar_t *local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 local_190;
  FRHICommandListBase *local_188;
  FRHIResource *local_180;
  FMemScope local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  ulonglong local_128;
  undefined8 uStack_120;
  wchar_t *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  longlong *plStack_c0;
  FRHICommandListBase *local_b8;
  FRHIBuffer *pFStack_b0;
  void *local_a8;
  ulong64 local_a0;
  undefined1 local_98 [48];
  FRHICommandListBase *local_68;
  FRHIBuffer *local_60;
  void *local_58;
  ulong64 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1d0 = this;
  local_188 = param_1;
  (**(code **)(this->_padding_ + 0x10))();
  if (this->Samplers ==
      (TArray<FStaticMeshSectionAreaWeightedTriangleSampler,TMemoryImageAllocator<0>_> *)0x0) {
    return;
  }
  uVar16 = this->Samplers->ArrayNum;
  if ((int)uVar16 < 1) {
    return;
  }
  uVar15 = 0;
  iVar17 = 0;
  local_1d4 = uVar16;
  if (uVar16 != 0) {
    do {
      pTVar5 = this->Samplers;
      uVar10 = 0;
      if ((int)uVar15 < pTVar5->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar13 = pTVar5->AllocatorInstance;
      if (((ulonglong)FVar13 & 1) != 0) {
        FVar13 = (ForAnyElementType)
                 ((longlong)&(pTVar5->AllocatorInstance).field_0x0 + ((longlong)FVar13 >> 0x18));
      }
      lVar11 = (longlong)(int)uVar15;
      uVar15 = uVar15 + 1;
      iVar17 = iVar17 + *(int *)(lVar11 * 0x40 + 0x10 + (longlong)FVar13);
      this = local_1d0;
    } while (uVar15 < uVar16);
  }
  local_1c0 = iVar17 * 8;
  iStack_1b4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_1bc = 0;
  local_1b0 = L"StaticMeshSectionAreaWeightedTriangleSamplerBuffer";
  EVar3 = param_1->ActivePipelines;
  uStack_1b8 = 0x4101;
  uStack_1a8 = 0;
  uStack_198 = 0;
  local_1a0 = 0x78;
  uStack_19c = 3;
  local_190 = 0;
  local_128 = (ulonglong)local_1c0;
  uStack_120 = CONCAT44(iStack_1b4,0x4101);
  local_108 = 0x300000078;
  local_118 = L"StaticMeshSectionAreaWeightedTriangleSamplerBuffer";
  uStack_110 = 0;
  local_f8 = 0;
  uStack_100 = 0;
  if (((EVar3 != None) && ((EVar3 & EVar3 - Graphics) != None)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (param_1->ActivePipelines == None) {
    FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))();
    FRHICommandListBase::SwitchPipeline(param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,&local_e8);
  }
  uVar8 = uStack_e0;
  local_98._0_8_ = local_e8;
  local_98._40_8_ = plStack_c0;
  if (local_e8 != 0) {
    local_e8 = 0;
  }
  local_158 = local_e8;
  local_68 = local_b8;
  local_60 = pFStack_b0;
  local_58 = local_a8;
  local_50 = local_a0;
  local_e8 = 0;
  uStack_e0 = uStack_150;
  local_d8 = (undefined4)local_148;
  uStack_d4 = local_148._4_4_;
  uStack_d0 = uStack_140;
  uStack_cc = uStack_13c;
  local_c8 = local_138;
  uStack_c4 = uStack_134;
  plStack_c0 = (longlong *)0x0;
  uStack_150 = uVar8;
  uStack_130 = 0;
  if (local_158 != 0) {
    (**(code **)(local_148 + 0x10))();
  }
  local_b8 = (FRHICommandListBase *)0x0;
  pFStack_b0 = (FRHIBuffer *)0x0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  if (local_e8 != 0) {
    plVar14 = (longlong *)&local_d8;
    if (plStack_c0 != (longlong *)0x0) {
      plVar14 = plStack_c0;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  local_1e8 = 0;
  if (uVar16 != 0) {
    do {
      pTVar5 = this->Samplers;
      uVar16 = 0;
      if ((int)local_1e8 < pTVar5->ArrayNum) {
        uVar16 = ~local_1e8 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar13 = pTVar5->AllocatorInstance;
      if (((ulonglong)FVar13 & 1) != 0) {
        FVar13 = (ForAnyElementType)
                 ((longlong)&(pTVar5->AllocatorInstance).field_0x0 + ((longlong)FVar13 >> 0x18));
      }
      lVar11 = (longlong)(int)local_1e8 * 0x40 + (longlong)FVar13;
      uVar19 = *(ulonglong *)(lVar11 + 8);
      if ((uVar19 & 1) != 0) {
        uVar19 = ((longlong)uVar19 >> 0x18) + 8 + lVar11;
      }
      iVar17 = *(int *)(lVar11 + 0x10);
      if ((iVar17 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar18 = *(ulonglong *)(lVar11 + 0x18);
      if ((uVar18 & 1) != 0) {
        uVar18 = ((longlong)uVar18 >> 0x18) + 0x18 + lVar11;
      }
      iVar4 = *(int *)(lVar11 + 0x20);
      if ((iVar4 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_1d8 = *(uint *)(lVar11 + 0x10);
      uVar16 = 0;
      if (local_1d8 != 0) {
        do {
          uVar15 = 0;
          if ((int)uVar16 < iVar17) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar11 = (longlong)(int)uVar16;
          uVar15 = 0;
          if ((int)uVar16 < iVar4) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          local_1c8 = *(undefined4 *)(uVar19 + lVar11 * 4);
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uStack_1c4 = *(undefined4 *)(uVar18 + lVar11 * 4);
          uVar16 = uVar16 + 1;
          *(ulonglong *)((longlong)local_58 + lVar11 * 8) = CONCAT44(uStack_1c4,local_1c8);
          this = local_1d0;
        } while (uVar16 < local_1d8);
      }
      local_1e8 = local_1e8 + 1;
      param_1 = local_188;
    } while (local_1e8 < local_1d4);
  }
  TVar12 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_98);
  pTVar1 = &this->BufferSectionTriangleRHI;
  if ((FRHIBuffer *)pTVar1 != TVar12.Reference) {
    pFVar6 = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)(TVar12.Reference)->_padding_;
    (TVar12.Reference)->_padding_ = 0;
    if (pFVar6 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar6);
    }
  }
  if (local_180 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_180);
  }
  pFVar6 = pTVar1->Reference;
  uStack_168 = 0;
  local_170 = 0x14400;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
    _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (&local_1e4,
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name977,false,None,Default,true);
  FMemScope::FMemScope
            (&local_178,
             &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name977,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_1e0,param_1,pFVar6);
  FMemScope::~FMemScope(&local_178);
  FLLMScope::~FLLMScope(&local_1e4);
  pTVar2 = &this->BufferSectionTriangleSRV;
  if (pTVar2 != &local_1e0) {
    this_00 = pTVar2->Reference;
    pTVar2->Reference = local_1e0.Reference;
    local_1e0.Reference = (FRHIShaderResourceView *)0x0;
    if (this_00 == (FRHIShaderResourceView *)0x0) goto LAB_148746694;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (local_1e0.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1e0.Reference);
  }
LAB_148746694:
  if ((local_68 != (FRHICommandListBase *)0x0) && (local_60 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_98);
  }
  if (local_98._0_8_ != 0) {
    plVar14 = (longlong *)(local_98 + 0x10);
    if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_98._40_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return;
}

// ReleaseRHI @ 148751e50

void __thiscall
FStaticMeshSectionAreaWeightedTriangleSamplerBuffer::ReleaseRHI
          (FStaticMeshSectionAreaWeightedTriangleSamplerBuffer *this)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this_00 = (this->BufferSectionTriangleSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->BufferSectionTriangleSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->BufferSectionTriangleRHI).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    (this->BufferSectionTriangleRHI).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

