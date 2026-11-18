// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 5

// Get @ 1494ced40

FComputeKernelResource * __thiscall
UComputeGraph::FComputeKernelResourceSet::Get(FComputeKernelResourceSet *this)

{
  return (this->KernelResource).Ptr;
}

// GetOrCreate @ 1494cfe40

FComputeKernelResource * __thiscall
UComputeGraph::FComputeKernelResourceSet::GetOrCreate(FComputeKernelResourceSet *this)

{
  FComputeKernelResource *pFVar1;
  FComputeKernelResource *pFVar2;
  FComputeKernelResourceSet local_18 [2];
  
  if ((this->KernelResource).Ptr != (FComputeKernelResource *)0x0) {
    return (this->KernelResource).Ptr;
  }
  pFVar2 = ::operator_new(0x1a0);
  if (pFVar2 == (FComputeKernelResource *)0x0) {
    pFVar2 = (FComputeKernelResource *)0x0;
  }
  else {
    pFVar2 = FComputeKernelResource::FComputeKernelResource(pFVar2);
  }
  if (this == local_18) {
    if (pFVar2 != (FComputeKernelResource *)0x0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return (this->KernelResource).Ptr;
    }
  }
  else {
    pFVar1 = (this->KernelResource).Ptr;
    (this->KernelResource).Ptr = pFVar2;
    if (pFVar1 == (FComputeKernelResource *)0x0) {
      return pFVar2;
    }
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  return (this->KernelResource).Ptr;
}

// ProcessSerializedShaderMaps @ 1494d4fd0

void __thiscall
UComputeGraph::FComputeKernelResourceSet::ProcessSerializedShaderMaps
          (FComputeKernelResourceSet *this)

{
  return;
}

// Reset @ 1494d6890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UComputeGraph::FComputeKernelResourceSet::Reset(FComputeKernelResourceSet *this)

{
  FComputeKernelResource *pFVar1;
  FComputeKernelShaderMap *this_00;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FComputeKernelResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FComputeKernelResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar1 = (this->KernelResource).Ptr;
  if (pFVar1 != (FComputeKernelResource *)0x0) {
    this_00 = (pFVar1->GameThreadShaderMap).Reference;
    if (this_00 != (FComputeKernelShaderMap *)0x0) {
      (pFVar1->GameThreadShaderMap).Reference = (FComputeKernelShaderMap *)0x0;
      FComputeKernelShaderMap::Release(this_00);
      local_60 = (undefined ***)0x0;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FComputeKernelResource::ReleaseShaderMap'::`5'::<lambda_1>,1,0>
                  ::_vftable_;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FComputeKernelResource::ReleaseShaderMap'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      pFStack_70 = pFVar1;
      this_01 = FRenderCommandList::GetInstanceTLS();
      if (this_01 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FComputeKernelResource::ReleaseShaderMap_::__l5::TSTR_ReleaseShaderMap171>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
      }
      else {
        this_02 = FRenderCommandList::GetRenderThread(this_01);
        local_58._0_8_ = local_88[0];
        local_30 = local_60;
        local_48 = local_78;
        pFStack_40 = pFStack_70;
        local_38 = local_68;
        local_88[0] = (code *)0x0;
        local_28 = 2;
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`FComputeKernelResource::ReleaseShaderMap'::__l5::TSTR_ReleaseShaderMap171>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar4);
        uVar6 = (ulonglong)local_28;
        if (2 < uVar6) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            pppuVar5 = (undefined ***)(local_58 + 0x10);
            if (local_30 != (undefined ***)0x0) {
              pppuVar5 = local_30;
            }
            (*(code *)(*pppuVar5)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar5 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar5 = local_60;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    pFVar1 = (this->KernelResource).Ptr;
    (this->KernelResource).Ptr = (FComputeKernelResource *)0x0;
    if (pFVar1 != (FComputeKernelResource *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  }
  return;
}

// Serialize @ 1494d6cd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UComputeGraph::FComputeKernelResourceSet::Serialize
          (FComputeKernelResourceSet *this,FArchive *param_1)

{
  longlong *plVar1;
  FComputeKernelShaderMap *pFVar2;
  FComputeKernelResource *pFVar3;
  EShaderPlatform EVar4;
  FComputeKernelResource *pFVar5;
  undefined8 *puVar6;
  int iVar7;
  uint local_res10 [2];
  FComputeKernelResourceSet local_18 [2];
  
  if ((param_1->field_0x28 & 1) != 0) {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res10[0] = 0;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    iVar7 = 0;
    if (0 < (int)local_res10[0]) {
      do {
        pFVar5 = ::operator_new(0x1a0);
        if (pFVar5 == (FComputeKernelResource *)0x0) {
          pFVar5 = (FComputeKernelResource *)0x0;
        }
        else {
          pFVar5 = FComputeKernelResource::FComputeKernelResource(pFVar5);
        }
        FComputeKernelResource::SerializeShaderMap(pFVar5,param_1);
        pFVar2 = (pFVar5->GameThreadShaderMap).Reference;
        if (((pFVar2 == (FComputeKernelShaderMap *)0x0) ||
            (EVar4 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)pFVar2->_padding_),
            GMaxRHIShaderPlatform != EVar4)) || (this == local_18)) {
          if (pFVar5 != (FComputeKernelResource *)0x0) {
            puVar6 = (undefined8 *)pFVar5->_padding_;
            goto LAB_1494d6db9;
          }
        }
        else {
          pFVar3 = (this->KernelResource).Ptr;
          (this->KernelResource).Ptr = pFVar5;
          if (pFVar3 != (FComputeKernelResource *)0x0) {
            puVar6 = (undefined8 *)pFVar3->_padding_;
            pFVar5 = pFVar3;
LAB_1494d6db9:
            (*(code *)*puVar6)(pFVar5,1);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)local_res10[0]);
    }
  }
  return;
}

