// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// operator() @ 145df4270

void __thiscall
`FBatchedReleaseResources::Flush'::__l5::<lambda_1>::operator()(void *this,FRHICommandList *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  piVar1 = (int *)((longlong)this + 0x88);
  iVar3 = *piVar1;
  if (*(longlong **)((longlong)this + 0x80) != (longlong *)0x0) {
    this = *(longlong **)((longlong)this + 0x80);
  }
  plVar2 = (longlong *)((longlong)this + (longlong)iVar3 * 8);
  while( true ) {
    if (*piVar1 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRenderResource_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this == plVar2) break;
    plVar4 = *(longlong **)this;
    if ((*(char *)((longlong)plVar4 + 0x1e) != '\x01') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource->ResourceState == ERenderResourceState::BatchReleased",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderResource.cpp"
                           ,0x148,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(*plVar4 + 0x20))(plVar4);
    this = (void *)((longlong)this + 8);
    *(undefined1 *)((longlong)plVar4 + 0x1e) = 0;
  }
  return;
}

// Flush @ 145e0a7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBatchedReleaseResources::Flush(FBatchedReleaseResources *this)

{
  int iVar1;
  int iVar2;
  ForElementType<FRenderResource_*> FVar3;
  FRenderCommandList *this_00;
  code *pcVar4;
  bool bVar5;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  ulonglong uVar8;
  undefined1 auStack_1d8 [32];
  code *local_1b8;
  code *pcStack_1b0;
  code *local_1a8;
  code *pcStack_1a0;
  code *local_198;
  code *pcStack_190;
  code *local_188;
  code *pcStack_180;
  code *local_178;
  code *pcStack_170;
  code *local_168;
  code *pcStack_160;
  code *local_158;
  code *pcStack_150;
  code *local_148;
  code *pcStack_140;
  code *local_138;
  code *pcStack_130;
  code *local_128;
  code *pcStack_120;
  code *local_118;
  code *pcStack_110;
  code *local_108;
  code *pcStack_100;
  code *local_f8;
  code *pcStack_f0;
  code *local_e8;
  code *pcStack_e0;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code *pcStack_c0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  iVar1 = (this->Resources).ArrayNum;
  if (iVar1 != 0) {
    FVar3 = (this->Resources).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<FRenderResource_*>)0x0) {
      local_138 = *(code **)(this->Resources).AllocatorInstance.InlineData;
      pcStack_130 = *(code **)((this->Resources).AllocatorInstance.InlineData + 8);
      local_128 = *(code **)((this->Resources).AllocatorInstance.InlineData + 0x10);
      pcStack_120 = *(code **)((this->Resources).AllocatorInstance.InlineData + 0x18);
      local_118 = *(code **)((this->Resources).AllocatorInstance.InlineData + 0x20);
      pcStack_110 = *(code **)((this->Resources).AllocatorInstance.InlineData + 0x28);
      local_108 = *(code **)((this->Resources).AllocatorInstance.InlineData + 0x30);
      pcStack_100 = *(code **)((this->Resources).AllocatorInstance.InlineData + 0x38);
      local_f8 = *(code **)((this->Resources).AllocatorInstance.InlineData + 0x40);
      pcStack_f0 = *(code **)((this->Resources).AllocatorInstance.InlineData + 0x48);
      local_e8 = *(code **)((this->Resources).AllocatorInstance.InlineData + 0x50);
      pcStack_e0 = *(code **)((this->Resources).AllocatorInstance.InlineData + 0x58);
      local_d8 = *(code **)((this->Resources).AllocatorInstance.InlineData + 0x60);
      pcStack_d0 = *(code **)((this->Resources).AllocatorInstance.InlineData + 0x68);
      local_c8 = *(code **)((this->Resources).AllocatorInstance.InlineData + 0x70);
      pcStack_c0 = *(code **)((this->Resources).AllocatorInstance.InlineData + 0x78);
    }
    (this->Resources).AllocatorInstance.SecondaryData = (ForElementType<FRenderResource_*>)0x0;
    iVar2 = (this->Resources).ArrayMax;
    (this->Resources).ArrayMax = 0x10;
    (this->Resources).ArrayNum = 0;
    local_a8[0] = (code *)0x0;
    local_1b8 = local_138;
    pcStack_1b0 = pcStack_130;
    local_1a8 = local_128;
    pcStack_1a0 = pcStack_120;
    local_198 = local_118;
    pcStack_190 = pcStack_110;
    local_188 = local_108;
    pcStack_180 = pcStack_100;
    local_178 = local_f8;
    pcStack_170 = pcStack_f0;
    local_168 = local_e8;
    pcStack_160 = pcStack_e0;
    local_158 = local_d8;
    pcStack_150 = pcStack_d0;
    local_148 = local_c8;
    pcStack_140 = pcStack_c0;
    local_80 = FMemory::Malloc(0x98,8);
    *local_80 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__4__Flush_FBatchedReleaseResources__QEAAXXZ__00_00_Function_Private_Core_UE__6B_
    ;
    local_80[0x11] = (code *)0x0;
    if (FVar3 == (ForElementType<FRenderResource_*>)0x0) {
      local_80[1] = local_1b8;
      local_80[2] = pcStack_1b0;
      local_80[3] = local_1a8;
      local_80[4] = pcStack_1a0;
      local_80[5] = local_198;
      local_80[6] = pcStack_190;
      local_80[7] = local_188;
      local_80[8] = pcStack_180;
      local_80[9] = local_178;
      local_80[10] = pcStack_170;
      local_80[0xb] = local_168;
      local_80[0xc] = pcStack_160;
      local_80[0xd] = local_158;
      local_80[0xe] = pcStack_150;
      local_80[0xf] = local_148;
      local_80[0x10] = pcStack_140;
    }
    *(ForElementType<FRenderResource_*> *)(local_80 + 0x11) = FVar3;
    *(int *)((longlong)local_80 + 0x94) = iVar2;
    *(int *)(local_80 + 0x12) = iVar1;
    if (local_80 + 1 != (code **)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FBatchedReleaseResources::Flush'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = *(FRenderCommandList **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xed0);
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FBatchedReleaseResources::Flush_::__l5::TSTR_BatchReleaseCommand323>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_78._16_8_ = local_98[0];
      local_78._24_8_ = local_98[1];
      local_78._32_8_ = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`FBatchedReleaseResources::Flush'::__l5::TSTR_BatchReleaseCommand323>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar6);
      uVar8 = (ulonglong)local_48;
      if ((2 < uVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar7 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar7 = local_50;
          }
          (**(code **)(*ppcVar7 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar7 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar7 = local_80;
      }
      (**(code **)(*ppcVar7 + 0x10))();
    }
  }
  return;
}

